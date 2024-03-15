mod bindings;
mod helpers;
mod connect;
pub mod instances;
mod api;
mod safearray;

pub use crate::instances::get_etabs_instances;
pub use crate::connect::{
    create_api_helper,
    get_app_model,
    counitializate
};
pub use crate::api::Model;


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
        let (_helper, coapi) = create_api_helper(true).unwrap();
        let etabs_model = get_app_model(&coapi);
        assert_eq!(etabs_model.is_ok(), true);
    }

    #[test]
    fn test_init_new_model() {
        let (_helper, coapi) = create_api_helper(true).unwrap();
        let etabs_model = get_app_model(&coapi).unwrap();
        let mut model = Model::new(etabs_model, 1);
        let r= model.initialize_new_model();
        model.get_interface();
        r.expect("Error initializing new model");
    } 

    #[test]
    fn test_get_number_materials(){
        let (_helper, coapi) = create_api_helper(true).unwrap();
        let etabs_model = get_app_model(&coapi).unwrap();
        let mut model = Model::new(etabs_model, 2);
        model.get_interface();
        let materials = model.get_material_name_list(1);
        println!("{:?}", materials);
        assert_eq!(materials.is_some(), true);
    }

    #[test]
    fn test_count_materials(){
        let (_helper, coapi) = create_api_helper(true).unwrap();
        let etabs_model = get_app_model(&coapi).unwrap();
        let mut model = Model::new(etabs_model, 2);
        model.get_interface();
        let materials = model.count_materials_from_type(1);
        println!("{:?}", materials);
        assert_eq!(materials.is_some(), true);
    }




}



