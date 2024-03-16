#![allow(unused)]
use crate::helpers::{ComPtr,bstr, custom_error};
use crate::bindings::{cOAPI, cHelper, cSapModel};
use std::cell::Cell;
use std::io;
use std::ptr::null_mut;
use winapi::Interface;
use winapi::um::combaseapi::{CLSIDFromProgID, CoCreateInstance, CoInitializeEx, CoUninitialize};
use winapi::um::objbase::COINIT_MULTITHREADED;
use winapi::shared::winerror::{S_FALSE, S_OK};
use winapi::shared::guiddef::GUID;
use winapi::shared::wtypesbase::CLSCTX_INPROC_SERVER;

fn initialize_com() -> io::Result<()>{
    thread_local! {
        static COM_INITIALIZED: Cell<bool> = Cell::new(false);
    }

    COM_INITIALIZED.with(|initialize|{
        if !initialize.get() {
            let init = unsafe { CoInitializeEx(null_mut(), COINIT_MULTITHREADED )};
            match init {
                S_OK | S_FALSE => {
                    initialize.set(true);
                    Ok(())
                }
                err => custom_error("Failed to initialize COM", err)
            }
        } else {
            Ok(())
        }
    })
}

pub fn create_api_helper(attach: bool) -> io::Result<(ComPtr<cHelper>, ComPtr<cOAPI>)> {
    unsafe {
        initialize_com()?;
        let mut helper: *mut cHelper = null_mut();
        let mut api: *mut cOAPI = null_mut();
        let helper_name: &str = "ETABSv1.Helper";
        let object_name: &str = "CSI.ETABS.API.ETABSObject";

        let mut clsid: GUID = Default::default();
        let id_helper: *const u16 = bstr(helper_name);

        CLSIDFromProgID(id_helper, &mut clsid);

        let hr = CoCreateInstance(
            &clsid,
            null_mut(),
            CLSCTX_INPROC_SERVER,
            &cHelper::uuidof(),
            &mut helper as *mut _ as *mut _,
        );

        match hr {
            S_OK => (),
            err => return custom_error("Failed to create helper object", err)
        }

        let helper = ComPtr::from_raw(helper);

        let hr = match attach {
            true => helper.GetObject(bstr(object_name), &mut api as *mut *mut cOAPI),
            false => helper.CreateObjectProgID(bstr(object_name), &mut api as *mut *mut cOAPI),
        };


        match hr {
            S_OK => Ok((helper, ComPtr::from_raw(api))),
            err => custom_error("Failed to create API object", err)
        }
    }
}

pub fn get_app_model(pointer_api: &ComPtr<cOAPI>) -> io::Result<ComPtr<cSapModel>> {
    unsafe {
        let mut model: *mut cSapModel = null_mut();
        let hr =pointer_api.get_SapModel(&mut model as *mut *mut cSapModel);
        match hr {
            S_OK => Ok(ComPtr::from_raw(model)),
            err => custom_error("Failed to get ETABS model", err)
        }
    }
}

pub fn counitializate() {
    unsafe {
        CoUninitialize();
    
    }

}



