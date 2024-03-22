#include <atlsafe.h>
#include <string>
#include <vector>
#include "rust/cxx.h"


#include "alba_ffi/include/ETABSv1.h"
#include "alba_ffi/include/ffi.h"


CComPtr<ETABSv1::cOAPI> pETABSObject;
CComPtr<ETABSv1::cHelper> pHelper;
CComPtr<ETABSv1::cSapModel> pSapModel;


std::string ConvertWCSToMBS(const wchar_t* pstr, long wslen)
{
    int len = ::WideCharToMultiByte(CP_ACP, 0, pstr, wslen, NULL, 0, NULL, NULL);

    std::string dblstr(len, '\0');
    len = ::WideCharToMultiByte(CP_ACP, 0 /* no flags */,
                                pstr, wslen /* not necessary NULL-terminated */,
                                &dblstr[0], len,
                                NULL, NULL /* no default char */);

    return dblstr;
}

std::string ConvertBSTRToMBS(BSTR bstr)
{
    int wslen = ::SysStringLen(bstr);
    return ConvertWCSToMBS((wchar_t*)bstr, wslen);
}

BSTR ConvertMBSToBSTR(const std::string& str)
{
    int wslen = ::MultiByteToWideChar(CP_ACP, 0 /* no flags */,
                                      str.data(), str.length(),
                                      NULL, 0);

    BSTR wsdata = ::SysAllocStringLen(NULL, wslen);
    ::MultiByteToWideChar(CP_ACP, 0 /* no flags */,
                          str.data(), str.length(),
                          wsdata, wslen);
    return wsdata;
}

// USO DE TEMPLATES PARA CONVERTIR LOS ELEMENTOS DE UN SAFEARRAY A UN VECTOR
// Ejemplo de uso:
// std::vector<std::string> vectorTableKey = convertElements<BSTR>(TableKey);  
// std::vector<int64_t> vectorImportType = convertElements<long>(ImportType); 
// std::vector<int32_t> vectorIsEmpty = convertElements<VARIANT_BOOL>(IsEmpty);
template <typename T, typename Container>
auto convertElements(Container& container){
    using ValueType = std::conditional_t<std::is_same_v<T, BSTR>, std::string,
                        std::conditional_t<std::is_same_v<T, VARIANT_BOOL>, int32_t,
                        std::conditional_t<std::is_same_v<T, long>, int64_t, T>>>;

    std::vector<ValueType> output;

    const LONG lb = container.GetLowerBound();
    const LONG ub = container.GetUpperBound();

    if constexpr (std::is_same_v<T, BSTR>) {
        for (LONG i = lb; i <= ub; i++) {
            std::string selement= ConvertBSTRToMBS(container.GetAt(i));
            output.push_back(selement);
        }
    } else if (std::is_same_v<T, VARIANT_BOOL>)
    {
        for (LONG i = lb; i <= ub; i++) {
            bool selement= container.GetAt(i) == VARIANT_TRUE;
            int32_t selement_int = selement ? 1 : 0;
            output.push_back(selement_int);
        }
    } else if (std::is_same_v<T, long>)
    {
        for (LONG i = lb; i <= ub; i++) {
            int64_t selement= container.GetAt(i);
            output.push_back(selement);
        }
    } else {
        for (LONG i = lb; i <= ub; i++) {
            output.push_back(container.GetAt(i));
        }
    }
    return output;
}

bool checkHRESULT(HRESULT hRes) {
    if (hRes == S_FALSE || FAILED(hRes)) {
        return false;
    }
    return true;
}

bool checkAPIResult(long hr) {
    if (hr != 0) {
        return false;
    }
    return true;
}

bool initialize_com() {
    HRESULT hRes = 0;
    hRes = CoInitialize(NULL);

    if (!checkHRESULT(hRes)) return false;
    return true;
}

bool initialize_api() {
    HRESULT hRes = 0;
    initialize_com();
    hRes = pHelper.CoCreateInstance(L"ETABSv1.Helper", NULL, CLSCTX_INPROC_SERVER);
    if (!checkHRESULT(hRes)) return false;

    pETABSObject = pHelper->GetObject(L"CSI.ETABS.API.ETABSObject");
    if (pETABSObject == NULL) return false;
    pSapModel = pETABSObject->SapModel;
    return true;
}

// ****************************************************************************
// cPropMaterial Interface
// ****************************************************************************

bool cPropMaterial_AddMaterial(rust::String UserName, int MatType, rust::string Region, rust::string Standard, rust::string Grade) {
    // crear variables
    // long ETABSv1::cPropMaterial::AddMaterial(BSTR *Name, ETABSv1::eMatType MatType, _bstr_t Region, _bstr_t Standard, _bstr_t Grade, _bstr_t UserName)    

    BSTR NameAssigned = ::SysAllocString(L"");
    auto MatTypeConverted = static_cast<ETABSv1::eMatType>(MatType);
    // _bstr_t RegionBSTR = std::string(Region).c_str();
    // _bstr_t StandardBSTR = std::string(Standard).c_str();
    // _bstr_t GradeBSTR = std::string(Grade).c_str();
    // _bstr_t UserNameBSTR = std::string(UserName).c_str();
    _bstr_t RegionBSTR(Region.data());
    _bstr_t StandardBSTR(Standard.data());
    _bstr_t GradeBSTR(Grade.data());
    _bstr_t UserNameBSTR(UserName.data());

    auto hr = pSapModel->PropMaterial->AddMaterial(&NameAssigned, MatTypeConverted, RegionBSTR, StandardBSTR, GradeBSTR, UserNameBSTR);

    SysFreeString(NameAssigned); // Liberar memoria

    if (!checkAPIResult(hr)) return false;
    return true;
    // TODO: Regresar el nombre asignado?? Es necesario?
}

bool cPropMaterial_GetNameList(int MatType) {
    long NumberNames;
    CComSafeArray<BSTR> NameList(1);
    LPSAFEARRAY pNameList = NameList.Detach();
    ETABSv1::eMatType matType;
    matType = static_cast<ETABSv1::eMatType>(MatType);


    auto hr = pSapModel->PropMaterial->GetNameList(&NumberNames, &pNameList, matType);
    if (!checkHRESULT(hr)) return false;
    NameList.Attach(pNameList);
    auto vectorNameList  = convertElements<BSTR>(NameList);
    get_propmaterial_getnamelist(vectorNameList);
    return true;
}

bool cDatabase_GetAllTables ()
{
    // declare variables
    // long ETABSv1::cDatabaseTables::GetAllTables(long *NumberTables, SAFEARRAY **TableKey, SAFEARRAY **TableName, SAFEARRAY **ImportType, SAFEARRAY **IsEmpty)
    long NumberTables;
    CComSafeArray<BSTR> TableKey(1); TableKey[0] = ::SysAllocString(L"");
    CComSafeArray<BSTR> TableName(1); TableKey[0] = ::SysAllocString(L"");
    CComSafeArray<long> ImportType(1);
    CComSafeArray<VARIANT_BOOL, VT_BOOL> IsEmpty(3);
    
    auto pTableKey = TableKey.Detach();
    auto pTableName = TableName.Detach();
    auto pImportType = ImportType.Detach();
    auto pIsEmpty = IsEmpty.Detach();

    // call the function
    auto hr = pSapModel->DatabaseTables->GetAllTables(&NumberTables, &pTableKey, &pTableName, &pImportType, &pIsEmpty);
    if (!checkHRESULT(hr)) return false;

    TableKey.Attach(pTableKey);
    TableName.Attach(pTableName);
    ImportType.Attach(pImportType);
    IsEmpty.Attach(pIsEmpty);

    // conversion a vector compatible y mas razonable X|
    auto vectorTableKey = convertElements<BSTR>(TableKey);
    auto vectorTableName = convertElements<BSTR>(TableName);
    auto vectorImportType = convertElements<long>(ImportType);
    auto vectorIsEmpty = convertElements<VARIANT_BOOL>(IsEmpty);

    // funcion de rust
    get_database_getalltables( vectorTableKey, vectorTableName, vectorImportType, vectorIsEmpty);
    return true;
}


void couninitialize_com() {
    CComVariant vFalse(false);
    CoUninitialize();
}

