use crate::helpers::{bstr, ComPtr};
use crate::bindings::{
    cCaseStaticNonlinear, cSapModel, eMatType, eUnits
};
use paste::paste;
use std::vec::IntoIter;
use winapi::Interface;
use winapi::shared::winerror::S_OK;
use winapi::shared::wtypes::{BSTR, VARTYPE, VT_BSTR, VT_BYREF};
use winapi::um::oaidl::SAFEARRAY;
use winapi::um::winnt::{FILE_LIST_DIRECTORY, HRESULT, LONG, PVOID};
use winapi::um::oleauto::{SafeArrayCreateVector, SafeArrayDestroy};

use winapi::ctypes::c_void;
use crate::safearray::SafeArray;


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
            pub fn new(sap_model: ComPtr<cSapModel>, units: i32) -> Self {
                Self {
                    sap_model,
                    units: units,
                    $(
                    [<$name:snake>] : None,
                    )*
                }
            }
            pub fn get_interface(&mut self) {
            $(
                let mut [<$name:snake>] : *mut crate::bindings::[<c $name>] = std::ptr::null_mut();
                let hr: HRESULT = unsafe {self.sap_model.[<get_$name>](&mut [<$name:snake>] as *mut *mut crate::bindings::[<c$name>])};
                self.[<$name:snake>] = hresult_to_comptr(hr, [<$name:snake>]);
            )*
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

    pub fn get_material_name_list(self, material_type: u32) -> Option<Vec<String>> {
        unsafe {
            let mut count_materials: i32 = 0;

            let material_type = material_type as eMatType;
            let mut ret_val: i32 = 0;
            let  safe_array: *mut SAFEARRAY = std::ptr::null_mut();
                
    
            if let Some(prop_material) = self.prop_material {
                prop_material.GetNameList(&mut count_materials, safe_array, material_type, &mut ret_val);
            } else {
                return None;
            }
    
            if ret_val != 0 {
                return None
            }

            let array = SafeArray { psa: safe_array };
            SafeArrayDestroy(array.psa);

            Some(array.to_string_vector().unwrap())

        }
    }

    pub fn add_isotropic_material(self, name: &str, mod_elasticity: f64, poisson_ratio: f64, thermal_coeff: f64) -> Option<()> {
        let mut ret_val: i32 = 0;

        unsafe {
            let name = bstr(name);
            self.prop_material.unwrap().SetMPIsotropic(name, mod_elasticity, poisson_ratio, thermal_coeff, 0.0, &mut ret_val);
        }
        
        result_to_option(ret_val)
    }

    pub fn count_materials_from_type(self, material_type: u32) -> Option<i32> {
        let mut count_materials: i32 = 0;
        let material_type = material_type as eMatType;
        let hr = unsafe {self.prop_material.unwrap().Count(material_type, &mut count_materials)};
        if hr != 0 {
            return None
        }
        Some(count_materials)
    }

}
