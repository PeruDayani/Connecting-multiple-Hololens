﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable
struct BaseNearInteractionTouchable_t06B6D5F84B71F74ADF407D959838F4D11A17FCE3;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable
struct NearInteractionGrabbable_t5D35B9E5C7E01AD417A5BEC1CA1CC6AD922C6435;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable
struct NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface
struct NearInteractionTouchableSurface_t6B8C21401FD2637A28DB7458591F79DA84C2B4D5;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI
struct NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI[]
struct NearInteractionTouchableUnityUIU5BU5D_t6020AF5F99584FC2C3C5B15857B9C6A2DFA9A7C5;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume
struct NearInteractionTouchableVolume_tD6BF0CE15BDB720A54641CE3C1F7CA4E0E4B7A59;
// Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility
struct CanvasUtility_t5EE917C090D9AABFB11C384BB77B4CF725279C65;
// Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect
struct ScaleMeshEffect_t45B5EA11F4C61ABD9F1711DFF09E4FA080AA9C16;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t42472AE9C2FE699C57A3900EDE1B2D22194D9D0D;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>
struct IReadOnlyList_1_tCA1BE89931D11638695B558474A13A2176C14FF4;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>
struct List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`1<UnityEngine.RectTransform>
struct Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t0875D079514B9064DE951B01B4AE82F6C7436F64;
// System.Func`3<System.String,UnityEngine.Transform,System.String>
struct Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Lazy`1<System.Object>
struct Lazy_1_t71F054A6BEAC691000784099D483C92D8C113AE7;
// System.Lazy`1<UnityEngine.RectTransform>
struct Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t72759F31F9D204D7EFB6B45097873809D4524BA5;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;

IL2CPP_EXTERN_C RuntimeClass* BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusProvider_tA4EB221AD9220D7CF32E6AF78B94778A5108088B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityNearPointer_tC9AE79FB485DFC562800D0DFE6C181311AFD0EA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral052FB1FE0D021FB4E5F4B88C36D37951996FBFCB;
IL2CPP_EXTERN_C String_t* _stringLiteral13D394CBB2224799347CFC4EA600A656E4673514;
IL2CPP_EXTERN_C String_t* _stringLiteral2246D0EE3F64AE2FE0E32B485F0D449C421DE949;
IL2CPP_EXTERN_C String_t* _stringLiteral3030B9DA4F726876DE1394A13386F366F2AFB284;
IL2CPP_EXTERN_C String_t* _stringLiteral4D2A116113E32BCCEAF300821EDE7A9665B3F990;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB3FA50D3BB8C45880B11288FD3CADE506CBEA4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF8063269B3AD7E1E22E65A00A5927927EA6711A7;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mAD461B8F1BB5C616749FAA2B63155D710C3CD21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Aggregate_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_TisString_t_mDBB0A69F0AC196B0AE6D937BDDE7DE0543598AAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m9CD37EDF32B1025161B21189308A89FBCB3D31D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m0D8C1007F600903496B78C6ECE280BA3B092E0AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_mB678E6E7BEB0C87364A66EF9597E7546BAC3632B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_m14285D8A1AD14C080ED2D95FACA7366ED99FE4F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8D91BB1B79E0FC9FACFCC06AEADEE1F1BAA31F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCF248BF2C295B81921E9730A706AFE7FF6BBB8CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB8D8860335BBB5FD0E3C539F5D1CAD1E9ED08F45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnValidateU3Eb__25_0_mC3EB7ECF4541E5E0D1F864DFF3C957C995C98EEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CanvasUtility_OnPointerDown_m5FC3BBD63B5F4F8EFBAA8064597B2C3DCF5A72F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CanvasUtility_OnPointerUp_m78045DEA940FB675736A0440688350F449BFD7F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CanvasUtility_Start_m25D35F0A22834A0A5913DCEEC61A7CDE953A771E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionGrabbable_OnEnable_m80D5C613EF5F62B64DBD098A5C378BC503BD39DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchableUnityUI_DistanceToTouchable_m4C859927485C47BC4F7E4D25DFB8A70B9574B8D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchableUnityUI_OnDisable_m9BF8B68084BC0B4A02F8AD2827B8D57BD959D94C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchableUnityUI_OnEnable_m447F15AC593466901E1DCDFA4ACB849FA964D17A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchableUnityUI__cctor_mEA05B7AEE9E89FD59B84641F7C9C22E938DDE354_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchableUnityUI__ctor_mB307503D7D4A93C15D5AB9F7BF68964BD167227B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchableUnityUI_get_Bounds_m06D8FB433C58DB67D0AE31841BB0BC39A56C2F9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchableUnityUI_get_Instances_mE63803A236217DCD1D1FB479DB09A16EF4256AC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchableUnityUI_get_LocalCenter_mB3A9450BB33CF6ED1CB664C6BF87B7F687309448_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchableUnityUI_get_LocalPressDirection_mC5BCB069D6163439363A52E04DBF86250AE18383_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchableVolume_DistanceToTouchable_m4622AE7D909122D95820075308459FF25A77399B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchableVolume_OnValidate_m8A8343E7B76A52C97BAF3F16EC852BA6F0186359_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchable_DistanceToTouchable_m8E0A60EC522061E339C3A06215618D3FED0CCE4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchable_OnEnable_m1525367EDCE62C92D334EC553DDF8A2BFCCB935D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchable_OnValidate_mC285D8D1E999D8EB192E1C9BDAF719B0FEC0E349_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchable_SetLocalForward_m95EC3C2A50E7FAA4D1CEC5A9695D0F55507994AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchable_SetLocalUp_m681D3EAA97A1376E9D6C9E6BC1195D3151D2A086_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchable_SetTouchableCollider_m0D8FFC526EEEC30A219047927C010B55BD446C8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchable__ctor_m344E2F481B615359C60D40BA4E2AF792C86A15DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchable_get_AreLocalVectorsOrthogonal_m5681264D4AD122FFFD6969AD348E6DCF0D6AFA5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchable_get_LocalPressDirection_mAEF6171B34171E609F3FA2152BB57EF205F3023D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearInteractionTouchable_get_LocalRight_m5EFB8D626AE57001CA9CB4459691DAC6D04F59FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScaleMeshEffect_Awake_m777BC58295BEC94799B277281C1C1DC2F78DD6A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScaleMeshEffect_ModifyMesh_m6BB0AD4666194839849D7F71558D8704113A47CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3COnValidateU3Eb__25_0_mC3EB7ECF4541E5E0D1F864DFF3C957C995C98EEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mB465F4A09A825CFBC18C48B47F03BEE1D2D64DDD_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c
struct  U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c::<>9
	U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA * ___U3CU3E9_0;
	// System.Func`3<System.String,UnityEngine.Transform,System.String> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c::<>9__25_0
	Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 * ___U3CU3E9__25_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_StaticFields, ___U3CU3E9__25_0_1)); }
	inline Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 * get_U3CU3E9__25_0_1() const { return ___U3CU3E9__25_0_1; }
	inline Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 ** get_address_of_U3CU3E9__25_0_1() { return &___U3CU3E9__25_0_1; }
	inline void set_U3CU3E9__25_0_1(Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 * value)
	{
		___U3CU3E9__25_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>
struct  List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NearInteractionTouchableUnityUIU5BU5D_t6020AF5F99584FC2C3C5B15857B9C6A2DFA9A7C5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5, ____items_1)); }
	inline NearInteractionTouchableUnityUIU5BU5D_t6020AF5F99584FC2C3C5B15857B9C6A2DFA9A7C5* get__items_1() const { return ____items_1; }
	inline NearInteractionTouchableUnityUIU5BU5D_t6020AF5F99584FC2C3C5B15857B9C6A2DFA9A7C5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NearInteractionTouchableUnityUIU5BU5D_t6020AF5F99584FC2C3C5B15857B9C6A2DFA9A7C5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NearInteractionTouchableUnityUIU5BU5D_t6020AF5F99584FC2C3C5B15857B9C6A2DFA9A7C5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5_StaticFields, ____emptyArray_5)); }
	inline NearInteractionTouchableUnityUIU5BU5D_t6020AF5F99584FC2C3C5B15857B9C6A2DFA9A7C5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NearInteractionTouchableUnityUIU5BU5D_t6020AF5F99584FC2C3C5B15857B9C6A2DFA9A7C5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NearInteractionTouchableUnityUIU5BU5D_t6020AF5F99584FC2C3C5B15857B9C6A2DFA9A7C5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Lazy`1<UnityEngine.RectTransform>
struct  Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boxed_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4, ___m_valueFactory_2)); }
	inline Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueFactory_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_threadSafeObj_3), (void*)value);
	}
};

struct Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ALREADY_INVOKED_SENTINEL_0), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.TouchableEventType
struct  TouchableEventType_t0D4EC964038835B9FAB85A70AB21D86E79538EB3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.TouchableEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchableEventType_t0D4EC964038835B9FAB85A70AB21D86E79538EB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.AdditionalCanvasShaderChannels
struct  AdditionalCanvasShaderChannels_t2576909EF4884007D0786E0FEEB894B54C61107E 
{
public:
	// System.Int32 UnityEngine.AdditionalCanvasShaderChannels::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdditionalCanvasShaderChannels_t2576909EF4884007D0786E0FEEB894B54C61107E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.VertexHelper
struct  VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F, ___m_Positions_0)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F, ___m_Colors_1)); }
	inline List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colors_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F, ___m_Uv0S_2)); }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv0S_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F, ___m_Uv1S_3)); }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv1S_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F, ___m_Uv2S_4)); }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv2S_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F, ___m_Uv3S_5)); }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv3S_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F, ___m_Normals_6)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normals_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F, ___m_Tangents_7)); }
	inline List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tangents_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F, ___m_Indices_8)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indices_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ListsInitalized_11() { return static_cast<int32_t>(offsetof(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F, ___m_ListsInitalized_11)); }
	inline bool get_m_ListsInitalized_11() const { return ___m_ListsInitalized_11; }
	inline bool* get_address_of_m_ListsInitalized_11() { return &___m_ListsInitalized_11; }
	inline void set_m_ListsInitalized_11(bool value)
	{
		___m_ListsInitalized_11 = value;
	}
};

struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___s_DefaultNormal_10 = value;
	}
};


// UnityEngine.UIVertex
struct  UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv0_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv1_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv2_6;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_normal_1() const { return ___normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___tangent_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___color_3)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_color_3() const { return ___color_3; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___uv0_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv0_4() const { return ___uv0_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___uv1_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv1_5() const { return ___uv1_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___uv2_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv2_6() const { return ___uv2_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___uv3_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv3_7() const { return ___uv3_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  value)
	{
		___simpleVert_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct  BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___U3CMixedRealityInputActionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531, ___U3CSourceIdU3Ek__BackingField_4)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_4() const { return ___U3CSourceIdU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_4() { return &___U3CSourceIdU3Ek__BackingField_4; }
	inline void set_U3CSourceIdU3Ek__BackingField_4(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531, ___U3CMixedRealityInputActionU3Ek__BackingField_5)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_U3CMixedRealityInputActionU3Ek__BackingField_5() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return &___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_5(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_5))->___description_2), (void*)NULL);
	}
};


// System.Func`1<UnityEngine.RectTransform>
struct  Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.String,UnityEngine.Transform,System.String>
struct  Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct  InputEventData_t1CE31F19DFC97D60683EA03339DBDDEA0BC80BC0  : public BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_t1CE31F19DFC97D60683EA03339DBDDEA0BC80BC0, ___U3CHandednessU3Ek__BackingField_6)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_6() const { return ___U3CHandednessU3Ek__BackingField_6; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_6() { return &___U3CHandednessU3Ek__BackingField_6; }
	inline void set_U3CHandednessU3Ek__BackingField_6(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.BoxCollider
struct  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.MeshCollider
struct  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.SphereCollider
struct  SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable
struct  BaseNearInteractionTouchable_t06B6D5F84B71F74ADF407D959838F4D11A17FCE3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Input.TouchableEventType Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::eventsToReceive
	int32_t ___eventsToReceive_4;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::debounceThreshold
	float ___debounceThreshold_5;

public:
	inline static int32_t get_offset_of_eventsToReceive_4() { return static_cast<int32_t>(offsetof(BaseNearInteractionTouchable_t06B6D5F84B71F74ADF407D959838F4D11A17FCE3, ___eventsToReceive_4)); }
	inline int32_t get_eventsToReceive_4() const { return ___eventsToReceive_4; }
	inline int32_t* get_address_of_eventsToReceive_4() { return &___eventsToReceive_4; }
	inline void set_eventsToReceive_4(int32_t value)
	{
		___eventsToReceive_4 = value;
	}

	inline static int32_t get_offset_of_debounceThreshold_5() { return static_cast<int32_t>(offsetof(BaseNearInteractionTouchable_t06B6D5F84B71F74ADF407D959838F4D11A17FCE3, ___debounceThreshold_5)); }
	inline float get_debounceThreshold_5() const { return ___debounceThreshold_5; }
	inline float* get_address_of_debounceThreshold_5() { return &___debounceThreshold_5; }
	inline void set_debounceThreshold_5(float value)
	{
		___debounceThreshold_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct  MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83  : public InputEventData_t1CE31F19DFC97D60683EA03339DBDDEA0BC80BC0
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83, ___U3CPointerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_7() const { return ___U3CPointerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_7() { return &___U3CPointerU3Ek__BackingField_7; }
	inline void set_U3CPointerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83, ___U3CCountU3Ek__BackingField_8)); }
	inline int32_t get_U3CCountU3Ek__BackingField_8() const { return ___U3CCountU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_8() { return &___U3CCountU3Ek__BackingField_8; }
	inline void set_U3CCountU3Ek__BackingField_8(int32_t value)
	{
		___U3CCountU3Ek__BackingField_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable
struct  NearInteractionGrabbable_t5D35B9E5C7E01AD417A5BEC1CA1CC6AD922C6435  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::ShowTetherWhenManipulating
	bool ___ShowTetherWhenManipulating_4;

public:
	inline static int32_t get_offset_of_ShowTetherWhenManipulating_4() { return static_cast<int32_t>(offsetof(NearInteractionGrabbable_t5D35B9E5C7E01AD417A5BEC1CA1CC6AD922C6435, ___ShowTetherWhenManipulating_4)); }
	inline bool get_ShowTetherWhenManipulating_4() const { return ___ShowTetherWhenManipulating_4; }
	inline bool* get_address_of_ShowTetherWhenManipulating_4() { return &___ShowTetherWhenManipulating_4; }
	inline void set_ShowTetherWhenManipulating_4(bool value)
	{
		___ShowTetherWhenManipulating_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility
struct  CanvasUtility_t5EE917C090D9AABFB11C384BB77B4CF725279C65  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::oldIsTargetPositionLockedOnFocusLock
	bool ___oldIsTargetPositionLockedOnFocusLock_4;

public:
	inline static int32_t get_offset_of_oldIsTargetPositionLockedOnFocusLock_4() { return static_cast<int32_t>(offsetof(CanvasUtility_t5EE917C090D9AABFB11C384BB77B4CF725279C65, ___oldIsTargetPositionLockedOnFocusLock_4)); }
	inline bool get_oldIsTargetPositionLockedOnFocusLock_4() const { return ___oldIsTargetPositionLockedOnFocusLock_4; }
	inline bool* get_address_of_oldIsTargetPositionLockedOnFocusLock_4() { return &___oldIsTargetPositionLockedOnFocusLock_4; }
	inline void set_oldIsTargetPositionLockedOnFocusLock_4(bool value)
	{
		___oldIsTargetPositionLockedOnFocusLock_4 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface
struct  NearInteractionTouchableSurface_t6B8C21401FD2637A28DB7458591F79DA84C2B4D5  : public BaseNearInteractionTouchable_t06B6D5F84B71F74ADF407D959838F4D11A17FCE3
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume
struct  NearInteractionTouchableVolume_tD6BF0CE15BDB720A54641CE3C1F7CA4E0E4B7A59  : public BaseNearInteractionTouchable_t06B6D5F84B71F74ADF407D959838F4D11A17FCE3
{
public:
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::touchableCollider
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___touchableCollider_6;

public:
	inline static int32_t get_offset_of_touchableCollider_6() { return static_cast<int32_t>(offsetof(NearInteractionTouchableVolume_tD6BF0CE15BDB720A54641CE3C1F7CA4E0E4B7A59, ___touchableCollider_6)); }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * get_touchableCollider_6() const { return ___touchableCollider_6; }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** get_address_of_touchableCollider_6() { return &___touchableCollider_6; }
	inline void set_touchableCollider_6(Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		___touchableCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchableCollider_6), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.BaseMeshEffect
struct  BaseMeshEffect_t72759F31F9D204D7EFB6B45097873809D4524BA5  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_Graphic_4;

public:
	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(BaseMeshEffect_t72759F31F9D204D7EFB6B45097873809D4524BA5, ___m_Graphic_4)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Graphic_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable
struct  NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB  : public NearInteractionTouchableSurface_t6B8C21401FD2637A28DB7458591F79DA84C2B4D5
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::localForward
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localForward_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::localUp
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localUp_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::localCenter
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localCenter_8;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::bounds
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___bounds_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::touchableCollider
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___touchableCollider_10;

public:
	inline static int32_t get_offset_of_localForward_6() { return static_cast<int32_t>(offsetof(NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB, ___localForward_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_localForward_6() const { return ___localForward_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_localForward_6() { return &___localForward_6; }
	inline void set_localForward_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___localForward_6 = value;
	}

	inline static int32_t get_offset_of_localUp_7() { return static_cast<int32_t>(offsetof(NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB, ___localUp_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_localUp_7() const { return ___localUp_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_localUp_7() { return &___localUp_7; }
	inline void set_localUp_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___localUp_7 = value;
	}

	inline static int32_t get_offset_of_localCenter_8() { return static_cast<int32_t>(offsetof(NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB, ___localCenter_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_localCenter_8() const { return ___localCenter_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_localCenter_8() { return &___localCenter_8; }
	inline void set_localCenter_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___localCenter_8 = value;
	}

	inline static int32_t get_offset_of_bounds_9() { return static_cast<int32_t>(offsetof(NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB, ___bounds_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_bounds_9() const { return ___bounds_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_bounds_9() { return &___bounds_9; }
	inline void set_bounds_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___bounds_9 = value;
	}

	inline static int32_t get_offset_of_touchableCollider_10() { return static_cast<int32_t>(offsetof(NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB, ___touchableCollider_10)); }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * get_touchableCollider_10() const { return ___touchableCollider_10; }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** get_address_of_touchableCollider_10() { return &___touchableCollider_10; }
	inline void set_touchableCollider_10(Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		___touchableCollider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchableCollider_10), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI
struct  NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108  : public NearInteractionTouchableSurface_t6B8C21401FD2637A28DB7458591F79DA84C2B4D5
{
public:
	// System.Lazy`1<UnityEngine.RectTransform> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::rectTransform
	Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4 * ___rectTransform_6;

public:
	inline static int32_t get_offset_of_rectTransform_6() { return static_cast<int32_t>(offsetof(NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108, ___rectTransform_6)); }
	inline Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4 * get_rectTransform_6() const { return ___rectTransform_6; }
	inline Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4 ** get_address_of_rectTransform_6() { return &___rectTransform_6; }
	inline void set_rectTransform_6(Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4 * value)
	{
		___rectTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_6), (void*)value);
	}
};

struct NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_StaticFields
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::instances
	List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 * ___instances_7;

public:
	inline static int32_t get_offset_of_instances_7() { return static_cast<int32_t>(offsetof(NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_StaticFields, ___instances_7)); }
	inline List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 * get_instances_7() const { return ___instances_7; }
	inline List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 ** get_address_of_instances_7() { return &___instances_7; }
	inline void set_instances_7(List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 * value)
	{
		___instances_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instances_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect
struct  ScaleMeshEffect_t45B5EA11F4C61ABD9F1711DFF09E4FA080AA9C16  : public BaseMeshEffect_t72759F31F9D204D7EFB6B45097873809D4524BA5
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mDCF191A98C4C31CEBD4FAD60551C0B4EA244E1A8_gshared (Func_3_t0875D079514B9064DE951B01B4AE82F6C7436F64 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!1 System.Linq.Enumerable::Aggregate<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!1,System.Func`3<!!1,!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Aggregate_TisRuntimeObject_TisRuntimeObject_m02A8F6B86926DB4F23EC36B2784F1FB1BD71E152_gshared (RuntimeObject* ___source0, RuntimeObject * ___seed1, Func_3_t0875D079514B9064DE951B01B4AE82F6C7436F64 * ___func2, const RuntimeMethod* method);
// !0 System.Lazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Lazy_1_get_Value_m0F1BF0071B879F33579BD0FD0AD8AC89635B1F5F_gshared (Lazy_1_t71F054A6BEAC691000784099D483C92D8C113AE7 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Lazy`1<System.Object>::.ctor(System.Func`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_mFD20B0196A065A92FE66CCA3DEA51AE60F27B93D_gshared (Lazy_1_t71F054A6BEAC691000784099D483C92D8C113AE7 * __this, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___valueFactory0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mAF22A00FA85F51B7F2099BFC8BF569187B04F6F9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.MeshCollider::get_convex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshCollider_get_convex_mAA9801A31A512288CE0705E56596D836FC73E64A (MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNearInteractionTouchable_OnValidate_m83D9F5A43DAEB2361B772F0899D721464461988A (BaseNearInteractionTouchable_t06B6D5F84B71F74ADF407D959838F4D11A17FCE3 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E (bool ___condition0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions::EnumerateAncestors(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransformExtensions_EnumerateAncestors_m6C005657525A80D25FFC881CC5F7341154817C80 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___startTransform0, bool ___includeSelf1, const RuntimeMethod* method);
// System.Void System.Func`3<System.String,UnityEngine.Transform,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m0D8C1007F600903496B78C6ECE280BA3B092E0AB (Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mDCF191A98C4C31CEBD4FAD60551C0B4EA244E1A8_gshared)(__this, ___object0, ___method1, method);
}
// !!1 System.Linq.Enumerable::Aggregate<UnityEngine.Transform,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,!!1,System.Func`3<!!1,!!0,!!1>)
inline String_t* Enumerable_Aggregate_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_TisString_t_mDBB0A69F0AC196B0AE6D937BDDE7DE0543598AAF (RuntimeObject* ___source0, String_t* ___seed1, Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 * ___func2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, String_t*, Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 *, const RuntimeMethod*))Enumerable_Aggregate_TisRuntimeObject_TisRuntimeObject_m02A8F6B86926DB4F23EC36B2784F1FB1BD71E152_gshared)(___source0, ___seed1, ___func2, method);
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC (bool ___condition0, String_t* ___message1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::SetTouchableCollider(UnityEngine.BoxCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchable_SetTouchableCollider_m0D8FFC526EEEC30A219047927C010B55BD446C8E (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___newCollider0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_LocalRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchable_get_LocalRight_m5EFB8D626AE57001CA9CB4459691DAC6D04F59FD (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::SetLocalForward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchable_SetLocalForward_m95EC3C2A50E7FAA4D1CEC5A9695D0F55507994AD (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___newLocalForward0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_LocalUp()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchable_get_LocalUp_m33F219AEB010860E14B483FF8E92A2550966D6B9_inline (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::SetBounds(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchable_SetBounds_m77BFE29AC8F6DC1D16BD12B7A1957DD7185BA6F1 (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___newBounds0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoxCollider_get_center_mA9164B9949F419A35CC949685F1DC14588BC6402 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_LocalForward()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchable_get_LocalForward_m16CC9E3E3F8EA9BFF99D368A46028697280B4D3A_inline (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::SetLocalCenter(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchable_SetLocalCenter_m16577D9D74FF6B2D740A1B21F9B5C6C3C105F755 (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___newLocalCenter0, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_size_m65F9B4BD610D3094313EC8D1C5CE58D1D345A176 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_center_m8A871056CA383C9932A7694FE396A1EFA247FC69 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_Forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchable_get_Forward_mC4A0FF35026D2BFA7F5D95A32A9B98C7BBD0628F (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.TransformExtensions::TransformSize(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformExtensions_TransformSize_m78DB1AB578BD58872DE4724A53B9131764828C99 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localSize1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableSurface__ctor_m773279497235F56D4EE9736C8DC643E9DE7C9398 (NearInteractionTouchableSurface_t6B8C21401FD2637A28DB7458591F79DA84C2B4D5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m80BF26AEBB75D9C2272163E4A8D9F0CBEC87AE84 (U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNearInteractionTouchable__ctor_m7B4737748E8C4796C19CA095031A75A362D4FFC1 (BaseNearInteractionTouchable_t06B6D5F84B71F74ADF407D959838F4D11A17FCE3 * __this, const RuntimeMethod* method);
// !0 System.Lazy`1<UnityEngine.RectTransform>::get_Value()
inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * Lazy_1_get_Value_m14285D8A1AD14C080ED2D95FACA7366ED99FE4F2 (Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * (*) (Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4 *, const RuntimeMethod*))Lazy_1_get_Value_m0F1BF0071B879F33579BD0FD0AD8AC89635B1F5F_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  RectTransform_get_rect_mE5F283FCB99A66403AC1F0607CA49C156D73A15E (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rect_get_size_m731642B8F03F6CE372A2C9E2E4A925450630606C (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void System.Func`1<UnityEngine.RectTransform>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m9CD37EDF32B1025161B21189308A89FBCB3D31D0 (Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<UnityEngine.RectTransform>::.ctor(System.Func`1<!0>)
inline void Lazy_1__ctor_mB678E6E7BEB0C87364A66EF9597E7546BAC3632B (Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4 * __this, Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC * ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4 *, Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC *, const RuntimeMethod*))Lazy_1__ctor_mFD20B0196A065A92FE66CCA3DEA51AE60F27B93D_gshared)(__this, ___valueFactory0, method);
}
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_m5072228CE6251E7C754F227BA330F9ADA95C1495 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>::Add(!0)
inline void List_1_Add_m8D91BB1B79E0FC9FACFCC06AEADEE1F1BAA31F3B (List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 * __this, NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 *, NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>::Remove(!0)
inline bool List_1_Remove_mCF248BF2C295B81921E9730A706AFE7FF6BBB8CF (List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 * __this, NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 *, NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108 *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>::.ctor()
inline void List_1__ctor_mB8D8860335BBB5FD0E3C539F5D1CAD1E9ED08F45 (List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::get_TouchableCollider()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * NearInteractionTouchableVolume_get_TouchableCollider_m6A6D102700A7D4A6DD2507ED0C0E28D46EC43CC2_inline (NearInteractionTouchableVolume_tD6BF0CE15BDB720A54641CE3C1F7CA4E0E4B7A59 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Collider_ClosestPoint_mA3CF53B6EE9CEEDB3BF2BCCE19E511CA659672B7 (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Collider_get_bounds_mD3CB68E38FB998406193A88D18C01F510272058A (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::get_Pointer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityPointerEventData_get_Pointer_m71693924BB8DB3FEBF7746EB57118A4B575BA0A7_inline (MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * Component_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mAD461B8F1BB5C616749FAA2B63155D710C3CD21C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m645D533C712851F6F0844100DF86CA5AF02F879E (bool ___condition0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_worldCamera_m020A4A35425707F2403E6EBA6AD73F448557F776 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___value0, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_m5DD9E48E9933AA28DAE1978B5FCC6B90BAF06FDC (UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mAF22A00FA85F51B7F2099BFC8BF569187B04F6F9_gshared)(__this, method);
}
// UnityEngine.AdditionalCanvasShaderChannels UnityEngine.Canvas::get_additionalShaderChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_additionalShaderChannels_m703769513A111C46DC0F0B32864A69E54C085BEC (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Canvas::set_additionalShaderChannels(UnityEngine.AdditionalCanvasShaderChannels)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_additionalShaderChannels_m0A3CB0D3137C41915E293268BA95920404921FE2 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_PopulateUIVertex_m75E49AE0377BABEE2C3D1CCA1624DE5668B5C42C (VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * __this, UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577 * ___vertex0, int32_t ___i1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_SetUIVertex_m71EA6FEB875252F25180FA7F3849A962C6231976 (VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * __this, UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  ___vertex0, int32_t ___i1, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m99ACD97A171FCB5046C7608CAD7399A8E0A6FD3F (VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.BaseMeshEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMeshEffect__ctor_m544B1FC50DE8DE4A5725C0CE17AD1F2BFE951B9E (BaseMeshEffect_t72759F31F9D204D7EFB6B45097873809D4524BA5 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionGrabbable_OnEnable_m80D5C613EF5F62B64DBD098A5C378BC503BD39DF (NearInteractionGrabbable_t5D35B9E5C7E01AD417A5BEC1CA1CC6AD922C6435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionGrabbable_OnEnable_m80D5C613EF5F62B64DBD098A5C378BC503BD39DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// var collider = gameObject.GetComponent<Collider>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_1 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_0, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		V_0 = L_1;
		// if((collider as BoxCollider) == null &&
		//     (collider as CapsuleCollider) == null &&
		//     (collider as SphereCollider) == null &&
		//     ((collider as MeshCollider) == null || (collider as MeshCollider).convex == false))
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(((BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA *)IsInstClass((RuntimeObject*)L_2, BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_il2cpp_TypeInfo_var)), (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(((CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 *)IsInstClass((RuntimeObject*)L_4, CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_il2cpp_TypeInfo_var)), (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(((SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F *)IsInstClass((RuntimeObject*)L_6, SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_il2cpp_TypeInfo_var)), (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(((MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE *)IsInstClass((RuntimeObject*)L_8, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_il2cpp_TypeInfo_var)), (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_10 = V_0;
		NullCheck(((MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE *)IsInstClass((RuntimeObject*)L_10, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_il2cpp_TypeInfo_var)));
		bool L_11 = MeshCollider_get_convex_mAA9801A31A512288CE0705E56596D836FC73E64A(((MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE *)IsInstClass((RuntimeObject*)L_10, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		G_B8_0 = G_B6_0;
		goto IL_0059;
	}

IL_0058:
	{
		G_B8_0 = 0;
	}

IL_0059:
	{
		V_1 = (bool)G_B8_0;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// Debug.LogException(new InvalidOperationException("NearInteractionGrabbable requires a " +
		//     "BoxCollider, SphereCollider, CapsuleCollider or a convex MeshCollider on an object. " +
		//     "Otherwise grab interaction will not work correctly."));
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_13 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_13, _stringLiteral13D394CBB2224799347CFC4EA600A656E4673514, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9(L_13, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionGrabbable__ctor_m01CB363BC8DFF13155C7EE369E50A94A210F72F8 (NearInteractionGrabbable_t5D35B9E5C7E01AD417A5BEC1CA1CC6AD922C6435 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowTetherWhenManipulating = false;
		__this->set_ShowTetherWhenManipulating_4((bool)0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_LocalForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchable_get_LocalForward_m16CC9E3E3F8EA9BFF99D368A46028697280B4D3A (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 LocalForward { get => localForward; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localForward_6();
		return L_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_LocalUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchable_get_LocalUp_m33F219AEB010860E14B483FF8E92A2550966D6B9 (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 LocalUp { get => localUp; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localUp_7();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_AreLocalVectorsOrthogonal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NearInteractionTouchable_get_AreLocalVectorsOrthogonal_m5681264D4AD122FFFD6969AD348E6DCF0D6AFA5A (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchable_get_AreLocalVectorsOrthogonal_m5681264D4AD122FFFD6969AD348E6DCF0D6AFA5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool AreLocalVectorsOrthogonal => Vector3.Dot(localForward, localUp) == 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localForward_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_localUp_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_2 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((float)L_2) == ((float)(0.0f)))? 1 : 0);
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_LocalCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchable_get_LocalCenter_mFC7E7B4C1550A82C59496EF6776973AF91811886 (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	{
		// public override Vector3 LocalCenter { get => localCenter; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localCenter_8();
		return L_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_LocalRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchable_get_LocalRight_m5EFB8D626AE57001CA9CB4459691DAC6D04F59FD (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchable_get_LocalRight_m5EFB8D626AE57001CA9CB4459691DAC6D04F59FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 cross = Vector3.Cross(localUp, localForward);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localUp_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_localForward_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (cross == Vector3.zero)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_5 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return Vector3.right;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0030;
	}

IL_002b:
	{
		// return cross;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_0;
		V_2 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_2;
		return L_9;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_Forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchable_get_Forward_mC4A0FF35026D2BFA7F5D95A32A9B98C7BBD0628F (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Forward => transform.TransformDirection(localForward);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_localForward_6();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_LocalPressDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchable_get_LocalPressDirection_mAEF6171B34171E609F3FA2152BB57EF205F3023D (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchable_get_LocalPressDirection_mAEF6171B34171E609F3FA2152BB57EF205F3023D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Vector3 LocalPressDirection => -localForward;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localForward_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_Bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  NearInteractionTouchable_get_Bounds_mBCEAC6CA67BF28701F41F4982CDAA2392B42575B (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	{
		// public override Vector2 Bounds { get => bounds; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_bounds_9();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_ColliderEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NearInteractionTouchable_get_ColliderEnabled_m3531593E7D498671C0FB2BECFE4EA9A1F09CEFCE (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// public bool ColliderEnabled { get { return touchableCollider.enabled && touchableCollider.gameObject.activeInHierarchy; } }
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = __this->get_touchableCollider_10();
		NullCheck(L_0);
		bool L_1 = Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_2 = __this->get_touchableCollider_10();
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		// public bool ColliderEnabled { get { return touchableCollider.enabled && touchableCollider.gameObject.activeInHierarchy; } }
		bool L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::get_TouchableCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * NearInteractionTouchable_get_TouchableCollider_mDC6912B631FD5F451C1AFAF5F30E7253D389989B (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	{
		// public Collider TouchableCollider => touchableCollider;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = __this->get_touchableCollider_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchable_OnValidate_mC285D8D1E999D8EB192E1C9BDAF719B0FEC0E349 (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchable_OnValidate_mC285D8D1E999D8EB192E1C9BDAF719B0FEC0E349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	int32_t G_B7_0 = 0;
	{
		// if (Application.isPlaying)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_014b;
	}

IL_0010:
	{
		// base.OnValidate();
		BaseNearInteractionTouchable_OnValidate_m83D9F5A43DAEB2361B772F0899D721464461988A(__this, /*hidden argument*/NULL);
		// touchableCollider = GetComponent<Collider>();
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_2 = Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6(__this, /*hidden argument*/Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6_RuntimeMethod_var);
		__this->set_touchableCollider_10(L_2);
		// Debug.Assert(localForward.magnitude > 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_3 = __this->get_address_of_localForward_6();
		float L_4 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E((bool)((((float)L_4) > ((float)(0.0f)))? 1 : 0), /*hidden argument*/NULL);
		// Debug.Assert(localUp.magnitude > 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = __this->get_address_of_localUp_7();
		float L_6 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_5, /*hidden argument*/NULL);
		Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E((bool)((((float)L_6) > ((float)(0.0f)))? 1 : 0), /*hidden argument*/NULL);
		// string hierarchy = gameObject.transform.EnumerateAncestors(true).Aggregate("", (result, next) => next.gameObject.name + "=>" + result);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		RuntimeObject* L_9 = TransformExtensions_EnumerateAncestors_m6C005657525A80D25FFC881CC5F7341154817C80(L_8, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_il2cpp_TypeInfo_var);
		Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 * L_10 = ((U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_il2cpp_TypeInfo_var))->get_U3CU3E9__25_0_1();
		Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 * L_11 = L_10;
		G_B3_0 = L_11;
		G_B3_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_2 = L_9;
		if (L_11)
		{
			G_B4_0 = L_11;
			G_B4_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B4_2 = L_9;
			goto IL_0088;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_il2cpp_TypeInfo_var);
		U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA * L_12 = ((U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 * L_13 = (Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 *)il2cpp_codegen_object_new(Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875_il2cpp_TypeInfo_var);
		Func_3__ctor_m0D8C1007F600903496B78C6ECE280BA3B092E0AB(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec_U3COnValidateU3Eb__25_0_mC3EB7ECF4541E5E0D1F864DFF3C957C995C98EEA_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m0D8C1007F600903496B78C6ECE280BA3B092E0AB_RuntimeMethod_var);
		Func_3_tFE37AA67AECF512EC6C360214537ED447EC86875 * L_14 = L_13;
		((U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_il2cpp_TypeInfo_var))->set_U3CU3E9__25_0_1(L_14);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0088:
	{
		String_t* L_15 = Enumerable_Aggregate_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_TisString_t_mDBB0A69F0AC196B0AE6D937BDDE7DE0543598AAF(G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Aggregate_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_TisString_t_mDBB0A69F0AC196B0AE6D937BDDE7DE0543598AAF_RuntimeMethod_var);
		V_0 = L_15;
		// if (localUp.sqrMagnitude == 1 && localForward.sqrMagnitude == 1)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_16 = __this->get_address_of_localUp_7();
		float L_17 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_16, /*hidden argument*/NULL);
		if ((!(((float)L_17) == ((float)(1.0f)))))
		{
			goto IL_00b4;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_18 = __this->get_address_of_localForward_6();
		float L_19 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_18, /*hidden argument*/NULL);
		G_B7_0 = ((((float)L_19) == ((float)(1.0f)))? 1 : 0);
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B7_0 = 0;
	}

IL_00b5:
	{
		V_2 = (bool)G_B7_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00e9;
		}
	}
	{
		// Debug.Assert(Vector3.Dot(localForward, localUp) == 0, $"localForward and localUp not perpendicular for object {hierarchy}. Did you set Local Forward correctly?");
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = __this->get_localForward_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = __this->get_localUp_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_23 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_21, L_22, /*hidden argument*/NULL);
		String_t* L_24 = V_0;
		String_t* L_25 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral7CB3FA50D3BB8C45880B11288FD3CADE506CBEA4, L_24, _stringLiteral3030B9DA4F726876DE1394A13386F366F2AFB284, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC((bool)((((float)L_23) == ((float)(0.0f)))? 1 : 0), L_25, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		// localForward = localForward.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_26 = __this->get_address_of_localForward_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_26, /*hidden argument*/NULL);
		__this->set_localForward_6(L_27);
		// localUp = localUp.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_28 = __this->get_address_of_localUp_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_28, /*hidden argument*/NULL);
		__this->set_localUp_7(L_29);
		// bounds.x = Mathf.Max(bounds.x, 0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_30 = __this->get_address_of_bounds_9();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_31 = __this->get_address_of_bounds_9();
		float L_32 = L_31->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_33 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_32, (0.0f), /*hidden argument*/NULL);
		L_30->set_x_0(L_33);
		// bounds.y = Mathf.Max(bounds.y, 0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_34 = __this->get_address_of_bounds_9();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_35 = __this->get_address_of_bounds_9();
		float L_36 = L_35->get_y_1();
		float L_37 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_36, (0.0f), /*hidden argument*/NULL);
		L_34->set_y_1(L_37);
	}

IL_014b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchable_OnEnable_m1525367EDCE62C92D334EC553DDF8A2BFCCB935D (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchable_OnEnable_m1525367EDCE62C92D334EC553DDF8A2BFCCB935D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (touchableCollider == null)
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = __this->get_touchableCollider_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// SetTouchableCollider(GetComponent<BoxCollider>());
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_3 = Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var);
		NearInteractionTouchable_SetTouchableCollider_m0D8FFC526EEEC30A219047927C010B55BD446C8E(__this, L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::SetLocalForward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchable_SetLocalForward_m95EC3C2A50E7FAA4D1CEC5A9695D0F55507994AD (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___newLocalForward0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchable_SetLocalForward_m95EC3C2A50E7FAA4D1CEC5A9695D0F55507994AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// localForward = newLocalForward;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___newLocalForward0;
		__this->set_localForward_6(L_0);
		// localUp = Vector3.Cross(localForward, LocalRight).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_localForward_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = NearInteractionTouchable_get_LocalRight_m5EFB8D626AE57001CA9CB4459691DAC6D04F59FD(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		__this->set_localUp_7(L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::SetLocalUp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchable_SetLocalUp_m681D3EAA97A1376E9D6C9E6BC1195D3151D2A086 (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___newLocalUp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchable_SetLocalUp_m681D3EAA97A1376E9D6C9E6BC1195D3151D2A086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// localUp = newLocalUp;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___newLocalUp0;
		__this->set_localUp_7(L_0);
		// localForward = Vector3.Cross(LocalRight, localUp).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = NearInteractionTouchable_get_LocalRight_m5EFB8D626AE57001CA9CB4459691DAC6D04F59FD(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = __this->get_localUp_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		__this->set_localForward_6(L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::SetLocalCenter(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchable_SetLocalCenter_m16577D9D74FF6B2D740A1B21F9B5C6C3C105F755 (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___newLocalCenter0, const RuntimeMethod* method)
{
	{
		// localCenter = newLocalCenter;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___newLocalCenter0;
		__this->set_localCenter_8(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::SetBounds(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchable_SetBounds_m77BFE29AC8F6DC1D16BD12B7A1957DD7185BA6F1 (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___newBounds0, const RuntimeMethod* method)
{
	{
		// bounds = newBounds;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___newBounds0;
		__this->set_bounds_9(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::SetTouchableCollider(UnityEngine.BoxCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchable_SetTouchableCollider_m0D8FFC526EEEC30A219047927C010B55BD446C8E (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___newCollider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchable_SetTouchableCollider_m0D8FFC526EEEC30A219047927C010B55BD446C8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * V_2 = NULL;
	{
		// if (newCollider != null)
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_0 = ___newCollider0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00b4;
		}
	}
	{
		// touchableCollider = newCollider;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_3 = ___newCollider0;
		__this->set_touchableCollider_10(L_3);
		// SetLocalForward(-Vector3.forward);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_4, /*hidden argument*/NULL);
		NearInteractionTouchable_SetLocalForward_m95EC3C2A50E7FAA4D1CEC5A9695D0F55507994AD(__this, L_5, /*hidden argument*/NULL);
		// Vector2 adjustedSize = new Vector2(
		//             Math.Abs(Vector3.Dot(newCollider.size, LocalRight)),
		//             Math.Abs(Vector3.Dot(newCollider.size, LocalUp)));
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_6 = ___newCollider0;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = NearInteractionTouchable_get_LocalRight_m5EFB8D626AE57001CA9CB4459691DAC6D04F59FD(__this, /*hidden argument*/NULL);
		float L_9 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_10 = fabsf(L_9);
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_11 = ___newCollider0;
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = NearInteractionTouchable_get_LocalUp_m33F219AEB010860E14B483FF8E92A2550966D6B9_inline(__this, /*hidden argument*/NULL);
		float L_14 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_12, L_13, /*hidden argument*/NULL);
		float L_15 = fabsf(L_14);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), L_10, L_15, /*hidden argument*/NULL);
		// SetBounds(adjustedSize);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = V_1;
		NearInteractionTouchable_SetBounds_m77BFE29AC8F6DC1D16BD12B7A1957DD7185BA6F1(__this, L_16, /*hidden argument*/NULL);
		// SetLocalCenter(newCollider.center + Vector3.Scale(newCollider.size / 2.0f, LocalForward));
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_17 = ___newCollider0;
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = BoxCollider_get_center_mA9164B9949F419A35CC949685F1DC14588BC6402(L_17, /*hidden argument*/NULL);
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_19 = ___newCollider0;
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_20, (2.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = NearInteractionTouchable_get_LocalForward_m16CC9E3E3F8EA9BFF99D368A46028697280B4D3A_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_21, L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_18, L_23, /*hidden argument*/NULL);
		NearInteractionTouchable_SetLocalCenter_m16577D9D74FF6B2D740A1B21F9B5C6C3C105F755(__this, L_24, /*hidden argument*/NULL);
		// BoxCollider attachedBoxCollider = GetComponent<BoxCollider>();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_25 = Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var);
		V_2 = L_25;
		// attachedBoxCollider.size = newCollider.size;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_26 = V_2;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_27 = ___newCollider0;
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		BoxCollider_set_size_m65F9B4BD610D3094313EC8D1C5CE58D1D345A176(L_26, L_28, /*hidden argument*/NULL);
		// attachedBoxCollider.center = newCollider.center;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_29 = V_2;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_30 = ___newCollider0;
		NullCheck(L_30);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = BoxCollider_get_center_mA9164B9949F419A35CC949685F1DC14588BC6402(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		BoxCollider_set_center_m8A871056CA383C9932A7694FE396A1EFA247FC69(L_29, L_31, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_00b4:
	{
		// Debug.LogWarning("BoxCollider is null, cannot set bounds of NearInteractionTouchable plane");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralF8063269B3AD7E1E22E65A00A5927927EA6711A7, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::DistanceToTouchable(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NearInteractionTouchable_DistanceToTouchable_m8E0A60EC522061E339C3A06215618D3FED0CCE4D (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___samplePoint0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___normal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchable_DistanceToTouchable_m8E0A60EC522061E339C3A06215618D3FED0CCE4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t G_B5_0 = 0;
	{
		// normal = Forward;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = ___normal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = NearInteractionTouchable_get_Forward_mC4A0FF35026D2BFA7F5D95A32A9B98C7BBD0628F(__this, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0 = L_1;
		// Vector3 localPoint = transform.InverseTransformPoint(samplePoint) - localCenter;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___samplePoint0;
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_2, L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_localCenter_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// Vector3 planeSpacePoint = new Vector3(
		//     Vector3.Dot(localPoint, LocalRight),
		//     Vector3.Dot(localPoint, localUp),
		//     Vector3.Dot(localPoint, localForward));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = NearInteractionTouchable_get_LocalRight_m5EFB8D626AE57001CA9CB4459691DAC6D04F59FD(__this, /*hidden argument*/NULL);
		float L_9 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = __this->get_localUp_7();
		float L_12 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_10, L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = __this->get_localForward_6();
		float L_15 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_13, L_14, /*hidden argument*/NULL);
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), L_9, L_12, L_15, /*hidden argument*/NULL);
		// if (planeSpacePoint.x < -bounds.x / 2 ||
		//     planeSpacePoint.x > bounds.x / 2 ||
		//     planeSpacePoint.y < -bounds.y / 2 ||
		//     planeSpacePoint.y > bounds.y / 2)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_1;
		float L_17 = L_16.get_x_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_18 = __this->get_address_of_bounds_9();
		float L_19 = L_18->get_x_0();
		if ((((float)L_17) < ((float)((float)((float)((-L_19))/(float)(2.0f))))))
		{
			goto IL_00b8;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_1;
		float L_21 = L_20.get_x_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_22 = __this->get_address_of_bounds_9();
		float L_23 = L_22->get_x_0();
		if ((((float)L_21) > ((float)((float)((float)L_23/(float)(2.0f))))))
		{
			goto IL_00b8;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_1;
		float L_25 = L_24.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_26 = __this->get_address_of_bounds_9();
		float L_27 = L_26->get_y_1();
		if ((((float)L_25) < ((float)((float)((float)((-L_27))/(float)(2.0f))))))
		{
			goto IL_00b8;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = V_1;
		float L_29 = L_28.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_30 = __this->get_address_of_bounds_9();
		float L_31 = L_30->get_y_1();
		G_B5_0 = ((((float)L_29) > ((float)((float)((float)L_31/(float)(2.0f)))))? 1 : 0);
		goto IL_00b9;
	}

IL_00b8:
	{
		G_B5_0 = 1;
	}

IL_00b9:
	{
		V_2 = (bool)G_B5_0;
		bool L_32 = V_2;
		if (!L_32)
		{
			goto IL_00c6;
		}
	}
	{
		// return float.PositiveInfinity;
		V_3 = (std::numeric_limits<float>::infinity());
		goto IL_00e1;
	}

IL_00c6:
	{
		// planeSpacePoint = transform.TransformSize(planeSpacePoint);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = TransformExtensions_TransformSize_m78DB1AB578BD58872DE4724A53B9131764828C99(L_33, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		// return Math.Abs(planeSpacePoint.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = V_1;
		float L_37 = L_36.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_38 = fabsf(L_37);
		V_3 = L_38;
		goto IL_00e1;
	}

IL_00e1:
	{
		// }
		float L_39 = V_3;
		return L_39;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchable__ctor_m344E2F481B615359C60D40BA4E2AF792C86A15DA (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchable__ctor_m344E2F481B615359C60D40BA4E2AF792C86A15DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Vector3 localForward = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		__this->set_localForward_6(L_0);
		// protected Vector3 localUp = Vector3.up;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		__this->set_localUp_7(L_1);
		// protected Vector3 localCenter = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_localCenter_8(L_2);
		// protected Vector2 bounds = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_bounds_9(L_3);
		NearInteractionTouchableSurface__ctor_m773279497235F56D4EE9736C8DC643E9DE7C9398(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB465F4A09A825CFBC18C48B47F03BEE1D2D64DDD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mB465F4A09A825CFBC18C48B47F03BEE1D2D64DDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA * L_0 = (U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA *)il2cpp_codegen_object_new(U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m80BF26AEBB75D9C2272163E4A8D9F0CBEC87AE84(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m80BF26AEBB75D9C2272163E4A8D9F0CBEC87AE84 (U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c::<OnValidate>b__25_0(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3COnValidateU3Eb__25_0_mC3EB7ECF4541E5E0D1F864DFF3C957C995C98EEA (U3CU3Ec_t76DDEA324BA2388E9E35102FF41C4DECC35B0EFA * __this, String_t* ___result0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___next1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3COnValidateU3Eb__25_0_mC3EB7ECF4541E5E0D1F864DFF3C957C995C98EEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string hierarchy = gameObject.transform.EnumerateAncestors(true).Aggregate("", (result, next) => next.gameObject.name + "=>" + result);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___next1;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___result0;
		String_t* L_4 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteral4D2A116113E32BCCEAF300821EDE7A9665B3F990, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableSurface__ctor_m773279497235F56D4EE9736C8DC643E9DE7C9398 (NearInteractionTouchableSurface_t6B8C21401FD2637A28DB7458591F79DA84C2B4D5 * __this, const RuntimeMethod* method)
{
	{
		BaseNearInteractionTouchable__ctor_m7B4737748E8C4796C19CA095031A75A362D4FFC1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::get_Instances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NearInteractionTouchableUnityUI_get_Instances_mE63803A236217DCD1D1FB479DB09A16EF4256AC3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchableUnityUI_get_Instances_mE63803A236217DCD1D1FB479DB09A16EF4256AC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IReadOnlyList<NearInteractionTouchableUnityUI> Instances => instances;
		IL2CPP_RUNTIME_CLASS_INIT(NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_il2cpp_TypeInfo_var);
		List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 * L_0 = ((NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_il2cpp_TypeInfo_var))->get_instances_7();
		return L_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::get_LocalCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchableUnityUI_get_LocalCenter_mB3A9450BB33CF6ED1CB664C6BF87B7F687309448 (NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchableUnityUI_get_LocalCenter_mB3A9450BB33CF6ED1CB664C6BF87B7F687309448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Vector3 LocalCenter => Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::get_LocalPressDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchableUnityUI_get_LocalPressDirection_mC5BCB069D6163439363A52E04DBF86250AE18383 (NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchableUnityUI_get_LocalPressDirection_mC5BCB069D6163439363A52E04DBF86250AE18383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Vector3 LocalPressDirection => Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::get_Bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  NearInteractionTouchableUnityUI_get_Bounds_m06D8FB433C58DB67D0AE31841BB0BC39A56C2F9F (NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchableUnityUI_get_Bounds_m06D8FB433C58DB67D0AE31841BB0BC39A56C2F9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Vector2 Bounds => rectTransform.Value.rect.size;
		Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4 * L_0 = __this->get_rectTransform_6();
		NullCheck(L_0);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = Lazy_1_get_Value_m14285D8A1AD14C080ED2D95FACA7366ED99FE4F2(L_0, /*hidden argument*/Lazy_1_get_Value_m14285D8A1AD14C080ED2D95FACA7366ED99FE4F2_RuntimeMethod_var);
		NullCheck(L_1);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2 = RectTransform_get_rect_mE5F283FCB99A66403AC1F0607CA49C156D73A15E(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Rect_get_size_m731642B8F03F6CE372A2C9E2E4A925450630606C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableUnityUI__ctor_mB307503D7D4A93C15D5AB9F7BF68964BD167227B (NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchableUnityUI__ctor_mB307503D7D4A93C15D5AB9F7BF68964BD167227B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NearInteractionTouchableUnityUI()
		NearInteractionTouchableSurface__ctor_m773279497235F56D4EE9736C8DC643E9DE7C9398(__this, /*hidden argument*/NULL);
		// rectTransform = new Lazy<RectTransform>(GetComponent<RectTransform>);
		Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC * L_0 = (Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC *)il2cpp_codegen_object_new(Func_1_t3AE1617AFFCE3777C6509180026C803D862960EC_il2cpp_TypeInfo_var);
		Func_1__ctor_m9CD37EDF32B1025161B21189308A89FBCB3D31D0(L_0, __this, (intptr_t)((intptr_t)Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m9CD37EDF32B1025161B21189308A89FBCB3D31D0_RuntimeMethod_var);
		Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4 * L_1 = (Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4 *)il2cpp_codegen_object_new(Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4_il2cpp_TypeInfo_var);
		Lazy_1__ctor_mB678E6E7BEB0C87364A66EF9597E7546BAC3632B(L_1, L_0, /*hidden argument*/Lazy_1__ctor_mB678E6E7BEB0C87364A66EF9597E7546BAC3632B_RuntimeMethod_var);
		__this->set_rectTransform_6(L_1);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::DistanceToTouchable(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NearInteractionTouchableUnityUI_DistanceToTouchable_m4C859927485C47BC4F7E4D25DFB8A70B9574B8D4 (NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___samplePoint0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___normal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchableUnityUI_DistanceToTouchable_m4C859927485C47BC4F7E4D25DFB8A70B9574B8D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// normal = transform.TransformDirection(-LocalPressDirection);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = ___normal1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = VirtFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface::get_LocalPressDirection() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(L_1, L_3, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0 = L_4;
		// Vector3 localPoint = transform.InverseTransformPoint(samplePoint);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___samplePoint0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (!rectTransform.Value.rect.Contains(localPoint))
		Lazy_1_tD2C2BE8F758DC9A6D241E6920D8A6D441B86EDF4 * L_8 = __this->get_rectTransform_6();
		NullCheck(L_8);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_9 = Lazy_1_get_Value_m14285D8A1AD14C080ED2D95FACA7366ED99FE4F2(L_8, /*hidden argument*/Lazy_1_get_Value_m14285D8A1AD14C080ED2D95FACA7366ED99FE4F2_RuntimeMethod_var);
		NullCheck(L_9);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_10 = RectTransform_get_rect_mE5F283FCB99A66403AC1F0607CA49C156D73A15E(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		bool L_12 = Rect_Contains_m5072228CE6251E7C754F227BA330F9ADA95C1495((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_11, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0053;
		}
	}
	{
		// return float.PositiveInfinity;
		V_3 = (std::numeric_limits<float>::infinity());
		goto IL_006e;
	}

IL_0053:
	{
		// localPoint = transform.TransformSize(localPoint);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = TransformExtensions_TransformSize_m78DB1AB578BD58872DE4724A53B9131764828C99(L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// return Math.Abs(localPoint.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		float L_18 = L_17.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_19 = fabsf(L_18);
		V_3 = L_19;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		float L_20 = V_3;
		return L_20;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableUnityUI_OnEnable_m447F15AC593466901E1DCDFA4ACB849FA964D17A (NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchableUnityUI_OnEnable_m447F15AC593466901E1DCDFA4ACB849FA964D17A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instances.Add(this);
		IL2CPP_RUNTIME_CLASS_INIT(NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_il2cpp_TypeInfo_var);
		List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 * L_0 = ((NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_il2cpp_TypeInfo_var))->get_instances_7();
		NullCheck(L_0);
		List_1_Add_m8D91BB1B79E0FC9FACFCC06AEADEE1F1BAA31F3B(L_0, __this, /*hidden argument*/List_1_Add_m8D91BB1B79E0FC9FACFCC06AEADEE1F1BAA31F3B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableUnityUI_OnDisable_m9BF8B68084BC0B4A02F8AD2827B8D57BD959D94C (NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchableUnityUI_OnDisable_m9BF8B68084BC0B4A02F8AD2827B8D57BD959D94C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instances.Remove(this);
		IL2CPP_RUNTIME_CLASS_INIT(NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_il2cpp_TypeInfo_var);
		List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 * L_0 = ((NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_il2cpp_TypeInfo_var))->get_instances_7();
		NullCheck(L_0);
		List_1_Remove_mCF248BF2C295B81921E9730A706AFE7FF6BBB8CF(L_0, __this, /*hidden argument*/List_1_Remove_mCF248BF2C295B81921E9730A706AFE7FF6BBB8CF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableUnityUI__cctor_mEA05B7AEE9E89FD59B84641F7C9C22E938DDE354 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchableUnityUI__cctor_mEA05B7AEE9E89FD59B84641F7C9C22E938DDE354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<NearInteractionTouchableUnityUI> instances = new List<NearInteractionTouchableUnityUI>();
		List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 * L_0 = (List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5 *)il2cpp_codegen_object_new(List_1_t516BF3B9E592DF56C43EDF59FCDB54CC4069F2B5_il2cpp_TypeInfo_var);
		List_1__ctor_mB8D8860335BBB5FD0E3C539F5D1CAD1E9ED08F45(L_0, /*hidden argument*/List_1__ctor_mB8D8860335BBB5FD0E3C539F5D1CAD1E9ED08F45_RuntimeMethod_var);
		((NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_t866C95691545355DC293D5F6C0CE525A8D93A108_il2cpp_TypeInfo_var))->set_instances_7(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::get_ColliderEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NearInteractionTouchableVolume_get_ColliderEnabled_m49F3D3757F7CBCF656DA881846991B312EC070A4 (NearInteractionTouchableVolume_tD6BF0CE15BDB720A54641CE3C1F7CA4E0E4B7A59 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// public bool ColliderEnabled { get { return touchableCollider.enabled && touchableCollider.gameObject.activeInHierarchy; } }
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = __this->get_touchableCollider_6();
		NullCheck(L_0);
		bool L_1 = Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_2 = __this->get_touchableCollider_6();
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		// public bool ColliderEnabled { get { return touchableCollider.enabled && touchableCollider.gameObject.activeInHierarchy; } }
		bool L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::get_TouchableCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * NearInteractionTouchableVolume_get_TouchableCollider_m6A6D102700A7D4A6DD2507ED0C0E28D46EC43CC2 (NearInteractionTouchableVolume_tD6BF0CE15BDB720A54641CE3C1F7CA4E0E4B7A59 * __this, const RuntimeMethod* method)
{
	{
		// public Collider TouchableCollider => touchableCollider;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = __this->get_touchableCollider_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableVolume_OnValidate_m8A8343E7B76A52C97BAF3F16EC852BA6F0186359 (NearInteractionTouchableVolume_tD6BF0CE15BDB720A54641CE3C1F7CA4E0E4B7A59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchableVolume_OnValidate_m8A8343E7B76A52C97BAF3F16EC852BA6F0186359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnValidate();
		BaseNearInteractionTouchable_OnValidate_m83D9F5A43DAEB2361B772F0899D721464461988A(__this, /*hidden argument*/NULL);
		// touchableCollider = GetComponent<Collider>();
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6(__this, /*hidden argument*/Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6_RuntimeMethod_var);
		__this->set_touchableCollider_6(L_0);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::DistanceToTouchable(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NearInteractionTouchableVolume_DistanceToTouchable_m4622AE7D909122D95820075308459FF25A77399B (NearInteractionTouchableVolume_tD6BF0CE15BDB720A54641CE3C1F7CA4E0E4B7A59 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___samplePoint0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___normal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearInteractionTouchableVolume_DistanceToTouchable_m4622AE7D909122D95820075308459FF25A77399B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// Vector3 closest = TouchableCollider.ClosestPoint(samplePoint);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = NearInteractionTouchableVolume_get_TouchableCollider_m6A6D102700A7D4A6DD2507ED0C0E28D46EC43CC2_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___samplePoint0;
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Collider_ClosestPoint_mA3CF53B6EE9CEEDB3BF2BCCE19E511CA659672B7(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// normal = (samplePoint - closest);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_3 = ___normal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___samplePoint0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_4, L_5, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_3 = L_6;
		// if (normal == Vector3.zero)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_7 = ___normal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_10 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		// normal = samplePoint - TouchableCollider.bounds.center;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_12 = ___normal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = ___samplePoint0;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_14 = NearInteractionTouchableVolume_get_TouchableCollider_m6A6D102700A7D4A6DD2507ED0C0E28D46EC43CC2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_15 = Collider_get_bounds_mD3CB68E38FB998406193A88D18C01F510272058A(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_16, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_12 = L_17;
		// normal.Normalize();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_18 = ___normal1;
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_18, /*hidden argument*/NULL);
		// return -1;
		V_3 = (-1.0f);
		goto IL_0073;
	}

IL_005e:
	{
		// float dist = normal.magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_19 = ___normal1;
		float L_20 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		// normal.Normalize();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_21 = ___normal1;
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_21, /*hidden argument*/NULL);
		// return dist;
		float L_22 = V_4;
		V_3 = L_22;
		goto IL_0073;
	}

IL_0073:
	{
		// }
		float L_23 = V_3;
		return L_23;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableVolume__ctor_m61C00AFEE2E53D0FA6010B1D941E8151B0FDEA7D (NearInteractionTouchableVolume_tD6BF0CE15BDB720A54641CE3C1F7CA4E0E4B7A59 * __this, const RuntimeMethod* method)
{
	{
		BaseNearInteractionTouchable__ctor_m7B4737748E8C4796C19CA095031A75A362D4FFC1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility_OnPointerClicked_mB3B80E054C00E1E7675BA9A26ECF0D98475285D8 (CanvasUtility_t5EE917C090D9AABFB11C384BB77B4CF725279C65 * __this, MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerClicked(MixedRealityPointerEventData eventData) {}
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility_OnPointerDown_m5FC3BBD63B5F4F8EFBAA8064597B2C3DCF5A72F5 (CanvasUtility_t5EE917C090D9AABFB11C384BB77B4CF725279C65 * __this, MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CanvasUtility_OnPointerDown_m5FC3BBD63B5F4F8EFBAA8064597B2C3DCF5A72F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// oldIsTargetPositionLockedOnFocusLock = eventData.Pointer.IsTargetPositionLockedOnFocusLock;
		MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83 * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1 = MixedRealityPointerEventData_get_Pointer_m71693924BB8DB3FEBF7746EB57118A4B575BA0A7_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(15 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_IsTargetPositionLockedOnFocusLock() */, IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4_il2cpp_TypeInfo_var, L_1);
		__this->set_oldIsTargetPositionLockedOnFocusLock_4(L_2);
		// if (!(eventData.Pointer is IMixedRealityNearPointer) && eventData.Pointer.Controller.IsRotationAvailable)
		MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83 * L_3 = ___eventData0;
		NullCheck(L_3);
		RuntimeObject* L_4 = MixedRealityPointerEventData_get_Pointer_m71693924BB8DB3FEBF7746EB57118A4B575BA0A7_inline(L_3, /*hidden argument*/NULL);
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMixedRealityNearPointer_tC9AE79FB485DFC562800D0DFE6C181311AFD0EA8_il2cpp_TypeInfo_var)))
		{
			goto IL_0031;
		}
	}
	{
		MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83 * L_5 = ___eventData0;
		NullCheck(L_5);
		RuntimeObject* L_6 = MixedRealityPointerEventData_get_Pointer_m71693924BB8DB3FEBF7746EB57118A4B575BA0A7_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Controller() */, IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_IsRotationAvailable() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_7);
		G_B3_0 = ((int32_t)(L_8));
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
	}

IL_0032:
	{
		V_0 = (bool)G_B3_0;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		// eventData.Pointer.IsTargetPositionLockedOnFocusLock = false;
		MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83 * L_10 = ___eventData0;
		NullCheck(L_10);
		RuntimeObject* L_11 = MixedRealityPointerEventData_get_Pointer_m71693924BB8DB3FEBF7746EB57118A4B575BA0A7_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< bool >::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::set_IsTargetPositionLockedOnFocusLock(System.Boolean) */, IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4_il2cpp_TypeInfo_var, L_11, (bool)0);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility_OnPointerDragged_m32882436110842DF2640EEA8D43D57547CB5E4B1 (CanvasUtility_t5EE917C090D9AABFB11C384BB77B4CF725279C65 * __this, MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerDragged(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility_OnPointerUp_m78045DEA940FB675736A0440688350F449BFD7F1 (CanvasUtility_t5EE917C090D9AABFB11C384BB77B4CF725279C65 * __this, MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CanvasUtility_OnPointerUp_m78045DEA940FB675736A0440688350F449BFD7F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventData.Pointer.IsTargetPositionLockedOnFocusLock = oldIsTargetPositionLockedOnFocusLock;
		MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83 * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1 = MixedRealityPointerEventData_get_Pointer_m71693924BB8DB3FEBF7746EB57118A4B575BA0A7_inline(L_0, /*hidden argument*/NULL);
		bool L_2 = __this->get_oldIsTargetPositionLockedOnFocusLock_4();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::set_IsTargetPositionLockedOnFocusLock(System.Boolean) */, IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility_Start_m25D35F0A22834A0A5913DCEEC61A7CDE953A771E (CanvasUtility_t5EE917C090D9AABFB11C384BB77B4CF725279C65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CanvasUtility_Start_m25D35F0A22834A0A5913DCEEC61A7CDE953A771E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * G_B8_1 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * G_B7_1 = NULL;
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * G_B11_0 = NULL;
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * G_B11_1 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * G_B10_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * G_B9_1 = NULL;
	{
		// Canvas canvas = GetComponent<Canvas>();
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_0 = Component_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mAD461B8F1BB5C616749FAA2B63155D710C3CD21C(__this, /*hidden argument*/Component_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mAD461B8F1BB5C616749FAA2B63155D710C3CD21C_RuntimeMethod_var);
		V_0 = L_0;
		// Debug.Assert(canvas != null);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E(L_2, /*hidden argument*/NULL);
		// if (canvas.worldCamera == null)
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_3 = V_0;
		NullCheck(L_3);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409(L_3, /*hidden argument*/NULL);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0093;
		}
	}
	{
		// Debug.Assert(CoreServices.InputSystem?.FocusProvider?.UIRaycastCamera != null, this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_8 = L_7;
		G_B2_0 = L_8;
		if (L_8)
		{
			G_B3_0 = L_8;
			goto IL_0032;
		}
	}
	{
		G_B6_0 = ((Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *)(NULL));
		goto IL_0043;
	}

IL_0032:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_FocusProvider() */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0);
		RuntimeObject* L_10 = L_9;
		G_B4_0 = L_10;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_003e;
		}
	}
	{
		G_B6_0 = ((Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *)(NULL));
		goto IL_0043;
	}

IL_003e:
	{
		NullCheck(G_B5_0);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = InterfaceFuncInvoker0< Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * >::Invoke(2 /* UnityEngine.Camera Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider::get_UIRaycastCamera() */, IMixedRealityFocusProvider_tA4EB221AD9220D7CF32E6AF78B94778A5108088B_il2cpp_TypeInfo_var, G_B5_0);
		G_B6_0 = L_11;
	}

IL_0043:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(G_B6_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m645D533C712851F6F0844100DF86CA5AF02F879E(L_12, __this, /*hidden argument*/NULL);
		// canvas.worldCamera = CoreServices.InputSystem?.FocusProvider?.UIRaycastCamera;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_15 = L_14;
		G_B7_0 = L_15;
		G_B7_1 = L_13;
		if (L_15)
		{
			G_B8_0 = L_15;
			G_B8_1 = L_13;
			goto IL_005d;
		}
	}
	{
		G_B11_0 = ((Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *)(NULL));
		G_B11_1 = G_B7_1;
		goto IL_006e;
	}

IL_005d:
	{
		NullCheck(G_B8_0);
		RuntimeObject* L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_FocusProvider() */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B8_0);
		RuntimeObject* L_17 = L_16;
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
		if (L_17)
		{
			G_B10_0 = L_17;
			G_B10_1 = G_B8_1;
			goto IL_0069;
		}
	}
	{
		G_B11_0 = ((Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *)(NULL));
		G_B11_1 = G_B9_1;
		goto IL_006e;
	}

IL_0069:
	{
		NullCheck(G_B10_0);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_18 = InterfaceFuncInvoker0< Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * >::Invoke(2 /* UnityEngine.Camera Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider::get_UIRaycastCamera() */, IMixedRealityFocusProvider_tA4EB221AD9220D7CF32E6AF78B94778A5108088B_il2cpp_TypeInfo_var, G_B10_0);
		G_B11_0 = L_18;
		G_B11_1 = G_B10_1;
	}

IL_006e:
	{
		NullCheck(G_B11_1);
		Canvas_set_worldCamera_m020A4A35425707F2403E6EBA6AD73F448557F776(G_B11_1, G_B11_0, /*hidden argument*/NULL);
		// if (EventSystem.current == null)
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_19 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_20;
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_0090;
		}
	}
	{
		// Debug.LogError("No EventSystem detected. UI events will not be propagated to Unity UI.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral052FB1FE0D021FB4E5F4B88C36D37951996FBFCB, /*hidden argument*/NULL);
	}

IL_0090:
	{
		goto IL_00a0;
	}

IL_0093:
	{
		// Debug.LogError("World Space Canvas should have no camera set to work properly with Mixed Reality Toolkit. At runtime, they'll get their camera set automatically.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral2246D0EE3F64AE2FE0E32B485F0D449C421DE949, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility__ctor_m9E42B128EFA8237D4D55452DB03040CC132F40F4 (CanvasUtility_t5EE917C090D9AABFB11C384BB77B4CF725279C65 * __this, const RuntimeMethod* method)
{
	{
		// private bool oldIsTargetPositionLockedOnFocusLock = false;
		__this->set_oldIsTargetPositionLockedOnFocusLock_4((bool)0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleMeshEffect_Awake_m777BC58295BEC94799B277281C1C1DC2F78DD6A5 (ScaleMeshEffect_t45B5EA11F4C61ABD9F1711DFF09E4FA080AA9C16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScaleMeshEffect_Awake_m777BC58295BEC94799B277281C1C1DC2F78DD6A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * V_0 = NULL;
	bool V_1 = false;
	{
		// base.Awake();
		UIBehaviour_Awake_m5DD9E48E9933AA28DAE1978B5FCC6B90BAF06FDC(__this, /*hidden argument*/NULL);
		// var canvas = GetComponentInParent<Canvas>();
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_0 = Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B(__this, /*hidden argument*/Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B_RuntimeMethod_var);
		V_0 = L_0;
		// if (canvas != null)
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// canvas.additionalShaderChannels |= AdditionalCanvasShaderChannels.TexCoord2;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_4 = V_0;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = Canvas_get_additionalShaderChannels_m703769513A111C46DC0F0B32864A69E54C085BEC(L_5, /*hidden argument*/NULL);
		NullCheck(L_5);
		Canvas_set_additionalShaderChannels_m0A3CB0D3137C41915E293268BA95920404921FE2(L_5, ((int32_t)((int32_t)L_6|(int32_t)2)), /*hidden argument*/NULL);
		// canvas.additionalShaderChannels |= AdditionalCanvasShaderChannels.TexCoord3;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_7 = V_0;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = Canvas_get_additionalShaderChannels_m703769513A111C46DC0F0B32864A69E54C085BEC(L_8, /*hidden argument*/NULL);
		NullCheck(L_8);
		Canvas_set_additionalShaderChannels_m0A3CB0D3137C41915E293268BA95920404921FE2(L_8, ((int32_t)((int32_t)L_9|(int32_t)4)), /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect::ModifyMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleMeshEffect_ModifyMesh_m6BB0AD4666194839849D7F71558D8704113A47CB (ScaleMeshEffect_t45B5EA11F4C61ABD9F1711DFF09E4FA080AA9C16 * __this, VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___vh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScaleMeshEffect_ModifyMesh_m6BB0AD4666194839849D7F71558D8704113A47CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * V_0 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * V_2 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	bool V_7 = false;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B2_0 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B3_1 = NULL;
	{
		// var rectTransform = transform as RectTransform;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		V_0 = ((RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 *)IsInstSealed((RuntimeObject*)L_0, RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_il2cpp_TypeInfo_var));
		// var scale = new Vector2(rectTransform.rect.width * rectTransform.localScale.x,
		//                         rectTransform.rect.height * rectTransform.localScale.y);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = V_0;
		NullCheck(L_1);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2 = RectTransform_get_rect_mE5F283FCB99A66403AC1F0607CA49C156D73A15E(L_1, /*hidden argument*/NULL);
		V_5 = L_2;
		float L_3 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_5), /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_4 = V_0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_7 = V_0;
		NullCheck(L_7);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_8 = RectTransform_get_rect_mE5F283FCB99A66403AC1F0607CA49C156D73A15E(L_7, /*hidden argument*/NULL);
		V_5 = L_8;
		float L_9 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_5), /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_10 = V_0;
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_6)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_12)), /*hidden argument*/NULL);
		// var canvas = GetComponentInParent<Canvas>();
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_13 = Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B(__this, /*hidden argument*/Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B_RuntimeMethod_var);
		V_2 = L_13;
		// var depth = new Vector2((canvas ? (1.0f / canvas.transform.lossyScale.z) : 1.0f) * rectTransform.localScale.z,
		//                         -1.0f);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_14, /*hidden argument*/NULL);
		G_B1_0 = (&V_3);
		if (L_15)
		{
			G_B2_0 = (&V_3);
			goto IL_0062;
		}
	}
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B1_0;
		goto IL_0078;
	}

IL_0062:
	{
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_16 = V_2;
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		G_B3_0 = ((float)((float)(1.0f)/(float)L_19));
		G_B3_1 = G_B2_0;
	}

IL_0078:
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_20 = V_0;
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_z_4();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)G_B3_1, ((float)il2cpp_codegen_multiply((float)G_B3_0, (float)L_22)), (-1.0f), /*hidden argument*/NULL);
		// var vertex = new UIVertex();
		il2cpp_codegen_initobj((&V_4), sizeof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577 ));
		// for (var i = 0; i < vh.currentVertCount; ++i)
		V_6 = 0;
		goto IL_00c9;
	}

IL_009b:
	{
		// vh.PopulateUIVertex(ref vertex, i);
		VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * L_23 = ___vh0;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		VertexHelper_PopulateUIVertex_m75E49AE0377BABEE2C3D1CCA1624DE5668B5C42C(L_23, (UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577 *)(&V_4), L_24, /*hidden argument*/NULL);
		// vertex.uv2 = scale;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_25 = V_1;
		(&V_4)->set_uv2_6(L_25);
		// vertex.uv3 = depth;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = V_3;
		(&V_4)->set_uv3_7(L_26);
		// vh.SetUIVertex(vertex, i);
		VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * L_27 = ___vh0;
		UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  L_28 = V_4;
		int32_t L_29 = V_6;
		NullCheck(L_27);
		VertexHelper_SetUIVertex_m71EA6FEB875252F25180FA7F3849A962C6231976(L_27, L_28, L_29, /*hidden argument*/NULL);
		// for (var i = 0; i < vh.currentVertCount; ++i)
		int32_t L_30 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00c9:
	{
		// for (var i = 0; i < vh.currentVertCount; ++i)
		int32_t L_31 = V_6;
		VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * L_32 = ___vh0;
		NullCheck(L_32);
		int32_t L_33 = VertexHelper_get_currentVertCount_m99ACD97A171FCB5046C7608CAD7399A8E0A6FD3F(L_32, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_31) < ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_7;
		if (L_34)
		{
			goto IL_009b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleMeshEffect__ctor_mEC95126B6DBFF4648D777B254E5677CB7806830F (ScaleMeshEffect_t45B5EA11F4C61ABD9F1711DFF09E4FA080AA9C16 * __this, const RuntimeMethod* method)
{
	{
		BaseMeshEffect__ctor_m544B1FC50DE8DE4A5725C0CE17AD1F2BFE951B9E(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchable_get_LocalUp_m33F219AEB010860E14B483FF8E92A2550966D6B9_inline (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 LocalUp { get => localUp; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localUp_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NearInteractionTouchable_get_LocalForward_m16CC9E3E3F8EA9BFF99D368A46028697280B4D3A_inline (NearInteractionTouchable_t700E617A3B4CD68AE70E482F0F5E14354C10BCCB * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 LocalForward { get => localForward; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localForward_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * NearInteractionTouchableVolume_get_TouchableCollider_m6A6D102700A7D4A6DD2507ED0C0E28D46EC43CC2_inline (NearInteractionTouchableVolume_tD6BF0CE15BDB720A54641CE3C1F7CA4E0E4B7A59 * __this, const RuntimeMethod* method)
{
	{
		// public Collider TouchableCollider => touchableCollider;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = __this->get_touchableCollider_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityPointerEventData_get_Pointer_m71693924BB8DB3FEBF7746EB57118A4B575BA0A7_inline (MixedRealityPointerEventData_tEE578E63406FED21B2CE694F17432728C57D9A83 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityPointer Pointer { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CPointerU3Ek__BackingField_7();
		return L_0;
	}
}
