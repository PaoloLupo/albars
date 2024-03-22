mod helpers;
pub mod instances;
pub mod api;

pub use crate::instances::get_etabs_instances;



#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_get_etabs_instances() {
        let instances = get_etabs_instances();
        assert_eq!(instances.unwrap().len(), 1);
    }

    #[test]
    fn test_get_etabs_model() {
        api::initialize_com();
        let hr = api::initialize_api();
        assert_eq!(hr.is_ok(), true);
    }

    #[test]
    fn test_init_new_model() {

    } 



}



