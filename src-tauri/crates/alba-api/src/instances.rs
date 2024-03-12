use std::io;
use winreg::RegKey;
use winreg::enums::*;


/// Get all the etabs instances installed on the machine

pub fn get_etabs_instances() -> io::Result<Vec<String>> {
    let compatible_versions = vec!["21", "20", "19", "18"];

    let mut found_instances = vec![];
    let path_key = "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall";

    let key = RegKey::predef(HKEY_LOCAL_MACHINE).open_subkey(path_key)?;

    for i in key.enum_keys().map(|x| x.unwrap()) {
        let sub_key = key.open_subkey(i)?;
        sub_key.enum_values()
            .map(|x| x.unwrap())
            .filter(|x| x.0 == "DisplayName")
            .for_each(|_x| {
                let dn: String = sub_key.get_value("DisplayName").unwrap();
                if dn.contains("ETABS") {
                    let version = dn.split_whitespace().last().unwrap();
                    if compatible_versions.contains(&version) {
                        found_instances.push(dn);
                    }
                }
            });

    }
    Ok(found_instances)
}

