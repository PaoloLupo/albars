use winapi::um::winnt::HRESULT;
use crate::bindings::{
    cSapModel,
    eUnits,
    eMatType,
};
use winapi::shared::winerror::{S_FALSE, S_OK};
use winapi::Interface;
use crate::helpers::ComPtr;
use paste::paste;
use winapi::shared::wtypes::VARTYPE;
use winapi::um::oaidl::SAFEARRAY;
use winapi::um::oleauto::SafeArrayAccessData;

fn hresult_to_comptr<T: Interface >(hr: HRESULT, ptr: *mut T) -> Option<ComPtr<T>> {
    match hr {
        S_OK => Some(unsafe {ComPtr::from_raw(ptr)}),
        _ => None,
    }
}

fn result_to_option(res: i32) -> Option<()> {
    match res {
        0 => Some(()),
        _ => None,
    }
}

unsafe fn safe_array_to_slice<T>(safe_array: *mut SAFEARRAY) -> Option<Vec<T>> {
    let mut var_type: VARTYPE = 0;
    let hr = SafeArrayAccessData()

}
macro_rules! create_prop_binding {
    ($($name:expr),*) => {
        paste! {
        pub struct Model {
            pub sap_model: ComPtr<cSapModel>,
            pub units: i32,
            $(
            pub [<$name:snake>] : Option<ComPtr<crate::bindings::[<c $name>]>>,
            )*
        }
        impl Model {
            fn new(&mut self, sap_model: ComPtr<cSapModel>, units: i32) -> Self {
            $(
                let mut [<$name:snake>] : *mut crate::bindings::[<c $name>] = std::ptr::null_mut();
                let hr: HRESULT = unsafe {self.sap_model.[<get_$name>](&mut [<$name:snake>] as *mut *mut crate::bindings::[<c$name>])};
            )*
                Self {
                    sap_model: sap_model,
                    units: units,
                    $(
                    [<$name:snake>] : hresult_to_comptr(hr, [<$name:snake>] ),
                    )*
                }
            }
            }
        }
        }
    }

create_prop_binding!("PropMaterial", "AreaElm");

impl Model {

    /// Cambio de unidades enviadas al API
    ///
    /// **Nota**: Solo es de uso para el api, las unidades en el modelo se mantienen intactos
    ///
    /// ## Argumentos
    /// - `model` : Modelo de etabs
    /// - `unit` : Unidad a la que se quiere cambiar el modelo
    ///
    ///
    /// Según la documentación de etabs, `unit` puede tomar uno de estos valores:
    ///
    /// | Unidad       |Valor|
    /// |--------------|----|
    /// | lb_in_F      | 1  |
    /// | lb_ft_F      | 2  |
    /// | kip_in_F     | 3  |
    /// | kip_ft_F     | 4  |
    /// | kN_mm_C      | 5  |
    /// | kN_m_C       | 6  |
    /// | kgf_mm_C     | 7  |
    /// | kgf_m_C      | 8  |
    /// | N_mm_C       | 9  |
    /// | N_m_C        | 10 |
    /// | Ton_mm_C     | 11 |
    /// | Ton_m_C      | 12 |
    /// | kN_cm_C      | 13 |
    /// | kgf_cm_C     | 14 |
    /// | N_cm_C       | 15 |
    /// | Ton_cm_C     | 16 |
    ///
    pub fn set_present_units(&self) -> Option<()> {
        let unit: eUnits = self.units as eUnits;
        let mut ret_val: i32 = 0;
        unsafe {self.sap_model.SetPresentUnits(unit, &mut ret_val)};
        result_to_option(ret_val)
    }

    pub fn change_unit(&mut self, new_unit: i32) {
        self.units = new_unit;
        self.set_present_units();
    }

    /// Inicialización de un nuevo modelo
    ///
    pub fn initialize_new_model(&self) -> Option<()> {
        let unit: eUnits = self.units as eUnits;
        let mut ret_val: i32 = 0;
        unsafe {self.sap_model.InitializeNewModel(unit, &mut ret_val)};
        result_to_option(ret_val)
    }


    pub fn get_material_name_list(&self, material_type: u32) -> Option<Vec<String>> {
        let mut count_materials: i32 = 0;
        let mut list_materials: Vec<String> = vec![];
        let material_type = material_type as eMatType;
        let mut ret_val: i32 = 0;
        let array : SAFEARRAY = std::ptr::null_mut();
        unsafe {self.prop_material.unwrap().GetNameList(/* *mut i32 */, /* *mut SAFEARRAY */, /* u32 */, /* *mut i32 */)}
        result_to_option(ret_val);
    }

}
// create tests

#[cfg(test)]
mod tests {
    use super::*;
    use crate::helpers::ComPtr;
    use crate::bindings::cSapModel;
    use crate::instances::get_etabs_instances;

    #[test]
    fn test_get_etabs_instances() {
        let instances = get_etabs_instances();
        assert_eq!(instances.unwrap().len(), 1);
    }
}
