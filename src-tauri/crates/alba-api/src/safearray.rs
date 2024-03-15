use winapi::shared::winerror::NOERROR;
use winapi::shared::wtypes::{VT_BSTR, VT_EMPTY};
use winapi::um::oaidl::SAFEARRAY;
use winapi::um::oleauto::{SafeArrayCreateVector, SafeArrayDestroy, SafeArrayGetLBound, SafeArrayGetUBound};
use winapi::um::winnt::{HRESULT, LONG, PVOID};
use winapi::shared::wtypes::VARTYPE;
use widestring::U16CString;

pub struct SafeArray {
    pub psa: *mut SAFEARRAY,
}

extern "system" {
    /*pub fn SafeArrayCreate(
        vt: VARTYPE,
        cDims: UINT,
        rgsabound: *mut SAFEARRAYBOUND

    ) -> *mut SAFEARRAY;*/
    /// https://docs.microsoft.com/en-us/windows/win32/api/oleauto/nf-oleauto-safearraygetelement
    pub fn SafeArrayGetElement(psa: *mut SAFEARRAY, rgIndices: *const LONG, pv: PVOID) -> HRESULT;
    /// https://docs.microsoft.com/en-us/windows/win32/api/oleauto/nf-oleauto-safearraygetvartype
    pub fn SafeArrayGetVartype(psa: *mut SAFEARRAY, pvt: *const VARTYPE) -> HRESULT;
    /// https://docs.microsoft.com/en-us/windows/win32/api/oleauto/nf-oleauto-safearrayputelement
    pub fn SafeArrayPutElement(psa: *mut SAFEARRAY, rgIndices: *const LONG, pv: PVOID) -> HRESULT;
}


impl SafeArray {
    pub fn new(
        vt: VARTYPE,
        lower_bound: LONG,
        length: u32,
    ) -> Option<SafeArray> {
        let arr = unsafe {
            SafeArrayCreateVector(vt, lower_bound, length)
        };
        if arr.is_null() {
            None
        } else {
            Some(SafeArray { psa: arr })
        }
    }

    pub fn dimensions_count(&self) -> Option<u16> {
        unsafe {
            let r = self.psa.as_ref().unwrap();
            Some(r.cDims)
        }
    }

    pub fn dimension_lower_bound(&self, dimension:u32) -> Option<LONG> {
        unsafe {
            let mut value: LONG = 0;
            match SafeArrayGetLBound(self.psa, dimension, &mut value){
                NOERROR => Some(value),
                _ => None
            }
        }
    }

    pub fn dimension_upper_bound(&self, dimension:u32) -> Option<LONG> {
        unsafe {
            let mut value: LONG = 0;
            match SafeArrayGetUBound(self.psa, dimension, &mut value){
                NOERROR => Some(value),
                _ => None
            }
        }
    }

    pub fn get_vartype(&self) -> Option<VARTYPE> {
        unsafe {
            let mut vt: VARTYPE = VT_EMPTY as u16;
            let vt_ref: *mut VARTYPE = &mut vt;
            match SafeArrayGetVartype(self.psa, vt_ref){
                NOERROR => Some(vt),
                _ => None
            }
        }
    }

    pub fn to_string_vector(&self) -> Option<Vec<String>> 
    {
        let vt = self.get_vartype().unwrap();
        if vt != VT_BSTR as u16 {
            return None;
        }

        if self.dimensions_count().unwrap() != 1 {
            return None;
        }

        let lower_bound = self.dimension_lower_bound(1).unwrap();
        let upper_bound = self.dimension_upper_bound(1).unwrap();
        let mut result_arr = Vec::with_capacity((upper_bound - lower_bound) as usize);
        for i in lower_bound..=upper_bound {
            let mut indices: [i32; 1] = [i];
            let v = unsafe {
                let mut v_ptr = std::ptr::null();
                let v_ptr_ptr: *mut *const u16 = &mut v_ptr;
                match SafeArrayGetElement(self.psa, indices.as_mut_ptr(), v_ptr_ptr as PVOID) {
                    NOERROR => (),
                    _ => return None,
                }
                let u16_str = U16CString::from_ptr_str(v_ptr);
                u16_str.to_string().unwrap()
            };

            result_arr.push(v);
        }
        Some(result_arr)
    }

    pub fn destroy (&mut self) {
        if self.psa.is_null() {
            return ();
        }
        unsafe {
            match SafeArrayDestroy(self.psa){
                NOERROR => {
                    self.psa = std::ptr::null_mut();
                }
                _ => ()
            }
        }
    }
}



