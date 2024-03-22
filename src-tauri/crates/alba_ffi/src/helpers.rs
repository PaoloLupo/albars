use std::fmt::{Debug, Error as FmtError, Formatter};
use thiserror::Error;


#[derive(Debug, Error)]
#[non_exhaustive]
pub enum AlbaApiError {
    #[error("HRESULT Call failed with: {hres:#}")]
    HResultError { hres: i32},
    #[error("Error derived from api response")]
    ApiResponseError,
    #[error("Fail to initialize COM")]
    ComInitializationError,
}


pub type AlbaApiResult<T> = Result<T, AlbaApiError>;

#[macro_export]
macro_rules! cxx_to_rust_vec {
    ($var:ident ) => {
        let $var: Vec<String> = $var
            .iter()
            .map(|s| s.to_string_lossy().into_owned())
            .collect();
    };
    ($var:ident, $type:ty) => {
        let $var: Vec<$type> = $var.iter().map(|n| n.to_owned()).collect::<Vec<$type>>();
    };
    ($var:ident, bool) => {
        #[fix_me]
        let $var: Vec<bool> = $var
            .iter()
            .map(|n| {
                // convert from i32 to bool
                n.to_owned() == 1
            })
            .collect::<Vec<bool>>();
    };
}
