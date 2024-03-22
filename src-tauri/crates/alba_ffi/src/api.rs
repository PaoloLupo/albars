use std::cell::Cell;

use crate::helpers::{AlbaApiResult, AlbaApiError};
use cxx::{CxxString,CxxVector};
use crate::cxx_to_rust_vec;

#[cxx::bridge]
pub mod ffi {
    extern "Rust" {
        fn get_propmaterial_getnamelist(vec: &CxxVector<CxxString>);
        fn get_database_getalltables(
            table_key: &CxxVector<CxxString>,
            table_name: &CxxVector<CxxString>,
            import_type: &CxxVector<i64>,
            is_empty: &CxxVector<i32>,
        );
    }
    unsafe extern "C++" {
        include!("alba_ffi/include/ffi.h");
        // Funciones de inicialización
        fn initialize_com() -> bool;
        fn initialize_api() -> bool;
        fn couninitialize_com();
        // Funciones de cPropMaterial
        fn cPropMaterial_AddMaterial(
            UserName: String,
            MatType: i32,
            Region: String,
            Standard: String,
            Grade: String,
        ) -> bool;
        fn cPropMaterial_GetNameList(matType: i32) -> bool;
        fn cDatabase_GetAllTables() -> bool;

    }
}

pub fn initialize_com() -> AlbaApiResult<()> {
    thread_local! {
        static COM_INITIALIZED: Cell<bool> = Cell::new(false);
    }
    COM_INITIALIZED.with(|initialize| {
        if !initialize.get() {
            let hr =  ffi::initialize_com();
            if hr {
                initialize.set(true);
                Ok(())
            } else {
                Err(AlbaApiError::ComInitializationError)
            }
        } else {
            Ok(())
        }
    })
}

pub fn initialize_api() -> AlbaApiResult<()> {
    let hr = ffi::initialize_api();
    if hr {
        Ok(())
    } else {
        Err(AlbaApiError::ApiResponseError)
    }
}


fn get_propmaterial_getnamelist(vec: &CxxVector<CxxString>) {
    cxx_to_rust_vec!(vec);
    println!("vec: {:?}", vec);
}

fn get_database_getalltables(
    table_key: &CxxVector<CxxString>,
    table_name: &CxxVector<CxxString>,
    import_type: &CxxVector<i64>,
    is_empty: &CxxVector<i32>,
) {
    cxx_to_rust_vec!(table_key);
    cxx_to_rust_vec!(table_name);
    cxx_to_rust_vec!(import_type, i64);
    cxx_to_rust_vec!(is_empty, i32);

    println!("table_key: {:?}", table_key);
    println!("table_name: {:?}", table_name);
    // println!("import_type: {:?}", import_type);
    // println!("is_empty: {:?}", is_empty);
}



