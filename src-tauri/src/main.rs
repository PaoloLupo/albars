// Prevents additional console window on Windows in release, DO NOT REMOVE!!
#![cfg_attr(not(debug_assertions), windows_subsystem = "windows")]
use alba_api::connect::create_api_helper;
use alba_api::get_app_model;
use alba_api::get_etabs_instances;


#[tauri::command]
fn get_etabs_instances_command() -> Vec<String> {
    get_etabs_instances().unwrap()
}

fn main() {
    tauri::Builder::default()
        .invoke_handler(tauri::generate_handler![get_etabs_instances_command])
        .run(tauri::generate_context!())
        .expect("error while running tauri application");
}
