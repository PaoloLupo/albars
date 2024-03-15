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
use winapi::um::oleauto::{SafeArrayCreateVector};

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

// unsafe fn safe_array_to_vec<T: SafeArrayElement>(safe_array: *mut SAFEARRAY) -> Option<Vec<T::Element>> {
//     let mut vec: Vec<T::Element> = vec![];
//     let mut lower_bound: i32 = 0;
//     let mut upper_bound: i32 = 0;
//     let mut hr: HRESULT = 0;
//     let mut data: *mut T::Element = std::ptr::null_mut();
//     hr = SafeArrayGetLBound(safe_array, 1, &mut lower_bound);
//     if hr != 0 {
//         return None;
//     }
//     hr = SafeArrayGetUBound(safe_array, 1, &mut upper_bound);
//     if hr != 0 {
//         return None;
//     }
//     let data_ptr: *mut *mut c_void = &mut data as *mut *mut T::Element as *mut *mut c_void;
//     hr = SafeArrayAccessData(safe_array, data_ptr);
//     if hr != 0 {
//         return None;
//     }
//     for i in lower_bound..=upper_bound {
//         vec.push(*data.offset(i as isize));
//     }
//     SafeArrayUnaccessData(safe_array);
//     Some(vec)

// }

macro_rules! create_prop_binding {
    ($($name:expr),*) => {
        paste! {
        pub struct Model {
            pub sap_model: ComPtr<cSapModel>,
            pub units: i32,
            $(
            pub [<$name:snake>] : ComPtr<crate::bindings::[<c $name>]>,
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
            let mut safe_array = SafeArray::new( VT_BSTR as u16, 0,1).unwrap();
            let safe_array_ref: *mut SAFEARRAY = safe_array.psa;
                
            if safe_array_ref.is_null() {
                return None;
            }
    
            if let Some(prop_material) = self.prop_material {
                prop_material.GetNameList(&mut count_materials, safe_array_ref, material_type , &mut ret_val);
            } else {
                return None;
            }
    
            if ret_val != 0 {
                return None
            }
    
            Some(safe_array.to_string_vector().unwrap())

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
        let mut ret_val: i32 = 0;
        unsafe {self.prop_material.unwrap().Count(material_type, &mut ret_val)};

        if ret_val != 0 {
            return None
        }
        Some(count_materials)
    }


    // pub fn get_material_name_list(&self, material_type: u32) -> Option<Vec<String>> {
    //     let mut count_materials: i32 = 0;
    //     let mut safe_array: *mut SAFEARRAY = std::ptr::null_mut();
    //     let mut list_materials: Vec<String> = vec![];
    //     let material_type = material_type as eMatType;
    //     let mut ret_val: i32 = 0;

    //     unsafe {self.prop_material.unwrap().GetNameList(&mut count_materials, safe_array, material_type, &mut ret_val);}
    //     if ret_val != 0 {
    //         return None
    //     }

    // }

}
