// Created by Microsoft (R) C/C++ Compiler Version 14.39.33521.0 (89c9d3ab).
//
//
//
// C++ source equivalent of Win32 type library ETABSv1.tlb
// compiler-generated file - DO NOT EDIT!

#pragma once
#pragma pack(push, 8)

#include <comdef.h>

namespace ETABSv1 {

//
// Forward references and typedefs
//

struct __declspec(uuid("542f7a9d-3a7d-4061-97b3-3a1276ff83bd"))
/* LIBID */ __ETABSv1;
struct __declspec(uuid("df6d6666-2994-4be3-99bd-8852ef105329"))
/* dual interface */ cAreaElm;
struct __declspec(uuid("4dc0241a-e192-47c3-8d65-70eaa4e3e2f5"))
/* dual interface */ cLineElm;
struct __declspec(uuid("8df99c3e-d5dd-4a5a-84ec-53b7fdefb0ce"))
/* dual interface */ cLinkElm;
struct __declspec(uuid("6b5b5603-d340-44d5-96a4-4b9028f673f3"))
/* dual interface */ cPointElm;
struct __declspec(uuid("7603bf75-2a18-421b-8660-8b4d2695c4ac"))
/* dual interface */ cAnalysisResults;
struct __declspec(uuid("751db83e-cf85-4179-b172-d8efdce7b056"))
/* dual interface */ cAnalysisResultsSetup;
struct __declspec(uuid("90e7c3e4-5d56-40a2-ba97-3979cff08adc"))
/* dual interface */ cAnalyze;
struct __declspec(uuid("c2dc6f7f-938e-4a19-b5e8-57d8c095f5d5"))
/* dual interface */ cDCompColEurocode_4_2004;
struct __declspec(uuid("7209d764-b0d3-43fa-a5f5-e3bb8e2ef2d4"))
/* dual interface */ cDesignCompositeColumn;
struct __declspec(uuid("874a1e6c-1490-40e4-ba3c-b89b9f5f3b81"))
/* dual interface */ cDCoACI350_20;
struct __declspec(uuid("5d7f3a1c-1995-47bb-aed5-d4c2f6ed9a66"))
/* dual interface */ cDStAustralian_AS4100_2020;
struct /* coclass */ Helper;
struct __declspec(uuid("0e971131-d37c-4f86-ac29-eed9447fdd16"))
/* dual interface */ cHelper;
struct __declspec(uuid("bdd8c3ba-07ea-4475-9e48-7c1b7eafb8af"))
/* dual interface */ cOAPI;
struct __declspec(uuid("f0db2843-bbd6-4482-b859-00fbe390077f"))
/* dual interface */ cSapModel;
struct __declspec(uuid("ab4b15aa-780a-4047-a814-3b1a83cbd26b"))
/* dual interface */ cPluginContract;
struct __declspec(uuid("496fb743-26af-47c5-a713-c1b5ca85106c"))
/* dual interface */ cPluginCallback;
struct __declspec(uuid("ee65dabe-cd3c-4028-9c2a-2c1a224ee264"))
/* dual interface */ cGenRefLine;
struct __declspec(uuid("8ce65d2b-f765-4206-8a1f-ca40afe31049"))
/* dual interface */ cGridSys;
struct __declspec(uuid("0597c1a0-a026-4dd7-92e0-833257f52803"))
/* dual interface */ cDiaphragm;
struct __declspec(uuid("d0ce6fbb-5a4f-4dbb-a51d-039b106285e0"))
/* dual interface */ cNamedSet;
struct __declspec(uuid("c16857e5-ed00-43fa-be26-8bed766e77ad"))
/* dual interface */ cSpandrelLabel;
struct __declspec(uuid("694be161-f785-4f24-8520-9f3890f781e1"))
/* dual interface */ cPierLabel;
struct __declspec(uuid("5fafc96f-2286-4c5c-a576-b40aa0727125"))
/* dual interface */ cStory;
struct __declspec(uuid("a7358245-1148-4351-bbea-b8c46781d7dd"))
/* dual interface */ cCombo;
struct __declspec(uuid("99156786-2a94-4cad-819f-e91d1635d96b"))
/* dual interface */ cConstraint;
struct __declspec(uuid("8a69b84b-5e5b-4f2c-bfa9-b7a558a9d310"))
/* dual interface */ cGenDispl;
struct __declspec(uuid("f6cfa75c-835a-4e25-8f72-a60227d4a975"))
/* dual interface */ cGroup;
struct __declspec(uuid("974a9f01-aa67-402c-b95d-ec3892ab317c"))
/* dual interface */ cPattern;
struct __declspec(uuid("b81c2252-779b-4228-b5f4-f979434bb692"))
/* dual interface */ cTower;
struct __declspec(uuid("36b7c3db-1a91-41ed-b443-1a102383b731"))
/* dual interface */ cFunction;
struct __declspec(uuid("f4ea1f46-b9c3-4d4b-ad95-c951d919a26e"))
/* dual interface */ cFunctionRS;
struct __declspec(uuid("618c5ad5-5e03-4972-9262-380ec3fecb87"))
/* dual interface */ cFunctionTH;
struct __declspec(uuid("d67f622b-dea3-4618-aad2-994bd3460f7d"))
/* dual interface */ cCaseBuckling;
struct __declspec(uuid("b1ec6f45-f1e3-4489-a9b5-5baa3f6ff957"))
/* dual interface */ cCaseDirectHistoryLinear;
struct __declspec(uuid("961a9e5b-b81e-4b18-92f2-b42593550890"))
/* dual interface */ cCaseDirectHistoryNonlinear;
struct __declspec(uuid("9759bdde-079e-4331-9eca-fcc294dcd09f"))
/* dual interface */ cCaseHyperStatic;
struct __declspec(uuid("99cebb74-fd82-404b-9b24-8679ee4bf5c2"))
/* dual interface */ cCaseModalEigen;
struct __declspec(uuid("89d6da7f-45b2-4c28-81e8-77db817fdb9c"))
/* dual interface */ cCaseModalHistoryLinear;
struct __declspec(uuid("81ffbed7-4cf9-44b0-bede-38195e5c6b52"))
/* dual interface */ cCaseModalHistoryNonlinear;
struct __declspec(uuid("bc3315e4-2774-497e-97b0-e5861d0cee16"))
/* dual interface */ cCaseModalRitz;
struct __declspec(uuid("cdaad35b-4090-4499-aa8b-615af5aa2b0d"))
/* dual interface */ cCaseResponseSpectrum;
struct __declspec(uuid("ae73755e-671c-4fb1-8778-4191654f5cde"))
/* dual interface */ cCaseStaticLinear;
struct __declspec(uuid("adab597e-ec5a-43c6-9910-1c70912766f6"))
/* dual interface */ cCaseStaticNonlinear;
struct __declspec(uuid("2cb60d1d-af61-4e6c-9859-f19c58df4901"))
/* dual interface */ cCaseStaticNonlinearStaged;
struct __declspec(uuid("2c074d0a-041a-4a19-a068-0f947de89054"))
/* dual interface */ cLoadCases;
struct __declspec(uuid("362839c9-6ee2-45d5-8088-e5ff3888cca6"))
/* dual interface */ cAutoSeismic;
struct __declspec(uuid("ec6bb373-d00e-4c90-b13c-4c16ef7dbb90"))
/* dual interface */ cAutoWind;
struct __declspec(uuid("70cd0e19-584f-458d-ae92-824f10019ca7"))
/* dual interface */ cAutoWindBridge;
struct __declspec(uuid("0fa969b9-7001-4341-9213-151778d79221"))
/* dual interface */ cLoadPatterns;
struct __declspec(uuid("d5999846-bc7a-4f31-9d16-526f5d5a6945"))
/* dual interface */ cPropArea;
struct __declspec(uuid("ce5498cb-f332-4978-b0a4-443d30778ba6"))
/* dual interface */ cPropLink;
struct __declspec(uuid("75b06d0e-a03b-4e17-98d5-02d0c5f90638"))
/* dual interface */ cPropRebar;
struct __declspec(uuid("6c67f913-98c9-4236-ace6-941d6b6571f6"))
/* dual interface */ cPropTendon;
struct __declspec(uuid("88aafe1e-4f8c-43ee-b0bd-3cd28e64d7f8"))
/* dual interface */ cPropFrame;
struct __declspec(uuid("38fd28c3-b05b-43f0-a314-5d06d22688c7"))
/* dual interface */ cPropFrameSDShape;
struct __declspec(uuid("47ec79c1-ae4a-4684-bf82-2cd5dc817341"))
/* dual interface */ cPropMaterial;
struct __declspec(uuid("61da0018-41bf-4d20-977e-83ebe8e5ad21"))
/* dual interface */ cPropMaterialTD;
struct __declspec(uuid("47bce5be-8de6-4171-b593-2e562edb7b45"))
/* dual interface */ cPropAreaSpring;
struct __declspec(uuid("d2fef8a2-57aa-46cf-b287-f45eb0832b3a"))
/* dual interface */ cPropLineSpring;
struct __declspec(uuid("3e4a7586-d43f-4ce5-8be3-4273393fc542"))
/* dual interface */ cPropPointSpring;
struct __declspec(uuid("f7469045-da52-414a-b543-fd34ee6ec54f"))
/* dual interface */ cDesignForces;
struct __declspec(uuid("965fb3a1-8abf-4b3a-9518-5efa25681606"))
/* dual interface */ cDesignResults;
struct __declspec(uuid("b80fc69c-d3b1-4b01-9e15-cf7d14df8a38"))
/* dual interface */ cDesignCompositeBeam;
struct __declspec(uuid("423ffd21-edbb-46dc-b66d-46cc9ffba307"))
/* dual interface */ cDConcShellEurocode_2_2004;
struct __declspec(uuid("df961e2f-7cd0-4dd9-971b-6d5f6e515c0a"))
/* dual interface */ cDesignConcreteShell;
struct __declspec(uuid("c04392a3-99d1-4d05-8dd3-c0284e266f00"))
/* dual interface */ cDConcSlabACI318_14;
struct __declspec(uuid("f572440b-b2d9-4a55-8196-877550c81d16"))
/* dual interface */ cDConcSlabACI318_19;
struct __declspec(uuid("ad093a50-7ffd-42f8-b1dd-22faa817917d"))
/* dual interface */ cDesignConcreteSlab;
struct __declspec(uuid("b8cbfe5b-f426-4d0a-aebf-f3a8e222849c"))
/* dual interface */ cDesignStrip;
struct __declspec(uuid("48e6c50b-130d-4c1a-847f-ea185307a618"))
/* dual interface */ cDCoACI318_08_IBC2009;
struct __declspec(uuid("176897ef-cfaf-470b-a676-074f3d2f8fd2"))
/* dual interface */ cDCoACI318_11;
struct __declspec(uuid("cd4542c2-d246-469a-8514-1ac4c1811911"))
/* dual interface */ cDCoACI318_19;
struct __declspec(uuid("c6a092ad-f6fc-4ad5-9862-f7b481c44b18"))
/* dual interface */ cDCoACI318_14;
struct __declspec(uuid("a3d43e54-824d-4538-a28a-b5385b0f51cf"))
/* dual interface */ cDCoAS_3600_09;
struct __declspec(uuid("c5e654ce-23b1-465b-9aeb-58d574df4225"))
/* dual interface */ cDCoAS_3600_2018;
struct __declspec(uuid("6e93de30-10b6-45a8-8b82-129688d8f80e"))
/* dual interface */ cDCoBS8110_97;
struct __declspec(uuid("8b3b4b91-3406-44d3-93ab-29f9ec824e66"))
/* dual interface */ cDCoChinese_2010;
struct __declspec(uuid("82d4214f-47cc-41e1-9c85-d4f2a50eb262"))
/* dual interface */ cDCoEurocode_2_2004;
struct __declspec(uuid("64d41225-489d-42ff-a1f3-6fbdfef9d6fe"))
/* dual interface */ cDCoHong_Kong_CP_2013;
struct __declspec(uuid("35968ab4-e1f9-41ba-8c9c-26cabc55dce4"))
/* dual interface */ cDCoIndian_IS_456_2000;
struct __declspec(uuid("1308d2a3-7656-4e06-a610-f1a93282b5cc"))
/* dual interface */ cDCoItalianNTC2008C;
struct __declspec(uuid("202f4644-a7b2-44fc-b519-073a55592eac"))
/* dual interface */ cDCoMexican_RCDF_2004;
struct __declspec(uuid("3a09968a-4e3d-4602-b870-ff5d320e00f8"))
/* dual interface */ cDCoMexican_RCDF_2017;
struct __declspec(uuid("a09ef0a6-d1cb-4329-9bba-8778d7078794"))
/* dual interface */ cDCoNZS_3101_2006;
struct __declspec(uuid("cd1d9d18-26e7-4d7d-a69e-0f701a405596"))
/* dual interface */ cDCoSP63133302011;
struct __declspec(uuid("a2ce64ae-31fd-4550-b4ff-a1ca1b4f4f5b"))
/* dual interface */ cDCoTS_500_2000;
struct __declspec(uuid("4fa29d29-960d-4b15-b115-4da33a4f4716"))
/* dual interface */ cDCoTS_500_2000_R2018;
struct __declspec(uuid("3e3e4806-bb37-4d78-99a0-20436f21a0a8"))
/* dual interface */ cDesignConcrete;
struct __declspec(uuid("f1c53bf1-0357-4dab-bb1b-ea1749ed14d2"))
/* dual interface */ cDesignShearWall;
struct __declspec(uuid("a7a9681c-52c4-46ea-9e6e-8c33047e5f40"))
/* dual interface */ cDesignSteel;
struct __declspec(uuid("57576186-4629-4066-a5e3-aafb8551b6a8"))
/* dual interface */ cDStAISC360_05_IBC2006;
struct __declspec(uuid("ab1800e1-011e-4212-a139-ea8232b04549"))
/* dual interface */ cDStAISC360_10;
struct __declspec(uuid("a3f32989-4b8e-4199-862d-dd2fa235c381"))
/* dual interface */ cDStAISC_ASD89;
struct __declspec(uuid("38dd519b-ac4a-4dc8-b170-b8f58dc34b6e"))
/* dual interface */ cDStAISC_LRFD93;
struct __declspec(uuid("46883fe3-67f0-4286-a119-913fa272ba9f"))
/* dual interface */ cDStAustralian_AS4100_98;
struct __declspec(uuid("6a4e5155-9478-4f7e-87ab-b91a78341597"))
/* dual interface */ cDStBS5950_2000;
struct __declspec(uuid("7169a078-37cb-4021-a6cd-9923eb723a64"))
/* dual interface */ cDStCanadian_S16_09;
struct __declspec(uuid("31467f7c-766c-4be6-b19f-ba9f0388a22a"))
/* dual interface */ cDStCanadian_S16_19;
struct __declspec(uuid("d81d4698-c66b-40cd-88ff-6534970ded6d"))
/* dual interface */ cDStChinese_2010;
struct __declspec(uuid("a09a57cb-e3d1-4966-baf4-365f2c2598a8"))
/* dual interface */ cDStChinese_2018;
struct __declspec(uuid("dbfa67a5-bceb-4d70-9896-87600ceba41f"))
/* dual interface */ cDStEurocode_3_2005;
struct __declspec(uuid("655c6ea8-969d-4876-8ab0-28737cade5a4"))
/* dual interface */ cDStIndian_IS_800_2007;
struct __declspec(uuid("e94bee54-8675-4605-b382-e7aa0dc62c50"))
/* dual interface */ cDStItalianNTC2008S;
struct __declspec(uuid("dd1295a2-2c57-4719-a27a-bdcc95bd0674"))
/* dual interface */ cDStNewZealand_NZS3404_97;
struct __declspec(uuid("b41e2718-abb7-465f-97c8-952b2c44202b"))
/* dual interface */ cDStSP16_13330_2011;
struct __declspec(uuid("f91a6e37-1a06-41c3-9138-59e3e007b4ad"))
/* dual interface */ cDStCanadian_S16_14;
struct __declspec(uuid("c6e5510d-451e-4fa9-9044-335a7cd9a3d6"))
/* dual interface */ cDStItalianNTC2018S;
struct __declspec(uuid("48c48622-bada-4e06-bb96-58faae32eb93"))
/* dual interface */ cDStSP16_13330_2017;
struct __declspec(uuid("95af59de-08d7-4338-a42c-5cf22c36eadb"))
/* dual interface */ cDetailing;
struct __declspec(uuid("f7a0f69d-dfdd-41f6-af32-76c5b8a826b6"))
/* dual interface */ cEditArea;
struct __declspec(uuid("e1ebb47d-1b93-4b93-a010-26604126d7a8"))
/* dual interface */ cEditFrame;
struct __declspec(uuid("09861929-e810-487a-9228-51b378fd3cdf"))
/* dual interface */ cEditGeneral;
struct __declspec(uuid("6a5c2fed-ecf4-4f61-8139-f2b472516310"))
/* dual interface */ cEditPoint;
struct __declspec(uuid("5684e943-33cc-4d03-8afe-8bbefc56d4c9"))
/* dual interface */ cFile;
struct __declspec(uuid("336b5859-2cf7-4c67-8a7b-41217e4e2c4a"))
/* dual interface */ cDatabaseTables;
struct __declspec(uuid("ed2db520-52d4-4b27-8838-a5e9c271f8c3"))
/* dual interface */ cAreaObj;
struct __declspec(uuid("f87e3a66-8381-4202-897f-46683a8477d4"))
/* dual interface */ cFrameObj;
struct __declspec(uuid("a28b3e57-3c5e-4e9e-8c57-e3bdf928a8d1"))
/* dual interface */ cLinkObj;
struct __declspec(uuid("6674645d-e89a-459f-a446-8db204577c60"))
/* dual interface */ cPointObj;
struct __declspec(uuid("294bbf0b-8ac2-4593-80d5-bbf8c9e0e165"))
/* dual interface */ cTendonObj;
struct __declspec(uuid("f1600512-d795-4a2f-98c3-2d1615542153"))
/* dual interface */ cOptions;
struct __declspec(uuid("73239643-902c-4ac2-addb-6cc919997eb0"))
/* dual interface */ cSelect;
struct __declspec(uuid("abcc81d2-5f58-422d-92df-6a8c587b9606"))
/* dual interface */ cNamedDisplay;
struct __declspec(uuid("bf177229-2909-4894-937d-6491208e027c"))
/* dual interface */ cView;
enum eBridgeObjectBentPart : int;
enum eBridgeObjectFoundationPart : int;
enum eBridgeResponseDesignRating : int;
enum eBridgeResponseDisplDOF : int;
enum eBridgeResponseDisplLoc : int;
enum eBridgeResponseForce : int;
enum eBridgeResponsePart : int;
enum eBridgeResponseStress : int;
enum eBridgeSegmentConstructionMethod : int;
enum eBridgeSegmentType : int;
enum eFrameDesignOrientation : int;
enum eHingeDistributionType : int;
enum eHingeLengthOverwriteType : int;
enum eHingeLocationType : int;
enum eMatCoupledType : int;
enum eNamedSetType : int;
enum eReturnCode : int;
enum eSuperObjectClass : int;
enum eWallSpandrelRebarLayerType : int;
enum eWallPierRebarLayerType : int;
enum eObjType : int;
enum eBridgeCodeAASHTO : int;
enum eBridgeCodeInterims : int;
enum eBridgeObjectType : int;
enum eBridgeObjectUserPointType : int;
enum eBridgeTendonCategory : int;
enum eDesignActionType : int;
enum eDiaphragmOption : int;
enum eShellType : int;
enum eWallPropType : int;
enum eDeckType : int;
enum eSlabType : int;
enum eTemperature : int;
enum eForce : int;
enum eLength : int;
enum eAreaDesignOrientation : int;
enum eMatTypeAluminum : int;
enum eMatTypeColdFormed : int;
enum e2DFrameType : int;
enum e3DFrameType : int;
enum eConstraintAxis : int;
enum eConstraintType : int;
enum eCNameType : int;
enum eFramePropType : int;
enum eItemType : int;
enum eItemTypeElm : int;
enum eLinkPropType : int;
enum eLoadCaseType : int;
enum eLoadPatternType : int;
enum eMatType : int;
enum eMatTypeConcrete : int;
enum eMatTypeRebar : int;
enum eMatTypeSteel : int;
enum eMatTypeTendon : int;
enum eTemplateType : int;
enum eUnits : int;
struct /* coclass */ StartService;
struct __declspec(uuid("c9d2950b-7584-3924-b9c5-c454edb95613"))
/* dual interface */ _StartService;

//
// Smart pointer typedef declarations
//

_COM_SMARTPTR_TYPEDEF(cAreaElm, __uuidof(cAreaElm));
_COM_SMARTPTR_TYPEDEF(cLineElm, __uuidof(cLineElm));
_COM_SMARTPTR_TYPEDEF(cLinkElm, __uuidof(cLinkElm));
_COM_SMARTPTR_TYPEDEF(cPointElm, __uuidof(cPointElm));
_COM_SMARTPTR_TYPEDEF(cAnalysisResults, __uuidof(cAnalysisResults));
_COM_SMARTPTR_TYPEDEF(cAnalysisResultsSetup, __uuidof(cAnalysisResultsSetup));
_COM_SMARTPTR_TYPEDEF(cAnalyze, __uuidof(cAnalyze));
_COM_SMARTPTR_TYPEDEF(cDCompColEurocode_4_2004, __uuidof(cDCompColEurocode_4_2004));
_COM_SMARTPTR_TYPEDEF(cDesignCompositeColumn, __uuidof(cDesignCompositeColumn));
_COM_SMARTPTR_TYPEDEF(cDCoACI350_20, __uuidof(cDCoACI350_20));
_COM_SMARTPTR_TYPEDEF(cDStAustralian_AS4100_2020, __uuidof(cDStAustralian_AS4100_2020));
_COM_SMARTPTR_TYPEDEF(cHelper, __uuidof(cHelper));
_COM_SMARTPTR_TYPEDEF(cOAPI, __uuidof(cOAPI));
_COM_SMARTPTR_TYPEDEF(cSapModel, __uuidof(cSapModel));
_COM_SMARTPTR_TYPEDEF(cPluginContract, __uuidof(cPluginContract));
_COM_SMARTPTR_TYPEDEF(cPluginCallback, __uuidof(cPluginCallback));
_COM_SMARTPTR_TYPEDEF(cGenRefLine, __uuidof(cGenRefLine));
_COM_SMARTPTR_TYPEDEF(cGridSys, __uuidof(cGridSys));
_COM_SMARTPTR_TYPEDEF(cDiaphragm, __uuidof(cDiaphragm));
_COM_SMARTPTR_TYPEDEF(cNamedSet, __uuidof(cNamedSet));
_COM_SMARTPTR_TYPEDEF(cSpandrelLabel, __uuidof(cSpandrelLabel));
_COM_SMARTPTR_TYPEDEF(cPierLabel, __uuidof(cPierLabel));
_COM_SMARTPTR_TYPEDEF(cStory, __uuidof(cStory));
_COM_SMARTPTR_TYPEDEF(cCombo, __uuidof(cCombo));
_COM_SMARTPTR_TYPEDEF(cConstraint, __uuidof(cConstraint));
_COM_SMARTPTR_TYPEDEF(cGenDispl, __uuidof(cGenDispl));
_COM_SMARTPTR_TYPEDEF(cGroup, __uuidof(cGroup));
_COM_SMARTPTR_TYPEDEF(cPattern, __uuidof(cPattern));
_COM_SMARTPTR_TYPEDEF(cTower, __uuidof(cTower));
_COM_SMARTPTR_TYPEDEF(cFunction, __uuidof(cFunction));
_COM_SMARTPTR_TYPEDEF(cFunctionRS, __uuidof(cFunctionRS));
_COM_SMARTPTR_TYPEDEF(cFunctionTH, __uuidof(cFunctionTH));
_COM_SMARTPTR_TYPEDEF(cCaseBuckling, __uuidof(cCaseBuckling));
_COM_SMARTPTR_TYPEDEF(cCaseDirectHistoryLinear, __uuidof(cCaseDirectHistoryLinear));
_COM_SMARTPTR_TYPEDEF(cCaseDirectHistoryNonlinear, __uuidof(cCaseDirectHistoryNonlinear));
_COM_SMARTPTR_TYPEDEF(cCaseHyperStatic, __uuidof(cCaseHyperStatic));
_COM_SMARTPTR_TYPEDEF(cCaseModalEigen, __uuidof(cCaseModalEigen));
_COM_SMARTPTR_TYPEDEF(cCaseModalHistoryLinear, __uuidof(cCaseModalHistoryLinear));
_COM_SMARTPTR_TYPEDEF(cCaseModalHistoryNonlinear, __uuidof(cCaseModalHistoryNonlinear));
_COM_SMARTPTR_TYPEDEF(cCaseModalRitz, __uuidof(cCaseModalRitz));
_COM_SMARTPTR_TYPEDEF(cCaseResponseSpectrum, __uuidof(cCaseResponseSpectrum));
_COM_SMARTPTR_TYPEDEF(cCaseStaticLinear, __uuidof(cCaseStaticLinear));
_COM_SMARTPTR_TYPEDEF(cCaseStaticNonlinear, __uuidof(cCaseStaticNonlinear));
_COM_SMARTPTR_TYPEDEF(cCaseStaticNonlinearStaged, __uuidof(cCaseStaticNonlinearStaged));
_COM_SMARTPTR_TYPEDEF(cLoadCases, __uuidof(cLoadCases));
_COM_SMARTPTR_TYPEDEF(cAutoSeismic, __uuidof(cAutoSeismic));
_COM_SMARTPTR_TYPEDEF(cAutoWind, __uuidof(cAutoWind));
_COM_SMARTPTR_TYPEDEF(cAutoWindBridge, __uuidof(cAutoWindBridge));
_COM_SMARTPTR_TYPEDEF(cLoadPatterns, __uuidof(cLoadPatterns));
_COM_SMARTPTR_TYPEDEF(cPropArea, __uuidof(cPropArea));
_COM_SMARTPTR_TYPEDEF(cPropLink, __uuidof(cPropLink));
_COM_SMARTPTR_TYPEDEF(cPropRebar, __uuidof(cPropRebar));
_COM_SMARTPTR_TYPEDEF(cPropTendon, __uuidof(cPropTendon));
_COM_SMARTPTR_TYPEDEF(cPropFrame, __uuidof(cPropFrame));
_COM_SMARTPTR_TYPEDEF(cPropFrameSDShape, __uuidof(cPropFrameSDShape));
_COM_SMARTPTR_TYPEDEF(cPropMaterial, __uuidof(cPropMaterial));
_COM_SMARTPTR_TYPEDEF(cPropMaterialTD, __uuidof(cPropMaterialTD));
_COM_SMARTPTR_TYPEDEF(cPropAreaSpring, __uuidof(cPropAreaSpring));
_COM_SMARTPTR_TYPEDEF(cPropLineSpring, __uuidof(cPropLineSpring));
_COM_SMARTPTR_TYPEDEF(cPropPointSpring, __uuidof(cPropPointSpring));
_COM_SMARTPTR_TYPEDEF(cDesignForces, __uuidof(cDesignForces));
_COM_SMARTPTR_TYPEDEF(cDesignResults, __uuidof(cDesignResults));
_COM_SMARTPTR_TYPEDEF(cDesignCompositeBeam, __uuidof(cDesignCompositeBeam));
_COM_SMARTPTR_TYPEDEF(cDConcShellEurocode_2_2004, __uuidof(cDConcShellEurocode_2_2004));
_COM_SMARTPTR_TYPEDEF(cDesignConcreteShell, __uuidof(cDesignConcreteShell));
_COM_SMARTPTR_TYPEDEF(cDConcSlabACI318_14, __uuidof(cDConcSlabACI318_14));
_COM_SMARTPTR_TYPEDEF(cDConcSlabACI318_19, __uuidof(cDConcSlabACI318_19));
_COM_SMARTPTR_TYPEDEF(cDesignConcreteSlab, __uuidof(cDesignConcreteSlab));
_COM_SMARTPTR_TYPEDEF(cDesignStrip, __uuidof(cDesignStrip));
_COM_SMARTPTR_TYPEDEF(cDCoACI318_08_IBC2009, __uuidof(cDCoACI318_08_IBC2009));
_COM_SMARTPTR_TYPEDEF(cDCoACI318_11, __uuidof(cDCoACI318_11));
_COM_SMARTPTR_TYPEDEF(cDCoACI318_19, __uuidof(cDCoACI318_19));
_COM_SMARTPTR_TYPEDEF(cDCoACI318_14, __uuidof(cDCoACI318_14));
_COM_SMARTPTR_TYPEDEF(cDCoAS_3600_09, __uuidof(cDCoAS_3600_09));
_COM_SMARTPTR_TYPEDEF(cDCoAS_3600_2018, __uuidof(cDCoAS_3600_2018));
_COM_SMARTPTR_TYPEDEF(cDCoBS8110_97, __uuidof(cDCoBS8110_97));
_COM_SMARTPTR_TYPEDEF(cDCoChinese_2010, __uuidof(cDCoChinese_2010));
_COM_SMARTPTR_TYPEDEF(cDCoEurocode_2_2004, __uuidof(cDCoEurocode_2_2004));
_COM_SMARTPTR_TYPEDEF(cDCoHong_Kong_CP_2013, __uuidof(cDCoHong_Kong_CP_2013));
_COM_SMARTPTR_TYPEDEF(cDCoIndian_IS_456_2000, __uuidof(cDCoIndian_IS_456_2000));
_COM_SMARTPTR_TYPEDEF(cDCoItalianNTC2008C, __uuidof(cDCoItalianNTC2008C));
_COM_SMARTPTR_TYPEDEF(cDCoMexican_RCDF_2004, __uuidof(cDCoMexican_RCDF_2004));
_COM_SMARTPTR_TYPEDEF(cDCoMexican_RCDF_2017, __uuidof(cDCoMexican_RCDF_2017));
_COM_SMARTPTR_TYPEDEF(cDCoNZS_3101_2006, __uuidof(cDCoNZS_3101_2006));
_COM_SMARTPTR_TYPEDEF(cDCoSP63133302011, __uuidof(cDCoSP63133302011));
_COM_SMARTPTR_TYPEDEF(cDCoTS_500_2000, __uuidof(cDCoTS_500_2000));
_COM_SMARTPTR_TYPEDEF(cDCoTS_500_2000_R2018, __uuidof(cDCoTS_500_2000_R2018));
_COM_SMARTPTR_TYPEDEF(cDesignConcrete, __uuidof(cDesignConcrete));
_COM_SMARTPTR_TYPEDEF(cDesignShearWall, __uuidof(cDesignShearWall));
_COM_SMARTPTR_TYPEDEF(cDesignSteel, __uuidof(cDesignSteel));
_COM_SMARTPTR_TYPEDEF(cDStAISC360_05_IBC2006, __uuidof(cDStAISC360_05_IBC2006));
_COM_SMARTPTR_TYPEDEF(cDStAISC360_10, __uuidof(cDStAISC360_10));
_COM_SMARTPTR_TYPEDEF(cDStAISC_ASD89, __uuidof(cDStAISC_ASD89));
_COM_SMARTPTR_TYPEDEF(cDStAISC_LRFD93, __uuidof(cDStAISC_LRFD93));
_COM_SMARTPTR_TYPEDEF(cDStAustralian_AS4100_98, __uuidof(cDStAustralian_AS4100_98));
_COM_SMARTPTR_TYPEDEF(cDStBS5950_2000, __uuidof(cDStBS5950_2000));
_COM_SMARTPTR_TYPEDEF(cDStCanadian_S16_09, __uuidof(cDStCanadian_S16_09));
_COM_SMARTPTR_TYPEDEF(cDStCanadian_S16_19, __uuidof(cDStCanadian_S16_19));
_COM_SMARTPTR_TYPEDEF(cDStChinese_2010, __uuidof(cDStChinese_2010));
_COM_SMARTPTR_TYPEDEF(cDStChinese_2018, __uuidof(cDStChinese_2018));
_COM_SMARTPTR_TYPEDEF(cDStEurocode_3_2005, __uuidof(cDStEurocode_3_2005));
_COM_SMARTPTR_TYPEDEF(cDStIndian_IS_800_2007, __uuidof(cDStIndian_IS_800_2007));
_COM_SMARTPTR_TYPEDEF(cDStItalianNTC2008S, __uuidof(cDStItalianNTC2008S));
_COM_SMARTPTR_TYPEDEF(cDStNewZealand_NZS3404_97, __uuidof(cDStNewZealand_NZS3404_97));
_COM_SMARTPTR_TYPEDEF(cDStSP16_13330_2011, __uuidof(cDStSP16_13330_2011));
_COM_SMARTPTR_TYPEDEF(cDStCanadian_S16_14, __uuidof(cDStCanadian_S16_14));
_COM_SMARTPTR_TYPEDEF(cDStItalianNTC2018S, __uuidof(cDStItalianNTC2018S));
_COM_SMARTPTR_TYPEDEF(cDStSP16_13330_2017, __uuidof(cDStSP16_13330_2017));
_COM_SMARTPTR_TYPEDEF(cDetailing, __uuidof(cDetailing));
_COM_SMARTPTR_TYPEDEF(cEditArea, __uuidof(cEditArea));
_COM_SMARTPTR_TYPEDEF(cEditFrame, __uuidof(cEditFrame));
_COM_SMARTPTR_TYPEDEF(cEditGeneral, __uuidof(cEditGeneral));
_COM_SMARTPTR_TYPEDEF(cEditPoint, __uuidof(cEditPoint));
_COM_SMARTPTR_TYPEDEF(cFile, __uuidof(cFile));
_COM_SMARTPTR_TYPEDEF(cDatabaseTables, __uuidof(cDatabaseTables));
_COM_SMARTPTR_TYPEDEF(cAreaObj, __uuidof(cAreaObj));
_COM_SMARTPTR_TYPEDEF(cFrameObj, __uuidof(cFrameObj));
_COM_SMARTPTR_TYPEDEF(cLinkObj, __uuidof(cLinkObj));
_COM_SMARTPTR_TYPEDEF(cPointObj, __uuidof(cPointObj));
_COM_SMARTPTR_TYPEDEF(cTendonObj, __uuidof(cTendonObj));
_COM_SMARTPTR_TYPEDEF(cOptions, __uuidof(cOptions));
_COM_SMARTPTR_TYPEDEF(cSelect, __uuidof(cSelect));
_COM_SMARTPTR_TYPEDEF(cNamedDisplay, __uuidof(cNamedDisplay));
_COM_SMARTPTR_TYPEDEF(cView, __uuidof(cView));
_COM_SMARTPTR_TYPEDEF(_StartService, __uuidof(_StartService));

//
// Type library items
//

struct __declspec(uuid("df6d6666-2994-4be3-99bd-8852ef105329"))
cAreaElm : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long Count ( );
    long GetLoadTemperature (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * AreaName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * MyType,
        SAFEARRAY * * Value,
        SAFEARRAY * * PatternName,
        enum eItemTypeElm ItemTypeElm );
    long GetLoadUniform (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * AreaName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Dir,
        SAFEARRAY * * Value,
        enum eItemTypeElm ItemTypeElm );
    long GetLocalAxes (
        _bstr_t Name,
        double * Ang );
    long GetMaterialOverwrite (
        _bstr_t Name,
        BSTR * PropName );
    long GetModifiers (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetObj (
        _bstr_t Name,
        BSTR * Obj );
    long GetOffsets (
        _bstr_t Name,
        long * OffsetType,
        BSTR * OffsetPattern,
        double * OffsetPatternSF,
        SAFEARRAY * * Offset );
    long GetPoints (
        _bstr_t Name,
        long * NumberPoints,
        SAFEARRAY * * Point );
    long GetProperty (
        _bstr_t Name,
        BSTR * PropName );
    long GetThickness (
        _bstr_t Name,
        long * ThicknessType,
        BSTR * ThicknessPattern,
        double * ThicknessPatternSF,
        SAFEARRAY * * Thickness );
    long GetTransformationMatrix (
        _bstr_t Name,
        SAFEARRAY * * Value );
};

struct __declspec(uuid("4dc0241a-e192-47c3-8d65-70eaa4e3e2f5"))
cLineElm : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long Count ( );
    long GetEndLengthOffset (
        _bstr_t Name,
        double * Length1,
        double * Length2,
        double * RZ );
    long GetInsertionPoint (
        _bstr_t Name,
        SAFEARRAY * * Offset1,
        SAFEARRAY * * Offset2 );
    long GetLoadDistributed (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * LineName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * MyType,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Dir,
        SAFEARRAY * * RD1,
        SAFEARRAY * * RD2,
        SAFEARRAY * * Dist1,
        SAFEARRAY * * Dist2,
        SAFEARRAY * * Val1,
        SAFEARRAY * * Val2,
        enum eItemTypeElm ItemTypeElm );
    long GetLoadPoint (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * LineName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * MyType,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Dir,
        SAFEARRAY * * RelDist,
        SAFEARRAY * * Dist,
        SAFEARRAY * * Val,
        enum eItemTypeElm ItemTypeElm );
    long GetLoadTemperature (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * LineName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * MyType,
        SAFEARRAY * * Val,
        SAFEARRAY * * PatternName,
        enum eItemTypeElm ItemTypeElm );
    long GetLocalAxes (
        _bstr_t Name,
        double * Ang );
    long GetMaterialOverwrite (
        _bstr_t Name,
        BSTR * PropName );
    long GetModifiers (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetObj (
        _bstr_t Name,
        BSTR * Obj,
        long * ObjType,
        double * RDI,
        double * RDJ );
    long GetPoints (
        _bstr_t Name,
        BSTR * Point1,
        BSTR * Point2 );
    long GetProperty (
        _bstr_t Name,
        BSTR * PropName,
        long * ObjType,
        VARIANT_BOOL * Var,
        double * SVarRelStartLoc,
        double * SVarTotalLength );
    long GetReleases (
        _bstr_t Name,
        SAFEARRAY * * II,
        SAFEARRAY * * JJ,
        SAFEARRAY * * StartValue,
        SAFEARRAY * * EndValue );
    long GetTCLimits (
        _bstr_t Name,
        VARIANT_BOOL * LimitCompressionExists,
        double * LimitCompression,
        VARIANT_BOOL * LimitTensionExists,
        double * LimitTension );
    long GetTransformationMatrix (
        _bstr_t Name,
        SAFEARRAY * * Value );
};

struct __declspec(uuid("8df99c3e-d5dd-4a5a-84ec-53b7fdefb0ce"))
cLinkElm : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("6b5b5603-d340-44d5-96a4-4b9028f673f3"))
cPointElm : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long Count ( );
    long CountConstraint (
        long * Count,
        _bstr_t Name );
    long CountLoadDispl (
        long * Count,
        _bstr_t Name,
        _bstr_t LoadPat );
    long CountLoadForce (
        long * Count,
        _bstr_t Name,
        _bstr_t LoadPat );
    long CountRestraint ( );
    long CountSpring ( );
    long GetConnectivity (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * ObjectType,
        SAFEARRAY * * ObjectName,
        SAFEARRAY * * PointNumber );
    long GetConstraint (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * PointName,
        SAFEARRAY * * ConstraintName,
        enum eItemTypeElm ItemTypeElm );
    long GetCoordCartesian (
        _bstr_t Name,
        double * X,
        double * Y,
        double * Z,
        _bstr_t CSys );
    long GetLoadDispl (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * PointName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * LcStep,
        SAFEARRAY * * CSys,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3,
        enum eItemTypeElm ItemTypeElm );
    long GetLoadForce (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * PointName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * LcStep,
        SAFEARRAY * * CSys,
        SAFEARRAY * * F1,
        SAFEARRAY * * F2,
        SAFEARRAY * * F3,
        SAFEARRAY * * M1,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3,
        enum eItemTypeElm ItemTypeElm );
    long GetLocalAxes (
        _bstr_t Name,
        double * A,
        double * B,
        double * C );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetObj (
        _bstr_t Name,
        BSTR * Obj,
        long * ObjType );
    long GetPatternValue (
        _bstr_t Name,
        _bstr_t PatternName,
        double * Value );
    long GetRestraint (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long GetSpring (
        _bstr_t Name,
        SAFEARRAY * * K );
    long GetSpringCoupled (
        _bstr_t Name,
        SAFEARRAY * * K );
    long GetTransformationMatrix (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long IsSpringCoupled (
        _bstr_t Name,
        VARIANT_BOOL * IsCoupled );
};

struct __declspec(uuid("7603bf75-2a18-421b-8660-8b4d2695c4ac"))
cAnalysisResults : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetSetup))
    cAnalysisResultsSetupPtr Setup;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long AreaForceShell (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * PointElm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * F11,
        SAFEARRAY * * F22,
        SAFEARRAY * * F12,
        SAFEARRAY * * FMax,
        SAFEARRAY * * FMin,
        SAFEARRAY * * FAngle,
        SAFEARRAY * * FVM,
        SAFEARRAY * * M11,
        SAFEARRAY * * M22,
        SAFEARRAY * * M12,
        SAFEARRAY * * MMax,
        SAFEARRAY * * MMin,
        SAFEARRAY * * MAngle,
        SAFEARRAY * * V13,
        SAFEARRAY * * V23,
        SAFEARRAY * * VMax,
        SAFEARRAY * * VAngle );
    long AreaJointForceShell (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * PointElm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * F1,
        SAFEARRAY * * F2,
        SAFEARRAY * * F3,
        SAFEARRAY * * M1,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
    long AreaStressShell (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * PointElm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * S11Top,
        SAFEARRAY * * S22Top,
        SAFEARRAY * * S12Top,
        SAFEARRAY * * SMaxTop,
        SAFEARRAY * * SMinTop,
        SAFEARRAY * * SAngleTop,
        SAFEARRAY * * SVMTop,
        SAFEARRAY * * S11Bot,
        SAFEARRAY * * S22Bot,
        SAFEARRAY * * S12Bot,
        SAFEARRAY * * SMaxBot,
        SAFEARRAY * * SMinBot,
        SAFEARRAY * * SAngleBot,
        SAFEARRAY * * SVMBot,
        SAFEARRAY * * S13Avg,
        SAFEARRAY * * S23Avg,
        SAFEARRAY * * SMaxAvg,
        SAFEARRAY * * SAngleAvg );
    long AreaStressShellLayered (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * Layer,
        SAFEARRAY * * IntPtNum,
        SAFEARRAY * * IntPtLoc,
        SAFEARRAY * * PointElm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * S11,
        SAFEARRAY * * S22,
        SAFEARRAY * * S12,
        SAFEARRAY * * SMax,
        SAFEARRAY * * SMin,
        SAFEARRAY * * SAngle,
        SAFEARRAY * * SVM,
        SAFEARRAY * * S13Avg,
        SAFEARRAY * * S23Avg,
        SAFEARRAY * * SMaxAvg,
        SAFEARRAY * * SAngleAvg );
    long AssembledJointMass (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * PointElm,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3 );
    long BaseReact (
        long * NumberResults,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * FX,
        SAFEARRAY * * FY,
        SAFEARRAY * * FZ,
        SAFEARRAY * * MX,
        SAFEARRAY * * ParamMy,
        SAFEARRAY * * MZ,
        double * GX,
        double * GY,
        double * GZ );
    long BaseReactWithCentroid (
        long * NumberResults,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * FX,
        SAFEARRAY * * FY,
        SAFEARRAY * * FZ,
        SAFEARRAY * * MX,
        SAFEARRAY * * ParamMy,
        SAFEARRAY * * MZ,
        double * GX,
        double * GY,
        double * GZ,
        SAFEARRAY * * XCentroidForFX,
        SAFEARRAY * * YCentroidForFX,
        SAFEARRAY * * ZCentroidForFX,
        SAFEARRAY * * XCentroidForFY,
        SAFEARRAY * * YCentroidForFY,
        SAFEARRAY * * ZCentroidForFY,
        SAFEARRAY * * XCentroidForFZ,
        SAFEARRAY * * YCentroidForFZ,
        SAFEARRAY * * ZCentroidForFZ );
    long BucklingFactor (
        long * NumberResults,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * Factor );
    long FrameForce (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * ObjSta,
        SAFEARRAY * * Elm,
        SAFEARRAY * * ElmSta,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * P,
        SAFEARRAY * * V2,
        SAFEARRAY * * V3,
        SAFEARRAY * * T,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
    long FrameJointForce (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * PointElm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * F1,
        SAFEARRAY * * F2,
        SAFEARRAY * * F3,
        SAFEARRAY * * M1,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
    long GeneralizedDispl (
        _bstr_t Name,
        long * NumberResults,
        SAFEARRAY * * GD,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * DType,
        SAFEARRAY * * Value );
    long JointAcc (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3 );
    long JointAccAbs (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3 );
    long JointDispl (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3 );
    long JointDisplAbs (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3 );
    long JointReact (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * F1,
        SAFEARRAY * * F2,
        SAFEARRAY * * F3,
        SAFEARRAY * * M1,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
    long JointVel (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3 );
    long JointVelAbs (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3 );
    long LinkDeformation (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3 );
    long LinkForce (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * PointElm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * P,
        SAFEARRAY * * V2,
        SAFEARRAY * * V3,
        SAFEARRAY * * T,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
    long LinkJointForce (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * PointElm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * F1,
        SAFEARRAY * * F2,
        SAFEARRAY * * F3,
        SAFEARRAY * * M1,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
    long ModalLoadParticipationRatios (
        long * NumberResults,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * ItemType,
        SAFEARRAY * * Item,
        SAFEARRAY * * Stat,
        SAFEARRAY * * Dyn );
    long ModalParticipatingMassRatios (
        long * NumberResults,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * Period,
        SAFEARRAY * * UX,
        SAFEARRAY * * UY,
        SAFEARRAY * * UZ,
        SAFEARRAY * * SumUX,
        SAFEARRAY * * SumUY,
        SAFEARRAY * * SumUZ,
        SAFEARRAY * * RX,
        SAFEARRAY * * RY,
        SAFEARRAY * * RZ,
        SAFEARRAY * * SumRX,
        SAFEARRAY * * SumRY,
        SAFEARRAY * * SumRZ );
    long ModalParticipationFactors (
        long * NumberResults,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * Period,
        SAFEARRAY * * UX,
        SAFEARRAY * * UY,
        SAFEARRAY * * UZ,
        SAFEARRAY * * RX,
        SAFEARRAY * * RY,
        SAFEARRAY * * RZ,
        SAFEARRAY * * ModalMass,
        SAFEARRAY * * ModalStiff );
    long ModalPeriod (
        long * NumberResults,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * Period,
        SAFEARRAY * * Frequency,
        SAFEARRAY * * CircFreq,
        SAFEARRAY * * EigenValue );
    long ModeShape (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3 );
    long PanelZoneDeformation (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Elm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3 );
    long PanelZoneForce (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Elm,
        SAFEARRAY * * PointElm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * P,
        SAFEARRAY * * V2,
        SAFEARRAY * * V3,
        SAFEARRAY * * T,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
    long SectionCutAnalysis (
        long * NumberResults,
        SAFEARRAY * * SCut,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * F1,
        SAFEARRAY * * F2,
        SAFEARRAY * * F3,
        SAFEARRAY * * M1,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
    long SectionCutDesign (
        long * NumberResults,
        SAFEARRAY * * SCut,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * P,
        SAFEARRAY * * V2,
        SAFEARRAY * * V3,
        SAFEARRAY * * T,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
    cAnalysisResultsSetupPtr GetSetup ( );
    long AreaStrainShell (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * PointElm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * e11top,
        SAFEARRAY * * e22top,
        SAFEARRAY * * g12top,
        SAFEARRAY * * emaxtop,
        SAFEARRAY * * emintop,
        SAFEARRAY * * eangletop,
        SAFEARRAY * * evmtop,
        SAFEARRAY * * e11bot,
        SAFEARRAY * * e22bot,
        SAFEARRAY * * g12bot,
        SAFEARRAY * * emaxbot,
        SAFEARRAY * * eminbot,
        SAFEARRAY * * eanglebot,
        SAFEARRAY * * evmbot,
        SAFEARRAY * * g13avg,
        SAFEARRAY * * g23avg,
        SAFEARRAY * * gmaxavg,
        SAFEARRAY * * gangleavg );
    long AreaStrainShellLayered (
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * Obj,
        SAFEARRAY * * Elm,
        SAFEARRAY * * Layer,
        SAFEARRAY * * IntPtNum,
        SAFEARRAY * * IntPtLoc,
        SAFEARRAY * * PointElm,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * E11,
        SAFEARRAY * * E22,
        SAFEARRAY * * G12,
        SAFEARRAY * * EMax,
        SAFEARRAY * * EMin,
        SAFEARRAY * * EAngle,
        SAFEARRAY * * EVM,
        SAFEARRAY * * g13avg,
        SAFEARRAY * * g23avg,
        SAFEARRAY * * gmaxavg,
        SAFEARRAY * * gangleavg );
    long AssembledJointMass_1 (
        _bstr_t MassSourceName,
        _bstr_t Name,
        enum eItemTypeElm ItemTypeElm,
        long * NumberResults,
        SAFEARRAY * * PointElm,
        SAFEARRAY * * MassSource,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3 );
    long PierForce (
        long * NumberResults,
        SAFEARRAY * * StoryName,
        SAFEARRAY * * PierName,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * Location,
        SAFEARRAY * * P,
        SAFEARRAY * * V2,
        SAFEARRAY * * V3,
        SAFEARRAY * * T,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
    long SpandrelForce (
        long * NumberResults,
        SAFEARRAY * * StoryName,
        SAFEARRAY * * SpandrelName,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * Location,
        SAFEARRAY * * P,
        SAFEARRAY * * V2,
        SAFEARRAY * * V3,
        SAFEARRAY * * T,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
    long JointDrifts (
        long * NumberResults,
        SAFEARRAY * * Story,
        SAFEARRAY * * Label,
        SAFEARRAY * * Name,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * DisplacementX,
        SAFEARRAY * * DisplacementY,
        SAFEARRAY * * DriftX,
        SAFEARRAY * * DriftY );
    long StoryDrifts (
        long * NumberResults,
        SAFEARRAY * * Story,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * StepType,
        SAFEARRAY * * StepNum,
        SAFEARRAY * * Direction,
        SAFEARRAY * * Drift,
        SAFEARRAY * * Label,
        SAFEARRAY * * X,
        SAFEARRAY * * Y,
        SAFEARRAY * * Z );
};

struct __declspec(uuid("751db83e-cf85-4179-b172-d8efdce7b056"))
cAnalysisResultsSetup : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long DeselectAllCasesAndCombosForOutput ( );
    long GetCaseSelectedForOutput (
        _bstr_t Name,
        VARIANT_BOOL * Selected );
    long GetComboSelectedForOutput (
        _bstr_t Name,
        VARIANT_BOOL * Selected );
    long GetOptionBaseReactLoc (
        double * GX,
        double * GY,
        double * GZ );
    long GetOptionBucklingMode (
        long * BuckModeStart,
        long * BuckModeEnd,
        VARIANT_BOOL * BuckModeAll );
    long GetOptionDirectHist (
        long * Value );
    long GetOptionModalHist (
        long * Value );
    long GetOptionModeShape (
        long * ModeShapeStart,
        long * ModeShapeEnd,
        VARIANT_BOOL * ModeShapesAll );
    long GetOptionMultiStepStatic (
        long * Value );
    long GetOptionMultiValuedCombo (
        long * Value );
    long GetOptionNLStatic (
        long * Value );
    long SetCaseSelectedForOutput (
        _bstr_t Name,
        VARIANT_BOOL Selected );
    long SetComboSelectedForOutput (
        _bstr_t Name,
        VARIANT_BOOL Selected );
    long SetOptionBaseReactLoc (
        double GX,
        double GY,
        double GZ );
    long SetOptionBucklingMode (
        long BuckModeStart,
        long BuckModeEnd,
        VARIANT_BOOL BuckModeAll );
    long SetOptionDirectHist (
        long Value );
    long SetOptionModalHist (
        long Value );
    long SetOptionModeShape (
        long ModeShapeStart,
        long ModeShapeEnd,
        VARIANT_BOOL ModeShapesAll );
    long SetOptionMultiStepStatic (
        long Value );
    long SetOptionMultiValuedCombo (
        long Value );
    long SetOptionNLStatic (
        long Value );
};

struct __declspec(uuid("90e7c3e4-5d56-40a2-ba97-3979cff08adc"))
cAnalyze : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long CreateAnalysisModel ( );
    long DeleteResults (
        _bstr_t Name,
        VARIANT_BOOL All );
    long GetActiveDOF (
        SAFEARRAY * * DOF );
    long GetCaseStatus (
        long * NumberItems,
        SAFEARRAY * * CaseName,
        SAFEARRAY * * Status );
    long GetRunCaseFlag (
        long * NumberItems,
        SAFEARRAY * * CaseName,
        SAFEARRAY * * Run );
    long GetSolverOption (
        long * SolverType,
        VARIANT_BOOL * Force32BitSolver,
        BSTR * StiffCase );
    long GetSolverOption_1 (
        long * SolverType,
        long * SolverProcessType,
        VARIANT_BOOL * Force32BitSolver,
        BSTR * StiffCase );
    long ModifyUndeformedGeometry (
        _bstr_t CaseName,
        double SF,
        long Stage,
        VARIANT_BOOL Original );
    long RunAnalysis ( );
    long SetActiveDOF (
        SAFEARRAY * * DOF );
    long SetRunCaseFlag (
        _bstr_t Name,
        VARIANT_BOOL Run,
        VARIANT_BOOL All );
    long SetSolverOption (
        long SolverType,
        VARIANT_BOOL Force32BitSolver,
        _bstr_t StiffCase );
    long SetSolverOption_1 (
        long SolverType,
        long SolverProcessType,
        VARIANT_BOOL Force32BitSolver,
        _bstr_t StiffCase );
    long ModifyUndeformedGeometryModeShape (
        _bstr_t CaseName,
        long Mode,
        double MaxDispl,
        long Direction,
        VARIANT_BOOL Original );
    long GetSolverOption_2 (
        long * SolverType,
        long * SolverProcessType,
        long * NumberParallelRuns,
        BSTR * StiffCase );
    long SetSolverOption_2 (
        long SolverType,
        long SolverProcessType,
        long NumberParallelRuns,
        _bstr_t StiffCase );
    long MergeAnalysisResults (
        _bstr_t SourceFileName );
    long GetSolverOption_3 (
        long * SolverType,
        long * SolverProcessType,
        long * NumberParallelRuns,
        long * ResponseFileSizeMaxMB,
        long * NumberAnalysisThreads,
        BSTR * StiffCase );
    long SetSolverOption_3 (
        long SolverType,
        long SolverProcessType,
        long NumberParallelRuns,
        long ResponseFileSizeMaxMB,
        long NumberAnalysisThreads,
        _bstr_t StiffCase );
    long GetDesignResponseOption (
        long * NumberDesignThreads,
        long * NumberResponseRecoveryThreads,
        long * UseMemoryMappedFilesForResponseRecovery,
        VARIANT_BOOL * ModelDifferencesOKWhenMergingResults );
    long SetDesignResponseOption (
        long NumberDesignThreads,
        long NumberResponseRecoveryThreads,
        long UseMemoryMappedFilesForResponseRecovery,
        VARIANT_BOOL ModelDifferencesOKWhenMergingResults );
};

struct __declspec(uuid("c2dc6f7f-938e-4a19-b5e8-57d8c095f5d5"))
cDCompColEurocode_4_2004 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("7209d764-b0d3-43fa-a5f5-e3bb8e2ef2d4"))
cDesignCompositeColumn : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetEurocode_4_2004))
    cDCompColEurocode_4_2004Ptr Eurocode_4_2004;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetCode (
        BSTR * CodeName );
    long GetComboDeflection (
        long * NumberItems,
        SAFEARRAY * * MyName );
    long GetComboStrength (
        long * NumberItems,
        SAFEARRAY * * MyName );
    long GetDesignSection (
        _bstr_t Name,
        BSTR * PropName );
    long GetGroup (
        long * NumberItems,
        SAFEARRAY * * MyName );
    VARIANT_BOOL GetResultsAvailable ( );
    long GetSummaryResults (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * FrameType,
        SAFEARRAY * * DesignSect,
        SAFEARRAY * * Status,
        SAFEARRAY * * PMMCombo,
        SAFEARRAY * * PMMRatio,
        SAFEARRAY * * PRatio,
        SAFEARRAY * * MMajRatio,
        SAFEARRAY * * MMinRatio,
        SAFEARRAY * * VMajCombo,
        SAFEARRAY * * VMajRatio,
        SAFEARRAY * * VMinCombo,
        SAFEARRAY * * VMinRatio,
        enum eItemType ItemType );
    long DeleteResults ( );
    long GetTargetDispl (
        long * NumberItems,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * Point,
        SAFEARRAY * * Displ,
        VARIANT_BOOL * Active );
    long GetTargetPeriod (
        long * NumberItems,
        BSTR * ModalCase,
        SAFEARRAY * * Mode,
        SAFEARRAY * * Period,
        VARIANT_BOOL * Active );
    long ResetOverwrites ( );
    long SetAutoSelectNull (
        _bstr_t Name,
        enum eItemType ItemType );
    long SetCode (
        _bstr_t CodeName );
    long SetComboDeflection (
        _bstr_t Name,
        VARIANT_BOOL Selected );
    long SetComboStrength (
        _bstr_t Name,
        VARIANT_BOOL Selected );
    long SetDesignSection (
        _bstr_t Name,
        _bstr_t PropName,
        VARIANT_BOOL LastAnalysis,
        enum eItemType ItemType );
    long SetGroup (
        _bstr_t Name,
        VARIANT_BOOL Selected );
    long SetTargetDispl (
        long NumberItems,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * Point,
        SAFEARRAY * * Displ,
        VARIANT_BOOL Active );
    long SetTargetPeriod (
        long NumberItems,
        _bstr_t ModalCase,
        SAFEARRAY * * Mode,
        SAFEARRAY * * Period,
        VARIANT_BOOL Active );
    long StartDesign ( );
    long VerifyPassed (
        long * NumberItems,
        long * N1,
        long * N2,
        SAFEARRAY * * MyName );
    long VerifySections (
        long * NumberItems,
        SAFEARRAY * * MyName );
    cDCompColEurocode_4_2004Ptr GetEurocode_4_2004 ( );
};

struct __declspec(uuid("874a1e6c-1490-40e4-ba3c-b89b9f5f3b81"))
cDCoACI350_20 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("5d7f3a1c-1995-47bb-aed5-d4c2f6ed9a66"))
cDStAustralian_AS4100_2020 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("fb5d97c6-0eeb-42a9-b3b9-3bc2fd19e04f"))
Helper;
    // interface _Object
    // [ default ] interface cHelper

struct __declspec(uuid("0e971131-d37c-4f86-ac29-eed9447fdd16"))
cHelper : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    cOAPIPtr CreateObject (
        _bstr_t fullPath );
    cOAPIPtr GetObject (
        _bstr_t typeName );
    cOAPIPtr CreateObjectProgID (
        _bstr_t progID );
    double GetOAPIVersionNumber ( );
    cOAPIPtr CreateObjectHost (
        _bstr_t hostName,
        _bstr_t fullPath );
    cOAPIPtr CreateObjectHostPort (
        _bstr_t hostName,
        long portNumber,
        _bstr_t fullPath );
    cOAPIPtr CreateObjectProgIDHost (
        _bstr_t hostName,
        _bstr_t progID );
    cOAPIPtr CreateObjectProgIDHostPort (
        _bstr_t hostName,
        long portNumber,
        _bstr_t progID );
    cOAPIPtr GetObjectHost (
        _bstr_t hostName,
        _bstr_t progID );
    cOAPIPtr GetObjectHostPort (
        _bstr_t hostName,
        long portNumber,
        _bstr_t progID );
    cOAPIPtr GetObjectProcess (
        _bstr_t typeName,
        long pid );
};

struct __declspec(uuid("bdd8c3ba-07ea-4475-9e48-7c1b7eafb8af"))
cOAPI : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetSapModel))
    cSapModelPtr SapModel;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ApplicationExit (
        VARIANT_BOOL FileSave );
    cSapModelPtr GetSapModel ( );
    double GetOAPIVersionNumber ( );
    long Hide ( );
    long Unhide ( );
    VARIANT_BOOL Visible ( );
    long SetAsActiveObject ( );
    long UnsetAsActiveObject ( );
    long InternalExec (
        long operation );
    long ApplicationStart ( );
};

struct __declspec(uuid("f0db2843-bbd6-4482-b859-00fbe390077f"))
cSapModel : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetAnalyze))
    cAnalyzePtr Analyze;
    __declspec(property(get=GetAreaElm))
    cAreaElmPtr AreaElm;
    __declspec(property(get=GetAreaObj))
    cAreaObjPtr AreaObj;
    __declspec(property(get=GetConstraintDef))
    cConstraintPtr ConstraintDef;
    __declspec(property(get=GetDesignConcrete))
    cDesignConcretePtr DesignConcrete;
    __declspec(property(get=GetDesignSteel))
    cDesignSteelPtr DesignSteel;
    __declspec(property(get=GetDesignCompositeBeam))
    cDesignCompositeBeamPtr DesignCompositeBeam;
    __declspec(property(get=GetEditArea))
    cEditAreaPtr EditArea;
    __declspec(property(get=GetEditFrame))
    cEditFramePtr EditFrame;
    __declspec(property(get=GetEditGeneral))
    cEditGeneralPtr EditGeneral;
    __declspec(property(get=GetEditPoint))
    cEditPointPtr EditPoint;
    __declspec(property(get=GetFile))
    cFilePtr File;
    __declspec(property(get=GetFrameObj))
    cFrameObjPtr FrameObj;
    __declspec(property(get=GetFunc))
    cFunctionPtr Func;
    __declspec(property(get=GetGDispl))
    cGenDisplPtr GDispl;
    __declspec(property(get=GetDesignResults))
    cDesignResultsPtr DesignResults;
    __declspec(property(get=GetDatabaseTables))
    cDatabaseTablesPtr DatabaseTables;
    __declspec(property(get=GetPierLabel))
    cPierLabelPtr PierLabel;
    __declspec(property(get=GetSpandrelLabel))
    cSpandrelLabelPtr SpandrelLabel;
    __declspec(property(get=GetDetailing))
    cDetailingPtr Detailing;
    __declspec(property(get=GetPropPointSpring))
    cPropPointSpringPtr PropPointSpring;
    __declspec(property(get=GetPropLineSpring))
    cPropLineSpringPtr PropLineSpring;
    __declspec(property(get=GetPropAreaSpring))
    cPropAreaSpringPtr PropAreaSpring;
    __declspec(property(get=GetDesignConcreteSlab))
    cDesignConcreteSlabPtr DesignConcreteSlab;
    __declspec(property(get=GetDesignShearWall))
    cDesignShearWallPtr DesignShearWall;
    __declspec(property(get=GetGroupDef))
    cGroupPtr GroupDef;
    __declspec(property(get=GetDesignCompositeColumn))
    cDesignCompositeColumnPtr DesignCompositeColumn;
    __declspec(property(get=GetLineElm))
    cLineElmPtr LineElm;
    __declspec(property(get=GetLinkElm))
    cLinkElmPtr LinkElm;
    __declspec(property(get=GetLinkObj))
    cLinkObjPtr LinkObj;
    __declspec(property(get=GetLoadCases))
    cLoadCasesPtr LoadCases;
    __declspec(property(get=GetLoadPatterns))
    cLoadPatternsPtr LoadPatterns;
    __declspec(property(get=GetOptions))
    cOptionsPtr Options;
    __declspec(property(get=GetPatternDef))
    cPatternPtr PatternDef;
    __declspec(property(get=GetPointElm))
    cPointElmPtr PointElm;
    __declspec(property(get=GetPointObj))
    cPointObjPtr PointObj;
    __declspec(property(get=GetPropArea))
    cPropAreaPtr PropArea;
    __declspec(property(get=GetPropFrame))
    cPropFramePtr PropFrame;
    __declspec(property(get=GetPropLink))
    cPropLinkPtr PropLink;
    __declspec(property(get=GetPropMaterial))
    cPropMaterialPtr PropMaterial;
    __declspec(property(get=GetPropRebar))
    cPropRebarPtr PropRebar;
    __declspec(property(get=GetPropTendon))
    cPropTendonPtr PropTendon;
    __declspec(property(get=GetRespCombo))
    cComboPtr RespCombo;
    __declspec(property(get=GetResults))
    cAnalysisResultsPtr Results;
    __declspec(property(get=GetSelectObj))
    cSelectPtr SelectObj;
    __declspec(property(get=GetTendonObj))
    cTendonObjPtr TendonObj;
    __declspec(property(get=GetView))
    cViewPtr View;
    __declspec(property(get=GetGridSys))
    cGridSysPtr GridSys;
    __declspec(property(get=GetStory))
    cStoryPtr Story;
    __declspec(property(get=GetTower))
    cTowerPtr Tower;
    __declspec(property(get=GetDiaphragm))
    cDiaphragmPtr Diaphragm;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    cAnalyzePtr GetAnalyze ( );
    cAreaElmPtr GetAreaElm ( );
    cAreaObjPtr GetAreaObj ( );
    cConstraintPtr GetConstraintDef ( );
    cDesignConcretePtr GetDesignConcrete ( );
    cDesignSteelPtr GetDesignSteel ( );
    cEditAreaPtr GetEditArea ( );
    cEditFramePtr GetEditFrame ( );
    cEditGeneralPtr GetEditGeneral ( );
    cEditPointPtr GetEditPoint ( );
    cFilePtr GetFile ( );
    cFrameObjPtr GetFrameObj ( );
    cFunctionPtr GetFunc ( );
    cGenDisplPtr GetGDispl ( );
    enum eUnits GetDatabaseUnits ( );
    long GetMergeTol (
        double * MergeTol );
    _bstr_t GetModelFilename (
        VARIANT_BOOL IncludePath );
    _bstr_t GetModelFilepath ( );
    VARIANT_BOOL GetModelIsLocked ( );
    _bstr_t GetPresentCoordSystem ( );
    enum eUnits GetPresentUnits ( );
    long GetProgramInfo (
        BSTR * ProgramName,
        BSTR * ProgramVersion,
        BSTR * ProgramLevel );
    long GetProjectInfo (
        long * NumberItems,
        SAFEARRAY * * Item,
        SAFEARRAY * * Data );
    long GetVersion (
        BSTR * Version,
        double * MyVersionNumber );
    cGroupPtr GetGroupDef ( );
    long InitializeNewModel (
        enum eUnits Units );
    cLineElmPtr GetLineElm ( );
    cLinkElmPtr GetLinkElm ( );
    cLinkObjPtr GetLinkObj ( );
    cLoadCasesPtr GetLoadCases ( );
    cLoadPatternsPtr GetLoadPatterns ( );
    cOptionsPtr GetOptions ( );
    cPatternPtr GetPatternDef ( );
    cPointElmPtr GetPointElm ( );
    cPointObjPtr GetPointObj ( );
    cPropAreaPtr GetPropArea ( );
    cPropFramePtr GetPropFrame ( );
    cPropLinkPtr GetPropLink ( );
    cPropMaterialPtr GetPropMaterial ( );
    cPropRebarPtr GetPropRebar ( );
    cPropTendonPtr GetPropTendon ( );
    cComboPtr GetRespCombo ( );
    cAnalysisResultsPtr GetResults ( );
    cSelectPtr GetSelectObj ( );
    long SetMergeTol (
        double MergeTol );
    long SetModelIsLocked (
        VARIANT_BOOL Lockit );
    long SetPresentUnits (
        enum eUnits Units );
    long SetProjectInfo (
        _bstr_t Item,
        _bstr_t Data );
    cTendonObjPtr GetTendonObj ( );
    cViewPtr GetView ( );
    cDesignResultsPtr GetDesignResults ( );
    cDatabaseTablesPtr GetDatabaseTables ( );
    cDesignCompositeBeamPtr GetDesignCompositeBeam ( );
    cGridSysPtr GetGridSys ( );
    cStoryPtr GetStory ( );
    cTowerPtr GetTower ( );
    long GetDatabaseUnits_2 (
        enum eForce * forceUnits,
        enum eLength * lengthUnits,
        enum eTemperature * temperatureUnits );
    long GetPresentUnits_2 (
        enum eForce * forceUnits,
        enum eLength * lengthUnits,
        enum eTemperature * temperatureUnits );
    long SetPresentUnits_2 (
        enum eForce forceUnits,
        enum eLength lengthUnits,
        enum eTemperature temperatureUnits );
    cDiaphragmPtr GetDiaphragm ( );
    long TreeIsUpdateSuspended (
        VARIANT_BOOL * IsSuspended );
    long TreeResumeUpdateData ( );
    long TreeSuspendUpdateData (
        VARIANT_BOOL updateAtResume );
    cPierLabelPtr GetPierLabel ( );
    cSpandrelLabelPtr GetSpandrelLabel ( );
    cDetailingPtr GetDetailing ( );
    cPropPointSpringPtr GetPropPointSpring ( );
    cPropLineSpringPtr GetPropLineSpring ( );
    cPropAreaSpringPtr GetPropAreaSpring ( );
    cDesignConcreteSlabPtr GetDesignConcreteSlab ( );
    cDesignShearWallPtr GetDesignShearWall ( );
    cDesignCompositeColumnPtr GetDesignCompositeColumn ( );
};

struct __declspec(uuid("ab4b15aa-780a-4047-a814-3b1a83cbd26b"))
cPluginContract : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    HRESULT Main (
        struct cSapModel * * SapModel,
        struct cPluginCallback * * ISapPlugin );
    long Info (
        BSTR * Text );
};

struct __declspec(uuid("496fb743-26af-47c5-a713-c1b5ca85106c"))
cPluginCallback : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetErrorFlag))
    long ErrorFlag;
    __declspec(property(get=GetFinished))
    VARIANT_BOOL Finished;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetErrorFlag ( );
    HRESULT Finish (
        long iVal );
    VARIANT_BOOL GetFinished ( );
};

struct __declspec(uuid("ee65dabe-cd3c-4028-9c2a-2c1a224ee264"))
cGenRefLine : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("8ce65d2b-f765-4206-8a1f-ca40afe31049"))
cGridSys : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count ( );
    long Delete (
        _bstr_t Name );
    long GetGridSys (
        _bstr_t Name,
        double * X,
        double * Y,
        double * RZ );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetTransformationMatrix (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long SetGridSys (
        _bstr_t Name,
        double X,
        double Y,
        double RZ );
    long GetGridSys_2 (
        _bstr_t Name,
        double * Xo,
        double * Yo,
        double * RZ,
        BSTR * GridSysType,
        long * NumXLines,
        long * NumYLines,
        SAFEARRAY * * GridLineIDX,
        SAFEARRAY * * GridLineIDY,
        SAFEARRAY * * OrdinateX,
        SAFEARRAY * * OrdinateY,
        SAFEARRAY * * VisibleX,
        SAFEARRAY * * VisibleY,
        SAFEARRAY * * BubbleLocX,
        SAFEARRAY * * BubbleLocY );
    long GetGridSysType (
        _bstr_t Name,
        BSTR * GridSysType );
    long GetNameTypeList (
        long * NumberNames,
        SAFEARRAY * * GridSysName,
        SAFEARRAY * * GridSysType );
    long GetGridSysCartesian (
        _bstr_t Name,
        double * Xo,
        double * Yo,
        double * RZ,
        VARIANT_BOOL * StoryRangeIsDefault,
        BSTR * TopStory,
        BSTR * BottomStory,
        double * BubbleSize,
        long * GridColor,
        long * NumXLines,
        SAFEARRAY * * GridLineIDX,
        SAFEARRAY * * OrdinateX,
        SAFEARRAY * * VisibleX,
        SAFEARRAY * * BubbleLocX,
        long * NumYLines,
        SAFEARRAY * * GridLineIDY,
        SAFEARRAY * * OrdinateY,
        SAFEARRAY * * VisibleY,
        SAFEARRAY * * BubbleLocY,
        long * NumGenLines,
        SAFEARRAY * * GridLineIDGen,
        SAFEARRAY * * GenOrdX1,
        SAFEARRAY * * GenOrdY1,
        SAFEARRAY * * GenOrdX2,
        SAFEARRAY * * GenOrdY2,
        SAFEARRAY * * VisibleGen,
        SAFEARRAY * * BubbleLocGen );
    long GetGridSysCylindrical (
        _bstr_t Name,
        double * Xo,
        double * Yo,
        double * RZ,
        VARIANT_BOOL * StoryRangeIsDefault,
        BSTR * TopStory,
        BSTR * BottomStory,
        double * BubbleSize,
        long * GridColor,
        long * NumRLines,
        SAFEARRAY * * GridLineIDR,
        SAFEARRAY * * OrdinateR,
        SAFEARRAY * * VisibleR,
        SAFEARRAY * * BubbleLocR,
        long * NumTLines,
        SAFEARRAY * * GridLineIDT,
        SAFEARRAY * * OrdinateT,
        SAFEARRAY * * VisibleT,
        SAFEARRAY * * BubbleLocT );
};

struct __declspec(uuid("0597c1a0-a026-4dd7-92e0-833257f52803"))
cDiaphragm : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Delete (
        _bstr_t Name );
    long GetDiaphragm (
        _bstr_t Name,
        VARIANT_BOOL * SemiRigid );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long SetDiaphragm (
        _bstr_t Name,
        VARIANT_BOOL SemiRigid );
};

struct __declspec(uuid("d0ce6fbb-5a4f-4dbb-a51d-039b106285e0"))
cNamedSet : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("c16857e5-ed00-43fa-be26-8bed766e77ad"))
cSpandrelLabel : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Delete (
        _bstr_t Name );
    long GetSpandrel (
        _bstr_t Name,
        VARIANT_BOOL * IsMultiStory );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName,
        SAFEARRAY * * IsMultiStory );
    long SetSpandrel (
        _bstr_t Name,
        VARIANT_BOOL IsMultiStory );
    long GetSectionProperties (
        _bstr_t Name,
        long * NumberStories,
        SAFEARRAY * * StoryName,
        SAFEARRAY * * NumAreaObj,
        SAFEARRAY * * NumLineObj,
        SAFEARRAY * * Length,
        SAFEARRAY * * DepthLeft,
        SAFEARRAY * * ThickLeft,
        SAFEARRAY * * DepthRight,
        SAFEARRAY * * ThickRight,
        SAFEARRAY * * MatProp,
        SAFEARRAY * * CGLeftX,
        SAFEARRAY * * CGLeftY,
        SAFEARRAY * * CGLeftZ,
        SAFEARRAY * * CGRightX,
        SAFEARRAY * * CGRightY,
        SAFEARRAY * * CGRightZ );
};

struct __declspec(uuid("694be161-f785-4f24-8520-9f3890f781e1"))
cPierLabel : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Delete (
        _bstr_t Name );
    long GetPier (
        _bstr_t Name );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetSectionProperties (
        _bstr_t Name,
        long * NumberStories,
        SAFEARRAY * * StoryName,
        SAFEARRAY * * AxisAngle,
        SAFEARRAY * * NumAreaObjs,
        SAFEARRAY * * NumLineObjs,
        SAFEARRAY * * WidthBot,
        SAFEARRAY * * ThicknessBot,
        SAFEARRAY * * WidthTop,
        SAFEARRAY * * ThicknessTop,
        SAFEARRAY * * MatProp,
        SAFEARRAY * * CGBotX,
        SAFEARRAY * * CGBotY,
        SAFEARRAY * * CGBotZ,
        SAFEARRAY * * CGTopX,
        SAFEARRAY * * CGTopY,
        SAFEARRAY * * CGTopZ );
    long SetPier (
        _bstr_t Name );
};

struct __declspec(uuid("5fafc96f-2286-4c5c-a576-b40aa0727125"))
cStory : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetElevation (
        _bstr_t Name,
        double * Elevation );
    long GetGUID (
        _bstr_t Name,
        BSTR * GUID );
    long GetHeight (
        _bstr_t Name,
        double * Height );
    long GetMasterStory (
        _bstr_t Name,
        VARIANT_BOOL * IsMasterStory );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetSimilarTo (
        _bstr_t Name,
        VARIANT_BOOL * IsMasterStory,
        BSTR * SimilarToStory );
    long GetSplice (
        _bstr_t Name,
        VARIANT_BOOL * SpliceAbove,
        double * SpliceHeight );
    long GetStories (
        long * NumberStories,
        SAFEARRAY * * StoryNames,
        SAFEARRAY * * StoryElevations,
        SAFEARRAY * * StoryHeights,
        SAFEARRAY * * IsMasterStory,
        SAFEARRAY * * SimilarToStory,
        SAFEARRAY * * SpliceAbove,
        SAFEARRAY * * SpliceHeight );
    long SetGUID (
        _bstr_t Name,
        _bstr_t GUID );
    long SetElevation (
        _bstr_t Name,
        double Elevation );
    long SetHeight (
        _bstr_t Name,
        double Height );
    long SetMasterStory (
        _bstr_t Name,
        VARIANT_BOOL IsMasterStory );
    long SetSimilarTo (
        _bstr_t Name,
        _bstr_t SimilarToStory );
    long SetSplice (
        _bstr_t Name,
        VARIANT_BOOL SpliceAbove,
        double SpliceHeight );
    long SetStories (
        SAFEARRAY * StoryNames,
        SAFEARRAY * StoryElevations,
        SAFEARRAY * StoryHeights,
        SAFEARRAY * IsMasterStory,
        SAFEARRAY * SimilarToStory,
        SAFEARRAY * SpliceAbove,
        SAFEARRAY * SpliceHeight );
    long GetStories_2 (
        double * BaseElevation,
        long * NumberStories,
        SAFEARRAY * * StoryNames,
        SAFEARRAY * * StoryElevations,
        SAFEARRAY * * StoryHeights,
        SAFEARRAY * * IsMasterStory,
        SAFEARRAY * * SimilarToStory,
        SAFEARRAY * * SpliceAbove,
        SAFEARRAY * * SpliceHeight,
        SAFEARRAY * * color );
    long SetStories_2 (
        double BaseElevation,
        long NumberStories,
        SAFEARRAY * * StoryNames,
        SAFEARRAY * * StoryHeights,
        SAFEARRAY * * IsMasterStory,
        SAFEARRAY * * SimilarToStory,
        SAFEARRAY * * SpliceAbove,
        SAFEARRAY * * SpliceHeight,
        SAFEARRAY * * color );
};

struct __declspec(uuid("a7358245-1148-4351-bbea-b8c46781d7dd"))
cCombo : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long Add (
        _bstr_t Name,
        long ComboType );
    long AddDesignDefaultCombos (
        VARIANT_BOOL DesignSteel,
        VARIANT_BOOL DesignConcrete,
        VARIANT_BOOL DesignAluminum,
        VARIANT_BOOL DesignColdFormed );
    long Delete (
        _bstr_t Name );
    long DeleteCase (
        _bstr_t Name,
        enum eCNameType CNameType,
        _bstr_t CName );
    long GetCaseList (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * CNameType,
        SAFEARRAY * * CName,
        SAFEARRAY * * SF );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long SetCaseList (
        _bstr_t Name,
        enum eCNameType * CNameType,
        _bstr_t CName,
        double SF );
    long GetTypeOAPI (
        _bstr_t Name,
        long * ComboType );
    long GetCaseList_1 (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * CNameType,
        SAFEARRAY * * CName,
        SAFEARRAY * * ModeNumber,
        SAFEARRAY * * SF );
    long SetCaseList_1 (
        _bstr_t Name,
        enum eCNameType * CNameType,
        _bstr_t CName,
        long ModeNumber,
        double SF );
    long GetTypeCombo (
        _bstr_t Name,
        long * ComboType );
};

struct __declspec(uuid("99156786-2a94-4cad-819f-e91d1635d96b"))
cConstraint : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long Delete (
        _bstr_t Name );
    long GetDiaphragm (
        _bstr_t Name,
        enum eConstraintAxis * Axis,
        BSTR * CSys );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long SetDiaphragm (
        _bstr_t Name,
        enum eConstraintAxis Axis,
        _bstr_t CSys );
};

struct __declspec(uuid("8a69b84b-5e5b-4f2c-bfa9-b7a558a9d310"))
cGenDispl : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long Add (
        _bstr_t Name,
        long MyType );
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count ( );
    long CountPoint (
        _bstr_t Name,
        long * Count );
    long Delete (
        _bstr_t Name );
    long DeletePoint (
        _bstr_t Name,
        _bstr_t PointName );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetPoint (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * PointName,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3 );
    long GetTypeOAPI (
        _bstr_t Name,
        long * MyType );
    long SetPoint (
        _bstr_t Name,
        _bstr_t PointName,
        SAFEARRAY * * SF );
    long SetType (
        _bstr_t Name,
        long MyType );
    long SetTypeOAPI (
        _bstr_t Name,
        long MyType );
    long GetTypeGenDispl (
        _bstr_t Name,
        long * MyType );
};

struct __declspec(uuid("f6cfa75c-835a-4e25-8f72-a60227d4a975"))
cGroup : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long Count ( );
    long Delete (
        _bstr_t Name );
    long GetAssignments (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * ObjectType,
        SAFEARRAY * * ObjectName );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetGroup (
        _bstr_t Name,
        long * color,
        VARIANT_BOOL * SpecifiedForSelection,
        VARIANT_BOOL * SpecifiedForSectionCutDefinition,
        VARIANT_BOOL * SpecifiedForSteelDesign,
        VARIANT_BOOL * SpecifiedForConcreteDesign,
        VARIANT_BOOL * SpecifiedForAluminumDesign,
        VARIANT_BOOL * SpecifiedForColdFormedDesign,
        VARIANT_BOOL * SpecifiedForStaticNLActiveStage,
        VARIANT_BOOL * SpecifiedForBridgeResponseOutput,
        VARIANT_BOOL * SpecifiedForAutoSeismicOutput,
        VARIANT_BOOL * SpecifiedForAutoWindOutput,
        VARIANT_BOOL * SpecifiedForMassAndWeight );
    long SetGroup (
        _bstr_t Name,
        long color,
        VARIANT_BOOL SpecifiedForSelection,
        VARIANT_BOOL SpecifiedForSectionCutDefinition,
        VARIANT_BOOL SpecifiedForSteelDesign,
        VARIANT_BOOL SpecifiedForConcreteDesign,
        VARIANT_BOOL SpecifiedForAluminumDesign,
        VARIANT_BOOL SpecifiedForColdFormedDesign,
        VARIANT_BOOL SpecifiedForStaticNLActiveStage,
        VARIANT_BOOL SpecifiedForBridgeResponseOutput,
        VARIANT_BOOL SpecifiedForAutoSeismicOutput,
        VARIANT_BOOL SpecifiedForAutoWindOutput,
        VARIANT_BOOL SpecifiedForMassAndWeight );
    long GetGroup_1 (
        _bstr_t Name,
        long * color,
        VARIANT_BOOL * SpecifiedForSelection,
        VARIANT_BOOL * SpecifiedForSectionCutDefinition,
        VARIANT_BOOL * SpecifiedForSteelDesign,
        VARIANT_BOOL * SpecifiedForConcreteDesign,
        VARIANT_BOOL * SpecifiedForAluminumDesign,
        VARIANT_BOOL * SpecifiedForStaticNLActiveStage,
        VARIANT_BOOL * SpecifiedForAutoSeismicOutput,
        VARIANT_BOOL * SpecifiedForAutoWindOutput,
        VARIANT_BOOL * SpecifiedForMassAndWeight,
        VARIANT_BOOL * SpecifiedForSteelJoistDesign,
        VARIANT_BOOL * SpecifiedForWallDesign,
        VARIANT_BOOL * SpecifiedForBasePlateDesign,
        VARIANT_BOOL * SpecifiedForConnectionDesign );
    long SetGroup_1 (
        _bstr_t Name,
        long color,
        VARIANT_BOOL SpecifiedForSelection,
        VARIANT_BOOL SpecifiedForSectionCutDefinition,
        VARIANT_BOOL SpecifiedForSteelDesign,
        VARIANT_BOOL SpecifiedForConcreteDesign,
        VARIANT_BOOL SpecifiedForAluminumDesign,
        VARIANT_BOOL SpecifiedForStaticNLActiveStage,
        VARIANT_BOOL SpecifiedForAutoSeismicOutput,
        VARIANT_BOOL SpecifiedForAutoWindOutput,
        VARIANT_BOOL SpecifiedForMassAndWeight,
        VARIANT_BOOL SpecifiedForSteelJoistDesign,
        VARIANT_BOOL SpecifiedForWallDesign,
        VARIANT_BOOL SpecifiedForBasePlateDesign,
        VARIANT_BOOL SpecifiedForConnectionDesign );
};

struct __declspec(uuid("974a9f01-aa67-402c-b95d-ec3892ab317c"))
cPattern : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("b81c2252-779b-4228-b5f4-f979434bb692"))
cTower : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long AddCopyOfTower (
        _bstr_t TowerName,
        _bstr_t NewTowerName );
    long AddNewTower (
        _bstr_t TowerName,
        long NumberStories,
        double TypicalStoryHeight,
        double BotttomStoryHeight );
    long AllowMultipleTowers (
        VARIANT_BOOL AllowMultTowers,
        _bstr_t RetainedTower,
        VARIANT_BOOL Combine );
    long DeleteTower (
        _bstr_t TowerName,
        VARIANT_BOOL Associate,
        _bstr_t AssocWithTower );
    long GetActiveTower (
        BSTR * TowerName );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long RenameTower (
        _bstr_t TowerName,
        _bstr_t NewTowerName );
    long SetActiveTower (
        _bstr_t TowerName );
};

struct __declspec(uuid("36b7c3db-1a91-41ed-b443-1a102383b731"))
cFunction : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetFuncRS))
    cFunctionRSPtr FuncRS;
    __declspec(property(get=GetFuncTH))
    cFunctionTHPtr FuncTH;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long ConvertToUser (
        _bstr_t Name );
    long Count (
        long FuncType );
    long Delete (
        _bstr_t Name );
    cFunctionRSPtr GetFuncRS ( );
    cFunctionTHPtr GetFuncTH ( );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName,
        long FuncType );
    long GetTypeOAPI (
        _bstr_t Name,
        long * FuncType,
        long * AddType );
    long GetValues (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * MyTime,
        SAFEARRAY * * Value );
};

struct __declspec(uuid("f4ea1f46-b9c3-4d4b-ad95-c951d919a26e"))
cFunctionRS : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetNTC2008 (
        _bstr_t Name,
        long * ParamsOption,
        double * Latitude,
        double * Longitude,
        long * Island,
        long * LimitState,
        long * UsageClass,
        double * NomLife,
        double * PeakAccel,
        double * F0,
        double * Tcs,
        long * SpecType,
        long * SoilType,
        long * Topography,
        double * hRatio,
        double * Damping,
        double * q );
    long SetNTC2008 (
        _bstr_t Name,
        long ParamsOption,
        double Latitude,
        double Longitude,
        long Island,
        long LimitState,
        long UsageClass,
        double NomLife,
        double PeakAccel,
        double F0,
        double Tcs,
        long SpecType,
        long SoilType,
        long Topography,
        double hRatio,
        double Damping,
        double q );
    long GetNTC2018 (
        _bstr_t Name,
        long * ParamsOption,
        double * Latitude,
        double * Longitude,
        long * Island,
        long * LimitState,
        long * UsageClass,
        double * NomLife,
        double * PeakAccel,
        double * F0,
        double * Tcs,
        long * SpecType,
        long * SoilType,
        long * Topography,
        double * hRatio,
        double * Damping,
        double * q );
    long SetNTC2018 (
        _bstr_t Name,
        long ParamsOption,
        double Latitude,
        double Longitude,
        long Island,
        long LimitState,
        long UsageClass,
        double NomLife,
        double PeakAccel,
        double F0,
        double Tcs,
        long SpecType,
        long SoilType,
        long Topography,
        double hRatio,
        double Damping,
        double q );
};

struct __declspec(uuid("618c5ad5-5e03-4972-9262-380ec3fecb87"))
cFunctionTH : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("d67f622b-dea3-4618-aad2-994bd3460f7d"))
cCaseBuckling : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("b1ec6f45-f1e3-4489-a9b5-5baa3f6ff957"))
cCaseDirectHistoryLinear : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetLoads (
        _bstr_t Name,
        long * NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * Func,
        SAFEARRAY * * SF,
        SAFEARRAY * * Tf,
        SAFEARRAY * * At,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Ang );
};

struct __declspec(uuid("961a9e5b-b81e-4b18-92f2-b42593550890"))
cCaseDirectHistoryNonlinear : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetLoads (
        _bstr_t Name,
        long * NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * Func,
        SAFEARRAY * * SF,
        SAFEARRAY * * Tf,
        SAFEARRAY * * At,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Ang );
};

struct __declspec(uuid("9759bdde-079e-4331-9eca-fcc294dcd09f"))
cCaseHyperStatic : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetBaseCase (
        _bstr_t Name,
        BSTR * HyperStaticCase );
    long SetBaseCase (
        _bstr_t Name,
        _bstr_t HyperStaticCase );
    long SetCase (
        _bstr_t Name );
};

struct __declspec(uuid("99cebb74-fd82-404b-9b24-8679ee4bf5c2"))
cCaseModalEigen : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetInitialCase (
        _bstr_t Name,
        BSTR * InitialCase );
    long GetLoads (
        _bstr_t Name,
        long * NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * TargetPar,
        SAFEARRAY * * StaticCorrect );
    long GetNumberModes (
        _bstr_t Name,
        long * MaxModes,
        long * MinModes );
    long GetParameters (
        _bstr_t Name,
        double * EigenShiftFreq,
        double * EigenCutOff,
        double * EigenTol,
        long * AllowAutoFreqShift );
    long SetCase (
        _bstr_t Name );
    long SetInitialCase (
        _bstr_t Name,
        _bstr_t InitialCase );
    long SetLoads (
        _bstr_t Name,
        long NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * TargetPar,
        SAFEARRAY * * StaticCorrect );
    long SetNumberModes (
        _bstr_t Name,
        long MaxModes,
        long MinModes );
    long SetParameters (
        _bstr_t Name,
        double EigenShiftFreq,
        double EigenCutOff,
        double EigenTol,
        long AllowAutoFreqShift );
};

struct __declspec(uuid("89d6da7f-45b2-4c28-81e8-77db817fdb9c"))
cCaseModalHistoryLinear : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetLoads (
        _bstr_t Name,
        long * NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * Func,
        SAFEARRAY * * SF,
        SAFEARRAY * * Tf,
        SAFEARRAY * * At,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Ang );
    long SetCase (
        _bstr_t Name );
    long SetLoads (
        _bstr_t Name,
        long NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * Func,
        SAFEARRAY * * SF,
        SAFEARRAY * * Tf,
        SAFEARRAY * * At,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Ang );
};

struct __declspec(uuid("81ffbed7-4cf9-44b0-bede-38195e5c6b52"))
cCaseModalHistoryNonlinear : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetLoads (
        _bstr_t Name,
        long * NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * Func,
        SAFEARRAY * * SF,
        SAFEARRAY * * Tf,
        SAFEARRAY * * At,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Ang );
};

struct __declspec(uuid("bc3315e4-2774-497e-97b0-e5861d0cee16"))
cCaseModalRitz : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetInitialCase (
        _bstr_t Name,
        BSTR * InitialCase );
    long GetLoads (
        _bstr_t Name,
        long * NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * RitzMaxCyc,
        SAFEARRAY * * TargetPar );
    long GetNumberModes (
        _bstr_t Name,
        long * MaxModes,
        long * MinModes );
    long SetCase (
        _bstr_t Name );
    long SetInitialCase (
        _bstr_t Name,
        _bstr_t InitialCase );
    long SetLoads (
        _bstr_t Name,
        long NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * RitzMaxCyc,
        SAFEARRAY * * TargetPar );
    long SetNumberModes (
        _bstr_t Name,
        long MaxModes,
        long MinModes );
};

struct __declspec(uuid("cdaad35b-4090-4499-aa8b-615af5aa2b0d"))
cCaseResponseSpectrum : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetDampConstant (
        _bstr_t Name,
        double * Damp );
    long GetDampInterpolated (
        _bstr_t Name,
        long * DampType,
        long * NumberItems,
        SAFEARRAY * * Time,
        SAFEARRAY * * Damp );
    long GetDampOverrides (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * Mode,
        SAFEARRAY * * Damp );
    long GetDampProportional (
        _bstr_t Name,
        long * DampType,
        double * DampA,
        double * DampB,
        double * DampF1,
        double * DampF2,
        double * DampD1,
        double * DampD2 );
    long GetDampType (
        _bstr_t Name,
        long * DampType );
    long GetDiaphragmEccentricityOverride (
        _bstr_t Name,
        long * Num,
        SAFEARRAY * * Diaph,
        SAFEARRAY * * Eccen );
    long GetDirComb (
        _bstr_t Name,
        long * MyType,
        double * SF );
    long GetEccentricity (
        _bstr_t Name,
        double * Eccen );
    long GetLoads (
        _bstr_t Name,
        long * NumberLoads,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * Func,
        SAFEARRAY * * SF,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Ang );
    long GetModalCase (
        _bstr_t Name,
        BSTR * ModalCase );
    long GetModalComb (
        _bstr_t Name,
        long * MyType,
        double * F1,
        double * F2,
        double * Td );
    long GetModalComb_1 (
        _bstr_t Name,
        long * MyType,
        double * F1,
        double * F2,
        long * PeriodicRigidCombType,
        double * Td );
    long SetCase (
        _bstr_t Name );
    long SetEccentricity (
        _bstr_t Name,
        double Eccen );
    long SetLoads (
        _bstr_t Name,
        long NumberLoads,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * Func,
        SAFEARRAY * * SF,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Ang );
    long SetModalCase (
        _bstr_t Name,
        _bstr_t ModalCase );
};

struct __declspec(uuid("ae73755e-671c-4fb1-8778-4191654f5cde"))
cCaseStaticLinear : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetInitialCase (
        _bstr_t Name,
        BSTR * InitialCase );
    long GetLoads (
        _bstr_t Name,
        long * NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * SF );
    long SetCase (
        _bstr_t Name );
    long SetInitialCase (
        _bstr_t Name,
        _bstr_t InitialCase );
    long SetLoads (
        _bstr_t Name,
        long NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * SF );
};

struct __declspec(uuid("adab597e-ec5a-43c6-9910-1c70912766f6"))
cCaseStaticNonlinear : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetGeometricNonlinearity (
        _bstr_t Name,
        long * NLGeomType );
    long GetHingeUnloading (
        _bstr_t Name,
        long * UnloadType );
    long GetInitialCase (
        _bstr_t Name,
        BSTR * InitialCase );
    long GetLoadApplication (
        _bstr_t Name,
        long * LoadControl,
        long * DispType,
        double * Displ,
        long * Monitor,
        long * DOF,
        BSTR * PointName,
        BSTR * GDispl );
    long GetLoads (
        _bstr_t Name,
        long * NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * SF );
    long GetModalCase (
        _bstr_t Name,
        BSTR * ModalCase );
    long GetResultsSaved (
        _bstr_t Name,
        VARIANT_BOOL * SaveMultipleSteps,
        long * MinSavedStates,
        long * MaxSavedStates,
        VARIANT_BOOL * PositiveOnly );
    long GetSolControlParameters (
        _bstr_t Name,
        long * MaxTotalSteps,
        long * MaxFailedSubSteps,
        long * MaxIterCS,
        long * MaxIterNR,
        double * TolConvD,
        VARIANT_BOOL * UseEventStepping,
        double * TolEventD,
        long * MaxLineSearchPerIter,
        double * TolLineSearch,
        double * LineSearchStepFact );
    long GetTargetForceParameters (
        _bstr_t Name,
        double * TolConvF,
        long * MaxIter,
        double * AccelFact,
        VARIANT_BOOL * NoStop );
    long SetCase (
        _bstr_t Name );
    long SetGeometricNonlinearity (
        _bstr_t Name,
        long NLGeomType );
    long SetHingeUnloading (
        _bstr_t Name,
        long UnloadType );
    long SetInitialCase (
        _bstr_t Name,
        _bstr_t InitialCase );
    long SetLoadApplication (
        _bstr_t Name,
        long LoadControl,
        long DispType,
        double Displ,
        long Monitor,
        long DOF,
        _bstr_t PointName,
        _bstr_t GDispl );
    long SetLoads (
        _bstr_t Name,
        long NumberLoads,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * SF );
    long SetModalCase (
        _bstr_t Name,
        _bstr_t ModalCase );
    long SetResultsSaved (
        _bstr_t Name,
        VARIANT_BOOL SaveMultipleSteps,
        long MinSavedStates,
        long MaxSavedStates,
        VARIANT_BOOL PositiveOnly );
    long SetSolControlParameters (
        _bstr_t Name,
        long MaxTotalSteps,
        long MaxFailedSubSteps,
        long MaxIterCS,
        long MaxIterNR,
        double TolConvD,
        VARIANT_BOOL UseEventStepping,
        double TolEventD,
        long MaxLineSearchPerIter,
        double TolLineSearch,
        double LineSearchStepFact );
    long SetTargetForceParameters (
        _bstr_t Name,
        double TolConvF,
        long MaxIter,
        double AccelFact,
        VARIANT_BOOL NoStop );
    long GetMassSource (
        _bstr_t Name,
        BSTR * mSource );
    long SetMassSource (
        _bstr_t Name,
        _bstr_t mSource );
};

struct __declspec(uuid("2cb60d1d-af61-4e6c-9859-f19c58df4901"))
cCaseStaticNonlinearStaged : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetGeometricNonlinearity (
        _bstr_t Name,
        long * NLGeomType );
    long GetHingeUnloading (
        _bstr_t Name,
        long * UnloadType );
    long GetInitialCase (
        _bstr_t Name,
        BSTR * InitialCase );
    long GetMaterialNonlinearity (
        _bstr_t Name,
        VARIANT_BOOL * TimeDepMatProp );
    long GetResultsSaved (
        _bstr_t Name,
        long * StagedSaveOption,
        long * StagedMinSteps,
        long * StagedMinStepsTD );
    long GetSolControlParameters (
        _bstr_t Name,
        long * MaxTotalSteps,
        long * MaxFailedSubSteps,
        long * MaxIterCS,
        long * MaxIterNR,
        double * TolConvD,
        VARIANT_BOOL * UseEventStepping,
        double * TolEventD,
        long * MaxLineSearchPerIter,
        double * TolLineSearch,
        double * LineSearchStepFact );
    long GetStageData (
        _bstr_t Name,
        long * Stage,
        long * NumberOperations,
        SAFEARRAY * * operation,
        SAFEARRAY * * GroupName,
        SAFEARRAY * * Age,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * SF );
    long GetStageData_1 (
        _bstr_t Name,
        long * Stage,
        long * NumberOperations,
        SAFEARRAY * * operation,
        SAFEARRAY * * ObjectType,
        SAFEARRAY * * ObjectName,
        SAFEARRAY * * Age,
        SAFEARRAY * * MyType,
        SAFEARRAY * * MyName,
        SAFEARRAY * * SF );
    long GetStageDefinitions (
        _bstr_t Name,
        long * NumberStages,
        SAFEARRAY * * Duration,
        SAFEARRAY * * Comment );
    long GetStageDefinitions_1 (
        _bstr_t Name,
        long * NumberStages,
        SAFEARRAY * * Duration,
        SAFEARRAY * * Output,
        SAFEARRAY * * OutputName,
        SAFEARRAY * * Comment );
    long GetTargetForceParameters (
        _bstr_t Name,
        double * TolConvF,
        long * MaxIter,
        double * AccelFact,
        VARIANT_BOOL * NoStop );
    long SetCase (
        _bstr_t Name );
    long SetGeometricNonlinearity (
        _bstr_t Name,
        long NLGeomType );
    long SetHingeUnloading (
        _bstr_t Name,
        long UnloadType );
    long SetInitialCase (
        _bstr_t Name,
        _bstr_t InitialCase );
    long SetMaterialNonlinearity (
        _bstr_t Name,
        VARIANT_BOOL TimeDepMatProp );
    long SetResultsSaved (
        _bstr_t Name,
        long StagedSaveOption,
        long StagedMinSteps,
        long StagedMinStepsTD );
    long SetSolControlParameters (
        _bstr_t Name,
        long MaxTotalSteps,
        long MaxFailedSubSteps,
        long MaxIterCS,
        long MaxIterNR,
        double TolConvD,
        VARIANT_BOOL UseEventStepping,
        double TolEventD,
        long MaxLineSearchPerIter,
        double TolLineSearch,
        double LineSearchStepFact );
    long SetStageData (
        _bstr_t Name,
        long Stage,
        long NumberOperations,
        SAFEARRAY * * operation,
        SAFEARRAY * * GroupName,
        SAFEARRAY * * Age,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadName,
        SAFEARRAY * * SF );
    long SetStageData_1 (
        _bstr_t Name,
        long Stage,
        long NumberOperations,
        SAFEARRAY * * operation,
        SAFEARRAY * * ObjectType,
        SAFEARRAY * * ObjectName,
        SAFEARRAY * * Age,
        SAFEARRAY * * MyType,
        SAFEARRAY * * MyName,
        SAFEARRAY * * SF );
    long SetStageDefinitions (
        _bstr_t Name,
        long NumberStages,
        SAFEARRAY * * Duration,
        SAFEARRAY * * Comment );
    long SetStageDefinitions_1 (
        _bstr_t Name,
        long NumberStages,
        SAFEARRAY * * Duration,
        SAFEARRAY * * Output,
        SAFEARRAY * * OutputName,
        SAFEARRAY * * Comment );
    long SetTargetForceParameters (
        _bstr_t Name,
        double TolConvF,
        long MaxIter,
        double AccelFact,
        VARIANT_BOOL NoStop );
    long GetMassSource (
        _bstr_t Name,
        BSTR * mSource );
    long SetMassSource (
        _bstr_t Name,
        _bstr_t mSource );
    long GetStageData_2 (
        _bstr_t Name,
        long * Stage,
        long * NumberOperations,
        SAFEARRAY * * operation,
        SAFEARRAY * * ObjectType,
        SAFEARRAY * * ObjectName,
        SAFEARRAY * * Age,
        SAFEARRAY * * MyType,
        SAFEARRAY * * MyName,
        SAFEARRAY * * SF );
    long GetStageDefinitions_2 (
        _bstr_t Name,
        long * NumberStages,
        SAFEARRAY * * Duration,
        SAFEARRAY * * Output,
        SAFEARRAY * * OutputName,
        SAFEARRAY * * Comment );
    long SetStageData_2 (
        _bstr_t Name,
        long Stage,
        long NumberOperations,
        SAFEARRAY * * operation,
        SAFEARRAY * * ObjectType,
        SAFEARRAY * * ObjectName,
        SAFEARRAY * * Age,
        SAFEARRAY * * MyType,
        SAFEARRAY * * MyName,
        SAFEARRAY * * SF );
    long SetStageDefinitions_2 (
        _bstr_t Name,
        long NumberStages,
        SAFEARRAY * * Duration,
        SAFEARRAY * * Output,
        SAFEARRAY * * OutputName,
        SAFEARRAY * * Comment );
};

struct __declspec(uuid("2c074d0a-041a-4a19-a068-0f947de89054"))
cLoadCases : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetBuckling))
    cCaseBucklingPtr Buckling;
    __declspec(property(get=GetDirHistLinear))
    cCaseDirectHistoryLinearPtr DirHistLinear;
    __declspec(property(get=GetDirHistNonlinear))
    cCaseDirectHistoryNonlinearPtr DirHistNonlinear;
    __declspec(property(get=GetHyperStatic))
    cCaseHyperStaticPtr HyperStatic;
    __declspec(property(get=GetModalEigen))
    cCaseModalEigenPtr ModalEigen;
    __declspec(property(get=GetModalRitz))
    cCaseModalRitzPtr ModalRitz;
    __declspec(property(get=GetModHistLinear))
    cCaseModalHistoryLinearPtr ModHistLinear;
    __declspec(property(get=GetModHistNonlinear))
    cCaseModalHistoryNonlinearPtr ModHistNonlinear;
    __declspec(property(get=GetResponseSpectrum))
    cCaseResponseSpectrumPtr ResponseSpectrum;
    __declspec(property(get=GetStaticLinear))
    cCaseStaticLinearPtr StaticLinear;
    __declspec(property(get=GetStaticNonlinear))
    cCaseStaticNonlinearPtr StaticNonlinear;
    __declspec(property(get=GetStaticNonlinearStaged))
    cCaseStaticNonlinearStagedPtr StaticNonlinearStaged;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    cCaseBucklingPtr GetBuckling ( );
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count (
        enum eLoadCaseType CaseType );
    long Delete (
        _bstr_t Name );
    cCaseDirectHistoryLinearPtr GetDirHistLinear ( );
    cCaseDirectHistoryNonlinearPtr GetDirHistNonlinear ( );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName,
        enum eLoadCaseType CaseType );
    long GetTypeOAPI_1 (
        _bstr_t Name,
        enum eLoadCaseType * CaseType,
        long * SubType,
        enum eLoadPatternType * DesignType,
        long * DesignTypeOption,
        long * Auto );
    cCaseHyperStaticPtr GetHyperStatic ( );
    cCaseModalEigenPtr GetModalEigen ( );
    cCaseModalRitzPtr GetModalRitz ( );
    cCaseModalHistoryLinearPtr GetModHistLinear ( );
    cCaseModalHistoryNonlinearPtr GetModHistNonlinear ( );
    cCaseResponseSpectrumPtr GetResponseSpectrum ( );
    long SetDesignType (
        _bstr_t Name,
        long DesignTypeOption,
        enum eLoadPatternType DesignType );
    cCaseStaticLinearPtr GetStaticLinear ( );
    cCaseStaticNonlinearPtr GetStaticNonlinear ( );
    cCaseStaticNonlinearStagedPtr GetStaticNonlinearStaged ( );
    long GetTypeOAPI (
        _bstr_t Name,
        enum eLoadCaseType * CaseType,
        long * SubType );
};

struct __declspec(uuid("362839c9-6ee2-45d5-8088-e5ff3888cca6"))
cAutoSeismic : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetIBC2006 (
        _bstr_t Name,
        long * DirFlag,
        double * Eccen,
        long * PeriodFlag,
        long * CtType,
        double * UserT,
        VARIANT_BOOL * UserZ,
        double * TopZ,
        double * BottomZ,
        double * R,
        double * Omega,
        double * Cd,
        double * I,
        long * IBC2006Option,
        double * Latitude,
        double * Longitude,
        BSTR * ZipCode,
        double * Ss,
        double * S1,
        double * Tl,
        long * SiteClass,
        double * Fa,
        double * Fv );
    long SetIBC2006 (
        _bstr_t Name,
        long DirFlag,
        double Eccen,
        long PeriodFlag,
        long CtType,
        double UserT,
        VARIANT_BOOL UserZ,
        double TopZ,
        double BottomZ,
        double R,
        double Omega,
        double Cd,
        double I,
        long IBC2006Option,
        double Latitude,
        double Longitude,
        _bstr_t ZipCode,
        double Ss,
        double S1,
        double Tl,
        long SiteClass,
        double Fa,
        double Fv );
    long GetASCE716 (
        _bstr_t Name,
        SAFEARRAY * * nDir,
        double * Eccen,
        long * PeriodFlag,
        long * CtType,
        double * UserT,
        VARIANT_BOOL * UserZ,
        double * TopZ,
        double * BottomZ,
        double * R,
        double * Omega,
        double * Cd,
        double * I,
        double * Ss,
        double * S1,
        double * Tl,
        long * SiteClass,
        double * Fa,
        double * Fv );
    long SetASCE716 (
        _bstr_t Name,
        SAFEARRAY * * nDir,
        double Eccen,
        long PeriodFlag,
        long CtType,
        double UserT,
        VARIANT_BOOL UserZ,
        double TopZ,
        double BottomZ,
        double R,
        double Omega,
        double Cd,
        double I,
        double Ss,
        double S1,
        double Tl,
        long SiteClass,
        double Fa,
        double Fv );
};

struct __declspec(uuid("ec6bb373-d00e-4c90-b13c-4c16ef7dbb90"))
cAutoWind : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("70cd0e19-584f-458d-ae92-824f10019ca7"))
cAutoWindBridge : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("0fa969b9-7001-4341-9213-151778d79221"))
cLoadPatterns : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetAutoSeismic))
    cAutoSeismicPtr AutoSeismic;
    __declspec(property(get=GetAutoWind))
    cAutoWindPtr AutoWind;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long Add (
        _bstr_t Name,
        enum eLoadPatternType MyType,
        double SelfWTMultiplier,
        VARIANT_BOOL AddAnalysisCase );
    cAutoSeismicPtr GetAutoSeismic ( );
    cAutoWindPtr GetAutoWind ( );
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count ( );
    long Delete (
        _bstr_t Name );
    long GetAutoSeismicCode (
        _bstr_t Name,
        BSTR * CodeName );
    long GetAutoWindCode (
        _bstr_t Name,
        BSTR * CodeName );
    long GetLoadType (
        _bstr_t Name,
        enum eLoadPatternType * MyType );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetSelfWTMultiplier (
        _bstr_t Name,
        double * SelfWTMultiplier );
    long SetLoadType (
        _bstr_t Name,
        enum eLoadPatternType MyType );
    long SetSelfWTMultiplier (
        _bstr_t Name,
        double SelfWTMultiplier );
};

struct __declspec(uuid("d5999846-bc7a-4f31-9d16-526f5d5a6945"))
cPropArea : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count (
        long PropType );
    long Delete (
        _bstr_t Name );
    long GetModifiers (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName,
        long PropType );
    long GetShellDesign (
        _bstr_t Name,
        BSTR * MatProp,
        long * SteelLayoutOption,
        double * DesignCoverTopDir1,
        double * DesignCoverTopDir2,
        double * DesignCoverBotDir1,
        double * DesignCoverBotDir2 );
    long GetShellLayer (
        _bstr_t Name,
        long * NumberLayers,
        SAFEARRAY * * LayerName,
        SAFEARRAY * * Dist,
        SAFEARRAY * * Thickness,
        SAFEARRAY * * MatProp,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * MatAng,
        SAFEARRAY * * NumIntegrationPts );
    long GetShellLayer_1 (
        _bstr_t Name,
        long * NumberLayers,
        SAFEARRAY * * LayerName,
        SAFEARRAY * * Dist,
        SAFEARRAY * * Thickness,
        SAFEARRAY * * MyType,
        SAFEARRAY * * NumIntegrationPts,
        SAFEARRAY * * MatProp,
        SAFEARRAY * * MatAng,
        SAFEARRAY * * S11Type,
        SAFEARRAY * * S22Type,
        SAFEARRAY * * S12Type );
    long GetShellLayer_2 (
        _bstr_t Name,
        long * NumberLayers,
        SAFEARRAY * * LayerName,
        SAFEARRAY * * Dist,
        SAFEARRAY * * Thickness,
        SAFEARRAY * * MyType,
        SAFEARRAY * * NumIntegrationPts,
        SAFEARRAY * * MatProp,
        SAFEARRAY * * MatAng,
        SAFEARRAY * * MatBehavior,
        SAFEARRAY * * S11Type,
        SAFEARRAY * * S22Type,
        SAFEARRAY * * S12Type );
    long GetTypeOAPI (
        _bstr_t Name,
        long * PropType );
    long SetModifiers (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long SetShellDesign (
        _bstr_t Name,
        _bstr_t MatProp,
        long SteelLayoutOption,
        double DesignCoverTopDir1,
        double DesignCoverTopDir2,
        double DesignCoverBotDir1,
        double DesignCoverBotDir2 );
    long SetShellLayer (
        _bstr_t Name,
        long NumberLayers,
        SAFEARRAY * * LayerName,
        SAFEARRAY * * Dist,
        SAFEARRAY * * Thickness,
        SAFEARRAY * * MatProp,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * MatAng,
        SAFEARRAY * * NumIntegrationPts );
    long SetShellLayer_1 (
        _bstr_t Name,
        long * NumberLayers,
        SAFEARRAY * * LayerName,
        SAFEARRAY * * Dist,
        SAFEARRAY * * Thickness,
        SAFEARRAY * * MyType,
        SAFEARRAY * * NumIntegrationPts,
        SAFEARRAY * * MatProp,
        SAFEARRAY * * MatAng,
        SAFEARRAY * * S11Type,
        SAFEARRAY * * S22Type,
        SAFEARRAY * * S12Type );
    long SetShellLayer_2 (
        _bstr_t Name,
        long * NumberLayers,
        SAFEARRAY * * LayerName,
        SAFEARRAY * * Dist,
        SAFEARRAY * * Thickness,
        SAFEARRAY * * MyType,
        SAFEARRAY * * NumIntegrationPts,
        SAFEARRAY * * MatProp,
        SAFEARRAY * * MatAng,
        SAFEARRAY * * MatBehavior,
        SAFEARRAY * * S11Type,
        SAFEARRAY * * S22Type,
        SAFEARRAY * * S12Type );
    long GetDeck (
        _bstr_t Name,
        enum eDeckType * DeckType,
        enum eShellType * ShellType,
        BSTR * MatProp,
        double * Thickness,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetDeckFilled (
        _bstr_t Name,
        double * SlabDepth,
        double * RibDepth,
        double * RibWidthTop,
        double * RibWidthBot,
        double * RibSpacing,
        double * ShearThickness,
        double * UnitWeight,
        double * ShearStudDia,
        double * ShearStudHt,
        double * ShearStudFu );
    long GetDeckSolidSlab (
        _bstr_t Name,
        double * SlabDepth,
        double * ShearStudDia,
        double * ShearStudHt,
        double * ShearStudFu );
    long GetDeckUnfilled (
        _bstr_t Name,
        double * RibDepth,
        double * RibWidthTop,
        double * RibWidthBot,
        double * RibSpacing,
        double * ShearThickness,
        double * UnitWeight );
    long GetSlab (
        _bstr_t Name,
        enum eSlabType * SlabType,
        enum eShellType * ShellType,
        BSTR * MatProp,
        double * Thickness,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetSlabRibbed (
        _bstr_t Name,
        double * OverallDepth,
        double * SlabThickness,
        double * StemWidthTop,
        double * StemWidthBot,
        double * RibSpacing,
        long * RibsParallelTo );
    long GetSlabWaffle (
        _bstr_t Name,
        double * OverallDepth,
        double * SlabThickness,
        double * StemWidthTop,
        double * StemWidthBot,
        double * RibSpacingDir1,
        double * RibSpacingDir2 );
    long GetWall (
        _bstr_t Name,
        enum eWallPropType * WallPropType,
        enum eShellType * ShellType,
        BSTR * MatProp,
        double * Thickness,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetWallAutoSelectList (
        _bstr_t Name,
        SAFEARRAY * * AutoSelectList,
        BSTR * StartingProperty );
    long SetDeck (
        _bstr_t Name,
        enum eDeckType DeckType,
        enum eShellType ShellType,
        _bstr_t MatProp,
        double Thickness,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetDeckFilled (
        _bstr_t Name,
        double SlabDepth,
        double RibDepth,
        double RibWidthTop,
        double RibWidthBot,
        double RibSpacing,
        double ShearThickness,
        double UnitWeight,
        double ShearStudDia,
        double ShearStudHt,
        double ShearStudFu );
    long SetDeckSolidSlab (
        _bstr_t Name,
        double SlabDepth,
        double ShearStudDia,
        double ShearStudHt,
        double ShearStudFu );
    long SetDeckUnfilled (
        _bstr_t Name,
        double RibDepth,
        double RibWidthTop,
        double RibWidthBot,
        double RibSpacing,
        double ShearThickness,
        double UnitWeight );
    long SetSlab (
        _bstr_t Name,
        enum eSlabType SlabType,
        enum eShellType ShellType,
        _bstr_t MatProp,
        double Thickness,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetSlabRibbed (
        _bstr_t Name,
        double OverallDepth,
        double SlabThickness,
        double StemWidthTop,
        double StemWidthBot,
        double RibSpacing,
        long RibsParallelTo );
    long SetSlabWaffle (
        _bstr_t Name,
        double OverallDepth,
        double SlabThickness,
        double StemWidthTop,
        double StemWidthBot,
        double RibSpacingDir1,
        double RibSpacingDir2 );
    long SetWall (
        _bstr_t Name,
        enum eWallPropType WallPropType,
        enum eShellType ShellType,
        _bstr_t MatProp,
        double Thickness,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetWallAutoSelectList (
        _bstr_t Name,
        SAFEARRAY * AutoSelectList,
        _bstr_t StartingProperty );
    long GetDeck_1 (
        _bstr_t Name,
        enum eDeckType * DeckType,
        BSTR * SlabFillMatProp,
        BSTR * DeckMatProp,
        double * SlabDepth,
        double * RibDepth,
        double * RibWidthTop,
        double * RibWidthBot,
        double * RibSpacing,
        double * DeckShearThickness,
        double * DeckUnitWeight,
        double * ShearStudDia,
        double * ShearStudHs,
        double * ShearStudFu,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetDeck_1 (
        _bstr_t Name,
        enum eDeckType DeckType,
        _bstr_t SlabFillMatProp,
        _bstr_t DeckMatProp,
        double SlabDepth,
        double RibDepth,
        double RibWidthTop,
        double RibWidthBot,
        double RibSpacing,
        double DeckShearThickness,
        double DeckUnitWeight,
        double ShearStudDia,
        double ShearStudHs,
        double ShearStudFu,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
};

struct __declspec(uuid("ce5498cb-f332-4978-b0a4-443d30778ba6"))
cPropLink : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count (
        enum eLinkPropType PropType );
    long Delete (
        _bstr_t Name );
    long GetDamper (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * C,
        SAFEARRAY * * CExp,
        double * DJ2,
        double * DJ3,
        BSTR * notes,
        BSTR * GUID );
    long GetFrictionIsolator (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * Slow,
        SAFEARRAY * * Fast,
        SAFEARRAY * * Rate,
        SAFEARRAY * * Radius,
        double * Damping,
        double * DJ2,
        double * DJ3,
        BSTR * notes,
        BSTR * GUID );
    long GetGap (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * Dis,
        double * DJ2,
        double * DJ3,
        BSTR * notes,
        BSTR * GUID );
    long GetHook (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * Dis,
        double * DJ2,
        double * DJ3,
        BSTR * notes,
        BSTR * GUID );
    long GetLinear (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        double * DJ2,
        double * DJ3,
        VARIANT_BOOL * KeCoupled,
        VARIANT_BOOL * CeCoupled,
        BSTR * notes,
        BSTR * GUID );
    long GetMultiLinearElastic (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        double * DJ2,
        double * DJ3,
        BSTR * notes,
        BSTR * GUID );
    long GetMultiLinearPlastic (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        double * DJ2,
        double * DJ3,
        BSTR * notes,
        BSTR * GUID );
    long GetMultiLinearPoints (
        _bstr_t Name,
        long DOF,
        long * NumberPoints,
        SAFEARRAY * * F,
        SAFEARRAY * * D,
        long * MyType,
        double * A1,
        double * A2,
        double * B1,
        double * B2,
        double * Eta );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName,
        enum eLinkPropType PropType );
    long GetPDelta (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long GetPlasticWen (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * Yield,
        SAFEARRAY * * Ratio,
        SAFEARRAY * * Exp,
        double * DJ2,
        double * DJ3,
        BSTR * notes,
        BSTR * GUID );
    long GetRubberIsolator (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * Yield,
        SAFEARRAY * * Ratio,
        double * DJ2,
        double * DJ3,
        BSTR * notes,
        BSTR * GUID );
    long GetSpringData (
        _bstr_t Name,
        double * DefinedForThisLength,
        double * DefinedForThisArea );
    long GetTCFrictionIsolator (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * Slow,
        SAFEARRAY * * Fast,
        SAFEARRAY * * Rate,
        SAFEARRAY * * Radius,
        SAFEARRAY * * SlowT,
        SAFEARRAY * * FastT,
        SAFEARRAY * * RateT,
        double * Kt,
        double * Dis,
        double * Dist,
        double * Damping,
        double * DJ2,
        double * DJ3,
        BSTR * notes,
        BSTR * GUID );
    long GetTypeOAPI (
        _bstr_t Name,
        enum eLinkPropType * PropType );
    long GetWeightAndMass (
        _bstr_t Name,
        double * W,
        double * M,
        double * R1,
        double * R2,
        double * R3 );
    long SetDamper (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * C,
        SAFEARRAY * * CExp,
        double DJ2,
        double DJ3,
        _bstr_t notes,
        _bstr_t GUID );
    long SetFrictionIsolator (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * Slow,
        SAFEARRAY * * Fast,
        SAFEARRAY * * Rate,
        SAFEARRAY * * Radius,
        double Damping,
        double DJ2,
        double DJ3,
        _bstr_t notes,
        _bstr_t GUID );
    long SetGap (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * Dis,
        double DJ2,
        double DJ3,
        _bstr_t notes,
        _bstr_t GUID );
    long SetHook (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * Dis,
        double DJ2,
        double DJ3,
        _bstr_t notes,
        _bstr_t GUID );
    long SetLinear (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        double DJ2,
        double DJ3,
        VARIANT_BOOL KeCoupled,
        VARIANT_BOOL CeCoupled,
        _bstr_t notes,
        _bstr_t GUID );
    long SetMultiLinearElastic (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        double DJ2,
        double DJ3,
        _bstr_t notes,
        _bstr_t GUID );
    long SetMultiLinearPlastic (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        double DJ2,
        double DJ3,
        _bstr_t notes,
        _bstr_t GUID );
    long SetMultiLinearPoints (
        _bstr_t Name,
        long DOF,
        long NumberPoints,
        SAFEARRAY * * F,
        SAFEARRAY * * D,
        long MyType,
        double A1,
        double A2,
        double B1,
        double B2,
        double Eta );
    long SetPDelta (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long SetPlasticWen (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * Yield,
        SAFEARRAY * * Ratio,
        SAFEARRAY * * Exp,
        double DJ2,
        double DJ3,
        _bstr_t notes,
        _bstr_t GUID );
    long SetRubberIsolator (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * Yield,
        SAFEARRAY * * Ratio,
        double DJ2,
        double DJ3,
        _bstr_t notes,
        _bstr_t GUID );
    long SetSpringData (
        _bstr_t Name,
        double DefinedForThisLength,
        double DefinedForThisArea );
    long SetTCFrictionIsolator (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * Slow,
        SAFEARRAY * * Fast,
        SAFEARRAY * * Rate,
        SAFEARRAY * * Radius,
        SAFEARRAY * * SlowT,
        SAFEARRAY * * FastT,
        SAFEARRAY * * RateT,
        double Kt,
        double Dis,
        double Dist,
        double Damping,
        double DJ2,
        double DJ3,
        _bstr_t notes,
        _bstr_t GUID );
    long SetWeightAndMass (
        _bstr_t Name,
        double W,
        double M,
        double R1,
        double R2,
        double R3 );
    long GetDamperBilinear (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * C,
        SAFEARRAY * * CY,
        SAFEARRAY * * ForceLimit,
        double * DJ2,
        double * DJ3,
        BSTR * notes,
        BSTR * GUID );
    long GetDamperFrictionSpring (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * K1,
        SAFEARRAY * * K2,
        SAFEARRAY * * u0,
        SAFEARRAY * * us,
        SAFEARRAY * * Direction,
        double * DJ2,
        double * DJ3,
        BSTR * notes,
        BSTR * GUID );
    long SetDamperBilinear (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * C,
        SAFEARRAY * * CY,
        SAFEARRAY * * ForceLimit,
        double DJ2,
        double DJ3,
        _bstr_t notes,
        _bstr_t GUID );
    long SetDamperFrictionSpring (
        _bstr_t Name,
        SAFEARRAY * * DOF,
        SAFEARRAY * * Fixed,
        SAFEARRAY * * Nonlinear,
        SAFEARRAY * * Ke,
        SAFEARRAY * * Ce,
        SAFEARRAY * * K,
        SAFEARRAY * * K1,
        SAFEARRAY * * K2,
        SAFEARRAY * * u0,
        SAFEARRAY * * us,
        SAFEARRAY * * Direction,
        double DJ2,
        double DJ3,
        _bstr_t notes,
        _bstr_t GUID );
    long GetAcceptanceCriteria (
        _bstr_t Name,
        long * AcceptanceType,
        VARIANT_BOOL * Symmetric,
        SAFEARRAY * * Active,
        SAFEARRAY * * IOPos,
        SAFEARRAY * * LSPos,
        SAFEARRAY * * CPPos,
        SAFEARRAY * * IONeg,
        SAFEARRAY * * LSNeg,
        SAFEARRAY * * CPNeg );
    long SetAcceptanceCriteria (
        _bstr_t Name,
        long AcceptanceType,
        VARIANT_BOOL Symmetric,
        SAFEARRAY * * Active,
        SAFEARRAY * * IOPos,
        SAFEARRAY * * LSPos,
        SAFEARRAY * * CPPos,
        SAFEARRAY * * IONeg,
        SAFEARRAY * * LSNeg,
        SAFEARRAY * * CPNeg );
};

struct __declspec(uuid("75b06d0e-a03b-4e17-98d5-02d0c5f90638"))
cPropRebar : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetRebarProps (
        _bstr_t Name,
        double * Area,
        double * Diameter );
    long GetRebarPropsWithGUID (
        _bstr_t Name,
        double * Area,
        double * Diameter,
        BSTR * MyGUID );
    long GetNameListWithData (
        long * NumberNames,
        SAFEARRAY * * MyName,
        SAFEARRAY * * Areas,
        SAFEARRAY * * Diameters,
        SAFEARRAY * * MyGUID );
};

struct __declspec(uuid("6c67f913-98c9-4236-ace6-941d6b6571f6"))
cPropTendon : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count ( );
    long Delete (
        _bstr_t Name );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetProp (
        _bstr_t Name,
        BSTR * MatProp,
        long * ModelingOption,
        double * Area,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetProp (
        _bstr_t Name,
        _bstr_t MatProp,
        long ModelingOption,
        double Area,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
};

struct __declspec(uuid("88aafe1e-4f8c-43ee-b0bd-3cd28e64d7f8"))
cPropFrame : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetSDShape))
    cPropFrameSDShapePtr SDShape;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count (
        enum eFramePropType PropType );
    long Delete (
        _bstr_t Name );
    long GetAngle (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetAutoSelectSteel (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * SectName,
        BSTR * AutoStartSection,
        BSTR * notes,
        BSTR * GUID );
    long GetChannel (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetCircle (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetCoverPlatedI (
        _bstr_t Name,
        BSTR * SectName,
        double * FyTopFlange,
        double * FyWeb,
        double * FyBotFlange,
        double * Tc,
        double * Bc,
        BSTR * MatPropTop,
        double * Tcb,
        double * Bcb,
        BSTR * MatPropBot,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetDblAngle (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * Dis,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetDblChannel (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * Dis,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetGeneral (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Area,
        double * As2,
        double * As3,
        double * Torsion,
        double * I22,
        double * I33,
        double * S22,
        double * S33,
        double * Z22,
        double * Z33,
        double * R22,
        double * R33,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetISection (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * T2b,
        double * Tfb,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetModifiers (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long GetNameInPropFile (
        _bstr_t Name,
        BSTR * NameInFile,
        BSTR * FileName,
        BSTR * MatProp,
        enum eFramePropType * PropType );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName,
        enum eFramePropType PropType );
    long GetNonPrismatic (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * StartSec,
        SAFEARRAY * * EndSec,
        SAFEARRAY * * MyLength,
        SAFEARRAY * * MyType,
        SAFEARRAY * * EI33,
        SAFEARRAY * * EI22,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetPipe (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * Tw,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetPropFileNameList (
        _bstr_t FileName,
        long * NumberNames,
        SAFEARRAY * * MyName,
        SAFEARRAY * * MyPropType,
        enum eFramePropType PropType );
    long GetRebarBeam (
        _bstr_t Name,
        BSTR * MatPropLong,
        BSTR * MatPropConfine,
        double * CoverTop,
        double * CoverBot,
        double * TopLeftArea,
        double * TopRightArea,
        double * BotLeftArea,
        double * BotRightArea );
    long GetRebarColumn (
        _bstr_t Name,
        BSTR * MatPropLong,
        BSTR * MatPropConfine,
        long * Pattern,
        long * ConfineType,
        double * Cover,
        long * NumberCBars,
        long * NumberR3Bars,
        long * NumberR2Bars,
        BSTR * RebarSize,
        BSTR * TieSize,
        double * TieSpacingLongit,
        long * Number2DirTieBars,
        long * Number3DirTieBars,
        VARIANT_BOOL * ToBeDesigned );
    long GetRectangle (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetSectProps (
        _bstr_t Name,
        double * Area,
        double * As2,
        double * As3,
        double * Torsion,
        double * I22,
        double * I33,
        double * S22,
        double * S33,
        double * Z22,
        double * Z33,
        double * R22,
        double * R33 );
    long GetTee (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetTube (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetTypeOAPI (
        _bstr_t Name,
        enum eFramePropType * PropType );
    long GetTypeRebar (
        _bstr_t Name,
        long * MyType );
    long ImportProp (
        _bstr_t Name,
        _bstr_t MatProp,
        _bstr_t FileName,
        _bstr_t PropName,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    cPropFrameSDShapePtr GetSDShape ( );
    long SetAngle (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetAutoSelectSteel (
        _bstr_t Name,
        long NumberItems,
        SAFEARRAY * * SectName,
        _bstr_t AutoStartSection,
        _bstr_t notes,
        _bstr_t GUID );
    long SetChannel (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetCircle (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetCoverPlatedI (
        _bstr_t Name,
        _bstr_t SectName,
        double FyTopFlange,
        double FyWeb,
        double FyBotFlange,
        double Tc,
        double Bc,
        _bstr_t MatPropTop,
        double Tcb,
        double Bcb,
        _bstr_t MatPropBot,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetDblAngle (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double Dis,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetDblChannel (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double Dis,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetGeneral (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Area,
        double As2,
        double As3,
        double Torsion,
        double I22,
        double I33,
        double S22,
        double S33,
        double Z22,
        double Z33,
        double R22,
        double R33,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetISection (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double T2b,
        double Tfb,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetModifiers (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long SetNonPrismatic (
        _bstr_t Name,
        long NumberItems,
        SAFEARRAY * * StartSec,
        SAFEARRAY * * EndSec,
        SAFEARRAY * * MyLength,
        SAFEARRAY * * MyType,
        SAFEARRAY * * EI33,
        SAFEARRAY * * EI22,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetPipe (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double Tw,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetRebarBeam (
        _bstr_t Name,
        _bstr_t MatPropLong,
        _bstr_t MatPropConfine,
        double CoverTop,
        double CoverBot,
        double TopLeftArea,
        double TopRightArea,
        double BotLeftArea,
        double BotRightArea );
    long SetRebarColumn (
        _bstr_t Name,
        _bstr_t MatPropLong,
        _bstr_t MatPropConfine,
        long Pattern,
        long ConfineType,
        double Cover,
        long NumberCBars,
        long NumberR3Bars,
        long NumberR2Bars,
        _bstr_t RebarSize,
        _bstr_t TieSize,
        double TieSpacingLongit,
        long Number2DirTieBars,
        long Number3DirTieBars,
        VARIANT_BOOL ToBeDesigned );
    long SetRectangle (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetTee (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetTube (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetSDSection (
        _bstr_t Name,
        BSTR * MatProp,
        long * NumberItems,
        SAFEARRAY * * ShapeName,
        SAFEARRAY * * MyType,
        long * DesignType,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetSDSection (
        _bstr_t Name,
        _bstr_t MatProp,
        long DesignType,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetColdC (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Thickness,
        double * Radius,
        double * LipDepth,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetColdHat (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Thickness,
        double * Radius,
        double * LipDepth,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetColdZ (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Thickness,
        double * Radius,
        double * LipDepth,
        double * LipAngle,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetPrecastI (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        SAFEARRAY * * B,
        SAFEARRAY * * D,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetColdC (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Thickness,
        double Radius,
        double LipDepth,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetColdHat (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Thickness,
        double Radius,
        double LipDepth,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetColdZ (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Thickness,
        double Radius,
        double LipDepth,
        double LipAngle,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetPrecastI (
        _bstr_t Name,
        _bstr_t MatProp,
        SAFEARRAY * * B,
        SAFEARRAY * * D,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetMaterial (
        _bstr_t Name,
        BSTR * MatProp );
    long SetMaterial (
        _bstr_t Name,
        _bstr_t MatProp );
    long GetTrapezoidal (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * T2b,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetTrapezoidal (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double T2b,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetTube_1 (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * Radius,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetTube_1 (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double Radius,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetAngle_1 (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * FilletRadius,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetAngle_1 (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double FilletRadius,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetChannel_2 (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * FilletRadius,
        VARIANT_BOOL * MirrorAbout2,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetChannel_2 (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double FilletRadius,
        VARIANT_BOOL MirrorAbout2,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetDblAngle_2 (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * Dis,
        double * FilletRadius,
        VARIANT_BOOL * MirrorAbout3,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetDblAngle_2 (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double Dis,
        double FilletRadius,
        VARIANT_BOOL MirrorAbout3,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetDblChannel_1 (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * Dis,
        double * FilletRadius,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetDblChannel_1 (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double Dis,
        double FilletRadius,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetISection_1 (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * T2b,
        double * Tfb,
        double * FilletRadius,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetISection_1 (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double T2b,
        double Tfb,
        double FilletRadius,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetTee_1 (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * FilletRadius,
        VARIANT_BOOL * MirrorAbout3,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetTee_1 (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double FilletRadius,
        VARIANT_BOOL MirrorAbout3,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetConcreteL (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * TwC,
        double * TwT,
        VARIANT_BOOL * MirrorAbout2,
        VARIANT_BOOL * MirrorAbout3,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetConcreteTee (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * TwF,
        double * TwT,
        VARIANT_BOOL * MirrorAbout3,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetPlate (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetRod (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetSteelAngle (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * R,
        VARIANT_BOOL * MirrorAbout2,
        VARIANT_BOOL * MirrorAbout3,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetSteelTee (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * R,
        VARIANT_BOOL * MirrorAbout3,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetConcreteL (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double TwC,
        double TwT,
        VARIANT_BOOL MirrorAbout2,
        VARIANT_BOOL MirrorAbout3,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetConcreteTee (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double TwF,
        double TwT,
        VARIANT_BOOL MirrorAbout3,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetPlate (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetRod (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetSteelAngle (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double R,
        VARIANT_BOOL MirrorAbout2,
        VARIANT_BOOL MirrorAbout3,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetSteelTee (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double R,
        VARIANT_BOOL MirrorAbout3,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetAllFrameProperties (
        long * NumberNames,
        SAFEARRAY * * MyName,
        SAFEARRAY * * PropType,
        SAFEARRAY * * T3,
        SAFEARRAY * * T2,
        SAFEARRAY * * Tf,
        SAFEARRAY * * Tw,
        SAFEARRAY * * T2b,
        SAFEARRAY * * Tfb );
    long GetAllFrameProperties_2 (
        long * NumberNames,
        SAFEARRAY * * MyName,
        SAFEARRAY * * PropType,
        SAFEARRAY * * T3,
        SAFEARRAY * * T2,
        SAFEARRAY * * Tf,
        SAFEARRAY * * Tw,
        SAFEARRAY * * T2b,
        SAFEARRAY * * Tfb,
        SAFEARRAY * * Area );
    long GetRebarColumn_1 (
        _bstr_t Name,
        BSTR * MatPropLong,
        BSTR * MatPropConfine,
        long * Pattern,
        long * ConfineType,
        double * Cover,
        long * NumberCBars,
        long * NumberR3Bars,
        long * NumberR2Bars,
        BSTR * RebarSize,
        BSTR * TieSize,
        double * TieSpacingLongit,
        long * Number2DirTieBars,
        long * Number3DirTieBars,
        VARIANT_BOOL * ToBeDesigned,
        BSTR * LongitCornerRebarSize,
        double * LongitRebarArea,
        double * LongitCornerRebarArea );
    long GetConcreteBox (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetConcreteBox (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetConcreteCross (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetConcreteCross (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetConcretePipe (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * Diameter,
        double * Tw,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetConcretePipe (
        _bstr_t Name,
        _bstr_t MatProp,
        double Diameter,
        double Tw,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetDblAngle_1 (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        double * Dis,
        VARIANT_BOOL * MirrorAbout3,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetDblAngle_1 (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        double Dis,
        VARIANT_BOOL MirrorAbout3,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetChannel_1 (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Tf,
        double * Tw,
        VARIANT_BOOL * MirrorAbout2,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetChannel_1 (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Tf,
        double Tw,
        VARIANT_BOOL MirrorAbout2,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetColdC_1 (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Thickness,
        double * Radius,
        double * LipDepth,
        VARIANT_BOOL * MirrorAbout2,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetColdC_1 (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Thickness,
        double Radius,
        double LipDepth,
        VARIANT_BOOL MirrorAbout2,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetColdHat_1 (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Thickness,
        double * Radius,
        double * LipDepth,
        VARIANT_BOOL * MirrorAbout2,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetColdHat_1 (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Thickness,
        double Radius,
        double LipDepth,
        VARIANT_BOOL MirrorAbout2,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long GetColdZ_1 (
        _bstr_t Name,
        BSTR * FileName,
        BSTR * MatProp,
        double * T3,
        double * T2,
        double * Thickness,
        double * Radius,
        double * LipDepth,
        double * LipAngle,
        VARIANT_BOOL * MirrorAbout2,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long SetColdZ_1 (
        _bstr_t Name,
        _bstr_t MatProp,
        double T3,
        double T2,
        double Thickness,
        double Radius,
        double LipDepth,
        double LipAngle,
        VARIANT_BOOL MirrorAbout2,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
};

struct __declspec(uuid("38fd28c3-b05b-43f0-a314-5d06d22688c7"))
cPropFrameSDShape : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetAngle (
        _bstr_t Name,
        _bstr_t ShapeName,
        BSTR * MatProp,
        BSTR * PropName,
        long * color,
        double * XCenter,
        double * YCenter,
        double * H,
        double * Bf,
        double * Tf,
        double * Tw,
        double * Rotation );
    long GetISection (
        _bstr_t Name,
        _bstr_t ShapeName,
        BSTR * MatProp,
        BSTR * PropName,
        long * color,
        double * XCenter,
        double * YCenter,
        double * H,
        double * Bf,
        double * Tf,
        double * Tw,
        double * Bfb,
        double * Tfb,
        double * Rotation );
    long GetReinfCircle (
        _bstr_t Name,
        _bstr_t ShapeName,
        double * XCenter,
        double * YCenter,
        double * Diameter,
        long * NumBars,
        double * Rotation,
        BSTR * RebarSize,
        BSTR * MatRebar );
    long GetReinfCorner (
        _bstr_t Name,
        _bstr_t ShapeName,
        long * NumberItems,
        SAFEARRAY * * PointNum,
        SAFEARRAY * * RebarSize );
    long GetReinfEdge (
        _bstr_t Name,
        _bstr_t ShapeName,
        long * NumberItems,
        SAFEARRAY * * EdgeNum,
        SAFEARRAY * * RebarSize,
        SAFEARRAY * * Spacing,
        SAFEARRAY * * Cover );
    long GetReinfLine (
        _bstr_t Name,
        _bstr_t ShapeName,
        double * X1,
        double * Y1,
        double * X2,
        double * Y2,
        double * Spacing,
        BSTR * RebarSize,
        VARIANT_BOOL * EndBars,
        BSTR * MatRebar );
    long GetReinfRectangular (
        _bstr_t Name,
        _bstr_t ShapeName,
        double * XCenter,
        double * YCenter,
        double * H,
        double * W,
        double * Rotation,
        BSTR * MatRebar );
    long GetReinfSingle (
        _bstr_t Name,
        _bstr_t ShapeName,
        double * XCenter,
        double * YCenter,
        BSTR * RebarSize,
        BSTR * MatRebar );
    long GetSolidCircle (
        _bstr_t Name,
        _bstr_t ShapeName,
        BSTR * MatProp,
        BSTR * SSOverwrite,
        long * color,
        double * XCenter,
        double * YCenter,
        double * Diameter,
        VARIANT_BOOL * Reinf,
        long * NumberBars,
        double * Rotation,
        double * Cover,
        BSTR * RebarSize,
        BSTR * MatRebar );
    long GetSolidRect (
        _bstr_t Name,
        _bstr_t ShapeName,
        BSTR * MatProp,
        BSTR * SSOverwrite,
        long * color,
        double * XCenter,
        double * YCenter,
        double * H,
        double * W,
        double * Rotation,
        VARIANT_BOOL * Reinf,
        BSTR * MatRebar );
    long GetTee (
        _bstr_t Name,
        _bstr_t ShapeName,
        BSTR * MatProp,
        BSTR * PropName,
        long * color,
        double * XCenter,
        double * YCenter,
        double * H,
        double * Bf,
        double * Tf,
        double * Tw,
        double * Rotation );
    long GetConcreteL (
        _bstr_t Name,
        _bstr_t ShapeName,
        BSTR * MatProp,
        BSTR * PropName,
        long * color,
        double * XCenter,
        double * YCenter,
        double * H,
        double * Bf,
        double * Tf,
        double * Tw,
        double * Rotation,
        VARIANT_BOOL * MirrorAbout2,
        VARIANT_BOOL * MirrorAbout3 );
    long GetConcreteTee (
        _bstr_t Name,
        _bstr_t ShapeName,
        BSTR * MatProp,
        BSTR * PropName,
        long * color,
        double * XCenter,
        double * YCenter,
        double * H,
        double * Bf,
        double * Tf,
        double * Tw,
        double * Rotation,
        VARIANT_BOOL * MirrorAbout3 );
};

struct __declspec(uuid("47ec79c1-ae4a-4684-bf82-2cd5dc817341"))
cPropMaterial : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetTimeDep))
    cPropMaterialTDPtr TimeDep;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long AddMaterial (
        BSTR * Name,
        enum eMatType MatType,
        _bstr_t Region,
        _bstr_t Standard,
        _bstr_t Grade,
        _bstr_t UserName );
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count (
        enum eMatType MatType );
    long Delete (
        _bstr_t Name );
    long GetDamping (
        _bstr_t Name,
        double * ModalRatio,
        double * ViscousMassCoeff,
        double * ViscousStiffCoeff,
        double * HystereticMassCoeff,
        double * HystereticStiffCoeff,
        double Temp );
    long GetMassSource (
        long * MyOption,
        long * NumberLoads,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * SF );
    long GetMaterial (
        _bstr_t Name,
        enum eMatType * MatType,
        long * color,
        BSTR * notes,
        BSTR * GUID );
    long GetMPAnisotropic (
        _bstr_t Name,
        SAFEARRAY * * E,
        SAFEARRAY * * U,
        SAFEARRAY * * A,
        SAFEARRAY * * G,
        double Temp );
    long GetMPIsotropic (
        _bstr_t Name,
        double * E,
        double * U,
        double * A,
        double * G,
        double Temp );
    long GetMPOrthotropic (
        _bstr_t Name,
        SAFEARRAY * * E,
        SAFEARRAY * * U,
        SAFEARRAY * * A,
        SAFEARRAY * * G,
        double Temp );
    long GetMPUniaxial (
        _bstr_t Name,
        double * E,
        double * A,
        double Temp );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName,
        enum eMatType MatType );
    long GetOConcrete (
        _bstr_t Name,
        double * Fc,
        VARIANT_BOOL * IsLightweight,
        double * FcsFactor,
        long * SSType,
        long * SSHysType,
        double * StrainAtFc,
        double * StrainUltimate,
        double * FrictionAngle,
        double * DilatationalAngle,
        double Temp );
    long GetOConcrete_1 (
        _bstr_t Name,
        double * Fc,
        VARIANT_BOOL * IsLightweight,
        double * FcsFactor,
        long * SSType,
        long * SSHysType,
        double * StrainAtFc,
        double * StrainUltimate,
        double * FinalSlope,
        double * FrictionAngle,
        double * DilatationalAngle,
        double Temp );
    long GetONoDesign (
        _bstr_t Name,
        double * FrictionAngle,
        double * DilatationalAngle,
        double Temp );
    long GetORebar (
        _bstr_t Name,
        double * FY,
        double * Fu,
        double * EFy,
        double * EFu,
        long * SSType,
        long * SSHysType,
        double * StrainAtHardening,
        double * StrainUltimate,
        VARIANT_BOOL * UseCaltransSSDefaults,
        double Temp );
    long GetORebar_1 (
        _bstr_t Name,
        double * FY,
        double * Fu,
        double * EFy,
        double * EFu,
        long * SSType,
        long * SSHysType,
        double * StrainAtHardening,
        double * StrainUltimate,
        double * FinalSlope,
        VARIANT_BOOL * UseCaltransSSDefaults,
        double Temp );
    long GetOSteel (
        _bstr_t Name,
        double * FY,
        double * Fu,
        double * EFy,
        double * EFu,
        long * SSType,
        long * SSHysType,
        double * StrainAtHardening,
        double * StrainAtMaxStress,
        double * StrainAtRupture,
        double Temp );
    long GetOSteel_1 (
        _bstr_t Name,
        double * FY,
        double * Fu,
        double * EFy,
        double * EFu,
        long * SSType,
        long * SSHysType,
        double * StrainAtHardening,
        double * StrainAtMaxStress,
        double * StrainAtRupture,
        double * FinalSlope,
        double Temp );
    long GetOTendon (
        _bstr_t Name,
        double * FY,
        double * Fu,
        long * SSType,
        long * SSHysType,
        double Temp );
    long GetOTendon_1 (
        _bstr_t Name,
        double * FY,
        double * Fu,
        long * SSType,
        long * SSHysType,
        double * FinalSlope,
        double Temp );
    long GetSSCurve (
        _bstr_t Name,
        long * NumberPoints,
        SAFEARRAY * * PointID,
        SAFEARRAY * * Strain,
        SAFEARRAY * * Stress,
        _bstr_t SectName,
        double RebarArea,
        double Temp );
    long GetTemp (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * Temp );
    long GetTypeOAPI (
        _bstr_t Name,
        enum eMatType * MatType,
        long * SymType );
    long GetWeightAndMass (
        _bstr_t Name,
        double * W,
        double * M,
        double Temp );
    long SetDamping (
        _bstr_t Name,
        double ModalRatio,
        double ViscousMassCoeff,
        double ViscousStiffCoeff,
        double HystereticMassCoeff,
        double HystereticStiffCoeff,
        double Temp );
    long SetMassSource (
        long MyOption,
        long NumberLoads,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * SF );
    long SetMaterial (
        _bstr_t Name,
        enum eMatType MatType,
        long color,
        _bstr_t notes,
        _bstr_t GUID );
    long SetMPAnisotropic (
        _bstr_t Name,
        SAFEARRAY * * E,
        SAFEARRAY * * U,
        SAFEARRAY * * A,
        SAFEARRAY * * G,
        double Temp );
    long SetMPIsotropic (
        _bstr_t Name,
        double E,
        double U,
        double A,
        double Temp );
    long SetMPOrthotropic (
        _bstr_t Name,
        SAFEARRAY * * E,
        SAFEARRAY * * U,
        SAFEARRAY * * A,
        SAFEARRAY * * G,
        double Temp );
    long SetMPUniaxial (
        _bstr_t Name,
        double E,
        double A,
        double Temp );
    long SetOConcrete (
        _bstr_t Name,
        double Fc,
        VARIANT_BOOL IsLightweight,
        double FcsFactor,
        long SSType,
        long SSHysType,
        double StrainAtFc,
        double StrainUltimate,
        double FrictionAngle,
        double DilatationalAngle,
        double Temp );
    long SetOConcrete_1 (
        _bstr_t Name,
        double Fc,
        VARIANT_BOOL IsLightweight,
        double FcsFactor,
        long SSType,
        long SSHysType,
        double StrainAtFc,
        double StrainUltimate,
        double FinalSlope,
        double FrictionAngle,
        double DilatationalAngle,
        double Temp );
    long SetONoDesign (
        _bstr_t Name,
        double FrictionAngle,
        double DilatationalAngle,
        double Temp );
    long SetORebar (
        _bstr_t Name,
        double FY,
        double Fu,
        double EFy,
        double EFu,
        long SSType,
        long SSHysType,
        double StrainAtHardening,
        double StrainUltimate,
        VARIANT_BOOL UseCaltransSSDefaults,
        double Temp );
    long SetORebar_1 (
        _bstr_t Name,
        double FY,
        double Fu,
        double EFy,
        double EFu,
        long SSType,
        long SSHysType,
        double StrainAtHardening,
        double StrainUltimate,
        double FinalSlope,
        VARIANT_BOOL UseCaltransSSDefaults,
        double Temp );
    long SetOSteel (
        _bstr_t Name,
        double FY,
        double Fu,
        double EFy,
        double EFu,
        long SSType,
        long SSHysType,
        double StrainAtHardening,
        double StrainAtMaxStress,
        double StrainAtRupture,
        double Temp );
    long SetOSteel_1 (
        _bstr_t Name,
        double FY,
        double Fu,
        double EFy,
        double EFu,
        long SSType,
        long SSHysType,
        double StrainAtHardening,
        double StrainAtMaxStress,
        double StrainAtRupture,
        double FinalSlope,
        double Temp );
    long SetOTendon (
        _bstr_t Name,
        double FY,
        double Fu,
        long SSType,
        long SSHysType,
        double Temp );
    long SetOTendon_1 (
        _bstr_t Name,
        double FY,
        double Fu,
        long SSType,
        long SSHysType,
        double FinalSlope,
        double Temp );
    long SetSSCurve (
        _bstr_t Name,
        long NumberPoints,
        SAFEARRAY * * PointID,
        SAFEARRAY * * Strain,
        SAFEARRAY * * Stress,
        double Temp );
    long SetTemp (
        _bstr_t Name,
        long NumberItems,
        SAFEARRAY * * Temp );
    long SetWeightAndMass (
        _bstr_t Name,
        long MyOption,
        double Value,
        double Temp );
    cPropMaterialTDPtr GetTimeDep ( );
    long GetMassSource_1 (
        VARIANT_BOOL * IncludeElements,
        VARIANT_BOOL * IncludeAddedMass,
        VARIANT_BOOL * IncludeLoads,
        long * NumberLoads,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * SF );
    long SetMassSource_1 (
        VARIANT_BOOL * IncludeElements,
        VARIANT_BOOL * IncludeAddedMass,
        VARIANT_BOOL * IncludeLoads,
        long NumberLoads,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * SF );
};

struct __declspec(uuid("61da0018-41bf-4d20-977e-83ebe8e5ad21"))
cPropMaterialTD : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("47bce5be-8de6-4171-b593-2e562edb7b45"))
cPropAreaSpring : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Delete (
        _bstr_t Name );
    long GetAreaSpringProp (
        _bstr_t Name,
        double * U1,
        double * U2,
        double * U3,
        long * NonlinearOption3,
        long * SpringOption,
        BSTR * SoilProfile,
        double * EndLengthRatio,
        double * Period,
        long * color,
        BSTR * notes,
        BSTR * iGUID );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long SetAreaSpringProp (
        _bstr_t Name,
        double U1,
        double U2,
        double U3,
        long NonlinearOption3,
        long SpringOption,
        _bstr_t SoilProfile,
        double EndLengthRatio,
        double Period,
        long color,
        _bstr_t notes,
        _bstr_t iGUID );
};

struct __declspec(uuid("d2fef8a2-57aa-46cf-b287-f45eb0832b3a"))
cPropLineSpring : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Delete (
        _bstr_t Name );
    long GetLineSpringProp (
        _bstr_t Name,
        double * U1,
        double * U2,
        double * U3,
        double * R1,
        long * NonlinearOption2,
        long * NonlinearOption3,
        long * color,
        BSTR * notes,
        BSTR * iGUID );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long SetLineSpringProp (
        _bstr_t Name,
        double U1,
        double U2,
        double U3,
        double R1,
        long NonlinearOption2,
        long NonlinearOption3,
        long color,
        _bstr_t notes,
        _bstr_t iGUID );
};

struct __declspec(uuid("3e4a7586-d43f-4ce5-8be3-4273393fc542"))
cPropPointSpring : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Delete (
        _bstr_t Name );
    long GetLinks (
        _bstr_t Name,
        long * NumberLinks,
        SAFEARRAY * * LinkNames,
        SAFEARRAY * * LinkAxialDirs,
        SAFEARRAY * * LinkAngles );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetPointSpringProp (
        _bstr_t Name,
        long * SpringOption,
        SAFEARRAY * * K,
        BSTR * CSys,
        BSTR * SoilProfile,
        BSTR * Footing,
        double * Period,
        long * color,
        BSTR * notes,
        BSTR * iGUID );
    long SetLinks (
        _bstr_t Name,
        long NumberLinks,
        SAFEARRAY * * LinkNames,
        SAFEARRAY * * LinkAxialDirs,
        SAFEARRAY * * LinkAngles );
    long SetPointSpringProp (
        _bstr_t Name,
        long SpringOption,
        SAFEARRAY * * K,
        _bstr_t CSys,
        _bstr_t SoilProfile,
        _bstr_t Footing,
        double Period,
        long color,
        _bstr_t notes,
        _bstr_t iGUID );
};

struct __declspec(uuid("f7469045-da52-414a-b543-fd34ee6ec54f"))
cDesignForces : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long BeamDesignForces (
        _bstr_t Name,
        long * NumberResults,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * ComboName,
        SAFEARRAY * * Station,
        SAFEARRAY * * P,
        SAFEARRAY * * V2,
        SAFEARRAY * * V3,
        SAFEARRAY * * T,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3,
        enum eItemType ItemType );
    long BraceDesignForces (
        _bstr_t Name,
        long * NumberResults,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * ComboName,
        SAFEARRAY * * Station,
        SAFEARRAY * * P,
        SAFEARRAY * * V2,
        SAFEARRAY * * V3,
        SAFEARRAY * * T,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3,
        enum eItemType ItemType );
    long ColumnDesignForces (
        _bstr_t Name,
        long * NumberResults,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * ComboName,
        SAFEARRAY * * Station,
        SAFEARRAY * * P,
        SAFEARRAY * * V2,
        SAFEARRAY * * V3,
        SAFEARRAY * * T,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3,
        enum eItemType ItemType );
    long PierDesignForces (
        _bstr_t InputPierLabel,
        _bstr_t InputStoryName,
        long * NumberResults,
        SAFEARRAY * * Story,
        SAFEARRAY * * PierLabel,
        SAFEARRAY * * ComboName,
        SAFEARRAY * * Location,
        SAFEARRAY * * P,
        SAFEARRAY * * V2,
        SAFEARRAY * * V3,
        SAFEARRAY * * T,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
    long SpandrelDesignForces (
        _bstr_t InputSpandrelLabel,
        _bstr_t InputStoryName,
        long * NumberResults,
        SAFEARRAY * * Story,
        SAFEARRAY * * SpandrelLabel,
        SAFEARRAY * * ComboName,
        SAFEARRAY * * Location,
        SAFEARRAY * * P,
        SAFEARRAY * * V2,
        SAFEARRAY * * V3,
        SAFEARRAY * * T,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3 );
};

struct __declspec(uuid("965fb3a1-8abf-4b3a-9518-5efa25681606"))
cDesignResults : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetDesignForces))
    cDesignForcesPtr DesignForces;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    cDesignForcesPtr GetDesignForces ( );
};

struct __declspec(uuid("b80fc69c-d3b1-4b01-9e15-cf7d14df8a38"))
cDesignCompositeBeam : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long DeleteResults ( );
    long GetCode (
        BSTR * CodeName );
    long GetComboDeflection (
        long * NumberItems,
        SAFEARRAY * * MyName );
    long GetComboStrength (
        long * NumberItems,
        SAFEARRAY * * MyName );
    long GetDesignSection (
        _bstr_t Name,
        BSTR * PropName );
    long GetGroup (
        long * NumberItems,
        SAFEARRAY * * MyName );
    VARIANT_BOOL GetResultsAvailable ( );
    long GetSummaryResults (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * DesignSect,
        SAFEARRAY * * BeamFy,
        SAFEARRAY * * StudDia,
        SAFEARRAY * * StudLayout,
        SAFEARRAY * * BeamShored,
        SAFEARRAY * * BeamCamber,
        SAFEARRAY * * PassFail,
        SAFEARRAY * * ReacLeft,
        SAFEARRAY * * ReacRt,
        SAFEARRAY * * MMaxNeg,
        SAFEARRAY * * MMaxPos,
        SAFEARRAY * * PCC,
        SAFEARRAY * * OverallRatio,
        SAFEARRAY * * StudRatio,
        SAFEARRAY * * StrPMRat,
        SAFEARRAY * * ConstPMRat,
        SAFEARRAY * * StrShrRat,
        SAFEARRAY * * ConShrRat,
        SAFEARRAY * * PCDLDfRat,
        SAFEARRAY * * SDLDfRat,
        SAFEARRAY * * LLDfRat,
        SAFEARRAY * * TotCamDfRat,
        SAFEARRAY * * FreqRat,
        SAFEARRAY * * MDampRat,
        enum eItemType ItemType );
    long GetTargetDispl (
        long * NumberItems,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * Point,
        SAFEARRAY * * Displ,
        VARIANT_BOOL * Active );
    long GetTargetPeriod (
        long * NumberItems,
        BSTR * ModalCase,
        SAFEARRAY * * Mode,
        SAFEARRAY * * Period,
        VARIANT_BOOL * Active );
    long ResetOverwrites ( );
    long SetAutoSelectNull (
        _bstr_t Name,
        enum eItemType ItemType );
    long SetCode (
        _bstr_t CodeName );
    long SetComboDeflection (
        _bstr_t Name,
        VARIANT_BOOL Selected );
    long SetComboStrength (
        _bstr_t Name,
        VARIANT_BOOL Selected );
    long SetDesignSection (
        _bstr_t Name,
        _bstr_t PropName,
        VARIANT_BOOL LastAnalysis,
        enum eItemType ItemType );
    long SetGroup (
        _bstr_t Name,
        VARIANT_BOOL Selected );
    long SetTargetDispl (
        long NumberItems,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * Point,
        SAFEARRAY * * Displ,
        VARIANT_BOOL Active );
    long SetTargetPeriod (
        long NumberItems,
        _bstr_t ModalCase,
        SAFEARRAY * * Mode,
        SAFEARRAY * * Period,
        VARIANT_BOOL Active );
    long StartDesign ( );
    long VerifyPassed (
        long * NumberItems,
        long * N1,
        long * N2,
        SAFEARRAY * * MyName );
    long VerifySections (
        long * NumberItems,
        SAFEARRAY * * MyName );
};

struct __declspec(uuid("423ffd21-edbb-46dc-b66d-46cc9ffba307"))
cDConcShellEurocode_2_2004 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("df961e2f-7cd0-4dd9-971b-6d5f6e515c0a"))
cDesignConcreteShell : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("c04392a3-99d1-4d05-8dd3-c0284e266f00"))
cDConcSlabACI318_14 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetPreference (
        long Item,
        BSTR * textValue,
        double * numericValue );
};

struct __declspec(uuid("f572440b-b2d9-4a55-8196-877550c81d16"))
cDConcSlabACI318_19 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetPreference (
        long Item,
        BSTR * textValue,
        double * numericValue );
};

struct __declspec(uuid("ad093a50-7ffd-42f8-b1dd-22faa817917d"))
cDesignConcreteSlab : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetACI318_14))
    cDConcSlabACI318_14Ptr ACI318_14;
    __declspec(property(get=GetDesignStrip))
    cDesignStripPtr DesignStrip;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    cDConcSlabACI318_14Ptr GetACI318_14 ( );
    cDesignStripPtr GetDesignStrip ( );
    long GetFlexureAndShear (
        SAFEARRAY * * StoryName,
        SAFEARRAY * * DesignStripName,
        SAFEARRAY * * Station,
        SAFEARRAY * * ConcWidth,
        SAFEARRAY * * FTopCombo,
        SAFEARRAY * * FTopMoment,
        SAFEARRAY * * FTopArea,
        SAFEARRAY * * FTopAMin,
        SAFEARRAY * * FBotCombo,
        SAFEARRAY * * FBotMoment,
        SAFEARRAY * * FBotArea,
        SAFEARRAY * * FBotAMin,
        SAFEARRAY * * AxialForce,
        SAFEARRAY * * VCombo,
        SAFEARRAY * * VForce,
        SAFEARRAY * * VArea,
        SAFEARRAY * * Status,
        SAFEARRAY * * GlobalX,
        SAFEARRAY * * GlobalY,
        SAFEARRAY * * Layer );
    long GetSummaryResultsFlexureAndShear (
        SAFEARRAY * * StoryName,
        SAFEARRAY * * DesignStripName,
        SAFEARRAY * * SpanID,
        SAFEARRAY * * Location,
        SAFEARRAY * * FTopCombo,
        SAFEARRAY * * FTopMoment,
        SAFEARRAY * * FTopArea,
        SAFEARRAY * * FBotCombo,
        SAFEARRAY * * FBotMoment,
        SAFEARRAY * * FBotArea,
        SAFEARRAY * * VCombo,
        SAFEARRAY * * VForce,
        SAFEARRAY * * VArea,
        SAFEARRAY * * Status,
        SAFEARRAY * * Layer );
    long GetSummaryResultsSpanDefinition (
        SAFEARRAY * * StoryName,
        SAFEARRAY * * DesignStripName,
        SAFEARRAY * * SpanID,
        SAFEARRAY * * SpanLength,
        SAFEARRAY * * StartDist,
        SAFEARRAY * * EndDist,
        SAFEARRAY * * GlobalX1,
        SAFEARRAY * * GlobalY1,
        SAFEARRAY * * GlobalX2,
        SAFEARRAY * * GlobalY2 );
    long StartSlabDesign ( );
};

struct __declspec(uuid("b8cbfe5b-f426-4d0a-aebf-f3a8e222849c"))
cDesignStrip : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Delete (
        _bstr_t Name );
    long GetDesignStrip (
        _bstr_t Name,
        SAFEARRAY * * Point,
        SAFEARRAY * * GlobalX,
        SAFEARRAY * * GlobalY,
        SAFEARRAY * * GlobalZ,
        SAFEARRAY * * WBLeft,
        SAFEARRAY * * WBRight,
        SAFEARRAY * * WALeft,
        SAFEARRAY * * WARight,
        SAFEARRAY * * AutoWiden );
    long GetGUID (
        _bstr_t Name,
        BSTR * GUID );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetDesignStrip_1 (
        _bstr_t Name,
        long * DesignType,
        SAFEARRAY * * Point,
        SAFEARRAY * * GlobalX,
        SAFEARRAY * * GlobalY,
        SAFEARRAY * * GlobalZ,
        SAFEARRAY * * WBLeft,
        SAFEARRAY * * WBRight,
        SAFEARRAY * * WALeft,
        SAFEARRAY * * WARight,
        SAFEARRAY * * AutoWiden );
    long SetGUID (
        _bstr_t Name,
        _bstr_t GUID );
};

struct __declspec(uuid("48e6c50b-130d-4c1a-847f-ea185307a618"))
cDCoACI318_08_IBC2009 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("176897ef-cfaf-470b-a676-074f3d2f8fd2"))
cDCoACI318_11 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("cd4542c2-d246-469a-8514-1ac4c1811911"))
cDCoACI318_19 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("c6a092ad-f6fc-4ad5-9862-f7b481c44b18"))
cDCoACI318_14 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("a3d43e54-824d-4538-a28a-b5385b0f51cf"))
cDCoAS_3600_09 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("c5e654ce-23b1-465b-9aeb-58d574df4225"))
cDCoAS_3600_2018 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("6e93de30-10b6-45a8-8b82-129688d8f80e"))
cDCoBS8110_97 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("8b3b4b91-3406-44d3-93ab-29f9ec824e66"))
cDCoChinese_2010 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("82d4214f-47cc-41e1-9c85-d4f2a50eb262"))
cDCoEurocode_2_2004 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("64d41225-489d-42ff-a1f3-6fbdfef9d6fe"))
cDCoHong_Kong_CP_2013 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("35968ab4-e1f9-41ba-8c9c-26cabc55dce4"))
cDCoIndian_IS_456_2000 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("1308d2a3-7656-4e06-a610-f1a93282b5cc"))
cDCoItalianNTC2008C : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("202f4644-a7b2-44fc-b519-073a55592eac"))
cDCoMexican_RCDF_2004 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("3a09968a-4e3d-4602-b870-ff5d320e00f8"))
cDCoMexican_RCDF_2017 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("a09ef0a6-d1cb-4329-9bba-8778d7078794"))
cDCoNZS_3101_2006 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("cd1d9d18-26e7-4d7d-a69e-0f701a405596"))
cDCoSP63133302011 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("a2ce64ae-31fd-4550-b4ff-a1ca1b4f4f5b"))
cDCoTS_500_2000 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("4fa29d29-960d-4b15-b115-4da33a4f4716"))
cDCoTS_500_2000_R2018 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("3e3e4806-bb37-4d78-99a0-20436f21a0a8"))
cDesignConcrete : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetACI318_08_IBC2009))
    cDCoACI318_08_IBC2009Ptr ACI318_08_IBC2009;
    __declspec(property(get=GetAS_3600_09))
    cDCoAS_3600_09Ptr AS_3600_09;
    __declspec(property(get=GetBS8110_97))
    cDCoBS8110_97Ptr BS8110_97;
    __declspec(property(get=GetChinese_2010))
    cDCoChinese_2010Ptr Chinese_2010;
    __declspec(property(get=GetEurocode_2_2004))
    cDCoEurocode_2_2004Ptr Eurocode_2_2004;
    __declspec(property(get=GetSP63_13330_2012))
    cDCoSP63133302011Ptr SP63_13330_2012;
    __declspec(property(get=GetACI318_14))
    cDCoACI318_14Ptr ACI318_14;
    __declspec(property(get=GetACI318_19))
    cDCoACI318_19Ptr ACI318_19;
    __declspec(property(get=GetAS_3600_2018))
    cDCoAS_3600_2018Ptr AS_3600_2018;
    __declspec(property(get=GetIndian_IS_456_2000))
    cDCoIndian_IS_456_2000Ptr Indian_IS_456_2000;
    __declspec(property(get=GetMexican_RCDF_2017))
    cDCoMexican_RCDF_2017Ptr Mexican_RCDF_2017;
    __declspec(property(get=GetTS_500_2000_R2018))
    cDCoTS_500_2000_R2018Ptr TS_500_2000_R2018;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    cDCoACI318_08_IBC2009Ptr GetACI318_08_IBC2009 ( );
    cDCoEurocode_2_2004Ptr GetEurocode_2_2004 ( );
    long GetCode (
        BSTR * CodeName );
    long GetDesignSection (
        _bstr_t Name,
        BSTR * PropName );
    VARIANT_BOOL GetResultsAvailable ( );
    long GetSummaryResultsBeam (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * Location,
        SAFEARRAY * * TopCombo,
        SAFEARRAY * * TopArea,
        SAFEARRAY * * BotCombo,
        SAFEARRAY * * BotArea,
        SAFEARRAY * * VMajorCombo,
        SAFEARRAY * * VMajorArea,
        SAFEARRAY * * TLCombo,
        SAFEARRAY * * TLArea,
        SAFEARRAY * * TTCombo,
        SAFEARRAY * * TTArea,
        SAFEARRAY * * ErrorSummary,
        SAFEARRAY * * WarningSummary,
        enum eItemType ItemType );
    long GetSummaryResultsColumn (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * MyOption,
        SAFEARRAY * * Location,
        SAFEARRAY * * PMMCombo,
        SAFEARRAY * * PMMArea,
        SAFEARRAY * * PMMRatio,
        SAFEARRAY * * VMajorCombo,
        SAFEARRAY * * AVMajor,
        SAFEARRAY * * VMinorCombo,
        SAFEARRAY * * AVMinor,
        SAFEARRAY * * ErrorSummary,
        SAFEARRAY * * WarningSummary,
        enum eItemType ItemType );
    long GetSummaryResultsJoint (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * LCJSRatioMajor,
        SAFEARRAY * * JSRatioMajor,
        SAFEARRAY * * LCJSRatioMinor,
        SAFEARRAY * * JSRatioMinor,
        SAFEARRAY * * LCBCCRatioMajor,
        SAFEARRAY * * BCCRatioMajor,
        SAFEARRAY * * LCBCCRatioMinor,
        SAFEARRAY * * BCCRatioMinor,
        SAFEARRAY * * ErrorSummary,
        SAFEARRAY * * WarningSummary,
        enum eItemType ItemType );
    long SetCode (
        _bstr_t CodeName );
    long SetDesignSection (
        _bstr_t Name,
        _bstr_t PropName,
        VARIANT_BOOL LastAnalysis,
        enum eItemType ItemType );
    long StartDesign ( );
    cDCoSP63133302011Ptr GetSP63_13330_2012 ( );
    cDCoACI318_14Ptr GetACI318_14 ( );
    cDCoACI318_19Ptr GetACI318_19 ( );
    cDCoAS_3600_09Ptr GetAS_3600_09 ( );
    cDCoBS8110_97Ptr GetBS8110_97 ( );
    cDCoChinese_2010Ptr GetChinese_2010 ( );
    cDCoIndian_IS_456_2000Ptr GetIndian_IS_456_2000 ( );
    long GetRebarPrefsBeam (
        long Item,
        BSTR * Value );
    long GetRebarPrefsColumn (
        long Item,
        BSTR * Value );
    long GetSummaryResultsBeam_2 (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * Location,
        SAFEARRAY * * TopCombo,
        SAFEARRAY * * TopArea,
        SAFEARRAY * * TopAreaReq,
        SAFEARRAY * * TopAreaMin,
        SAFEARRAY * * TopAreaProvided,
        SAFEARRAY * * BotCombo,
        SAFEARRAY * * BotArea,
        SAFEARRAY * * BotAreaReq,
        SAFEARRAY * * BotAreaMin,
        SAFEARRAY * * BotAreaProvided,
        SAFEARRAY * * VMajorCombo,
        SAFEARRAY * * VMajorArea,
        SAFEARRAY * * VmajorAreaReq,
        SAFEARRAY * * VmajorAreaMin,
        SAFEARRAY * * VmajorAreaProvided,
        SAFEARRAY * * TLCombo,
        SAFEARRAY * * TLArea,
        SAFEARRAY * * TTCombo,
        SAFEARRAY * * TTArea,
        SAFEARRAY * * ErrorSummary,
        SAFEARRAY * * WarningSummary,
        enum eItemType ItemType );
    cDCoAS_3600_2018Ptr GetAS_3600_2018 ( );
    cDCoMexican_RCDF_2017Ptr GetMexican_RCDF_2017 ( );
    cDCoTS_500_2000_R2018Ptr GetTS_500_2000_R2018 ( );
    long GetSeismicFramingType (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * FramingType,
        enum eItemType ItemType );
};

struct __declspec(uuid("f1c53bf1-0357-4dab-bb1b-ea1749ed14d2"))
cDesignShearWall : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetPierSummaryResults (
        SAFEARRAY * * Story,
        SAFEARRAY * * PierLabel,
        SAFEARRAY * * Station,
        SAFEARRAY * * DesignType,
        SAFEARRAY * * PierSecType,
        SAFEARRAY * * EdgeBar,
        SAFEARRAY * * EndBar,
        SAFEARRAY * * BarSpacing,
        SAFEARRAY * * ReinfPercent,
        SAFEARRAY * * CurrPercent,
        SAFEARRAY * * DCRatio,
        SAFEARRAY * * PierLeg,
        SAFEARRAY * * LegX1,
        SAFEARRAY * * LegY1,
        SAFEARRAY * * LegX2,
        SAFEARRAY * * LegY2,
        SAFEARRAY * * EdgeLeft,
        SAFEARRAY * * EdgeRight,
        SAFEARRAY * * AsLeft,
        SAFEARRAY * * AsRight,
        SAFEARRAY * * ShearAv,
        SAFEARRAY * * StressCompLeft,
        SAFEARRAY * * StressCompRight,
        SAFEARRAY * * StressLimitLeft,
        SAFEARRAY * * StressLimitRight,
        SAFEARRAY * * CDepthLeft,
        SAFEARRAY * * CLimitLeft,
        SAFEARRAY * * CDepthRight,
        SAFEARRAY * * CLimitRight,
        SAFEARRAY * * InelasticRotDemand,
        SAFEARRAY * * InelasticRotCapacity,
        SAFEARRAY * * NormCompStress,
        SAFEARRAY * * NormCompStressLimit,
        SAFEARRAY * * CDepth,
        SAFEARRAY * * BZoneL,
        SAFEARRAY * * BZoneR,
        SAFEARRAY * * BZoneLength,
        SAFEARRAY * * WarnMsg,
        SAFEARRAY * * ErrMsg );
    long GetRebar (
        SAFEARRAY * * AreaObjName,
        SAFEARRAY * * StoryName,
        SAFEARRAY * * PierLabel,
        SAFEARRAY * * StationLocation,
        SAFEARRAY * * LegID,
        SAFEARRAY * * LeftX1,
        SAFEARRAY * * LeftY1,
        SAFEARRAY * * RightX2,
        SAFEARRAY * * RightY2,
        SAFEARRAY * * Length,
        SAFEARRAY * * Thickness,
        SAFEARRAY * * Fc,
        SAFEARRAY * * FY,
        SAFEARRAY * * fys,
        SAFEARRAY * * Flexural,
        SAFEARRAY * * ShearAndConfinement );
    long GetSpandrelSummaryResults (
        SAFEARRAY * * Story,
        SAFEARRAY * * Spandrel,
        SAFEARRAY * * Station,
        SAFEARRAY * * TopRebar,
        SAFEARRAY * * TopRebarRatio,
        SAFEARRAY * * TopRebarCombo,
        SAFEARRAY * * MuTop,
        SAFEARRAY * * BotRebar,
        SAFEARRAY * * BotRebarRatio,
        SAFEARRAY * * BotRebarCombo,
        SAFEARRAY * * MuBot,
        SAFEARRAY * * AVert,
        SAFEARRAY * * AHorz,
        SAFEARRAY * * ShearCombo,
        SAFEARRAY * * Vu,
        SAFEARRAY * * ADiag,
        SAFEARRAY * * ShearDiagCombo,
        SAFEARRAY * * VuDiag,
        SAFEARRAY * * WarnMsg,
        SAFEARRAY * * ErrMsg );
    long GetRebarPrefsPier (
        long Item,
        BSTR * Value );
    long GetRebarPrefsSpandrel (
        long Item,
        BSTR * Value );
};

struct __declspec(uuid("a7a9681c-52c4-46ea-9e6e-8c33047e5f40"))
cDesignSteel : IDispatch
{
    //
    // Property data
    //

    __declspec(property(get=GetAISC_LRFD93))
    cDStAISC_LRFD93Ptr AISC_LRFD93;
    __declspec(property(get=GetSP16_13330_2011))
    cDStSP16_13330_2011Ptr SP16_13330_2011;
    __declspec(property(get=GetAISC360_05_IBC2006))
    cDStAISC360_05_IBC2006Ptr AISC360_05_IBC2006;
    __declspec(property(get=GetChinese_2018))
    cDStChinese_2018Ptr Chinese_2018;
    __declspec(property(get=GetItalian_NTC_2018))
    cDStItalianNTC2018SPtr Italian_NTC_2018;
    __declspec(property(get=GetCanadian_S16_14))
    cDStCanadian_S16_14Ptr Canadian_S16_14;
    __declspec(property(get=GetCanadian_S16_19))
    cDStCanadian_S16_19Ptr Canadian_S16_19;
    __declspec(property(get=GetAustralian_AS4100_98))
    cDStAustralian_AS4100_98Ptr Australian_AS4100_98;
    __declspec(property(get=GetAustralian_AS4100_2020))
    cDStAustralian_AS4100_2020Ptr Australian_AS4100_2020;
    __declspec(property(get=GetBS5950_2000))
    cDStBS5950_2000Ptr BS5950_2000;
    __declspec(property(get=GetCanadian_S16_09))
    cDStCanadian_S16_09Ptr Canadian_S16_09;
    __declspec(property(get=GetChinese_2010))
    cDStChinese_2010Ptr Chinese_2010;
    __declspec(property(get=GetEurocode_3_2005))
    cDStEurocode_3_2005Ptr Eurocode_3_2005;
    __declspec(property(get=GetItalian_NTC_2008))
    cDStItalianNTC2008SPtr Italian_NTC_2008;
    __declspec(property(get=GetIndian_IS_800_2007))
    cDStIndian_IS_800_2007Ptr Indian_IS_800_2007;
    __declspec(property(get=GetNewZealand_NZS3404_97))
    cDStNewZealand_NZS3404_97Ptr NewZealand_NZS3404_97;

    //
    // Wrapper methods for error-handling
    //

    // Methods:
    cDStAISC360_05_IBC2006Ptr GetAISC360_05_IBC2006 ( );
    cDStCanadian_S16_09Ptr GetCanadian_S16_09 ( );
    long DeleteResults ( );
    cDStEurocode_3_2005Ptr GetEurocode_3_2005 ( );
    long GetCode (
        BSTR * CodeName );
    long GetComboDeflection (
        long * NumberItems,
        SAFEARRAY * * MyName );
    long GetComboStrength (
        long * NumberItems,
        SAFEARRAY * * MyName );
    long GetDesignSection (
        _bstr_t Name,
        BSTR * PropName );
    long GetGroup (
        long * NumberItems,
        SAFEARRAY * * MyName );
    VARIANT_BOOL GetResultsAvailable ( );
    long GetSummaryResults (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * Ratio,
        SAFEARRAY * * RatioType,
        SAFEARRAY * * Location,
        SAFEARRAY * * ComboName,
        SAFEARRAY * * ErrorSummary,
        SAFEARRAY * * WarningSummary,
        enum eItemType ItemType );
    long GetTargetDispl (
        long * NumberItems,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * Point,
        SAFEARRAY * * Displ,
        VARIANT_BOOL * Active );
    long GetTargetPeriod (
        long * NumberItems,
        BSTR * ModalCase,
        SAFEARRAY * * Mode,
        SAFEARRAY * * Period,
        VARIANT_BOOL * Active );
    long ResetOverwrites ( );
    long SetAutoSelectNull (
        _bstr_t Name,
        enum eItemType ItemType );
    long SetCode (
        _bstr_t CodeName );
    long SetComboDeflection (
        _bstr_t Name,
        VARIANT_BOOL Selected );
    long SetComboStrength (
        _bstr_t Name,
        VARIANT_BOOL Selected );
    long SetDesignSection (
        _bstr_t Name,
        _bstr_t PropName,
        VARIANT_BOOL LastAnalysis,
        enum eItemType ItemType );
    long SetGroup (
        _bstr_t Name,
        VARIANT_BOOL Selected );
    long SetTargetDispl (
        long NumberItems,
        SAFEARRAY * * LoadCase,
        SAFEARRAY * * Point,
        SAFEARRAY * * Displ,
        VARIANT_BOOL Active );
    long SetTargetPeriod (
        long NumberItems,
        _bstr_t ModalCase,
        SAFEARRAY * * Mode,
        SAFEARRAY * * Period,
        VARIANT_BOOL Active );
    long StartDesign ( );
    long VerifyPassed (
        long * NumberItems,
        long * N1,
        long * N2,
        SAFEARRAY * * MyName );
    long VerifySections (
        long * NumberItems,
        SAFEARRAY * * MyName );
    cDStSP16_13330_2011Ptr GetSP16_13330_2011 ( );
    cDStCanadian_S16_14Ptr GetCanadian_S16_14 ( );
    cDStCanadian_S16_19Ptr GetCanadian_S16_19 ( );
    cDStAISC_LRFD93Ptr GetAISC_LRFD93 ( );
    cDStAustralian_AS4100_98Ptr GetAustralian_AS4100_98 ( );
    cDStAustralian_AS4100_2020Ptr GetAustralian_AS4100_2020 ( );
    cDStBS5950_2000Ptr GetBS5950_2000 ( );
    cDStChinese_2010Ptr GetChinese_2010 ( );
    cDStChinese_2018Ptr GetChinese_2018 ( );
    cDStIndian_IS_800_2007Ptr GetIndian_IS_800_2007 ( );
    cDStNewZealand_NZS3404_97Ptr GetNewZealand_NZS3404_97 ( );
    cDStItalianNTC2008SPtr GetItalian_NTC_2008 ( );
    cDStItalianNTC2018SPtr GetItalian_NTC_2018 ( );
    long GetSummaryResults_2 (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameType,
        SAFEARRAY * * DesignSect,
        SAFEARRAY * * Status,
        SAFEARRAY * * PMMCombo,
        SAFEARRAY * * PMMRatio,
        SAFEARRAY * * PRatio,
        SAFEARRAY * * MMajRatio,
        SAFEARRAY * * MMinRatio,
        SAFEARRAY * * VMajCombo,
        SAFEARRAY * * VMajRatio,
        SAFEARRAY * * VMinCombo,
        SAFEARRAY * * VMinRatio,
        enum eItemType ItemType );
    long GetSummaryResults_3 (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * FrameType,
        SAFEARRAY * * DesignSect,
        SAFEARRAY * * Status,
        SAFEARRAY * * PMMCombo,
        SAFEARRAY * * PMMRatio,
        SAFEARRAY * * PRatio,
        SAFEARRAY * * MMajRatio,
        SAFEARRAY * * MMinRatio,
        SAFEARRAY * * VMajCombo,
        SAFEARRAY * * VMajRatio,
        SAFEARRAY * * VMinCombo,
        SAFEARRAY * * VMinRatio,
        enum eItemType ItemType );
};

struct __declspec(uuid("57576186-4629-4066-a5e3-aafb8551b6a8"))
cDStAISC360_05_IBC2006 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("ab1800e1-011e-4212-a139-ea8232b04549"))
cDStAISC360_10 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("a3f32989-4b8e-4199-862d-dd2fa235c381"))
cDStAISC_ASD89 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("38dd519b-ac4a-4dc8-b170-b8f58dc34b6e"))
cDStAISC_LRFD93 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("46883fe3-67f0-4286-a119-913fa272ba9f"))
cDStAustralian_AS4100_98 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("6a4e5155-9478-4f7e-87ab-b91a78341597"))
cDStBS5950_2000 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("7169a078-37cb-4021-a6cd-9923eb723a64"))
cDStCanadian_S16_09 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("31467f7c-766c-4be6-b19f-ba9f0388a22a"))
cDStCanadian_S16_19 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("d81d4698-c66b-40cd-88ff-6534970ded6d"))
cDStChinese_2010 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("a09a57cb-e3d1-4966-baf4-365f2c2598a8"))
cDStChinese_2018 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("dbfa67a5-bceb-4d70-9896-87600ceba41f"))
cDStEurocode_3_2005 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("655c6ea8-969d-4876-8ab0-28737cade5a4"))
cDStIndian_IS_800_2007 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("e94bee54-8675-4605-b382-e7aa0dc62c50"))
cDStItalianNTC2008S : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("dd1295a2-2c57-4719-a27a-bdcc95bd0674"))
cDStNewZealand_NZS3404_97 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("b41e2718-abb7-465f-97c8-952b2c44202b"))
cDStSP16_13330_2011 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("f91a6e37-1a06-41c3-9138-59e3e007b4ad"))
cDStCanadian_S16_14 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("c6e5510d-451e-4fa9-9044-335a7cd9a3d6"))
cDStItalianNTC2018S : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        BSTR * textValue,
        double * numericValue,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        BSTR * textValue,
        double * numericValue );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        _bstr_t textValue,
        double numericValue,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        _bstr_t textValue,
        double numericValue );
};

struct __declspec(uuid("48c48622-bada-4e06-bb96-58faae32eb93"))
cDStSP16_13330_2017 : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetOverwrite (
        _bstr_t Name,
        long Item,
        double * Value,
        VARIANT_BOOL * ProgDet );
    long GetPreference (
        long Item,
        double * Value );
    long SetOverwrite (
        _bstr_t Name,
        long Item,
        double Value,
        enum eItemType ItemType );
    long SetPreference (
        long Item,
        double Value );
};

struct __declspec(uuid("95af59de-08d7-4338-a42c-5cf22c36eadb"))
cDetailing : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ClearDetailing ( );
    long GetDetailedBeamLines (
        long * NumberItems,
        SAFEARRAY * * BeamLineIDs );
    long GetDetailedBeamLineData (
        _bstr_t BeamLineID,
        SAFEARRAY * * ObjectUniqueNames,
        long * NumberSpans,
        SAFEARRAY * * SpanLength,
        SAFEARRAY * * NumLongBars,
        SAFEARRAY * * LongBarDiameter,
        SAFEARRAY * * LongBarNotation,
        SAFEARRAY * * LongBarStartDist,
        SAFEARRAY * * LongBarStartBend,
        SAFEARRAY * * LongBarEndBend,
        SAFEARRAY * * LongBarLength,
        SAFEARRAY * * LongBarNumLayers,
        SAFEARRAY * * NumTieBars,
        SAFEARRAY * * NumTieVertLegs,
        SAFEARRAY * * TieBarDiameter,
        SAFEARRAY * * TieBarNotation,
        SAFEARRAY * * TieBarStartDist,
        SAFEARRAY * * TieBarSpacing,
        SAFEARRAY * * TieBarType );
    long GetDetailedBeamLineData_1 (
        _bstr_t BeamLineID,
        SAFEARRAY * * ObjectUniqueNames,
        long * NumberSpans,
        SAFEARRAY * * SpanLength,
        SAFEARRAY * * NumLongBars,
        SAFEARRAY * * LongBarGUID,
        SAFEARRAY * * LongBarDiameter,
        SAFEARRAY * * LongBarNotation,
        SAFEARRAY * * LongBarStartDist,
        SAFEARRAY * * LongBarStartBend,
        SAFEARRAY * * LongBarEndBend,
        SAFEARRAY * * LongBarLength,
        SAFEARRAY * * LongBarNumLayers,
        SAFEARRAY * * NumTieBars,
        SAFEARRAY * * NumTieVertLegs,
        SAFEARRAY * * TieBarGUID,
        SAFEARRAY * * TieBarDiameter,
        SAFEARRAY * * TieBarNotation,
        SAFEARRAY * * TieBarStartDist,
        SAFEARRAY * * TieBarSpacing,
        SAFEARRAY * * TieBarType );
    long GetDetailedColumnStacks (
        long * NumberItems,
        SAFEARRAY * * ColumnStackIDs );
    long GetDetailedColumnStackData (
        _bstr_t ColumnStackID,
        SAFEARRAY * * ObjectUniqueNames,
        long * NumLongBarSets,
        SAFEARRAY * * NumLongBars,
        SAFEARRAY * * LongBarDiameter,
        SAFEARRAY * * LongBarNotation,
        SAFEARRAY * * LongBarStartDist,
        SAFEARRAY * * LongBarStartBend,
        SAFEARRAY * * LongBarEndBend,
        SAFEARRAY * * LongBarLength,
        SAFEARRAY * * LongBarNumLayers,
        long * NumTieZones,
        SAFEARRAY * * TieBarZones,
        SAFEARRAY * * NumTieBars,
        SAFEARRAY * * NumTieVertLegs,
        SAFEARRAY * * TieBarDiameter,
        SAFEARRAY * * TieBarNotation,
        SAFEARRAY * * TieBarStartDist,
        SAFEARRAY * * TieBarSpacing,
        SAFEARRAY * * TieBarType );
    long GetDetailedColumnStackData_1 (
        _bstr_t ColumnStackID,
        SAFEARRAY * * ObjectUniqueNames,
        long * NumLongBarSets,
        SAFEARRAY * * NumLongBars,
        SAFEARRAY * * LongBarGUID,
        SAFEARRAY * * LongBarDiameter,
        SAFEARRAY * * LongBarNotation,
        SAFEARRAY * * LongBarStartDist,
        SAFEARRAY * * LongBarStartBend,
        SAFEARRAY * * LongBarEndBend,
        SAFEARRAY * * LongBarLength,
        SAFEARRAY * * LongBarNumLayers,
        long * NumTieZones,
        SAFEARRAY * * TieBarZones,
        SAFEARRAY * * NumTieBars,
        SAFEARRAY * * NumTieHorLegs,
        SAFEARRAY * * NumTieVertLegs,
        SAFEARRAY * * TieBarGUID,
        SAFEARRAY * * TieBarDiameter,
        SAFEARRAY * * TieBarNotation,
        SAFEARRAY * * TieBarStartDist,
        SAFEARRAY * * TieBarSpacing,
        SAFEARRAY * * TieBarType );
    long GetDetailedSlabs (
        long * NumberItems,
        SAFEARRAY * * Names,
        SAFEARRAY * * SlabElevations,
        SAFEARRAY * * GUIDs );
    long GetDetailedSlabBotBarData (
        _bstr_t SlabName,
        long * NumData,
        SAFEARRAY * * Names,
        SAFEARRAY * * NumBars,
        SAFEARRAY * * BarDiameter,
        SAFEARRAY * * BarNotation,
        SAFEARRAY * * BarMaterial,
        SAFEARRAY * * StartX,
        SAFEARRAY * * StartY,
        SAFEARRAY * * StartZ,
        SAFEARRAY * * EndX,
        SAFEARRAY * * EndY,
        SAFEARRAY * * EndZ,
        SAFEARRAY * * WidthLeft,
        SAFEARRAY * * WidthRight,
        SAFEARRAY * * OffsetFromTop,
        SAFEARRAY * * OffsetFromBot,
        SAFEARRAY * * StartBarBend,
        SAFEARRAY * * EndBarBend,
        SAFEARRAY * * GUIDs );
    long GetDetailedSlabBotBarData_1 (
        _bstr_t SlabName,
        long * NumData,
        SAFEARRAY * * Names,
        SAFEARRAY * * NumBars,
        SAFEARRAY * * BarDiameter,
        SAFEARRAY * * BarNotation,
        SAFEARRAY * * BarMaterial,
        SAFEARRAY * * StartX,
        SAFEARRAY * * StartY,
        SAFEARRAY * * StartZ,
        SAFEARRAY * * EndX,
        SAFEARRAY * * EndY,
        SAFEARRAY * * EndZ,
        SAFEARRAY * * WidthLeft,
        SAFEARRAY * * WidthRight,
        SAFEARRAY * * OffsetFromTop,
        SAFEARRAY * * OffsetFromBot,
        SAFEARRAY * * StartBarBend,
        SAFEARRAY * * EndBarBend,
        SAFEARRAY * * GUIDs,
        SAFEARRAY * * StripNames,
        SAFEARRAY * * SpanNos );
    long GetDetailedSlabTopBarData (
        _bstr_t SlabName,
        long * NumData,
        SAFEARRAY * * Names,
        SAFEARRAY * * NumBars,
        SAFEARRAY * * BarDiameter,
        SAFEARRAY * * BarNotation,
        SAFEARRAY * * BarMaterial,
        SAFEARRAY * * StartX,
        SAFEARRAY * * StartY,
        SAFEARRAY * * StartZ,
        SAFEARRAY * * EndX,
        SAFEARRAY * * EndY,
        SAFEARRAY * * EndZ,
        SAFEARRAY * * WidthLeft,
        SAFEARRAY * * WidthRight,
        SAFEARRAY * * OffsetFromTop,
        SAFEARRAY * * OffsetFromBot,
        SAFEARRAY * * StartBarBend,
        SAFEARRAY * * EndBarBend,
        SAFEARRAY * * GUIDs );
    long GetDetailedSlabTopBarData_1 (
        _bstr_t SlabName,
        long * NumData,
        SAFEARRAY * * Names,
        SAFEARRAY * * NumBars,
        SAFEARRAY * * BarDiameter,
        SAFEARRAY * * BarNotation,
        SAFEARRAY * * BarMaterial,
        SAFEARRAY * * StartX,
        SAFEARRAY * * StartY,
        SAFEARRAY * * StartZ,
        SAFEARRAY * * EndX,
        SAFEARRAY * * EndY,
        SAFEARRAY * * EndZ,
        SAFEARRAY * * WidthLeft,
        SAFEARRAY * * WidthRight,
        SAFEARRAY * * OffsetFromTop,
        SAFEARRAY * * OffsetFromBot,
        SAFEARRAY * * StartBarBend,
        SAFEARRAY * * EndBarBend,
        SAFEARRAY * * GUIDs,
        SAFEARRAY * * StripNames,
        SAFEARRAY * * SpanNos );
    VARIANT_BOOL GetDetailingAvailable ( );
    long GetSimilarBeamLines (
        _bstr_t BeamLineID,
        long * NumberSimilarBeams,
        SAFEARRAY * * NumberUniqueObjects,
        SAFEARRAY * * ObjectUniqueNames );
    long GetSimilarColumnStacks (
        _bstr_t ColumnStackID,
        long * NumberSimilarColumns,
        SAFEARRAY * * NumberUniqueObjects,
        SAFEARRAY * * ObjectUniqueNames );
    long GetSimilarSlabs (
        _bstr_t SlabName,
        long * NumberSimilarSlabs,
        SAFEARRAY * * Names );
    long StartDetailing (
        VARIANT_BOOL OverwriteExisting );
    long GetBeamLongRebarData (
        _bstr_t Name,
        long * NumberRebarSets,
        SAFEARRAY * * BarSizeName,
        SAFEARRAY * * BarArea,
        SAFEARRAY * * NumberBars,
        SAFEARRAY * * Location,
        SAFEARRAY * * ClearCover,
        SAFEARRAY * * StartCoord1,
        SAFEARRAY * * BarLength,
        SAFEARRAY * * BendingAngleStart,
        SAFEARRAY * * BendingAngleEnd,
        SAFEARRAY * * RebarSetGUID );
    long GetBeamTieRebarData (
        _bstr_t Name,
        long * NumberRebarSets,
        SAFEARRAY * * BarSizeName,
        SAFEARRAY * * BarArea,
        SAFEARRAY * * NumberLegs,
        SAFEARRAY * * Location,
        SAFEARRAY * * ClearCover,
        SAFEARRAY * * StartCoord1,
        SAFEARRAY * * Spacing,
        SAFEARRAY * * Lengths,
        SAFEARRAY * * RebarSetGUID );
    long GetColumnLongRebarData (
        _bstr_t Name,
        long * NumberRebarSets,
        SAFEARRAY * * BarSizeName,
        SAFEARRAY * * BarArea,
        SAFEARRAY * * NumberCBars,
        SAFEARRAY * * NumberR3Bars,
        SAFEARRAY * * NumberR2Bars,
        SAFEARRAY * * Location,
        SAFEARRAY * * ClearCover,
        SAFEARRAY * * RebarSetGUID );
    long GetColumnTieRebarData (
        _bstr_t Name,
        long * NumberRebarSets,
        SAFEARRAY * * BarSizeName,
        SAFEARRAY * * BarArea,
        SAFEARRAY * * Pattern,
        SAFEARRAY * * ConfineType,
        SAFEARRAY * * NumberLegs2Dir,
        SAFEARRAY * * NumberLegs3Dir,
        SAFEARRAY * * Location,
        SAFEARRAY * * ClearCover,
        SAFEARRAY * * StartCoord1,
        SAFEARRAY * * Spacing,
        SAFEARRAY * * Heights,
        SAFEARRAY * * RebarSetGUID );
    long GetDetailedBeamLineGuidData (
        _bstr_t BeamLineID,
        _bstr_t SimilarFirstBeamUniqueID,
        SAFEARRAY * * LongitudinalABars,
        SAFEARRAY * * LongitudinalBBars,
        SAFEARRAY * * LongitudinalCBars,
        SAFEARRAY * * LongitudinalDBars,
        SAFEARRAY * * LongitudinalEBars,
        SAFEARRAY * * LongitudinalFBars,
        SAFEARRAY * * LongitudinalGBars,
        SAFEARRAY * * LongitudinalHBars,
        SAFEARRAY * * ZoneATies,
        SAFEARRAY * * ZoneBTies,
        SAFEARRAY * * ZoneCTies );
    long GetDetailedColumnStackGuidData (
        _bstr_t ColumnStackID,
        _bstr_t SimilarFirstColumnUniqueID,
        SAFEARRAY * * LongitudinalBars,
        SAFEARRAY * * TiesA,
        SAFEARRAY * * TiesB,
        SAFEARRAY * * TiesC );
    long GetDetailedColumnStackData_2 (
        _bstr_t ColumnStackID,
        SAFEARRAY * * ObjectUniqueNames,
        long * NumLongBarSets,
        SAFEARRAY * * NumLongBars,
        SAFEARRAY * * NumLongR2Bars,
        SAFEARRAY * * NumLongR3Bars,
        SAFEARRAY * * LongBarGUID,
        SAFEARRAY * * LongBarDiameter,
        SAFEARRAY * * LongBarNotation,
        SAFEARRAY * * LongBarStartDist,
        SAFEARRAY * * LongBarStartBend,
        SAFEARRAY * * LongBarEndBend,
        SAFEARRAY * * LongBarLength,
        SAFEARRAY * * LongBarNumLayers,
        long * NumTieZones,
        SAFEARRAY * * TieBarZone,
        SAFEARRAY * * NumTieBars,
        SAFEARRAY * * NumTieR2Legs,
        SAFEARRAY * * NumTieR3Legs,
        SAFEARRAY * * TieBarGUID,
        SAFEARRAY * * TieBarDiameter,
        SAFEARRAY * * TieBarNotation,
        SAFEARRAY * * TieBarStartDist,
        SAFEARRAY * * TieBarSpacing,
        SAFEARRAY * * TieBarType );
    long GetNumberDetailedSlabs (
        long * NumberDetailingOutput );
    long GetDetailedSlab_OneDetailingOutputInfo (
        long DetailingOutputIndex,
        BSTR * Guid_ETABS,
        BSTR * Floor,
        BSTR * StoryNameETABS,
        double * LevelZ,
        long * NumberStrips );
    long GetOneDetailedSlab_OneDetailingOutput_StripInfo (
        long DetailingOutputIndex,
        long StripIndex,
        BSTR * Name,
        BSTR * LayerName,
        BSTR * StripType,
        long * NumberRegions );
    long GetOneDetailedSlab_OneDetailingOutput_StripGUID (
        long DetailingOutputIndex,
        long StripIndex,
        BSTR * Guid_ETABS );
    long GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegionInfo (
        long DetailingOutputIndex,
        long StripIndex,
        long DetailingRegionIndex,
        double * X1,
        double * Y1,
        double * X2,
        double * Y2,
        long * NumberTopBars,
        long * NumberBottomBars );
    long GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegion_OneTopRebarInfo (
        long DetailingOutputIndex,
        long StripIndex,
        long DetailingRegionIndex,
        long TopRebarIndex,
        double * X1,
        double * Y1,
        double * X2,
        double * Y2,
        double * WidthRight,
        double * WidthLeft,
        double * Z,
        double * ReqAst,
        double * ProvAst );
    long GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegion_OneBottomRebarInfo (
        long DetailingOutputIndex,
        long StripIndex,
        long DetailingRegionIndex,
        long BottomRebarIndex,
        double * X1,
        double * Y1,
        double * X2,
        double * Y2,
        double * WidthRight,
        double * WidthLeft,
        double * Z,
        double * ReqAst,
        double * ProvAst );
    long GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegion_OneTopRebar_Bar1Info (
        long DetailingOutputIndex,
        long StripIndex,
        long DetailingRegionIndex,
        long TopRebarIndex,
        BSTR * GUID,
        BSTR * PlaceCode,
        double * Dia,
        BSTR * Size,
        long * Number,
        double * StartDist,
        double * EndDist,
        long * StartBend,
        long * EndBend,
        BSTR * Material );
    long GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegion_OneTopRebar_Bar2Info (
        long DetailingOutputIndex,
        long StripIndex,
        long DetailingRegionIndex,
        long TopRebarIndex,
        BSTR * GUID,
        BSTR * PlaceCode,
        double * Dia,
        BSTR * Size,
        long * Number,
        double * StartDist,
        double * EndDist,
        long * StartBend,
        long * EndBend,
        BSTR * Material );
    long GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegion_OneBottomRebar_Bar1Info (
        long DetailingOutputIndex,
        long StripIndex,
        long DetailingRegionIndex,
        long BottomRebarIndex,
        BSTR * GUID,
        BSTR * PlaceCode,
        double * Dia,
        BSTR * Size,
        long * Number,
        double * StartDist,
        double * EndDist,
        long * StartBend,
        long * EndBend,
        BSTR * Material );
    long GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegion_OneBottomRebar_Bar2Info (
        long DetailingOutputIndex,
        long StripIndex,
        long DetailingRegionIndex,
        long BottomRebarIndex,
        BSTR * GUID,
        BSTR * PlaceCode,
        double * Dia,
        BSTR * Size,
        long * Number,
        double * StartDist,
        double * EndDist,
        long * StartBend,
        long * EndBend,
        BSTR * Material );
    long GetNumberDetailedWallStacks (
        long * NumberWallStacks );
    long GetDetailed_OneWallStack (
        long WallStackIndex,
        BSTR * GUID,
        long * TowerID,
        long * NumberPiers,
        long * NUmberSpandrels );
    long GetDetailedWall_OneWallStack_OnePierOutputInfo (
        long WallStackIndex,
        long PierIndex,
        long * StoryID,
        BSTR * ETABSStoryName,
        long * NumberDesignLegs );
    long GetDetailedWall_OneWallStack_OnePier_OneDesignLegOutputInfo (
        long WallStackIndex,
        long PierIndex,
        long DesignLegIndex,
        BSTR * GUID,
        BSTR * PierLabel,
        double * X1,
        double * Y1,
        double * z1,
        double * X2,
        double * Y2,
        double * z2,
        double * ZLevel,
        long * NumberVerticalBars,
        long * NumberHorizontalBars,
        long * TotalAreaObjects,
        SAFEARRAY * * AreaObjectNames );
    long GetDetailedWall_OneWallStack_OnePier_OneDesignLeg_OneVerticalBarInfo (
        long WallStackIndex,
        long PierIndex,
        long DesignLegIndex,
        long VerticalBarIndex,
        BSTR * GUID,
        double * BarSizeFirst_Dia,
        double * BarSizeFirst_Area,
        double * BarSizeFirst_Fy,
        BSTR * BarSizeFirst_Notation,
        double * BarSizeLast_Dia,
        double * BarSizeLast_Area,
        double * BarSizeLast_Fy,
        BSTR * BarSizeLast_Notation,
        double * BarSizeOthers_Dia,
        double * BarSizeOthers_Area,
        double * BarSizeOthers_Fy,
        BSTR * BarSizeOthers_Notation,
        long * Number,
        double * StartX,
        double * StartY,
        double * EndX,
        double * EndY,
        long * StartBarBend,
        long * EndBarBend,
        double * OffsetZ,
        double * BarLength,
        long * LocationCode );
    long GetDetailedWall_OneWallStack_OnePier_OneDesignLeg_OneTieBarInfo (
        long WallStackIndex,
        long PierIndex,
        long DesignLegIndex,
        long TieBarIndex,
        BSTR * GUID,
        double * BarSize_Dia,
        double * BarSize_Area,
        double * BarSize_Fy,
        BSTR * BarSize_Notation,
        double * Spacing,
        double * StartZ,
        double * EndZ,
        long * TieShape,
        long * NumberOfTiePlines );
    long GetDetailedWall_OneWallStack_OnePier_OneDesignLeg_OneTieBar_OneTiePlineInfo (
        long WallStackIndex,
        long PierIndex,
        long DesignLegIndex,
        long TieBarIndex,
        long TiePLineIndex,
        double * Dia,
        long * NumberPoints,
        double * ZoneLength,
        long * LocationCode );
    long GetDetailedWall_OnePier_OneDesignLeg_OneTieBar_OneTiePline_OnePoint (
        long WallStackIndex,
        long PierIndex,
        long DesignLegIndex,
        long TieBarIndex,
        long TiePLineIndex,
        long TPLinePointIndex,
        double * X,
        double * Y,
        double * Z );
    long GetDetailedWall_OneWallStack_OneSpandrelOutputInfo (
        long WallStackIndex,
        long SpandrelIndex,
        BSTR * GUID,
        BSTR * Name,
        double * Height,
        double * Width,
        double * Thickness,
        double * CoverLongBar,
        double * CoverStirrups,
        double * X1,
        double * Y1,
        double * z1,
        double * X2,
        double * Y2,
        double * z2,
        long * NumberLongBars,
        long * NumberStirrups,
        long * TotalAreaObjects,
        SAFEARRAY * * AreaObjectNames );
    long GetDetailedWall_OneWallStack_OneSpandrel_OneLongBarInfo (
        long WallStackIndex,
        long SpandrelIndex,
        long LongBarIndex,
        double * BarSize_Dia,
        double * BarSize_Area,
        double * BarSize_Fy,
        BSTR * BarSize_Notation,
        long * NumberPoints,
        SAFEARRAY * * X,
        SAFEARRAY * * Y,
        SAFEARRAY * * Z,
        long * StartType,
        long * EndType );
    long GetDetailedWall_OneWallStack_OneSpandrel_OneStirrupsInfo (
        long WallStackIndex,
        long SpandrelIndex,
        long StirrupsIndex,
        double * BarSize_Dia,
        double * BarSize_Area,
        double * BarSize_Fy,
        BSTR * BarSize_Notation,
        double * X1,
        double * X2,
        double * Spacing,
        long * NumberLegs );
    long GetDetailedBeamLines_1 (
        long * NumberItems,
        SAFEARRAY * * TowerNames,
        SAFEARRAY * * StoryNames,
        SAFEARRAY * * BeamLineIDs );
    long GetDetailedBeamLineData_2 (
        _bstr_t TowerName,
        _bstr_t StoryName,
        _bstr_t BeamLineID,
        long * NumberOfObjects,
        SAFEARRAY * * ObjectUniqueNames,
        long * NumberSpans,
        SAFEARRAY * * SpanLength,
        SAFEARRAY * * NumLongBars,
        SAFEARRAY * * LongBarGUID,
        SAFEARRAY * * LongBarDiameter,
        SAFEARRAY * * LongBarNotation,
        SAFEARRAY * * LongBarStartDist,
        SAFEARRAY * * LongBarStartBend,
        SAFEARRAY * * LongBarEndBend,
        SAFEARRAY * * LongBarLength,
        SAFEARRAY * * LongBarNumLayers,
        SAFEARRAY * * NumTieBars,
        SAFEARRAY * * NumTieVertLegs,
        SAFEARRAY * * TieBarGUID,
        SAFEARRAY * * TieBarDiameter,
        SAFEARRAY * * TieBarNotation,
        SAFEARRAY * * TieBarStartDist,
        SAFEARRAY * * TieBarSpacing,
        SAFEARRAY * * TieBarType );
    long GetSimilarBeamLines_1 (
        _bstr_t TowerName,
        _bstr_t StoryName,
        _bstr_t BeamLineID,
        long * NumberSimilarBeams,
        SAFEARRAY * * NumberUniqueObjects,
        SAFEARRAY * * ObjectUniqueNames );
};

struct __declspec(uuid("f7a0f69d-dfdd-41f6-af32-76c5b8a826b6"))
cEditArea : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("e1ebb47d-1b93-4b93-a010-26604126d7a8"))
cEditFrame : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeConnectivity (
        _bstr_t Name,
        _bstr_t Point1,
        _bstr_t Point2 );
};

struct __declspec(uuid("09861929-e810-487a-9228-51b378fd3cdf"))
cEditGeneral : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long Move (
        double DX,
        double DY,
        double DZ );
};

struct __declspec(uuid("6a5c2fed-ecf4-4f61-8139-f2b472516310"))
cEditPoint : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("5684e943-33cc-4d03-8afe-8bbefc56d4c9"))
cFile : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long NewBlank ( );
    long OpenFile (
        _bstr_t FileName );
    long Save (
        _bstr_t FileName );
    long GetFilePath (
        BSTR * FilePath );
    long NewSteelDeck (
        long NumberStorys,
        double TypicalStoryHeight,
        double BottomStoryHeight,
        long NumberLinesX,
        long NumberLinesY,
        double SpacingX,
        double SpacingY );
    long NewGridOnly (
        long NumberStorys,
        double TypicalStoryHeight,
        double BottomStoryHeight,
        long NumberLinesX,
        long NumberLinesY,
        double SpacingX,
        double SpacingY );
};

struct __declspec(uuid("336b5859-2cf7-4c67-8a7b-41217e4e2c4a"))
cDatabaseTables : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ApplyEditedTables (
        VARIANT_BOOL FillImportLog,
        long * NumFatalErrors,
        long * NumErrorMsgs,
        long * NumWarnMsgs,
        long * NumInfoMsgs,
        BSTR * ImportLog );
    long CancelTableEditing ( );
    long GetAllFieldsInTable (
        _bstr_t TableKey,
        long * TableVersion,
        long * NumberFields,
        SAFEARRAY * * FieldKey,
        SAFEARRAY * * FieldName,
        SAFEARRAY * * Description,
        SAFEARRAY * * UnitsString,
        SAFEARRAY * * IsImportable );
    long GetAllTables (
        long * NumberTables,
        SAFEARRAY * * TableKey,
        SAFEARRAY * * TableName,
        SAFEARRAY * * ImportType,
        SAFEARRAY * * IsEmpty );
    long GetAvailableTables (
        long * NumberTables,
        SAFEARRAY * * TableKey,
        SAFEARRAY * * TableName,
        SAFEARRAY * * ImportType );
    long GetLoadCasesSelectedForDisplay (
        long * NumberSelectedLoadCases,
        SAFEARRAY * * LoadCaseList );
    long GetLoadCombinationsSelectedForDisplay (
        long * NumberSelectedLoadCombinations,
        SAFEARRAY * * LoadCombinationList );
    long GetLoadPatternsSelectedForDisplay (
        long * NumberSelectedLoadPatterns,
        SAFEARRAY * * LoadPatternList );
    long GetTableForDisplayArray (
        _bstr_t TableKey,
        SAFEARRAY * * FieldKeyList,
        _bstr_t GroupName,
        long * TableVersion,
        SAFEARRAY * * FieldsKeysIncluded,
        long * NumberRecords,
        SAFEARRAY * * TableData );
    long GetTableForDisplayCSVFile (
        _bstr_t TableKey,
        SAFEARRAY * * FieldKeyList,
        _bstr_t GroupName,
        long * TableVersion,
        _bstr_t csvFilePath,
        _bstr_t sepChar );
    long GetTableForDisplayCSVString (
        _bstr_t TableKey,
        SAFEARRAY * * FieldKeyList,
        _bstr_t GroupName,
        long * TableVersion,
        BSTR * csvString,
        _bstr_t sepChar );
    long GetTableForDisplayXMLString (
        _bstr_t TableKey,
        SAFEARRAY * * FieldKeyList,
        _bstr_t GroupName,
        VARIANT_BOOL IncludeSchema,
        long * TableVersion,
        BSTR * XMLTableData );
    long GetTableForEditingArray (
        _bstr_t TableKey,
        _bstr_t GroupName,
        long * TableVersion,
        SAFEARRAY * * FieldsKeysIncluded,
        long * NumberRecords,
        SAFEARRAY * * TableData );
    long GetTableForEditingCSVFile (
        _bstr_t TableKey,
        _bstr_t GroupName,
        long * TableVersion,
        _bstr_t csvFilePath,
        _bstr_t sepChar );
    long GetTableForEditingCSVString (
        _bstr_t TableKey,
        _bstr_t GroupName,
        long * TableVersion,
        BSTR * csvString,
        _bstr_t sepChar );
    long SetLoadCasesSelectedForDisplay (
        SAFEARRAY * * LoadCaseList );
    long SetLoadCombinationsSelectedForDisplay (
        SAFEARRAY * * LoadCombinationList );
    long SetLoadPatternsSelectedForDisplay (
        SAFEARRAY * * LoadPatternList );
    long SetTableForEditingArray (
        _bstr_t TableKey,
        long * TableVersion,
        SAFEARRAY * * FieldsKeysIncluded,
        long NumberRecords,
        SAFEARRAY * * TableData );
    long SetTableForEditingCSVFile (
        _bstr_t TableKey,
        long * TableVersion,
        _bstr_t csvFilePath,
        _bstr_t sepChar );
    long SetTableForEditingCSVString (
        _bstr_t TableKey,
        long * TableVersion,
        BSTR * csvString,
        _bstr_t sepChar );
    long ShowTablesInExcel (
        SAFEARRAY * * TableKeyList,
        long WindowHandle );
    long GetObsoleteTableKeyList (
        long * NumberTableKeys,
        SAFEARRAY * * TableKeyList,
        SAFEARRAY * * NotesList );
    long GetOutputOptionsForDisplay (
        VARIANT_BOOL * IsUserBaseReactionLocation,
        double * UserBaseReactionX,
        double * UserBaseReactionY,
        double * UserBaseReactionZ,
        VARIANT_BOOL * IsAllModes,
        long * StartMode,
        long * EndMode,
        VARIANT_BOOL * IsAllBucklingModes,
        long * StartBucklingMode,
        long * EndBucklingMode,
        long * MultistepStatic,
        long * NonlinearStatic,
        long * ModalHistory,
        long * DirectHistory,
        long * Combo );
    long SetOutputOptionsForDisplay (
        VARIANT_BOOL IsUserBaseReactionLocation,
        double UserBaseReactionX,
        double UserBaseReactionY,
        double UserBaseReactionZ,
        VARIANT_BOOL IsAllModes,
        long StartMode,
        long EndMode,
        VARIANT_BOOL IsAllBucklingModes,
        long StartBucklingMode,
        long EndBucklingMode,
        long MultistepStatic,
        long NonlinearStatic,
        long ModalHistory,
        long DirectHistory,
        long Combo );
};

struct __declspec(uuid("ed2db520-52d4-4b27-8838-a5e9c271f8c3"))
cAreaObj : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long AddByCoord (
        long NumberPoints,
        SAFEARRAY * * X,
        SAFEARRAY * * Y,
        SAFEARRAY * * Z,
        BSTR * Name,
        _bstr_t PropName,
        _bstr_t UserName,
        _bstr_t CSys );
    long AddByPoint (
        long NumberPoints,
        SAFEARRAY * * Point,
        BSTR * Name,
        _bstr_t PropName,
        _bstr_t UserName );
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count ( );
    long Delete (
        _bstr_t Name,
        enum eItemType ItemType );
    long DeleteLoadTemperature (
        _bstr_t Name,
        _bstr_t LoadPat,
        enum eItemType ItemType );
    long DeleteLoadUniform (
        _bstr_t Name,
        _bstr_t LoadPat,
        enum eItemType ItemType );
    long DeleteLoadUniformToFrame (
        _bstr_t Name,
        _bstr_t LoadPat,
        enum eItemType ItemType );
    long DeleteLoadWindPressure (
        _bstr_t Name,
        _bstr_t LoadPat,
        enum eItemType ItemType );
    long DeleteMass (
        _bstr_t Name,
        enum eItemType ItemType );
    long DeleteModifiers (
        _bstr_t Name,
        enum eItemType ItemType );
    long DeleteSpring (
        _bstr_t Name,
        enum eItemType ItemType );
    long GetEdgeConstraint (
        _bstr_t Name,
        VARIANT_BOOL * ConstraintExists );
    long GetElm (
        _bstr_t Name,
        long * NElm,
        SAFEARRAY * * Elm );
    long GetGUID (
        _bstr_t Name,
        BSTR * GUID );
    long GetLoadTemperature (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * AreaName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * MyType,
        SAFEARRAY * * Value,
        SAFEARRAY * * PatternName,
        enum eItemType ItemType );
    long GetLoadUniform (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * AreaName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Dir,
        SAFEARRAY * * Value,
        enum eItemType ItemType );
    long GetLoadUniformToFrame (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * AreaName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Dir,
        SAFEARRAY * * Value,
        SAFEARRAY * * DistType,
        enum eItemType ItemType );
    long GetLoadWindPressure (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * AreaName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * MyType,
        SAFEARRAY * * Cp,
        enum eItemType ItemType );
    long GetLocalAxes (
        _bstr_t Name,
        double * Ang,
        VARIANT_BOOL * Advanced );
    long GetMass (
        _bstr_t Name,
        double * MassOverL2 );
    long GetMaterialOverwrite (
        _bstr_t Name,
        BSTR * PropName );
    long GetModifiers (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetOpening (
        _bstr_t Name,
        VARIANT_BOOL * IsOpening );
    long GetPoints (
        _bstr_t Name,
        long * NumberPoints,
        SAFEARRAY * * Point );
    long GetProperty (
        _bstr_t Name,
        BSTR * PropName );
    long GetSelected (
        _bstr_t Name,
        VARIANT_BOOL * Selected );
    long GetSelectedEdge (
        _bstr_t Name,
        long * NumberEdges,
        SAFEARRAY * * Selected );
    long GetTransformationMatrix (
        _bstr_t Name,
        SAFEARRAY * * Value,
        VARIANT_BOOL IsGlobal );
    long SetEdgeConstraint (
        _bstr_t Name,
        VARIANT_BOOL ConstraintExists,
        enum eItemType ItemType );
    long SetGroupAssign (
        _bstr_t Name,
        _bstr_t GroupName,
        VARIANT_BOOL Remove,
        enum eItemType ItemType );
    long SetGUID (
        _bstr_t Name,
        _bstr_t GUID );
    long SetLoadTemperature (
        _bstr_t Name,
        _bstr_t LoadPat,
        long MyType,
        double Value,
        _bstr_t PatternName,
        VARIANT_BOOL Replace,
        enum eItemType ItemType );
    long SetLoadUniform (
        _bstr_t Name,
        _bstr_t LoadPat,
        double Value,
        long Dir,
        VARIANT_BOOL Replace,
        _bstr_t CSys,
        enum eItemType ItemType );
    long SetLoadUniformToFrame (
        _bstr_t Name,
        _bstr_t LoadPat,
        double Value,
        long Dir,
        long DistType,
        VARIANT_BOOL Replace,
        _bstr_t CSys,
        enum eItemType ItemType );
    long SetLoadWindPressure (
        _bstr_t Name,
        _bstr_t LoadPat,
        long MyType,
        double Cp,
        enum eItemType ItemType );
    long SetLocalAxes (
        _bstr_t Name,
        double Ang,
        enum eItemType ItemType );
    long SetMass (
        _bstr_t Name,
        double MassOverL2,
        VARIANT_BOOL Replace,
        enum eItemType ItemType );
    long SetMaterialOverwrite (
        _bstr_t Name,
        _bstr_t PropName,
        enum eItemType ItemType );
    long SetModifiers (
        _bstr_t Name,
        SAFEARRAY * * Value,
        enum eItemType ItemType );
    long SetOpening (
        _bstr_t Name,
        VARIANT_BOOL IsOpening,
        enum eItemType ItemType );
    long SetProperty (
        _bstr_t Name,
        _bstr_t PropName,
        enum eItemType ItemType );
    long SetSelected (
        _bstr_t Name,
        VARIANT_BOOL Selected,
        enum eItemType ItemType );
    long SetSelectedEdge (
        _bstr_t Name,
        long EdgeNum,
        VARIANT_BOOL Selected );
    long GetGroupAssign (
        _bstr_t Name,
        long * NumberGroups,
        SAFEARRAY * * Groups );
    long GetDesignOrientation (
        _bstr_t Name,
        enum eAreaDesignOrientation * DesignOrientation );
    long GetNameListOnStory (
        _bstr_t StoryName,
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetDiaphragm (
        _bstr_t Name,
        BSTR * DiaphragmName );
    long SetDiaphragm (
        _bstr_t Name,
        _bstr_t DiaphragmName );
    long GetLabelNameList (
        long * NumberNames,
        SAFEARRAY * * MyName,
        SAFEARRAY * * MyLabel,
        SAFEARRAY * * MyStory );
    long GetLabelFromName (
        _bstr_t Name,
        BSTR * Label,
        BSTR * Story );
    long GetNameFromLabel (
        _bstr_t Label,
        _bstr_t Story,
        BSTR * Name );
    long GetRebarDataPier (
        _bstr_t Name,
        long * NumberRebarLayers,
        SAFEARRAY * * LayerID,
        SAFEARRAY * * LayerType,
        SAFEARRAY * * ClearCover,
        SAFEARRAY * * BarSizeName,
        SAFEARRAY * * BarArea,
        SAFEARRAY * * BarSpacing,
        SAFEARRAY * * NumberBars,
        SAFEARRAY * * Confined,
        SAFEARRAY * * EndZoneLength,
        SAFEARRAY * * EndZoneThickness,
        SAFEARRAY * * EndZoneOffset );
    long GetRebarDataSpandrel (
        _bstr_t Name,
        long * NumberRebarLayers,
        SAFEARRAY * * LayerID,
        SAFEARRAY * * LayerType,
        SAFEARRAY * * ClearCover,
        SAFEARRAY * * BarSizeIndex,
        SAFEARRAY * * BarArea,
        SAFEARRAY * * BarSpacing,
        SAFEARRAY * * NumberBars,
        SAFEARRAY * * Confined );
    long GetAllAreas (
        long * NumberNames,
        SAFEARRAY * * MyName,
        SAFEARRAY * * DesignOrientation,
        long * NumberBoundaryPts,
        SAFEARRAY * * PointDelimiter,
        SAFEARRAY * * PointNames,
        SAFEARRAY * * PointX,
        SAFEARRAY * * PointY,
        SAFEARRAY * * PointZ );
    long GetPier (
        _bstr_t Name,
        BSTR * PierName );
    long SetPier (
        _bstr_t Name,
        _bstr_t PierName,
        enum eItemType ItemType );
    long GetSpandrel (
        _bstr_t Name,
        BSTR * SpandrelName );
    long SetSpandrel (
        _bstr_t Name,
        _bstr_t SpandrelName,
        enum eItemType ItemType );
    long GetSpringAssignment (
        _bstr_t Name,
        BSTR * SpringProp );
    long SetSpringAssignment (
        _bstr_t Name,
        _bstr_t SpringProp,
        enum eItemType ItemType );
    long GetOffsets3 (
        _bstr_t Name,
        long * NumberPoints,
        SAFEARRAY * * Offsets );
    long GetCurvedEdges (
        _bstr_t Name,
        long * NumEdges,
        SAFEARRAY * * CurveType,
        SAFEARRAY * * Tension,
        SAFEARRAY * * NumPoints,
        SAFEARRAY * * GX,
        SAFEARRAY * * GY,
        SAFEARRAY * * GZ );
};

struct __declspec(uuid("f87e3a66-8381-4202-897f-46683a8477d4"))
cFrameObj : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long AddByCoord (
        double XI,
        double YI,
        double ZI,
        double XJ,
        double YJ,
        double ZJ,
        BSTR * Name,
        _bstr_t PropName,
        _bstr_t UserName,
        _bstr_t CSys );
    long AddByPoint (
        _bstr_t Point1,
        _bstr_t Point2,
        BSTR * Name,
        _bstr_t PropName,
        _bstr_t UserName );
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count (
        _bstr_t MyType );
    long Delete (
        _bstr_t Name,
        enum eItemType ItemType );
    long DeleteLateralBracing (
        _bstr_t Name,
        long MyType,
        enum eItemType ItemType );
    long DeleteLoadDistributed (
        _bstr_t Name,
        _bstr_t LoadPat,
        enum eItemType ItemType );
    long DeleteLoadPoint (
        _bstr_t Name,
        _bstr_t LoadPat,
        enum eItemType ItemType );
    long DeleteLoadTemperature (
        _bstr_t Name,
        _bstr_t LoadPat,
        enum eItemType ItemType );
    long DeleteMass (
        _bstr_t Name,
        enum eItemType ItemType );
    long DeleteModifiers (
        _bstr_t Name,
        enum eItemType ItemType );
    long DeleteSpring (
        _bstr_t Name,
        enum eItemType ItemType );
    long GetDesignProcedure (
        _bstr_t Name,
        long * MyType );
    long GetElm (
        _bstr_t Name,
        long * NElm,
        SAFEARRAY * * Elm,
        SAFEARRAY * * RDI,
        SAFEARRAY * * RDJ );
    long GetEndLengthOffset (
        _bstr_t Name,
        VARIANT_BOOL * AutoOffset,
        double * Length1,
        double * Length2,
        double * RZ );
    long GetGUID (
        _bstr_t Name,
        BSTR * GUID );
    long GetHingeAssigns (
        _bstr_t Name,
        long * NumberHinges,
        SAFEARRAY * * HingeNum,
        SAFEARRAY * * Prop,
        SAFEARRAY * * MyType,
        SAFEARRAY * * Behavior,
        SAFEARRAY * * Source,
        SAFEARRAY * * RD );
    long GetHingeAssigns_1 (
        _bstr_t Name,
        long * NumberHinges,
        SAFEARRAY * * HingeNum,
        SAFEARRAY * * Prop,
        SAFEARRAY * * MyType,
        SAFEARRAY * * Behavior,
        SAFEARRAY * * Source,
        SAFEARRAY * * LocType,
        SAFEARRAY * * RD,
        SAFEARRAY * * AD );
    long GetInsertionPoint (
        _bstr_t Name,
        long * CardinalPoint,
        VARIANT_BOOL * Mirror2,
        VARIANT_BOOL * StiffTransform,
        SAFEARRAY * * Offset1,
        SAFEARRAY * * Offset2,
        BSTR * CSys );
    long GetInsertionPoint_1 (
        _bstr_t Name,
        long * CardinalPoint,
        VARIANT_BOOL * Mirror2,
        VARIANT_BOOL * Mirror3,
        VARIANT_BOOL * StiffTransform,
        SAFEARRAY * * Offset1,
        SAFEARRAY * * Offset2,
        BSTR * CSys );
    long GetLateralBracing (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * MyType,
        SAFEARRAY * * Loc,
        SAFEARRAY * * RD1,
        SAFEARRAY * * RD2,
        SAFEARRAY * * Dist1,
        SAFEARRAY * * Dist2 );
    long GetLoadDistributed (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * MyType,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Dir,
        SAFEARRAY * * RD1,
        SAFEARRAY * * RD2,
        SAFEARRAY * * Dist1,
        SAFEARRAY * * Dist2,
        SAFEARRAY * * Val1,
        SAFEARRAY * * Val2,
        enum eItemType ItemType );
    long GetLoadPoint (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * MyType,
        SAFEARRAY * * CSys,
        SAFEARRAY * * Dir,
        SAFEARRAY * * RelDist,
        SAFEARRAY * * Dist,
        SAFEARRAY * * Val,
        enum eItemType ItemType );
    long GetLoadTemperature (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * FrameName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * MyType,
        SAFEARRAY * * Val,
        SAFEARRAY * * PatternName,
        enum eItemType ItemType );
    long GetLocalAxes (
        _bstr_t Name,
        double * Ang,
        VARIANT_BOOL * Advanced );
    long GetMass (
        _bstr_t Name,
        double * MassOverL );
    long GetMaterialOverwrite (
        _bstr_t Name,
        BSTR * PropName );
    long GetModifiers (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetOutputStations (
        _bstr_t Name,
        long * MyType,
        double * MaxSegSize,
        long * MinSections,
        VARIANT_BOOL * NoOutPutAndDesignAtElementEnds,
        VARIANT_BOOL * NoOutPutAndDesignAtPointLoads );
    long GetPoints (
        _bstr_t Name,
        BSTR * Point1,
        BSTR * Point2 );
    long GetReleases (
        _bstr_t Name,
        SAFEARRAY * * II,
        SAFEARRAY * * JJ,
        SAFEARRAY * * StartValue,
        SAFEARRAY * * EndValue );
    long GetSection (
        _bstr_t Name,
        BSTR * PropName,
        BSTR * SAuto );
    long GetSectionNonPrismatic (
        _bstr_t Name,
        BSTR * PropName,
        double * SVarTotalLength,
        double * SVarRelStartLoc );
    long GetSelected (
        _bstr_t Name,
        VARIANT_BOOL * Selected );
    long GetTCLimits (
        _bstr_t Name,
        VARIANT_BOOL * LimitCompressionExists,
        double * LimitCompression,
        VARIANT_BOOL * LimitTensionExists,
        double * LimitTension );
    long GetTransformationMatrix (
        _bstr_t Name,
        SAFEARRAY * * Value,
        VARIANT_BOOL IsGlobal );
    long GetTypeOAPI (
        _bstr_t Name,
        BSTR * MyType );
    long SetDesignProcedure (
        _bstr_t Name,
        long MyType,
        enum eItemType ItemType );
    long SetEndLengthOffset (
        _bstr_t Name,
        VARIANT_BOOL AutoOffset,
        double Length1,
        double Length2,
        double RZ,
        enum eItemType ItemType );
    long SetGroupAssign (
        _bstr_t Name,
        _bstr_t GroupName,
        VARIANT_BOOL Remove,
        enum eItemType ItemType );
    long SetGUID (
        _bstr_t Name,
        _bstr_t GUID );
    long SetInsertionPoint (
        _bstr_t Name,
        long CardinalPoint,
        VARIANT_BOOL Mirror2,
        VARIANT_BOOL StiffTransform,
        SAFEARRAY * * Offset1,
        SAFEARRAY * * Offset2,
        _bstr_t CSys,
        enum eItemType ItemType );
    long SetInsertionPoint_1 (
        _bstr_t Name,
        long CardinalPoint,
        VARIANT_BOOL Mirror2,
        VARIANT_BOOL Mirror3,
        VARIANT_BOOL StiffTransform,
        SAFEARRAY * * Offset1,
        SAFEARRAY * * Offset2,
        _bstr_t CSys,
        enum eItemType ItemType );
    long SetLateralBracing (
        _bstr_t Name,
        long MyType,
        long Loc,
        double MyDist1,
        double MyDist2,
        VARIANT_BOOL RelDist,
        enum eItemType ItemType );
    long SetLoadDistributed (
        _bstr_t Name,
        _bstr_t LoadPat,
        long MyType,
        long Dir,
        double Dist1,
        double Dist2,
        double Val1,
        double Val2,
        _bstr_t CSys,
        VARIANT_BOOL RelDist,
        VARIANT_BOOL Replace,
        enum eItemType ItemType );
    long SetLoadPoint (
        _bstr_t Name,
        _bstr_t LoadPat,
        long MyType,
        long Dir,
        double Dist,
        double Val,
        _bstr_t CSys,
        VARIANT_BOOL RelDist,
        VARIANT_BOOL Replace,
        enum eItemType ItemType );
    long SetLoadTemperature (
        _bstr_t Name,
        _bstr_t LoadPat,
        long MyType,
        double Val,
        _bstr_t PatternName,
        VARIANT_BOOL Replace,
        enum eItemType ItemType );
    long SetLocalAxes (
        _bstr_t Name,
        double Ang,
        enum eItemType ItemType );
    long SetMass (
        _bstr_t Name,
        double MassOverL,
        VARIANT_BOOL Replace,
        enum eItemType ItemType );
    long SetMaterialOverwrite (
        _bstr_t Name,
        _bstr_t PropName,
        enum eItemType ItemType );
    long SetModifiers (
        _bstr_t Name,
        SAFEARRAY * * Value,
        enum eItemType ItemType );
    long SetOutputStations (
        _bstr_t Name,
        long MyType,
        double MaxSegSize,
        long MinSections,
        VARIANT_BOOL NoOutPutAndDesignAtElementEnds,
        VARIANT_BOOL NoOutPutAndDesignAtPointLoads,
        enum eItemType ItemType );
    long SetReleases (
        _bstr_t Name,
        SAFEARRAY * * II,
        SAFEARRAY * * JJ,
        SAFEARRAY * * StartValue,
        SAFEARRAY * * EndValue,
        enum eItemType ItemType );
    long SetSection (
        _bstr_t Name,
        _bstr_t PropName,
        enum eItemType ItemType,
        double SVarRelStartLoc,
        double SVarTotalLength );
    long SetSelected (
        _bstr_t Name,
        VARIANT_BOOL Selected,
        enum eItemType ItemType );
    long SetTCLimits (
        _bstr_t Name,
        VARIANT_BOOL LimitCompressionExists,
        double LimitCompression,
        VARIANT_BOOL LimitTensionExists,
        double LimitTension,
        enum eItemType ItemType );
    long GetGroupAssign (
        _bstr_t Name,
        long * NumberGroups,
        SAFEARRAY * * Groups );
    long GetColumnSpliceOverwrite (
        _bstr_t Name,
        long * SpliceOption,
        double * Height );
    long GetNameListOnStory (
        _bstr_t StoryName,
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetLabelNameList (
        long * NumberNames,
        SAFEARRAY * * MyName,
        SAFEARRAY * * MyLabel,
        SAFEARRAY * * MyStory );
    long GetLabelFromName (
        _bstr_t Name,
        BSTR * Label,
        BSTR * Story );
    long GetNameFromLabel (
        _bstr_t Label,
        _bstr_t Story,
        BSTR * Name );
    long GetSupports (
        _bstr_t Name,
        BSTR * SupportName1,
        enum eObjType * SupportType1,
        BSTR * SupportName2,
        enum eObjType * SupportType2 );
    long GetAllFrames (
        long * NumberNames,
        SAFEARRAY * * MyName,
        SAFEARRAY * * PropName,
        SAFEARRAY * * StoryName,
        SAFEARRAY * * PointName1,
        SAFEARRAY * * PointName2,
        SAFEARRAY * * Point1X,
        SAFEARRAY * * Point1Y,
        SAFEARRAY * * Point1Z,
        SAFEARRAY * * Point2X,
        SAFEARRAY * * Point2Y,
        SAFEARRAY * * Point2Z,
        SAFEARRAY * * Angle,
        SAFEARRAY * * Offset1X,
        SAFEARRAY * * Offset2X,
        SAFEARRAY * * Offset1Y,
        SAFEARRAY * * Offset2Y,
        SAFEARRAY * * Offset1Z,
        SAFEARRAY * * Offset2Z,
        SAFEARRAY * * CardinalPoint,
        _bstr_t CSys );
    long GetDesignOrientation (
        _bstr_t Name,
        enum eFrameDesignOrientation * DesignOrientation );
    long GetPier (
        _bstr_t Name,
        BSTR * PierName );
    long SetPier (
        _bstr_t Name,
        _bstr_t PierName,
        enum eItemType ItemType );
    long GetSpandrel (
        _bstr_t Name,
        BSTR * SpandrelName );
    long SetColumnSpliceOverwrite (
        _bstr_t Name,
        long SpliceOption,
        double Height,
        enum eItemType ItemType );
    long SetSpandrel (
        _bstr_t Name,
        _bstr_t SpandrelName,
        enum eItemType ItemType );
    long GetSpringAssignment (
        _bstr_t Name,
        BSTR * SpringProp );
    long SetSpringAssignment (
        _bstr_t Name,
        _bstr_t SpringProp,
        enum eItemType ItemType );
    long GetCurved_2 (
        _bstr_t Name,
        long * CurveType,
        double * Tension,
        long * NumPnts,
        SAFEARRAY * * GX,
        SAFEARRAY * * GY,
        SAFEARRAY * * GZ );
};

struct __declspec(uuid("a28b3e57-3c5e-4e9e-8c57-e3bdf928a8d1"))
cLinkObj : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long AddByCoord (
        double XI,
        double YI,
        double ZI,
        double XJ,
        double YJ,
        double ZJ,
        BSTR * Name,
        VARIANT_BOOL IsSingleJoint,
        _bstr_t PropName,
        _bstr_t UserName,
        _bstr_t CSys );
    long AddByPoint (
        _bstr_t Point1,
        _bstr_t Point2,
        BSTR * Name,
        VARIANT_BOOL IsSingleJoint,
        _bstr_t PropName,
        _bstr_t UserName );
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count ( );
    long Delete (
        _bstr_t Name,
        enum eItemType ItemType );
    long GetElm (
        _bstr_t Name,
        BSTR * Elm );
    long GetGUID (
        _bstr_t Name,
        BSTR * GUID );
    long GetLocalAxes (
        _bstr_t Name,
        double * Ang,
        VARIANT_BOOL * Advanced );
    long GetLocalAxesAdvanced (
        _bstr_t Name,
        VARIANT_BOOL * Active,
        long * AxVectOpt,
        BSTR * AxCSys,
        SAFEARRAY * * AxDir,
        SAFEARRAY * * AxPt,
        SAFEARRAY * * AxVect,
        long * Plane2,
        long * PlVectOpt,
        BSTR * PlCSys,
        SAFEARRAY * * PlDir,
        SAFEARRAY * * PlPt,
        SAFEARRAY * * PlVect );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetPoints (
        _bstr_t Name,
        BSTR * Point1,
        BSTR * Point2 );
    long GetProperty (
        _bstr_t Name,
        BSTR * PropName );
    long GetSelected (
        _bstr_t Name,
        VARIANT_BOOL * Selected );
    long GetTransformationMatrix (
        _bstr_t Name,
        SAFEARRAY * * Value,
        VARIANT_BOOL IsGlobal );
    long SetGroupAssign (
        _bstr_t Name,
        _bstr_t GroupName,
        VARIANT_BOOL Remove,
        enum eItemType ItemType );
    long SetGUID (
        _bstr_t Name,
        _bstr_t GUID );
    long SetLocalAxes (
        _bstr_t Name,
        double Ang,
        enum eItemType ItemType );
    long SetLocalAxesAdvanced (
        _bstr_t Name,
        VARIANT_BOOL Active,
        long AxVectOpt,
        _bstr_t AxCSys,
        SAFEARRAY * * AxDir,
        SAFEARRAY * * AxPt,
        SAFEARRAY * * AxVect,
        long Plane2,
        long PlVectOpt,
        _bstr_t PlCSys,
        SAFEARRAY * * PlDir,
        SAFEARRAY * * PlPt,
        SAFEARRAY * * PlVect,
        enum eItemType ItemType );
    long SetProperty (
        _bstr_t Name,
        _bstr_t PropName,
        enum eItemType ItemType );
    long SetSelected (
        _bstr_t Name,
        VARIANT_BOOL Selected,
        enum eItemType ItemType );
    long GetGroupAssign (
        _bstr_t Name,
        long * NumberGroups,
        SAFEARRAY * * Groups );
    long GetNameListOnStory (
        _bstr_t StoryName,
        long * NumberNames,
        SAFEARRAY * * MyName );
};

struct __declspec(uuid("6674645d-e89a-459f-a446-8db204577c60"))
cPointObj : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long AddCartesian (
        double X,
        double Y,
        double Z,
        BSTR * Name,
        _bstr_t UserName,
        _bstr_t CSys,
        VARIANT_BOOL MergeOff,
        long MergeNumber );
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count ( );
    long CountLoadDispl (
        long * Count,
        _bstr_t Name,
        _bstr_t LoadPat );
    long CountLoadForce (
        long * Count,
        _bstr_t Name,
        _bstr_t LoadPat );
    long CountPanelZone ( );
    long CountRestraint ( );
    long CountSpring ( );
    long DeleteLoadDispl (
        _bstr_t Name,
        _bstr_t LoadPat,
        enum eItemType ItemType );
    long DeleteLoadForce (
        _bstr_t Name,
        _bstr_t LoadPat,
        enum eItemType ItemType );
    long DeleteMass (
        _bstr_t Name,
        enum eItemType ItemType );
    long DeletePanelZone (
        _bstr_t Name,
        enum eItemType ItemType );
    long DeleteRestraint (
        _bstr_t Name,
        enum eItemType ItemType );
    long DeleteSpecialPoint (
        _bstr_t Name,
        enum eItemType ItemType );
    long DeleteSpring (
        _bstr_t Name,
        enum eItemType ItemType );
    long GetCommonTo (
        _bstr_t Name,
        long * CommonTo );
    long GetConnectivity (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * ObjectType,
        SAFEARRAY * * ObjectName,
        SAFEARRAY * * PointNumber );
    long GetCoordCartesian (
        _bstr_t Name,
        double * X,
        double * Y,
        double * Z,
        _bstr_t CSys );
    long GetCoordCylindrical (
        _bstr_t Name,
        double * R,
        double * Theta,
        double * Z,
        _bstr_t CSys );
    long GetCoordSpherical (
        _bstr_t Name,
        double * R,
        double * A,
        double * B,
        _bstr_t CSys );
    long GetElm (
        _bstr_t Name,
        BSTR * Elm );
    long GetGUID (
        _bstr_t Name,
        BSTR * GUID );
    long GetLoadDispl (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * PointName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * LcStep,
        SAFEARRAY * * CSys,
        SAFEARRAY * * U1,
        SAFEARRAY * * U2,
        SAFEARRAY * * U3,
        SAFEARRAY * * R1,
        SAFEARRAY * * R2,
        SAFEARRAY * * R3,
        enum eItemType ItemType );
    long GetLoadForce (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * PointName,
        SAFEARRAY * * LoadPat,
        SAFEARRAY * * LcStep,
        SAFEARRAY * * CSys,
        SAFEARRAY * * F1,
        SAFEARRAY * * F2,
        SAFEARRAY * * F3,
        SAFEARRAY * * M1,
        SAFEARRAY * * M2,
        SAFEARRAY * * M3,
        enum eItemType ItemType );
    long GetLocalAxes (
        _bstr_t Name,
        double * A,
        double * B,
        double * C,
        VARIANT_BOOL * Advanced );
    long GetMass (
        _bstr_t Name,
        SAFEARRAY * * M );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetPanelZone (
        _bstr_t Name,
        long * PropType,
        double * Thickness,
        double * K1,
        double * K2,
        BSTR * LinkProp,
        long * Connectivity,
        long * LocalAxisFrom,
        double * LocalAxisAngle );
    long GetRestraint (
        _bstr_t Name,
        SAFEARRAY * * Value );
    long GetSelected (
        _bstr_t Name,
        VARIANT_BOOL * Selected );
    long GetSpecialPoint (
        _bstr_t Name,
        VARIANT_BOOL * SpecialPoint );
    long GetSpring (
        _bstr_t Name,
        SAFEARRAY * * K );
    long GetSpringCoupled (
        _bstr_t Name,
        SAFEARRAY * * K );
    long GetTransformationMatrix (
        _bstr_t Name,
        SAFEARRAY * * Value,
        VARIANT_BOOL IsGlobal );
    long IsSpringCoupled (
        _bstr_t Name,
        VARIANT_BOOL * IsCoupled );
    long SetGroupAssign (
        _bstr_t Name,
        _bstr_t GroupName,
        VARIANT_BOOL Remove,
        enum eItemType ItemType );
    long SetGUID (
        _bstr_t Name,
        _bstr_t GUID );
    long SetLoadDispl (
        _bstr_t Name,
        _bstr_t LoadPat,
        SAFEARRAY * * Value,
        VARIANT_BOOL Replace,
        _bstr_t CSys,
        enum eItemType ItemType );
    long SetLoadForce (
        _bstr_t Name,
        _bstr_t LoadPat,
        SAFEARRAY * * Value,
        VARIANT_BOOL Replace,
        _bstr_t CSys,
        enum eItemType ItemType );
    long SetMass (
        _bstr_t Name,
        SAFEARRAY * * M,
        enum eItemType ItemType,
        VARIANT_BOOL IsLocalCSys,
        VARIANT_BOOL Replace );
    long SetMassByVolume (
        _bstr_t Name,
        _bstr_t MatProp,
        SAFEARRAY * * M,
        enum eItemType ItemType,
        VARIANT_BOOL IsLocalCSys,
        VARIANT_BOOL Replace );
    long SetMassByWeight (
        _bstr_t Name,
        SAFEARRAY * * M,
        enum eItemType ItemType,
        VARIANT_BOOL IsLocalCSys,
        VARIANT_BOOL Replace );
    long SetPanelZone (
        _bstr_t Name,
        long PropType,
        double Thickness,
        double K1,
        double K2,
        _bstr_t LinkProp,
        long Connectivity,
        long LocalAxisFrom,
        double LocalAxisAngle,
        enum eItemType ItemType );
    long SetRestraint (
        _bstr_t Name,
        SAFEARRAY * * Value,
        enum eItemType ItemType );
    long SetSelected (
        _bstr_t Name,
        VARIANT_BOOL Selected,
        enum eItemType ItemType );
    long SetSpecialPoint (
        _bstr_t Name,
        VARIANT_BOOL SpecialPoint,
        enum eItemType ItemType );
    long SetSpring (
        _bstr_t Name,
        SAFEARRAY * * K,
        enum eItemType ItemType,
        VARIANT_BOOL IsLocalCSys,
        VARIANT_BOOL Replace );
    long SetSpringCoupled (
        _bstr_t Name,
        SAFEARRAY * * K,
        enum eItemType ItemType,
        VARIANT_BOOL IsLocalCSys,
        VARIANT_BOOL Replace );
    long GetGroupAssign (
        _bstr_t Name,
        long * NumberGroups,
        SAFEARRAY * * Groups );
    long GetNameListOnStory (
        _bstr_t StoryName,
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetDiaphragm (
        _bstr_t Name,
        enum eDiaphragmOption * DiaphragmOption,
        BSTR * DiaphragmName );
    long SetDiaphragm (
        _bstr_t Name,
        enum eDiaphragmOption DiaphragmOption,
        _bstr_t DiaphragmName );
    long GetLabelNameList (
        long * NumberNames,
        SAFEARRAY * * MyName,
        SAFEARRAY * * MyLabel,
        SAFEARRAY * * MyStory );
    long GetLabelFromName (
        _bstr_t Name,
        BSTR * Label,
        BSTR * Story );
    long GetNameFromLabel (
        _bstr_t Label,
        _bstr_t Story,
        BSTR * Name );
    long GetAllPoints (
        long * NumberNames,
        SAFEARRAY * * MyName,
        SAFEARRAY * * X,
        SAFEARRAY * * Y,
        SAFEARRAY * * Z,
        _bstr_t CSys );
    long GetSpringAssignment (
        _bstr_t Name,
        BSTR * SpringProp );
    long SetSpringAssignment (
        _bstr_t Name,
        _bstr_t SpringProp,
        enum eItemType ItemType );
};

struct __declspec(uuid("294bbf0b-8ac2-4593-80d5-bbf8c9e0e165"))
cTendonObj : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long ChangeName (
        _bstr_t Name,
        _bstr_t NewName );
    long Count ( );
    long GetNameList (
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetProperty (
        _bstr_t Name,
        BSTR * PropName );
    long GetSelected (
        _bstr_t Name,
        VARIANT_BOOL * Selected );
    long GetTendonGeometry (
        _bstr_t Name,
        long * NumberPoints,
        SAFEARRAY * * X,
        SAFEARRAY * * Y,
        SAFEARRAY * * Z,
        _bstr_t CSys );
    long SetSelected (
        _bstr_t Name,
        VARIANT_BOOL Selected,
        enum eItemType ItemType );
    long GetGroupAssign (
        _bstr_t Name,
        long * NumberGroups,
        SAFEARRAY * * Groups );
    long SetGroupAssign (
        _bstr_t Name,
        _bstr_t GroupName,
        VARIANT_BOOL Remove,
        enum eItemType ItemType );
    long GetNameListOnStory (
        _bstr_t StoryName,
        long * NumberNames,
        SAFEARRAY * * MyName );
    long GetLoadForceStress_1 (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * TendonName,
        SAFEARRAY * * LoadPatFinal,
        SAFEARRAY * * LoadPatTransfer,
        SAFEARRAY * * JackFrom,
        SAFEARRAY * * LoadType,
        SAFEARRAY * * LoadValue,
        SAFEARRAY * * LossSpecification,
        enum eItemType ItemType );
    long GetLossesDetailed (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * TendonName,
        SAFEARRAY * * CurvatureCoeff,
        SAFEARRAY * * WobbleCoeff,
        SAFEARRAY * * LossAnchorage,
        SAFEARRAY * * LossShortening,
        SAFEARRAY * * LossCreep,
        SAFEARRAY * * LossShrinkage,
        SAFEARRAY * * LossSteelRelax,
        enum eItemType ItemType );
    long GetLossesFixed (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * TendonName,
        SAFEARRAY * * StressingFixed,
        SAFEARRAY * * LongTermFixed,
        enum eItemType ItemType );
    long GetLossesPercent (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * TendonName,
        SAFEARRAY * * StressingPercent,
        SAFEARRAY * * LongTermPercent,
        enum eItemType ItemType );
    long GetNumberStrands (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * TendonName,
        SAFEARRAY * * NumberStrands,
        enum eItemType ItemType );
    long GetDatumOffset (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * TendonName,
        SAFEARRAY * * DatumOffset,
        enum eItemType ItemType );
    long GetDrawingPoint (
        _bstr_t Name,
        long * NumberItems,
        SAFEARRAY * * TendonName,
        SAFEARRAY * * DrawingPointID,
        SAFEARRAY * * GX,
        SAFEARRAY * * GY,
        SAFEARRAY * * GZ,
        enum eItemType ItemType );
};

struct __declspec(uuid("f1600512-d795-4a2f-98c3-2d1615542153"))
cOptions : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long GetDefaultFunctionFolder (
        BSTR * Path );
    long SetDefaultFunctionFolder (
        _bstr_t Path );
};

struct __declspec(uuid("73239643-902c-4ac2-addb-6cc919997eb0"))
cSelect : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long All (
        VARIANT_BOOL Deselect );
    long ClearSelection ( );
    long GetSelected (
        long * NumberItems,
        SAFEARRAY * * ObjectType,
        SAFEARRAY * * ObjectName );
    long Group (
        _bstr_t Name,
        VARIANT_BOOL Deselect );
    long InvertSelection ( );
    long PreviousSelection ( );
};

struct __declspec(uuid("abcc81d2-5f58-422d-92df-6a8c587b9606"))
cNamedDisplay : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

struct __declspec(uuid("bf177229-2909-4894-937d-6491208e027c"))
cView : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    long RefreshView (
        long Window,
        VARIANT_BOOL Zoom );
    long RefreshWindow (
        long Window );
};

enum __declspec(uuid("95e62240-c6ce-444c-a180-4e25e943ccef"))
eBridgeObjectBentPart : int
{
    eBridgeObjectBentPart_CapBeam = 1,
    eBridgeObjectBentPart_Column = 2,
    eBridgeObjectBentPart_Bearing = 3,
    eBridgeObjectBentPart_Wall = 4
};

enum __declspec(uuid("b8086957-e00d-46bf-b2fe-9c5696e85758"))
eBridgeObjectFoundationPart : int
{
    eBridgeObjectFoundationPart_Footing = 1,
    eBridgeObjectFoundationPart_PileCap = 2,
    eBridgeObjectFoundationPart_Pile = 3,
    eBridgeObjectFoundationPart_FoundationSpring = 4
};

enum __declspec(uuid("95ef4882-9c10-4dd5-86d4-863b8917f841"))
eBridgeResponseDesignRating : int
{
    eBridgeResponseDesignRating_S11_Longitudinal_Top_Left = 0,
    eBridgeResponseDesignRating_S11_Longitudinal_Top_Center = 1,
    eBridgeResponseDesignRating_S11_Longitudinal_Top_Right = 2,
    eBridgeResponseDesignRating_S11_Longitudinal_Top_Envelope = 3,
    eBridgeResponseDesignRating_S11_Longitudinal_Slab_Top_Left = 4,
    eBridgeResponseDesignRating_S11_Longitudinal_Slab_Top_Center = 5,
    eBridgeResponseDesignRating_S11_Longitudinal_Slab_Top_Beam_Center = 6,
    eBridgeResponseDesignRating_S11_Longitudinal_Slab_Top_Right = 7,
    eBridgeResponseDesignRating_S11_Longitudinal_Slab_Top_Envelope = 8,
    eBridgeResponseDesignRating_S11_Longitudinal_Beam_Top_Left = 9,
    eBridgeResponseDesignRating_S11_Longitudinal_Beam_Top_Center = 10,
    eBridgeResponseDesignRating_S11_Longitudinal_Beam_Top_Right = 11,
    eBridgeResponseDesignRating_S11_Longitudinal_Beam_Top_Envelope = 12,
    eBridgeResponseDesignRating_S11_Longitudinal_Bot_Left = 13,
    eBridgeResponseDesignRating_S11_Longitudinal_Bot_Left_Corner = 14,
    eBridgeResponseDesignRating_S11_Longitudinal_Bot_Center = 15,
    eBridgeResponseDesignRating_S11_Longitudinal_Bot_Right = 16,
    eBridgeResponseDesignRating_S11_Longitudinal_Bot_Right_Corner = 17,
    eBridgeResponseDesignRating_S11_Longitudinal_Bot_Envelope = 18,
    eBridgeResponseDesignRating_S11_Longitudinal_Girder_Bot_Left = 19,
    eBridgeResponseDesignRating_S11_Longitudinal_Girder_Bot_Right = 20,
    eBridgeResponseDesignRating_S11_Longitudinal_Girder_Bot_Envelope = 21,
    eBridgeResponseDesignRating_S11_Longitudinal_Slab_Bot_Left = 22,
    eBridgeResponseDesignRating_S11_Longitudinal_Slab_Bot_Beam_Left = 23,
    eBridgeResponseDesignRating_S11_Longitudinal_Slab_Bot_Beam_Center = 24,
    eBridgeResponseDesignRating_S11_Longitudinal_Slab_Bot_Beam_Right = 25,
    eBridgeResponseDesignRating_S11_Longitudinal_Slab_Bot_Center = 26,
    eBridgeResponseDesignRating_S11_Longitudinal_Slab_Bot_Right = 27,
    eBridgeResponseDesignRating_S11_Longitudinal_Slab_Bot_Envelope = 28,
    eBridgeResponseDesignRating_S11_Longitudinal_Beam_Bot_Left = 29,
    eBridgeResponseDesignRating_S11_Longitudinal_Beam_Bot_Center = 39,
    eBridgeResponseDesignRating_S11_Longitudinal_Beam_Bot_Right = 31,
    eBridgeResponseDesignRating_S11_Longitudinal_Beam_Bot_Envelope = 32,
    eBridgeResponseDesignRating_Design_Shear_Demand_Concrete_Shear_Capacity_Ratio = 33,
    eBridgeResponseDesignRating_Design_Shear_Controlling_Shear_DC_Ratio = 34,
    eBridgeResponseDesignRating_Design_Shear_Controlling_Torsion_DC_Ratio = 35,
    eBridgeResponseDesignRating_Design_Shear_Required_Extra_Shear_Rebar_Area_PerL = 36,
    eBridgeResponseDesignRating_Design_Shear_Required_Extra_Longit_Rebar_Area = 37,
    eBridgeResponseDesignRating_Design_Shear_Required_Extra_Longit_Rebar_Area_For_Torsion = 38,
    eBridgeResponseDesignRating_Design_Shear_Required_Extra_Longit_Rebar_Area_Bot_Slab = 39,
    eBridgeResponseDesignRating_Design_Shear_Required_Extra_Longit_Rebar_Area_Top_Slab = 40,
    eBridgeResponseDesignRating_Design_Shear_Required_Extra_Longit_Rebar_Area_Slab = 41,
    eBridgeResponseDesignRating_Design_Shear_Required_Extra_Longit_Rebar_Area_Beam = 42,
    eBridgeResponseDesignRating_Design_Shear_Controlling_DC_Ratio = 43,
    eBridgeResponseDesignRating_Design_Shear_Rebar_Area_PerL = 44,
    eBridgeResponseDesignRating_Design_Shear_Longit_Rebar_Area = 45,
    eBridgeResponseDesignRating_Design_Shear_Longit_Rebar_Area_Bot_Slab = 46,
    eBridgeResponseDesignRating_Design_Shear_Longit_Rebar_Area_Top_Slab = 47,
    eBridgeResponseDesignRating_Design_Shear_Longit_Rebar_Area_Bot_Flange = 48,
    eBridgeResponseDesignRating_Design_Shear_Longit_Rebar_Area_Slab = 49,
    eBridgeResponseDesignRating_Design_Shear_Longit_Rebar_Area_Beam = 50,
    eBridgeResponseDesignRating_Design_Shear_Longit_Torsional_Rebar_Area_PerL = 51,
    eBridgeResponseDesignRating_Design_Shear_Torsion_Rebar_Area_PerL = 52,
    eBridgeResponseDesignRating_Design_Shear_Torsion_Plus_Shear_Rebar_Area_PerL = 53,
    eBridgeResponseDesignRating_Design_Crack_Top_Crack_Width = 54,
    eBridgeResponseDesignRating_Design_Crack_Bot_Crack_Width = 55,
    eBridgeResponseDesignRating_Design_Crack_Top_Bot_Crack_Widths = 56,
    eBridgeResponseDesignRating_Design_Principal_Stress_Envelope = 57,
    eBridgeResponseDesignRating_Design_Principal_Stress_Web_Top = 58,
    eBridgeResponseDesignRating_Design_Principal_Stress_Web_Bot = 59,
    eBridgeResponseDesignRating_Design_Principal_Stress_Beam_Web_Top = 60,
    eBridgeResponseDesignRating_Design_Principal_Stress_Beam_Web_Bot = 61,
    eBridgeResponseDesignRating_Design_Principal_Stress_Neutral_Axis = 62,
    eBridgeResponseDesignRating_Design_Tendon_Stress_Controlling_DC_Ratio = 63,
    eBridgeResponseDesignRating_Design_Flexure_Moment_About_Horizontal_Axis_M3 = 64,
    eBridgeResponseDesignRating_Design_Strength_DC_Ratio_Positive_Moment = 65,
    eBridgeResponseDesignRating_Design_Strength_DC_Ratio_Negative_Moment = 66,
    eBridgeResponseDesignRating_Design_Strength_DC_Ratio_Shear = 67,
    eBridgeResponseDesignRating_Design_Strength_DC_Ratio_Net_Section_Fracture_Pos = 68,
    eBridgeResponseDesignRating_Design_Strength_DC_Ratio_Net_Section_Fracture_Neg = 69,
    eBridgeResponseDesignRating_Design_Strength_DC_Ratio_FlexureShearInteract_Pos = 70,
    eBridgeResponseDesignRating_Design_Strength_DC_Ratio_FlexureShearInteract_Neg = 71,
    eBridgeResponseDesignRating_Design_Strength_Total_Nominal_Shear_Force_6_10_10_4_2 = 72,
    eBridgeResponseDesignRating_Design_Fatigue_Top_Flange_Tensile_Stress_Range_Without_FLB = 73,
    eBridgeResponseDesignRating_Design_Fatigue_Bot_Flange_Tensile_Stress_Range_Without_FLB = 74,
    eBridgeResponseDesignRating_Design_Fatigue_Bot_Flange_Lateral_Bending_Stress_Range = 75,
    eBridgeResponseDesignRating_Design_Fatigue_DC_Ratio_Web_Shear = 76,
    eBridgeResponseDesignRating_Rating_Shear = 77,
    eBridgeResponseDesignRating_Rating_Shear_Factored_Shear_Resistance = 78,
    eBridgeResponseDesignRating_Rating_Shear_Factored_Shear_Resistance_UVr = 79,
    eBridgeResponseDesignRating_Rating_Shear_Live_load_Capacity_Factor_F = 80,
    eBridgeResponseDesignRating_Rating_Flexure = 81,
    eBridgeResponseDesignRating_Rating_Flexure_Factored_Moment_Resistance = 82,
    eBridgeResponseDesignRating_Rating_Flexure_Factored_Moment_Resistance_UMr = 83,
    eBridgeResponseDesignRating_Rating_Flexure_Live_load_Capacity_Factor_F = 84,
    eBridgeResponseDesignRating_Rating_Strength_Shear_Rating = 85,
    eBridgeResponseDesignRating_Rating_Strength_Flexure_Rating = 86,
    eBridgeResponseDesignRating_Rating_Strength_Live_load_Capacity_Factor_F_Moment_M3 = 87,
    eBridgeResponseDesignRating_Rating_Strength_Live_load_Capacity_Factor_F_Shear_V2 = 88,
    eBridgeResponseDesignRating_Rating_Service_Flexure_Rating = 89,
    eBridgeResponseDesignRating_Rating_MinRebar_Min_Of_Abs_1_2Mcr_And_Abs_1_33Mu_For_Pos = 90,
    eBridgeResponseDesignRating_Rating_MinRebar_Min_Of_Abs_1_2Mcr_And_Abs_1_33Mu_For_Neg = 91,
    eBridgeResponseDesignRating_Rating_MinRebar_Flexure_Rating = 92,
    eBridgeResponseDesignRating_Rating_Service = 93
};

enum __declspec(uuid("ffec92a4-ae3e-4876-b3cb-ae16a2738421"))
eBridgeResponseDisplDOF : int
{
    eBridgeResponseDisplDOF_Vertical_Displacement = 0,
    eBridgeResponseDisplDOF_Transverse_Displacement = 1,
    eBridgeResponseDisplDOF_Longitudinal_Displacement = 2,
    eBridgeResponseDisplDOF_Longitudinal_Rotation = 3,
    eBridgeResponseDisplDOF_Avg_Longitudinal_Rotation = 4
};

enum __declspec(uuid("0ac63a5a-8527-4316-bdd5-f1a6db2757ab"))
eBridgeResponseDisplLoc : int
{
    eBridgeResponseDisplLoc_Web_Top = 0,
    eBridgeResponseDisplLoc_Web_Bottom = 1,
    eBridgeResponseDisplLoc_Web = 2,
    eBridgeResponseDisplLoc_Left_Web_Top = 3,
    eBridgeResponseDisplLoc_Left_Web_Bottom = 4,
    eBridgeResponseDisplLoc_Left_Web = 5,
    eBridgeResponseDisplLoc_Right_Web_Top = 6,
    eBridgeResponseDisplLoc_Right_Web_Bottom = 7,
    eBridgeResponseDisplLoc_Right_Web = 8,
    eBridgeResponseDisplLoc_Slab_Center = 9
};

enum __declspec(uuid("46d4d679-98b9-48d1-a332-4a1c5b7f0c3e"))
eBridgeResponseForce : int
{
    eBridgeResponseForce_Axial_Force_P = 1,
    eBridgeResponseForce_Shear_Vertical_V2 = 2,
    eBridgeResponseForce_Shear_Horizontal_V3 = 3,
    eBridgeResponseForce_Torsion_T = 4,
    eBridgeResponseForce_Moment_About_Vertical_Axis_M2 = 5,
    eBridgeResponseForce_Moment_About_Horizontal_Axis_M3 = 6
};

enum __declspec(uuid("be3cac19-fde0-4b46-a92d-e2c8ad2655f9"))
eBridgeResponsePart : int
{
    eBridgeResponsePart_Entire_Bridge_Section = 1,
    eBridgeResponsePart_Girder = 2,
    eBridgeResponsePart_Beam = 3,
    eBridgeResponsePart_Web = 4,
    eBridgeResponsePart_Slab = 5,
    eBridgeResponsePart_All_Girders = 6,
    eBridgeResponsePart_All_Beams = 7,
    eBridgeResponsePart_All_Webs = 8,
    eBridgeResponsePart_All_Slabs = 9,
    eBridgeResponsePart_Entire_Section_Plus_All_Girders = 10
};

enum __declspec(uuid("3d71592f-dc83-4249-8f00-87a96c9a7719"))
eBridgeResponseStress : int
{
    eBridgeResponseStress_S11_Longitudinal_Top_Left = 0,
    eBridgeResponseStress_S11_Longitudinal_Top_Center = 1,
    eBridgeResponseStress_S11_Longitudinal_Top_Right = 2,
    eBridgeResponseStress_S11_Longitudinal_Top_Beam_Center = 3,
    eBridgeResponseStress_S11_Longitudinal_Top_Envelope = 4,
    eBridgeResponseStress_S11_Longitudinal_Top_ULeft_Left = 5,
    eBridgeResponseStress_S11_Longitudinal_Top_ULeft_Center = 6,
    eBridgeResponseStress_S11_Longitudinal_Top_ULeft_Right = 7,
    eBridgeResponseStress_S11_Longitudinal_Top_ULeft_Envelope = 8,
    eBridgeResponseStress_S11_Longitudinal_Top_URight_Left = 9,
    eBridgeResponseStress_S11_Longitudinal_Top_URight_Center = 10,
    eBridgeResponseStress_S11_Longitudinal_Top_URight_Right = 11,
    eBridgeResponseStress_S11_Longitudinal_Top_URight_Envelope = 12,
    eBridgeResponseStress_S11_Longitudinal_Bot_Left = 13,
    eBridgeResponseStress_S11_Longitudinal_Bot_Center = 14,
    eBridgeResponseStress_S11_Longitudinal_Bot_Right = 15,
    eBridgeResponseStress_S11_Longitudinal_Bot_Beam_Left = 16,
    eBridgeResponseStress_S11_Longitudinal_Bot_Beam_Right = 17,
    eBridgeResponseStress_S11_Longitudinal_Bot_Envelope = 18,
    eBridgeResponseStress_S11_Longitudinal_Top_Bot_Left = 19,
    eBridgeResponseStress_S11_Longitudinal_Top_Bot_Center = 20,
    eBridgeResponseStress_S11_Longitudinal_Top_Bot_Right = 21,
    eBridgeResponseStress_S11_Lateral_Bending_Top = 22,
    eBridgeResponseStress_S11_Lateral_Bending_Top_ULeft = 23,
    eBridgeResponseStress_S11_Lateral_Bending_Top_URight = 24,
    eBridgeResponseStress_S11_Lateral_Bending_Bot = 25
};

enum __declspec(uuid("5f1ebcbd-c669-4d02-a27e-1e17e1ba1ec5"))
eBridgeSegmentConstructionMethod : int
{
    eBridgeSegmentConstructionMethod_Precast = 0,
    eBridgeSegmentConstructionMethod_CastInPlace = 1
};

enum __declspec(uuid("27c2b92b-3189-4bd6-9b4e-c874ae1e74e1"))
eBridgeSegmentType : int
{
    eBridgeSegmentType_Rigid = 0,
    eBridgeSegmentType_PierTable = 1,
    eBridgeSegmentType_Segment = 2,
    eBridgeSegmentType_Closure = 3
};

enum __declspec(uuid("e6b3c8d0-4e3f-443e-ad49-057e442785ac"))
eFrameDesignOrientation : int
{
    eFrameDesignOrientation_Column = 1,
    eFrameDesignOrientation_Beam = 2,
    eFrameDesignOrientation_Brace = 3,
    eFrameDesignOrientation_Null = 4,
    eFrameDesignOrientation_Other = 5
};

enum __declspec(uuid("6f242df5-98a4-48d4-a011-848d636c964d"))
eHingeDistributionType : int
{
    eHingeDistributionType_NonlinearBeamColumn = 1,
    eHingeDistributionType_DistributedPlasticity = 2,
    eHingeDistributionType_EqualSpacing = 3,
    eHingeDistributionType_ContinuousSupport = 4,
    eHingeDistributionType_UserDefined= 5
};

enum __declspec(uuid("982a58bb-f551-4fd6-8bea-ab989c33c964"))
eHingeLengthOverwriteType : int
{
    eHingeLengthOverwriteType_None = 1,
    eHingeLengthOverwriteType_Absolute = 2,
    eHingeLengthOverwriteType_Relative = 3
};

enum __declspec(uuid("733d4167-f270-4a3d-8ba4-56e0681b317d"))
eHingeLocationType : int
{
    eHingeLocationType_RelativeDistance = 1,
    eHingeLocationType_OffsetFromIEnd = 2,
    eHingeLocationType_OffsetFromJEnd = 3
};

enum __declspec(uuid("edcfeb20-3d51-41fb-9ac6-0bd8ce033c06"))
eMatCoupledType : int
{
    eMatCoupledType_None = 1,
    eMatCoupledType_VonMisesPlasticity = 2,
    eMatCoupledType_ModifiedDarwinPecknoldConcrete = 3
};

enum __declspec(uuid("9acb685b-2171-4cf1-b1dd-3aea6371380b"))
eNamedSetType : int
{
    eNamedSetType_All = 0,
    eNamedSetType_UpdateBridgeObject = 1,
    eNamedSetType_RunAnalysis = 2,
    eNamedSetType_RunBridgeDesignSuperstructure = 3,
    eNamedSetType_RunBridgeDesignSubstructure = 4,
    eNamedSetType_RunBridgeDesignSeismic = 5,
    eNamedSetType_RunBridgeRatingSuperstructure = 6,
    eNamedSetType_RunMemberRating = 7,
    eNamedSetType_JointTHResponseSpectra = 8,
    eNamedSetType_NamedDisplay = 9,
    eNamedSetType_PlotFunctionTraces = 10,
    eNamedSetType_PushoverCurve = 11,
    eNamedSetType_VirtualWork = 12,
    eNamedSetType_TableSet = 13,
    eNamedSetType_TableGroupSuperset = 14,
    eNamedSetType_BridgeSeismicReport = 15,
    eNamedSetType_BridgeSuperstructureResponse = 16,
    eNamedSetType_BridgeCalculationReport = 17,
    eNamedSetType_BridgeCalculationReportSub = 18
};

enum __declspec(uuid("e9367f27-959b-44c7-9b1f-217ae4f96b3c"))
eReturnCode : int
{
    eReturnCode_NotApplicable = -100,
    eReturnCode_NotImplemented = -99,
    eReturnCode_NoError = 0,
    eReturnCode_UnspecifiedError = 1,
    eReturnCode_Deprecated = -98,
    eReturnCode_TableIsObsolete = -97,
    eReturnCode_TableDoesNotExist = -96
};

enum __declspec(uuid("6ec08595-c49c-4873-8d6b-a618bea229b7"))
eSuperObjectClass : int
{
    eSuperObjectClass_None = 0,
    eSuperObjectClass_SuperObject = 1,
    eSuperObjectClass_Foundation = 2,
    eSuperObjectClass_BridgeFoundation = 3
};

enum __declspec(uuid("2e4e97b1-8401-4a1f-8165-98b74fe5935a"))
eWallSpandrelRebarLayerType : int
{
    eWallSpandrelRebarLayerType_Horizontal_Top_Total = 1,
    eWallSpandrelRebarLayerType_Horizontal_Bottom_Total = 2,
    eWallSpandrelRebarLayerType_Horizontal_Distributed_Eachface = 3,
    eWallSpandrelRebarLayerType_Vertical_Ties_Distributed = 4,
    eWallSpandrelRebarLayerType_Diagonal_Each = 5
};

enum __declspec(uuid("684908a4-d7d6-464a-b0e7-de65ac487bb9"))
eWallPierRebarLayerType : int
{
    eWallPierRebarLayerType_Vertical_Distributed_MiddleZone_Eachface = 1,
    eWallPierRebarLayerType_Horizontal_Distributed_MiddleZone_Eachface = 2,
    eWallPierRebarLayerType_Vertical_Distributed_EndZoneI_Total = 3,
    eWallPierRebarLayerType_Vertical_Distributed_EndZoneJ_Total = 4,
    eWallPierRebarLayerType_Confinement_EndZoneI = 5,
    eWallPierRebarLayerType_Confinement_EndZoneJ = 6,
    eWallPierRebarLayerType_Diagonal_Each = 7
};

enum __declspec(uuid("3d208aad-6982-428a-879c-3bf6cc2c2578"))
eObjType : int
{
    eObjType_Point = 1,
    eObjType_Frame = 2,
    eObjType_Area = 3,
    eObjType_Solid = 6
};

enum __declspec(uuid("82c0155e-cbc3-4ac7-b8d3-0da2f3fec195"))
eBridgeCodeAASHTO : int
{
    eBridgeCodeAASHTO_AASHTO_STD_2002 = 0,
    eBridgeCodeAASHTO_AASHTO_LRFD_2007 = 1,
    eBridgeCodeAASHTO_AASHTO_LRFD_2012 = 2,
    eBridgeCodeAASHTO_AASHTO_LRFD_2014 = 3,
    eBridgeCodeAASHTO_AASHTO_LRFD_2017 = 4,
    eBridgeCodeAASHTO_AASHTO_LRFD_2020 = 5
};

enum __declspec(uuid("f5fe1744-7937-4b1a-93ed-213096f7e0cd"))
eBridgeCodeInterims : int
{
    eBridgeCodeInterims_NoInterims = 0,
    eBridgeCodeInterims_Interim_2011 = 1,
    eBridgeCodeInterims_Interim_2012 = 2,
    eBridgeCodeInterims_Interim_2013 = 3,
    eBridgeCodeInterims_Interim_2014 = 4,
    eBridgeCodeInterims_Interim_2015 = 5
};

enum __declspec(uuid("065aef2a-ff12-4bd1-aeb8-9ca47e9d30e6"))
eBridgeObjectType : int
{
    eBridgeObjectType_General = 0,
    eBridgeObjectType_Segmental = 1
};

enum __declspec(uuid("ede0f8fe-0493-4087-8e49-fd68ebe76618"))
eBridgeObjectUserPointType : int
{
    eBridgeObjectUserPointType_General = 0,
    eBridgeObjectUserPointType_SegmentalTendon = 1
};

enum __declspec(uuid("a8b8c7eb-8332-42e6-af52-fbf0d5361386"))
eBridgeTendonCategory : int
{
    eBridgeTendonCategory_General = 0,
    eBridgeTendonCategory_Cantilever = 1,
    eBridgeTendonCategory_BottomSpan = 2,
    eBridgeTendonCategory_TopSpan = 3,
    eBridgeTendonCategory_Continuity = 4
};

enum __declspec(uuid("57942458-3104-4341-8253-c9ede395c922"))
eDesignActionType : int
{
    eDesignActionType_NonComposite = 1,
    eDesignActionType_ShortTermComposite = 2,
    eDesignActionType_LongTermComposite = 3,
    eDesignActionType_Staged = 4,
    eDesignActionType_Other = 5
};

enum __declspec(uuid("4232eca2-8065-4dec-9f73-fa8594aec206"))
eDiaphragmOption : int
{
    eDiaphragmOption_Disconnect = 1,
    eDiaphragmOption_FromShellObject = 2,
    eDiaphragmOption_DefinedDiaphragm = 3
};

enum __declspec(uuid("9a817de6-6c89-4b2c-bd14-3793a3e761fc"))
eShellType : int
{
    eShellType_ShellThin = 1,
    eShellType_ShellThick = 2,
    eShellType_Membrane = 3,
    eShellType_PlateThin_DO_NOT_USE = 4,
    eShellType_PlateThick_DO_NOT_USE = 5,
    eShellType_Layered = 6
};

enum __declspec(uuid("90fed7a0-df4b-4ac5-bf8f-126e56b5175c"))
eWallPropType : int
{
    eWallPropType_Specified = 1,
    eWallPropType_AutoSelectList = 2
};

enum __declspec(uuid("3bfe9204-f624-46b8-beed-c3b626ca517f"))
eDeckType : int
{
    eDeckType_Filled = 1,
    eDeckType_Unfilled = 2,
    eDeckType_SolidSlab = 3
};

enum __declspec(uuid("9b1e8c88-892f-4b3d-ac62-d33d78e76b13"))
eSlabType : int
{
    eSlabType_Slab = 0,
    eSlabType_Drop = 1,
    eSlabType_Stiff_DO_NOT_USE = 2,
    eSlabType_Ribbed = 3,
    eSlabType_Waffle = 4,
    eSlabType_Mat = 5,
    eSlabType_Footing = 6
};

enum __declspec(uuid("535825ce-761d-4404-ac0f-ecaf2b9de4e8"))
eTemperature : int
{
    eTemperature_NotApplicable = 0,
    eTemperature_F = 1,
    eTemperature_C = 2
};

enum __declspec(uuid("7f88febc-46dd-4d38-957a-c1a24ed91743"))
eForce : int
{
    eForce_NotApplicable = 0,
    eForce_lb = 1,
    eForce_kip = 2,
    eForce_N = 3,
    eForce_kN = 4,
    eForce_kgf = 5,
    eForce_tonf = 6
};

enum __declspec(uuid("8820cc7a-859c-47f4-aa86-b4b98eab555c"))
eLength : int
{
    eLength_NotApplicable = 0,
    eLength_inch = 1,
    eLength_ft = 2,
    eLength_micron = 3,
    eLength_mm = 4,
    eLength_cm = 5,
    eLength_m = 6
};

enum __declspec(uuid("5d0cd606-662a-4422-9f98-c27355b6450d"))
eAreaDesignOrientation : int
{
    eAreaDesignOrientation_Wall = 1,
    eAreaDesignOrientation_Floor = 2,
    eAreaDesignOrientation_Ramp_DO_NOT_USE = 3,
    eAreaDesignOrientation_Null = 4,
    eAreaDesignOrientation_Other = 5
};

enum __declspec(uuid("0b71c96b-99d5-4c9c-a2cc-21813395c83e"))
eMatTypeAluminum : int
{
    eMatTypeAluminum_SubType_6061_T6 = 1,
    eMatTypeAluminum_SubType_6063_T6 = 2,
    eMatTypeAluminum_SubType_5052_H34 = 3
};

enum __declspec(uuid("5153d97b-5241-4527-8852-ba6ec1c47dea"))
eMatTypeColdFormed : int
{
    eMatTypeColdFormed_ASTM_A653SQGr33 = 1,
    eMatTypeColdFormed_ASTM_A653SQGr50 = 2
};

enum __declspec(uuid("63da7e65-cad3-48a2-b073-55979bb6191f"))
e2DFrameType : int
{
    e2DFrameType_PortalFrame = 0,
    e2DFrameType_ConcentricBraced = 1,
    e2DFrameType_EccentricBraced = 2
};

enum __declspec(uuid("4fd0b19d-1da3-4dd0-82c6-aedf1e22bf14"))
e3DFrameType : int
{
    e3DFrameType_OpenFrame = 0,
    e3DFrameType_PerimeterFrame = 1,
    e3DFrameType_BeamSlab = 2,
    e3DFrameType_FlatPlate = 3
};

enum __declspec(uuid("788a4a81-bc3c-40f0-9ab3-6cb927f74eb9"))
eConstraintAxis : int
{
    eConstraintAxis_X = 1,
    eConstraintAxis_Y = 2,
    eConstraintAxis_Z = 3,
    eConstraintAxis_AutoAxis = 4
};

enum __declspec(uuid("319c3262-f4b0-46ae-afeb-3fe26d30ba63"))
eConstraintType : int
{
    eConstraintType_Body = 1,
    eConstraintType_Diaphragm = 2,
    eConstraintType_Plate = 3,
    eConstraintType_Rod = 4,
    eConstraintType_Beam = 5,
    eConstraintType_Equal = 6,
    eConstraintType_Local = 7,
    eConstraintType_Weld = 8,
    eConstraintType_Line = 13
};

enum __declspec(uuid("c3f5a7e0-410b-48e8-8e05-eb4020a2dc6d"))
eCNameType : int
{
    eCNameType_LoadCase = 0,
    eCNameType_LoadCombo = 1
};

enum __declspec(uuid("c2d90f38-1ceb-433c-95bd-641442e78a98"))
eFramePropType : int
{
    eFramePropType_I = 1,
    eFramePropType_Channel = 2,
    eFramePropType_T = 3,
    eFramePropType_Angle = 4,
    eFramePropType_DblAngle = 5,
    eFramePropType_Box = 6,
    eFramePropType_Pipe = 7,
    eFramePropType_Rectangular = 8,
    eFramePropType_Circle = 9,
    eFramePropType_General = 10,
    eFramePropType_DbChannel = 11,
    eFramePropType_Auto = 12,
    eFramePropType_SD = 13,
    eFramePropType_Variable = 14,
    eFramePropType_Joist = 15,
    eFramePropType_Bridge = 16,
    eFramePropType_Cold_C = 17,
    eFramePropType_Cold_2C = 18,
    eFramePropType_Cold_Z = 19,
    eFramePropType_Cold_L = 20,
    eFramePropType_Cold_2L = 21,
    eFramePropType_Cold_Hat = 22,
    eFramePropType_BuiltupICoverplate = 23,
    eFramePropType_PCCGirderI = 24,
    eFramePropType_PCCGirderU = 25,
    eFramePropType_BuiltupIHybrid = 26,
    eFramePropType_BuiltupUHybrid = 27,
    eFramePropType_Concrete_L = 28,
    eFramePropType_FilledTube = 29,
    eFramePropType_FilledPipe = 30,
    eFramePropType_EncasedRectangle = 31,
    eFramePropType_EncasedCircle = 32,
    eFramePropType_BucklingRestrainedBrace = 33,
    eFramePropType_CoreBrace_BRB = 34,
    eFramePropType_ConcreteTee = 35,
    eFramePropType_ConcreteBox = 36,
    eFramePropType_ConcretePipe = 37,
    eFramePropType_ConcreteCross = 38,
    eFramePropType_SteelPlate = 39,
    eFramePropType_SteelRod = 40,
    eFramePropType_PCCGirderSuperT = 41,
    eFramePropType_Cold_Box = 42,
    eFramePropType_Cold_I = 43,
    eFramePropType_Cold_Pipe = 44,
    eFramePropType_Cold_T = 45,
    eFramePropType_Trapezoidal = 46
};

enum __declspec(uuid("3f694528-8e64-4275-8b0e-0179db4e66ef"))
eItemType : int
{
    eItemType_Objects = 0,
    eItemType_Group = 1,
    eItemType_SelectedObjects = 2
};

enum __declspec(uuid("078a4500-d39e-4a40-b231-94f39dbccb05"))
eItemTypeElm : int
{
    eItemTypeElm_ObjectElm = 0,
    eItemTypeElm_Element = 1,
    eItemTypeElm_GroupElm = 2,
    eItemTypeElm_SelectionElm = 3
};

enum __declspec(uuid("2e164138-b286-4e96-b378-d89f97d16fad"))
eLinkPropType : int
{
    eLinkPropType_Linear = 1,
    eLinkPropType_Damper = 2,
    eLinkPropType_Gap = 3,
    eLinkPropType_Hook = 4,
    eLinkPropType_PlasticWen = 5,
    eLinkPropType_Isolator1 = 6,
    eLinkPropType_Isolator2 = 7,
    eLinkPropType_MultilinearElastic = 8,
    eLinkPropType_MultilinearPlastic = 9,
    eLinkPropType_Isolator3 = 10
};

enum __declspec(uuid("67e8edbd-d5c2-4a17-95e9-35b9e2d34b09"))
eLoadCaseType : int
{
    eLoadCaseType_LinearStatic = 1,
    eLoadCaseType_NonlinearStatic = 2,
    eLoadCaseType_Modal = 3,
    eLoadCaseType_ResponseSpectrum = 4,
    eLoadCaseType_LinearHistory = 5,
    eLoadCaseType_NonlinearHistory = 6,
    eLoadCaseType_LinearDynamic = 7,
    eLoadCaseType_NonlinearDynamic = 8,
    eLoadCaseType_MovingLoad = 9,
    eLoadCaseType_Buckling = 10,
    eLoadCaseType_SteadyState = 11,
    eLoadCaseType_PowerSpectralDensity = 12,
    eLoadCaseType_LinearStaticMultiStep = 13,
    eLoadCaseType_HyperStatic = 14
};

enum __declspec(uuid("a607ef55-373e-4fb3-a2f7-34d5cd9334e1"))
eLoadPatternType : int
{
    eLoadPatternType_Dead = 1,
    eLoadPatternType_SuperDead = 2,
    eLoadPatternType_Live = 3,
    eLoadPatternType_ReduceLive = 4,
    eLoadPatternType_Quake = 5,
    eLoadPatternType_Wind = 6,
    eLoadPatternType_Snow = 7,
    eLoadPatternType_Other = 8,
    eLoadPatternType_Move = 9,
    eLoadPatternType_Temperature = 10,
    eLoadPatternType_Rooflive = 11,
    eLoadPatternType_Notional = 12,
    eLoadPatternType_PatternLive = 13,
    eLoadPatternType_Wave = 14,
    eLoadPatternType_Braking = 15,
    eLoadPatternType_Centrifugal = 16,
    eLoadPatternType_Friction = 17,
    eLoadPatternType_Ice = 18,
    eLoadPatternType_WindOnLiveLoad = 19,
    eLoadPatternType_HorizontalEarthPressure = 20,
    eLoadPatternType_VerticalEarthPressure = 21,
    eLoadPatternType_EarthSurcharge = 22,
    eLoadPatternType_DownDrag = 23,
    eLoadPatternType_VehicleCollision = 24,
    eLoadPatternType_VesselCollision = 25,
    eLoadPatternType_TemperatureGradient = 26,
    eLoadPatternType_Settlement = 27,
    eLoadPatternType_Shrinkage = 28,
    eLoadPatternType_Creep = 29,
    eLoadPatternType_WaterloadPressure = 30,
    eLoadPatternType_LiveLoadSurcharge = 31,
    eLoadPatternType_LockedInForces = 32,
    eLoadPatternType_PedestrianLL = 33,
    eLoadPatternType_Prestress = 34,
    eLoadPatternType_Hyperstatic = 35,
    eLoadPatternType_Bouyancy = 36,
    eLoadPatternType_StreamFlow = 37,
    eLoadPatternType_Impact = 38,
    eLoadPatternType_Construction = 39,
    eLoadPatternType_DeadWearing = 40,
    eLoadPatternType_DeadWater = 41,
    eLoadPatternType_DeadManufacture = 42,
    eLoadPatternType_EarthHydrostatic = 43,
    eLoadPatternType_PassiveEarthPressure = 44,
    eLoadPatternType_ActiveEarthPressure = 45,
    eLoadPatternType_PedestrianLLReduced = 46,
    eLoadPatternType_SnowHighAltitude = 47,
    eLoadPatternType_EuroLm1Char = 48,
    eLoadPatternType_EuroLm1Freq = 49,
    eLoadPatternType_EuroLm2 = 50,
    eLoadPatternType_EuroLm3 = 51,
    eLoadPatternType_EuroLm4 = 52,
    eLoadPatternType_SeaState = 53,
    eLoadPatternType_Permit = 54,
    eLoadPatternType_MoveFatigue = 55,
    eLoadPatternType_MoveFatiguePermit = 56,
    eLoadPatternType_MoveDeflection = 57,
    eLoadPatternType_MoveTrain = 58,
    eLoadPatternType_PrestressTransfer = 59,
    eLoadPatternType_PatternAuto = 60,
    eLoadPatternType_QuakeDrift = 61,
    eLoadPatternType_QuakeVerticalOnly = 62
};

enum __declspec(uuid("c3f7cc57-decb-4699-b2d2-59d5ec3b3cf2"))
eMatType : int
{
    eMatType_Steel = 1,
    eMatType_Concrete = 2,
    eMatType_NoDesign = 3,
    eMatType_Aluminum = 4,
    eMatType_ColdFormed = 5,
    eMatType_Rebar = 6,
    eMatType_Tendon = 7,
    eMatType_Masonry = 8
};

enum __declspec(uuid("d151c34b-e977-41c6-a0d8-0611eaba96df"))
eMatTypeConcrete : int
{
    eMatTypeConcrete_FC3000_NormalWeight = 1,
    eMatTypeConcrete_FC4000_NormalWeight = 2,
    eMatTypeConcrete_FC5000_NormalWeight = 3,
    eMatTypeConcrete_FC6000_NormalWeight = 4,
    eMatTypeConcrete_FC3000_LightWeight = 5,
    eMatTypeConcrete_FC4000_LightWeight = 6,
    eMatTypeConcrete_FC5000_LightWeight = 7,
    eMatTypeConcrete_FC6000_LightWeight = 8,
    eMatTypeConcrete_Chinese_C20_NormalWeight = 9,
    eMatTypeConcrete_Chinese_C30_NormalWeight = 10,
    eMatTypeConcrete_Chinese_C40_NormalWeight = 11,
    eMatTypeConcrete_Indian_M15_NormalWeight = 12,
    eMatTypeConcrete_Indian_M20_NormalWeight = 13,
    eMatTypeConcrete_Indian_M25_NormalWeight = 14,
    eMatTypeConcrete_Indian_M30_NormalWeight = 15,
    eMatTypeConcrete_Indian_M35_NormalWeight = 16,
    eMatTypeConcrete_Indian_M40_NormalWeight = 17,
    eMatTypeConcrete_Indian_M45_NormalWeight = 18,
    eMatTypeConcrete_Indian_M50_NormalWeight = 19,
    eMatTypeConcrete_Indian_M55_NormalWeight = 20,
    eMatTypeConcrete_Indian_M60_NormalWeight = 21,
    eMatTypeConcrete_EN_C12_NormalWeight = 22,
    eMatTypeConcrete_EN_C16_NormalWeight = 23,
    eMatTypeConcrete_EN_C20_NormalWeight = 24,
    eMatTypeConcrete_EN_C25_NormalWeight = 25,
    eMatTypeConcrete_EN_C30_NormalWeight = 26,
    eMatTypeConcrete_EN_C35_NormalWeight = 27,
    eMatTypeConcrete_EN_C40_NormalWeight = 28,
    eMatTypeConcrete_EN_C45_NormalWeight = 29,
    eMatTypeConcrete_EN_C50_NormalWeight = 30,
    eMatTypeConcrete_EN_C55_NormalWeight = 31,
    eMatTypeConcrete_EN_C60_NormalWeight = 32,
    eMatTypeConcrete_EN_C70_NormalWeight = 33,
    eMatTypeConcrete_EN_C80_NormalWeight = 34,
    eMatTypeConcrete_EN_C90_NormalWeight = 35
};

enum __declspec(uuid("cc634055-5b4c-4eb5-96e4-d69a839e8ef5"))
eMatTypeRebar : int
{
    eMatTypeRebar_ASTM_A615Gr40 = 1,
    eMatTypeRebar_ASTM_A615Gr60 = 2,
    eMatTypeRebar_ASTM_A615Gr75 = 3,
    eMatTypeRebar_ASTM_A706 = 4,
    eMatTypeRebar_Chinese_HPB235 = 5,
    eMatTypeRebar_Chinese_HRB335 = 6,
    eMatTypeRebar_Chinese_HRB400 = 7,
    eMatTypeRebar_Indian_Mild250 = 8,
    eMatTypeRebar_Indian_HYSD415 = 9,
    eMatTypeRebar_Indian_HYSD500 = 10,
    eMatTypeRebar_Indian_HYSD550 = 11
};

enum __declspec(uuid("5af8bb50-17c0-468e-af36-1f7c80d19d41"))
eMatTypeSteel : int
{
    eMatTypeSteel_ASTM_A36 = 1,
    eMatTypeSteel_ASTM_A53GrB = 2,
    eMatTypeSteel_ASTM_A500GrB_Fy42 = 3,
    eMatTypeSteel_ASTM_A500GrB_Fy46 = 4,
    eMatTypeSteel_ASTM_A572Gr50 = 5,
    eMatTypeSteel_ASTM_A913Gr50 = 6,
    eMatTypeSteel_ASTM_A992_Fy50 = 7,
    eMatTypeSteel_Chinese_Q235 = 8,
    eMatTypeSteel_Chinese_Q345 = 9,
    eMatTypeSteel_Indian_Fe250 = 10,
    eMatTypeSteel_Indian_Fe345 = 11,
    eMatTypeSteel_EN100252_S235 = 12,
    eMatTypeSteel_EN100252_S275 = 13,
    eMatTypeSteel_EN100252_S355 = 14,
    eMatTypeSteel_EN100252_S450 = 15,
    eMatTypeSteel_Chinese_Q355 = 16
};

enum __declspec(uuid("2a3ca92e-43b3-4591-9cf4-f8b9b13e49eb"))
eMatTypeTendon : int
{
    eMatTypeTendon_ASTM_A416Gr250 = 1,
    eMatTypeTendon_ASTM_A416Gr270 = 2
};

enum __declspec(uuid("0fd32e79-8918-40eb-b7fc-b71ecf5e5c0e"))
eTemplateType : int
{
    eTemplateType_Grid = 0,
    eTemplateType_Clear = 1,
    eTemplateType_Beam = 2,
    eTemplateType_SlopedTruss = 3,
    eTemplateType_VerticalTruss = 4,
    eTemplateType_SpaceTruss = 5,
    eTemplateType_PortalFrame = 6,
    eTemplateType_BracedFrame = 7,
    eTemplateType_EccentricFrame = 8,
    eTemplateType_PerimeterFrame = 9,
    eTemplateType_SpaceFrame = 10,
    eTemplateType_Bridge = 11,
    eTemplateType_Barrel = 12,
    eTemplateType_Cylinder = 13,
    eTemplateType_Dome = 14,
    eTemplateType_ShearWall = 15,
    eTemplateType_Floor = 16,
    eTemplateType_Advanced = 17,
    eTemplateType_UndergoundConcrete = 18,
    eTemplateType_Truss2D = 19,
    eTemplateType_Truss3D = 20,
    eTemplateType_Frame2D = 21,
    eTemplateType_Frame3D = 22,
    eTemplateType_BridgeWizard = 23,
    eTemplateType_PipesAndPlates = 24,
    eTemplateType_Shells = 25,
    eTemplateType_SolidModels = 26,
    eTemplateType_StorageStructures = 27,
    eTemplateType_Staircases = 28,
    eTemplateType_CableBridges = 29
};

enum __declspec(uuid("8c83a153-f3ff-4b96-b732-c2ecd40cc177"))
eUnits : int
{
    eUnits_lb_in_F = 1,
    eUnits_lb_ft_F = 2,
    eUnits_kip_in_F = 3,
    eUnits_kip_ft_F = 4,
    eUnits_kN_mm_C = 5,
    eUnits_kN_m_C = 6,
    eUnits_kgf_mm_C = 7,
    eUnits_kgf_m_C = 8,
    eUnits_N_mm_C = 9,
    eUnits_N_m_C = 10,
    eUnits_Ton_mm_C = 11,
    eUnits_Ton_m_C = 12,
    eUnits_kN_cm_C = 13,
    eUnits_kgf_cm_C = 14,
    eUnits_N_cm_C = 15,
    eUnits_Ton_cm_C = 16
};

struct __declspec(uuid("11a3bbc3-f4b4-3c43-9c93-90ca3006f80b"))
StartService;
    // [ default ] interface _StartService
    // interface _Object

struct __declspec(uuid("c9d2950b-7584-3924-b9c5-c454edb95613"))
_StartService : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
};

//
// Function implementation mapping
//

#pragma start_map_region("C:\Users\paolo\source\repos\ETABSAPI\ETABSAPI\x64\Debug\ETABSv1.tli")
__declspec(implementation_key(1)) long cAreaElm::Count ( );
__declspec(implementation_key(2)) long cAreaElm::GetLoadTemperature ( _bstr_t Name, long * NumberItems, SAFEARRAY * * AreaName, SAFEARRAY * * LoadPat, SAFEARRAY * * MyType, SAFEARRAY * * Value, SAFEARRAY * * PatternName, enum eItemTypeElm ItemTypeElm );
__declspec(implementation_key(3)) long cAreaElm::GetLoadUniform ( _bstr_t Name, long * NumberItems, SAFEARRAY * * AreaName, SAFEARRAY * * LoadPat, SAFEARRAY * * CSys, SAFEARRAY * * Dir, SAFEARRAY * * Value, enum eItemTypeElm ItemTypeElm );
__declspec(implementation_key(4)) long cAreaElm::GetLocalAxes ( _bstr_t Name, double * Ang );
__declspec(implementation_key(5)) long cAreaElm::GetMaterialOverwrite ( _bstr_t Name, BSTR * PropName );
__declspec(implementation_key(6)) long cAreaElm::GetModifiers ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(7)) long cAreaElm::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(8)) long cAreaElm::GetObj ( _bstr_t Name, BSTR * Obj );
__declspec(implementation_key(9)) long cAreaElm::GetOffsets ( _bstr_t Name, long * OffsetType, BSTR * OffsetPattern, double * OffsetPatternSF, SAFEARRAY * * Offset );
__declspec(implementation_key(10)) long cAreaElm::GetPoints ( _bstr_t Name, long * NumberPoints, SAFEARRAY * * Point );
__declspec(implementation_key(11)) long cAreaElm::GetProperty ( _bstr_t Name, BSTR * PropName );
__declspec(implementation_key(12)) long cAreaElm::GetThickness ( _bstr_t Name, long * ThicknessType, BSTR * ThicknessPattern, double * ThicknessPatternSF, SAFEARRAY * * Thickness );
__declspec(implementation_key(13)) long cAreaElm::GetTransformationMatrix ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(14)) long cLineElm::Count ( );
__declspec(implementation_key(15)) long cLineElm::GetEndLengthOffset ( _bstr_t Name, double * Length1, double * Length2, double * RZ );
__declspec(implementation_key(16)) long cLineElm::GetInsertionPoint ( _bstr_t Name, SAFEARRAY * * Offset1, SAFEARRAY * * Offset2 );
__declspec(implementation_key(17)) long cLineElm::GetLoadDistributed ( _bstr_t Name, long * NumberItems, SAFEARRAY * * LineName, SAFEARRAY * * LoadPat, SAFEARRAY * * MyType, SAFEARRAY * * CSys, SAFEARRAY * * Dir, SAFEARRAY * * RD1, SAFEARRAY * * RD2, SAFEARRAY * * Dist1, SAFEARRAY * * Dist2, SAFEARRAY * * Val1, SAFEARRAY * * Val2, enum eItemTypeElm ItemTypeElm );
__declspec(implementation_key(18)) long cLineElm::GetLoadPoint ( _bstr_t Name, long * NumberItems, SAFEARRAY * * LineName, SAFEARRAY * * LoadPat, SAFEARRAY * * MyType, SAFEARRAY * * CSys, SAFEARRAY * * Dir, SAFEARRAY * * RelDist, SAFEARRAY * * Dist, SAFEARRAY * * Val, enum eItemTypeElm ItemTypeElm );
__declspec(implementation_key(19)) long cLineElm::GetLoadTemperature ( _bstr_t Name, long * NumberItems, SAFEARRAY * * LineName, SAFEARRAY * * LoadPat, SAFEARRAY * * MyType, SAFEARRAY * * Val, SAFEARRAY * * PatternName, enum eItemTypeElm ItemTypeElm );
__declspec(implementation_key(20)) long cLineElm::GetLocalAxes ( _bstr_t Name, double * Ang );
__declspec(implementation_key(21)) long cLineElm::GetMaterialOverwrite ( _bstr_t Name, BSTR * PropName );
__declspec(implementation_key(22)) long cLineElm::GetModifiers ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(23)) long cLineElm::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(24)) long cLineElm::GetObj ( _bstr_t Name, BSTR * Obj, long * ObjType, double * RDI, double * RDJ );
__declspec(implementation_key(25)) long cLineElm::GetPoints ( _bstr_t Name, BSTR * Point1, BSTR * Point2 );
__declspec(implementation_key(26)) long cLineElm::GetProperty ( _bstr_t Name, BSTR * PropName, long * ObjType, VARIANT_BOOL * Var, double * SVarRelStartLoc, double * SVarTotalLength );
__declspec(implementation_key(27)) long cLineElm::GetReleases ( _bstr_t Name, SAFEARRAY * * II, SAFEARRAY * * JJ, SAFEARRAY * * StartValue, SAFEARRAY * * EndValue );
__declspec(implementation_key(28)) long cLineElm::GetTCLimits ( _bstr_t Name, VARIANT_BOOL * LimitCompressionExists, double * LimitCompression, VARIANT_BOOL * LimitTensionExists, double * LimitTension );
__declspec(implementation_key(29)) long cLineElm::GetTransformationMatrix ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(30)) long cPointElm::Count ( );
__declspec(implementation_key(31)) long cPointElm::CountConstraint ( long * Count, _bstr_t Name );
__declspec(implementation_key(32)) long cPointElm::CountLoadDispl ( long * Count, _bstr_t Name, _bstr_t LoadPat );
__declspec(implementation_key(33)) long cPointElm::CountLoadForce ( long * Count, _bstr_t Name, _bstr_t LoadPat );
__declspec(implementation_key(34)) long cPointElm::CountRestraint ( );
__declspec(implementation_key(35)) long cPointElm::CountSpring ( );
__declspec(implementation_key(36)) long cPointElm::GetConnectivity ( _bstr_t Name, long * NumberItems, SAFEARRAY * * ObjectType, SAFEARRAY * * ObjectName, SAFEARRAY * * PointNumber );
__declspec(implementation_key(37)) long cPointElm::GetConstraint ( _bstr_t Name, long * NumberItems, SAFEARRAY * * PointName, SAFEARRAY * * ConstraintName, enum eItemTypeElm ItemTypeElm );
__declspec(implementation_key(38)) long cPointElm::GetCoordCartesian ( _bstr_t Name, double * X, double * Y, double * Z, _bstr_t CSys );
__declspec(implementation_key(39)) long cPointElm::GetLoadDispl ( _bstr_t Name, long * NumberItems, SAFEARRAY * * PointName, SAFEARRAY * * LoadPat, SAFEARRAY * * LcStep, SAFEARRAY * * CSys, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3, enum eItemTypeElm ItemTypeElm );
__declspec(implementation_key(40)) long cPointElm::GetLoadForce ( _bstr_t Name, long * NumberItems, SAFEARRAY * * PointName, SAFEARRAY * * LoadPat, SAFEARRAY * * LcStep, SAFEARRAY * * CSys, SAFEARRAY * * F1, SAFEARRAY * * F2, SAFEARRAY * * F3, SAFEARRAY * * M1, SAFEARRAY * * M2, SAFEARRAY * * M3, enum eItemTypeElm ItemTypeElm );
__declspec(implementation_key(41)) long cPointElm::GetLocalAxes ( _bstr_t Name, double * A, double * B, double * C );
__declspec(implementation_key(42)) long cPointElm::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(43)) long cPointElm::GetObj ( _bstr_t Name, BSTR * Obj, long * ObjType );
__declspec(implementation_key(44)) long cPointElm::GetPatternValue ( _bstr_t Name, _bstr_t PatternName, double * Value );
__declspec(implementation_key(45)) long cPointElm::GetRestraint ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(46)) long cPointElm::GetSpring ( _bstr_t Name, SAFEARRAY * * K );
__declspec(implementation_key(47)) long cPointElm::GetSpringCoupled ( _bstr_t Name, SAFEARRAY * * K );
__declspec(implementation_key(48)) long cPointElm::GetTransformationMatrix ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(49)) long cPointElm::IsSpringCoupled ( _bstr_t Name, VARIANT_BOOL * IsCoupled );
__declspec(implementation_key(50)) long cAnalysisResults::AreaForceShell ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * PointElm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * F11, SAFEARRAY * * F22, SAFEARRAY * * F12, SAFEARRAY * * FMax, SAFEARRAY * * FMin, SAFEARRAY * * FAngle, SAFEARRAY * * FVM, SAFEARRAY * * M11, SAFEARRAY * * M22, SAFEARRAY * * M12, SAFEARRAY * * MMax, SAFEARRAY * * MMin, SAFEARRAY * * MAngle, SAFEARRAY * * V13, SAFEARRAY * * V23, SAFEARRAY * * VMax, SAFEARRAY * * VAngle );
__declspec(implementation_key(51)) long cAnalysisResults::AreaJointForceShell ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * PointElm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * F1, SAFEARRAY * * F2, SAFEARRAY * * F3, SAFEARRAY * * M1, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(52)) long cAnalysisResults::AreaStressShell ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * PointElm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * S11Top, SAFEARRAY * * S22Top, SAFEARRAY * * S12Top, SAFEARRAY * * SMaxTop, SAFEARRAY * * SMinTop, SAFEARRAY * * SAngleTop, SAFEARRAY * * SVMTop, SAFEARRAY * * S11Bot, SAFEARRAY * * S22Bot, SAFEARRAY * * S12Bot, SAFEARRAY * * SMaxBot, SAFEARRAY * * SMinBot, SAFEARRAY * * SAngleBot, SAFEARRAY * * SVMBot, SAFEARRAY * * S13Avg, SAFEARRAY * * S23Avg, SAFEARRAY * * SMaxAvg, SAFEARRAY * * SAngleAvg );
__declspec(implementation_key(53)) long cAnalysisResults::AreaStressShellLayered ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * Layer, SAFEARRAY * * IntPtNum, SAFEARRAY * * IntPtLoc, SAFEARRAY * * PointElm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * S11, SAFEARRAY * * S22, SAFEARRAY * * S12, SAFEARRAY * * SMax, SAFEARRAY * * SMin, SAFEARRAY * * SAngle, SAFEARRAY * * SVM, SAFEARRAY * * S13Avg, SAFEARRAY * * S23Avg, SAFEARRAY * * SMaxAvg, SAFEARRAY * * SAngleAvg );
__declspec(implementation_key(54)) long cAnalysisResults::AssembledJointMass ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * PointElm, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3 );
__declspec(implementation_key(55)) long cAnalysisResults::BaseReact ( long * NumberResults, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * FX, SAFEARRAY * * FY, SAFEARRAY * * FZ, SAFEARRAY * * MX, SAFEARRAY * * ParamMy, SAFEARRAY * * MZ, double * GX, double * GY, double * GZ );
__declspec(implementation_key(56)) long cAnalysisResults::BaseReactWithCentroid ( long * NumberResults, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * FX, SAFEARRAY * * FY, SAFEARRAY * * FZ, SAFEARRAY * * MX, SAFEARRAY * * ParamMy, SAFEARRAY * * MZ, double * GX, double * GY, double * GZ, SAFEARRAY * * XCentroidForFX, SAFEARRAY * * YCentroidForFX, SAFEARRAY * * ZCentroidForFX, SAFEARRAY * * XCentroidForFY, SAFEARRAY * * YCentroidForFY, SAFEARRAY * * ZCentroidForFY, SAFEARRAY * * XCentroidForFZ, SAFEARRAY * * YCentroidForFZ, SAFEARRAY * * ZCentroidForFZ );
__declspec(implementation_key(57)) long cAnalysisResults::BucklingFactor ( long * NumberResults, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * Factor );
__declspec(implementation_key(58)) long cAnalysisResults::FrameForce ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * ObjSta, SAFEARRAY * * Elm, SAFEARRAY * * ElmSta, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * P, SAFEARRAY * * V2, SAFEARRAY * * V3, SAFEARRAY * * T, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(59)) long cAnalysisResults::FrameJointForce ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * PointElm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * F1, SAFEARRAY * * F2, SAFEARRAY * * F3, SAFEARRAY * * M1, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(60)) long cAnalysisResults::GeneralizedDispl ( _bstr_t Name, long * NumberResults, SAFEARRAY * * GD, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * DType, SAFEARRAY * * Value );
__declspec(implementation_key(61)) long cAnalysisResults::JointAcc ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3 );
__declspec(implementation_key(62)) long cAnalysisResults::JointAccAbs ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3 );
__declspec(implementation_key(63)) long cAnalysisResults::JointDispl ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3 );
__declspec(implementation_key(64)) long cAnalysisResults::JointDisplAbs ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3 );
__declspec(implementation_key(65)) long cAnalysisResults::JointReact ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * F1, SAFEARRAY * * F2, SAFEARRAY * * F3, SAFEARRAY * * M1, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(66)) long cAnalysisResults::JointVel ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3 );
__declspec(implementation_key(67)) long cAnalysisResults::JointVelAbs ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3 );
__declspec(implementation_key(68)) long cAnalysisResults::LinkDeformation ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3 );
__declspec(implementation_key(69)) long cAnalysisResults::LinkForce ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * PointElm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * P, SAFEARRAY * * V2, SAFEARRAY * * V3, SAFEARRAY * * T, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(70)) long cAnalysisResults::LinkJointForce ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * PointElm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * F1, SAFEARRAY * * F2, SAFEARRAY * * F3, SAFEARRAY * * M1, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(71)) long cAnalysisResults::ModalLoadParticipationRatios ( long * NumberResults, SAFEARRAY * * LoadCase, SAFEARRAY * * ItemType, SAFEARRAY * * Item, SAFEARRAY * * Stat, SAFEARRAY * * Dyn );
__declspec(implementation_key(72)) long cAnalysisResults::ModalParticipatingMassRatios ( long * NumberResults, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * Period, SAFEARRAY * * UX, SAFEARRAY * * UY, SAFEARRAY * * UZ, SAFEARRAY * * SumUX, SAFEARRAY * * SumUY, SAFEARRAY * * SumUZ, SAFEARRAY * * RX, SAFEARRAY * * RY, SAFEARRAY * * RZ, SAFEARRAY * * SumRX, SAFEARRAY * * SumRY, SAFEARRAY * * SumRZ );
__declspec(implementation_key(73)) long cAnalysisResults::ModalParticipationFactors ( long * NumberResults, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * Period, SAFEARRAY * * UX, SAFEARRAY * * UY, SAFEARRAY * * UZ, SAFEARRAY * * RX, SAFEARRAY * * RY, SAFEARRAY * * RZ, SAFEARRAY * * ModalMass, SAFEARRAY * * ModalStiff );
__declspec(implementation_key(74)) long cAnalysisResults::ModalPeriod ( long * NumberResults, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * Period, SAFEARRAY * * Frequency, SAFEARRAY * * CircFreq, SAFEARRAY * * EigenValue );
__declspec(implementation_key(75)) long cAnalysisResults::ModeShape ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3 );
__declspec(implementation_key(76)) long cAnalysisResults::PanelZoneDeformation ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Elm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3 );
__declspec(implementation_key(77)) long cAnalysisResults::PanelZoneForce ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Elm, SAFEARRAY * * PointElm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * P, SAFEARRAY * * V2, SAFEARRAY * * V3, SAFEARRAY * * T, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(78)) long cAnalysisResults::SectionCutAnalysis ( long * NumberResults, SAFEARRAY * * SCut, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * F1, SAFEARRAY * * F2, SAFEARRAY * * F3, SAFEARRAY * * M1, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(79)) long cAnalysisResults::SectionCutDesign ( long * NumberResults, SAFEARRAY * * SCut, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * P, SAFEARRAY * * V2, SAFEARRAY * * V3, SAFEARRAY * * T, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(80)) cAnalysisResultsSetupPtr cAnalysisResults::GetSetup ( );
__declspec(implementation_key(81)) long cAnalysisResults::AreaStrainShell ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * PointElm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * e11top, SAFEARRAY * * e22top, SAFEARRAY * * g12top, SAFEARRAY * * emaxtop, SAFEARRAY * * emintop, SAFEARRAY * * eangletop, SAFEARRAY * * evmtop, SAFEARRAY * * e11bot, SAFEARRAY * * e22bot, SAFEARRAY * * g12bot, SAFEARRAY * * emaxbot, SAFEARRAY * * eminbot, SAFEARRAY * * eanglebot, SAFEARRAY * * evmbot, SAFEARRAY * * g13avg, SAFEARRAY * * g23avg, SAFEARRAY * * gmaxavg, SAFEARRAY * * gangleavg );
__declspec(implementation_key(82)) long cAnalysisResults::AreaStrainShellLayered ( _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * Obj, SAFEARRAY * * Elm, SAFEARRAY * * Layer, SAFEARRAY * * IntPtNum, SAFEARRAY * * IntPtLoc, SAFEARRAY * * PointElm, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * E11, SAFEARRAY * * E22, SAFEARRAY * * G12, SAFEARRAY * * EMax, SAFEARRAY * * EMin, SAFEARRAY * * EAngle, SAFEARRAY * * EVM, SAFEARRAY * * g13avg, SAFEARRAY * * g23avg, SAFEARRAY * * gmaxavg, SAFEARRAY * * gangleavg );
__declspec(implementation_key(83)) long cAnalysisResults::AssembledJointMass_1 ( _bstr_t MassSourceName, _bstr_t Name, enum eItemTypeElm ItemTypeElm, long * NumberResults, SAFEARRAY * * PointElm, SAFEARRAY * * MassSource, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3 );
__declspec(implementation_key(84)) long cAnalysisResults::PierForce ( long * NumberResults, SAFEARRAY * * StoryName, SAFEARRAY * * PierName, SAFEARRAY * * LoadCase, SAFEARRAY * * Location, SAFEARRAY * * P, SAFEARRAY * * V2, SAFEARRAY * * V3, SAFEARRAY * * T, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(85)) long cAnalysisResults::SpandrelForce ( long * NumberResults, SAFEARRAY * * StoryName, SAFEARRAY * * SpandrelName, SAFEARRAY * * LoadCase, SAFEARRAY * * Location, SAFEARRAY * * P, SAFEARRAY * * V2, SAFEARRAY * * V3, SAFEARRAY * * T, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(86)) long cAnalysisResults::JointDrifts ( long * NumberResults, SAFEARRAY * * Story, SAFEARRAY * * Label, SAFEARRAY * * Name, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * DisplacementX, SAFEARRAY * * DisplacementY, SAFEARRAY * * DriftX, SAFEARRAY * * DriftY );
__declspec(implementation_key(87)) long cAnalysisResults::StoryDrifts ( long * NumberResults, SAFEARRAY * * Story, SAFEARRAY * * LoadCase, SAFEARRAY * * StepType, SAFEARRAY * * StepNum, SAFEARRAY * * Direction, SAFEARRAY * * Drift, SAFEARRAY * * Label, SAFEARRAY * * X, SAFEARRAY * * Y, SAFEARRAY * * Z );
__declspec(implementation_key(88)) long cAnalysisResultsSetup::DeselectAllCasesAndCombosForOutput ( );
__declspec(implementation_key(89)) long cAnalysisResultsSetup::GetCaseSelectedForOutput ( _bstr_t Name, VARIANT_BOOL * Selected );
__declspec(implementation_key(90)) long cAnalysisResultsSetup::GetComboSelectedForOutput ( _bstr_t Name, VARIANT_BOOL * Selected );
__declspec(implementation_key(91)) long cAnalysisResultsSetup::GetOptionBaseReactLoc ( double * GX, double * GY, double * GZ );
__declspec(implementation_key(92)) long cAnalysisResultsSetup::GetOptionBucklingMode ( long * BuckModeStart, long * BuckModeEnd, VARIANT_BOOL * BuckModeAll );
__declspec(implementation_key(93)) long cAnalysisResultsSetup::GetOptionDirectHist ( long * Value );
__declspec(implementation_key(94)) long cAnalysisResultsSetup::GetOptionModalHist ( long * Value );
__declspec(implementation_key(95)) long cAnalysisResultsSetup::GetOptionModeShape ( long * ModeShapeStart, long * ModeShapeEnd, VARIANT_BOOL * ModeShapesAll );
__declspec(implementation_key(96)) long cAnalysisResultsSetup::GetOptionMultiStepStatic ( long * Value );
__declspec(implementation_key(97)) long cAnalysisResultsSetup::GetOptionMultiValuedCombo ( long * Value );
__declspec(implementation_key(98)) long cAnalysisResultsSetup::GetOptionNLStatic ( long * Value );
__declspec(implementation_key(99)) long cAnalysisResultsSetup::SetCaseSelectedForOutput ( _bstr_t Name, VARIANT_BOOL Selected );
__declspec(implementation_key(100)) long cAnalysisResultsSetup::SetComboSelectedForOutput ( _bstr_t Name, VARIANT_BOOL Selected );
__declspec(implementation_key(101)) long cAnalysisResultsSetup::SetOptionBaseReactLoc ( double GX, double GY, double GZ );
__declspec(implementation_key(102)) long cAnalysisResultsSetup::SetOptionBucklingMode ( long BuckModeStart, long BuckModeEnd, VARIANT_BOOL BuckModeAll );
__declspec(implementation_key(103)) long cAnalysisResultsSetup::SetOptionDirectHist ( long Value );
__declspec(implementation_key(104)) long cAnalysisResultsSetup::SetOptionModalHist ( long Value );
__declspec(implementation_key(105)) long cAnalysisResultsSetup::SetOptionModeShape ( long ModeShapeStart, long ModeShapeEnd, VARIANT_BOOL ModeShapesAll );
__declspec(implementation_key(106)) long cAnalysisResultsSetup::SetOptionMultiStepStatic ( long Value );
__declspec(implementation_key(107)) long cAnalysisResultsSetup::SetOptionMultiValuedCombo ( long Value );
__declspec(implementation_key(108)) long cAnalysisResultsSetup::SetOptionNLStatic ( long Value );
__declspec(implementation_key(109)) long cAnalyze::CreateAnalysisModel ( );
__declspec(implementation_key(110)) long cAnalyze::DeleteResults ( _bstr_t Name, VARIANT_BOOL All );
__declspec(implementation_key(111)) long cAnalyze::GetActiveDOF ( SAFEARRAY * * DOF );
__declspec(implementation_key(112)) long cAnalyze::GetCaseStatus ( long * NumberItems, SAFEARRAY * * CaseName, SAFEARRAY * * Status );
__declspec(implementation_key(113)) long cAnalyze::GetRunCaseFlag ( long * NumberItems, SAFEARRAY * * CaseName, SAFEARRAY * * Run );
__declspec(implementation_key(114)) long cAnalyze::GetSolverOption ( long * SolverType, VARIANT_BOOL * Force32BitSolver, BSTR * StiffCase );
__declspec(implementation_key(115)) long cAnalyze::GetSolverOption_1 ( long * SolverType, long * SolverProcessType, VARIANT_BOOL * Force32BitSolver, BSTR * StiffCase );
__declspec(implementation_key(116)) long cAnalyze::ModifyUndeformedGeometry ( _bstr_t CaseName, double SF, long Stage, VARIANT_BOOL Original );
__declspec(implementation_key(117)) long cAnalyze::RunAnalysis ( );
__declspec(implementation_key(118)) long cAnalyze::SetActiveDOF ( SAFEARRAY * * DOF );
__declspec(implementation_key(119)) long cAnalyze::SetRunCaseFlag ( _bstr_t Name, VARIANT_BOOL Run, VARIANT_BOOL All );
__declspec(implementation_key(120)) long cAnalyze::SetSolverOption ( long SolverType, VARIANT_BOOL Force32BitSolver, _bstr_t StiffCase );
__declspec(implementation_key(121)) long cAnalyze::SetSolverOption_1 ( long SolverType, long SolverProcessType, VARIANT_BOOL Force32BitSolver, _bstr_t StiffCase );
__declspec(implementation_key(122)) long cAnalyze::ModifyUndeformedGeometryModeShape ( _bstr_t CaseName, long Mode, double MaxDispl, long Direction, VARIANT_BOOL Original );
__declspec(implementation_key(123)) long cAnalyze::GetSolverOption_2 ( long * SolverType, long * SolverProcessType, long * NumberParallelRuns, BSTR * StiffCase );
__declspec(implementation_key(124)) long cAnalyze::SetSolverOption_2 ( long SolverType, long SolverProcessType, long NumberParallelRuns, _bstr_t StiffCase );
__declspec(implementation_key(125)) long cAnalyze::MergeAnalysisResults ( _bstr_t SourceFileName );
__declspec(implementation_key(126)) long cAnalyze::GetSolverOption_3 ( long * SolverType, long * SolverProcessType, long * NumberParallelRuns, long * ResponseFileSizeMaxMB, long * NumberAnalysisThreads, BSTR * StiffCase );
__declspec(implementation_key(127)) long cAnalyze::SetSolverOption_3 ( long SolverType, long SolverProcessType, long NumberParallelRuns, long ResponseFileSizeMaxMB, long NumberAnalysisThreads, _bstr_t StiffCase );
__declspec(implementation_key(128)) long cAnalyze::GetDesignResponseOption ( long * NumberDesignThreads, long * NumberResponseRecoveryThreads, long * UseMemoryMappedFilesForResponseRecovery, VARIANT_BOOL * ModelDifferencesOKWhenMergingResults );
__declspec(implementation_key(129)) long cAnalyze::SetDesignResponseOption ( long NumberDesignThreads, long NumberResponseRecoveryThreads, long UseMemoryMappedFilesForResponseRecovery, VARIANT_BOOL ModelDifferencesOKWhenMergingResults );
__declspec(implementation_key(130)) long cDCompColEurocode_4_2004::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(131)) long cDCompColEurocode_4_2004::GetPreference ( long Item, double * Value );
__declspec(implementation_key(132)) long cDCompColEurocode_4_2004::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(133)) long cDCompColEurocode_4_2004::SetPreference ( long Item, double Value );
__declspec(implementation_key(134)) long cDesignCompositeColumn::GetCode ( BSTR * CodeName );
__declspec(implementation_key(135)) long cDesignCompositeColumn::GetComboDeflection ( long * NumberItems, SAFEARRAY * * MyName );
__declspec(implementation_key(136)) long cDesignCompositeColumn::GetComboStrength ( long * NumberItems, SAFEARRAY * * MyName );
__declspec(implementation_key(137)) long cDesignCompositeColumn::GetDesignSection ( _bstr_t Name, BSTR * PropName );
__declspec(implementation_key(138)) long cDesignCompositeColumn::GetGroup ( long * NumberItems, SAFEARRAY * * MyName );
__declspec(implementation_key(139)) VARIANT_BOOL cDesignCompositeColumn::GetResultsAvailable ( );
__declspec(implementation_key(140)) long cDesignCompositeColumn::GetSummaryResults ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameName, SAFEARRAY * * FrameType, SAFEARRAY * * DesignSect, SAFEARRAY * * Status, SAFEARRAY * * PMMCombo, SAFEARRAY * * PMMRatio, SAFEARRAY * * PRatio, SAFEARRAY * * MMajRatio, SAFEARRAY * * MMinRatio, SAFEARRAY * * VMajCombo, SAFEARRAY * * VMajRatio, SAFEARRAY * * VMinCombo, SAFEARRAY * * VMinRatio, enum eItemType ItemType );
__declspec(implementation_key(141)) long cDesignCompositeColumn::DeleteResults ( );
__declspec(implementation_key(142)) long cDesignCompositeColumn::GetTargetDispl ( long * NumberItems, SAFEARRAY * * LoadCase, SAFEARRAY * * Point, SAFEARRAY * * Displ, VARIANT_BOOL * Active );
__declspec(implementation_key(143)) long cDesignCompositeColumn::GetTargetPeriod ( long * NumberItems, BSTR * ModalCase, SAFEARRAY * * Mode, SAFEARRAY * * Period, VARIANT_BOOL * Active );
__declspec(implementation_key(144)) long cDesignCompositeColumn::ResetOverwrites ( );
__declspec(implementation_key(145)) long cDesignCompositeColumn::SetAutoSelectNull ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(146)) long cDesignCompositeColumn::SetCode ( _bstr_t CodeName );
__declspec(implementation_key(147)) long cDesignCompositeColumn::SetComboDeflection ( _bstr_t Name, VARIANT_BOOL Selected );
__declspec(implementation_key(148)) long cDesignCompositeColumn::SetComboStrength ( _bstr_t Name, VARIANT_BOOL Selected );
__declspec(implementation_key(149)) long cDesignCompositeColumn::SetDesignSection ( _bstr_t Name, _bstr_t PropName, VARIANT_BOOL LastAnalysis, enum eItemType ItemType );
__declspec(implementation_key(150)) long cDesignCompositeColumn::SetGroup ( _bstr_t Name, VARIANT_BOOL Selected );
__declspec(implementation_key(151)) long cDesignCompositeColumn::SetTargetDispl ( long NumberItems, SAFEARRAY * * LoadCase, SAFEARRAY * * Point, SAFEARRAY * * Displ, VARIANT_BOOL Active );
__declspec(implementation_key(152)) long cDesignCompositeColumn::SetTargetPeriod ( long NumberItems, _bstr_t ModalCase, SAFEARRAY * * Mode, SAFEARRAY * * Period, VARIANT_BOOL Active );
__declspec(implementation_key(153)) long cDesignCompositeColumn::StartDesign ( );
__declspec(implementation_key(154)) long cDesignCompositeColumn::VerifyPassed ( long * NumberItems, long * N1, long * N2, SAFEARRAY * * MyName );
__declspec(implementation_key(155)) long cDesignCompositeColumn::VerifySections ( long * NumberItems, SAFEARRAY * * MyName );
__declspec(implementation_key(156)) cDCompColEurocode_4_2004Ptr cDesignCompositeColumn::GetEurocode_4_2004 ( );
__declspec(implementation_key(157)) long cDStAustralian_AS4100_2020::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(158)) long cDStAustralian_AS4100_2020::GetPreference ( long Item, double * Value );
__declspec(implementation_key(159)) long cDStAustralian_AS4100_2020::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(160)) long cDStAustralian_AS4100_2020::SetPreference ( long Item, double Value );
__declspec(implementation_key(161)) cOAPIPtr cHelper::CreateObject ( _bstr_t fullPath );
__declspec(implementation_key(162)) cOAPIPtr cHelper::GetObject ( _bstr_t typeName );
__declspec(implementation_key(163)) cOAPIPtr cHelper::CreateObjectProgID ( _bstr_t progID );
__declspec(implementation_key(164)) double cHelper::GetOAPIVersionNumber ( );
__declspec(implementation_key(165)) cOAPIPtr cHelper::CreateObjectHost ( _bstr_t hostName, _bstr_t fullPath );
__declspec(implementation_key(166)) cOAPIPtr cHelper::CreateObjectHostPort ( _bstr_t hostName, long portNumber, _bstr_t fullPath );
__declspec(implementation_key(167)) cOAPIPtr cHelper::CreateObjectProgIDHost ( _bstr_t hostName, _bstr_t progID );
__declspec(implementation_key(168)) cOAPIPtr cHelper::CreateObjectProgIDHostPort ( _bstr_t hostName, long portNumber, _bstr_t progID );
__declspec(implementation_key(169)) cOAPIPtr cHelper::GetObjectHost ( _bstr_t hostName, _bstr_t progID );
__declspec(implementation_key(170)) cOAPIPtr cHelper::GetObjectHostPort ( _bstr_t hostName, long portNumber, _bstr_t progID );
__declspec(implementation_key(171)) cOAPIPtr cHelper::GetObjectProcess ( _bstr_t typeName, long pid );
__declspec(implementation_key(172)) long cOAPI::ApplicationExit ( VARIANT_BOOL FileSave );
__declspec(implementation_key(173)) cSapModelPtr cOAPI::GetSapModel ( );
__declspec(implementation_key(174)) double cOAPI::GetOAPIVersionNumber ( );
__declspec(implementation_key(175)) long cOAPI::Hide ( );
__declspec(implementation_key(176)) long cOAPI::Unhide ( );
__declspec(implementation_key(177)) VARIANT_BOOL cOAPI::Visible ( );
__declspec(implementation_key(178)) long cOAPI::SetAsActiveObject ( );
__declspec(implementation_key(179)) long cOAPI::UnsetAsActiveObject ( );
__declspec(implementation_key(180)) long cOAPI::InternalExec ( long operation );
__declspec(implementation_key(181)) long cOAPI::ApplicationStart ( );
__declspec(implementation_key(182)) cAnalyzePtr cSapModel::GetAnalyze ( );
__declspec(implementation_key(183)) cAreaElmPtr cSapModel::GetAreaElm ( );
__declspec(implementation_key(184)) cAreaObjPtr cSapModel::GetAreaObj ( );
__declspec(implementation_key(185)) cConstraintPtr cSapModel::GetConstraintDef ( );
__declspec(implementation_key(186)) cDesignConcretePtr cSapModel::GetDesignConcrete ( );
__declspec(implementation_key(187)) cDesignSteelPtr cSapModel::GetDesignSteel ( );
__declspec(implementation_key(188)) cEditAreaPtr cSapModel::GetEditArea ( );
__declspec(implementation_key(189)) cEditFramePtr cSapModel::GetEditFrame ( );
__declspec(implementation_key(190)) cEditGeneralPtr cSapModel::GetEditGeneral ( );
__declspec(implementation_key(191)) cEditPointPtr cSapModel::GetEditPoint ( );
__declspec(implementation_key(192)) cFilePtr cSapModel::GetFile ( );
__declspec(implementation_key(193)) cFrameObjPtr cSapModel::GetFrameObj ( );
__declspec(implementation_key(194)) cFunctionPtr cSapModel::GetFunc ( );
__declspec(implementation_key(195)) cGenDisplPtr cSapModel::GetGDispl ( );
__declspec(implementation_key(196)) enum eUnits cSapModel::GetDatabaseUnits ( );
__declspec(implementation_key(197)) long cSapModel::GetMergeTol ( double * MergeTol );
__declspec(implementation_key(198)) _bstr_t cSapModel::GetModelFilename ( VARIANT_BOOL IncludePath );
__declspec(implementation_key(199)) _bstr_t cSapModel::GetModelFilepath ( );
__declspec(implementation_key(200)) VARIANT_BOOL cSapModel::GetModelIsLocked ( );
__declspec(implementation_key(201)) _bstr_t cSapModel::GetPresentCoordSystem ( );
__declspec(implementation_key(202)) enum eUnits cSapModel::GetPresentUnits ( );
__declspec(implementation_key(203)) long cSapModel::GetProgramInfo ( BSTR * ProgramName, BSTR * ProgramVersion, BSTR * ProgramLevel );
__declspec(implementation_key(204)) long cSapModel::GetProjectInfo ( long * NumberItems, SAFEARRAY * * Item, SAFEARRAY * * Data );
__declspec(implementation_key(205)) long cSapModel::GetVersion ( BSTR * Version, double * MyVersionNumber );
__declspec(implementation_key(206)) cGroupPtr cSapModel::GetGroupDef ( );
__declspec(implementation_key(207)) long cSapModel::InitializeNewModel ( enum eUnits Units );
__declspec(implementation_key(208)) cLineElmPtr cSapModel::GetLineElm ( );
__declspec(implementation_key(209)) cLinkElmPtr cSapModel::GetLinkElm ( );
__declspec(implementation_key(210)) cLinkObjPtr cSapModel::GetLinkObj ( );
__declspec(implementation_key(211)) cLoadCasesPtr cSapModel::GetLoadCases ( );
__declspec(implementation_key(212)) cLoadPatternsPtr cSapModel::GetLoadPatterns ( );
__declspec(implementation_key(213)) cOptionsPtr cSapModel::GetOptions ( );
__declspec(implementation_key(214)) cPatternPtr cSapModel::GetPatternDef ( );
__declspec(implementation_key(215)) cPointElmPtr cSapModel::GetPointElm ( );
__declspec(implementation_key(216)) cPointObjPtr cSapModel::GetPointObj ( );
__declspec(implementation_key(217)) cPropAreaPtr cSapModel::GetPropArea ( );
__declspec(implementation_key(218)) cPropFramePtr cSapModel::GetPropFrame ( );
__declspec(implementation_key(219)) cPropLinkPtr cSapModel::GetPropLink ( );
__declspec(implementation_key(220)) cPropMaterialPtr cSapModel::GetPropMaterial ( );
__declspec(implementation_key(221)) cPropRebarPtr cSapModel::GetPropRebar ( );
__declspec(implementation_key(222)) cPropTendonPtr cSapModel::GetPropTendon ( );
__declspec(implementation_key(223)) cComboPtr cSapModel::GetRespCombo ( );
__declspec(implementation_key(224)) cAnalysisResultsPtr cSapModel::GetResults ( );
__declspec(implementation_key(225)) cSelectPtr cSapModel::GetSelectObj ( );
__declspec(implementation_key(226)) long cSapModel::SetMergeTol ( double MergeTol );
__declspec(implementation_key(227)) long cSapModel::SetModelIsLocked ( VARIANT_BOOL Lockit );
__declspec(implementation_key(228)) long cSapModel::SetPresentUnits ( enum eUnits Units );
__declspec(implementation_key(229)) long cSapModel::SetProjectInfo ( _bstr_t Item, _bstr_t Data );
__declspec(implementation_key(230)) cTendonObjPtr cSapModel::GetTendonObj ( );
__declspec(implementation_key(231)) cViewPtr cSapModel::GetView ( );
__declspec(implementation_key(232)) cDesignResultsPtr cSapModel::GetDesignResults ( );
__declspec(implementation_key(233)) cDatabaseTablesPtr cSapModel::GetDatabaseTables ( );
__declspec(implementation_key(234)) cDesignCompositeBeamPtr cSapModel::GetDesignCompositeBeam ( );
__declspec(implementation_key(235)) cGridSysPtr cSapModel::GetGridSys ( );
__declspec(implementation_key(236)) cStoryPtr cSapModel::GetStory ( );
__declspec(implementation_key(237)) cTowerPtr cSapModel::GetTower ( );
__declspec(implementation_key(238)) long cSapModel::GetDatabaseUnits_2 ( enum eForce * forceUnits, enum eLength * lengthUnits, enum eTemperature * temperatureUnits );
__declspec(implementation_key(239)) long cSapModel::GetPresentUnits_2 ( enum eForce * forceUnits, enum eLength * lengthUnits, enum eTemperature * temperatureUnits );
__declspec(implementation_key(240)) long cSapModel::SetPresentUnits_2 ( enum eForce forceUnits, enum eLength lengthUnits, enum eTemperature temperatureUnits );
__declspec(implementation_key(241)) cDiaphragmPtr cSapModel::GetDiaphragm ( );
__declspec(implementation_key(242)) long cSapModel::TreeIsUpdateSuspended ( VARIANT_BOOL * IsSuspended );
__declspec(implementation_key(243)) long cSapModel::TreeResumeUpdateData ( );
__declspec(implementation_key(244)) long cSapModel::TreeSuspendUpdateData ( VARIANT_BOOL updateAtResume );
__declspec(implementation_key(245)) cPierLabelPtr cSapModel::GetPierLabel ( );
__declspec(implementation_key(246)) cSpandrelLabelPtr cSapModel::GetSpandrelLabel ( );
__declspec(implementation_key(247)) cDetailingPtr cSapModel::GetDetailing ( );
__declspec(implementation_key(248)) cPropPointSpringPtr cSapModel::GetPropPointSpring ( );
__declspec(implementation_key(249)) cPropLineSpringPtr cSapModel::GetPropLineSpring ( );
__declspec(implementation_key(250)) cPropAreaSpringPtr cSapModel::GetPropAreaSpring ( );
__declspec(implementation_key(251)) cDesignConcreteSlabPtr cSapModel::GetDesignConcreteSlab ( );
__declspec(implementation_key(252)) cDesignShearWallPtr cSapModel::GetDesignShearWall ( );
__declspec(implementation_key(253)) cDesignCompositeColumnPtr cSapModel::GetDesignCompositeColumn ( );
__declspec(implementation_key(254)) HRESULT cPluginContract::Main ( struct cSapModel * * SapModel, struct cPluginCallback * * ISapPlugin );
__declspec(implementation_key(255)) long cPluginContract::Info ( BSTR * Text );
__declspec(implementation_key(256)) long cPluginCallback::GetErrorFlag ( );
__declspec(implementation_key(257)) HRESULT cPluginCallback::Finish ( long iVal );
__declspec(implementation_key(258)) VARIANT_BOOL cPluginCallback::GetFinished ( );
__declspec(implementation_key(259)) long cGridSys::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(260)) long cGridSys::Count ( );
__declspec(implementation_key(261)) long cGridSys::Delete ( _bstr_t Name );
__declspec(implementation_key(262)) long cGridSys::GetGridSys ( _bstr_t Name, double * X, double * Y, double * RZ );
__declspec(implementation_key(263)) long cGridSys::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(264)) long cGridSys::GetTransformationMatrix ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(265)) long cGridSys::SetGridSys ( _bstr_t Name, double X, double Y, double RZ );
__declspec(implementation_key(266)) long cGridSys::GetGridSys_2 ( _bstr_t Name, double * Xo, double * Yo, double * RZ, BSTR * GridSysType, long * NumXLines, long * NumYLines, SAFEARRAY * * GridLineIDX, SAFEARRAY * * GridLineIDY, SAFEARRAY * * OrdinateX, SAFEARRAY * * OrdinateY, SAFEARRAY * * VisibleX, SAFEARRAY * * VisibleY, SAFEARRAY * * BubbleLocX, SAFEARRAY * * BubbleLocY );
__declspec(implementation_key(267)) long cGridSys::GetGridSysType ( _bstr_t Name, BSTR * GridSysType );
__declspec(implementation_key(268)) long cGridSys::GetNameTypeList ( long * NumberNames, SAFEARRAY * * GridSysName, SAFEARRAY * * GridSysType );
__declspec(implementation_key(269)) long cGridSys::GetGridSysCartesian ( _bstr_t Name, double * Xo, double * Yo, double * RZ, VARIANT_BOOL * StoryRangeIsDefault, BSTR * TopStory, BSTR * BottomStory, double * BubbleSize, long * GridColor, long * NumXLines, SAFEARRAY * * GridLineIDX, SAFEARRAY * * OrdinateX, SAFEARRAY * * VisibleX, SAFEARRAY * * BubbleLocX, long * NumYLines, SAFEARRAY * * GridLineIDY, SAFEARRAY * * OrdinateY, SAFEARRAY * * VisibleY, SAFEARRAY * * BubbleLocY, long * NumGenLines, SAFEARRAY * * GridLineIDGen, SAFEARRAY * * GenOrdX1, SAFEARRAY * * GenOrdY1, SAFEARRAY * * GenOrdX2, SAFEARRAY * * GenOrdY2, SAFEARRAY * * VisibleGen, SAFEARRAY * * BubbleLocGen );
__declspec(implementation_key(270)) long cGridSys::GetGridSysCylindrical ( _bstr_t Name, double * Xo, double * Yo, double * RZ, VARIANT_BOOL * StoryRangeIsDefault, BSTR * TopStory, BSTR * BottomStory, double * BubbleSize, long * GridColor, long * NumRLines, SAFEARRAY * * GridLineIDR, SAFEARRAY * * OrdinateR, SAFEARRAY * * VisibleR, SAFEARRAY * * BubbleLocR, long * NumTLines, SAFEARRAY * * GridLineIDT, SAFEARRAY * * OrdinateT, SAFEARRAY * * VisibleT, SAFEARRAY * * BubbleLocT );
__declspec(implementation_key(271)) long cDiaphragm::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(272)) long cDiaphragm::Delete ( _bstr_t Name );
__declspec(implementation_key(273)) long cDiaphragm::GetDiaphragm ( _bstr_t Name, VARIANT_BOOL * SemiRigid );
__declspec(implementation_key(274)) long cDiaphragm::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(275)) long cDiaphragm::SetDiaphragm ( _bstr_t Name, VARIANT_BOOL SemiRigid );
__declspec(implementation_key(276)) long cSpandrelLabel::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(277)) long cSpandrelLabel::Delete ( _bstr_t Name );
__declspec(implementation_key(278)) long cSpandrelLabel::GetSpandrel ( _bstr_t Name, VARIANT_BOOL * IsMultiStory );
__declspec(implementation_key(279)) long cSpandrelLabel::GetNameList ( long * NumberNames, SAFEARRAY * * MyName, SAFEARRAY * * IsMultiStory );
__declspec(implementation_key(280)) long cSpandrelLabel::SetSpandrel ( _bstr_t Name, VARIANT_BOOL IsMultiStory );
__declspec(implementation_key(281)) long cSpandrelLabel::GetSectionProperties ( _bstr_t Name, long * NumberStories, SAFEARRAY * * StoryName, SAFEARRAY * * NumAreaObj, SAFEARRAY * * NumLineObj, SAFEARRAY * * Length, SAFEARRAY * * DepthLeft, SAFEARRAY * * ThickLeft, SAFEARRAY * * DepthRight, SAFEARRAY * * ThickRight, SAFEARRAY * * MatProp, SAFEARRAY * * CGLeftX, SAFEARRAY * * CGLeftY, SAFEARRAY * * CGLeftZ, SAFEARRAY * * CGRightX, SAFEARRAY * * CGRightY, SAFEARRAY * * CGRightZ );
__declspec(implementation_key(282)) long cPierLabel::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(283)) long cPierLabel::Delete ( _bstr_t Name );
__declspec(implementation_key(284)) long cPierLabel::GetPier ( _bstr_t Name );
__declspec(implementation_key(285)) long cPierLabel::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(286)) long cPierLabel::GetSectionProperties ( _bstr_t Name, long * NumberStories, SAFEARRAY * * StoryName, SAFEARRAY * * AxisAngle, SAFEARRAY * * NumAreaObjs, SAFEARRAY * * NumLineObjs, SAFEARRAY * * WidthBot, SAFEARRAY * * ThicknessBot, SAFEARRAY * * WidthTop, SAFEARRAY * * ThicknessTop, SAFEARRAY * * MatProp, SAFEARRAY * * CGBotX, SAFEARRAY * * CGBotY, SAFEARRAY * * CGBotZ, SAFEARRAY * * CGTopX, SAFEARRAY * * CGTopY, SAFEARRAY * * CGTopZ );
__declspec(implementation_key(287)) long cPierLabel::SetPier ( _bstr_t Name );
__declspec(implementation_key(288)) long cStory::GetElevation ( _bstr_t Name, double * Elevation );
__declspec(implementation_key(289)) long cStory::GetGUID ( _bstr_t Name, BSTR * GUID );
__declspec(implementation_key(290)) long cStory::GetHeight ( _bstr_t Name, double * Height );
__declspec(implementation_key(291)) long cStory::GetMasterStory ( _bstr_t Name, VARIANT_BOOL * IsMasterStory );
__declspec(implementation_key(292)) long cStory::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(293)) long cStory::GetSimilarTo ( _bstr_t Name, VARIANT_BOOL * IsMasterStory, BSTR * SimilarToStory );
__declspec(implementation_key(294)) long cStory::GetSplice ( _bstr_t Name, VARIANT_BOOL * SpliceAbove, double * SpliceHeight );
__declspec(implementation_key(295)) long cStory::GetStories ( long * NumberStories, SAFEARRAY * * StoryNames, SAFEARRAY * * StoryElevations, SAFEARRAY * * StoryHeights, SAFEARRAY * * IsMasterStory, SAFEARRAY * * SimilarToStory, SAFEARRAY * * SpliceAbove, SAFEARRAY * * SpliceHeight );
__declspec(implementation_key(296)) long cStory::SetGUID ( _bstr_t Name, _bstr_t GUID );
__declspec(implementation_key(297)) long cStory::SetElevation ( _bstr_t Name, double Elevation );
__declspec(implementation_key(298)) long cStory::SetHeight ( _bstr_t Name, double Height );
__declspec(implementation_key(299)) long cStory::SetMasterStory ( _bstr_t Name, VARIANT_BOOL IsMasterStory );
__declspec(implementation_key(300)) long cStory::SetSimilarTo ( _bstr_t Name, _bstr_t SimilarToStory );
__declspec(implementation_key(301)) long cStory::SetSplice ( _bstr_t Name, VARIANT_BOOL SpliceAbove, double SpliceHeight );
__declspec(implementation_key(302)) long cStory::SetStories ( SAFEARRAY * StoryNames, SAFEARRAY * StoryElevations, SAFEARRAY * StoryHeights, SAFEARRAY * IsMasterStory, SAFEARRAY * SimilarToStory, SAFEARRAY * SpliceAbove, SAFEARRAY * SpliceHeight );
__declspec(implementation_key(303)) long cStory::GetStories_2 ( double * BaseElevation, long * NumberStories, SAFEARRAY * * StoryNames, SAFEARRAY * * StoryElevations, SAFEARRAY * * StoryHeights, SAFEARRAY * * IsMasterStory, SAFEARRAY * * SimilarToStory, SAFEARRAY * * SpliceAbove, SAFEARRAY * * SpliceHeight, SAFEARRAY * * color );
__declspec(implementation_key(304)) long cStory::SetStories_2 ( double BaseElevation, long NumberStories, SAFEARRAY * * StoryNames, SAFEARRAY * * StoryHeights, SAFEARRAY * * IsMasterStory, SAFEARRAY * * SimilarToStory, SAFEARRAY * * SpliceAbove, SAFEARRAY * * SpliceHeight, SAFEARRAY * * color );
__declspec(implementation_key(305)) long cCombo::Add ( _bstr_t Name, long ComboType );
__declspec(implementation_key(306)) long cCombo::AddDesignDefaultCombos ( VARIANT_BOOL DesignSteel, VARIANT_BOOL DesignConcrete, VARIANT_BOOL DesignAluminum, VARIANT_BOOL DesignColdFormed );
__declspec(implementation_key(307)) long cCombo::Delete ( _bstr_t Name );
__declspec(implementation_key(308)) long cCombo::DeleteCase ( _bstr_t Name, enum eCNameType CNameType, _bstr_t CName );
__declspec(implementation_key(309)) long cCombo::GetCaseList ( _bstr_t Name, long * NumberItems, SAFEARRAY * * CNameType, SAFEARRAY * * CName, SAFEARRAY * * SF );
__declspec(implementation_key(310)) long cCombo::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(311)) long cCombo::SetCaseList ( _bstr_t Name, enum eCNameType * CNameType, _bstr_t CName, double SF );
__declspec(implementation_key(312)) long cCombo::GetTypeOAPI ( _bstr_t Name, long * ComboType );
__declspec(implementation_key(313)) long cCombo::GetCaseList_1 ( _bstr_t Name, long * NumberItems, SAFEARRAY * * CNameType, SAFEARRAY * * CName, SAFEARRAY * * ModeNumber, SAFEARRAY * * SF );
__declspec(implementation_key(314)) long cCombo::SetCaseList_1 ( _bstr_t Name, enum eCNameType * CNameType, _bstr_t CName, long ModeNumber, double SF );
__declspec(implementation_key(315)) long cCombo::GetTypeCombo ( _bstr_t Name, long * ComboType );
__declspec(implementation_key(316)) long cConstraint::Delete ( _bstr_t Name );
__declspec(implementation_key(317)) long cConstraint::GetDiaphragm ( _bstr_t Name, enum eConstraintAxis * Axis, BSTR * CSys );
__declspec(implementation_key(318)) long cConstraint::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(319)) long cConstraint::SetDiaphragm ( _bstr_t Name, enum eConstraintAxis Axis, _bstr_t CSys );
__declspec(implementation_key(320)) long cGenDispl::Add ( _bstr_t Name, long MyType );
__declspec(implementation_key(321)) long cGenDispl::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(322)) long cGenDispl::Count ( );
__declspec(implementation_key(323)) long cGenDispl::CountPoint ( _bstr_t Name, long * Count );
__declspec(implementation_key(324)) long cGenDispl::Delete ( _bstr_t Name );
__declspec(implementation_key(325)) long cGenDispl::DeletePoint ( _bstr_t Name, _bstr_t PointName );
__declspec(implementation_key(326)) long cGenDispl::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(327)) long cGenDispl::GetPoint ( _bstr_t Name, long * NumberItems, SAFEARRAY * * PointName, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3 );
__declspec(implementation_key(328)) long cGenDispl::GetTypeOAPI ( _bstr_t Name, long * MyType );
__declspec(implementation_key(329)) long cGenDispl::SetPoint ( _bstr_t Name, _bstr_t PointName, SAFEARRAY * * SF );
__declspec(implementation_key(330)) long cGenDispl::SetType ( _bstr_t Name, long MyType );
__declspec(implementation_key(331)) long cGenDispl::SetTypeOAPI ( _bstr_t Name, long MyType );
__declspec(implementation_key(332)) long cGenDispl::GetTypeGenDispl ( _bstr_t Name, long * MyType );
__declspec(implementation_key(333)) long cGroup::Count ( );
__declspec(implementation_key(334)) long cGroup::Delete ( _bstr_t Name );
__declspec(implementation_key(335)) long cGroup::GetAssignments ( _bstr_t Name, long * NumberItems, SAFEARRAY * * ObjectType, SAFEARRAY * * ObjectName );
__declspec(implementation_key(336)) long cGroup::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(337)) long cGroup::GetGroup ( _bstr_t Name, long * color, VARIANT_BOOL * SpecifiedForSelection, VARIANT_BOOL * SpecifiedForSectionCutDefinition, VARIANT_BOOL * SpecifiedForSteelDesign, VARIANT_BOOL * SpecifiedForConcreteDesign, VARIANT_BOOL * SpecifiedForAluminumDesign, VARIANT_BOOL * SpecifiedForColdFormedDesign, VARIANT_BOOL * SpecifiedForStaticNLActiveStage, VARIANT_BOOL * SpecifiedForBridgeResponseOutput, VARIANT_BOOL * SpecifiedForAutoSeismicOutput, VARIANT_BOOL * SpecifiedForAutoWindOutput, VARIANT_BOOL * SpecifiedForMassAndWeight );
__declspec(implementation_key(338)) long cGroup::SetGroup ( _bstr_t Name, long color, VARIANT_BOOL SpecifiedForSelection, VARIANT_BOOL SpecifiedForSectionCutDefinition, VARIANT_BOOL SpecifiedForSteelDesign, VARIANT_BOOL SpecifiedForConcreteDesign, VARIANT_BOOL SpecifiedForAluminumDesign, VARIANT_BOOL SpecifiedForColdFormedDesign, VARIANT_BOOL SpecifiedForStaticNLActiveStage, VARIANT_BOOL SpecifiedForBridgeResponseOutput, VARIANT_BOOL SpecifiedForAutoSeismicOutput, VARIANT_BOOL SpecifiedForAutoWindOutput, VARIANT_BOOL SpecifiedForMassAndWeight );
__declspec(implementation_key(339)) long cGroup::GetGroup_1 ( _bstr_t Name, long * color, VARIANT_BOOL * SpecifiedForSelection, VARIANT_BOOL * SpecifiedForSectionCutDefinition, VARIANT_BOOL * SpecifiedForSteelDesign, VARIANT_BOOL * SpecifiedForConcreteDesign, VARIANT_BOOL * SpecifiedForAluminumDesign, VARIANT_BOOL * SpecifiedForStaticNLActiveStage, VARIANT_BOOL * SpecifiedForAutoSeismicOutput, VARIANT_BOOL * SpecifiedForAutoWindOutput, VARIANT_BOOL * SpecifiedForMassAndWeight, VARIANT_BOOL * SpecifiedForSteelJoistDesign, VARIANT_BOOL * SpecifiedForWallDesign, VARIANT_BOOL * SpecifiedForBasePlateDesign, VARIANT_BOOL * SpecifiedForConnectionDesign );
__declspec(implementation_key(340)) long cGroup::SetGroup_1 ( _bstr_t Name, long color, VARIANT_BOOL SpecifiedForSelection, VARIANT_BOOL SpecifiedForSectionCutDefinition, VARIANT_BOOL SpecifiedForSteelDesign, VARIANT_BOOL SpecifiedForConcreteDesign, VARIANT_BOOL SpecifiedForAluminumDesign, VARIANT_BOOL SpecifiedForStaticNLActiveStage, VARIANT_BOOL SpecifiedForAutoSeismicOutput, VARIANT_BOOL SpecifiedForAutoWindOutput, VARIANT_BOOL SpecifiedForMassAndWeight, VARIANT_BOOL SpecifiedForSteelJoistDesign, VARIANT_BOOL SpecifiedForWallDesign, VARIANT_BOOL SpecifiedForBasePlateDesign, VARIANT_BOOL SpecifiedForConnectionDesign );
__declspec(implementation_key(341)) long cTower::AddCopyOfTower ( _bstr_t TowerName, _bstr_t NewTowerName );
__declspec(implementation_key(342)) long cTower::AddNewTower ( _bstr_t TowerName, long NumberStories, double TypicalStoryHeight, double BotttomStoryHeight );
__declspec(implementation_key(343)) long cTower::AllowMultipleTowers ( VARIANT_BOOL AllowMultTowers, _bstr_t RetainedTower, VARIANT_BOOL Combine );
__declspec(implementation_key(344)) long cTower::DeleteTower ( _bstr_t TowerName, VARIANT_BOOL Associate, _bstr_t AssocWithTower );
__declspec(implementation_key(345)) long cTower::GetActiveTower ( BSTR * TowerName );
__declspec(implementation_key(346)) long cTower::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(347)) long cTower::RenameTower ( _bstr_t TowerName, _bstr_t NewTowerName );
__declspec(implementation_key(348)) long cTower::SetActiveTower ( _bstr_t TowerName );
__declspec(implementation_key(349)) long cFunction::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(350)) long cFunction::ConvertToUser ( _bstr_t Name );
__declspec(implementation_key(351)) long cFunction::Count ( long FuncType );
__declspec(implementation_key(352)) long cFunction::Delete ( _bstr_t Name );
__declspec(implementation_key(353)) cFunctionRSPtr cFunction::GetFuncRS ( );
__declspec(implementation_key(354)) cFunctionTHPtr cFunction::GetFuncTH ( );
__declspec(implementation_key(355)) long cFunction::GetNameList ( long * NumberNames, SAFEARRAY * * MyName, long FuncType );
__declspec(implementation_key(356)) long cFunction::GetTypeOAPI ( _bstr_t Name, long * FuncType, long * AddType );
__declspec(implementation_key(357)) long cFunction::GetValues ( _bstr_t Name, long * NumberItems, SAFEARRAY * * MyTime, SAFEARRAY * * Value );
__declspec(implementation_key(358)) long cFunctionRS::GetNTC2008 ( _bstr_t Name, long * ParamsOption, double * Latitude, double * Longitude, long * Island, long * LimitState, long * UsageClass, double * NomLife, double * PeakAccel, double * F0, double * Tcs, long * SpecType, long * SoilType, long * Topography, double * hRatio, double * Damping, double * q );
__declspec(implementation_key(359)) long cFunctionRS::SetNTC2008 ( _bstr_t Name, long ParamsOption, double Latitude, double Longitude, long Island, long LimitState, long UsageClass, double NomLife, double PeakAccel, double F0, double Tcs, long SpecType, long SoilType, long Topography, double hRatio, double Damping, double q );
__declspec(implementation_key(360)) long cFunctionRS::GetNTC2018 ( _bstr_t Name, long * ParamsOption, double * Latitude, double * Longitude, long * Island, long * LimitState, long * UsageClass, double * NomLife, double * PeakAccel, double * F0, double * Tcs, long * SpecType, long * SoilType, long * Topography, double * hRatio, double * Damping, double * q );
__declspec(implementation_key(361)) long cFunctionRS::SetNTC2018 ( _bstr_t Name, long ParamsOption, double Latitude, double Longitude, long Island, long LimitState, long UsageClass, double NomLife, double PeakAccel, double F0, double Tcs, long SpecType, long SoilType, long Topography, double hRatio, double Damping, double q );
__declspec(implementation_key(362)) long cCaseDirectHistoryLinear::GetLoads ( _bstr_t Name, long * NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * Func, SAFEARRAY * * SF, SAFEARRAY * * Tf, SAFEARRAY * * At, SAFEARRAY * * CSys, SAFEARRAY * * Ang );
__declspec(implementation_key(363)) long cCaseDirectHistoryNonlinear::GetLoads ( _bstr_t Name, long * NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * Func, SAFEARRAY * * SF, SAFEARRAY * * Tf, SAFEARRAY * * At, SAFEARRAY * * CSys, SAFEARRAY * * Ang );
__declspec(implementation_key(364)) long cCaseHyperStatic::GetBaseCase ( _bstr_t Name, BSTR * HyperStaticCase );
__declspec(implementation_key(365)) long cCaseHyperStatic::SetBaseCase ( _bstr_t Name, _bstr_t HyperStaticCase );
__declspec(implementation_key(366)) long cCaseHyperStatic::SetCase ( _bstr_t Name );
__declspec(implementation_key(367)) long cCaseModalEigen::GetInitialCase ( _bstr_t Name, BSTR * InitialCase );
__declspec(implementation_key(368)) long cCaseModalEigen::GetLoads ( _bstr_t Name, long * NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * TargetPar, SAFEARRAY * * StaticCorrect );
__declspec(implementation_key(369)) long cCaseModalEigen::GetNumberModes ( _bstr_t Name, long * MaxModes, long * MinModes );
__declspec(implementation_key(370)) long cCaseModalEigen::GetParameters ( _bstr_t Name, double * EigenShiftFreq, double * EigenCutOff, double * EigenTol, long * AllowAutoFreqShift );
__declspec(implementation_key(371)) long cCaseModalEigen::SetCase ( _bstr_t Name );
__declspec(implementation_key(372)) long cCaseModalEigen::SetInitialCase ( _bstr_t Name, _bstr_t InitialCase );
__declspec(implementation_key(373)) long cCaseModalEigen::SetLoads ( _bstr_t Name, long NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * TargetPar, SAFEARRAY * * StaticCorrect );
__declspec(implementation_key(374)) long cCaseModalEigen::SetNumberModes ( _bstr_t Name, long MaxModes, long MinModes );
__declspec(implementation_key(375)) long cCaseModalEigen::SetParameters ( _bstr_t Name, double EigenShiftFreq, double EigenCutOff, double EigenTol, long AllowAutoFreqShift );
__declspec(implementation_key(376)) long cCaseModalHistoryLinear::GetLoads ( _bstr_t Name, long * NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * Func, SAFEARRAY * * SF, SAFEARRAY * * Tf, SAFEARRAY * * At, SAFEARRAY * * CSys, SAFEARRAY * * Ang );
__declspec(implementation_key(377)) long cCaseModalHistoryLinear::SetCase ( _bstr_t Name );
__declspec(implementation_key(378)) long cCaseModalHistoryLinear::SetLoads ( _bstr_t Name, long NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * Func, SAFEARRAY * * SF, SAFEARRAY * * Tf, SAFEARRAY * * At, SAFEARRAY * * CSys, SAFEARRAY * * Ang );
__declspec(implementation_key(379)) long cCaseModalHistoryNonlinear::GetLoads ( _bstr_t Name, long * NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * Func, SAFEARRAY * * SF, SAFEARRAY * * Tf, SAFEARRAY * * At, SAFEARRAY * * CSys, SAFEARRAY * * Ang );
__declspec(implementation_key(380)) long cCaseModalRitz::GetInitialCase ( _bstr_t Name, BSTR * InitialCase );
__declspec(implementation_key(381)) long cCaseModalRitz::GetLoads ( _bstr_t Name, long * NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * RitzMaxCyc, SAFEARRAY * * TargetPar );
__declspec(implementation_key(382)) long cCaseModalRitz::GetNumberModes ( _bstr_t Name, long * MaxModes, long * MinModes );
__declspec(implementation_key(383)) long cCaseModalRitz::SetCase ( _bstr_t Name );
__declspec(implementation_key(384)) long cCaseModalRitz::SetInitialCase ( _bstr_t Name, _bstr_t InitialCase );
__declspec(implementation_key(385)) long cCaseModalRitz::SetLoads ( _bstr_t Name, long NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * RitzMaxCyc, SAFEARRAY * * TargetPar );
__declspec(implementation_key(386)) long cCaseModalRitz::SetNumberModes ( _bstr_t Name, long MaxModes, long MinModes );
__declspec(implementation_key(387)) long cCaseResponseSpectrum::GetDampConstant ( _bstr_t Name, double * Damp );
__declspec(implementation_key(388)) long cCaseResponseSpectrum::GetDampInterpolated ( _bstr_t Name, long * DampType, long * NumberItems, SAFEARRAY * * Time, SAFEARRAY * * Damp );
__declspec(implementation_key(389)) long cCaseResponseSpectrum::GetDampOverrides ( _bstr_t Name, long * NumberItems, SAFEARRAY * * Mode, SAFEARRAY * * Damp );
__declspec(implementation_key(390)) long cCaseResponseSpectrum::GetDampProportional ( _bstr_t Name, long * DampType, double * DampA, double * DampB, double * DampF1, double * DampF2, double * DampD1, double * DampD2 );
__declspec(implementation_key(391)) long cCaseResponseSpectrum::GetDampType ( _bstr_t Name, long * DampType );
__declspec(implementation_key(392)) long cCaseResponseSpectrum::GetDiaphragmEccentricityOverride ( _bstr_t Name, long * Num, SAFEARRAY * * Diaph, SAFEARRAY * * Eccen );
__declspec(implementation_key(393)) long cCaseResponseSpectrum::GetDirComb ( _bstr_t Name, long * MyType, double * SF );
__declspec(implementation_key(394)) long cCaseResponseSpectrum::GetEccentricity ( _bstr_t Name, double * Eccen );
__declspec(implementation_key(395)) long cCaseResponseSpectrum::GetLoads ( _bstr_t Name, long * NumberLoads, SAFEARRAY * * LoadName, SAFEARRAY * * Func, SAFEARRAY * * SF, SAFEARRAY * * CSys, SAFEARRAY * * Ang );
__declspec(implementation_key(396)) long cCaseResponseSpectrum::GetModalCase ( _bstr_t Name, BSTR * ModalCase );
__declspec(implementation_key(397)) long cCaseResponseSpectrum::GetModalComb ( _bstr_t Name, long * MyType, double * F1, double * F2, double * Td );
__declspec(implementation_key(398)) long cCaseResponseSpectrum::GetModalComb_1 ( _bstr_t Name, long * MyType, double * F1, double * F2, long * PeriodicRigidCombType, double * Td );
__declspec(implementation_key(399)) long cCaseResponseSpectrum::SetCase ( _bstr_t Name );
__declspec(implementation_key(400)) long cCaseResponseSpectrum::SetEccentricity ( _bstr_t Name, double Eccen );
__declspec(implementation_key(401)) long cCaseResponseSpectrum::SetLoads ( _bstr_t Name, long NumberLoads, SAFEARRAY * * LoadName, SAFEARRAY * * Func, SAFEARRAY * * SF, SAFEARRAY * * CSys, SAFEARRAY * * Ang );
__declspec(implementation_key(402)) long cCaseResponseSpectrum::SetModalCase ( _bstr_t Name, _bstr_t ModalCase );
__declspec(implementation_key(403)) long cCaseStaticLinear::GetInitialCase ( _bstr_t Name, BSTR * InitialCase );
__declspec(implementation_key(404)) long cCaseStaticLinear::GetLoads ( _bstr_t Name, long * NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * SF );
__declspec(implementation_key(405)) long cCaseStaticLinear::SetCase ( _bstr_t Name );
__declspec(implementation_key(406)) long cCaseStaticLinear::SetInitialCase ( _bstr_t Name, _bstr_t InitialCase );
__declspec(implementation_key(407)) long cCaseStaticLinear::SetLoads ( _bstr_t Name, long NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * SF );
__declspec(implementation_key(408)) long cCaseStaticNonlinear::GetGeometricNonlinearity ( _bstr_t Name, long * NLGeomType );
__declspec(implementation_key(409)) long cCaseStaticNonlinear::GetHingeUnloading ( _bstr_t Name, long * UnloadType );
__declspec(implementation_key(410)) long cCaseStaticNonlinear::GetInitialCase ( _bstr_t Name, BSTR * InitialCase );
__declspec(implementation_key(411)) long cCaseStaticNonlinear::GetLoadApplication ( _bstr_t Name, long * LoadControl, long * DispType, double * Displ, long * Monitor, long * DOF, BSTR * PointName, BSTR * GDispl );
__declspec(implementation_key(412)) long cCaseStaticNonlinear::GetLoads ( _bstr_t Name, long * NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * SF );
__declspec(implementation_key(413)) long cCaseStaticNonlinear::GetModalCase ( _bstr_t Name, BSTR * ModalCase );
__declspec(implementation_key(414)) long cCaseStaticNonlinear::GetResultsSaved ( _bstr_t Name, VARIANT_BOOL * SaveMultipleSteps, long * MinSavedStates, long * MaxSavedStates, VARIANT_BOOL * PositiveOnly );
__declspec(implementation_key(415)) long cCaseStaticNonlinear::GetSolControlParameters ( _bstr_t Name, long * MaxTotalSteps, long * MaxFailedSubSteps, long * MaxIterCS, long * MaxIterNR, double * TolConvD, VARIANT_BOOL * UseEventStepping, double * TolEventD, long * MaxLineSearchPerIter, double * TolLineSearch, double * LineSearchStepFact );
__declspec(implementation_key(416)) long cCaseStaticNonlinear::GetTargetForceParameters ( _bstr_t Name, double * TolConvF, long * MaxIter, double * AccelFact, VARIANT_BOOL * NoStop );
__declspec(implementation_key(417)) long cCaseStaticNonlinear::SetCase ( _bstr_t Name );
__declspec(implementation_key(418)) long cCaseStaticNonlinear::SetGeometricNonlinearity ( _bstr_t Name, long NLGeomType );
__declspec(implementation_key(419)) long cCaseStaticNonlinear::SetHingeUnloading ( _bstr_t Name, long UnloadType );
__declspec(implementation_key(420)) long cCaseStaticNonlinear::SetInitialCase ( _bstr_t Name, _bstr_t InitialCase );
__declspec(implementation_key(421)) long cCaseStaticNonlinear::SetLoadApplication ( _bstr_t Name, long LoadControl, long DispType, double Displ, long Monitor, long DOF, _bstr_t PointName, _bstr_t GDispl );
__declspec(implementation_key(422)) long cCaseStaticNonlinear::SetLoads ( _bstr_t Name, long NumberLoads, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * SF );
__declspec(implementation_key(423)) long cCaseStaticNonlinear::SetModalCase ( _bstr_t Name, _bstr_t ModalCase );
__declspec(implementation_key(424)) long cCaseStaticNonlinear::SetResultsSaved ( _bstr_t Name, VARIANT_BOOL SaveMultipleSteps, long MinSavedStates, long MaxSavedStates, VARIANT_BOOL PositiveOnly );
__declspec(implementation_key(425)) long cCaseStaticNonlinear::SetSolControlParameters ( _bstr_t Name, long MaxTotalSteps, long MaxFailedSubSteps, long MaxIterCS, long MaxIterNR, double TolConvD, VARIANT_BOOL UseEventStepping, double TolEventD, long MaxLineSearchPerIter, double TolLineSearch, double LineSearchStepFact );
__declspec(implementation_key(426)) long cCaseStaticNonlinear::SetTargetForceParameters ( _bstr_t Name, double TolConvF, long MaxIter, double AccelFact, VARIANT_BOOL NoStop );
__declspec(implementation_key(427)) long cCaseStaticNonlinear::GetMassSource ( _bstr_t Name, BSTR * mSource );
__declspec(implementation_key(428)) long cCaseStaticNonlinear::SetMassSource ( _bstr_t Name, _bstr_t mSource );
__declspec(implementation_key(429)) long cCaseStaticNonlinearStaged::GetGeometricNonlinearity ( _bstr_t Name, long * NLGeomType );
__declspec(implementation_key(430)) long cCaseStaticNonlinearStaged::GetHingeUnloading ( _bstr_t Name, long * UnloadType );
__declspec(implementation_key(431)) long cCaseStaticNonlinearStaged::GetInitialCase ( _bstr_t Name, BSTR * InitialCase );
__declspec(implementation_key(432)) long cCaseStaticNonlinearStaged::GetMaterialNonlinearity ( _bstr_t Name, VARIANT_BOOL * TimeDepMatProp );
__declspec(implementation_key(433)) long cCaseStaticNonlinearStaged::GetResultsSaved ( _bstr_t Name, long * StagedSaveOption, long * StagedMinSteps, long * StagedMinStepsTD );
__declspec(implementation_key(434)) long cCaseStaticNonlinearStaged::GetSolControlParameters ( _bstr_t Name, long * MaxTotalSteps, long * MaxFailedSubSteps, long * MaxIterCS, long * MaxIterNR, double * TolConvD, VARIANT_BOOL * UseEventStepping, double * TolEventD, long * MaxLineSearchPerIter, double * TolLineSearch, double * LineSearchStepFact );
__declspec(implementation_key(435)) long cCaseStaticNonlinearStaged::GetStageData ( _bstr_t Name, long * Stage, long * NumberOperations, SAFEARRAY * * operation, SAFEARRAY * * GroupName, SAFEARRAY * * Age, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * SF );
__declspec(implementation_key(436)) long cCaseStaticNonlinearStaged::GetStageData_1 ( _bstr_t Name, long * Stage, long * NumberOperations, SAFEARRAY * * operation, SAFEARRAY * * ObjectType, SAFEARRAY * * ObjectName, SAFEARRAY * * Age, SAFEARRAY * * MyType, SAFEARRAY * * MyName, SAFEARRAY * * SF );
__declspec(implementation_key(437)) long cCaseStaticNonlinearStaged::GetStageDefinitions ( _bstr_t Name, long * NumberStages, SAFEARRAY * * Duration, SAFEARRAY * * Comment );
__declspec(implementation_key(438)) long cCaseStaticNonlinearStaged::GetStageDefinitions_1 ( _bstr_t Name, long * NumberStages, SAFEARRAY * * Duration, SAFEARRAY * * Output, SAFEARRAY * * OutputName, SAFEARRAY * * Comment );
__declspec(implementation_key(439)) long cCaseStaticNonlinearStaged::GetTargetForceParameters ( _bstr_t Name, double * TolConvF, long * MaxIter, double * AccelFact, VARIANT_BOOL * NoStop );
__declspec(implementation_key(440)) long cCaseStaticNonlinearStaged::SetCase ( _bstr_t Name );
__declspec(implementation_key(441)) long cCaseStaticNonlinearStaged::SetGeometricNonlinearity ( _bstr_t Name, long NLGeomType );
__declspec(implementation_key(442)) long cCaseStaticNonlinearStaged::SetHingeUnloading ( _bstr_t Name, long UnloadType );
__declspec(implementation_key(443)) long cCaseStaticNonlinearStaged::SetInitialCase ( _bstr_t Name, _bstr_t InitialCase );
__declspec(implementation_key(444)) long cCaseStaticNonlinearStaged::SetMaterialNonlinearity ( _bstr_t Name, VARIANT_BOOL TimeDepMatProp );
__declspec(implementation_key(445)) long cCaseStaticNonlinearStaged::SetResultsSaved ( _bstr_t Name, long StagedSaveOption, long StagedMinSteps, long StagedMinStepsTD );
__declspec(implementation_key(446)) long cCaseStaticNonlinearStaged::SetSolControlParameters ( _bstr_t Name, long MaxTotalSteps, long MaxFailedSubSteps, long MaxIterCS, long MaxIterNR, double TolConvD, VARIANT_BOOL UseEventStepping, double TolEventD, long MaxLineSearchPerIter, double TolLineSearch, double LineSearchStepFact );
__declspec(implementation_key(447)) long cCaseStaticNonlinearStaged::SetStageData ( _bstr_t Name, long Stage, long NumberOperations, SAFEARRAY * * operation, SAFEARRAY * * GroupName, SAFEARRAY * * Age, SAFEARRAY * * LoadType, SAFEARRAY * * LoadName, SAFEARRAY * * SF );
__declspec(implementation_key(448)) long cCaseStaticNonlinearStaged::SetStageData_1 ( _bstr_t Name, long Stage, long NumberOperations, SAFEARRAY * * operation, SAFEARRAY * * ObjectType, SAFEARRAY * * ObjectName, SAFEARRAY * * Age, SAFEARRAY * * MyType, SAFEARRAY * * MyName, SAFEARRAY * * SF );
__declspec(implementation_key(449)) long cCaseStaticNonlinearStaged::SetStageDefinitions ( _bstr_t Name, long NumberStages, SAFEARRAY * * Duration, SAFEARRAY * * Comment );
__declspec(implementation_key(450)) long cCaseStaticNonlinearStaged::SetStageDefinitions_1 ( _bstr_t Name, long NumberStages, SAFEARRAY * * Duration, SAFEARRAY * * Output, SAFEARRAY * * OutputName, SAFEARRAY * * Comment );
__declspec(implementation_key(451)) long cCaseStaticNonlinearStaged::SetTargetForceParameters ( _bstr_t Name, double TolConvF, long MaxIter, double AccelFact, VARIANT_BOOL NoStop );
__declspec(implementation_key(452)) long cCaseStaticNonlinearStaged::GetMassSource ( _bstr_t Name, BSTR * mSource );
__declspec(implementation_key(453)) long cCaseStaticNonlinearStaged::SetMassSource ( _bstr_t Name, _bstr_t mSource );
__declspec(implementation_key(454)) long cCaseStaticNonlinearStaged::GetStageData_2 ( _bstr_t Name, long * Stage, long * NumberOperations, SAFEARRAY * * operation, SAFEARRAY * * ObjectType, SAFEARRAY * * ObjectName, SAFEARRAY * * Age, SAFEARRAY * * MyType, SAFEARRAY * * MyName, SAFEARRAY * * SF );
__declspec(implementation_key(455)) long cCaseStaticNonlinearStaged::GetStageDefinitions_2 ( _bstr_t Name, long * NumberStages, SAFEARRAY * * Duration, SAFEARRAY * * Output, SAFEARRAY * * OutputName, SAFEARRAY * * Comment );
__declspec(implementation_key(456)) long cCaseStaticNonlinearStaged::SetStageData_2 ( _bstr_t Name, long Stage, long NumberOperations, SAFEARRAY * * operation, SAFEARRAY * * ObjectType, SAFEARRAY * * ObjectName, SAFEARRAY * * Age, SAFEARRAY * * MyType, SAFEARRAY * * MyName, SAFEARRAY * * SF );
__declspec(implementation_key(457)) long cCaseStaticNonlinearStaged::SetStageDefinitions_2 ( _bstr_t Name, long NumberStages, SAFEARRAY * * Duration, SAFEARRAY * * Output, SAFEARRAY * * OutputName, SAFEARRAY * * Comment );
__declspec(implementation_key(458)) cCaseBucklingPtr cLoadCases::GetBuckling ( );
__declspec(implementation_key(459)) long cLoadCases::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(460)) long cLoadCases::Count ( enum eLoadCaseType CaseType );
__declspec(implementation_key(461)) long cLoadCases::Delete ( _bstr_t Name );
__declspec(implementation_key(462)) cCaseDirectHistoryLinearPtr cLoadCases::GetDirHistLinear ( );
__declspec(implementation_key(463)) cCaseDirectHistoryNonlinearPtr cLoadCases::GetDirHistNonlinear ( );
__declspec(implementation_key(464)) long cLoadCases::GetNameList ( long * NumberNames, SAFEARRAY * * MyName, enum eLoadCaseType CaseType );
__declspec(implementation_key(465)) long cLoadCases::GetTypeOAPI_1 ( _bstr_t Name, enum eLoadCaseType * CaseType, long * SubType, enum eLoadPatternType * DesignType, long * DesignTypeOption, long * Auto );
__declspec(implementation_key(466)) cCaseHyperStaticPtr cLoadCases::GetHyperStatic ( );
__declspec(implementation_key(467)) cCaseModalEigenPtr cLoadCases::GetModalEigen ( );
__declspec(implementation_key(468)) cCaseModalRitzPtr cLoadCases::GetModalRitz ( );
__declspec(implementation_key(469)) cCaseModalHistoryLinearPtr cLoadCases::GetModHistLinear ( );
__declspec(implementation_key(470)) cCaseModalHistoryNonlinearPtr cLoadCases::GetModHistNonlinear ( );
__declspec(implementation_key(471)) cCaseResponseSpectrumPtr cLoadCases::GetResponseSpectrum ( );
__declspec(implementation_key(472)) long cLoadCases::SetDesignType ( _bstr_t Name, long DesignTypeOption, enum eLoadPatternType DesignType );
__declspec(implementation_key(473)) cCaseStaticLinearPtr cLoadCases::GetStaticLinear ( );
__declspec(implementation_key(474)) cCaseStaticNonlinearPtr cLoadCases::GetStaticNonlinear ( );
__declspec(implementation_key(475)) cCaseStaticNonlinearStagedPtr cLoadCases::GetStaticNonlinearStaged ( );
__declspec(implementation_key(476)) long cLoadCases::GetTypeOAPI ( _bstr_t Name, enum eLoadCaseType * CaseType, long * SubType );
__declspec(implementation_key(477)) long cAutoSeismic::GetIBC2006 ( _bstr_t Name, long * DirFlag, double * Eccen, long * PeriodFlag, long * CtType, double * UserT, VARIANT_BOOL * UserZ, double * TopZ, double * BottomZ, double * R, double * Omega, double * Cd, double * I, long * IBC2006Option, double * Latitude, double * Longitude, BSTR * ZipCode, double * Ss, double * S1, double * Tl, long * SiteClass, double * Fa, double * Fv );
__declspec(implementation_key(478)) long cAutoSeismic::SetIBC2006 ( _bstr_t Name, long DirFlag, double Eccen, long PeriodFlag, long CtType, double UserT, VARIANT_BOOL UserZ, double TopZ, double BottomZ, double R, double Omega, double Cd, double I, long IBC2006Option, double Latitude, double Longitude, _bstr_t ZipCode, double Ss, double S1, double Tl, long SiteClass, double Fa, double Fv );
__declspec(implementation_key(479)) long cAutoSeismic::GetASCE716 ( _bstr_t Name, SAFEARRAY * * nDir, double * Eccen, long * PeriodFlag, long * CtType, double * UserT, VARIANT_BOOL * UserZ, double * TopZ, double * BottomZ, double * R, double * Omega, double * Cd, double * I, double * Ss, double * S1, double * Tl, long * SiteClass, double * Fa, double * Fv );
__declspec(implementation_key(480)) long cAutoSeismic::SetASCE716 ( _bstr_t Name, SAFEARRAY * * nDir, double Eccen, long PeriodFlag, long CtType, double UserT, VARIANT_BOOL UserZ, double TopZ, double BottomZ, double R, double Omega, double Cd, double I, double Ss, double S1, double Tl, long SiteClass, double Fa, double Fv );
__declspec(implementation_key(481)) long cLoadPatterns::Add ( _bstr_t Name, enum eLoadPatternType MyType, double SelfWTMultiplier, VARIANT_BOOL AddAnalysisCase );
__declspec(implementation_key(482)) cAutoSeismicPtr cLoadPatterns::GetAutoSeismic ( );
__declspec(implementation_key(483)) cAutoWindPtr cLoadPatterns::GetAutoWind ( );
__declspec(implementation_key(484)) long cLoadPatterns::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(485)) long cLoadPatterns::Count ( );
__declspec(implementation_key(486)) long cLoadPatterns::Delete ( _bstr_t Name );
__declspec(implementation_key(487)) long cLoadPatterns::GetAutoSeismicCode ( _bstr_t Name, BSTR * CodeName );
__declspec(implementation_key(488)) long cLoadPatterns::GetAutoWindCode ( _bstr_t Name, BSTR * CodeName );
__declspec(implementation_key(489)) long cLoadPatterns::GetLoadType ( _bstr_t Name, enum eLoadPatternType * MyType );
__declspec(implementation_key(490)) long cLoadPatterns::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(491)) long cLoadPatterns::GetSelfWTMultiplier ( _bstr_t Name, double * SelfWTMultiplier );
__declspec(implementation_key(492)) long cLoadPatterns::SetLoadType ( _bstr_t Name, enum eLoadPatternType MyType );
__declspec(implementation_key(493)) long cLoadPatterns::SetSelfWTMultiplier ( _bstr_t Name, double SelfWTMultiplier );
__declspec(implementation_key(494)) long cPropArea::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(495)) long cPropArea::Count ( long PropType );
__declspec(implementation_key(496)) long cPropArea::Delete ( _bstr_t Name );
__declspec(implementation_key(497)) long cPropArea::GetModifiers ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(498)) long cPropArea::GetNameList ( long * NumberNames, SAFEARRAY * * MyName, long PropType );
__declspec(implementation_key(499)) long cPropArea::GetShellDesign ( _bstr_t Name, BSTR * MatProp, long * SteelLayoutOption, double * DesignCoverTopDir1, double * DesignCoverTopDir2, double * DesignCoverBotDir1, double * DesignCoverBotDir2 );
__declspec(implementation_key(500)) long cPropArea::GetShellLayer ( _bstr_t Name, long * NumberLayers, SAFEARRAY * * LayerName, SAFEARRAY * * Dist, SAFEARRAY * * Thickness, SAFEARRAY * * MatProp, SAFEARRAY * * Nonlinear, SAFEARRAY * * MatAng, SAFEARRAY * * NumIntegrationPts );
__declspec(implementation_key(501)) long cPropArea::GetShellLayer_1 ( _bstr_t Name, long * NumberLayers, SAFEARRAY * * LayerName, SAFEARRAY * * Dist, SAFEARRAY * * Thickness, SAFEARRAY * * MyType, SAFEARRAY * * NumIntegrationPts, SAFEARRAY * * MatProp, SAFEARRAY * * MatAng, SAFEARRAY * * S11Type, SAFEARRAY * * S22Type, SAFEARRAY * * S12Type );
__declspec(implementation_key(502)) long cPropArea::GetShellLayer_2 ( _bstr_t Name, long * NumberLayers, SAFEARRAY * * LayerName, SAFEARRAY * * Dist, SAFEARRAY * * Thickness, SAFEARRAY * * MyType, SAFEARRAY * * NumIntegrationPts, SAFEARRAY * * MatProp, SAFEARRAY * * MatAng, SAFEARRAY * * MatBehavior, SAFEARRAY * * S11Type, SAFEARRAY * * S22Type, SAFEARRAY * * S12Type );
__declspec(implementation_key(503)) long cPropArea::GetTypeOAPI ( _bstr_t Name, long * PropType );
__declspec(implementation_key(504)) long cPropArea::SetModifiers ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(505)) long cPropArea::SetShellDesign ( _bstr_t Name, _bstr_t MatProp, long SteelLayoutOption, double DesignCoverTopDir1, double DesignCoverTopDir2, double DesignCoverBotDir1, double DesignCoverBotDir2 );
__declspec(implementation_key(506)) long cPropArea::SetShellLayer ( _bstr_t Name, long NumberLayers, SAFEARRAY * * LayerName, SAFEARRAY * * Dist, SAFEARRAY * * Thickness, SAFEARRAY * * MatProp, SAFEARRAY * * Nonlinear, SAFEARRAY * * MatAng, SAFEARRAY * * NumIntegrationPts );
__declspec(implementation_key(507)) long cPropArea::SetShellLayer_1 ( _bstr_t Name, long * NumberLayers, SAFEARRAY * * LayerName, SAFEARRAY * * Dist, SAFEARRAY * * Thickness, SAFEARRAY * * MyType, SAFEARRAY * * NumIntegrationPts, SAFEARRAY * * MatProp, SAFEARRAY * * MatAng, SAFEARRAY * * S11Type, SAFEARRAY * * S22Type, SAFEARRAY * * S12Type );
__declspec(implementation_key(508)) long cPropArea::SetShellLayer_2 ( _bstr_t Name, long * NumberLayers, SAFEARRAY * * LayerName, SAFEARRAY * * Dist, SAFEARRAY * * Thickness, SAFEARRAY * * MyType, SAFEARRAY * * NumIntegrationPts, SAFEARRAY * * MatProp, SAFEARRAY * * MatAng, SAFEARRAY * * MatBehavior, SAFEARRAY * * S11Type, SAFEARRAY * * S22Type, SAFEARRAY * * S12Type );
__declspec(implementation_key(509)) long cPropArea::GetDeck ( _bstr_t Name, enum eDeckType * DeckType, enum eShellType * ShellType, BSTR * MatProp, double * Thickness, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(510)) long cPropArea::GetDeckFilled ( _bstr_t Name, double * SlabDepth, double * RibDepth, double * RibWidthTop, double * RibWidthBot, double * RibSpacing, double * ShearThickness, double * UnitWeight, double * ShearStudDia, double * ShearStudHt, double * ShearStudFu );
__declspec(implementation_key(511)) long cPropArea::GetDeckSolidSlab ( _bstr_t Name, double * SlabDepth, double * ShearStudDia, double * ShearStudHt, double * ShearStudFu );
__declspec(implementation_key(512)) long cPropArea::GetDeckUnfilled ( _bstr_t Name, double * RibDepth, double * RibWidthTop, double * RibWidthBot, double * RibSpacing, double * ShearThickness, double * UnitWeight );
__declspec(implementation_key(513)) long cPropArea::GetSlab ( _bstr_t Name, enum eSlabType * SlabType, enum eShellType * ShellType, BSTR * MatProp, double * Thickness, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(514)) long cPropArea::GetSlabRibbed ( _bstr_t Name, double * OverallDepth, double * SlabThickness, double * StemWidthTop, double * StemWidthBot, double * RibSpacing, long * RibsParallelTo );
__declspec(implementation_key(515)) long cPropArea::GetSlabWaffle ( _bstr_t Name, double * OverallDepth, double * SlabThickness, double * StemWidthTop, double * StemWidthBot, double * RibSpacingDir1, double * RibSpacingDir2 );
__declspec(implementation_key(516)) long cPropArea::GetWall ( _bstr_t Name, enum eWallPropType * WallPropType, enum eShellType * ShellType, BSTR * MatProp, double * Thickness, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(517)) long cPropArea::GetWallAutoSelectList ( _bstr_t Name, SAFEARRAY * * AutoSelectList, BSTR * StartingProperty );
__declspec(implementation_key(518)) long cPropArea::SetDeck ( _bstr_t Name, enum eDeckType DeckType, enum eShellType ShellType, _bstr_t MatProp, double Thickness, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(519)) long cPropArea::SetDeckFilled ( _bstr_t Name, double SlabDepth, double RibDepth, double RibWidthTop, double RibWidthBot, double RibSpacing, double ShearThickness, double UnitWeight, double ShearStudDia, double ShearStudHt, double ShearStudFu );
__declspec(implementation_key(520)) long cPropArea::SetDeckSolidSlab ( _bstr_t Name, double SlabDepth, double ShearStudDia, double ShearStudHt, double ShearStudFu );
__declspec(implementation_key(521)) long cPropArea::SetDeckUnfilled ( _bstr_t Name, double RibDepth, double RibWidthTop, double RibWidthBot, double RibSpacing, double ShearThickness, double UnitWeight );
__declspec(implementation_key(522)) long cPropArea::SetSlab ( _bstr_t Name, enum eSlabType SlabType, enum eShellType ShellType, _bstr_t MatProp, double Thickness, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(523)) long cPropArea::SetSlabRibbed ( _bstr_t Name, double OverallDepth, double SlabThickness, double StemWidthTop, double StemWidthBot, double RibSpacing, long RibsParallelTo );
__declspec(implementation_key(524)) long cPropArea::SetSlabWaffle ( _bstr_t Name, double OverallDepth, double SlabThickness, double StemWidthTop, double StemWidthBot, double RibSpacingDir1, double RibSpacingDir2 );
__declspec(implementation_key(525)) long cPropArea::SetWall ( _bstr_t Name, enum eWallPropType WallPropType, enum eShellType ShellType, _bstr_t MatProp, double Thickness, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(526)) long cPropArea::SetWallAutoSelectList ( _bstr_t Name, SAFEARRAY * AutoSelectList, _bstr_t StartingProperty );
__declspec(implementation_key(527)) long cPropArea::GetDeck_1 ( _bstr_t Name, enum eDeckType * DeckType, BSTR * SlabFillMatProp, BSTR * DeckMatProp, double * SlabDepth, double * RibDepth, double * RibWidthTop, double * RibWidthBot, double * RibSpacing, double * DeckShearThickness, double * DeckUnitWeight, double * ShearStudDia, double * ShearStudHs, double * ShearStudFu, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(528)) long cPropArea::SetDeck_1 ( _bstr_t Name, enum eDeckType DeckType, _bstr_t SlabFillMatProp, _bstr_t DeckMatProp, double SlabDepth, double RibDepth, double RibWidthTop, double RibWidthBot, double RibSpacing, double DeckShearThickness, double DeckUnitWeight, double ShearStudDia, double ShearStudHs, double ShearStudFu, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(529)) long cPropLink::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(530)) long cPropLink::Count ( enum eLinkPropType PropType );
__declspec(implementation_key(531)) long cPropLink::Delete ( _bstr_t Name );
__declspec(implementation_key(532)) long cPropLink::GetDamper ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * C, SAFEARRAY * * CExp, double * DJ2, double * DJ3, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(533)) long cPropLink::GetFrictionIsolator ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * Slow, SAFEARRAY * * Fast, SAFEARRAY * * Rate, SAFEARRAY * * Radius, double * Damping, double * DJ2, double * DJ3, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(534)) long cPropLink::GetGap ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * Dis, double * DJ2, double * DJ3, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(535)) long cPropLink::GetHook ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * Dis, double * DJ2, double * DJ3, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(536)) long cPropLink::GetLinear ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Ke, SAFEARRAY * * Ce, double * DJ2, double * DJ3, VARIANT_BOOL * KeCoupled, VARIANT_BOOL * CeCoupled, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(537)) long cPropLink::GetMultiLinearElastic ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, double * DJ2, double * DJ3, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(538)) long cPropLink::GetMultiLinearPlastic ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, double * DJ2, double * DJ3, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(539)) long cPropLink::GetMultiLinearPoints ( _bstr_t Name, long DOF, long * NumberPoints, SAFEARRAY * * F, SAFEARRAY * * D, long * MyType, double * A1, double * A2, double * B1, double * B2, double * Eta );
__declspec(implementation_key(540)) long cPropLink::GetNameList ( long * NumberNames, SAFEARRAY * * MyName, enum eLinkPropType PropType );
__declspec(implementation_key(541)) long cPropLink::GetPDelta ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(542)) long cPropLink::GetPlasticWen ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * Yield, SAFEARRAY * * Ratio, SAFEARRAY * * Exp, double * DJ2, double * DJ3, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(543)) long cPropLink::GetRubberIsolator ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * Yield, SAFEARRAY * * Ratio, double * DJ2, double * DJ3, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(544)) long cPropLink::GetSpringData ( _bstr_t Name, double * DefinedForThisLength, double * DefinedForThisArea );
__declspec(implementation_key(545)) long cPropLink::GetTCFrictionIsolator ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * Slow, SAFEARRAY * * Fast, SAFEARRAY * * Rate, SAFEARRAY * * Radius, SAFEARRAY * * SlowT, SAFEARRAY * * FastT, SAFEARRAY * * RateT, double * Kt, double * Dis, double * Dist, double * Damping, double * DJ2, double * DJ3, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(546)) long cPropLink::GetTypeOAPI ( _bstr_t Name, enum eLinkPropType * PropType );
__declspec(implementation_key(547)) long cPropLink::GetWeightAndMass ( _bstr_t Name, double * W, double * M, double * R1, double * R2, double * R3 );
__declspec(implementation_key(548)) long cPropLink::SetDamper ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * C, SAFEARRAY * * CExp, double DJ2, double DJ3, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(549)) long cPropLink::SetFrictionIsolator ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * Slow, SAFEARRAY * * Fast, SAFEARRAY * * Rate, SAFEARRAY * * Radius, double Damping, double DJ2, double DJ3, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(550)) long cPropLink::SetGap ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * Dis, double DJ2, double DJ3, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(551)) long cPropLink::SetHook ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * Dis, double DJ2, double DJ3, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(552)) long cPropLink::SetLinear ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Ke, SAFEARRAY * * Ce, double DJ2, double DJ3, VARIANT_BOOL KeCoupled, VARIANT_BOOL CeCoupled, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(553)) long cPropLink::SetMultiLinearElastic ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, double DJ2, double DJ3, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(554)) long cPropLink::SetMultiLinearPlastic ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, double DJ2, double DJ3, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(555)) long cPropLink::SetMultiLinearPoints ( _bstr_t Name, long DOF, long NumberPoints, SAFEARRAY * * F, SAFEARRAY * * D, long MyType, double A1, double A2, double B1, double B2, double Eta );
__declspec(implementation_key(556)) long cPropLink::SetPDelta ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(557)) long cPropLink::SetPlasticWen ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * Yield, SAFEARRAY * * Ratio, SAFEARRAY * * Exp, double DJ2, double DJ3, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(558)) long cPropLink::SetRubberIsolator ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * Yield, SAFEARRAY * * Ratio, double DJ2, double DJ3, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(559)) long cPropLink::SetSpringData ( _bstr_t Name, double DefinedForThisLength, double DefinedForThisArea );
__declspec(implementation_key(560)) long cPropLink::SetTCFrictionIsolator ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * Slow, SAFEARRAY * * Fast, SAFEARRAY * * Rate, SAFEARRAY * * Radius, SAFEARRAY * * SlowT, SAFEARRAY * * FastT, SAFEARRAY * * RateT, double Kt, double Dis, double Dist, double Damping, double DJ2, double DJ3, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(561)) long cPropLink::SetWeightAndMass ( _bstr_t Name, double W, double M, double R1, double R2, double R3 );
__declspec(implementation_key(562)) long cPropLink::GetDamperBilinear ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * C, SAFEARRAY * * CY, SAFEARRAY * * ForceLimit, double * DJ2, double * DJ3, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(563)) long cPropLink::GetDamperFrictionSpring ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * K1, SAFEARRAY * * K2, SAFEARRAY * * u0, SAFEARRAY * * us, SAFEARRAY * * Direction, double * DJ2, double * DJ3, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(564)) long cPropLink::SetDamperBilinear ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * C, SAFEARRAY * * CY, SAFEARRAY * * ForceLimit, double DJ2, double DJ3, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(565)) long cPropLink::SetDamperFrictionSpring ( _bstr_t Name, SAFEARRAY * * DOF, SAFEARRAY * * Fixed, SAFEARRAY * * Nonlinear, SAFEARRAY * * Ke, SAFEARRAY * * Ce, SAFEARRAY * * K, SAFEARRAY * * K1, SAFEARRAY * * K2, SAFEARRAY * * u0, SAFEARRAY * * us, SAFEARRAY * * Direction, double DJ2, double DJ3, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(566)) long cPropLink::GetAcceptanceCriteria ( _bstr_t Name, long * AcceptanceType, VARIANT_BOOL * Symmetric, SAFEARRAY * * Active, SAFEARRAY * * IOPos, SAFEARRAY * * LSPos, SAFEARRAY * * CPPos, SAFEARRAY * * IONeg, SAFEARRAY * * LSNeg, SAFEARRAY * * CPNeg );
__declspec(implementation_key(567)) long cPropLink::SetAcceptanceCriteria ( _bstr_t Name, long AcceptanceType, VARIANT_BOOL Symmetric, SAFEARRAY * * Active, SAFEARRAY * * IOPos, SAFEARRAY * * LSPos, SAFEARRAY * * CPPos, SAFEARRAY * * IONeg, SAFEARRAY * * LSNeg, SAFEARRAY * * CPNeg );
__declspec(implementation_key(568)) long cPropRebar::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(569)) long cPropRebar::GetRebarProps ( _bstr_t Name, double * Area, double * Diameter );
__declspec(implementation_key(570)) long cPropRebar::GetRebarPropsWithGUID ( _bstr_t Name, double * Area, double * Diameter, BSTR * MyGUID );
__declspec(implementation_key(571)) long cPropRebar::GetNameListWithData ( long * NumberNames, SAFEARRAY * * MyName, SAFEARRAY * * Areas, SAFEARRAY * * Diameters, SAFEARRAY * * MyGUID );
__declspec(implementation_key(572)) long cPropTendon::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(573)) long cPropTendon::Count ( );
__declspec(implementation_key(574)) long cPropTendon::Delete ( _bstr_t Name );
__declspec(implementation_key(575)) long cPropTendon::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(576)) long cPropTendon::GetProp ( _bstr_t Name, BSTR * MatProp, long * ModelingOption, double * Area, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(577)) long cPropTendon::SetProp ( _bstr_t Name, _bstr_t MatProp, long ModelingOption, double Area, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(578)) long cPropFrame::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(579)) long cPropFrame::Count ( enum eFramePropType PropType );
__declspec(implementation_key(580)) long cPropFrame::Delete ( _bstr_t Name );
__declspec(implementation_key(581)) long cPropFrame::GetAngle ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(582)) long cPropFrame::GetAutoSelectSteel ( _bstr_t Name, long * NumberItems, SAFEARRAY * * SectName, BSTR * AutoStartSection, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(583)) long cPropFrame::GetChannel ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(584)) long cPropFrame::GetCircle ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(585)) long cPropFrame::GetCoverPlatedI ( _bstr_t Name, BSTR * SectName, double * FyTopFlange, double * FyWeb, double * FyBotFlange, double * Tc, double * Bc, BSTR * MatPropTop, double * Tcb, double * Bcb, BSTR * MatPropBot, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(586)) long cPropFrame::GetDblAngle ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * Dis, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(587)) long cPropFrame::GetDblChannel ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * Dis, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(588)) long cPropFrame::GetGeneral ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Area, double * As2, double * As3, double * Torsion, double * I22, double * I33, double * S22, double * S33, double * Z22, double * Z33, double * R22, double * R33, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(589)) long cPropFrame::GetISection ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * T2b, double * Tfb, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(590)) long cPropFrame::GetModifiers ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(591)) long cPropFrame::GetNameInPropFile ( _bstr_t Name, BSTR * NameInFile, BSTR * FileName, BSTR * MatProp, enum eFramePropType * PropType );
__declspec(implementation_key(592)) long cPropFrame::GetNameList ( long * NumberNames, SAFEARRAY * * MyName, enum eFramePropType PropType );
__declspec(implementation_key(593)) long cPropFrame::GetNonPrismatic ( _bstr_t Name, long * NumberItems, SAFEARRAY * * StartSec, SAFEARRAY * * EndSec, SAFEARRAY * * MyLength, SAFEARRAY * * MyType, SAFEARRAY * * EI33, SAFEARRAY * * EI22, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(594)) long cPropFrame::GetPipe ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * Tw, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(595)) long cPropFrame::GetPropFileNameList ( _bstr_t FileName, long * NumberNames, SAFEARRAY * * MyName, SAFEARRAY * * MyPropType, enum eFramePropType PropType );
__declspec(implementation_key(596)) long cPropFrame::GetRebarBeam ( _bstr_t Name, BSTR * MatPropLong, BSTR * MatPropConfine, double * CoverTop, double * CoverBot, double * TopLeftArea, double * TopRightArea, double * BotLeftArea, double * BotRightArea );
__declspec(implementation_key(597)) long cPropFrame::GetRebarColumn ( _bstr_t Name, BSTR * MatPropLong, BSTR * MatPropConfine, long * Pattern, long * ConfineType, double * Cover, long * NumberCBars, long * NumberR3Bars, long * NumberR2Bars, BSTR * RebarSize, BSTR * TieSize, double * TieSpacingLongit, long * Number2DirTieBars, long * Number3DirTieBars, VARIANT_BOOL * ToBeDesigned );
__declspec(implementation_key(598)) long cPropFrame::GetRectangle ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(599)) long cPropFrame::GetSectProps ( _bstr_t Name, double * Area, double * As2, double * As3, double * Torsion, double * I22, double * I33, double * S22, double * S33, double * Z22, double * Z33, double * R22, double * R33 );
__declspec(implementation_key(600)) long cPropFrame::GetTee ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(601)) long cPropFrame::GetTube ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(602)) long cPropFrame::GetTypeOAPI ( _bstr_t Name, enum eFramePropType * PropType );
__declspec(implementation_key(603)) long cPropFrame::GetTypeRebar ( _bstr_t Name, long * MyType );
__declspec(implementation_key(604)) long cPropFrame::ImportProp ( _bstr_t Name, _bstr_t MatProp, _bstr_t FileName, _bstr_t PropName, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(605)) cPropFrameSDShapePtr cPropFrame::GetSDShape ( );
__declspec(implementation_key(606)) long cPropFrame::SetAngle ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(607)) long cPropFrame::SetAutoSelectSteel ( _bstr_t Name, long NumberItems, SAFEARRAY * * SectName, _bstr_t AutoStartSection, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(608)) long cPropFrame::SetChannel ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(609)) long cPropFrame::SetCircle ( _bstr_t Name, _bstr_t MatProp, double T3, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(610)) long cPropFrame::SetCoverPlatedI ( _bstr_t Name, _bstr_t SectName, double FyTopFlange, double FyWeb, double FyBotFlange, double Tc, double Bc, _bstr_t MatPropTop, double Tcb, double Bcb, _bstr_t MatPropBot, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(611)) long cPropFrame::SetDblAngle ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double Dis, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(612)) long cPropFrame::SetDblChannel ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double Dis, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(613)) long cPropFrame::SetGeneral ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Area, double As2, double As3, double Torsion, double I22, double I33, double S22, double S33, double Z22, double Z33, double R22, double R33, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(614)) long cPropFrame::SetISection ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double T2b, double Tfb, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(615)) long cPropFrame::SetModifiers ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(616)) long cPropFrame::SetNonPrismatic ( _bstr_t Name, long NumberItems, SAFEARRAY * * StartSec, SAFEARRAY * * EndSec, SAFEARRAY * * MyLength, SAFEARRAY * * MyType, SAFEARRAY * * EI33, SAFEARRAY * * EI22, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(617)) long cPropFrame::SetPipe ( _bstr_t Name, _bstr_t MatProp, double T3, double Tw, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(618)) long cPropFrame::SetRebarBeam ( _bstr_t Name, _bstr_t MatPropLong, _bstr_t MatPropConfine, double CoverTop, double CoverBot, double TopLeftArea, double TopRightArea, double BotLeftArea, double BotRightArea );
__declspec(implementation_key(619)) long cPropFrame::SetRebarColumn ( _bstr_t Name, _bstr_t MatPropLong, _bstr_t MatPropConfine, long Pattern, long ConfineType, double Cover, long NumberCBars, long NumberR3Bars, long NumberR2Bars, _bstr_t RebarSize, _bstr_t TieSize, double TieSpacingLongit, long Number2DirTieBars, long Number3DirTieBars, VARIANT_BOOL ToBeDesigned );
__declspec(implementation_key(620)) long cPropFrame::SetRectangle ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(621)) long cPropFrame::SetTee ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(622)) long cPropFrame::SetTube ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(623)) long cPropFrame::GetSDSection ( _bstr_t Name, BSTR * MatProp, long * NumberItems, SAFEARRAY * * ShapeName, SAFEARRAY * * MyType, long * DesignType, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(624)) long cPropFrame::SetSDSection ( _bstr_t Name, _bstr_t MatProp, long DesignType, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(625)) long cPropFrame::GetColdC ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Thickness, double * Radius, double * LipDepth, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(626)) long cPropFrame::GetColdHat ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Thickness, double * Radius, double * LipDepth, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(627)) long cPropFrame::GetColdZ ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Thickness, double * Radius, double * LipDepth, double * LipAngle, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(628)) long cPropFrame::GetPrecastI ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, SAFEARRAY * * B, SAFEARRAY * * D, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(629)) long cPropFrame::SetColdC ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Thickness, double Radius, double LipDepth, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(630)) long cPropFrame::SetColdHat ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Thickness, double Radius, double LipDepth, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(631)) long cPropFrame::SetColdZ ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Thickness, double Radius, double LipDepth, double LipAngle, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(632)) long cPropFrame::SetPrecastI ( _bstr_t Name, _bstr_t MatProp, SAFEARRAY * * B, SAFEARRAY * * D, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(633)) long cPropFrame::GetMaterial ( _bstr_t Name, BSTR * MatProp );
__declspec(implementation_key(634)) long cPropFrame::SetMaterial ( _bstr_t Name, _bstr_t MatProp );
__declspec(implementation_key(635)) long cPropFrame::GetTrapezoidal ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * T2b, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(636)) long cPropFrame::SetTrapezoidal ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double T2b, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(637)) long cPropFrame::GetTube_1 ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * Radius, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(638)) long cPropFrame::SetTube_1 ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double Radius, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(639)) long cPropFrame::GetAngle_1 ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * FilletRadius, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(640)) long cPropFrame::SetAngle_1 ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double FilletRadius, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(641)) long cPropFrame::GetChannel_2 ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * FilletRadius, VARIANT_BOOL * MirrorAbout2, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(642)) long cPropFrame::SetChannel_2 ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double FilletRadius, VARIANT_BOOL MirrorAbout2, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(643)) long cPropFrame::GetDblAngle_2 ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * Dis, double * FilletRadius, VARIANT_BOOL * MirrorAbout3, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(644)) long cPropFrame::SetDblAngle_2 ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double Dis, double FilletRadius, VARIANT_BOOL MirrorAbout3, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(645)) long cPropFrame::GetDblChannel_1 ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * Dis, double * FilletRadius, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(646)) long cPropFrame::SetDblChannel_1 ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double Dis, double FilletRadius, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(647)) long cPropFrame::GetISection_1 ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * T2b, double * Tfb, double * FilletRadius, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(648)) long cPropFrame::SetISection_1 ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double T2b, double Tfb, double FilletRadius, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(649)) long cPropFrame::GetTee_1 ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * FilletRadius, VARIANT_BOOL * MirrorAbout3, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(650)) long cPropFrame::SetTee_1 ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double FilletRadius, VARIANT_BOOL MirrorAbout3, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(651)) long cPropFrame::GetConcreteL ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * TwC, double * TwT, VARIANT_BOOL * MirrorAbout2, VARIANT_BOOL * MirrorAbout3, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(652)) long cPropFrame::GetConcreteTee ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * TwF, double * TwT, VARIANT_BOOL * MirrorAbout3, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(653)) long cPropFrame::GetPlate ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(654)) long cPropFrame::GetRod ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(655)) long cPropFrame::GetSteelAngle ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * R, VARIANT_BOOL * MirrorAbout2, VARIANT_BOOL * MirrorAbout3, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(656)) long cPropFrame::GetSteelTee ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * R, VARIANT_BOOL * MirrorAbout3, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(657)) long cPropFrame::SetConcreteL ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double TwC, double TwT, VARIANT_BOOL MirrorAbout2, VARIANT_BOOL MirrorAbout3, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(658)) long cPropFrame::SetConcreteTee ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double TwF, double TwT, VARIANT_BOOL MirrorAbout3, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(659)) long cPropFrame::SetPlate ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(660)) long cPropFrame::SetRod ( _bstr_t Name, _bstr_t MatProp, double T3, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(661)) long cPropFrame::SetSteelAngle ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double R, VARIANT_BOOL MirrorAbout2, VARIANT_BOOL MirrorAbout3, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(662)) long cPropFrame::SetSteelTee ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double R, VARIANT_BOOL MirrorAbout3, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(663)) long cPropFrame::GetAllFrameProperties ( long * NumberNames, SAFEARRAY * * MyName, SAFEARRAY * * PropType, SAFEARRAY * * T3, SAFEARRAY * * T2, SAFEARRAY * * Tf, SAFEARRAY * * Tw, SAFEARRAY * * T2b, SAFEARRAY * * Tfb );
__declspec(implementation_key(664)) long cPropFrame::GetAllFrameProperties_2 ( long * NumberNames, SAFEARRAY * * MyName, SAFEARRAY * * PropType, SAFEARRAY * * T3, SAFEARRAY * * T2, SAFEARRAY * * Tf, SAFEARRAY * * Tw, SAFEARRAY * * T2b, SAFEARRAY * * Tfb, SAFEARRAY * * Area );
__declspec(implementation_key(665)) long cPropFrame::GetRebarColumn_1 ( _bstr_t Name, BSTR * MatPropLong, BSTR * MatPropConfine, long * Pattern, long * ConfineType, double * Cover, long * NumberCBars, long * NumberR3Bars, long * NumberR2Bars, BSTR * RebarSize, BSTR * TieSize, double * TieSpacingLongit, long * Number2DirTieBars, long * Number3DirTieBars, VARIANT_BOOL * ToBeDesigned, BSTR * LongitCornerRebarSize, double * LongitRebarArea, double * LongitCornerRebarArea );
__declspec(implementation_key(666)) long cPropFrame::GetConcreteBox ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(667)) long cPropFrame::SetConcreteBox ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(668)) long cPropFrame::GetConcreteCross ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(669)) long cPropFrame::SetConcreteCross ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(670)) long cPropFrame::GetConcretePipe ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * Diameter, double * Tw, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(671)) long cPropFrame::SetConcretePipe ( _bstr_t Name, _bstr_t MatProp, double Diameter, double Tw, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(672)) long cPropFrame::GetDblAngle_1 ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, double * Dis, VARIANT_BOOL * MirrorAbout3, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(673)) long cPropFrame::SetDblAngle_1 ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, double Dis, VARIANT_BOOL MirrorAbout3, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(674)) long cPropFrame::GetChannel_1 ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Tf, double * Tw, VARIANT_BOOL * MirrorAbout2, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(675)) long cPropFrame::SetChannel_1 ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Tf, double Tw, VARIANT_BOOL MirrorAbout2, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(676)) long cPropFrame::GetColdC_1 ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Thickness, double * Radius, double * LipDepth, VARIANT_BOOL * MirrorAbout2, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(677)) long cPropFrame::SetColdC_1 ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Thickness, double Radius, double LipDepth, VARIANT_BOOL MirrorAbout2, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(678)) long cPropFrame::GetColdHat_1 ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Thickness, double * Radius, double * LipDepth, VARIANT_BOOL * MirrorAbout2, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(679)) long cPropFrame::SetColdHat_1 ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Thickness, double Radius, double LipDepth, VARIANT_BOOL MirrorAbout2, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(680)) long cPropFrame::GetColdZ_1 ( _bstr_t Name, BSTR * FileName, BSTR * MatProp, double * T3, double * T2, double * Thickness, double * Radius, double * LipDepth, double * LipAngle, VARIANT_BOOL * MirrorAbout2, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(681)) long cPropFrame::SetColdZ_1 ( _bstr_t Name, _bstr_t MatProp, double T3, double T2, double Thickness, double Radius, double LipDepth, double LipAngle, VARIANT_BOOL MirrorAbout2, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(682)) long cPropFrameSDShape::GetAngle ( _bstr_t Name, _bstr_t ShapeName, BSTR * MatProp, BSTR * PropName, long * color, double * XCenter, double * YCenter, double * H, double * Bf, double * Tf, double * Tw, double * Rotation );
__declspec(implementation_key(683)) long cPropFrameSDShape::GetISection ( _bstr_t Name, _bstr_t ShapeName, BSTR * MatProp, BSTR * PropName, long * color, double * XCenter, double * YCenter, double * H, double * Bf, double * Tf, double * Tw, double * Bfb, double * Tfb, double * Rotation );
__declspec(implementation_key(684)) long cPropFrameSDShape::GetReinfCircle ( _bstr_t Name, _bstr_t ShapeName, double * XCenter, double * YCenter, double * Diameter, long * NumBars, double * Rotation, BSTR * RebarSize, BSTR * MatRebar );
__declspec(implementation_key(685)) long cPropFrameSDShape::GetReinfCorner ( _bstr_t Name, _bstr_t ShapeName, long * NumberItems, SAFEARRAY * * PointNum, SAFEARRAY * * RebarSize );
__declspec(implementation_key(686)) long cPropFrameSDShape::GetReinfEdge ( _bstr_t Name, _bstr_t ShapeName, long * NumberItems, SAFEARRAY * * EdgeNum, SAFEARRAY * * RebarSize, SAFEARRAY * * Spacing, SAFEARRAY * * Cover );
__declspec(implementation_key(687)) long cPropFrameSDShape::GetReinfLine ( _bstr_t Name, _bstr_t ShapeName, double * X1, double * Y1, double * X2, double * Y2, double * Spacing, BSTR * RebarSize, VARIANT_BOOL * EndBars, BSTR * MatRebar );
__declspec(implementation_key(688)) long cPropFrameSDShape::GetReinfRectangular ( _bstr_t Name, _bstr_t ShapeName, double * XCenter, double * YCenter, double * H, double * W, double * Rotation, BSTR * MatRebar );
__declspec(implementation_key(689)) long cPropFrameSDShape::GetReinfSingle ( _bstr_t Name, _bstr_t ShapeName, double * XCenter, double * YCenter, BSTR * RebarSize, BSTR * MatRebar );
__declspec(implementation_key(690)) long cPropFrameSDShape::GetSolidCircle ( _bstr_t Name, _bstr_t ShapeName, BSTR * MatProp, BSTR * SSOverwrite, long * color, double * XCenter, double * YCenter, double * Diameter, VARIANT_BOOL * Reinf, long * NumberBars, double * Rotation, double * Cover, BSTR * RebarSize, BSTR * MatRebar );
__declspec(implementation_key(691)) long cPropFrameSDShape::GetSolidRect ( _bstr_t Name, _bstr_t ShapeName, BSTR * MatProp, BSTR * SSOverwrite, long * color, double * XCenter, double * YCenter, double * H, double * W, double * Rotation, VARIANT_BOOL * Reinf, BSTR * MatRebar );
__declspec(implementation_key(692)) long cPropFrameSDShape::GetTee ( _bstr_t Name, _bstr_t ShapeName, BSTR * MatProp, BSTR * PropName, long * color, double * XCenter, double * YCenter, double * H, double * Bf, double * Tf, double * Tw, double * Rotation );
__declspec(implementation_key(693)) long cPropFrameSDShape::GetConcreteL ( _bstr_t Name, _bstr_t ShapeName, BSTR * MatProp, BSTR * PropName, long * color, double * XCenter, double * YCenter, double * H, double * Bf, double * Tf, double * Tw, double * Rotation, VARIANT_BOOL * MirrorAbout2, VARIANT_BOOL * MirrorAbout3 );
__declspec(implementation_key(694)) long cPropFrameSDShape::GetConcreteTee ( _bstr_t Name, _bstr_t ShapeName, BSTR * MatProp, BSTR * PropName, long * color, double * XCenter, double * YCenter, double * H, double * Bf, double * Tf, double * Tw, double * Rotation, VARIANT_BOOL * MirrorAbout3 );
__declspec(implementation_key(695)) long cPropMaterial::AddMaterial ( BSTR * Name, enum eMatType MatType, _bstr_t Region, _bstr_t Standard, _bstr_t Grade, _bstr_t UserName );
__declspec(implementation_key(696)) long cPropMaterial::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(697)) long cPropMaterial::Count ( enum eMatType MatType );
__declspec(implementation_key(698)) long cPropMaterial::Delete ( _bstr_t Name );
__declspec(implementation_key(699)) long cPropMaterial::GetDamping ( _bstr_t Name, double * ModalRatio, double * ViscousMassCoeff, double * ViscousStiffCoeff, double * HystereticMassCoeff, double * HystereticStiffCoeff, double Temp );
__declspec(implementation_key(700)) long cPropMaterial::GetMassSource ( long * MyOption, long * NumberLoads, SAFEARRAY * * LoadPat, SAFEARRAY * * SF );
__declspec(implementation_key(701)) long cPropMaterial::GetMaterial ( _bstr_t Name, enum eMatType * MatType, long * color, BSTR * notes, BSTR * GUID );
__declspec(implementation_key(702)) long cPropMaterial::GetMPAnisotropic ( _bstr_t Name, SAFEARRAY * * E, SAFEARRAY * * U, SAFEARRAY * * A, SAFEARRAY * * G, double Temp );
__declspec(implementation_key(703)) long cPropMaterial::GetMPIsotropic ( _bstr_t Name, double * E, double * U, double * A, double * G, double Temp );
__declspec(implementation_key(704)) long cPropMaterial::GetMPOrthotropic ( _bstr_t Name, SAFEARRAY * * E, SAFEARRAY * * U, SAFEARRAY * * A, SAFEARRAY * * G, double Temp );
__declspec(implementation_key(705)) long cPropMaterial::GetMPUniaxial ( _bstr_t Name, double * E, double * A, double Temp );
__declspec(implementation_key(706)) long cPropMaterial::GetNameList ( long * NumberNames, SAFEARRAY * * MyName, enum eMatType MatType );
__declspec(implementation_key(707)) long cPropMaterial::GetOConcrete ( _bstr_t Name, double * Fc, VARIANT_BOOL * IsLightweight, double * FcsFactor, long * SSType, long * SSHysType, double * StrainAtFc, double * StrainUltimate, double * FrictionAngle, double * DilatationalAngle, double Temp );
__declspec(implementation_key(708)) long cPropMaterial::GetOConcrete_1 ( _bstr_t Name, double * Fc, VARIANT_BOOL * IsLightweight, double * FcsFactor, long * SSType, long * SSHysType, double * StrainAtFc, double * StrainUltimate, double * FinalSlope, double * FrictionAngle, double * DilatationalAngle, double Temp );
__declspec(implementation_key(709)) long cPropMaterial::GetONoDesign ( _bstr_t Name, double * FrictionAngle, double * DilatationalAngle, double Temp );
__declspec(implementation_key(710)) long cPropMaterial::GetORebar ( _bstr_t Name, double * FY, double * Fu, double * EFy, double * EFu, long * SSType, long * SSHysType, double * StrainAtHardening, double * StrainUltimate, VARIANT_BOOL * UseCaltransSSDefaults, double Temp );
__declspec(implementation_key(711)) long cPropMaterial::GetORebar_1 ( _bstr_t Name, double * FY, double * Fu, double * EFy, double * EFu, long * SSType, long * SSHysType, double * StrainAtHardening, double * StrainUltimate, double * FinalSlope, VARIANT_BOOL * UseCaltransSSDefaults, double Temp );
__declspec(implementation_key(712)) long cPropMaterial::GetOSteel ( _bstr_t Name, double * FY, double * Fu, double * EFy, double * EFu, long * SSType, long * SSHysType, double * StrainAtHardening, double * StrainAtMaxStress, double * StrainAtRupture, double Temp );
__declspec(implementation_key(713)) long cPropMaterial::GetOSteel_1 ( _bstr_t Name, double * FY, double * Fu, double * EFy, double * EFu, long * SSType, long * SSHysType, double * StrainAtHardening, double * StrainAtMaxStress, double * StrainAtRupture, double * FinalSlope, double Temp );
__declspec(implementation_key(714)) long cPropMaterial::GetOTendon ( _bstr_t Name, double * FY, double * Fu, long * SSType, long * SSHysType, double Temp );
__declspec(implementation_key(715)) long cPropMaterial::GetOTendon_1 ( _bstr_t Name, double * FY, double * Fu, long * SSType, long * SSHysType, double * FinalSlope, double Temp );
__declspec(implementation_key(716)) long cPropMaterial::GetSSCurve ( _bstr_t Name, long * NumberPoints, SAFEARRAY * * PointID, SAFEARRAY * * Strain, SAFEARRAY * * Stress, _bstr_t SectName, double RebarArea, double Temp );
__declspec(implementation_key(717)) long cPropMaterial::GetTemp ( _bstr_t Name, long * NumberItems, SAFEARRAY * * Temp );
__declspec(implementation_key(718)) long cPropMaterial::GetTypeOAPI ( _bstr_t Name, enum eMatType * MatType, long * SymType );
__declspec(implementation_key(719)) long cPropMaterial::GetWeightAndMass ( _bstr_t Name, double * W, double * M, double Temp );
__declspec(implementation_key(720)) long cPropMaterial::SetDamping ( _bstr_t Name, double ModalRatio, double ViscousMassCoeff, double ViscousStiffCoeff, double HystereticMassCoeff, double HystereticStiffCoeff, double Temp );
__declspec(implementation_key(721)) long cPropMaterial::SetMassSource ( long MyOption, long NumberLoads, SAFEARRAY * * LoadPat, SAFEARRAY * * SF );
__declspec(implementation_key(722)) long cPropMaterial::SetMaterial ( _bstr_t Name, enum eMatType MatType, long color, _bstr_t notes, _bstr_t GUID );
__declspec(implementation_key(723)) long cPropMaterial::SetMPAnisotropic ( _bstr_t Name, SAFEARRAY * * E, SAFEARRAY * * U, SAFEARRAY * * A, SAFEARRAY * * G, double Temp );
__declspec(implementation_key(724)) long cPropMaterial::SetMPIsotropic ( _bstr_t Name, double E, double U, double A, double Temp );
__declspec(implementation_key(725)) long cPropMaterial::SetMPOrthotropic ( _bstr_t Name, SAFEARRAY * * E, SAFEARRAY * * U, SAFEARRAY * * A, SAFEARRAY * * G, double Temp );
__declspec(implementation_key(726)) long cPropMaterial::SetMPUniaxial ( _bstr_t Name, double E, double A, double Temp );
__declspec(implementation_key(727)) long cPropMaterial::SetOConcrete ( _bstr_t Name, double Fc, VARIANT_BOOL IsLightweight, double FcsFactor, long SSType, long SSHysType, double StrainAtFc, double StrainUltimate, double FrictionAngle, double DilatationalAngle, double Temp );
__declspec(implementation_key(728)) long cPropMaterial::SetOConcrete_1 ( _bstr_t Name, double Fc, VARIANT_BOOL IsLightweight, double FcsFactor, long SSType, long SSHysType, double StrainAtFc, double StrainUltimate, double FinalSlope, double FrictionAngle, double DilatationalAngle, double Temp );
__declspec(implementation_key(729)) long cPropMaterial::SetONoDesign ( _bstr_t Name, double FrictionAngle, double DilatationalAngle, double Temp );
__declspec(implementation_key(730)) long cPropMaterial::SetORebar ( _bstr_t Name, double FY, double Fu, double EFy, double EFu, long SSType, long SSHysType, double StrainAtHardening, double StrainUltimate, VARIANT_BOOL UseCaltransSSDefaults, double Temp );
__declspec(implementation_key(731)) long cPropMaterial::SetORebar_1 ( _bstr_t Name, double FY, double Fu, double EFy, double EFu, long SSType, long SSHysType, double StrainAtHardening, double StrainUltimate, double FinalSlope, VARIANT_BOOL UseCaltransSSDefaults, double Temp );
__declspec(implementation_key(732)) long cPropMaterial::SetOSteel ( _bstr_t Name, double FY, double Fu, double EFy, double EFu, long SSType, long SSHysType, double StrainAtHardening, double StrainAtMaxStress, double StrainAtRupture, double Temp );
__declspec(implementation_key(733)) long cPropMaterial::SetOSteel_1 ( _bstr_t Name, double FY, double Fu, double EFy, double EFu, long SSType, long SSHysType, double StrainAtHardening, double StrainAtMaxStress, double StrainAtRupture, double FinalSlope, double Temp );
__declspec(implementation_key(734)) long cPropMaterial::SetOTendon ( _bstr_t Name, double FY, double Fu, long SSType, long SSHysType, double Temp );
__declspec(implementation_key(735)) long cPropMaterial::SetOTendon_1 ( _bstr_t Name, double FY, double Fu, long SSType, long SSHysType, double FinalSlope, double Temp );
__declspec(implementation_key(736)) long cPropMaterial::SetSSCurve ( _bstr_t Name, long NumberPoints, SAFEARRAY * * PointID, SAFEARRAY * * Strain, SAFEARRAY * * Stress, double Temp );
__declspec(implementation_key(737)) long cPropMaterial::SetTemp ( _bstr_t Name, long NumberItems, SAFEARRAY * * Temp );
__declspec(implementation_key(738)) long cPropMaterial::SetWeightAndMass ( _bstr_t Name, long MyOption, double Value, double Temp );
__declspec(implementation_key(739)) cPropMaterialTDPtr cPropMaterial::GetTimeDep ( );
__declspec(implementation_key(740)) long cPropMaterial::GetMassSource_1 ( VARIANT_BOOL * IncludeElements, VARIANT_BOOL * IncludeAddedMass, VARIANT_BOOL * IncludeLoads, long * NumberLoads, SAFEARRAY * * LoadPat, SAFEARRAY * * SF );
__declspec(implementation_key(741)) long cPropMaterial::SetMassSource_1 ( VARIANT_BOOL * IncludeElements, VARIANT_BOOL * IncludeAddedMass, VARIANT_BOOL * IncludeLoads, long NumberLoads, SAFEARRAY * * LoadPat, SAFEARRAY * * SF );
__declspec(implementation_key(742)) long cPropAreaSpring::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(743)) long cPropAreaSpring::Delete ( _bstr_t Name );
__declspec(implementation_key(744)) long cPropAreaSpring::GetAreaSpringProp ( _bstr_t Name, double * U1, double * U2, double * U3, long * NonlinearOption3, long * SpringOption, BSTR * SoilProfile, double * EndLengthRatio, double * Period, long * color, BSTR * notes, BSTR * iGUID );
__declspec(implementation_key(745)) long cPropAreaSpring::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(746)) long cPropAreaSpring::SetAreaSpringProp ( _bstr_t Name, double U1, double U2, double U3, long NonlinearOption3, long SpringOption, _bstr_t SoilProfile, double EndLengthRatio, double Period, long color, _bstr_t notes, _bstr_t iGUID );
__declspec(implementation_key(747)) long cPropLineSpring::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(748)) long cPropLineSpring::Delete ( _bstr_t Name );
__declspec(implementation_key(749)) long cPropLineSpring::GetLineSpringProp ( _bstr_t Name, double * U1, double * U2, double * U3, double * R1, long * NonlinearOption2, long * NonlinearOption3, long * color, BSTR * notes, BSTR * iGUID );
__declspec(implementation_key(750)) long cPropLineSpring::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(751)) long cPropLineSpring::SetLineSpringProp ( _bstr_t Name, double U1, double U2, double U3, double R1, long NonlinearOption2, long NonlinearOption3, long color, _bstr_t notes, _bstr_t iGUID );
__declspec(implementation_key(752)) long cPropPointSpring::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(753)) long cPropPointSpring::Delete ( _bstr_t Name );
__declspec(implementation_key(754)) long cPropPointSpring::GetLinks ( _bstr_t Name, long * NumberLinks, SAFEARRAY * * LinkNames, SAFEARRAY * * LinkAxialDirs, SAFEARRAY * * LinkAngles );
__declspec(implementation_key(755)) long cPropPointSpring::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(756)) long cPropPointSpring::GetPointSpringProp ( _bstr_t Name, long * SpringOption, SAFEARRAY * * K, BSTR * CSys, BSTR * SoilProfile, BSTR * Footing, double * Period, long * color, BSTR * notes, BSTR * iGUID );
__declspec(implementation_key(757)) long cPropPointSpring::SetLinks ( _bstr_t Name, long NumberLinks, SAFEARRAY * * LinkNames, SAFEARRAY * * LinkAxialDirs, SAFEARRAY * * LinkAngles );
__declspec(implementation_key(758)) long cPropPointSpring::SetPointSpringProp ( _bstr_t Name, long SpringOption, SAFEARRAY * * K, _bstr_t CSys, _bstr_t SoilProfile, _bstr_t Footing, double Period, long color, _bstr_t notes, _bstr_t iGUID );
__declspec(implementation_key(759)) long cDesignForces::BeamDesignForces ( _bstr_t Name, long * NumberResults, SAFEARRAY * * FrameName, SAFEARRAY * * ComboName, SAFEARRAY * * Station, SAFEARRAY * * P, SAFEARRAY * * V2, SAFEARRAY * * V3, SAFEARRAY * * T, SAFEARRAY * * M2, SAFEARRAY * * M3, enum eItemType ItemType );
__declspec(implementation_key(760)) long cDesignForces::BraceDesignForces ( _bstr_t Name, long * NumberResults, SAFEARRAY * * FrameName, SAFEARRAY * * ComboName, SAFEARRAY * * Station, SAFEARRAY * * P, SAFEARRAY * * V2, SAFEARRAY * * V3, SAFEARRAY * * T, SAFEARRAY * * M2, SAFEARRAY * * M3, enum eItemType ItemType );
__declspec(implementation_key(761)) long cDesignForces::ColumnDesignForces ( _bstr_t Name, long * NumberResults, SAFEARRAY * * FrameName, SAFEARRAY * * ComboName, SAFEARRAY * * Station, SAFEARRAY * * P, SAFEARRAY * * V2, SAFEARRAY * * V3, SAFEARRAY * * T, SAFEARRAY * * M2, SAFEARRAY * * M3, enum eItemType ItemType );
__declspec(implementation_key(762)) long cDesignForces::PierDesignForces ( _bstr_t InputPierLabel, _bstr_t InputStoryName, long * NumberResults, SAFEARRAY * * Story, SAFEARRAY * * PierLabel, SAFEARRAY * * ComboName, SAFEARRAY * * Location, SAFEARRAY * * P, SAFEARRAY * * V2, SAFEARRAY * * V3, SAFEARRAY * * T, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(763)) long cDesignForces::SpandrelDesignForces ( _bstr_t InputSpandrelLabel, _bstr_t InputStoryName, long * NumberResults, SAFEARRAY * * Story, SAFEARRAY * * SpandrelLabel, SAFEARRAY * * ComboName, SAFEARRAY * * Location, SAFEARRAY * * P, SAFEARRAY * * V2, SAFEARRAY * * V3, SAFEARRAY * * T, SAFEARRAY * * M2, SAFEARRAY * * M3 );
__declspec(implementation_key(764)) cDesignForcesPtr cDesignResults::GetDesignForces ( );
__declspec(implementation_key(765)) long cDesignCompositeBeam::DeleteResults ( );
__declspec(implementation_key(766)) long cDesignCompositeBeam::GetCode ( BSTR * CodeName );
__declspec(implementation_key(767)) long cDesignCompositeBeam::GetComboDeflection ( long * NumberItems, SAFEARRAY * * MyName );
__declspec(implementation_key(768)) long cDesignCompositeBeam::GetComboStrength ( long * NumberItems, SAFEARRAY * * MyName );
__declspec(implementation_key(769)) long cDesignCompositeBeam::GetDesignSection ( _bstr_t Name, BSTR * PropName );
__declspec(implementation_key(770)) long cDesignCompositeBeam::GetGroup ( long * NumberItems, SAFEARRAY * * MyName );
__declspec(implementation_key(771)) VARIANT_BOOL cDesignCompositeBeam::GetResultsAvailable ( );
__declspec(implementation_key(772)) long cDesignCompositeBeam::GetSummaryResults ( _bstr_t Name, long * NumberItems, SAFEARRAY * * DesignSect, SAFEARRAY * * BeamFy, SAFEARRAY * * StudDia, SAFEARRAY * * StudLayout, SAFEARRAY * * BeamShored, SAFEARRAY * * BeamCamber, SAFEARRAY * * PassFail, SAFEARRAY * * ReacLeft, SAFEARRAY * * ReacRt, SAFEARRAY * * MMaxNeg, SAFEARRAY * * MMaxPos, SAFEARRAY * * PCC, SAFEARRAY * * OverallRatio, SAFEARRAY * * StudRatio, SAFEARRAY * * StrPMRat, SAFEARRAY * * ConstPMRat, SAFEARRAY * * StrShrRat, SAFEARRAY * * ConShrRat, SAFEARRAY * * PCDLDfRat, SAFEARRAY * * SDLDfRat, SAFEARRAY * * LLDfRat, SAFEARRAY * * TotCamDfRat, SAFEARRAY * * FreqRat, SAFEARRAY * * MDampRat, enum eItemType ItemType );
__declspec(implementation_key(773)) long cDesignCompositeBeam::GetTargetDispl ( long * NumberItems, SAFEARRAY * * LoadCase, SAFEARRAY * * Point, SAFEARRAY * * Displ, VARIANT_BOOL * Active );
__declspec(implementation_key(774)) long cDesignCompositeBeam::GetTargetPeriod ( long * NumberItems, BSTR * ModalCase, SAFEARRAY * * Mode, SAFEARRAY * * Period, VARIANT_BOOL * Active );
__declspec(implementation_key(775)) long cDesignCompositeBeam::ResetOverwrites ( );
__declspec(implementation_key(776)) long cDesignCompositeBeam::SetAutoSelectNull ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(777)) long cDesignCompositeBeam::SetCode ( _bstr_t CodeName );
__declspec(implementation_key(778)) long cDesignCompositeBeam::SetComboDeflection ( _bstr_t Name, VARIANT_BOOL Selected );
__declspec(implementation_key(779)) long cDesignCompositeBeam::SetComboStrength ( _bstr_t Name, VARIANT_BOOL Selected );
__declspec(implementation_key(780)) long cDesignCompositeBeam::SetDesignSection ( _bstr_t Name, _bstr_t PropName, VARIANT_BOOL LastAnalysis, enum eItemType ItemType );
__declspec(implementation_key(781)) long cDesignCompositeBeam::SetGroup ( _bstr_t Name, VARIANT_BOOL Selected );
__declspec(implementation_key(782)) long cDesignCompositeBeam::SetTargetDispl ( long NumberItems, SAFEARRAY * * LoadCase, SAFEARRAY * * Point, SAFEARRAY * * Displ, VARIANT_BOOL Active );
__declspec(implementation_key(783)) long cDesignCompositeBeam::SetTargetPeriod ( long NumberItems, _bstr_t ModalCase, SAFEARRAY * * Mode, SAFEARRAY * * Period, VARIANT_BOOL Active );
__declspec(implementation_key(784)) long cDesignCompositeBeam::StartDesign ( );
__declspec(implementation_key(785)) long cDesignCompositeBeam::VerifyPassed ( long * NumberItems, long * N1, long * N2, SAFEARRAY * * MyName );
__declspec(implementation_key(786)) long cDesignCompositeBeam::VerifySections ( long * NumberItems, SAFEARRAY * * MyName );
__declspec(implementation_key(787)) long cDConcSlabACI318_14::GetPreference ( long Item, BSTR * textValue, double * numericValue );
__declspec(implementation_key(788)) long cDConcSlabACI318_19::GetPreference ( long Item, BSTR * textValue, double * numericValue );
__declspec(implementation_key(789)) cDConcSlabACI318_14Ptr cDesignConcreteSlab::GetACI318_14 ( );
__declspec(implementation_key(790)) cDesignStripPtr cDesignConcreteSlab::GetDesignStrip ( );
__declspec(implementation_key(791)) long cDesignConcreteSlab::GetFlexureAndShear ( SAFEARRAY * * StoryName, SAFEARRAY * * DesignStripName, SAFEARRAY * * Station, SAFEARRAY * * ConcWidth, SAFEARRAY * * FTopCombo, SAFEARRAY * * FTopMoment, SAFEARRAY * * FTopArea, SAFEARRAY * * FTopAMin, SAFEARRAY * * FBotCombo, SAFEARRAY * * FBotMoment, SAFEARRAY * * FBotArea, SAFEARRAY * * FBotAMin, SAFEARRAY * * AxialForce, SAFEARRAY * * VCombo, SAFEARRAY * * VForce, SAFEARRAY * * VArea, SAFEARRAY * * Status, SAFEARRAY * * GlobalX, SAFEARRAY * * GlobalY, SAFEARRAY * * Layer );
__declspec(implementation_key(792)) long cDesignConcreteSlab::GetSummaryResultsFlexureAndShear ( SAFEARRAY * * StoryName, SAFEARRAY * * DesignStripName, SAFEARRAY * * SpanID, SAFEARRAY * * Location, SAFEARRAY * * FTopCombo, SAFEARRAY * * FTopMoment, SAFEARRAY * * FTopArea, SAFEARRAY * * FBotCombo, SAFEARRAY * * FBotMoment, SAFEARRAY * * FBotArea, SAFEARRAY * * VCombo, SAFEARRAY * * VForce, SAFEARRAY * * VArea, SAFEARRAY * * Status, SAFEARRAY * * Layer );
__declspec(implementation_key(793)) long cDesignConcreteSlab::GetSummaryResultsSpanDefinition ( SAFEARRAY * * StoryName, SAFEARRAY * * DesignStripName, SAFEARRAY * * SpanID, SAFEARRAY * * SpanLength, SAFEARRAY * * StartDist, SAFEARRAY * * EndDist, SAFEARRAY * * GlobalX1, SAFEARRAY * * GlobalY1, SAFEARRAY * * GlobalX2, SAFEARRAY * * GlobalY2 );
__declspec(implementation_key(794)) long cDesignConcreteSlab::StartSlabDesign ( );
__declspec(implementation_key(795)) long cDesignStrip::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(796)) long cDesignStrip::Delete ( _bstr_t Name );
__declspec(implementation_key(797)) long cDesignStrip::GetDesignStrip ( _bstr_t Name, SAFEARRAY * * Point, SAFEARRAY * * GlobalX, SAFEARRAY * * GlobalY, SAFEARRAY * * GlobalZ, SAFEARRAY * * WBLeft, SAFEARRAY * * WBRight, SAFEARRAY * * WALeft, SAFEARRAY * * WARight, SAFEARRAY * * AutoWiden );
__declspec(implementation_key(798)) long cDesignStrip::GetGUID ( _bstr_t Name, BSTR * GUID );
__declspec(implementation_key(799)) long cDesignStrip::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(800)) long cDesignStrip::GetDesignStrip_1 ( _bstr_t Name, long * DesignType, SAFEARRAY * * Point, SAFEARRAY * * GlobalX, SAFEARRAY * * GlobalY, SAFEARRAY * * GlobalZ, SAFEARRAY * * WBLeft, SAFEARRAY * * WBRight, SAFEARRAY * * WALeft, SAFEARRAY * * WARight, SAFEARRAY * * AutoWiden );
__declspec(implementation_key(801)) long cDesignStrip::SetGUID ( _bstr_t Name, _bstr_t GUID );
__declspec(implementation_key(802)) long cDCoACI318_08_IBC2009::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(803)) long cDCoACI318_08_IBC2009::GetPreference ( long Item, double * Value );
__declspec(implementation_key(804)) long cDCoACI318_08_IBC2009::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(805)) long cDCoACI318_08_IBC2009::SetPreference ( long Item, double Value );
__declspec(implementation_key(806)) long cDCoACI318_11::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(807)) long cDCoACI318_11::GetPreference ( long Item, double * Value );
__declspec(implementation_key(808)) long cDCoACI318_11::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(809)) long cDCoACI318_11::SetPreference ( long Item, double Value );
__declspec(implementation_key(810)) long cDCoACI318_19::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(811)) long cDCoACI318_19::GetPreference ( long Item, double * Value );
__declspec(implementation_key(812)) long cDCoACI318_19::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(813)) long cDCoACI318_19::SetPreference ( long Item, double Value );
__declspec(implementation_key(814)) long cDCoACI318_14::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(815)) long cDCoACI318_14::GetPreference ( long Item, double * Value );
__declspec(implementation_key(816)) long cDCoACI318_14::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(817)) long cDCoACI318_14::SetPreference ( long Item, double Value );
__declspec(implementation_key(818)) long cDCoAS_3600_09::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(819)) long cDCoAS_3600_09::GetPreference ( long Item, double * Value );
__declspec(implementation_key(820)) long cDCoAS_3600_09::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(821)) long cDCoAS_3600_09::SetPreference ( long Item, double Value );
__declspec(implementation_key(822)) long cDCoAS_3600_2018::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(823)) long cDCoAS_3600_2018::GetPreference ( long Item, double * Value );
__declspec(implementation_key(824)) long cDCoAS_3600_2018::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(825)) long cDCoAS_3600_2018::SetPreference ( long Item, double Value );
__declspec(implementation_key(826)) long cDCoBS8110_97::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(827)) long cDCoBS8110_97::GetPreference ( long Item, double * Value );
__declspec(implementation_key(828)) long cDCoBS8110_97::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(829)) long cDCoBS8110_97::SetPreference ( long Item, double Value );
__declspec(implementation_key(830)) long cDCoChinese_2010::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(831)) long cDCoChinese_2010::GetPreference ( long Item, double * Value );
__declspec(implementation_key(832)) long cDCoChinese_2010::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(833)) long cDCoChinese_2010::SetPreference ( long Item, double Value );
__declspec(implementation_key(834)) long cDCoEurocode_2_2004::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(835)) long cDCoEurocode_2_2004::GetPreference ( long Item, double * Value );
__declspec(implementation_key(836)) long cDCoEurocode_2_2004::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(837)) long cDCoEurocode_2_2004::SetPreference ( long Item, double Value );
__declspec(implementation_key(838)) long cDCoHong_Kong_CP_2013::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(839)) long cDCoHong_Kong_CP_2013::GetPreference ( long Item, double * Value );
__declspec(implementation_key(840)) long cDCoHong_Kong_CP_2013::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(841)) long cDCoHong_Kong_CP_2013::SetPreference ( long Item, double Value );
__declspec(implementation_key(842)) long cDCoIndian_IS_456_2000::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(843)) long cDCoIndian_IS_456_2000::GetPreference ( long Item, double * Value );
__declspec(implementation_key(844)) long cDCoIndian_IS_456_2000::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(845)) long cDCoIndian_IS_456_2000::SetPreference ( long Item, double Value );
__declspec(implementation_key(846)) long cDCoItalianNTC2008C::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(847)) long cDCoItalianNTC2008C::GetPreference ( long Item, double * Value );
__declspec(implementation_key(848)) long cDCoItalianNTC2008C::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(849)) long cDCoItalianNTC2008C::SetPreference ( long Item, double Value );
__declspec(implementation_key(850)) long cDCoMexican_RCDF_2004::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(851)) long cDCoMexican_RCDF_2004::GetPreference ( long Item, double * Value );
__declspec(implementation_key(852)) long cDCoMexican_RCDF_2004::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(853)) long cDCoMexican_RCDF_2004::SetPreference ( long Item, double Value );
__declspec(implementation_key(854)) long cDCoMexican_RCDF_2017::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(855)) long cDCoMexican_RCDF_2017::GetPreference ( long Item, double * Value );
__declspec(implementation_key(856)) long cDCoMexican_RCDF_2017::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(857)) long cDCoMexican_RCDF_2017::SetPreference ( long Item, double Value );
__declspec(implementation_key(858)) long cDCoNZS_3101_2006::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(859)) long cDCoNZS_3101_2006::GetPreference ( long Item, double * Value );
__declspec(implementation_key(860)) long cDCoNZS_3101_2006::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(861)) long cDCoNZS_3101_2006::SetPreference ( long Item, double Value );
__declspec(implementation_key(862)) long cDCoSP63133302011::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(863)) long cDCoSP63133302011::GetPreference ( long Item, double * Value );
__declspec(implementation_key(864)) long cDCoSP63133302011::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(865)) long cDCoSP63133302011::SetPreference ( long Item, double Value );
__declspec(implementation_key(866)) long cDCoTS_500_2000::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(867)) long cDCoTS_500_2000::GetPreference ( long Item, double * Value );
__declspec(implementation_key(868)) long cDCoTS_500_2000::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(869)) long cDCoTS_500_2000::SetPreference ( long Item, double Value );
__declspec(implementation_key(870)) long cDCoTS_500_2000_R2018::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(871)) long cDCoTS_500_2000_R2018::GetPreference ( long Item, double * Value );
__declspec(implementation_key(872)) long cDCoTS_500_2000_R2018::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(873)) long cDCoTS_500_2000_R2018::SetPreference ( long Item, double Value );
__declspec(implementation_key(874)) cDCoACI318_08_IBC2009Ptr cDesignConcrete::GetACI318_08_IBC2009 ( );
__declspec(implementation_key(875)) cDCoEurocode_2_2004Ptr cDesignConcrete::GetEurocode_2_2004 ( );
__declspec(implementation_key(876)) long cDesignConcrete::GetCode ( BSTR * CodeName );
__declspec(implementation_key(877)) long cDesignConcrete::GetDesignSection ( _bstr_t Name, BSTR * PropName );
__declspec(implementation_key(878)) VARIANT_BOOL cDesignConcrete::GetResultsAvailable ( );
__declspec(implementation_key(879)) long cDesignConcrete::GetSummaryResultsBeam ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameName, SAFEARRAY * * Location, SAFEARRAY * * TopCombo, SAFEARRAY * * TopArea, SAFEARRAY * * BotCombo, SAFEARRAY * * BotArea, SAFEARRAY * * VMajorCombo, SAFEARRAY * * VMajorArea, SAFEARRAY * * TLCombo, SAFEARRAY * * TLArea, SAFEARRAY * * TTCombo, SAFEARRAY * * TTArea, SAFEARRAY * * ErrorSummary, SAFEARRAY * * WarningSummary, enum eItemType ItemType );
__declspec(implementation_key(880)) long cDesignConcrete::GetSummaryResultsColumn ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameName, SAFEARRAY * * MyOption, SAFEARRAY * * Location, SAFEARRAY * * PMMCombo, SAFEARRAY * * PMMArea, SAFEARRAY * * PMMRatio, SAFEARRAY * * VMajorCombo, SAFEARRAY * * AVMajor, SAFEARRAY * * VMinorCombo, SAFEARRAY * * AVMinor, SAFEARRAY * * ErrorSummary, SAFEARRAY * * WarningSummary, enum eItemType ItemType );
__declspec(implementation_key(881)) long cDesignConcrete::GetSummaryResultsJoint ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameName, SAFEARRAY * * LCJSRatioMajor, SAFEARRAY * * JSRatioMajor, SAFEARRAY * * LCJSRatioMinor, SAFEARRAY * * JSRatioMinor, SAFEARRAY * * LCBCCRatioMajor, SAFEARRAY * * BCCRatioMajor, SAFEARRAY * * LCBCCRatioMinor, SAFEARRAY * * BCCRatioMinor, SAFEARRAY * * ErrorSummary, SAFEARRAY * * WarningSummary, enum eItemType ItemType );
__declspec(implementation_key(882)) long cDesignConcrete::SetCode ( _bstr_t CodeName );
__declspec(implementation_key(883)) long cDesignConcrete::SetDesignSection ( _bstr_t Name, _bstr_t PropName, VARIANT_BOOL LastAnalysis, enum eItemType ItemType );
__declspec(implementation_key(884)) long cDesignConcrete::StartDesign ( );
__declspec(implementation_key(885)) cDCoSP63133302011Ptr cDesignConcrete::GetSP63_13330_2012 ( );
__declspec(implementation_key(886)) cDCoACI318_14Ptr cDesignConcrete::GetACI318_14 ( );
__declspec(implementation_key(887)) cDCoACI318_19Ptr cDesignConcrete::GetACI318_19 ( );
__declspec(implementation_key(888)) cDCoAS_3600_09Ptr cDesignConcrete::GetAS_3600_09 ( );
__declspec(implementation_key(889)) cDCoBS8110_97Ptr cDesignConcrete::GetBS8110_97 ( );
__declspec(implementation_key(890)) cDCoChinese_2010Ptr cDesignConcrete::GetChinese_2010 ( );
__declspec(implementation_key(891)) cDCoIndian_IS_456_2000Ptr cDesignConcrete::GetIndian_IS_456_2000 ( );
__declspec(implementation_key(892)) long cDesignConcrete::GetRebarPrefsBeam ( long Item, BSTR * Value );
__declspec(implementation_key(893)) long cDesignConcrete::GetRebarPrefsColumn ( long Item, BSTR * Value );
__declspec(implementation_key(894)) long cDesignConcrete::GetSummaryResultsBeam_2 ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameName, SAFEARRAY * * Location, SAFEARRAY * * TopCombo, SAFEARRAY * * TopArea, SAFEARRAY * * TopAreaReq, SAFEARRAY * * TopAreaMin, SAFEARRAY * * TopAreaProvided, SAFEARRAY * * BotCombo, SAFEARRAY * * BotArea, SAFEARRAY * * BotAreaReq, SAFEARRAY * * BotAreaMin, SAFEARRAY * * BotAreaProvided, SAFEARRAY * * VMajorCombo, SAFEARRAY * * VMajorArea, SAFEARRAY * * VmajorAreaReq, SAFEARRAY * * VmajorAreaMin, SAFEARRAY * * VmajorAreaProvided, SAFEARRAY * * TLCombo, SAFEARRAY * * TLArea, SAFEARRAY * * TTCombo, SAFEARRAY * * TTArea, SAFEARRAY * * ErrorSummary, SAFEARRAY * * WarningSummary, enum eItemType ItemType );
__declspec(implementation_key(895)) cDCoAS_3600_2018Ptr cDesignConcrete::GetAS_3600_2018 ( );
__declspec(implementation_key(896)) cDCoMexican_RCDF_2017Ptr cDesignConcrete::GetMexican_RCDF_2017 ( );
__declspec(implementation_key(897)) cDCoTS_500_2000_R2018Ptr cDesignConcrete::GetTS_500_2000_R2018 ( );
__declspec(implementation_key(898)) long cDesignConcrete::GetSeismicFramingType ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameName, SAFEARRAY * * FramingType, enum eItemType ItemType );
__declspec(implementation_key(899)) long cDesignShearWall::GetPierSummaryResults ( SAFEARRAY * * Story, SAFEARRAY * * PierLabel, SAFEARRAY * * Station, SAFEARRAY * * DesignType, SAFEARRAY * * PierSecType, SAFEARRAY * * EdgeBar, SAFEARRAY * * EndBar, SAFEARRAY * * BarSpacing, SAFEARRAY * * ReinfPercent, SAFEARRAY * * CurrPercent, SAFEARRAY * * DCRatio, SAFEARRAY * * PierLeg, SAFEARRAY * * LegX1, SAFEARRAY * * LegY1, SAFEARRAY * * LegX2, SAFEARRAY * * LegY2, SAFEARRAY * * EdgeLeft, SAFEARRAY * * EdgeRight, SAFEARRAY * * AsLeft, SAFEARRAY * * AsRight, SAFEARRAY * * ShearAv, SAFEARRAY * * StressCompLeft, SAFEARRAY * * StressCompRight, SAFEARRAY * * StressLimitLeft, SAFEARRAY * * StressLimitRight, SAFEARRAY * * CDepthLeft, SAFEARRAY * * CLimitLeft, SAFEARRAY * * CDepthRight, SAFEARRAY * * CLimitRight, SAFEARRAY * * InelasticRotDemand, SAFEARRAY * * InelasticRotCapacity, SAFEARRAY * * NormCompStress, SAFEARRAY * * NormCompStressLimit, SAFEARRAY * * CDepth, SAFEARRAY * * BZoneL, SAFEARRAY * * BZoneR, SAFEARRAY * * BZoneLength, SAFEARRAY * * WarnMsg, SAFEARRAY * * ErrMsg );
__declspec(implementation_key(900)) long cDesignShearWall::GetRebar ( SAFEARRAY * * AreaObjName, SAFEARRAY * * StoryName, SAFEARRAY * * PierLabel, SAFEARRAY * * StationLocation, SAFEARRAY * * LegID, SAFEARRAY * * LeftX1, SAFEARRAY * * LeftY1, SAFEARRAY * * RightX2, SAFEARRAY * * RightY2, SAFEARRAY * * Length, SAFEARRAY * * Thickness, SAFEARRAY * * Fc, SAFEARRAY * * FY, SAFEARRAY * * fys, SAFEARRAY * * Flexural, SAFEARRAY * * ShearAndConfinement );
__declspec(implementation_key(901)) long cDesignShearWall::GetSpandrelSummaryResults ( SAFEARRAY * * Story, SAFEARRAY * * Spandrel, SAFEARRAY * * Station, SAFEARRAY * * TopRebar, SAFEARRAY * * TopRebarRatio, SAFEARRAY * * TopRebarCombo, SAFEARRAY * * MuTop, SAFEARRAY * * BotRebar, SAFEARRAY * * BotRebarRatio, SAFEARRAY * * BotRebarCombo, SAFEARRAY * * MuBot, SAFEARRAY * * AVert, SAFEARRAY * * AHorz, SAFEARRAY * * ShearCombo, SAFEARRAY * * Vu, SAFEARRAY * * ADiag, SAFEARRAY * * ShearDiagCombo, SAFEARRAY * * VuDiag, SAFEARRAY * * WarnMsg, SAFEARRAY * * ErrMsg );
__declspec(implementation_key(902)) long cDesignShearWall::GetRebarPrefsPier ( long Item, BSTR * Value );
__declspec(implementation_key(903)) long cDesignShearWall::GetRebarPrefsSpandrel ( long Item, BSTR * Value );
__declspec(implementation_key(904)) cDStAISC360_05_IBC2006Ptr cDesignSteel::GetAISC360_05_IBC2006 ( );
__declspec(implementation_key(905)) cDStCanadian_S16_09Ptr cDesignSteel::GetCanadian_S16_09 ( );
__declspec(implementation_key(906)) long cDesignSteel::DeleteResults ( );
__declspec(implementation_key(907)) cDStEurocode_3_2005Ptr cDesignSteel::GetEurocode_3_2005 ( );
__declspec(implementation_key(908)) long cDesignSteel::GetCode ( BSTR * CodeName );
__declspec(implementation_key(909)) long cDesignSteel::GetComboDeflection ( long * NumberItems, SAFEARRAY * * MyName );
__declspec(implementation_key(910)) long cDesignSteel::GetComboStrength ( long * NumberItems, SAFEARRAY * * MyName );
__declspec(implementation_key(911)) long cDesignSteel::GetDesignSection ( _bstr_t Name, BSTR * PropName );
__declspec(implementation_key(912)) long cDesignSteel::GetGroup ( long * NumberItems, SAFEARRAY * * MyName );
__declspec(implementation_key(913)) VARIANT_BOOL cDesignSteel::GetResultsAvailable ( );
__declspec(implementation_key(914)) long cDesignSteel::GetSummaryResults ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameName, SAFEARRAY * * Ratio, SAFEARRAY * * RatioType, SAFEARRAY * * Location, SAFEARRAY * * ComboName, SAFEARRAY * * ErrorSummary, SAFEARRAY * * WarningSummary, enum eItemType ItemType );
__declspec(implementation_key(915)) long cDesignSteel::GetTargetDispl ( long * NumberItems, SAFEARRAY * * LoadCase, SAFEARRAY * * Point, SAFEARRAY * * Displ, VARIANT_BOOL * Active );
__declspec(implementation_key(916)) long cDesignSteel::GetTargetPeriod ( long * NumberItems, BSTR * ModalCase, SAFEARRAY * * Mode, SAFEARRAY * * Period, VARIANT_BOOL * Active );
__declspec(implementation_key(917)) long cDesignSteel::ResetOverwrites ( );
__declspec(implementation_key(918)) long cDesignSteel::SetAutoSelectNull ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(919)) long cDesignSteel::SetCode ( _bstr_t CodeName );
__declspec(implementation_key(920)) long cDesignSteel::SetComboDeflection ( _bstr_t Name, VARIANT_BOOL Selected );
__declspec(implementation_key(921)) long cDesignSteel::SetComboStrength ( _bstr_t Name, VARIANT_BOOL Selected );
__declspec(implementation_key(922)) long cDesignSteel::SetDesignSection ( _bstr_t Name, _bstr_t PropName, VARIANT_BOOL LastAnalysis, enum eItemType ItemType );
__declspec(implementation_key(923)) long cDesignSteel::SetGroup ( _bstr_t Name, VARIANT_BOOL Selected );
__declspec(implementation_key(924)) long cDesignSteel::SetTargetDispl ( long NumberItems, SAFEARRAY * * LoadCase, SAFEARRAY * * Point, SAFEARRAY * * Displ, VARIANT_BOOL Active );
__declspec(implementation_key(925)) long cDesignSteel::SetTargetPeriod ( long NumberItems, _bstr_t ModalCase, SAFEARRAY * * Mode, SAFEARRAY * * Period, VARIANT_BOOL Active );
__declspec(implementation_key(926)) long cDesignSteel::StartDesign ( );
__declspec(implementation_key(927)) long cDesignSteel::VerifyPassed ( long * NumberItems, long * N1, long * N2, SAFEARRAY * * MyName );
__declspec(implementation_key(928)) long cDesignSteel::VerifySections ( long * NumberItems, SAFEARRAY * * MyName );
__declspec(implementation_key(929)) cDStSP16_13330_2011Ptr cDesignSteel::GetSP16_13330_2011 ( );
__declspec(implementation_key(930)) cDStCanadian_S16_14Ptr cDesignSteel::GetCanadian_S16_14 ( );
__declspec(implementation_key(931)) cDStCanadian_S16_19Ptr cDesignSteel::GetCanadian_S16_19 ( );
__declspec(implementation_key(932)) cDStAISC_LRFD93Ptr cDesignSteel::GetAISC_LRFD93 ( );
__declspec(implementation_key(933)) cDStAustralian_AS4100_98Ptr cDesignSteel::GetAustralian_AS4100_98 ( );
__declspec(implementation_key(934)) cDStAustralian_AS4100_2020Ptr cDesignSteel::GetAustralian_AS4100_2020 ( );
__declspec(implementation_key(935)) cDStBS5950_2000Ptr cDesignSteel::GetBS5950_2000 ( );
__declspec(implementation_key(936)) cDStChinese_2010Ptr cDesignSteel::GetChinese_2010 ( );
__declspec(implementation_key(937)) cDStChinese_2018Ptr cDesignSteel::GetChinese_2018 ( );
__declspec(implementation_key(938)) cDStIndian_IS_800_2007Ptr cDesignSteel::GetIndian_IS_800_2007 ( );
__declspec(implementation_key(939)) cDStNewZealand_NZS3404_97Ptr cDesignSteel::GetNewZealand_NZS3404_97 ( );
__declspec(implementation_key(940)) cDStItalianNTC2008SPtr cDesignSteel::GetItalian_NTC_2008 ( );
__declspec(implementation_key(941)) cDStItalianNTC2018SPtr cDesignSteel::GetItalian_NTC_2018 ( );
__declspec(implementation_key(942)) long cDesignSteel::GetSummaryResults_2 ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameType, SAFEARRAY * * DesignSect, SAFEARRAY * * Status, SAFEARRAY * * PMMCombo, SAFEARRAY * * PMMRatio, SAFEARRAY * * PRatio, SAFEARRAY * * MMajRatio, SAFEARRAY * * MMinRatio, SAFEARRAY * * VMajCombo, SAFEARRAY * * VMajRatio, SAFEARRAY * * VMinCombo, SAFEARRAY * * VMinRatio, enum eItemType ItemType );
__declspec(implementation_key(943)) long cDesignSteel::GetSummaryResults_3 ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameName, SAFEARRAY * * FrameType, SAFEARRAY * * DesignSect, SAFEARRAY * * Status, SAFEARRAY * * PMMCombo, SAFEARRAY * * PMMRatio, SAFEARRAY * * PRatio, SAFEARRAY * * MMajRatio, SAFEARRAY * * MMinRatio, SAFEARRAY * * VMajCombo, SAFEARRAY * * VMajRatio, SAFEARRAY * * VMinCombo, SAFEARRAY * * VMinRatio, enum eItemType ItemType );
__declspec(implementation_key(944)) long cDStAISC360_05_IBC2006::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(945)) long cDStAISC360_05_IBC2006::GetPreference ( long Item, double * Value );
__declspec(implementation_key(946)) long cDStAISC360_05_IBC2006::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(947)) long cDStAISC360_05_IBC2006::SetPreference ( long Item, double Value );
__declspec(implementation_key(948)) long cDStAISC360_10::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(949)) long cDStAISC360_10::GetPreference ( long Item, double * Value );
__declspec(implementation_key(950)) long cDStAISC360_10::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(951)) long cDStAISC360_10::SetPreference ( long Item, double Value );
__declspec(implementation_key(952)) long cDStAISC_ASD89::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(953)) long cDStAISC_ASD89::GetPreference ( long Item, double * Value );
__declspec(implementation_key(954)) long cDStAISC_ASD89::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(955)) long cDStAISC_ASD89::SetPreference ( long Item, double Value );
__declspec(implementation_key(956)) long cDStAISC_LRFD93::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(957)) long cDStAISC_LRFD93::GetPreference ( long Item, double * Value );
__declspec(implementation_key(958)) long cDStAISC_LRFD93::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(959)) long cDStAISC_LRFD93::SetPreference ( long Item, double Value );
__declspec(implementation_key(960)) long cDStAustralian_AS4100_98::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(961)) long cDStAustralian_AS4100_98::GetPreference ( long Item, double * Value );
__declspec(implementation_key(962)) long cDStAustralian_AS4100_98::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(963)) long cDStAustralian_AS4100_98::SetPreference ( long Item, double Value );
__declspec(implementation_key(964)) long cDStBS5950_2000::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(965)) long cDStBS5950_2000::GetPreference ( long Item, double * Value );
__declspec(implementation_key(966)) long cDStBS5950_2000::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(967)) long cDStBS5950_2000::SetPreference ( long Item, double Value );
__declspec(implementation_key(968)) long cDStCanadian_S16_09::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(969)) long cDStCanadian_S16_09::GetPreference ( long Item, double * Value );
__declspec(implementation_key(970)) long cDStCanadian_S16_09::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(971)) long cDStCanadian_S16_09::SetPreference ( long Item, double Value );
__declspec(implementation_key(972)) long cDStCanadian_S16_19::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(973)) long cDStCanadian_S16_19::GetPreference ( long Item, double * Value );
__declspec(implementation_key(974)) long cDStCanadian_S16_19::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(975)) long cDStCanadian_S16_19::SetPreference ( long Item, double Value );
__declspec(implementation_key(976)) long cDStChinese_2010::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(977)) long cDStChinese_2010::GetPreference ( long Item, double * Value );
__declspec(implementation_key(978)) long cDStChinese_2010::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(979)) long cDStChinese_2010::SetPreference ( long Item, double Value );
__declspec(implementation_key(980)) long cDStChinese_2018::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(981)) long cDStChinese_2018::GetPreference ( long Item, double * Value );
__declspec(implementation_key(982)) long cDStChinese_2018::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(983)) long cDStChinese_2018::SetPreference ( long Item, double Value );
__declspec(implementation_key(984)) long cDStEurocode_3_2005::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(985)) long cDStEurocode_3_2005::GetPreference ( long Item, double * Value );
__declspec(implementation_key(986)) long cDStEurocode_3_2005::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(987)) long cDStEurocode_3_2005::SetPreference ( long Item, double Value );
__declspec(implementation_key(988)) long cDStIndian_IS_800_2007::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(989)) long cDStIndian_IS_800_2007::GetPreference ( long Item, double * Value );
__declspec(implementation_key(990)) long cDStIndian_IS_800_2007::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(991)) long cDStIndian_IS_800_2007::SetPreference ( long Item, double Value );
__declspec(implementation_key(992)) long cDStItalianNTC2008S::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(993)) long cDStItalianNTC2008S::GetPreference ( long Item, double * Value );
__declspec(implementation_key(994)) long cDStItalianNTC2008S::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(995)) long cDStItalianNTC2008S::SetPreference ( long Item, double Value );
__declspec(implementation_key(996)) long cDStNewZealand_NZS3404_97::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(997)) long cDStNewZealand_NZS3404_97::GetPreference ( long Item, double * Value );
__declspec(implementation_key(998)) long cDStNewZealand_NZS3404_97::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(999)) long cDStNewZealand_NZS3404_97::SetPreference ( long Item, double Value );
__declspec(implementation_key(1000)) long cDStSP16_13330_2011::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(1001)) long cDStSP16_13330_2011::GetPreference ( long Item, double * Value );
__declspec(implementation_key(1002)) long cDStSP16_13330_2011::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(1003)) long cDStSP16_13330_2011::SetPreference ( long Item, double Value );
__declspec(implementation_key(1004)) long cDStCanadian_S16_14::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(1005)) long cDStCanadian_S16_14::GetPreference ( long Item, double * Value );
__declspec(implementation_key(1006)) long cDStCanadian_S16_14::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(1007)) long cDStCanadian_S16_14::SetPreference ( long Item, double Value );
__declspec(implementation_key(1008)) long cDStItalianNTC2018S::GetOverwrite ( _bstr_t Name, long Item, BSTR * textValue, double * numericValue, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(1009)) long cDStItalianNTC2018S::GetPreference ( long Item, BSTR * textValue, double * numericValue );
__declspec(implementation_key(1010)) long cDStItalianNTC2018S::SetOverwrite ( _bstr_t Name, long Item, _bstr_t textValue, double numericValue, enum eItemType ItemType );
__declspec(implementation_key(1011)) long cDStItalianNTC2018S::SetPreference ( long Item, _bstr_t textValue, double numericValue );
__declspec(implementation_key(1012)) long cDStSP16_13330_2017::GetOverwrite ( _bstr_t Name, long Item, double * Value, VARIANT_BOOL * ProgDet );
__declspec(implementation_key(1013)) long cDStSP16_13330_2017::GetPreference ( long Item, double * Value );
__declspec(implementation_key(1014)) long cDStSP16_13330_2017::SetOverwrite ( _bstr_t Name, long Item, double Value, enum eItemType ItemType );
__declspec(implementation_key(1015)) long cDStSP16_13330_2017::SetPreference ( long Item, double Value );
__declspec(implementation_key(1016)) long cDetailing::ClearDetailing ( );
__declspec(implementation_key(1017)) long cDetailing::GetDetailedBeamLines ( long * NumberItems, SAFEARRAY * * BeamLineIDs );
__declspec(implementation_key(1018)) long cDetailing::GetDetailedBeamLineData ( _bstr_t BeamLineID, SAFEARRAY * * ObjectUniqueNames, long * NumberSpans, SAFEARRAY * * SpanLength, SAFEARRAY * * NumLongBars, SAFEARRAY * * LongBarDiameter, SAFEARRAY * * LongBarNotation, SAFEARRAY * * LongBarStartDist, SAFEARRAY * * LongBarStartBend, SAFEARRAY * * LongBarEndBend, SAFEARRAY * * LongBarLength, SAFEARRAY * * LongBarNumLayers, SAFEARRAY * * NumTieBars, SAFEARRAY * * NumTieVertLegs, SAFEARRAY * * TieBarDiameter, SAFEARRAY * * TieBarNotation, SAFEARRAY * * TieBarStartDist, SAFEARRAY * * TieBarSpacing, SAFEARRAY * * TieBarType );
__declspec(implementation_key(1019)) long cDetailing::GetDetailedBeamLineData_1 ( _bstr_t BeamLineID, SAFEARRAY * * ObjectUniqueNames, long * NumberSpans, SAFEARRAY * * SpanLength, SAFEARRAY * * NumLongBars, SAFEARRAY * * LongBarGUID, SAFEARRAY * * LongBarDiameter, SAFEARRAY * * LongBarNotation, SAFEARRAY * * LongBarStartDist, SAFEARRAY * * LongBarStartBend, SAFEARRAY * * LongBarEndBend, SAFEARRAY * * LongBarLength, SAFEARRAY * * LongBarNumLayers, SAFEARRAY * * NumTieBars, SAFEARRAY * * NumTieVertLegs, SAFEARRAY * * TieBarGUID, SAFEARRAY * * TieBarDiameter, SAFEARRAY * * TieBarNotation, SAFEARRAY * * TieBarStartDist, SAFEARRAY * * TieBarSpacing, SAFEARRAY * * TieBarType );
__declspec(implementation_key(1020)) long cDetailing::GetDetailedColumnStacks ( long * NumberItems, SAFEARRAY * * ColumnStackIDs );
__declspec(implementation_key(1021)) long cDetailing::GetDetailedColumnStackData ( _bstr_t ColumnStackID, SAFEARRAY * * ObjectUniqueNames, long * NumLongBarSets, SAFEARRAY * * NumLongBars, SAFEARRAY * * LongBarDiameter, SAFEARRAY * * LongBarNotation, SAFEARRAY * * LongBarStartDist, SAFEARRAY * * LongBarStartBend, SAFEARRAY * * LongBarEndBend, SAFEARRAY * * LongBarLength, SAFEARRAY * * LongBarNumLayers, long * NumTieZones, SAFEARRAY * * TieBarZones, SAFEARRAY * * NumTieBars, SAFEARRAY * * NumTieVertLegs, SAFEARRAY * * TieBarDiameter, SAFEARRAY * * TieBarNotation, SAFEARRAY * * TieBarStartDist, SAFEARRAY * * TieBarSpacing, SAFEARRAY * * TieBarType );
__declspec(implementation_key(1022)) long cDetailing::GetDetailedColumnStackData_1 ( _bstr_t ColumnStackID, SAFEARRAY * * ObjectUniqueNames, long * NumLongBarSets, SAFEARRAY * * NumLongBars, SAFEARRAY * * LongBarGUID, SAFEARRAY * * LongBarDiameter, SAFEARRAY * * LongBarNotation, SAFEARRAY * * LongBarStartDist, SAFEARRAY * * LongBarStartBend, SAFEARRAY * * LongBarEndBend, SAFEARRAY * * LongBarLength, SAFEARRAY * * LongBarNumLayers, long * NumTieZones, SAFEARRAY * * TieBarZones, SAFEARRAY * * NumTieBars, SAFEARRAY * * NumTieHorLegs, SAFEARRAY * * NumTieVertLegs, SAFEARRAY * * TieBarGUID, SAFEARRAY * * TieBarDiameter, SAFEARRAY * * TieBarNotation, SAFEARRAY * * TieBarStartDist, SAFEARRAY * * TieBarSpacing, SAFEARRAY * * TieBarType );
__declspec(implementation_key(1023)) long cDetailing::GetDetailedSlabs ( long * NumberItems, SAFEARRAY * * Names, SAFEARRAY * * SlabElevations, SAFEARRAY * * GUIDs );
__declspec(implementation_key(1024)) long cDetailing::GetDetailedSlabBotBarData ( _bstr_t SlabName, long * NumData, SAFEARRAY * * Names, SAFEARRAY * * NumBars, SAFEARRAY * * BarDiameter, SAFEARRAY * * BarNotation, SAFEARRAY * * BarMaterial, SAFEARRAY * * StartX, SAFEARRAY * * StartY, SAFEARRAY * * StartZ, SAFEARRAY * * EndX, SAFEARRAY * * EndY, SAFEARRAY * * EndZ, SAFEARRAY * * WidthLeft, SAFEARRAY * * WidthRight, SAFEARRAY * * OffsetFromTop, SAFEARRAY * * OffsetFromBot, SAFEARRAY * * StartBarBend, SAFEARRAY * * EndBarBend, SAFEARRAY * * GUIDs );
__declspec(implementation_key(1025)) long cDetailing::GetDetailedSlabBotBarData_1 ( _bstr_t SlabName, long * NumData, SAFEARRAY * * Names, SAFEARRAY * * NumBars, SAFEARRAY * * BarDiameter, SAFEARRAY * * BarNotation, SAFEARRAY * * BarMaterial, SAFEARRAY * * StartX, SAFEARRAY * * StartY, SAFEARRAY * * StartZ, SAFEARRAY * * EndX, SAFEARRAY * * EndY, SAFEARRAY * * EndZ, SAFEARRAY * * WidthLeft, SAFEARRAY * * WidthRight, SAFEARRAY * * OffsetFromTop, SAFEARRAY * * OffsetFromBot, SAFEARRAY * * StartBarBend, SAFEARRAY * * EndBarBend, SAFEARRAY * * GUIDs, SAFEARRAY * * StripNames, SAFEARRAY * * SpanNos );
__declspec(implementation_key(1026)) long cDetailing::GetDetailedSlabTopBarData ( _bstr_t SlabName, long * NumData, SAFEARRAY * * Names, SAFEARRAY * * NumBars, SAFEARRAY * * BarDiameter, SAFEARRAY * * BarNotation, SAFEARRAY * * BarMaterial, SAFEARRAY * * StartX, SAFEARRAY * * StartY, SAFEARRAY * * StartZ, SAFEARRAY * * EndX, SAFEARRAY * * EndY, SAFEARRAY * * EndZ, SAFEARRAY * * WidthLeft, SAFEARRAY * * WidthRight, SAFEARRAY * * OffsetFromTop, SAFEARRAY * * OffsetFromBot, SAFEARRAY * * StartBarBend, SAFEARRAY * * EndBarBend, SAFEARRAY * * GUIDs );
__declspec(implementation_key(1027)) long cDetailing::GetDetailedSlabTopBarData_1 ( _bstr_t SlabName, long * NumData, SAFEARRAY * * Names, SAFEARRAY * * NumBars, SAFEARRAY * * BarDiameter, SAFEARRAY * * BarNotation, SAFEARRAY * * BarMaterial, SAFEARRAY * * StartX, SAFEARRAY * * StartY, SAFEARRAY * * StartZ, SAFEARRAY * * EndX, SAFEARRAY * * EndY, SAFEARRAY * * EndZ, SAFEARRAY * * WidthLeft, SAFEARRAY * * WidthRight, SAFEARRAY * * OffsetFromTop, SAFEARRAY * * OffsetFromBot, SAFEARRAY * * StartBarBend, SAFEARRAY * * EndBarBend, SAFEARRAY * * GUIDs, SAFEARRAY * * StripNames, SAFEARRAY * * SpanNos );
__declspec(implementation_key(1028)) VARIANT_BOOL cDetailing::GetDetailingAvailable ( );
__declspec(implementation_key(1029)) long cDetailing::GetSimilarBeamLines ( _bstr_t BeamLineID, long * NumberSimilarBeams, SAFEARRAY * * NumberUniqueObjects, SAFEARRAY * * ObjectUniqueNames );
__declspec(implementation_key(1030)) long cDetailing::GetSimilarColumnStacks ( _bstr_t ColumnStackID, long * NumberSimilarColumns, SAFEARRAY * * NumberUniqueObjects, SAFEARRAY * * ObjectUniqueNames );
__declspec(implementation_key(1031)) long cDetailing::GetSimilarSlabs ( _bstr_t SlabName, long * NumberSimilarSlabs, SAFEARRAY * * Names );
__declspec(implementation_key(1032)) long cDetailing::StartDetailing ( VARIANT_BOOL OverwriteExisting );
__declspec(implementation_key(1033)) long cDetailing::GetBeamLongRebarData ( _bstr_t Name, long * NumberRebarSets, SAFEARRAY * * BarSizeName, SAFEARRAY * * BarArea, SAFEARRAY * * NumberBars, SAFEARRAY * * Location, SAFEARRAY * * ClearCover, SAFEARRAY * * StartCoord1, SAFEARRAY * * BarLength, SAFEARRAY * * BendingAngleStart, SAFEARRAY * * BendingAngleEnd, SAFEARRAY * * RebarSetGUID );
__declspec(implementation_key(1034)) long cDetailing::GetBeamTieRebarData ( _bstr_t Name, long * NumberRebarSets, SAFEARRAY * * BarSizeName, SAFEARRAY * * BarArea, SAFEARRAY * * NumberLegs, SAFEARRAY * * Location, SAFEARRAY * * ClearCover, SAFEARRAY * * StartCoord1, SAFEARRAY * * Spacing, SAFEARRAY * * Lengths, SAFEARRAY * * RebarSetGUID );
__declspec(implementation_key(1035)) long cDetailing::GetColumnLongRebarData ( _bstr_t Name, long * NumberRebarSets, SAFEARRAY * * BarSizeName, SAFEARRAY * * BarArea, SAFEARRAY * * NumberCBars, SAFEARRAY * * NumberR3Bars, SAFEARRAY * * NumberR2Bars, SAFEARRAY * * Location, SAFEARRAY * * ClearCover, SAFEARRAY * * RebarSetGUID );
__declspec(implementation_key(1036)) long cDetailing::GetColumnTieRebarData ( _bstr_t Name, long * NumberRebarSets, SAFEARRAY * * BarSizeName, SAFEARRAY * * BarArea, SAFEARRAY * * Pattern, SAFEARRAY * * ConfineType, SAFEARRAY * * NumberLegs2Dir, SAFEARRAY * * NumberLegs3Dir, SAFEARRAY * * Location, SAFEARRAY * * ClearCover, SAFEARRAY * * StartCoord1, SAFEARRAY * * Spacing, SAFEARRAY * * Heights, SAFEARRAY * * RebarSetGUID );
__declspec(implementation_key(1037)) long cDetailing::GetDetailedBeamLineGuidData ( _bstr_t BeamLineID, _bstr_t SimilarFirstBeamUniqueID, SAFEARRAY * * LongitudinalABars, SAFEARRAY * * LongitudinalBBars, SAFEARRAY * * LongitudinalCBars, SAFEARRAY * * LongitudinalDBars, SAFEARRAY * * LongitudinalEBars, SAFEARRAY * * LongitudinalFBars, SAFEARRAY * * LongitudinalGBars, SAFEARRAY * * LongitudinalHBars, SAFEARRAY * * ZoneATies, SAFEARRAY * * ZoneBTies, SAFEARRAY * * ZoneCTies );
__declspec(implementation_key(1038)) long cDetailing::GetDetailedColumnStackGuidData ( _bstr_t ColumnStackID, _bstr_t SimilarFirstColumnUniqueID, SAFEARRAY * * LongitudinalBars, SAFEARRAY * * TiesA, SAFEARRAY * * TiesB, SAFEARRAY * * TiesC );
__declspec(implementation_key(1039)) long cDetailing::GetDetailedColumnStackData_2 ( _bstr_t ColumnStackID, SAFEARRAY * * ObjectUniqueNames, long * NumLongBarSets, SAFEARRAY * * NumLongBars, SAFEARRAY * * NumLongR2Bars, SAFEARRAY * * NumLongR3Bars, SAFEARRAY * * LongBarGUID, SAFEARRAY * * LongBarDiameter, SAFEARRAY * * LongBarNotation, SAFEARRAY * * LongBarStartDist, SAFEARRAY * * LongBarStartBend, SAFEARRAY * * LongBarEndBend, SAFEARRAY * * LongBarLength, SAFEARRAY * * LongBarNumLayers, long * NumTieZones, SAFEARRAY * * TieBarZone, SAFEARRAY * * NumTieBars, SAFEARRAY * * NumTieR2Legs, SAFEARRAY * * NumTieR3Legs, SAFEARRAY * * TieBarGUID, SAFEARRAY * * TieBarDiameter, SAFEARRAY * * TieBarNotation, SAFEARRAY * * TieBarStartDist, SAFEARRAY * * TieBarSpacing, SAFEARRAY * * TieBarType );
__declspec(implementation_key(1040)) long cDetailing::GetNumberDetailedSlabs ( long * NumberDetailingOutput );
__declspec(implementation_key(1041)) long cDetailing::GetDetailedSlab_OneDetailingOutputInfo ( long DetailingOutputIndex, BSTR * Guid_ETABS, BSTR * Floor, BSTR * StoryNameETABS, double * LevelZ, long * NumberStrips );
__declspec(implementation_key(1042)) long cDetailing::GetOneDetailedSlab_OneDetailingOutput_StripInfo ( long DetailingOutputIndex, long StripIndex, BSTR * Name, BSTR * LayerName, BSTR * StripType, long * NumberRegions );
__declspec(implementation_key(1043)) long cDetailing::GetOneDetailedSlab_OneDetailingOutput_StripGUID ( long DetailingOutputIndex, long StripIndex, BSTR * Guid_ETABS );
__declspec(implementation_key(1044)) long cDetailing::GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegionInfo ( long DetailingOutputIndex, long StripIndex, long DetailingRegionIndex, double * X1, double * Y1, double * X2, double * Y2, long * NumberTopBars, long * NumberBottomBars );
__declspec(implementation_key(1045)) long cDetailing::GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegion_OneTopRebarInfo ( long DetailingOutputIndex, long StripIndex, long DetailingRegionIndex, long TopRebarIndex, double * X1, double * Y1, double * X2, double * Y2, double * WidthRight, double * WidthLeft, double * Z, double * ReqAst, double * ProvAst );
__declspec(implementation_key(1046)) long cDetailing::GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegion_OneBottomRebarInfo ( long DetailingOutputIndex, long StripIndex, long DetailingRegionIndex, long BottomRebarIndex, double * X1, double * Y1, double * X2, double * Y2, double * WidthRight, double * WidthLeft, double * Z, double * ReqAst, double * ProvAst );
__declspec(implementation_key(1047)) long cDetailing::GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegion_OneTopRebar_Bar1Info ( long DetailingOutputIndex, long StripIndex, long DetailingRegionIndex, long TopRebarIndex, BSTR * GUID, BSTR * PlaceCode, double * Dia, BSTR * Size, long * Number, double * StartDist, double * EndDist, long * StartBend, long * EndBend, BSTR * Material );
__declspec(implementation_key(1048)) long cDetailing::GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegion_OneTopRebar_Bar2Info ( long DetailingOutputIndex, long StripIndex, long DetailingRegionIndex, long TopRebarIndex, BSTR * GUID, BSTR * PlaceCode, double * Dia, BSTR * Size, long * Number, double * StartDist, double * EndDist, long * StartBend, long * EndBend, BSTR * Material );
__declspec(implementation_key(1049)) long cDetailing::GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegion_OneBottomRebar_Bar1Info ( long DetailingOutputIndex, long StripIndex, long DetailingRegionIndex, long BottomRebarIndex, BSTR * GUID, BSTR * PlaceCode, double * Dia, BSTR * Size, long * Number, double * StartDist, double * EndDist, long * StartBend, long * EndBend, BSTR * Material );
__declspec(implementation_key(1050)) long cDetailing::GetOneDetailedSlab_OneDetailingOutput_OneStrip_OneDetailingRegion_OneBottomRebar_Bar2Info ( long DetailingOutputIndex, long StripIndex, long DetailingRegionIndex, long BottomRebarIndex, BSTR * GUID, BSTR * PlaceCode, double * Dia, BSTR * Size, long * Number, double * StartDist, double * EndDist, long * StartBend, long * EndBend, BSTR * Material );
__declspec(implementation_key(1051)) long cDetailing::GetNumberDetailedWallStacks ( long * NumberWallStacks );
__declspec(implementation_key(1052)) long cDetailing::GetDetailed_OneWallStack ( long WallStackIndex, BSTR * GUID, long * TowerID, long * NumberPiers, long * NUmberSpandrels );
__declspec(implementation_key(1053)) long cDetailing::GetDetailedWall_OneWallStack_OnePierOutputInfo ( long WallStackIndex, long PierIndex, long * StoryID, BSTR * ETABSStoryName, long * NumberDesignLegs );
__declspec(implementation_key(1054)) long cDetailing::GetDetailedWall_OneWallStack_OnePier_OneDesignLegOutputInfo ( long WallStackIndex, long PierIndex, long DesignLegIndex, BSTR * GUID, BSTR * PierLabel, double * X1, double * Y1, double * z1, double * X2, double * Y2, double * z2, double * ZLevel, long * NumberVerticalBars, long * NumberHorizontalBars, long * TotalAreaObjects, SAFEARRAY * * AreaObjectNames );
__declspec(implementation_key(1055)) long cDetailing::GetDetailedWall_OneWallStack_OnePier_OneDesignLeg_OneVerticalBarInfo ( long WallStackIndex, long PierIndex, long DesignLegIndex, long VerticalBarIndex, BSTR * GUID, double * BarSizeFirst_Dia, double * BarSizeFirst_Area, double * BarSizeFirst_Fy, BSTR * BarSizeFirst_Notation, double * BarSizeLast_Dia, double * BarSizeLast_Area, double * BarSizeLast_Fy, BSTR * BarSizeLast_Notation, double * BarSizeOthers_Dia, double * BarSizeOthers_Area, double * BarSizeOthers_Fy, BSTR * BarSizeOthers_Notation, long * Number, double * StartX, double * StartY, double * EndX, double * EndY, long * StartBarBend, long * EndBarBend, double * OffsetZ, double * BarLength, long * LocationCode );
__declspec(implementation_key(1056)) long cDetailing::GetDetailedWall_OneWallStack_OnePier_OneDesignLeg_OneTieBarInfo ( long WallStackIndex, long PierIndex, long DesignLegIndex, long TieBarIndex, BSTR * GUID, double * BarSize_Dia, double * BarSize_Area, double * BarSize_Fy, BSTR * BarSize_Notation, double * Spacing, double * StartZ, double * EndZ, long * TieShape, long * NumberOfTiePlines );
__declspec(implementation_key(1057)) long cDetailing::GetDetailedWall_OneWallStack_OnePier_OneDesignLeg_OneTieBar_OneTiePlineInfo ( long WallStackIndex, long PierIndex, long DesignLegIndex, long TieBarIndex, long TiePLineIndex, double * Dia, long * NumberPoints, double * ZoneLength, long * LocationCode );
__declspec(implementation_key(1058)) long cDetailing::GetDetailedWall_OnePier_OneDesignLeg_OneTieBar_OneTiePline_OnePoint ( long WallStackIndex, long PierIndex, long DesignLegIndex, long TieBarIndex, long TiePLineIndex, long TPLinePointIndex, double * X, double * Y, double * Z );
__declspec(implementation_key(1059)) long cDetailing::GetDetailedWall_OneWallStack_OneSpandrelOutputInfo ( long WallStackIndex, long SpandrelIndex, BSTR * GUID, BSTR * Name, double * Height, double * Width, double * Thickness, double * CoverLongBar, double * CoverStirrups, double * X1, double * Y1, double * z1, double * X2, double * Y2, double * z2, long * NumberLongBars, long * NumberStirrups, long * TotalAreaObjects, SAFEARRAY * * AreaObjectNames );
__declspec(implementation_key(1060)) long cDetailing::GetDetailedWall_OneWallStack_OneSpandrel_OneLongBarInfo ( long WallStackIndex, long SpandrelIndex, long LongBarIndex, double * BarSize_Dia, double * BarSize_Area, double * BarSize_Fy, BSTR * BarSize_Notation, long * NumberPoints, SAFEARRAY * * X, SAFEARRAY * * Y, SAFEARRAY * * Z, long * StartType, long * EndType );
__declspec(implementation_key(1061)) long cDetailing::GetDetailedWall_OneWallStack_OneSpandrel_OneStirrupsInfo ( long WallStackIndex, long SpandrelIndex, long StirrupsIndex, double * BarSize_Dia, double * BarSize_Area, double * BarSize_Fy, BSTR * BarSize_Notation, double * X1, double * X2, double * Spacing, long * NumberLegs );
__declspec(implementation_key(1062)) long cDetailing::GetDetailedBeamLines_1 ( long * NumberItems, SAFEARRAY * * TowerNames, SAFEARRAY * * StoryNames, SAFEARRAY * * BeamLineIDs );
__declspec(implementation_key(1063)) long cDetailing::GetDetailedBeamLineData_2 ( _bstr_t TowerName, _bstr_t StoryName, _bstr_t BeamLineID, long * NumberOfObjects, SAFEARRAY * * ObjectUniqueNames, long * NumberSpans, SAFEARRAY * * SpanLength, SAFEARRAY * * NumLongBars, SAFEARRAY * * LongBarGUID, SAFEARRAY * * LongBarDiameter, SAFEARRAY * * LongBarNotation, SAFEARRAY * * LongBarStartDist, SAFEARRAY * * LongBarStartBend, SAFEARRAY * * LongBarEndBend, SAFEARRAY * * LongBarLength, SAFEARRAY * * LongBarNumLayers, SAFEARRAY * * NumTieBars, SAFEARRAY * * NumTieVertLegs, SAFEARRAY * * TieBarGUID, SAFEARRAY * * TieBarDiameter, SAFEARRAY * * TieBarNotation, SAFEARRAY * * TieBarStartDist, SAFEARRAY * * TieBarSpacing, SAFEARRAY * * TieBarType );
__declspec(implementation_key(1064)) long cDetailing::GetSimilarBeamLines_1 ( _bstr_t TowerName, _bstr_t StoryName, _bstr_t BeamLineID, long * NumberSimilarBeams, SAFEARRAY * * NumberUniqueObjects, SAFEARRAY * * ObjectUniqueNames );
__declspec(implementation_key(1065)) long cEditFrame::ChangeConnectivity ( _bstr_t Name, _bstr_t Point1, _bstr_t Point2 );
__declspec(implementation_key(1066)) long cEditGeneral::Move ( double DX, double DY, double DZ );
__declspec(implementation_key(1067)) long cFile::NewBlank ( );
__declspec(implementation_key(1068)) long cFile::OpenFile ( _bstr_t FileName );
__declspec(implementation_key(1069)) long cFile::Save ( _bstr_t FileName );
__declspec(implementation_key(1070)) long cFile::GetFilePath ( BSTR * FilePath );
__declspec(implementation_key(1071)) long cFile::NewSteelDeck ( long NumberStorys, double TypicalStoryHeight, double BottomStoryHeight, long NumberLinesX, long NumberLinesY, double SpacingX, double SpacingY );
__declspec(implementation_key(1072)) long cFile::NewGridOnly ( long NumberStorys, double TypicalStoryHeight, double BottomStoryHeight, long NumberLinesX, long NumberLinesY, double SpacingX, double SpacingY );
__declspec(implementation_key(1073)) long cDatabaseTables::ApplyEditedTables ( VARIANT_BOOL FillImportLog, long * NumFatalErrors, long * NumErrorMsgs, long * NumWarnMsgs, long * NumInfoMsgs, BSTR * ImportLog );
__declspec(implementation_key(1074)) long cDatabaseTables::CancelTableEditing ( );
__declspec(implementation_key(1075)) long cDatabaseTables::GetAllFieldsInTable ( _bstr_t TableKey, long * TableVersion, long * NumberFields, SAFEARRAY * * FieldKey, SAFEARRAY * * FieldName, SAFEARRAY * * Description, SAFEARRAY * * UnitsString, SAFEARRAY * * IsImportable );
__declspec(implementation_key(1076)) long cDatabaseTables::GetAllTables ( long * NumberTables, SAFEARRAY * * TableKey, SAFEARRAY * * TableName, SAFEARRAY * * ImportType, SAFEARRAY * * IsEmpty );
__declspec(implementation_key(1077)) long cDatabaseTables::GetAvailableTables ( long * NumberTables, SAFEARRAY * * TableKey, SAFEARRAY * * TableName, SAFEARRAY * * ImportType );
__declspec(implementation_key(1078)) long cDatabaseTables::GetLoadCasesSelectedForDisplay ( long * NumberSelectedLoadCases, SAFEARRAY * * LoadCaseList );
__declspec(implementation_key(1079)) long cDatabaseTables::GetLoadCombinationsSelectedForDisplay ( long * NumberSelectedLoadCombinations, SAFEARRAY * * LoadCombinationList );
__declspec(implementation_key(1080)) long cDatabaseTables::GetLoadPatternsSelectedForDisplay ( long * NumberSelectedLoadPatterns, SAFEARRAY * * LoadPatternList );
__declspec(implementation_key(1081)) long cDatabaseTables::GetTableForDisplayArray ( _bstr_t TableKey, SAFEARRAY * * FieldKeyList, _bstr_t GroupName, long * TableVersion, SAFEARRAY * * FieldsKeysIncluded, long * NumberRecords, SAFEARRAY * * TableData );
__declspec(implementation_key(1082)) long cDatabaseTables::GetTableForDisplayCSVFile ( _bstr_t TableKey, SAFEARRAY * * FieldKeyList, _bstr_t GroupName, long * TableVersion, _bstr_t csvFilePath, _bstr_t sepChar );
__declspec(implementation_key(1083)) long cDatabaseTables::GetTableForDisplayCSVString ( _bstr_t TableKey, SAFEARRAY * * FieldKeyList, _bstr_t GroupName, long * TableVersion, BSTR * csvString, _bstr_t sepChar );
__declspec(implementation_key(1084)) long cDatabaseTables::GetTableForDisplayXMLString ( _bstr_t TableKey, SAFEARRAY * * FieldKeyList, _bstr_t GroupName, VARIANT_BOOL IncludeSchema, long * TableVersion, BSTR * XMLTableData );
__declspec(implementation_key(1085)) long cDatabaseTables::GetTableForEditingArray ( _bstr_t TableKey, _bstr_t GroupName, long * TableVersion, SAFEARRAY * * FieldsKeysIncluded, long * NumberRecords, SAFEARRAY * * TableData );
__declspec(implementation_key(1086)) long cDatabaseTables::GetTableForEditingCSVFile ( _bstr_t TableKey, _bstr_t GroupName, long * TableVersion, _bstr_t csvFilePath, _bstr_t sepChar );
__declspec(implementation_key(1087)) long cDatabaseTables::GetTableForEditingCSVString ( _bstr_t TableKey, _bstr_t GroupName, long * TableVersion, BSTR * csvString, _bstr_t sepChar );
__declspec(implementation_key(1088)) long cDatabaseTables::SetLoadCasesSelectedForDisplay ( SAFEARRAY * * LoadCaseList );
__declspec(implementation_key(1089)) long cDatabaseTables::SetLoadCombinationsSelectedForDisplay ( SAFEARRAY * * LoadCombinationList );
__declspec(implementation_key(1090)) long cDatabaseTables::SetLoadPatternsSelectedForDisplay ( SAFEARRAY * * LoadPatternList );
__declspec(implementation_key(1091)) long cDatabaseTables::SetTableForEditingArray ( _bstr_t TableKey, long * TableVersion, SAFEARRAY * * FieldsKeysIncluded, long NumberRecords, SAFEARRAY * * TableData );
__declspec(implementation_key(1092)) long cDatabaseTables::SetTableForEditingCSVFile ( _bstr_t TableKey, long * TableVersion, _bstr_t csvFilePath, _bstr_t sepChar );
__declspec(implementation_key(1093)) long cDatabaseTables::SetTableForEditingCSVString ( _bstr_t TableKey, long * TableVersion, BSTR * csvString, _bstr_t sepChar );
__declspec(implementation_key(1094)) long cDatabaseTables::ShowTablesInExcel ( SAFEARRAY * * TableKeyList, long WindowHandle );
__declspec(implementation_key(1095)) long cDatabaseTables::GetObsoleteTableKeyList ( long * NumberTableKeys, SAFEARRAY * * TableKeyList, SAFEARRAY * * NotesList );
__declspec(implementation_key(1096)) long cDatabaseTables::GetOutputOptionsForDisplay ( VARIANT_BOOL * IsUserBaseReactionLocation, double * UserBaseReactionX, double * UserBaseReactionY, double * UserBaseReactionZ, VARIANT_BOOL * IsAllModes, long * StartMode, long * EndMode, VARIANT_BOOL * IsAllBucklingModes, long * StartBucklingMode, long * EndBucklingMode, long * MultistepStatic, long * NonlinearStatic, long * ModalHistory, long * DirectHistory, long * Combo );
__declspec(implementation_key(1097)) long cDatabaseTables::SetOutputOptionsForDisplay ( VARIANT_BOOL IsUserBaseReactionLocation, double UserBaseReactionX, double UserBaseReactionY, double UserBaseReactionZ, VARIANT_BOOL IsAllModes, long StartMode, long EndMode, VARIANT_BOOL IsAllBucklingModes, long StartBucklingMode, long EndBucklingMode, long MultistepStatic, long NonlinearStatic, long ModalHistory, long DirectHistory, long Combo );
__declspec(implementation_key(1098)) long cAreaObj::AddByCoord ( long NumberPoints, SAFEARRAY * * X, SAFEARRAY * * Y, SAFEARRAY * * Z, BSTR * Name, _bstr_t PropName, _bstr_t UserName, _bstr_t CSys );
__declspec(implementation_key(1099)) long cAreaObj::AddByPoint ( long NumberPoints, SAFEARRAY * * Point, BSTR * Name, _bstr_t PropName, _bstr_t UserName );
__declspec(implementation_key(1100)) long cAreaObj::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(1101)) long cAreaObj::Count ( );
__declspec(implementation_key(1102)) long cAreaObj::Delete ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1103)) long cAreaObj::DeleteLoadTemperature ( _bstr_t Name, _bstr_t LoadPat, enum eItemType ItemType );
__declspec(implementation_key(1104)) long cAreaObj::DeleteLoadUniform ( _bstr_t Name, _bstr_t LoadPat, enum eItemType ItemType );
__declspec(implementation_key(1105)) long cAreaObj::DeleteLoadUniformToFrame ( _bstr_t Name, _bstr_t LoadPat, enum eItemType ItemType );
__declspec(implementation_key(1106)) long cAreaObj::DeleteLoadWindPressure ( _bstr_t Name, _bstr_t LoadPat, enum eItemType ItemType );
__declspec(implementation_key(1107)) long cAreaObj::DeleteMass ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1108)) long cAreaObj::DeleteModifiers ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1109)) long cAreaObj::DeleteSpring ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1110)) long cAreaObj::GetEdgeConstraint ( _bstr_t Name, VARIANT_BOOL * ConstraintExists );
__declspec(implementation_key(1111)) long cAreaObj::GetElm ( _bstr_t Name, long * NElm, SAFEARRAY * * Elm );
__declspec(implementation_key(1112)) long cAreaObj::GetGUID ( _bstr_t Name, BSTR * GUID );
__declspec(implementation_key(1113)) long cAreaObj::GetLoadTemperature ( _bstr_t Name, long * NumberItems, SAFEARRAY * * AreaName, SAFEARRAY * * LoadPat, SAFEARRAY * * MyType, SAFEARRAY * * Value, SAFEARRAY * * PatternName, enum eItemType ItemType );
__declspec(implementation_key(1114)) long cAreaObj::GetLoadUniform ( _bstr_t Name, long * NumberItems, SAFEARRAY * * AreaName, SAFEARRAY * * LoadPat, SAFEARRAY * * CSys, SAFEARRAY * * Dir, SAFEARRAY * * Value, enum eItemType ItemType );
__declspec(implementation_key(1115)) long cAreaObj::GetLoadUniformToFrame ( _bstr_t Name, long * NumberItems, SAFEARRAY * * AreaName, SAFEARRAY * * LoadPat, SAFEARRAY * * CSys, SAFEARRAY * * Dir, SAFEARRAY * * Value, SAFEARRAY * * DistType, enum eItemType ItemType );
__declspec(implementation_key(1116)) long cAreaObj::GetLoadWindPressure ( _bstr_t Name, long * NumberItems, SAFEARRAY * * AreaName, SAFEARRAY * * LoadPat, SAFEARRAY * * MyType, SAFEARRAY * * Cp, enum eItemType ItemType );
__declspec(implementation_key(1117)) long cAreaObj::GetLocalAxes ( _bstr_t Name, double * Ang, VARIANT_BOOL * Advanced );
__declspec(implementation_key(1118)) long cAreaObj::GetMass ( _bstr_t Name, double * MassOverL2 );
__declspec(implementation_key(1119)) long cAreaObj::GetMaterialOverwrite ( _bstr_t Name, BSTR * PropName );
__declspec(implementation_key(1120)) long cAreaObj::GetModifiers ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(1121)) long cAreaObj::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(1122)) long cAreaObj::GetOpening ( _bstr_t Name, VARIANT_BOOL * IsOpening );
__declspec(implementation_key(1123)) long cAreaObj::GetPoints ( _bstr_t Name, long * NumberPoints, SAFEARRAY * * Point );
__declspec(implementation_key(1124)) long cAreaObj::GetProperty ( _bstr_t Name, BSTR * PropName );
__declspec(implementation_key(1125)) long cAreaObj::GetSelected ( _bstr_t Name, VARIANT_BOOL * Selected );
__declspec(implementation_key(1126)) long cAreaObj::GetSelectedEdge ( _bstr_t Name, long * NumberEdges, SAFEARRAY * * Selected );
__declspec(implementation_key(1127)) long cAreaObj::GetTransformationMatrix ( _bstr_t Name, SAFEARRAY * * Value, VARIANT_BOOL IsGlobal );
__declspec(implementation_key(1128)) long cAreaObj::SetEdgeConstraint ( _bstr_t Name, VARIANT_BOOL ConstraintExists, enum eItemType ItemType );
__declspec(implementation_key(1129)) long cAreaObj::SetGroupAssign ( _bstr_t Name, _bstr_t GroupName, VARIANT_BOOL Remove, enum eItemType ItemType );
__declspec(implementation_key(1130)) long cAreaObj::SetGUID ( _bstr_t Name, _bstr_t GUID );
__declspec(implementation_key(1131)) long cAreaObj::SetLoadTemperature ( _bstr_t Name, _bstr_t LoadPat, long MyType, double Value, _bstr_t PatternName, VARIANT_BOOL Replace, enum eItemType ItemType );
__declspec(implementation_key(1132)) long cAreaObj::SetLoadUniform ( _bstr_t Name, _bstr_t LoadPat, double Value, long Dir, VARIANT_BOOL Replace, _bstr_t CSys, enum eItemType ItemType );
__declspec(implementation_key(1133)) long cAreaObj::SetLoadUniformToFrame ( _bstr_t Name, _bstr_t LoadPat, double Value, long Dir, long DistType, VARIANT_BOOL Replace, _bstr_t CSys, enum eItemType ItemType );
__declspec(implementation_key(1134)) long cAreaObj::SetLoadWindPressure ( _bstr_t Name, _bstr_t LoadPat, long MyType, double Cp, enum eItemType ItemType );
__declspec(implementation_key(1135)) long cAreaObj::SetLocalAxes ( _bstr_t Name, double Ang, enum eItemType ItemType );
__declspec(implementation_key(1136)) long cAreaObj::SetMass ( _bstr_t Name, double MassOverL2, VARIANT_BOOL Replace, enum eItemType ItemType );
__declspec(implementation_key(1137)) long cAreaObj::SetMaterialOverwrite ( _bstr_t Name, _bstr_t PropName, enum eItemType ItemType );
__declspec(implementation_key(1138)) long cAreaObj::SetModifiers ( _bstr_t Name, SAFEARRAY * * Value, enum eItemType ItemType );
__declspec(implementation_key(1139)) long cAreaObj::SetOpening ( _bstr_t Name, VARIANT_BOOL IsOpening, enum eItemType ItemType );
__declspec(implementation_key(1140)) long cAreaObj::SetProperty ( _bstr_t Name, _bstr_t PropName, enum eItemType ItemType );
__declspec(implementation_key(1141)) long cAreaObj::SetSelected ( _bstr_t Name, VARIANT_BOOL Selected, enum eItemType ItemType );
__declspec(implementation_key(1142)) long cAreaObj::SetSelectedEdge ( _bstr_t Name, long EdgeNum, VARIANT_BOOL Selected );
__declspec(implementation_key(1143)) long cAreaObj::GetGroupAssign ( _bstr_t Name, long * NumberGroups, SAFEARRAY * * Groups );
__declspec(implementation_key(1144)) long cAreaObj::GetDesignOrientation ( _bstr_t Name, enum eAreaDesignOrientation * DesignOrientation );
__declspec(implementation_key(1145)) long cAreaObj::GetNameListOnStory ( _bstr_t StoryName, long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(1146)) long cAreaObj::GetDiaphragm ( _bstr_t Name, BSTR * DiaphragmName );
__declspec(implementation_key(1147)) long cAreaObj::SetDiaphragm ( _bstr_t Name, _bstr_t DiaphragmName );
__declspec(implementation_key(1148)) long cAreaObj::GetLabelNameList ( long * NumberNames, SAFEARRAY * * MyName, SAFEARRAY * * MyLabel, SAFEARRAY * * MyStory );
__declspec(implementation_key(1149)) long cAreaObj::GetLabelFromName ( _bstr_t Name, BSTR * Label, BSTR * Story );
__declspec(implementation_key(1150)) long cAreaObj::GetNameFromLabel ( _bstr_t Label, _bstr_t Story, BSTR * Name );
__declspec(implementation_key(1151)) long cAreaObj::GetRebarDataPier ( _bstr_t Name, long * NumberRebarLayers, SAFEARRAY * * LayerID, SAFEARRAY * * LayerType, SAFEARRAY * * ClearCover, SAFEARRAY * * BarSizeName, SAFEARRAY * * BarArea, SAFEARRAY * * BarSpacing, SAFEARRAY * * NumberBars, SAFEARRAY * * Confined, SAFEARRAY * * EndZoneLength, SAFEARRAY * * EndZoneThickness, SAFEARRAY * * EndZoneOffset );
__declspec(implementation_key(1152)) long cAreaObj::GetRebarDataSpandrel ( _bstr_t Name, long * NumberRebarLayers, SAFEARRAY * * LayerID, SAFEARRAY * * LayerType, SAFEARRAY * * ClearCover, SAFEARRAY * * BarSizeIndex, SAFEARRAY * * BarArea, SAFEARRAY * * BarSpacing, SAFEARRAY * * NumberBars, SAFEARRAY * * Confined );
__declspec(implementation_key(1153)) long cAreaObj::GetAllAreas ( long * NumberNames, SAFEARRAY * * MyName, SAFEARRAY * * DesignOrientation, long * NumberBoundaryPts, SAFEARRAY * * PointDelimiter, SAFEARRAY * * PointNames, SAFEARRAY * * PointX, SAFEARRAY * * PointY, SAFEARRAY * * PointZ );
__declspec(implementation_key(1154)) long cAreaObj::GetPier ( _bstr_t Name, BSTR * PierName );
__declspec(implementation_key(1155)) long cAreaObj::SetPier ( _bstr_t Name, _bstr_t PierName, enum eItemType ItemType );
__declspec(implementation_key(1156)) long cAreaObj::GetSpandrel ( _bstr_t Name, BSTR * SpandrelName );
__declspec(implementation_key(1157)) long cAreaObj::SetSpandrel ( _bstr_t Name, _bstr_t SpandrelName, enum eItemType ItemType );
__declspec(implementation_key(1158)) long cAreaObj::GetSpringAssignment ( _bstr_t Name, BSTR * SpringProp );
__declspec(implementation_key(1159)) long cAreaObj::SetSpringAssignment ( _bstr_t Name, _bstr_t SpringProp, enum eItemType ItemType );
__declspec(implementation_key(1160)) long cAreaObj::GetOffsets3 ( _bstr_t Name, long * NumberPoints, SAFEARRAY * * Offsets );
__declspec(implementation_key(1161)) long cAreaObj::GetCurvedEdges ( _bstr_t Name, long * NumEdges, SAFEARRAY * * CurveType, SAFEARRAY * * Tension, SAFEARRAY * * NumPoints, SAFEARRAY * * GX, SAFEARRAY * * GY, SAFEARRAY * * GZ );
__declspec(implementation_key(1162)) long cFrameObj::AddByCoord ( double XI, double YI, double ZI, double XJ, double YJ, double ZJ, BSTR * Name, _bstr_t PropName, _bstr_t UserName, _bstr_t CSys );
__declspec(implementation_key(1163)) long cFrameObj::AddByPoint ( _bstr_t Point1, _bstr_t Point2, BSTR * Name, _bstr_t PropName, _bstr_t UserName );
__declspec(implementation_key(1164)) long cFrameObj::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(1165)) long cFrameObj::Count ( _bstr_t MyType );
__declspec(implementation_key(1166)) long cFrameObj::Delete ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1167)) long cFrameObj::DeleteLateralBracing ( _bstr_t Name, long MyType, enum eItemType ItemType );
__declspec(implementation_key(1168)) long cFrameObj::DeleteLoadDistributed ( _bstr_t Name, _bstr_t LoadPat, enum eItemType ItemType );
__declspec(implementation_key(1169)) long cFrameObj::DeleteLoadPoint ( _bstr_t Name, _bstr_t LoadPat, enum eItemType ItemType );
__declspec(implementation_key(1170)) long cFrameObj::DeleteLoadTemperature ( _bstr_t Name, _bstr_t LoadPat, enum eItemType ItemType );
__declspec(implementation_key(1171)) long cFrameObj::DeleteMass ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1172)) long cFrameObj::DeleteModifiers ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1173)) long cFrameObj::DeleteSpring ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1174)) long cFrameObj::GetDesignProcedure ( _bstr_t Name, long * MyType );
__declspec(implementation_key(1175)) long cFrameObj::GetElm ( _bstr_t Name, long * NElm, SAFEARRAY * * Elm, SAFEARRAY * * RDI, SAFEARRAY * * RDJ );
__declspec(implementation_key(1176)) long cFrameObj::GetEndLengthOffset ( _bstr_t Name, VARIANT_BOOL * AutoOffset, double * Length1, double * Length2, double * RZ );
__declspec(implementation_key(1177)) long cFrameObj::GetGUID ( _bstr_t Name, BSTR * GUID );
__declspec(implementation_key(1178)) long cFrameObj::GetHingeAssigns ( _bstr_t Name, long * NumberHinges, SAFEARRAY * * HingeNum, SAFEARRAY * * Prop, SAFEARRAY * * MyType, SAFEARRAY * * Behavior, SAFEARRAY * * Source, SAFEARRAY * * RD );
__declspec(implementation_key(1179)) long cFrameObj::GetHingeAssigns_1 ( _bstr_t Name, long * NumberHinges, SAFEARRAY * * HingeNum, SAFEARRAY * * Prop, SAFEARRAY * * MyType, SAFEARRAY * * Behavior, SAFEARRAY * * Source, SAFEARRAY * * LocType, SAFEARRAY * * RD, SAFEARRAY * * AD );
__declspec(implementation_key(1180)) long cFrameObj::GetInsertionPoint ( _bstr_t Name, long * CardinalPoint, VARIANT_BOOL * Mirror2, VARIANT_BOOL * StiffTransform, SAFEARRAY * * Offset1, SAFEARRAY * * Offset2, BSTR * CSys );
__declspec(implementation_key(1181)) long cFrameObj::GetInsertionPoint_1 ( _bstr_t Name, long * CardinalPoint, VARIANT_BOOL * Mirror2, VARIANT_BOOL * Mirror3, VARIANT_BOOL * StiffTransform, SAFEARRAY * * Offset1, SAFEARRAY * * Offset2, BSTR * CSys );
__declspec(implementation_key(1182)) long cFrameObj::GetLateralBracing ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameName, SAFEARRAY * * MyType, SAFEARRAY * * Loc, SAFEARRAY * * RD1, SAFEARRAY * * RD2, SAFEARRAY * * Dist1, SAFEARRAY * * Dist2 );
__declspec(implementation_key(1183)) long cFrameObj::GetLoadDistributed ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameName, SAFEARRAY * * LoadPat, SAFEARRAY * * MyType, SAFEARRAY * * CSys, SAFEARRAY * * Dir, SAFEARRAY * * RD1, SAFEARRAY * * RD2, SAFEARRAY * * Dist1, SAFEARRAY * * Dist2, SAFEARRAY * * Val1, SAFEARRAY * * Val2, enum eItemType ItemType );
__declspec(implementation_key(1184)) long cFrameObj::GetLoadPoint ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameName, SAFEARRAY * * LoadPat, SAFEARRAY * * MyType, SAFEARRAY * * CSys, SAFEARRAY * * Dir, SAFEARRAY * * RelDist, SAFEARRAY * * Dist, SAFEARRAY * * Val, enum eItemType ItemType );
__declspec(implementation_key(1185)) long cFrameObj::GetLoadTemperature ( _bstr_t Name, long * NumberItems, SAFEARRAY * * FrameName, SAFEARRAY * * LoadPat, SAFEARRAY * * MyType, SAFEARRAY * * Val, SAFEARRAY * * PatternName, enum eItemType ItemType );
__declspec(implementation_key(1186)) long cFrameObj::GetLocalAxes ( _bstr_t Name, double * Ang, VARIANT_BOOL * Advanced );
__declspec(implementation_key(1187)) long cFrameObj::GetMass ( _bstr_t Name, double * MassOverL );
__declspec(implementation_key(1188)) long cFrameObj::GetMaterialOverwrite ( _bstr_t Name, BSTR * PropName );
__declspec(implementation_key(1189)) long cFrameObj::GetModifiers ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(1190)) long cFrameObj::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(1191)) long cFrameObj::GetOutputStations ( _bstr_t Name, long * MyType, double * MaxSegSize, long * MinSections, VARIANT_BOOL * NoOutPutAndDesignAtElementEnds, VARIANT_BOOL * NoOutPutAndDesignAtPointLoads );
__declspec(implementation_key(1192)) long cFrameObj::GetPoints ( _bstr_t Name, BSTR * Point1, BSTR * Point2 );
__declspec(implementation_key(1193)) long cFrameObj::GetReleases ( _bstr_t Name, SAFEARRAY * * II, SAFEARRAY * * JJ, SAFEARRAY * * StartValue, SAFEARRAY * * EndValue );
__declspec(implementation_key(1194)) long cFrameObj::GetSection ( _bstr_t Name, BSTR * PropName, BSTR * SAuto );
__declspec(implementation_key(1195)) long cFrameObj::GetSectionNonPrismatic ( _bstr_t Name, BSTR * PropName, double * SVarTotalLength, double * SVarRelStartLoc );
__declspec(implementation_key(1196)) long cFrameObj::GetSelected ( _bstr_t Name, VARIANT_BOOL * Selected );
__declspec(implementation_key(1197)) long cFrameObj::GetTCLimits ( _bstr_t Name, VARIANT_BOOL * LimitCompressionExists, double * LimitCompression, VARIANT_BOOL * LimitTensionExists, double * LimitTension );
__declspec(implementation_key(1198)) long cFrameObj::GetTransformationMatrix ( _bstr_t Name, SAFEARRAY * * Value, VARIANT_BOOL IsGlobal );
__declspec(implementation_key(1199)) long cFrameObj::GetTypeOAPI ( _bstr_t Name, BSTR * MyType );
__declspec(implementation_key(1200)) long cFrameObj::SetDesignProcedure ( _bstr_t Name, long MyType, enum eItemType ItemType );
__declspec(implementation_key(1201)) long cFrameObj::SetEndLengthOffset ( _bstr_t Name, VARIANT_BOOL AutoOffset, double Length1, double Length2, double RZ, enum eItemType ItemType );
__declspec(implementation_key(1202)) long cFrameObj::SetGroupAssign ( _bstr_t Name, _bstr_t GroupName, VARIANT_BOOL Remove, enum eItemType ItemType );
__declspec(implementation_key(1203)) long cFrameObj::SetGUID ( _bstr_t Name, _bstr_t GUID );
__declspec(implementation_key(1204)) long cFrameObj::SetInsertionPoint ( _bstr_t Name, long CardinalPoint, VARIANT_BOOL Mirror2, VARIANT_BOOL StiffTransform, SAFEARRAY * * Offset1, SAFEARRAY * * Offset2, _bstr_t CSys, enum eItemType ItemType );
__declspec(implementation_key(1205)) long cFrameObj::SetInsertionPoint_1 ( _bstr_t Name, long CardinalPoint, VARIANT_BOOL Mirror2, VARIANT_BOOL Mirror3, VARIANT_BOOL StiffTransform, SAFEARRAY * * Offset1, SAFEARRAY * * Offset2, _bstr_t CSys, enum eItemType ItemType );
__declspec(implementation_key(1206)) long cFrameObj::SetLateralBracing ( _bstr_t Name, long MyType, long Loc, double MyDist1, double MyDist2, VARIANT_BOOL RelDist, enum eItemType ItemType );
__declspec(implementation_key(1207)) long cFrameObj::SetLoadDistributed ( _bstr_t Name, _bstr_t LoadPat, long MyType, long Dir, double Dist1, double Dist2, double Val1, double Val2, _bstr_t CSys, VARIANT_BOOL RelDist, VARIANT_BOOL Replace, enum eItemType ItemType );
__declspec(implementation_key(1208)) long cFrameObj::SetLoadPoint ( _bstr_t Name, _bstr_t LoadPat, long MyType, long Dir, double Dist, double Val, _bstr_t CSys, VARIANT_BOOL RelDist, VARIANT_BOOL Replace, enum eItemType ItemType );
__declspec(implementation_key(1209)) long cFrameObj::SetLoadTemperature ( _bstr_t Name, _bstr_t LoadPat, long MyType, double Val, _bstr_t PatternName, VARIANT_BOOL Replace, enum eItemType ItemType );
__declspec(implementation_key(1210)) long cFrameObj::SetLocalAxes ( _bstr_t Name, double Ang, enum eItemType ItemType );
__declspec(implementation_key(1211)) long cFrameObj::SetMass ( _bstr_t Name, double MassOverL, VARIANT_BOOL Replace, enum eItemType ItemType );
__declspec(implementation_key(1212)) long cFrameObj::SetMaterialOverwrite ( _bstr_t Name, _bstr_t PropName, enum eItemType ItemType );
__declspec(implementation_key(1213)) long cFrameObj::SetModifiers ( _bstr_t Name, SAFEARRAY * * Value, enum eItemType ItemType );
__declspec(implementation_key(1214)) long cFrameObj::SetOutputStations ( _bstr_t Name, long MyType, double MaxSegSize, long MinSections, VARIANT_BOOL NoOutPutAndDesignAtElementEnds, VARIANT_BOOL NoOutPutAndDesignAtPointLoads, enum eItemType ItemType );
__declspec(implementation_key(1215)) long cFrameObj::SetReleases ( _bstr_t Name, SAFEARRAY * * II, SAFEARRAY * * JJ, SAFEARRAY * * StartValue, SAFEARRAY * * EndValue, enum eItemType ItemType );
__declspec(implementation_key(1216)) long cFrameObj::SetSection ( _bstr_t Name, _bstr_t PropName, enum eItemType ItemType, double SVarRelStartLoc, double SVarTotalLength );
__declspec(implementation_key(1217)) long cFrameObj::SetSelected ( _bstr_t Name, VARIANT_BOOL Selected, enum eItemType ItemType );
__declspec(implementation_key(1218)) long cFrameObj::SetTCLimits ( _bstr_t Name, VARIANT_BOOL LimitCompressionExists, double LimitCompression, VARIANT_BOOL LimitTensionExists, double LimitTension, enum eItemType ItemType );
__declspec(implementation_key(1219)) long cFrameObj::GetGroupAssign ( _bstr_t Name, long * NumberGroups, SAFEARRAY * * Groups );
__declspec(implementation_key(1220)) long cFrameObj::GetColumnSpliceOverwrite ( _bstr_t Name, long * SpliceOption, double * Height );
__declspec(implementation_key(1221)) long cFrameObj::GetNameListOnStory ( _bstr_t StoryName, long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(1222)) long cFrameObj::GetLabelNameList ( long * NumberNames, SAFEARRAY * * MyName, SAFEARRAY * * MyLabel, SAFEARRAY * * MyStory );
__declspec(implementation_key(1223)) long cFrameObj::GetLabelFromName ( _bstr_t Name, BSTR * Label, BSTR * Story );
__declspec(implementation_key(1224)) long cFrameObj::GetNameFromLabel ( _bstr_t Label, _bstr_t Story, BSTR * Name );
__declspec(implementation_key(1225)) long cFrameObj::GetSupports ( _bstr_t Name, BSTR * SupportName1, enum eObjType * SupportType1, BSTR * SupportName2, enum eObjType * SupportType2 );
__declspec(implementation_key(1226)) long cFrameObj::GetAllFrames ( long * NumberNames, SAFEARRAY * * MyName, SAFEARRAY * * PropName, SAFEARRAY * * StoryName, SAFEARRAY * * PointName1, SAFEARRAY * * PointName2, SAFEARRAY * * Point1X, SAFEARRAY * * Point1Y, SAFEARRAY * * Point1Z, SAFEARRAY * * Point2X, SAFEARRAY * * Point2Y, SAFEARRAY * * Point2Z, SAFEARRAY * * Angle, SAFEARRAY * * Offset1X, SAFEARRAY * * Offset2X, SAFEARRAY * * Offset1Y, SAFEARRAY * * Offset2Y, SAFEARRAY * * Offset1Z, SAFEARRAY * * Offset2Z, SAFEARRAY * * CardinalPoint, _bstr_t CSys );
__declspec(implementation_key(1227)) long cFrameObj::GetDesignOrientation ( _bstr_t Name, enum eFrameDesignOrientation * DesignOrientation );
__declspec(implementation_key(1228)) long cFrameObj::GetPier ( _bstr_t Name, BSTR * PierName );
__declspec(implementation_key(1229)) long cFrameObj::SetPier ( _bstr_t Name, _bstr_t PierName, enum eItemType ItemType );
__declspec(implementation_key(1230)) long cFrameObj::GetSpandrel ( _bstr_t Name, BSTR * SpandrelName );
__declspec(implementation_key(1231)) long cFrameObj::SetColumnSpliceOverwrite ( _bstr_t Name, long SpliceOption, double Height, enum eItemType ItemType );
__declspec(implementation_key(1232)) long cFrameObj::SetSpandrel ( _bstr_t Name, _bstr_t SpandrelName, enum eItemType ItemType );
__declspec(implementation_key(1233)) long cFrameObj::GetSpringAssignment ( _bstr_t Name, BSTR * SpringProp );
__declspec(implementation_key(1234)) long cFrameObj::SetSpringAssignment ( _bstr_t Name, _bstr_t SpringProp, enum eItemType ItemType );
__declspec(implementation_key(1235)) long cFrameObj::GetCurved_2 ( _bstr_t Name, long * CurveType, double * Tension, long * NumPnts, SAFEARRAY * * GX, SAFEARRAY * * GY, SAFEARRAY * * GZ );
__declspec(implementation_key(1236)) long cLinkObj::AddByCoord ( double XI, double YI, double ZI, double XJ, double YJ, double ZJ, BSTR * Name, VARIANT_BOOL IsSingleJoint, _bstr_t PropName, _bstr_t UserName, _bstr_t CSys );
__declspec(implementation_key(1237)) long cLinkObj::AddByPoint ( _bstr_t Point1, _bstr_t Point2, BSTR * Name, VARIANT_BOOL IsSingleJoint, _bstr_t PropName, _bstr_t UserName );
__declspec(implementation_key(1238)) long cLinkObj::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(1239)) long cLinkObj::Count ( );
__declspec(implementation_key(1240)) long cLinkObj::Delete ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1241)) long cLinkObj::GetElm ( _bstr_t Name, BSTR * Elm );
__declspec(implementation_key(1242)) long cLinkObj::GetGUID ( _bstr_t Name, BSTR * GUID );
__declspec(implementation_key(1243)) long cLinkObj::GetLocalAxes ( _bstr_t Name, double * Ang, VARIANT_BOOL * Advanced );
__declspec(implementation_key(1244)) long cLinkObj::GetLocalAxesAdvanced ( _bstr_t Name, VARIANT_BOOL * Active, long * AxVectOpt, BSTR * AxCSys, SAFEARRAY * * AxDir, SAFEARRAY * * AxPt, SAFEARRAY * * AxVect, long * Plane2, long * PlVectOpt, BSTR * PlCSys, SAFEARRAY * * PlDir, SAFEARRAY * * PlPt, SAFEARRAY * * PlVect );
__declspec(implementation_key(1245)) long cLinkObj::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(1246)) long cLinkObj::GetPoints ( _bstr_t Name, BSTR * Point1, BSTR * Point2 );
__declspec(implementation_key(1247)) long cLinkObj::GetProperty ( _bstr_t Name, BSTR * PropName );
__declspec(implementation_key(1248)) long cLinkObj::GetSelected ( _bstr_t Name, VARIANT_BOOL * Selected );
__declspec(implementation_key(1249)) long cLinkObj::GetTransformationMatrix ( _bstr_t Name, SAFEARRAY * * Value, VARIANT_BOOL IsGlobal );
__declspec(implementation_key(1250)) long cLinkObj::SetGroupAssign ( _bstr_t Name, _bstr_t GroupName, VARIANT_BOOL Remove, enum eItemType ItemType );
__declspec(implementation_key(1251)) long cLinkObj::SetGUID ( _bstr_t Name, _bstr_t GUID );
__declspec(implementation_key(1252)) long cLinkObj::SetLocalAxes ( _bstr_t Name, double Ang, enum eItemType ItemType );
__declspec(implementation_key(1253)) long cLinkObj::SetLocalAxesAdvanced ( _bstr_t Name, VARIANT_BOOL Active, long AxVectOpt, _bstr_t AxCSys, SAFEARRAY * * AxDir, SAFEARRAY * * AxPt, SAFEARRAY * * AxVect, long Plane2, long PlVectOpt, _bstr_t PlCSys, SAFEARRAY * * PlDir, SAFEARRAY * * PlPt, SAFEARRAY * * PlVect, enum eItemType ItemType );
__declspec(implementation_key(1254)) long cLinkObj::SetProperty ( _bstr_t Name, _bstr_t PropName, enum eItemType ItemType );
__declspec(implementation_key(1255)) long cLinkObj::SetSelected ( _bstr_t Name, VARIANT_BOOL Selected, enum eItemType ItemType );
__declspec(implementation_key(1256)) long cLinkObj::GetGroupAssign ( _bstr_t Name, long * NumberGroups, SAFEARRAY * * Groups );
__declspec(implementation_key(1257)) long cLinkObj::GetNameListOnStory ( _bstr_t StoryName, long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(1258)) long cPointObj::AddCartesian ( double X, double Y, double Z, BSTR * Name, _bstr_t UserName, _bstr_t CSys, VARIANT_BOOL MergeOff, long MergeNumber );
__declspec(implementation_key(1259)) long cPointObj::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(1260)) long cPointObj::Count ( );
__declspec(implementation_key(1261)) long cPointObj::CountLoadDispl ( long * Count, _bstr_t Name, _bstr_t LoadPat );
__declspec(implementation_key(1262)) long cPointObj::CountLoadForce ( long * Count, _bstr_t Name, _bstr_t LoadPat );
__declspec(implementation_key(1263)) long cPointObj::CountPanelZone ( );
__declspec(implementation_key(1264)) long cPointObj::CountRestraint ( );
__declspec(implementation_key(1265)) long cPointObj::CountSpring ( );
__declspec(implementation_key(1266)) long cPointObj::DeleteLoadDispl ( _bstr_t Name, _bstr_t LoadPat, enum eItemType ItemType );
__declspec(implementation_key(1267)) long cPointObj::DeleteLoadForce ( _bstr_t Name, _bstr_t LoadPat, enum eItemType ItemType );
__declspec(implementation_key(1268)) long cPointObj::DeleteMass ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1269)) long cPointObj::DeletePanelZone ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1270)) long cPointObj::DeleteRestraint ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1271)) long cPointObj::DeleteSpecialPoint ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1272)) long cPointObj::DeleteSpring ( _bstr_t Name, enum eItemType ItemType );
__declspec(implementation_key(1273)) long cPointObj::GetCommonTo ( _bstr_t Name, long * CommonTo );
__declspec(implementation_key(1274)) long cPointObj::GetConnectivity ( _bstr_t Name, long * NumberItems, SAFEARRAY * * ObjectType, SAFEARRAY * * ObjectName, SAFEARRAY * * PointNumber );
__declspec(implementation_key(1275)) long cPointObj::GetCoordCartesian ( _bstr_t Name, double * X, double * Y, double * Z, _bstr_t CSys );
__declspec(implementation_key(1276)) long cPointObj::GetCoordCylindrical ( _bstr_t Name, double * R, double * Theta, double * Z, _bstr_t CSys );
__declspec(implementation_key(1277)) long cPointObj::GetCoordSpherical ( _bstr_t Name, double * R, double * A, double * B, _bstr_t CSys );
__declspec(implementation_key(1278)) long cPointObj::GetElm ( _bstr_t Name, BSTR * Elm );
__declspec(implementation_key(1279)) long cPointObj::GetGUID ( _bstr_t Name, BSTR * GUID );
__declspec(implementation_key(1280)) long cPointObj::GetLoadDispl ( _bstr_t Name, long * NumberItems, SAFEARRAY * * PointName, SAFEARRAY * * LoadPat, SAFEARRAY * * LcStep, SAFEARRAY * * CSys, SAFEARRAY * * U1, SAFEARRAY * * U2, SAFEARRAY * * U3, SAFEARRAY * * R1, SAFEARRAY * * R2, SAFEARRAY * * R3, enum eItemType ItemType );
__declspec(implementation_key(1281)) long cPointObj::GetLoadForce ( _bstr_t Name, long * NumberItems, SAFEARRAY * * PointName, SAFEARRAY * * LoadPat, SAFEARRAY * * LcStep, SAFEARRAY * * CSys, SAFEARRAY * * F1, SAFEARRAY * * F2, SAFEARRAY * * F3, SAFEARRAY * * M1, SAFEARRAY * * M2, SAFEARRAY * * M3, enum eItemType ItemType );
__declspec(implementation_key(1282)) long cPointObj::GetLocalAxes ( _bstr_t Name, double * A, double * B, double * C, VARIANT_BOOL * Advanced );
__declspec(implementation_key(1283)) long cPointObj::GetMass ( _bstr_t Name, SAFEARRAY * * M );
__declspec(implementation_key(1284)) long cPointObj::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(1285)) long cPointObj::GetPanelZone ( _bstr_t Name, long * PropType, double * Thickness, double * K1, double * K2, BSTR * LinkProp, long * Connectivity, long * LocalAxisFrom, double * LocalAxisAngle );
__declspec(implementation_key(1286)) long cPointObj::GetRestraint ( _bstr_t Name, SAFEARRAY * * Value );
__declspec(implementation_key(1287)) long cPointObj::GetSelected ( _bstr_t Name, VARIANT_BOOL * Selected );
__declspec(implementation_key(1288)) long cPointObj::GetSpecialPoint ( _bstr_t Name, VARIANT_BOOL * SpecialPoint );
__declspec(implementation_key(1289)) long cPointObj::GetSpring ( _bstr_t Name, SAFEARRAY * * K );
__declspec(implementation_key(1290)) long cPointObj::GetSpringCoupled ( _bstr_t Name, SAFEARRAY * * K );
__declspec(implementation_key(1291)) long cPointObj::GetTransformationMatrix ( _bstr_t Name, SAFEARRAY * * Value, VARIANT_BOOL IsGlobal );
__declspec(implementation_key(1292)) long cPointObj::IsSpringCoupled ( _bstr_t Name, VARIANT_BOOL * IsCoupled );
__declspec(implementation_key(1293)) long cPointObj::SetGroupAssign ( _bstr_t Name, _bstr_t GroupName, VARIANT_BOOL Remove, enum eItemType ItemType );
__declspec(implementation_key(1294)) long cPointObj::SetGUID ( _bstr_t Name, _bstr_t GUID );
__declspec(implementation_key(1295)) long cPointObj::SetLoadDispl ( _bstr_t Name, _bstr_t LoadPat, SAFEARRAY * * Value, VARIANT_BOOL Replace, _bstr_t CSys, enum eItemType ItemType );
__declspec(implementation_key(1296)) long cPointObj::SetLoadForce ( _bstr_t Name, _bstr_t LoadPat, SAFEARRAY * * Value, VARIANT_BOOL Replace, _bstr_t CSys, enum eItemType ItemType );
__declspec(implementation_key(1297)) long cPointObj::SetMass ( _bstr_t Name, SAFEARRAY * * M, enum eItemType ItemType, VARIANT_BOOL IsLocalCSys, VARIANT_BOOL Replace );
__declspec(implementation_key(1298)) long cPointObj::SetMassByVolume ( _bstr_t Name, _bstr_t MatProp, SAFEARRAY * * M, enum eItemType ItemType, VARIANT_BOOL IsLocalCSys, VARIANT_BOOL Replace );
__declspec(implementation_key(1299)) long cPointObj::SetMassByWeight ( _bstr_t Name, SAFEARRAY * * M, enum eItemType ItemType, VARIANT_BOOL IsLocalCSys, VARIANT_BOOL Replace );
__declspec(implementation_key(1300)) long cPointObj::SetPanelZone ( _bstr_t Name, long PropType, double Thickness, double K1, double K2, _bstr_t LinkProp, long Connectivity, long LocalAxisFrom, double LocalAxisAngle, enum eItemType ItemType );
__declspec(implementation_key(1301)) long cPointObj::SetRestraint ( _bstr_t Name, SAFEARRAY * * Value, enum eItemType ItemType );
__declspec(implementation_key(1302)) long cPointObj::SetSelected ( _bstr_t Name, VARIANT_BOOL Selected, enum eItemType ItemType );
__declspec(implementation_key(1303)) long cPointObj::SetSpecialPoint ( _bstr_t Name, VARIANT_BOOL SpecialPoint, enum eItemType ItemType );
__declspec(implementation_key(1304)) long cPointObj::SetSpring ( _bstr_t Name, SAFEARRAY * * K, enum eItemType ItemType, VARIANT_BOOL IsLocalCSys, VARIANT_BOOL Replace );
__declspec(implementation_key(1305)) long cPointObj::SetSpringCoupled ( _bstr_t Name, SAFEARRAY * * K, enum eItemType ItemType, VARIANT_BOOL IsLocalCSys, VARIANT_BOOL Replace );
__declspec(implementation_key(1306)) long cPointObj::GetGroupAssign ( _bstr_t Name, long * NumberGroups, SAFEARRAY * * Groups );
__declspec(implementation_key(1307)) long cPointObj::GetNameListOnStory ( _bstr_t StoryName, long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(1308)) long cPointObj::GetDiaphragm ( _bstr_t Name, enum eDiaphragmOption * DiaphragmOption, BSTR * DiaphragmName );
__declspec(implementation_key(1309)) long cPointObj::SetDiaphragm ( _bstr_t Name, enum eDiaphragmOption DiaphragmOption, _bstr_t DiaphragmName );
__declspec(implementation_key(1310)) long cPointObj::GetLabelNameList ( long * NumberNames, SAFEARRAY * * MyName, SAFEARRAY * * MyLabel, SAFEARRAY * * MyStory );
__declspec(implementation_key(1311)) long cPointObj::GetLabelFromName ( _bstr_t Name, BSTR * Label, BSTR * Story );
__declspec(implementation_key(1312)) long cPointObj::GetNameFromLabel ( _bstr_t Label, _bstr_t Story, BSTR * Name );
__declspec(implementation_key(1313)) long cPointObj::GetAllPoints ( long * NumberNames, SAFEARRAY * * MyName, SAFEARRAY * * X, SAFEARRAY * * Y, SAFEARRAY * * Z, _bstr_t CSys );
__declspec(implementation_key(1314)) long cPointObj::GetSpringAssignment ( _bstr_t Name, BSTR * SpringProp );
__declspec(implementation_key(1315)) long cPointObj::SetSpringAssignment ( _bstr_t Name, _bstr_t SpringProp, enum eItemType ItemType );
__declspec(implementation_key(1316)) long cTendonObj::ChangeName ( _bstr_t Name, _bstr_t NewName );
__declspec(implementation_key(1317)) long cTendonObj::Count ( );
__declspec(implementation_key(1318)) long cTendonObj::GetNameList ( long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(1319)) long cTendonObj::GetProperty ( _bstr_t Name, BSTR * PropName );
__declspec(implementation_key(1320)) long cTendonObj::GetSelected ( _bstr_t Name, VARIANT_BOOL * Selected );
__declspec(implementation_key(1321)) long cTendonObj::GetTendonGeometry ( _bstr_t Name, long * NumberPoints, SAFEARRAY * * X, SAFEARRAY * * Y, SAFEARRAY * * Z, _bstr_t CSys );
__declspec(implementation_key(1322)) long cTendonObj::SetSelected ( _bstr_t Name, VARIANT_BOOL Selected, enum eItemType ItemType );
__declspec(implementation_key(1323)) long cTendonObj::GetGroupAssign ( _bstr_t Name, long * NumberGroups, SAFEARRAY * * Groups );
__declspec(implementation_key(1324)) long cTendonObj::SetGroupAssign ( _bstr_t Name, _bstr_t GroupName, VARIANT_BOOL Remove, enum eItemType ItemType );
__declspec(implementation_key(1325)) long cTendonObj::GetNameListOnStory ( _bstr_t StoryName, long * NumberNames, SAFEARRAY * * MyName );
__declspec(implementation_key(1326)) long cTendonObj::GetLoadForceStress_1 ( _bstr_t Name, long * NumberItems, SAFEARRAY * * TendonName, SAFEARRAY * * LoadPatFinal, SAFEARRAY * * LoadPatTransfer, SAFEARRAY * * JackFrom, SAFEARRAY * * LoadType, SAFEARRAY * * LoadValue, SAFEARRAY * * LossSpecification, enum eItemType ItemType );
__declspec(implementation_key(1327)) long cTendonObj::GetLossesDetailed ( _bstr_t Name, long * NumberItems, SAFEARRAY * * TendonName, SAFEARRAY * * CurvatureCoeff, SAFEARRAY * * WobbleCoeff, SAFEARRAY * * LossAnchorage, SAFEARRAY * * LossShortening, SAFEARRAY * * LossCreep, SAFEARRAY * * LossShrinkage, SAFEARRAY * * LossSteelRelax, enum eItemType ItemType );
__declspec(implementation_key(1328)) long cTendonObj::GetLossesFixed ( _bstr_t Name, long * NumberItems, SAFEARRAY * * TendonName, SAFEARRAY * * StressingFixed, SAFEARRAY * * LongTermFixed, enum eItemType ItemType );
__declspec(implementation_key(1329)) long cTendonObj::GetLossesPercent ( _bstr_t Name, long * NumberItems, SAFEARRAY * * TendonName, SAFEARRAY * * StressingPercent, SAFEARRAY * * LongTermPercent, enum eItemType ItemType );
__declspec(implementation_key(1330)) long cTendonObj::GetNumberStrands ( _bstr_t Name, long * NumberItems, SAFEARRAY * * TendonName, SAFEARRAY * * NumberStrands, enum eItemType ItemType );
__declspec(implementation_key(1331)) long cTendonObj::GetDatumOffset ( _bstr_t Name, long * NumberItems, SAFEARRAY * * TendonName, SAFEARRAY * * DatumOffset, enum eItemType ItemType );
__declspec(implementation_key(1332)) long cTendonObj::GetDrawingPoint ( _bstr_t Name, long * NumberItems, SAFEARRAY * * TendonName, SAFEARRAY * * DrawingPointID, SAFEARRAY * * GX, SAFEARRAY * * GY, SAFEARRAY * * GZ, enum eItemType ItemType );
__declspec(implementation_key(1333)) long cOptions::GetDefaultFunctionFolder ( BSTR * Path );
__declspec(implementation_key(1334)) long cOptions::SetDefaultFunctionFolder ( _bstr_t Path );
__declspec(implementation_key(1335)) long cSelect::All ( VARIANT_BOOL Deselect );
__declspec(implementation_key(1336)) long cSelect::ClearSelection ( );
__declspec(implementation_key(1337)) long cSelect::GetSelected ( long * NumberItems, SAFEARRAY * * ObjectType, SAFEARRAY * * ObjectName );
__declspec(implementation_key(1338)) long cSelect::Group ( _bstr_t Name, VARIANT_BOOL Deselect );
__declspec(implementation_key(1339)) long cSelect::InvertSelection ( );
__declspec(implementation_key(1340)) long cSelect::PreviousSelection ( );
__declspec(implementation_key(1341)) long cView::RefreshView ( long Window, VARIANT_BOOL Zoom );
__declspec(implementation_key(1342)) long cView::RefreshWindow ( long Window );
#pragma stop_map_region

} // namespace ETABSv1

#pragma pack(pop)
