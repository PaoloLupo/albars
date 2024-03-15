use std::ptr::null_mut;
use winapi::um::winnt::HRESULT;
use crate::bindings::{
    cSapModel,
    eUnits,
    cPropMaterial,
};
use winapi::shared::winerror::S_OK;
use winapi::Interface;
use crate::helpers::ComPtr;
use paste::paste;

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
macro_rules! create_prop_binding {
    ($name:expr) => {
        paste! {
            let mut [<$name:snake>] : *mut [<c $name>] = std::ptr::null_mut();
            let hr: HRESULT = unsafe {self.sap_model.[<get_$name>](&mut [<$name:snake>] as *mut *mut [<c$name>])}
            self.[<$name:snake>] = hresult_to_comptr(hr, [<$name:snake>] ).unwrap()
        }
    };
}
pub struct Model {
    pub sap_model: Option<ComPtr<cSapModel>>,
    pub units: i32,
    prop_material: Option<ComPtr<cPropMaterial>>,
}

impl Model {
    fn new(&mut self)-> self {

        create_prop_binding!("PropMaterial");
    }

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


    pub fn get_material_name_list(&self) -> Option<Vec<String>> {
        self.prop_material.GetNameList()


    }




}