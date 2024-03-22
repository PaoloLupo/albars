#pragma once
#include "ETABSv1.h"
#include "alba_ffi/src/api.rs.h"
#include "rust/cxx.h"


bool checkHRESULT(HRESULT hRes);

bool initialize_com();

bool initialize_api();
void couninitialize_com();

// Funciones de cPropMaterial

bool cPropMaterial_AddMaterial(rust::String UserName, int MatType, rust::string Region, rust::string Standard, rust::string Grade);

bool cPropMaterial_GetNameList(int MatType);

bool cDatabase_GetAllTables();