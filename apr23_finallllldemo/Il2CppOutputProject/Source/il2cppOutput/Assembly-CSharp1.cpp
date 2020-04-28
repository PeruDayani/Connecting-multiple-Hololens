#include "il2cpp-config.h"

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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DataServer
struct DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027;
// DataServer/DataSubscriber
struct DataSubscriber_tAA394CFDC6B457821810C684BF3EBEA317B78241;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Tuple`3<System.String,System.Single,System.String>>
struct ConcurrentQueue_1_t2325366CD20A78AFAB6932FDFF4E217B74A1B336;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Net.Sockets.TcpListener>
struct Dictionary_2_t932D8814F16E2D74BF342E05ABCFBE089516A850;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<DataServer/DataSubscriber>>
struct Dictionary_2_t664D60A80BC695E8D14955B334D6D9110376E120;
// System.Collections.Generic.List`1<System.Tuple`5<System.Net.Sockets.TcpClient,System.Net.Sockets.NetworkStream,System.Byte[],System.Collections.Concurrent.ConcurrentQueue`1<System.String>,System.Text.StringBuilder>>
struct List_1_t2182EAF3B1DD0E7D54323CBE34060063A54E32C2;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980;
// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE;
// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.Net.Sockets.TcpClient
struct TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB;
// System.Net.Sockets.TcpListener
struct TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Threading.ThreadStart
struct ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652;
// TMPro.TMP_Character
struct TMP_Character_t1875AACA978396521498D6A699052C187903553D;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C;
// TMPro.TMP_DigitValidator
struct TMP_DigitValidator_tD53B3EF123D04F923055895ED56555317D239AB5;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tFB7F7AD2CD9ADBE07099C1A06170B51AA8D9D847;
// TMPro.TMP_PhoneNumberValidator
struct TMP_PhoneNumberValidator_t7EB41CFDB7C6AA586BF5AF04151FC2228F565BD2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487;
// TMPro.TMP_Text
struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505;
// TMPro.TMP_TextElement
struct TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344;
// TMPro.TMP_TextEventHandler
struct TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54;
// TMPro.TMP_TextEventHandler/CharacterSelectionEvent
struct CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90;
// TMPro.TMP_TextEventHandler/LineSelectionEvent
struct LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F;
// TMPro.TMP_TextEventHandler/LinkSelectionEvent
struct LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8;
// TMPro.TMP_TextEventHandler/SpriteSelectionEvent
struct SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32;
// TMPro.TMP_TextEventHandler/WordSelectionEvent
struct WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09;
// TMPro.TextAlignmentOptions[]
struct TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B;
// TestServer
struct TestServer_t2BCFFBF706DF6863D40446375403ED1EACA79879;
// TestSubscriber
struct TestSubscriber_t775CBC13A2FB95BEAE091CCB12453BA001D9F9A4;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>
struct UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_tFC992AA557296F35E887CA6A6D486BAD05CBE7E8;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>
struct UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15;
// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930;
// UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>
struct UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TMP_TextUtilities_t0C64120E363A3DA0CB859D321248294080076A45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0163E08E874EAE25EE567A16A21FE923E0E450C9;
IL2CPP_EXTERN_C String_t* _stringLiteral25480252187FBC97F906981317B1D385EAAFABBC;
IL2CPP_EXTERN_C String_t* _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2B500817A96FA5BAECB12EAFF42205003D74E6;
IL2CPP_EXTERN_C String_t* _stringLiteral640AB2BAE07BEDC4C163F679A746F7AB7FB5D1FA;
IL2CPP_EXTERN_C String_t* _stringLiteral75593744E3F137A0C620299F6F16A30F686FA876;
IL2CPP_EXTERN_C String_t* _stringLiteralA61C317B3D38272A6515538A587EA4DF45784BE6;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralC37731DFDA099040F1ACF0900DBC4F801FD019CD;
IL2CPP_EXTERN_C String_t* _stringLiteralCE989C4391262629841681590AD658266F112D16;
IL2CPP_EXTERN_C String_t* _stringLiteralD3F06A581B2B66FA7A3965DDEB6FB307F7BE20BA;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m3F4A66E37DA71D5AF43D8A63F8C2D698003572F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_mAE16231F6DB7467B8D9449A2E3E9AC5A821EC4AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TestServer_ListenForIncommingRequests_m0A2A7D6C90BF8E5B29F910E923C3CC594B56B7D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_Invoke_m1353B454D2DBB8CD54B5380146A4BEE4A0888F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_Invoke_m907D837057531F0AF1AC6E6501DFD9D3549A44AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m077EFE26C9D480C5A721A01FD53F1D3189FB407E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_PhoneNumberValidator_Validate_mCA5EA200223A9F224F2F4DBD306DAE038C71A35F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_Awake_m9A353CC9705A9E824A60C3D2D026A7FD96B41D74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_LateUpdate_m2F3241223A91F9C50E11B27F67BA2B6D19328B72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_SendOnCharacterSelection_mBC44C107A6FB8C43F7C6629D4A15CA85471A28B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_SendOnLineSelection_mAAF4AF44929D0C9FD73C89E5266028908074AEB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_SendOnLinkSelection_m082D12F7D044456D8514E4D31944C6900F8262C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_SendOnSpriteSelection_mEF24BCE06B0CE4450B6AE9561EC4B5052DAF00F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_SendOnWordSelection_m7C4D266070EE2ADC66BCCFD50EB74FEB4923B77E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler__ctor_mEA56AE9489B50CF5E5FC682AA18D1CE9AF8E1F8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TestServer_ListenForIncommingRequests_m0A2A7D6C90BF8E5B29F910E923C3CC594B56B7D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TestServer_SendMessage_mD4251DD3312A0DE2300AEA1867DF6B4C61D3AE9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TestServer_Start_mCF3B2EDEAE8C52F55B0F1DED39E241E3409BC64C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TestSubscriber_OnReceiveMessage_m69519862939C4A2D27CC3C3AF14DB51E168725E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TestSubscriber_Start_m9E3308AB56E9B12BC771F277DD554DBA8CD81C36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TestSubscriber_Update_m1C791B722EE05A895A237C7BF56AE1C9F9052859_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
struct TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C;
struct TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D;
struct TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Net.Sockets.TcpListener
struct  TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint System.Net.Sockets.TcpListener::m_ServerSocketEP
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___m_ServerSocketEP_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::m_ServerSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_ServerSocket_1;
	// System.Boolean System.Net.Sockets.TcpListener::m_Active
	bool ___m_Active_2;
	// System.Boolean System.Net.Sockets.TcpListener::m_ExclusiveAddressUse
	bool ___m_ExclusiveAddressUse_3;

public:
	inline static int32_t get_offset_of_m_ServerSocketEP_0() { return static_cast<int32_t>(offsetof(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE, ___m_ServerSocketEP_0)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_m_ServerSocketEP_0() const { return ___m_ServerSocketEP_0; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_m_ServerSocketEP_0() { return &___m_ServerSocketEP_0; }
	inline void set_m_ServerSocketEP_0(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___m_ServerSocketEP_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocketEP_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServerSocket_1() { return static_cast<int32_t>(offsetof(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE, ___m_ServerSocket_1)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_ServerSocket_1() const { return ___m_ServerSocket_1; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_ServerSocket_1() { return &___m_ServerSocket_1; }
	inline void set_m_ServerSocket_1(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_ServerSocket_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocket_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_2() { return static_cast<int32_t>(offsetof(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE, ___m_Active_2)); }
	inline bool get_m_Active_2() const { return ___m_Active_2; }
	inline bool* get_address_of_m_Active_2() { return &___m_Active_2; }
	inline void set_m_Active_2(bool value)
	{
		___m_Active_2 = value;
	}

	inline static int32_t get_offset_of_m_ExclusiveAddressUse_3() { return static_cast<int32_t>(offsetof(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE, ___m_ExclusiveAddressUse_3)); }
	inline bool get_m_ExclusiveAddressUse_3() const { return ___m_ExclusiveAddressUse_3; }
	inline bool* get_address_of_m_ExclusiveAddressUse_3() { return &___m_ExclusiveAddressUse_3; }
	inline void set_m_ExclusiveAddressUse_3(bool value)
	{
		___m_ExclusiveAddressUse_3 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
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


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
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


// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
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


// TMPro.MaterialReference
struct  MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___material_3)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_3() const { return ___material_3; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fallbackMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_LinkInfo
struct  TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 
{
public:
	// TMPro.TMP_Text TMPro.TMP_LinkInfo::textComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_0;
	// System.Int32 TMPro.TMP_LinkInfo::hashCode
	int32_t ___hashCode_1;
	// System.Int32 TMPro.TMP_LinkInfo::linkIdFirstCharacterIndex
	int32_t ___linkIdFirstCharacterIndex_2;
	// System.Int32 TMPro.TMP_LinkInfo::linkIdLength
	int32_t ___linkIdLength_3;
	// System.Int32 TMPro.TMP_LinkInfo::linkTextfirstCharacterIndex
	int32_t ___linkTextfirstCharacterIndex_4;
	// System.Int32 TMPro.TMP_LinkInfo::linkTextLength
	int32_t ___linkTextLength_5;
	// System.Char[] TMPro.TMP_LinkInfo::linkID
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___linkID_6;

public:
	inline static int32_t get_offset_of_textComponent_0() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___textComponent_0)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_textComponent_0() const { return ___textComponent_0; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_textComponent_0() { return &___textComponent_0; }
	inline void set_textComponent_0(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___textComponent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_0), (void*)value);
	}

	inline static int32_t get_offset_of_hashCode_1() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___hashCode_1)); }
	inline int32_t get_hashCode_1() const { return ___hashCode_1; }
	inline int32_t* get_address_of_hashCode_1() { return &___hashCode_1; }
	inline void set_hashCode_1(int32_t value)
	{
		___hashCode_1 = value;
	}

	inline static int32_t get_offset_of_linkIdFirstCharacterIndex_2() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___linkIdFirstCharacterIndex_2)); }
	inline int32_t get_linkIdFirstCharacterIndex_2() const { return ___linkIdFirstCharacterIndex_2; }
	inline int32_t* get_address_of_linkIdFirstCharacterIndex_2() { return &___linkIdFirstCharacterIndex_2; }
	inline void set_linkIdFirstCharacterIndex_2(int32_t value)
	{
		___linkIdFirstCharacterIndex_2 = value;
	}

	inline static int32_t get_offset_of_linkIdLength_3() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___linkIdLength_3)); }
	inline int32_t get_linkIdLength_3() const { return ___linkIdLength_3; }
	inline int32_t* get_address_of_linkIdLength_3() { return &___linkIdLength_3; }
	inline void set_linkIdLength_3(int32_t value)
	{
		___linkIdLength_3 = value;
	}

	inline static int32_t get_offset_of_linkTextfirstCharacterIndex_4() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___linkTextfirstCharacterIndex_4)); }
	inline int32_t get_linkTextfirstCharacterIndex_4() const { return ___linkTextfirstCharacterIndex_4; }
	inline int32_t* get_address_of_linkTextfirstCharacterIndex_4() { return &___linkTextfirstCharacterIndex_4; }
	inline void set_linkTextfirstCharacterIndex_4(int32_t value)
	{
		___linkTextfirstCharacterIndex_4 = value;
	}

	inline static int32_t get_offset_of_linkTextLength_5() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___linkTextLength_5)); }
	inline int32_t get_linkTextLength_5() const { return ___linkTextLength_5; }
	inline int32_t* get_address_of_linkTextLength_5() { return &___linkTextLength_5; }
	inline void set_linkTextLength_5(int32_t value)
	{
		___linkTextLength_5 = value;
	}

	inline static int32_t get_offset_of_linkID_6() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___linkID_6)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_linkID_6() const { return ___linkID_6; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_linkID_6() { return &___linkID_6; }
	inline void set_linkID_6(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___linkID_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkID_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_LinkInfo
struct TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshaled_pinvoke
{
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_0;
	int32_t ___hashCode_1;
	int32_t ___linkIdFirstCharacterIndex_2;
	int32_t ___linkIdLength_3;
	int32_t ___linkTextfirstCharacterIndex_4;
	int32_t ___linkTextLength_5;
	uint8_t* ___linkID_6;
};
// Native definition for COM marshalling of TMPro.TMP_LinkInfo
struct TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshaled_com
{
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_0;
	int32_t ___hashCode_1;
	int32_t ___linkIdFirstCharacterIndex_2;
	int32_t ___linkIdLength_3;
	int32_t ___linkTextfirstCharacterIndex_4;
	int32_t ___linkTextLength_5;
	uint8_t* ___linkID_6;
};

// TMPro.TMP_RichTextTagStack`1<System.Int32>
struct  TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_ItemStack_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<System.Single>
struct  TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	float ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_ItemStack_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_DefaultItem_3)); }
	inline float get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline float* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(float value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient>
struct  TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_ItemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_DefaultItem_3)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_3), (void*)value);
	}
};


// TMPro.TMP_WordInfo
struct  TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90 
{
public:
	// TMPro.TMP_Text TMPro.TMP_WordInfo::textComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_0;
	// System.Int32 TMPro.TMP_WordInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_1;
	// System.Int32 TMPro.TMP_WordInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_2;
	// System.Int32 TMPro.TMP_WordInfo::characterCount
	int32_t ___characterCount_3;

public:
	inline static int32_t get_offset_of_textComponent_0() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90, ___textComponent_0)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_textComponent_0() const { return ___textComponent_0; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_textComponent_0() { return &___textComponent_0; }
	inline void set_textComponent_0(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___textComponent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_0), (void*)value);
	}

	inline static int32_t get_offset_of_firstCharacterIndex_1() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90, ___firstCharacterIndex_1)); }
	inline int32_t get_firstCharacterIndex_1() const { return ___firstCharacterIndex_1; }
	inline int32_t* get_address_of_firstCharacterIndex_1() { return &___firstCharacterIndex_1; }
	inline void set_firstCharacterIndex_1(int32_t value)
	{
		___firstCharacterIndex_1 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_2() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90, ___lastCharacterIndex_2)); }
	inline int32_t get_lastCharacterIndex_2() const { return ___lastCharacterIndex_2; }
	inline int32_t* get_address_of_lastCharacterIndex_2() { return &___lastCharacterIndex_2; }
	inline void set_lastCharacterIndex_2(int32_t value)
	{
		___lastCharacterIndex_2 = value;
	}

	inline static int32_t get_offset_of_characterCount_3() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90, ___characterCount_3)); }
	inline int32_t get_characterCount_3() const { return ___characterCount_3; }
	inline int32_t* get_address_of_characterCount_3() { return &___characterCount_3; }
	inline void set_characterCount_3(int32_t value)
	{
		___characterCount_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_WordInfo
struct TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshaled_pinvoke
{
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};
// Native definition for COM marshalling of TMPro.TMP_WordInfo
struct TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshaled_com
{
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
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


// UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>
struct  UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct  UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>
struct  UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
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

// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.NetworkStream
struct  NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_StreamSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_7;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_8;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_11;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_12;

public:
	inline static int32_t get_offset_of_m_StreamSocket_5() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_StreamSocket_5)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_StreamSocket_5() const { return ___m_StreamSocket_5; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_StreamSocket_5() { return &___m_StreamSocket_5; }
	inline void set_m_StreamSocket_5(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_StreamSocket_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamSocket_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Readable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_Readable_6)); }
	inline bool get_m_Readable_6() const { return ___m_Readable_6; }
	inline bool* get_address_of_m_Readable_6() { return &___m_Readable_6; }
	inline void set_m_Readable_6(bool value)
	{
		___m_Readable_6 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_7() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_Writeable_7)); }
	inline bool get_m_Writeable_7() const { return ___m_Writeable_7; }
	inline bool* get_address_of_m_Writeable_7() { return &___m_Writeable_7; }
	inline void set_m_Writeable_7(bool value)
	{
		___m_Writeable_7 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_8() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_OwnsSocket_8)); }
	inline bool get_m_OwnsSocket_8() const { return ___m_OwnsSocket_8; }
	inline bool* get_address_of_m_OwnsSocket_8() { return &___m_OwnsSocket_8; }
	inline void set_m_OwnsSocket_8(bool value)
	{
		___m_OwnsSocket_8 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_9() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CloseTimeout_9)); }
	inline int32_t get_m_CloseTimeout_9() const { return ___m_CloseTimeout_9; }
	inline int32_t* get_address_of_m_CloseTimeout_9() { return &___m_CloseTimeout_9; }
	inline void set_m_CloseTimeout_9(int32_t value)
	{
		___m_CloseTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_10() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CleanedUp_10)); }
	inline bool get_m_CleanedUp_10() const { return ___m_CleanedUp_10; }
	inline bool* get_address_of_m_CleanedUp_10() { return &___m_CleanedUp_10; }
	inline void set_m_CleanedUp_10(bool value)
	{
		___m_CleanedUp_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CurrentReadTimeout_11)); }
	inline int32_t get_m_CurrentReadTimeout_11() const { return ___m_CurrentReadTimeout_11; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_11() { return &___m_CurrentReadTimeout_11; }
	inline void set_m_CurrentReadTimeout_11(int32_t value)
	{
		___m_CurrentReadTimeout_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_12() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CurrentWriteTimeout_12)); }
	inline int32_t get_m_CurrentWriteTimeout_12() const { return ___m_CurrentWriteTimeout_12; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_12() { return &___m_CurrentWriteTimeout_12; }
	inline void set_m_CurrentWriteTimeout_12(int32_t value)
	{
		___m_CurrentWriteTimeout_12 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// TMPro.ColorMode
struct  ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Extents
struct  Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___min_0;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___min_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_min_0() const { return ___min_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___max_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_max_1() const { return ___max_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___max_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference>
struct  TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_ItemStack_0)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_DefaultItem_3)); }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}
};


// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32>
struct  TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_ItemStack_0)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_DefaultItem_3)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_Text_TextInputSources
struct  TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4 
{
public:
	// System.Int32 TMPro.TMP_Text_TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct  TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextEventHandler_CharacterSelectionEvent
struct  CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90  : public UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A
{
public:

public:
};


// TMPro.TMP_TextEventHandler_LineSelectionEvent
struct  LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F  : public UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930
{
public:

public:
};


// TMPro.TMP_TextEventHandler_LinkSelectionEvent
struct  LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8  : public UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8
{
public:

public:
};


// TMPro.TMP_TextEventHandler_SpriteSelectionEvent
struct  SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32  : public UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A
{
public:

public:
};


// TMPro.TMP_TextEventHandler_WordSelectionEvent
struct  WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554  : public UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930
{
public:

public:
};


// TMPro.TMP_TextInfo
struct  TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181  : public RuntimeObject
{
public:
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tFB7F7AD2CD9ADBE07099C1A06170B51AA8D9D847* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* ___m_CachedMeshInfo_17;

public:
	inline static int32_t get_offset_of_textComponent_2() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___textComponent_2)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_textComponent_2() const { return ___textComponent_2; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_textComponent_2() { return &___textComponent_2; }
	inline void set_textComponent_2(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___textComponent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_2), (void*)value);
	}

	inline static int32_t get_offset_of_characterCount_3() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___characterCount_3)); }
	inline int32_t get_characterCount_3() const { return ___characterCount_3; }
	inline int32_t* get_address_of_characterCount_3() { return &___characterCount_3; }
	inline void set_characterCount_3(int32_t value)
	{
		___characterCount_3 = value;
	}

	inline static int32_t get_offset_of_spriteCount_4() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___spriteCount_4)); }
	inline int32_t get_spriteCount_4() const { return ___spriteCount_4; }
	inline int32_t* get_address_of_spriteCount_4() { return &___spriteCount_4; }
	inline void set_spriteCount_4(int32_t value)
	{
		___spriteCount_4 = value;
	}

	inline static int32_t get_offset_of_spaceCount_5() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___spaceCount_5)); }
	inline int32_t get_spaceCount_5() const { return ___spaceCount_5; }
	inline int32_t* get_address_of_spaceCount_5() { return &___spaceCount_5; }
	inline void set_spaceCount_5(int32_t value)
	{
		___spaceCount_5 = value;
	}

	inline static int32_t get_offset_of_wordCount_6() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___wordCount_6)); }
	inline int32_t get_wordCount_6() const { return ___wordCount_6; }
	inline int32_t* get_address_of_wordCount_6() { return &___wordCount_6; }
	inline void set_wordCount_6(int32_t value)
	{
		___wordCount_6 = value;
	}

	inline static int32_t get_offset_of_linkCount_7() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___linkCount_7)); }
	inline int32_t get_linkCount_7() const { return ___linkCount_7; }
	inline int32_t* get_address_of_linkCount_7() { return &___linkCount_7; }
	inline void set_linkCount_7(int32_t value)
	{
		___linkCount_7 = value;
	}

	inline static int32_t get_offset_of_lineCount_8() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___lineCount_8)); }
	inline int32_t get_lineCount_8() const { return ___lineCount_8; }
	inline int32_t* get_address_of_lineCount_8() { return &___lineCount_8; }
	inline void set_lineCount_8(int32_t value)
	{
		___lineCount_8 = value;
	}

	inline static int32_t get_offset_of_pageCount_9() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___pageCount_9)); }
	inline int32_t get_pageCount_9() const { return ___pageCount_9; }
	inline int32_t* get_address_of_pageCount_9() { return &___pageCount_9; }
	inline void set_pageCount_9(int32_t value)
	{
		___pageCount_9 = value;
	}

	inline static int32_t get_offset_of_materialCount_10() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___materialCount_10)); }
	inline int32_t get_materialCount_10() const { return ___materialCount_10; }
	inline int32_t* get_address_of_materialCount_10() { return &___materialCount_10; }
	inline void set_materialCount_10(int32_t value)
	{
		___materialCount_10 = value;
	}

	inline static int32_t get_offset_of_characterInfo_11() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___characterInfo_11)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_characterInfo_11() const { return ___characterInfo_11; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_characterInfo_11() { return &___characterInfo_11; }
	inline void set_characterInfo_11(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___characterInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_wordInfo_12() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___wordInfo_12)); }
	inline TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09* get_wordInfo_12() const { return ___wordInfo_12; }
	inline TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09** get_address_of_wordInfo_12() { return &___wordInfo_12; }
	inline void set_wordInfo_12(TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09* value)
	{
		___wordInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wordInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_linkInfo_13() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___linkInfo_13)); }
	inline TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D* get_linkInfo_13() const { return ___linkInfo_13; }
	inline TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D** get_address_of_linkInfo_13() { return &___linkInfo_13; }
	inline void set_linkInfo_13(TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D* value)
	{
		___linkInfo_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkInfo_13), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_14() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___lineInfo_14)); }
	inline TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C* get_lineInfo_14() const { return ___lineInfo_14; }
	inline TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C** get_address_of_lineInfo_14() { return &___lineInfo_14; }
	inline void set_lineInfo_14(TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C* value)
	{
		___lineInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineInfo_14), (void*)value);
	}

	inline static int32_t get_offset_of_pageInfo_15() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___pageInfo_15)); }
	inline TMP_PageInfoU5BU5D_tFB7F7AD2CD9ADBE07099C1A06170B51AA8D9D847* get_pageInfo_15() const { return ___pageInfo_15; }
	inline TMP_PageInfoU5BU5D_tFB7F7AD2CD9ADBE07099C1A06170B51AA8D9D847** get_address_of_pageInfo_15() { return &___pageInfo_15; }
	inline void set_pageInfo_15(TMP_PageInfoU5BU5D_tFB7F7AD2CD9ADBE07099C1A06170B51AA8D9D847* value)
	{
		___pageInfo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pageInfo_15), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfo_16() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___meshInfo_16)); }
	inline TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* get_meshInfo_16() const { return ___meshInfo_16; }
	inline TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9** get_address_of_meshInfo_16() { return &___meshInfo_16; }
	inline void set_meshInfo_16(TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* value)
	{
		___meshInfo_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfo_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMeshInfo_17() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___m_CachedMeshInfo_17)); }
	inline TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* get_m_CachedMeshInfo_17() const { return ___m_CachedMeshInfo_17; }
	inline TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9** get_address_of_m_CachedMeshInfo_17() { return &___m_CachedMeshInfo_17; }
	inline void set_m_CachedMeshInfo_17(TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* value)
	{
		___m_CachedMeshInfo_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMeshInfo_17), (void*)value);
	}
};

struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181_StaticFields
{
public:
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_InfinityVectorNegative_1;

public:
	inline static int32_t get_offset_of_k_InfinityVectorPositive_0() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181_StaticFields, ___k_InfinityVectorPositive_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_InfinityVectorPositive_0() const { return ___k_InfinityVectorPositive_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_InfinityVectorPositive_0() { return &___k_InfinityVectorPositive_0; }
	inline void set_k_InfinityVectorPositive_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_InfinityVectorPositive_0 = value;
	}

	inline static int32_t get_offset_of_k_InfinityVectorNegative_1() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181_StaticFields, ___k_InfinityVectorNegative_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_InfinityVectorNegative_1() const { return ___k_InfinityVectorNegative_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_InfinityVectorNegative_1() { return &___k_InfinityVectorNegative_1; }
	inline void set_k_InfinityVectorNegative_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_InfinityVectorNegative_1 = value;
	}
};


// TMPro.TMP_Vertex
struct  TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0 
{
public:
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0, ___uv_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv_1() const { return ___uv_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_uv2_2() { return static_cast<int32_t>(offsetof(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0, ___uv2_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv2_2() const { return ___uv2_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv2_2() { return &___uv2_2; }
	inline void set_uv2_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv2_2 = value;
	}

	inline static int32_t get_offset_of_uv4_3() { return static_cast<int32_t>(offsetof(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0, ___uv4_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv4_3() const { return ___uv4_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv4_3() { return &___uv4_3; }
	inline void set_uv4_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv4_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0, ___color_4)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_color_4() const { return ___color_4; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___color_4 = value;
	}
};


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct  VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topLeft_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topRight_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topRight_1() const { return ___topRight_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomLeft_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomRight_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.RenderMode
struct  RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Net.IPAddress
struct  IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Any_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___None_3)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_None_3() const { return ___None_3; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.Net.Sockets.TcpClient
struct  TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_ClientSocket_0)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_DataStream_2)); }
	inline NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataStream_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// TMPro.TMP_CharacterInfo
struct  TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1 
{
public:
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_24;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_25;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_26;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_27;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_28;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_29;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_30;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_33;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_34;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_35;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___character_0)); }
	inline Il2CppChar get_character_0() const { return ___character_0; }
	inline Il2CppChar* get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(Il2CppChar value)
	{
		___character_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_stringLength_2() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___stringLength_2)); }
	inline int32_t get_stringLength_2() const { return ___stringLength_2; }
	inline int32_t* get_address_of_stringLength_2() { return &___stringLength_2; }
	inline void set_stringLength_2(int32_t value)
	{
		___stringLength_2 = value;
	}

	inline static int32_t get_offset_of_elementType_3() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___elementType_3)); }
	inline int32_t get_elementType_3() const { return ___elementType_3; }
	inline int32_t* get_address_of_elementType_3() { return &___elementType_3; }
	inline void set_elementType_3(int32_t value)
	{
		___elementType_3 = value;
	}

	inline static int32_t get_offset_of_textElement_4() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___textElement_4)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_textElement_4() const { return ___textElement_4; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_textElement_4() { return &___textElement_4; }
	inline void set_textElement_4(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___textElement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textElement_4), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_5() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___fontAsset_5)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_5() const { return ___fontAsset_5; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_5() { return &___fontAsset_5; }
	inline void set_fontAsset_5(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_5), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_6() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___spriteAsset_6)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_6() const { return ___spriteAsset_6; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_6() { return &___spriteAsset_6; }
	inline void set_spriteAsset_6(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_6), (void*)value);
	}

	inline static int32_t get_offset_of_spriteIndex_7() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___spriteIndex_7)); }
	inline int32_t get_spriteIndex_7() const { return ___spriteIndex_7; }
	inline int32_t* get_address_of_spriteIndex_7() { return &___spriteIndex_7; }
	inline void set_spriteIndex_7(int32_t value)
	{
		___spriteIndex_7 = value;
	}

	inline static int32_t get_offset_of_material_8() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___material_8)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_8() const { return ___material_8; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_8() { return &___material_8; }
	inline void set_material_8(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_8), (void*)value);
	}

	inline static int32_t get_offset_of_materialReferenceIndex_9() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___materialReferenceIndex_9)); }
	inline int32_t get_materialReferenceIndex_9() const { return ___materialReferenceIndex_9; }
	inline int32_t* get_address_of_materialReferenceIndex_9() { return &___materialReferenceIndex_9; }
	inline void set_materialReferenceIndex_9(int32_t value)
	{
		___materialReferenceIndex_9 = value;
	}

	inline static int32_t get_offset_of_isUsingAlternateTypeface_10() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___isUsingAlternateTypeface_10)); }
	inline bool get_isUsingAlternateTypeface_10() const { return ___isUsingAlternateTypeface_10; }
	inline bool* get_address_of_isUsingAlternateTypeface_10() { return &___isUsingAlternateTypeface_10; }
	inline void set_isUsingAlternateTypeface_10(bool value)
	{
		___isUsingAlternateTypeface_10 = value;
	}

	inline static int32_t get_offset_of_pointSize_11() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___pointSize_11)); }
	inline float get_pointSize_11() const { return ___pointSize_11; }
	inline float* get_address_of_pointSize_11() { return &___pointSize_11; }
	inline void set_pointSize_11(float value)
	{
		___pointSize_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_pageNumber_13() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___pageNumber_13)); }
	inline int32_t get_pageNumber_13() const { return ___pageNumber_13; }
	inline int32_t* get_address_of_pageNumber_13() { return &___pageNumber_13; }
	inline void set_pageNumber_13(int32_t value)
	{
		___pageNumber_13 = value;
	}

	inline static int32_t get_offset_of_vertexIndex_14() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___vertexIndex_14)); }
	inline int32_t get_vertexIndex_14() const { return ___vertexIndex_14; }
	inline int32_t* get_address_of_vertexIndex_14() { return &___vertexIndex_14; }
	inline void set_vertexIndex_14(int32_t value)
	{
		___vertexIndex_14 = value;
	}

	inline static int32_t get_offset_of_vertex_BL_15() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___vertex_BL_15)); }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  get_vertex_BL_15() const { return ___vertex_BL_15; }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0 * get_address_of_vertex_BL_15() { return &___vertex_BL_15; }
	inline void set_vertex_BL_15(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  value)
	{
		___vertex_BL_15 = value;
	}

	inline static int32_t get_offset_of_vertex_TL_16() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___vertex_TL_16)); }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  get_vertex_TL_16() const { return ___vertex_TL_16; }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0 * get_address_of_vertex_TL_16() { return &___vertex_TL_16; }
	inline void set_vertex_TL_16(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  value)
	{
		___vertex_TL_16 = value;
	}

	inline static int32_t get_offset_of_vertex_TR_17() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___vertex_TR_17)); }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  get_vertex_TR_17() const { return ___vertex_TR_17; }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0 * get_address_of_vertex_TR_17() { return &___vertex_TR_17; }
	inline void set_vertex_TR_17(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  value)
	{
		___vertex_TR_17 = value;
	}

	inline static int32_t get_offset_of_vertex_BR_18() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___vertex_BR_18)); }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  get_vertex_BR_18() const { return ___vertex_BR_18; }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0 * get_address_of_vertex_BR_18() { return &___vertex_BR_18; }
	inline void set_vertex_BR_18(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  value)
	{
		___vertex_BR_18 = value;
	}

	inline static int32_t get_offset_of_topLeft_19() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___topLeft_19)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_topLeft_19() const { return ___topLeft_19; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_topLeft_19() { return &___topLeft_19; }
	inline void set_topLeft_19(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___topLeft_19 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_20() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___bottomLeft_20)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_bottomLeft_20() const { return ___bottomLeft_20; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_bottomLeft_20() { return &___bottomLeft_20; }
	inline void set_bottomLeft_20(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___bottomLeft_20 = value;
	}

	inline static int32_t get_offset_of_topRight_21() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___topRight_21)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_topRight_21() const { return ___topRight_21; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_topRight_21() { return &___topRight_21; }
	inline void set_topRight_21(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___topRight_21 = value;
	}

	inline static int32_t get_offset_of_bottomRight_22() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___bottomRight_22)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_bottomRight_22() const { return ___bottomRight_22; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_bottomRight_22() { return &___bottomRight_22; }
	inline void set_bottomRight_22(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___bottomRight_22 = value;
	}

	inline static int32_t get_offset_of_origin_23() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___origin_23)); }
	inline float get_origin_23() const { return ___origin_23; }
	inline float* get_address_of_origin_23() { return &___origin_23; }
	inline void set_origin_23(float value)
	{
		___origin_23 = value;
	}

	inline static int32_t get_offset_of_ascender_24() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___ascender_24)); }
	inline float get_ascender_24() const { return ___ascender_24; }
	inline float* get_address_of_ascender_24() { return &___ascender_24; }
	inline void set_ascender_24(float value)
	{
		___ascender_24 = value;
	}

	inline static int32_t get_offset_of_baseLine_25() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___baseLine_25)); }
	inline float get_baseLine_25() const { return ___baseLine_25; }
	inline float* get_address_of_baseLine_25() { return &___baseLine_25; }
	inline void set_baseLine_25(float value)
	{
		___baseLine_25 = value;
	}

	inline static int32_t get_offset_of_descender_26() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___descender_26)); }
	inline float get_descender_26() const { return ___descender_26; }
	inline float* get_address_of_descender_26() { return &___descender_26; }
	inline void set_descender_26(float value)
	{
		___descender_26 = value;
	}

	inline static int32_t get_offset_of_xAdvance_27() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___xAdvance_27)); }
	inline float get_xAdvance_27() const { return ___xAdvance_27; }
	inline float* get_address_of_xAdvance_27() { return &___xAdvance_27; }
	inline void set_xAdvance_27(float value)
	{
		___xAdvance_27 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_28() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___aspectRatio_28)); }
	inline float get_aspectRatio_28() const { return ___aspectRatio_28; }
	inline float* get_address_of_aspectRatio_28() { return &___aspectRatio_28; }
	inline void set_aspectRatio_28(float value)
	{
		___aspectRatio_28 = value;
	}

	inline static int32_t get_offset_of_scale_29() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___scale_29)); }
	inline float get_scale_29() const { return ___scale_29; }
	inline float* get_address_of_scale_29() { return &___scale_29; }
	inline void set_scale_29(float value)
	{
		___scale_29 = value;
	}

	inline static int32_t get_offset_of_color_30() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___color_30)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_color_30() const { return ___color_30; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_color_30() { return &___color_30; }
	inline void set_color_30(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___color_30 = value;
	}

	inline static int32_t get_offset_of_underlineColor_31() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___underlineColor_31)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_31() const { return ___underlineColor_31; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_31() { return &___underlineColor_31; }
	inline void set_underlineColor_31(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_31 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_32() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___strikethroughColor_32)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_32() const { return ___strikethroughColor_32; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_32() { return &___strikethroughColor_32; }
	inline void set_strikethroughColor_32(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_32 = value;
	}

	inline static int32_t get_offset_of_highlightColor_33() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___highlightColor_33)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_33() const { return ___highlightColor_33; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_33() { return &___highlightColor_33; }
	inline void set_highlightColor_33(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_33 = value;
	}

	inline static int32_t get_offset_of_style_34() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___style_34)); }
	inline int32_t get_style_34() const { return ___style_34; }
	inline int32_t* get_address_of_style_34() { return &___style_34; }
	inline void set_style_34(int32_t value)
	{
		___style_34 = value;
	}

	inline static int32_t get_offset_of_isVisible_35() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___isVisible_35)); }
	inline bool get_isVisible_35() const { return ___isVisible_35; }
	inline bool* get_address_of_isVisible_35() { return &___isVisible_35; }
	inline void set_isVisible_35(bool value)
	{
		___isVisible_35 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___textElement_4;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_5;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_BL_15;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_TL_16;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_TR_17;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_BR_18;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___topLeft_19;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottomLeft_20;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___topRight_21;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottomRight_22;
	float ___origin_23;
	float ___ascender_24;
	float ___baseLine_25;
	float ___descender_26;
	float ___xAdvance_27;
	float ___aspectRatio_28;
	float ___scale_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_32;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_33;
	int32_t ___style_34;
	int32_t ___isVisible_35;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___textElement_4;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_5;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_BL_15;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_TL_16;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_TR_17;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_BR_18;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___topLeft_19;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottomLeft_20;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___topRight_21;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottomRight_22;
	float ___origin_23;
	float ___ascender_24;
	float ___baseLine_25;
	float ___descender_26;
	float ___xAdvance_27;
	float ___aspectRatio_28;
	float ___scale_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_32;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_33;
	int32_t ___style_34;
	int32_t ___isVisible_35;
};

// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.TextAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineExtents_19)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight>
struct  TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_ItemStack_0)); }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions>
struct  TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_ItemStack_0)); }
	inline TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Threading.ThreadStart
struct  ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF  : public MulticastDelegate_t
{
public:

public:
};


// TMPro.TMP_InputValidator
struct  TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// TMPro.WordWrapState
struct  WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_14;
	// System.Single TMPro.WordWrapState::previousLineAscender
	float ___previousLineAscender_15;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_16;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_17;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_18;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_19;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_20;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_21;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_22;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_23;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_24;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_25;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_26;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___sizeStack_39;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___indentStack_40;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___styleStack_42;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___baselineStack_43;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___actionStack_44;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_47;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_51;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_53;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_54;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineAscender_13)); }
	inline float get_maxLineAscender_13() const { return ___maxLineAscender_13; }
	inline float* get_address_of_maxLineAscender_13() { return &___maxLineAscender_13; }
	inline void set_maxLineAscender_13(float value)
	{
		___maxLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineDescender_14)); }
	inline float get_maxLineDescender_14() const { return ___maxLineDescender_14; }
	inline float* get_address_of_maxLineDescender_14() { return &___maxLineDescender_14; }
	inline void set_maxLineDescender_14(float value)
	{
		___maxLineDescender_14 = value;
	}

	inline static int32_t get_offset_of_previousLineAscender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineAscender_15)); }
	inline float get_previousLineAscender_15() const { return ___previousLineAscender_15; }
	inline float* get_address_of_previousLineAscender_15() { return &___previousLineAscender_15; }
	inline void set_previousLineAscender_15(float value)
	{
		___previousLineAscender_15 = value;
	}

	inline static int32_t get_offset_of_xAdvance_16() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___xAdvance_16)); }
	inline float get_xAdvance_16() const { return ___xAdvance_16; }
	inline float* get_address_of_xAdvance_16() { return &___xAdvance_16; }
	inline void set_xAdvance_16(float value)
	{
		___xAdvance_16 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_17() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredWidth_17)); }
	inline float get_preferredWidth_17() const { return ___preferredWidth_17; }
	inline float* get_address_of_preferredWidth_17() { return &___preferredWidth_17; }
	inline void set_preferredWidth_17(float value)
	{
		___preferredWidth_17 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_18() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredHeight_18)); }
	inline float get_preferredHeight_18() const { return ___preferredHeight_18; }
	inline float* get_address_of_preferredHeight_18() { return &___preferredHeight_18; }
	inline void set_preferredHeight_18(float value)
	{
		___preferredHeight_18 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_19() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineScale_19)); }
	inline float get_previousLineScale_19() const { return ___previousLineScale_19; }
	inline float* get_address_of_previousLineScale_19() { return &___previousLineScale_19; }
	inline void set_previousLineScale_19(float value)
	{
		___previousLineScale_19 = value;
	}

	inline static int32_t get_offset_of_wordCount_20() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___wordCount_20)); }
	inline int32_t get_wordCount_20() const { return ___wordCount_20; }
	inline int32_t* get_address_of_wordCount_20() { return &___wordCount_20; }
	inline void set_wordCount_20(int32_t value)
	{
		___wordCount_20 = value;
	}

	inline static int32_t get_offset_of_fontStyle_21() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontStyle_21)); }
	inline int32_t get_fontStyle_21() const { return ___fontStyle_21; }
	inline int32_t* get_address_of_fontStyle_21() { return &___fontStyle_21; }
	inline void set_fontStyle_21(int32_t value)
	{
		___fontStyle_21 = value;
	}

	inline static int32_t get_offset_of_fontScale_22() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScale_22)); }
	inline float get_fontScale_22() const { return ___fontScale_22; }
	inline float* get_address_of_fontScale_22() { return &___fontScale_22; }
	inline void set_fontScale_22(float value)
	{
		___fontScale_22 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_23() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScaleMultiplier_23)); }
	inline float get_fontScaleMultiplier_23() const { return ___fontScaleMultiplier_23; }
	inline float* get_address_of_fontScaleMultiplier_23() { return &___fontScaleMultiplier_23; }
	inline void set_fontScaleMultiplier_23(float value)
	{
		___fontScaleMultiplier_23 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_24() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontSize_24)); }
	inline float get_currentFontSize_24() const { return ___currentFontSize_24; }
	inline float* get_address_of_currentFontSize_24() { return &___currentFontSize_24; }
	inline void set_currentFontSize_24(float value)
	{
		___currentFontSize_24 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_25() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineOffset_25)); }
	inline float get_baselineOffset_25() const { return ___baselineOffset_25; }
	inline float* get_address_of_baselineOffset_25() { return &___baselineOffset_25; }
	inline void set_baselineOffset_25(float value)
	{
		___baselineOffset_25 = value;
	}

	inline static int32_t get_offset_of_lineOffset_26() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineOffset_26)); }
	inline float get_lineOffset_26() const { return ___lineOffset_26; }
	inline float* get_address_of_lineOffset_26() { return &___lineOffset_26; }
	inline void set_lineOffset_26(float value)
	{
		___lineOffset_26 = value;
	}

	inline static int32_t get_offset_of_textInfo_27() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___textInfo_27)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_textInfo_27() const { return ___textInfo_27; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_textInfo_27() { return &___textInfo_27; }
	inline void set_textInfo_27(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___textInfo_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_27), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_28() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineInfo_28)); }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  get_lineInfo_28() const { return ___lineInfo_28; }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * get_address_of_lineInfo_28() { return &___lineInfo_28; }
	inline void set_lineInfo_28(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		___lineInfo_28 = value;
	}

	inline static int32_t get_offset_of_vertexColor_29() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___vertexColor_29)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_vertexColor_29() const { return ___vertexColor_29; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_vertexColor_29() { return &___vertexColor_29; }
	inline void set_vertexColor_29(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___vertexColor_29 = value;
	}

	inline static int32_t get_offset_of_underlineColor_30() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColor_30)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_30() const { return ___underlineColor_30; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_30() { return &___underlineColor_30; }
	inline void set_underlineColor_30(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_30 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_31() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColor_31)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_31() const { return ___strikethroughColor_31; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_31() { return &___strikethroughColor_31; }
	inline void set_strikethroughColor_31(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_31 = value;
	}

	inline static int32_t get_offset_of_highlightColor_32() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColor_32)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_32() const { return ___highlightColor_32; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_32() { return &___highlightColor_32; }
	inline void set_highlightColor_32(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_32 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_33() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___basicStyleStack_33)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_basicStyleStack_33() const { return ___basicStyleStack_33; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_basicStyleStack_33() { return &___basicStyleStack_33; }
	inline void set_basicStyleStack_33(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___basicStyleStack_33 = value;
	}

	inline static int32_t get_offset_of_colorStack_34() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorStack_34)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_colorStack_34() const { return ___colorStack_34; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_colorStack_34() { return &___colorStack_34; }
	inline void set_colorStack_34(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___colorStack_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_34))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_35() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColorStack_35)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_underlineColorStack_35() const { return ___underlineColorStack_35; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_underlineColorStack_35() { return &___underlineColorStack_35; }
	inline void set_underlineColorStack_35(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___underlineColorStack_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_36() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColorStack_36)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_strikethroughColorStack_36() const { return ___strikethroughColorStack_36; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_strikethroughColorStack_36() { return &___strikethroughColorStack_36; }
	inline void set_strikethroughColorStack_36(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___strikethroughColorStack_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_37() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColorStack_37)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_highlightColorStack_37() const { return ___highlightColorStack_37; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_highlightColorStack_37() { return &___highlightColorStack_37; }
	inline void set_highlightColorStack_37(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___highlightColorStack_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_38() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorGradientStack_38)); }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  get_colorGradientStack_38() const { return ___colorGradientStack_38; }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D * get_address_of_colorGradientStack_38() { return &___colorGradientStack_38; }
	inline void set_colorGradientStack_38(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  value)
	{
		___colorGradientStack_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_39() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___sizeStack_39)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_sizeStack_39() const { return ___sizeStack_39; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_sizeStack_39() { return &___sizeStack_39; }
	inline void set_sizeStack_39(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___sizeStack_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_40() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___indentStack_40)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_indentStack_40() const { return ___indentStack_40; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_indentStack_40() { return &___indentStack_40; }
	inline void set_indentStack_40(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___indentStack_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_40))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontWeightStack_41)); }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  get_fontWeightStack_41() const { return ___fontWeightStack_41; }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B * get_address_of_fontWeightStack_41() { return &___fontWeightStack_41; }
	inline void set_fontWeightStack_41(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  value)
	{
		___fontWeightStack_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___styleStack_42)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_styleStack_42() const { return ___styleStack_42; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_styleStack_42() { return &___styleStack_42; }
	inline void set_styleStack_42(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___styleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_42))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineStack_43)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_baselineStack_43() const { return ___baselineStack_43; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_baselineStack_43() { return &___baselineStack_43; }
	inline void set_baselineStack_43(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___baselineStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___actionStack_44)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_actionStack_44() const { return ___actionStack_44; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_actionStack_44() { return &___actionStack_44; }
	inline void set_actionStack_44(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___actionStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_44))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___materialReferenceStack_45)); }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  get_materialReferenceStack_45() const { return ___materialReferenceStack_45; }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 * get_address_of_materialReferenceStack_45() { return &___materialReferenceStack_45; }
	inline void set_materialReferenceStack_45(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  value)
	{
		___materialReferenceStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineJustificationStack_46)); }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  get_lineJustificationStack_46() const { return ___lineJustificationStack_46; }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 * get_address_of_lineJustificationStack_46() { return &___lineJustificationStack_46; }
	inline void set_lineJustificationStack_46(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  value)
	{
		___lineJustificationStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_47() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___spriteAnimationID_47)); }
	inline int32_t get_spriteAnimationID_47() const { return ___spriteAnimationID_47; }
	inline int32_t* get_address_of_spriteAnimationID_47() { return &___spriteAnimationID_47; }
	inline void set_spriteAnimationID_47(int32_t value)
	{
		___spriteAnimationID_47 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_48() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontAsset_48)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_currentFontAsset_48() const { return ___currentFontAsset_48; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_currentFontAsset_48() { return &___currentFontAsset_48; }
	inline void set_currentFontAsset_48(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___currentFontAsset_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_48), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_49() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentSpriteAsset_49)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_currentSpriteAsset_49() const { return ___currentSpriteAsset_49; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_currentSpriteAsset_49() { return &___currentSpriteAsset_49; }
	inline void set_currentSpriteAsset_49(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___currentSpriteAsset_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_49), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_50() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterial_50)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_currentMaterial_50() const { return ___currentMaterial_50; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_currentMaterial_50() { return &___currentMaterial_50; }
	inline void set_currentMaterial_50(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___currentMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_50), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_51() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterialIndex_51)); }
	inline int32_t get_currentMaterialIndex_51() const { return ___currentMaterialIndex_51; }
	inline int32_t* get_address_of_currentMaterialIndex_51() { return &___currentMaterialIndex_51; }
	inline void set_currentMaterialIndex_51(int32_t value)
	{
		___currentMaterialIndex_51 = value;
	}

	inline static int32_t get_offset_of_meshExtents_52() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___meshExtents_52)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_meshExtents_52() const { return ___meshExtents_52; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_meshExtents_52() { return &___meshExtents_52; }
	inline void set_meshExtents_52(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___meshExtents_52 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_53() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___tagNoParsing_53)); }
	inline bool get_tagNoParsing_53() const { return ___tagNoParsing_53; }
	inline bool* get_address_of_tagNoParsing_53() { return &___tagNoParsing_53; }
	inline void set_tagNoParsing_53(bool value)
	{
		___tagNoParsing_53 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_54() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isNonBreakingSpace_54)); }
	inline bool get_isNonBreakingSpace_54() const { return ___isNonBreakingSpace_54; }
	inline bool* get_address_of_isNonBreakingSpace_54() { return &___isNonBreakingSpace_54; }
	inline void set_isNonBreakingSpace_54(bool value)
	{
		___isNonBreakingSpace_54 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___sizeStack_39;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___indentStack_40;
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___styleStack_42;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___baselineStack_43;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___actionStack_44;
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___sizeStack_39;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___indentStack_40;
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___styleStack_42;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___baselineStack_43;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___actionStack_44;
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// System.ComponentModel.Win32Exception
struct  Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668  : public ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// TMPro.TMP_DigitValidator
struct  TMP_DigitValidator_tD53B3EF123D04F923055895ED56555317D239AB5  : public TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD
{
public:

public:
};


// TMPro.TMP_PhoneNumberValidator
struct  TMP_PhoneNumberValidator_t7EB41CFDB7C6AA586BF5AF04151FC2228F565BD2  : public TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD
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


// DataServer
struct  DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32[] DataServer::listenPorts
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___listenPorts_4;
	// System.Boolean DataServer::verbose
	bool ___verbose_5;
	// System.Int32 DataServer::line_count
	int32_t ___line_count_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Net.Sockets.TcpListener> DataServer::listeners
	Dictionary_2_t932D8814F16E2D74BF342E05ABCFBE089516A850 * ___listeners_7;
	// System.Collections.Generic.List`1<System.Tuple`5<System.Net.Sockets.TcpClient,System.Net.Sockets.NetworkStream,System.Byte[],System.Collections.Concurrent.ConcurrentQueue`1<System.String>,System.Text.StringBuilder>> DataServer::clientStreams
	List_1_t2182EAF3B1DD0E7D54323CBE34060063A54E32C2 * ___clientStreams_8;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Tuple`3<System.String,System.Single,System.String>> DataServer::parsedMessages
	ConcurrentQueue_1_t2325366CD20A78AFAB6932FDFF4E217B74A1B336 * ___parsedMessages_9;
	// System.Threading.Thread DataServer::parseThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___parseThread_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<DataServer_DataSubscriber>> DataServer::subscribers
	Dictionary_2_t664D60A80BC695E8D14955B334D6D9110376E120 * ___subscribers_11;
	// System.Threading.Thread DataServer::subscriberThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___subscriberThread_12;

public:
	inline static int32_t get_offset_of_listenPorts_4() { return static_cast<int32_t>(offsetof(DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027, ___listenPorts_4)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_listenPorts_4() const { return ___listenPorts_4; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_listenPorts_4() { return &___listenPorts_4; }
	inline void set_listenPorts_4(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___listenPorts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listenPorts_4), (void*)value);
	}

	inline static int32_t get_offset_of_verbose_5() { return static_cast<int32_t>(offsetof(DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027, ___verbose_5)); }
	inline bool get_verbose_5() const { return ___verbose_5; }
	inline bool* get_address_of_verbose_5() { return &___verbose_5; }
	inline void set_verbose_5(bool value)
	{
		___verbose_5 = value;
	}

	inline static int32_t get_offset_of_line_count_6() { return static_cast<int32_t>(offsetof(DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027, ___line_count_6)); }
	inline int32_t get_line_count_6() const { return ___line_count_6; }
	inline int32_t* get_address_of_line_count_6() { return &___line_count_6; }
	inline void set_line_count_6(int32_t value)
	{
		___line_count_6 = value;
	}

	inline static int32_t get_offset_of_listeners_7() { return static_cast<int32_t>(offsetof(DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027, ___listeners_7)); }
	inline Dictionary_2_t932D8814F16E2D74BF342E05ABCFBE089516A850 * get_listeners_7() const { return ___listeners_7; }
	inline Dictionary_2_t932D8814F16E2D74BF342E05ABCFBE089516A850 ** get_address_of_listeners_7() { return &___listeners_7; }
	inline void set_listeners_7(Dictionary_2_t932D8814F16E2D74BF342E05ABCFBE089516A850 * value)
	{
		___listeners_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listeners_7), (void*)value);
	}

	inline static int32_t get_offset_of_clientStreams_8() { return static_cast<int32_t>(offsetof(DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027, ___clientStreams_8)); }
	inline List_1_t2182EAF3B1DD0E7D54323CBE34060063A54E32C2 * get_clientStreams_8() const { return ___clientStreams_8; }
	inline List_1_t2182EAF3B1DD0E7D54323CBE34060063A54E32C2 ** get_address_of_clientStreams_8() { return &___clientStreams_8; }
	inline void set_clientStreams_8(List_1_t2182EAF3B1DD0E7D54323CBE34060063A54E32C2 * value)
	{
		___clientStreams_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientStreams_8), (void*)value);
	}

	inline static int32_t get_offset_of_parsedMessages_9() { return static_cast<int32_t>(offsetof(DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027, ___parsedMessages_9)); }
	inline ConcurrentQueue_1_t2325366CD20A78AFAB6932FDFF4E217B74A1B336 * get_parsedMessages_9() const { return ___parsedMessages_9; }
	inline ConcurrentQueue_1_t2325366CD20A78AFAB6932FDFF4E217B74A1B336 ** get_address_of_parsedMessages_9() { return &___parsedMessages_9; }
	inline void set_parsedMessages_9(ConcurrentQueue_1_t2325366CD20A78AFAB6932FDFF4E217B74A1B336 * value)
	{
		___parsedMessages_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parsedMessages_9), (void*)value);
	}

	inline static int32_t get_offset_of_parseThread_10() { return static_cast<int32_t>(offsetof(DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027, ___parseThread_10)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_parseThread_10() const { return ___parseThread_10; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_parseThread_10() { return &___parseThread_10; }
	inline void set_parseThread_10(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___parseThread_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parseThread_10), (void*)value);
	}

	inline static int32_t get_offset_of_subscribers_11() { return static_cast<int32_t>(offsetof(DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027, ___subscribers_11)); }
	inline Dictionary_2_t664D60A80BC695E8D14955B334D6D9110376E120 * get_subscribers_11() const { return ___subscribers_11; }
	inline Dictionary_2_t664D60A80BC695E8D14955B334D6D9110376E120 ** get_address_of_subscribers_11() { return &___subscribers_11; }
	inline void set_subscribers_11(Dictionary_2_t664D60A80BC695E8D14955B334D6D9110376E120 * value)
	{
		___subscribers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscribers_11), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberThread_12() { return static_cast<int32_t>(offsetof(DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027, ___subscriberThread_12)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_subscriberThread_12() const { return ___subscriberThread_12; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_subscriberThread_12() { return &___subscriberThread_12; }
	inline void set_subscriberThread_12(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___subscriberThread_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriberThread_12), (void*)value);
	}
};

struct DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027_StaticFields
{
public:
	// System.Char[] DataServer::charSeparators
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___charSeparators_13;

public:
	inline static int32_t get_offset_of_charSeparators_13() { return static_cast<int32_t>(offsetof(DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027_StaticFields, ___charSeparators_13)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_charSeparators_13() const { return ___charSeparators_13; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_charSeparators_13() { return &___charSeparators_13; }
	inline void set_charSeparators_13(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___charSeparators_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charSeparators_13), (void*)value);
	}
};


// System.Net.Sockets.SocketException
struct  SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5  : public Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5, ___m_EndPoint_20)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
	}
};


// TMPro.TMP_TextEventHandler
struct  TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TMPro.TMP_TextEventHandler_CharacterSelectionEvent TMPro.TMP_TextEventHandler::m_OnCharacterSelection
	CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * ___m_OnCharacterSelection_4;
	// TMPro.TMP_TextEventHandler_SpriteSelectionEvent TMPro.TMP_TextEventHandler::m_OnSpriteSelection
	SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * ___m_OnSpriteSelection_5;
	// TMPro.TMP_TextEventHandler_WordSelectionEvent TMPro.TMP_TextEventHandler::m_OnWordSelection
	WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * ___m_OnWordSelection_6;
	// TMPro.TMP_TextEventHandler_LineSelectionEvent TMPro.TMP_TextEventHandler::m_OnLineSelection
	LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * ___m_OnLineSelection_7;
	// TMPro.TMP_TextEventHandler_LinkSelectionEvent TMPro.TMP_TextEventHandler::m_OnLinkSelection
	LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * ___m_OnLinkSelection_8;
	// TMPro.TMP_Text TMPro.TMP_TextEventHandler::m_TextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_TextComponent_9;
	// UnityEngine.Camera TMPro.TMP_TextEventHandler::m_Camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_Camera_10;
	// UnityEngine.Canvas TMPro.TMP_TextEventHandler::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_11;
	// System.Int32 TMPro.TMP_TextEventHandler::m_selectedLink
	int32_t ___m_selectedLink_12;
	// System.Int32 TMPro.TMP_TextEventHandler::m_lastCharIndex
	int32_t ___m_lastCharIndex_13;
	// System.Int32 TMPro.TMP_TextEventHandler::m_lastWordIndex
	int32_t ___m_lastWordIndex_14;
	// System.Int32 TMPro.TMP_TextEventHandler::m_lastLineIndex
	int32_t ___m_lastLineIndex_15;

public:
	inline static int32_t get_offset_of_m_OnCharacterSelection_4() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_OnCharacterSelection_4)); }
	inline CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * get_m_OnCharacterSelection_4() const { return ___m_OnCharacterSelection_4; }
	inline CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 ** get_address_of_m_OnCharacterSelection_4() { return &___m_OnCharacterSelection_4; }
	inline void set_m_OnCharacterSelection_4(CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * value)
	{
		___m_OnCharacterSelection_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCharacterSelection_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSpriteSelection_5() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_OnSpriteSelection_5)); }
	inline SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * get_m_OnSpriteSelection_5() const { return ___m_OnSpriteSelection_5; }
	inline SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 ** get_address_of_m_OnSpriteSelection_5() { return &___m_OnSpriteSelection_5; }
	inline void set_m_OnSpriteSelection_5(SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * value)
	{
		___m_OnSpriteSelection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSpriteSelection_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnWordSelection_6() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_OnWordSelection_6)); }
	inline WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * get_m_OnWordSelection_6() const { return ___m_OnWordSelection_6; }
	inline WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 ** get_address_of_m_OnWordSelection_6() { return &___m_OnWordSelection_6; }
	inline void set_m_OnWordSelection_6(WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * value)
	{
		___m_OnWordSelection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnWordSelection_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnLineSelection_7() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_OnLineSelection_7)); }
	inline LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * get_m_OnLineSelection_7() const { return ___m_OnLineSelection_7; }
	inline LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F ** get_address_of_m_OnLineSelection_7() { return &___m_OnLineSelection_7; }
	inline void set_m_OnLineSelection_7(LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * value)
	{
		___m_OnLineSelection_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnLineSelection_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnLinkSelection_8() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_OnLinkSelection_8)); }
	inline LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * get_m_OnLinkSelection_8() const { return ___m_OnLinkSelection_8; }
	inline LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 ** get_address_of_m_OnLinkSelection_8() { return &___m_OnLinkSelection_8; }
	inline void set_m_OnLinkSelection_8(LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * value)
	{
		___m_OnLinkSelection_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnLinkSelection_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_9() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_TextComponent_9)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_TextComponent_9() const { return ___m_TextComponent_9; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_TextComponent_9() { return &___m_TextComponent_9; }
	inline void set_m_TextComponent_9(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_TextComponent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_10() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_Camera_10)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_Camera_10() const { return ___m_Camera_10; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_Camera_10() { return &___m_Camera_10; }
	inline void set_m_Camera_10(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_Camera_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_Canvas_11)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_selectedLink_12() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_selectedLink_12)); }
	inline int32_t get_m_selectedLink_12() const { return ___m_selectedLink_12; }
	inline int32_t* get_address_of_m_selectedLink_12() { return &___m_selectedLink_12; }
	inline void set_m_selectedLink_12(int32_t value)
	{
		___m_selectedLink_12 = value;
	}

	inline static int32_t get_offset_of_m_lastCharIndex_13() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_lastCharIndex_13)); }
	inline int32_t get_m_lastCharIndex_13() const { return ___m_lastCharIndex_13; }
	inline int32_t* get_address_of_m_lastCharIndex_13() { return &___m_lastCharIndex_13; }
	inline void set_m_lastCharIndex_13(int32_t value)
	{
		___m_lastCharIndex_13 = value;
	}

	inline static int32_t get_offset_of_m_lastWordIndex_14() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_lastWordIndex_14)); }
	inline int32_t get_m_lastWordIndex_14() const { return ___m_lastWordIndex_14; }
	inline int32_t* get_address_of_m_lastWordIndex_14() { return &___m_lastWordIndex_14; }
	inline void set_m_lastWordIndex_14(int32_t value)
	{
		___m_lastWordIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_lastLineIndex_15() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_lastLineIndex_15)); }
	inline int32_t get_m_lastLineIndex_15() const { return ___m_lastLineIndex_15; }
	inline int32_t* get_address_of_m_lastLineIndex_15() { return &___m_lastLineIndex_15; }
	inline void set_m_lastLineIndex_15(int32_t value)
	{
		___m_lastLineIndex_15 = value;
	}
};


// TestServer
struct  TestServer_t2BCFFBF706DF6863D40446375403ED1EACA79879  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Net.Sockets.TcpListener TestServer::tcpListener
	TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * ___tcpListener_4;
	// System.Threading.Thread TestServer::tcpListenerThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___tcpListenerThread_5;
	// System.Net.Sockets.TcpClient TestServer::connectedTcpClient
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___connectedTcpClient_6;

public:
	inline static int32_t get_offset_of_tcpListener_4() { return static_cast<int32_t>(offsetof(TestServer_t2BCFFBF706DF6863D40446375403ED1EACA79879, ___tcpListener_4)); }
	inline TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * get_tcpListener_4() const { return ___tcpListener_4; }
	inline TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE ** get_address_of_tcpListener_4() { return &___tcpListener_4; }
	inline void set_tcpListener_4(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * value)
	{
		___tcpListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcpListener_4), (void*)value);
	}

	inline static int32_t get_offset_of_tcpListenerThread_5() { return static_cast<int32_t>(offsetof(TestServer_t2BCFFBF706DF6863D40446375403ED1EACA79879, ___tcpListenerThread_5)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_tcpListenerThread_5() const { return ___tcpListenerThread_5; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_tcpListenerThread_5() { return &___tcpListenerThread_5; }
	inline void set_tcpListenerThread_5(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___tcpListenerThread_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcpListenerThread_5), (void*)value);
	}

	inline static int32_t get_offset_of_connectedTcpClient_6() { return static_cast<int32_t>(offsetof(TestServer_t2BCFFBF706DF6863D40446375403ED1EACA79879, ___connectedTcpClient_6)); }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * get_connectedTcpClient_6() const { return ___connectedTcpClient_6; }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB ** get_address_of_connectedTcpClient_6() { return &___connectedTcpClient_6; }
	inline void set_connectedTcpClient_6(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * value)
	{
		___connectedTcpClient_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectedTcpClient_6), (void*)value);
	}
};


// TestSubscriber
struct  TestSubscriber_t775CBC13A2FB95BEAE091CCB12453BA001D9F9A4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// DataServer TestSubscriber::server
	DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027 * ___server_4;
	// UnityEngine.GameObject TestSubscriber::ball
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ball_5;
	// UnityEngine.Vector3 TestSubscriber::updatePos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___updatePos_6;
	// System.Boolean TestSubscriber::update
	bool ___update_7;

public:
	inline static int32_t get_offset_of_server_4() { return static_cast<int32_t>(offsetof(TestSubscriber_t775CBC13A2FB95BEAE091CCB12453BA001D9F9A4, ___server_4)); }
	inline DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027 * get_server_4() const { return ___server_4; }
	inline DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027 ** get_address_of_server_4() { return &___server_4; }
	inline void set_server_4(DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027 * value)
	{
		___server_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___server_4), (void*)value);
	}

	inline static int32_t get_offset_of_ball_5() { return static_cast<int32_t>(offsetof(TestSubscriber_t775CBC13A2FB95BEAE091CCB12453BA001D9F9A4, ___ball_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ball_5() const { return ___ball_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ball_5() { return &___ball_5; }
	inline void set_ball_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ball_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ball_5), (void*)value);
	}

	inline static int32_t get_offset_of_updatePos_6() { return static_cast<int32_t>(offsetof(TestSubscriber_t775CBC13A2FB95BEAE091CCB12453BA001D9F9A4, ___updatePos_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_updatePos_6() const { return ___updatePos_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_updatePos_6() { return &___updatePos_6; }
	inline void set_updatePos_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___updatePos_6 = value;
	}

	inline static int32_t get_offset_of_update_7() { return static_cast<int32_t>(offsetof(TestSubscriber_t775CBC13A2FB95BEAE091CCB12453BA001D9F9A4, ___update_7)); }
	inline bool get_update_7() const { return ___update_7; }
	inline bool* get_address_of_update_7() { return &___update_7; }
	inline void set_update_7(bool value)
	{
		___update_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_34;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_35;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_fontAsset_36;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_currentFontAsset_37;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_38;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_sharedMaterial_39;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_currentMaterial_40;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_materialReferences_41;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * ___m_materialReferenceIndexLookup_42;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___m_materialReferenceStack_43;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_44;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontSharedMaterials_45;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_fontMaterial_46;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontMaterials_47;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_48;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_fontColor32_49;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_fontColor_50;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_underlineColor_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_strikethroughColor_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_highlightColor_54;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_highlightPadding
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_highlightPadding_55;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_56;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_57;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  ___m_fontColorGradient_58;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_fontColorGradientPreset_59;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_spriteAsset_60;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_61;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_62;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_spriteColor_63;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_faceColor_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_outlineColor_66;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_67;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_68;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_69;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_70;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___m_sizeStack_71;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_72;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_73;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___m_FontWeightStack_74;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_75;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_76;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_77;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_78;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_79;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_80;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_81;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___m_fontStyleStack_82;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_83;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_84;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_85;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___m_lineJustificationStack_86;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_textContainerLocalCorners_87;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_88;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_89;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_90;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_91;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_92;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_93;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_94;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_95;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_96;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_97;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_98;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_99;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_100;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_101;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_102;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_103;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_104;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_105;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_linkedTextComponent_106;
	// System.Boolean TMPro.TMP_Text::m_isLinkedTextComponent
	bool ___m_isLinkedTextComponent_107;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_108;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_109;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_110;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_111;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_112;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_113;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_114;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_115;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_116;
	// System.Boolean TMPro.TMP_Text::m_ignoreRectMaskCulling
	bool ___m_ignoreRectMaskCulling_117;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_118;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_119;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_120;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_121;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_122;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_123;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_124;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_125;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_126;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_127;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_128;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_129;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_130;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_131;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_margin_132;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_133;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_134;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_135;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_136;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_137;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___m_textInfo_138;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_139;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_140;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_transform_141;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_rectTransform_142;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_143;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_144;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_mesh_145;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_146;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * ___m_spriteAnimator_147;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_148;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_149;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_150;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_151;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_152;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_153;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * ___m_LayoutElement_154;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_155;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_156;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_157;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_158;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_159;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_160;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_161;
	// System.Int32 TMPro.TMP_Text::m_recursiveCount
	int32_t ___m_recursiveCount_162;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_163;
	// System.Boolean TMPro.TMP_Text::m_isCalculateSizeRequired
	bool ___m_isCalculateSizeRequired_164;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_165;
	// System.Boolean TMPro.TMP_Text::m_verticesAlreadyDirty
	bool ___m_verticesAlreadyDirty_166;
	// System.Boolean TMPro.TMP_Text::m_layoutAlreadyDirty
	bool ___m_layoutAlreadyDirty_167;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_168;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_169;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_170;
	// TMPro.TMP_Text_TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_171;
	// System.String TMPro.TMP_Text::old_text
	String_t* ___old_text_172;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_173;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_174;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_htmlTag_175;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* ___m_xmlAttribute_176;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_attributeParameterValues_177;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_178;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_179;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___m_indentStack_180;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_181;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_182;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_FXMatrix_183;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_184;
	// TMPro.TMP_Text_UnicodeChar[] TMPro.TMP_Text::m_TextParsingBuffer
	UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* ___m_TextParsingBuffer_185;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___m_internalCharacterInfo_186;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_input_CharArray_187;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_188;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedWordWrapState_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLineState_191;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_192;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_193;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_194;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_195;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_196;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_197;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_198;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_199;
	// System.Single TMPro.TMP_Text::m_maxAscender
	float ___m_maxAscender_200;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_201;
	// System.Single TMPro.TMP_Text::m_maxDescender
	float ___m_maxDescender_202;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_203;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_204;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_205;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_206;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___m_meshExtents_207;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_htmlColor_208;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_colorStack_209;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_underlineColorStack_210;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_strikethroughColorStack_211;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_highlightColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_highlightColorStack_212;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_colorGradientPreset_213;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___m_colorGradientStack_214;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_215;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_216;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_styleStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___m_styleStack_217;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___m_actionStack_218;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_219;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_220;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___m_baselineOffsetStack_221;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_222;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_223;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___m_cached_TextElement_224;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Underline_Character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___m_cached_Underline_Character_225;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Ellipsis_Character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___m_cached_Ellipsis_Character_226;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_defaultSpriteAsset_227;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_currentSpriteAsset_228;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_229;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_230;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_231;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_232;
	// System.Single[] TMPro.TMP_Text::k_Power
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___k_Power_233;

public:
	inline static int32_t get_offset_of_m_text_34() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_text_34)); }
	inline String_t* get_m_text_34() const { return ___m_text_34; }
	inline String_t** get_address_of_m_text_34() { return &___m_text_34; }
	inline void set_m_text_34(String_t* value)
	{
		___m_text_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_35() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRightToLeft_35)); }
	inline bool get_m_isRightToLeft_35() const { return ___m_isRightToLeft_35; }
	inline bool* get_address_of_m_isRightToLeft_35() { return &___m_isRightToLeft_35; }
	inline void set_m_isRightToLeft_35(bool value)
	{
		___m_isRightToLeft_35 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_36() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontAsset_36)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_fontAsset_36() const { return ___m_fontAsset_36; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_fontAsset_36() { return &___m_fontAsset_36; }
	inline void set_m_fontAsset_36(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_fontAsset_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_37() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontAsset_37)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_currentFontAsset_37() const { return ___m_currentFontAsset_37; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_currentFontAsset_37() { return &___m_currentFontAsset_37; }
	inline void set_m_currentFontAsset_37(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_currentFontAsset_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_38() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isSDFShader_38)); }
	inline bool get_m_isSDFShader_38() const { return ___m_isSDFShader_38; }
	inline bool* get_address_of_m_isSDFShader_38() { return &___m_isSDFShader_38; }
	inline void set_m_isSDFShader_38(bool value)
	{
		___m_isSDFShader_38 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_39() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sharedMaterial_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_sharedMaterial_39() const { return ___m_sharedMaterial_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_sharedMaterial_39() { return &___m_sharedMaterial_39; }
	inline void set_m_sharedMaterial_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_sharedMaterial_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_40() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterial_40)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_currentMaterial_40() const { return ___m_currentMaterial_40; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_currentMaterial_40() { return &___m_currentMaterial_40; }
	inline void set_m_currentMaterial_40(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_currentMaterial_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_41() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferences_41)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_materialReferences_41() const { return ___m_materialReferences_41; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_materialReferences_41() { return &___m_materialReferences_41; }
	inline void set_m_materialReferences_41(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_materialReferences_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_42() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceIndexLookup_42)); }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * get_m_materialReferenceIndexLookup_42() const { return ___m_materialReferenceIndexLookup_42; }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F ** get_address_of_m_materialReferenceIndexLookup_42() { return &___m_materialReferenceIndexLookup_42; }
	inline void set_m_materialReferenceIndexLookup_42(Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * value)
	{
		___m_materialReferenceIndexLookup_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_43() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceStack_43)); }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  get_m_materialReferenceStack_43() const { return ___m_materialReferenceStack_43; }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 * get_address_of_m_materialReferenceStack_43() { return &___m_materialReferenceStack_43; }
	inline void set_m_materialReferenceStack_43(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  value)
	{
		___m_materialReferenceStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_43))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_44() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterialIndex_44)); }
	inline int32_t get_m_currentMaterialIndex_44() const { return ___m_currentMaterialIndex_44; }
	inline int32_t* get_address_of_m_currentMaterialIndex_44() { return &___m_currentMaterialIndex_44; }
	inline void set_m_currentMaterialIndex_44(int32_t value)
	{
		___m_currentMaterialIndex_44 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_45() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSharedMaterials_45)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontSharedMaterials_45() const { return ___m_fontSharedMaterials_45; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontSharedMaterials_45() { return &___m_fontSharedMaterials_45; }
	inline void set_m_fontSharedMaterials_45(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontSharedMaterials_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_46() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterial_46)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_fontMaterial_46() const { return ___m_fontMaterial_46; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_fontMaterial_46() { return &___m_fontMaterial_46; }
	inline void set_m_fontMaterial_46(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_fontMaterial_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_47() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterials_47)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontMaterials_47() const { return ___m_fontMaterials_47; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontMaterials_47() { return &___m_fontMaterials_47; }
	inline void set_m_fontMaterials_47(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontMaterials_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_48() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaterialDirty_48)); }
	inline bool get_m_isMaterialDirty_48() const { return ___m_isMaterialDirty_48; }
	inline bool* get_address_of_m_isMaterialDirty_48() { return &___m_isMaterialDirty_48; }
	inline void set_m_isMaterialDirty_48(bool value)
	{
		___m_isMaterialDirty_48 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_49() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor32_49)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_fontColor32_49() const { return ___m_fontColor32_49; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_fontColor32_49() { return &___m_fontColor32_49; }
	inline void set_m_fontColor32_49(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_fontColor32_49 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_50() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor_50)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_fontColor_50() const { return ___m_fontColor_50; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_fontColor_50() { return &___m_fontColor_50; }
	inline void set_m_fontColor_50(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_fontColor_50 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_52() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColor_52)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_underlineColor_52() const { return ___m_underlineColor_52; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_underlineColor_52() { return &___m_underlineColor_52; }
	inline void set_m_underlineColor_52(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_underlineColor_52 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_53() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColor_53)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_strikethroughColor_53() const { return ___m_strikethroughColor_53; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_strikethroughColor_53() { return &___m_strikethroughColor_53; }
	inline void set_m_strikethroughColor_53(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_strikethroughColor_53 = value;
	}

	inline static int32_t get_offset_of_m_highlightColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightColor_54)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_highlightColor_54() const { return ___m_highlightColor_54; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_highlightColor_54() { return &___m_highlightColor_54; }
	inline void set_m_highlightColor_54(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_highlightColor_54 = value;
	}

	inline static int32_t get_offset_of_m_highlightPadding_55() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightPadding_55)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_highlightPadding_55() const { return ___m_highlightPadding_55; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_highlightPadding_55() { return &___m_highlightPadding_55; }
	inline void set_m_highlightPadding_55(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_highlightPadding_55 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_56() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableVertexGradient_56)); }
	inline bool get_m_enableVertexGradient_56() const { return ___m_enableVertexGradient_56; }
	inline bool* get_address_of_m_enableVertexGradient_56() { return &___m_enableVertexGradient_56; }
	inline void set_m_enableVertexGradient_56(bool value)
	{
		___m_enableVertexGradient_56 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_57() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorMode_57)); }
	inline int32_t get_m_colorMode_57() const { return ___m_colorMode_57; }
	inline int32_t* get_address_of_m_colorMode_57() { return &___m_colorMode_57; }
	inline void set_m_colorMode_57(int32_t value)
	{
		___m_colorMode_57 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradient_58)); }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  get_m_fontColorGradient_58() const { return ___m_fontColorGradient_58; }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A * get_address_of_m_fontColorGradient_58() { return &___m_fontColorGradient_58; }
	inline void set_m_fontColorGradient_58(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  value)
	{
		___m_fontColorGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_59() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradientPreset_59)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_fontColorGradientPreset_59() const { return ___m_fontColorGradientPreset_59; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_fontColorGradientPreset_59() { return &___m_fontColorGradientPreset_59; }
	inline void set_m_fontColorGradientPreset_59(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_fontColorGradientPreset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAsset_60)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_spriteAsset_60() const { return ___m_spriteAsset_60; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_spriteAsset_60() { return &___m_spriteAsset_60; }
	inline void set_m_spriteAsset_60(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_spriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_61() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintAllSprites_61)); }
	inline bool get_m_tintAllSprites_61() const { return ___m_tintAllSprites_61; }
	inline bool* get_address_of_m_tintAllSprites_61() { return &___m_tintAllSprites_61; }
	inline void set_m_tintAllSprites_61(bool value)
	{
		___m_tintAllSprites_61 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_62() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintSprite_62)); }
	inline bool get_m_tintSprite_62() const { return ___m_tintSprite_62; }
	inline bool* get_address_of_m_tintSprite_62() { return &___m_tintSprite_62; }
	inline void set_m_tintSprite_62(bool value)
	{
		___m_tintSprite_62 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_63() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteColor_63)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_spriteColor_63() const { return ___m_spriteColor_63; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_spriteColor_63() { return &___m_spriteColor_63; }
	inline void set_m_spriteColor_63(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_spriteColor_63 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_64() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overrideHtmlColors_64)); }
	inline bool get_m_overrideHtmlColors_64() const { return ___m_overrideHtmlColors_64; }
	inline bool* get_address_of_m_overrideHtmlColors_64() { return &___m_overrideHtmlColors_64; }
	inline void set_m_overrideHtmlColors_64(bool value)
	{
		___m_overrideHtmlColors_64 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_65() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_faceColor_65)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_faceColor_65() const { return ___m_faceColor_65; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_faceColor_65() { return &___m_faceColor_65; }
	inline void set_m_faceColor_65(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_faceColor_65 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_66() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineColor_66)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_outlineColor_66() const { return ___m_outlineColor_66; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_outlineColor_66() { return &___m_outlineColor_66; }
	inline void set_m_outlineColor_66(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_outlineColor_66 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_67() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineWidth_67)); }
	inline float get_m_outlineWidth_67() const { return ___m_outlineWidth_67; }
	inline float* get_address_of_m_outlineWidth_67() { return &___m_outlineWidth_67; }
	inline void set_m_outlineWidth_67(float value)
	{
		___m_outlineWidth_67 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_68() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSize_68)); }
	inline float get_m_fontSize_68() const { return ___m_fontSize_68; }
	inline float* get_address_of_m_fontSize_68() { return &___m_fontSize_68; }
	inline void set_m_fontSize_68(float value)
	{
		___m_fontSize_68 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_69() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontSize_69)); }
	inline float get_m_currentFontSize_69() const { return ___m_currentFontSize_69; }
	inline float* get_address_of_m_currentFontSize_69() { return &___m_currentFontSize_69; }
	inline void set_m_currentFontSize_69(float value)
	{
		___m_currentFontSize_69 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_70() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeBase_70)); }
	inline float get_m_fontSizeBase_70() const { return ___m_fontSizeBase_70; }
	inline float* get_address_of_m_fontSizeBase_70() { return &___m_fontSizeBase_70; }
	inline void set_m_fontSizeBase_70(float value)
	{
		___m_fontSizeBase_70 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_71() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sizeStack_71)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_m_sizeStack_71() const { return ___m_sizeStack_71; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_m_sizeStack_71() { return &___m_sizeStack_71; }
	inline void set_m_sizeStack_71(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___m_sizeStack_71 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_71))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_72() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontWeight_72)); }
	inline int32_t get_m_fontWeight_72() const { return ___m_fontWeight_72; }
	inline int32_t* get_address_of_m_fontWeight_72() { return &___m_fontWeight_72; }
	inline void set_m_fontWeight_72(int32_t value)
	{
		___m_fontWeight_72 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_73() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightInternal_73)); }
	inline int32_t get_m_FontWeightInternal_73() const { return ___m_FontWeightInternal_73; }
	inline int32_t* get_address_of_m_FontWeightInternal_73() { return &___m_FontWeightInternal_73; }
	inline void set_m_FontWeightInternal_73(int32_t value)
	{
		___m_FontWeightInternal_73 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_74() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightStack_74)); }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  get_m_FontWeightStack_74() const { return ___m_FontWeightStack_74; }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B * get_address_of_m_FontWeightStack_74() { return &___m_FontWeightStack_74; }
	inline void set_m_FontWeightStack_74(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  value)
	{
		___m_FontWeightStack_74 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_74))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_75() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableAutoSizing_75)); }
	inline bool get_m_enableAutoSizing_75() const { return ___m_enableAutoSizing_75; }
	inline bool* get_address_of_m_enableAutoSizing_75() { return &___m_enableAutoSizing_75; }
	inline void set_m_enableAutoSizing_75(bool value)
	{
		___m_enableAutoSizing_75 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_76() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxFontSize_76)); }
	inline float get_m_maxFontSize_76() const { return ___m_maxFontSize_76; }
	inline float* get_address_of_m_maxFontSize_76() { return &___m_maxFontSize_76; }
	inline void set_m_maxFontSize_76(float value)
	{
		___m_maxFontSize_76 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_77() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minFontSize_77)); }
	inline float get_m_minFontSize_77() const { return ___m_minFontSize_77; }
	inline float* get_address_of_m_minFontSize_77() { return &___m_minFontSize_77; }
	inline void set_m_minFontSize_77(float value)
	{
		___m_minFontSize_77 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_78() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMin_78)); }
	inline float get_m_fontSizeMin_78() const { return ___m_fontSizeMin_78; }
	inline float* get_address_of_m_fontSizeMin_78() { return &___m_fontSizeMin_78; }
	inline void set_m_fontSizeMin_78(float value)
	{
		___m_fontSizeMin_78 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_79() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMax_79)); }
	inline float get_m_fontSizeMax_79() const { return ___m_fontSizeMax_79; }
	inline float* get_address_of_m_fontSizeMax_79() { return &___m_fontSizeMax_79; }
	inline void set_m_fontSizeMax_79(float value)
	{
		___m_fontSizeMax_79 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_80() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyle_80)); }
	inline int32_t get_m_fontStyle_80() const { return ___m_fontStyle_80; }
	inline int32_t* get_address_of_m_fontStyle_80() { return &___m_fontStyle_80; }
	inline void set_m_fontStyle_80(int32_t value)
	{
		___m_fontStyle_80 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_81() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontStyleInternal_81)); }
	inline int32_t get_m_FontStyleInternal_81() const { return ___m_FontStyleInternal_81; }
	inline int32_t* get_address_of_m_FontStyleInternal_81() { return &___m_FontStyleInternal_81; }
	inline void set_m_FontStyleInternal_81(int32_t value)
	{
		___m_FontStyleInternal_81 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_82() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyleStack_82)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_m_fontStyleStack_82() const { return ___m_fontStyleStack_82; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_m_fontStyleStack_82() { return &___m_fontStyleStack_82; }
	inline void set_m_fontStyleStack_82(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___m_fontStyleStack_82 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_83() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingBold_83)); }
	inline bool get_m_isUsingBold_83() const { return ___m_isUsingBold_83; }
	inline bool* get_address_of_m_isUsingBold_83() { return &___m_isUsingBold_83; }
	inline void set_m_isUsingBold_83(bool value)
	{
		___m_isUsingBold_83 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_84() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textAlignment_84)); }
	inline int32_t get_m_textAlignment_84() const { return ___m_textAlignment_84; }
	inline int32_t* get_address_of_m_textAlignment_84() { return &___m_textAlignment_84; }
	inline void set_m_textAlignment_84(int32_t value)
	{
		___m_textAlignment_84 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_85() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustification_85)); }
	inline int32_t get_m_lineJustification_85() const { return ___m_lineJustification_85; }
	inline int32_t* get_address_of_m_lineJustification_85() { return &___m_lineJustification_85; }
	inline void set_m_lineJustification_85(int32_t value)
	{
		___m_lineJustification_85 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_86() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustificationStack_86)); }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  get_m_lineJustificationStack_86() const { return ___m_lineJustificationStack_86; }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 * get_address_of_m_lineJustificationStack_86() { return &___m_lineJustificationStack_86; }
	inline void set_m_lineJustificationStack_86(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  value)
	{
		___m_lineJustificationStack_86 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_86))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_87() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textContainerLocalCorners_87)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_textContainerLocalCorners_87() const { return ___m_textContainerLocalCorners_87; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_textContainerLocalCorners_87() { return &___m_textContainerLocalCorners_87; }
	inline void set_m_textContainerLocalCorners_87(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_textContainerLocalCorners_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_87), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_88() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterSpacing_88)); }
	inline float get_m_characterSpacing_88() const { return ___m_characterSpacing_88; }
	inline float* get_address_of_m_characterSpacing_88() { return &___m_characterSpacing_88; }
	inline void set_m_characterSpacing_88(float value)
	{
		___m_characterSpacing_88 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_89() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cSpacing_89)); }
	inline float get_m_cSpacing_89() const { return ___m_cSpacing_89; }
	inline float* get_address_of_m_cSpacing_89() { return &___m_cSpacing_89; }
	inline void set_m_cSpacing_89(float value)
	{
		___m_cSpacing_89 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_90() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_monoSpacing_90)); }
	inline float get_m_monoSpacing_90() const { return ___m_monoSpacing_90; }
	inline float* get_address_of_m_monoSpacing_90() { return &___m_monoSpacing_90; }
	inline void set_m_monoSpacing_90(float value)
	{
		___m_monoSpacing_90 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_91() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordSpacing_91)); }
	inline float get_m_wordSpacing_91() const { return ___m_wordSpacing_91; }
	inline float* get_address_of_m_wordSpacing_91() { return &___m_wordSpacing_91; }
	inline void set_m_wordSpacing_91(float value)
	{
		___m_wordSpacing_91 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_92() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacing_92)); }
	inline float get_m_lineSpacing_92() const { return ___m_lineSpacing_92; }
	inline float* get_address_of_m_lineSpacing_92() { return &___m_lineSpacing_92; }
	inline void set_m_lineSpacing_92(float value)
	{
		___m_lineSpacing_92 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_93() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingDelta_93)); }
	inline float get_m_lineSpacingDelta_93() const { return ___m_lineSpacingDelta_93; }
	inline float* get_address_of_m_lineSpacingDelta_93() { return &___m_lineSpacingDelta_93; }
	inline void set_m_lineSpacingDelta_93(float value)
	{
		___m_lineSpacingDelta_93 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_94() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineHeight_94)); }
	inline float get_m_lineHeight_94() const { return ___m_lineHeight_94; }
	inline float* get_address_of_m_lineHeight_94() { return &___m_lineHeight_94; }
	inline void set_m_lineHeight_94(float value)
	{
		___m_lineHeight_94 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_95() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingMax_95)); }
	inline float get_m_lineSpacingMax_95() const { return ___m_lineSpacingMax_95; }
	inline float* get_address_of_m_lineSpacingMax_95() { return &___m_lineSpacingMax_95; }
	inline void set_m_lineSpacingMax_95(float value)
	{
		___m_lineSpacingMax_95 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_96() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_paragraphSpacing_96)); }
	inline float get_m_paragraphSpacing_96() const { return ___m_paragraphSpacing_96; }
	inline float* get_address_of_m_paragraphSpacing_96() { return &___m_paragraphSpacing_96; }
	inline void set_m_paragraphSpacing_96(float value)
	{
		___m_paragraphSpacing_96 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_97() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthMaxAdj_97)); }
	inline float get_m_charWidthMaxAdj_97() const { return ___m_charWidthMaxAdj_97; }
	inline float* get_address_of_m_charWidthMaxAdj_97() { return &___m_charWidthMaxAdj_97; }
	inline void set_m_charWidthMaxAdj_97(float value)
	{
		___m_charWidthMaxAdj_97 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_98() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthAdjDelta_98)); }
	inline float get_m_charWidthAdjDelta_98() const { return ___m_charWidthAdjDelta_98; }
	inline float* get_address_of_m_charWidthAdjDelta_98() { return &___m_charWidthAdjDelta_98; }
	inline void set_m_charWidthAdjDelta_98(float value)
	{
		___m_charWidthAdjDelta_98 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_99() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableWordWrapping_99)); }
	inline bool get_m_enableWordWrapping_99() const { return ___m_enableWordWrapping_99; }
	inline bool* get_address_of_m_enableWordWrapping_99() { return &___m_enableWordWrapping_99; }
	inline void set_m_enableWordWrapping_99(bool value)
	{
		___m_enableWordWrapping_99 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_100() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCharacterWrappingEnabled_100)); }
	inline bool get_m_isCharacterWrappingEnabled_100() const { return ___m_isCharacterWrappingEnabled_100; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_100() { return &___m_isCharacterWrappingEnabled_100; }
	inline void set_m_isCharacterWrappingEnabled_100(bool value)
	{
		___m_isCharacterWrappingEnabled_100 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_101() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNonBreakingSpace_101)); }
	inline bool get_m_isNonBreakingSpace_101() const { return ___m_isNonBreakingSpace_101; }
	inline bool* get_address_of_m_isNonBreakingSpace_101() { return &___m_isNonBreakingSpace_101; }
	inline void set_m_isNonBreakingSpace_101(bool value)
	{
		___m_isNonBreakingSpace_101 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_102() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isIgnoringAlignment_102)); }
	inline bool get_m_isIgnoringAlignment_102() const { return ___m_isIgnoringAlignment_102; }
	inline bool* get_address_of_m_isIgnoringAlignment_102() { return &___m_isIgnoringAlignment_102; }
	inline void set_m_isIgnoringAlignment_102(bool value)
	{
		___m_isIgnoringAlignment_102 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_103() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordWrappingRatios_103)); }
	inline float get_m_wordWrappingRatios_103() const { return ___m_wordWrappingRatios_103; }
	inline float* get_address_of_m_wordWrappingRatios_103() { return &___m_wordWrappingRatios_103; }
	inline void set_m_wordWrappingRatios_103(float value)
	{
		___m_wordWrappingRatios_103 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_104() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overflowMode_104)); }
	inline int32_t get_m_overflowMode_104() const { return ___m_overflowMode_104; }
	inline int32_t* get_address_of_m_overflowMode_104() { return &___m_overflowMode_104; }
	inline void set_m_overflowMode_104(int32_t value)
	{
		___m_overflowMode_104 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_105() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstOverflowCharacterIndex_105)); }
	inline int32_t get_m_firstOverflowCharacterIndex_105() const { return ___m_firstOverflowCharacterIndex_105; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_105() { return &___m_firstOverflowCharacterIndex_105; }
	inline void set_m_firstOverflowCharacterIndex_105(int32_t value)
	{
		___m_firstOverflowCharacterIndex_105 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_106() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_linkedTextComponent_106)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_linkedTextComponent_106() const { return ___m_linkedTextComponent_106; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_linkedTextComponent_106() { return &___m_linkedTextComponent_106; }
	inline void set_m_linkedTextComponent_106(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_linkedTextComponent_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_106), (void*)value);
	}

	inline static int32_t get_offset_of_m_isLinkedTextComponent_107() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLinkedTextComponent_107)); }
	inline bool get_m_isLinkedTextComponent_107() const { return ___m_isLinkedTextComponent_107; }
	inline bool* get_address_of_m_isLinkedTextComponent_107() { return &___m_isLinkedTextComponent_107; }
	inline void set_m_isLinkedTextComponent_107(bool value)
	{
		___m_isLinkedTextComponent_107 = value;
	}

	inline static int32_t get_offset_of_m_isTextTruncated_108() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isTextTruncated_108)); }
	inline bool get_m_isTextTruncated_108() const { return ___m_isTextTruncated_108; }
	inline bool* get_address_of_m_isTextTruncated_108() { return &___m_isTextTruncated_108; }
	inline void set_m_isTextTruncated_108(bool value)
	{
		___m_isTextTruncated_108 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_109() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableKerning_109)); }
	inline bool get_m_enableKerning_109() const { return ___m_enableKerning_109; }
	inline bool* get_address_of_m_enableKerning_109() { return &___m_enableKerning_109; }
	inline void set_m_enableKerning_109(bool value)
	{
		___m_enableKerning_109 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_110() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableExtraPadding_110)); }
	inline bool get_m_enableExtraPadding_110() const { return ___m_enableExtraPadding_110; }
	inline bool* get_address_of_m_enableExtraPadding_110() { return &___m_enableExtraPadding_110; }
	inline void set_m_enableExtraPadding_110(bool value)
	{
		___m_enableExtraPadding_110 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_111() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___checkPaddingRequired_111)); }
	inline bool get_checkPaddingRequired_111() const { return ___checkPaddingRequired_111; }
	inline bool* get_address_of_checkPaddingRequired_111() { return &___checkPaddingRequired_111; }
	inline void set_checkPaddingRequired_111(bool value)
	{
		___checkPaddingRequired_111 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_112() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRichText_112)); }
	inline bool get_m_isRichText_112() const { return ___m_isRichText_112; }
	inline bool* get_address_of_m_isRichText_112() { return &___m_isRichText_112; }
	inline void set_m_isRichText_112(bool value)
	{
		___m_isRichText_112 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_113() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_parseCtrlCharacters_113)); }
	inline bool get_m_parseCtrlCharacters_113() const { return ___m_parseCtrlCharacters_113; }
	inline bool* get_address_of_m_parseCtrlCharacters_113() { return &___m_parseCtrlCharacters_113; }
	inline void set_m_parseCtrlCharacters_113(bool value)
	{
		___m_parseCtrlCharacters_113 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_114() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOverlay_114)); }
	inline bool get_m_isOverlay_114() const { return ___m_isOverlay_114; }
	inline bool* get_address_of_m_isOverlay_114() { return &___m_isOverlay_114; }
	inline void set_m_isOverlay_114(bool value)
	{
		___m_isOverlay_114 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_115() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOrthographic_115)); }
	inline bool get_m_isOrthographic_115() const { return ___m_isOrthographic_115; }
	inline bool* get_address_of_m_isOrthographic_115() { return &___m_isOrthographic_115; }
	inline void set_m_isOrthographic_115(bool value)
	{
		___m_isOrthographic_115 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_116() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCullingEnabled_116)); }
	inline bool get_m_isCullingEnabled_116() const { return ___m_isCullingEnabled_116; }
	inline bool* get_address_of_m_isCullingEnabled_116() { return &___m_isCullingEnabled_116; }
	inline void set_m_isCullingEnabled_116(bool value)
	{
		___m_isCullingEnabled_116 = value;
	}

	inline static int32_t get_offset_of_m_ignoreRectMaskCulling_117() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreRectMaskCulling_117)); }
	inline bool get_m_ignoreRectMaskCulling_117() const { return ___m_ignoreRectMaskCulling_117; }
	inline bool* get_address_of_m_ignoreRectMaskCulling_117() { return &___m_ignoreRectMaskCulling_117; }
	inline void set_m_ignoreRectMaskCulling_117(bool value)
	{
		___m_ignoreRectMaskCulling_117 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_118() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreCulling_118)); }
	inline bool get_m_ignoreCulling_118() const { return ___m_ignoreCulling_118; }
	inline bool* get_address_of_m_ignoreCulling_118() { return &___m_ignoreCulling_118; }
	inline void set_m_ignoreCulling_118(bool value)
	{
		___m_ignoreCulling_118 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_119() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_horizontalMapping_119)); }
	inline int32_t get_m_horizontalMapping_119() const { return ___m_horizontalMapping_119; }
	inline int32_t* get_address_of_m_horizontalMapping_119() { return &___m_horizontalMapping_119; }
	inline void set_m_horizontalMapping_119(int32_t value)
	{
		___m_horizontalMapping_119 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_120() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticalMapping_120)); }
	inline int32_t get_m_verticalMapping_120() const { return ___m_verticalMapping_120; }
	inline int32_t* get_address_of_m_verticalMapping_120() { return &___m_verticalMapping_120; }
	inline void set_m_verticalMapping_120(int32_t value)
	{
		___m_verticalMapping_120 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_121() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_uvLineOffset_121)); }
	inline float get_m_uvLineOffset_121() const { return ___m_uvLineOffset_121; }
	inline float* get_address_of_m_uvLineOffset_121() { return &___m_uvLineOffset_121; }
	inline void set_m_uvLineOffset_121(float value)
	{
		___m_uvLineOffset_121 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_122() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderMode_122)); }
	inline int32_t get_m_renderMode_122() const { return ___m_renderMode_122; }
	inline int32_t* get_address_of_m_renderMode_122() { return &___m_renderMode_122; }
	inline void set_m_renderMode_122(int32_t value)
	{
		___m_renderMode_122 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_123() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_geometrySortingOrder_123)); }
	inline int32_t get_m_geometrySortingOrder_123() const { return ___m_geometrySortingOrder_123; }
	inline int32_t* get_address_of_m_geometrySortingOrder_123() { return &___m_geometrySortingOrder_123; }
	inline void set_m_geometrySortingOrder_123(int32_t value)
	{
		___m_geometrySortingOrder_123 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_124() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VertexBufferAutoSizeReduction_124)); }
	inline bool get_m_VertexBufferAutoSizeReduction_124() const { return ___m_VertexBufferAutoSizeReduction_124; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_124() { return &___m_VertexBufferAutoSizeReduction_124; }
	inline void set_m_VertexBufferAutoSizeReduction_124(bool value)
	{
		___m_VertexBufferAutoSizeReduction_124 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_125() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacter_125)); }
	inline int32_t get_m_firstVisibleCharacter_125() const { return ___m_firstVisibleCharacter_125; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_125() { return &___m_firstVisibleCharacter_125; }
	inline void set_m_firstVisibleCharacter_125(int32_t value)
	{
		___m_firstVisibleCharacter_125 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_126() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleCharacters_126)); }
	inline int32_t get_m_maxVisibleCharacters_126() const { return ___m_maxVisibleCharacters_126; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_126() { return &___m_maxVisibleCharacters_126; }
	inline void set_m_maxVisibleCharacters_126(int32_t value)
	{
		___m_maxVisibleCharacters_126 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_127() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleWords_127)); }
	inline int32_t get_m_maxVisibleWords_127() const { return ___m_maxVisibleWords_127; }
	inline int32_t* get_address_of_m_maxVisibleWords_127() { return &___m_maxVisibleWords_127; }
	inline void set_m_maxVisibleWords_127(int32_t value)
	{
		___m_maxVisibleWords_127 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_128() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleLines_128)); }
	inline int32_t get_m_maxVisibleLines_128() const { return ___m_maxVisibleLines_128; }
	inline int32_t* get_address_of_m_maxVisibleLines_128() { return &___m_maxVisibleLines_128; }
	inline void set_m_maxVisibleLines_128(int32_t value)
	{
		___m_maxVisibleLines_128 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_129() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_useMaxVisibleDescender_129)); }
	inline bool get_m_useMaxVisibleDescender_129() const { return ___m_useMaxVisibleDescender_129; }
	inline bool* get_address_of_m_useMaxVisibleDescender_129() { return &___m_useMaxVisibleDescender_129; }
	inline void set_m_useMaxVisibleDescender_129(bool value)
	{
		___m_useMaxVisibleDescender_129 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_130() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageToDisplay_130)); }
	inline int32_t get_m_pageToDisplay_130() const { return ___m_pageToDisplay_130; }
	inline int32_t* get_address_of_m_pageToDisplay_130() { return &___m_pageToDisplay_130; }
	inline void set_m_pageToDisplay_130(int32_t value)
	{
		___m_pageToDisplay_130 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_131() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNewPage_131)); }
	inline bool get_m_isNewPage_131() const { return ___m_isNewPage_131; }
	inline bool* get_address_of_m_isNewPage_131() { return &___m_isNewPage_131; }
	inline void set_m_isNewPage_131(bool value)
	{
		___m_isNewPage_131 = value;
	}

	inline static int32_t get_offset_of_m_margin_132() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_margin_132)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_margin_132() const { return ___m_margin_132; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_margin_132() { return &___m_margin_132; }
	inline void set_m_margin_132(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_margin_132 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_133() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginLeft_133)); }
	inline float get_m_marginLeft_133() const { return ___m_marginLeft_133; }
	inline float* get_address_of_m_marginLeft_133() { return &___m_marginLeft_133; }
	inline void set_m_marginLeft_133(float value)
	{
		___m_marginLeft_133 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_134() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginRight_134)); }
	inline float get_m_marginRight_134() const { return ___m_marginRight_134; }
	inline float* get_address_of_m_marginRight_134() { return &___m_marginRight_134; }
	inline void set_m_marginRight_134(float value)
	{
		___m_marginRight_134 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_135() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginWidth_135)); }
	inline float get_m_marginWidth_135() const { return ___m_marginWidth_135; }
	inline float* get_address_of_m_marginWidth_135() { return &___m_marginWidth_135; }
	inline void set_m_marginWidth_135(float value)
	{
		___m_marginWidth_135 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_136() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginHeight_136)); }
	inline float get_m_marginHeight_136() const { return ___m_marginHeight_136; }
	inline float* get_address_of_m_marginHeight_136() { return &___m_marginHeight_136; }
	inline void set_m_marginHeight_136(float value)
	{
		___m_marginHeight_136 = value;
	}

	inline static int32_t get_offset_of_m_width_137() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_width_137)); }
	inline float get_m_width_137() const { return ___m_width_137; }
	inline float* get_address_of_m_width_137() { return &___m_width_137; }
	inline void set_m_width_137(float value)
	{
		___m_width_137 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_138() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textInfo_138)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_m_textInfo_138() const { return ___m_textInfo_138; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_m_textInfo_138() { return &___m_textInfo_138; }
	inline void set_m_textInfo_138(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___m_textInfo_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_138), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_139() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_havePropertiesChanged_139)); }
	inline bool get_m_havePropertiesChanged_139() const { return ___m_havePropertiesChanged_139; }
	inline bool* get_address_of_m_havePropertiesChanged_139() { return &___m_havePropertiesChanged_139; }
	inline void set_m_havePropertiesChanged_139(bool value)
	{
		___m_havePropertiesChanged_139 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_140() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingLegacyAnimationComponent_140)); }
	inline bool get_m_isUsingLegacyAnimationComponent_140() const { return ___m_isUsingLegacyAnimationComponent_140; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_140() { return &___m_isUsingLegacyAnimationComponent_140; }
	inline void set_m_isUsingLegacyAnimationComponent_140(bool value)
	{
		___m_isUsingLegacyAnimationComponent_140 = value;
	}

	inline static int32_t get_offset_of_m_transform_141() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_transform_141)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_transform_141() const { return ___m_transform_141; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_transform_141() { return &___m_transform_141; }
	inline void set_m_transform_141(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_transform_141 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_141), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_142() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_rectTransform_142)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_rectTransform_142() const { return ___m_rectTransform_142; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_rectTransform_142() { return &___m_rectTransform_142; }
	inline void set_m_rectTransform_142(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_rectTransform_142 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_142), (void*)value);
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_143() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___U3CautoSizeTextContainerU3Ek__BackingField_143)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_143() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_143; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_143() { return &___U3CautoSizeTextContainerU3Ek__BackingField_143; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_143(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_143 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_144() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_autoSizeTextContainer_144)); }
	inline bool get_m_autoSizeTextContainer_144() const { return ___m_autoSizeTextContainer_144; }
	inline bool* get_address_of_m_autoSizeTextContainer_144() { return &___m_autoSizeTextContainer_144; }
	inline void set_m_autoSizeTextContainer_144(bool value)
	{
		___m_autoSizeTextContainer_144 = value;
	}

	inline static int32_t get_offset_of_m_mesh_145() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_mesh_145)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_mesh_145() const { return ___m_mesh_145; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_mesh_145() { return &___m_mesh_145; }
	inline void set_m_mesh_145(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_mesh_145 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_145), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_146() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isVolumetricText_146)); }
	inline bool get_m_isVolumetricText_146() const { return ___m_isVolumetricText_146; }
	inline bool* get_address_of_m_isVolumetricText_146() { return &___m_isVolumetricText_146; }
	inline void set_m_isVolumetricText_146(bool value)
	{
		___m_isVolumetricText_146 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimator_147() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimator_147)); }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * get_m_spriteAnimator_147() const { return ___m_spriteAnimator_147; }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 ** get_address_of_m_spriteAnimator_147() { return &___m_spriteAnimator_147; }
	inline void set_m_spriteAnimator_147(TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * value)
	{
		___m_spriteAnimator_147 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_147), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleHeight_148)); }
	inline float get_m_flexibleHeight_148() const { return ___m_flexibleHeight_148; }
	inline float* get_address_of_m_flexibleHeight_148() { return &___m_flexibleHeight_148; }
	inline void set_m_flexibleHeight_148(float value)
	{
		___m_flexibleHeight_148 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_149() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleWidth_149)); }
	inline float get_m_flexibleWidth_149() const { return ___m_flexibleWidth_149; }
	inline float* get_address_of_m_flexibleWidth_149() { return &___m_flexibleWidth_149; }
	inline void set_m_flexibleWidth_149(float value)
	{
		___m_flexibleWidth_149 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_150() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minWidth_150)); }
	inline float get_m_minWidth_150() const { return ___m_minWidth_150; }
	inline float* get_address_of_m_minWidth_150() { return &___m_minWidth_150; }
	inline void set_m_minWidth_150(float value)
	{
		___m_minWidth_150 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_151() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minHeight_151)); }
	inline float get_m_minHeight_151() const { return ___m_minHeight_151; }
	inline float* get_address_of_m_minHeight_151() { return &___m_minHeight_151; }
	inline void set_m_minHeight_151(float value)
	{
		___m_minHeight_151 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_152() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxWidth_152)); }
	inline float get_m_maxWidth_152() const { return ___m_maxWidth_152; }
	inline float* get_address_of_m_maxWidth_152() { return &___m_maxWidth_152; }
	inline void set_m_maxWidth_152(float value)
	{
		___m_maxWidth_152 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_153() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxHeight_153)); }
	inline float get_m_maxHeight_153() const { return ___m_maxHeight_153; }
	inline float* get_address_of_m_maxHeight_153() { return &___m_maxHeight_153; }
	inline void set_m_maxHeight_153(float value)
	{
		___m_maxHeight_153 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_154() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_LayoutElement_154)); }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * get_m_LayoutElement_154() const { return ___m_LayoutElement_154; }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B ** get_address_of_m_LayoutElement_154() { return &___m_LayoutElement_154; }
	inline void set_m_LayoutElement_154(LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * value)
	{
		___m_LayoutElement_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_155() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredWidth_155)); }
	inline float get_m_preferredWidth_155() const { return ___m_preferredWidth_155; }
	inline float* get_address_of_m_preferredWidth_155() { return &___m_preferredWidth_155; }
	inline void set_m_preferredWidth_155(float value)
	{
		___m_preferredWidth_155 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_156() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedWidth_156)); }
	inline float get_m_renderedWidth_156() const { return ___m_renderedWidth_156; }
	inline float* get_address_of_m_renderedWidth_156() { return &___m_renderedWidth_156; }
	inline void set_m_renderedWidth_156(float value)
	{
		___m_renderedWidth_156 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_157() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredWidthDirty_157)); }
	inline bool get_m_isPreferredWidthDirty_157() const { return ___m_isPreferredWidthDirty_157; }
	inline bool* get_address_of_m_isPreferredWidthDirty_157() { return &___m_isPreferredWidthDirty_157; }
	inline void set_m_isPreferredWidthDirty_157(bool value)
	{
		___m_isPreferredWidthDirty_157 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_158() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredHeight_158)); }
	inline float get_m_preferredHeight_158() const { return ___m_preferredHeight_158; }
	inline float* get_address_of_m_preferredHeight_158() { return &___m_preferredHeight_158; }
	inline void set_m_preferredHeight_158(float value)
	{
		___m_preferredHeight_158 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_159() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedHeight_159)); }
	inline float get_m_renderedHeight_159() const { return ___m_renderedHeight_159; }
	inline float* get_address_of_m_renderedHeight_159() { return &___m_renderedHeight_159; }
	inline void set_m_renderedHeight_159(float value)
	{
		___m_renderedHeight_159 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_160() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredHeightDirty_160)); }
	inline bool get_m_isPreferredHeightDirty_160() const { return ___m_isPreferredHeightDirty_160; }
	inline bool* get_address_of_m_isPreferredHeightDirty_160() { return &___m_isPreferredHeightDirty_160; }
	inline void set_m_isPreferredHeightDirty_160(bool value)
	{
		___m_isPreferredHeightDirty_160 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_161() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculatingPreferredValues_161)); }
	inline bool get_m_isCalculatingPreferredValues_161() const { return ___m_isCalculatingPreferredValues_161; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_161() { return &___m_isCalculatingPreferredValues_161; }
	inline void set_m_isCalculatingPreferredValues_161(bool value)
	{
		___m_isCalculatingPreferredValues_161 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCount_162() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_recursiveCount_162)); }
	inline int32_t get_m_recursiveCount_162() const { return ___m_recursiveCount_162; }
	inline int32_t* get_address_of_m_recursiveCount_162() { return &___m_recursiveCount_162; }
	inline void set_m_recursiveCount_162(int32_t value)
	{
		___m_recursiveCount_162 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_163() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutPriority_163)); }
	inline int32_t get_m_layoutPriority_163() const { return ___m_layoutPriority_163; }
	inline int32_t* get_address_of_m_layoutPriority_163() { return &___m_layoutPriority_163; }
	inline void set_m_layoutPriority_163(int32_t value)
	{
		___m_layoutPriority_163 = value;
	}

	inline static int32_t get_offset_of_m_isCalculateSizeRequired_164() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculateSizeRequired_164)); }
	inline bool get_m_isCalculateSizeRequired_164() const { return ___m_isCalculateSizeRequired_164; }
	inline bool* get_address_of_m_isCalculateSizeRequired_164() { return &___m_isCalculateSizeRequired_164; }
	inline void set_m_isCalculateSizeRequired_164(bool value)
	{
		___m_isCalculateSizeRequired_164 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_165() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLayoutDirty_165)); }
	inline bool get_m_isLayoutDirty_165() const { return ___m_isLayoutDirty_165; }
	inline bool* get_address_of_m_isLayoutDirty_165() { return &___m_isLayoutDirty_165; }
	inline void set_m_isLayoutDirty_165(bool value)
	{
		___m_isLayoutDirty_165 = value;
	}

	inline static int32_t get_offset_of_m_verticesAlreadyDirty_166() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticesAlreadyDirty_166)); }
	inline bool get_m_verticesAlreadyDirty_166() const { return ___m_verticesAlreadyDirty_166; }
	inline bool* get_address_of_m_verticesAlreadyDirty_166() { return &___m_verticesAlreadyDirty_166; }
	inline void set_m_verticesAlreadyDirty_166(bool value)
	{
		___m_verticesAlreadyDirty_166 = value;
	}

	inline static int32_t get_offset_of_m_layoutAlreadyDirty_167() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutAlreadyDirty_167)); }
	inline bool get_m_layoutAlreadyDirty_167() const { return ___m_layoutAlreadyDirty_167; }
	inline bool* get_address_of_m_layoutAlreadyDirty_167() { return &___m_layoutAlreadyDirty_167; }
	inline void set_m_layoutAlreadyDirty_167(bool value)
	{
		___m_layoutAlreadyDirty_167 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_168() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isAwake_168)); }
	inline bool get_m_isAwake_168() const { return ___m_isAwake_168; }
	inline bool* get_address_of_m_isAwake_168() { return &___m_isAwake_168; }
	inline void set_m_isAwake_168(bool value)
	{
		___m_isAwake_168 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_169() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isWaitingOnResourceLoad_169)); }
	inline bool get_m_isWaitingOnResourceLoad_169() const { return ___m_isWaitingOnResourceLoad_169; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_169() { return &___m_isWaitingOnResourceLoad_169; }
	inline void set_m_isWaitingOnResourceLoad_169(bool value)
	{
		___m_isWaitingOnResourceLoad_169 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_170() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isInputParsingRequired_170)); }
	inline bool get_m_isInputParsingRequired_170() const { return ___m_isInputParsingRequired_170; }
	inline bool* get_address_of_m_isInputParsingRequired_170() { return &___m_isInputParsingRequired_170; }
	inline void set_m_isInputParsingRequired_170(bool value)
	{
		___m_isInputParsingRequired_170 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_171() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_inputSource_171)); }
	inline int32_t get_m_inputSource_171() const { return ___m_inputSource_171; }
	inline int32_t* get_address_of_m_inputSource_171() { return &___m_inputSource_171; }
	inline void set_m_inputSource_171(int32_t value)
	{
		___m_inputSource_171 = value;
	}

	inline static int32_t get_offset_of_old_text_172() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___old_text_172)); }
	inline String_t* get_old_text_172() const { return ___old_text_172; }
	inline String_t** get_address_of_old_text_172() { return &___old_text_172; }
	inline void set_old_text_172(String_t* value)
	{
		___old_text_172 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___old_text_172), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontScale_173() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScale_173)); }
	inline float get_m_fontScale_173() const { return ___m_fontScale_173; }
	inline float* get_address_of_m_fontScale_173() { return &___m_fontScale_173; }
	inline void set_m_fontScale_173(float value)
	{
		___m_fontScale_173 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_174() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScaleMultiplier_174)); }
	inline float get_m_fontScaleMultiplier_174() const { return ___m_fontScaleMultiplier_174; }
	inline float* get_address_of_m_fontScaleMultiplier_174() { return &___m_fontScaleMultiplier_174; }
	inline void set_m_fontScaleMultiplier_174(float value)
	{
		___m_fontScaleMultiplier_174 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_175() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlTag_175)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_htmlTag_175() const { return ___m_htmlTag_175; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_htmlTag_175() { return &___m_htmlTag_175; }
	inline void set_m_htmlTag_175(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_htmlTag_175 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_175), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_176() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xmlAttribute_176)); }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* get_m_xmlAttribute_176() const { return ___m_xmlAttribute_176; }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652** get_address_of_m_xmlAttribute_176() { return &___m_xmlAttribute_176; }
	inline void set_m_xmlAttribute_176(RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* value)
	{
		___m_xmlAttribute_176 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_176), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_177() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_attributeParameterValues_177)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_attributeParameterValues_177() const { return ___m_attributeParameterValues_177; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_attributeParameterValues_177() { return &___m_attributeParameterValues_177; }
	inline void set_m_attributeParameterValues_177(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_attributeParameterValues_177 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_177), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_178() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_LineIndent_178)); }
	inline float get_tag_LineIndent_178() const { return ___tag_LineIndent_178; }
	inline float* get_address_of_tag_LineIndent_178() { return &___tag_LineIndent_178; }
	inline void set_tag_LineIndent_178(float value)
	{
		___tag_LineIndent_178 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_179() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_Indent_179)); }
	inline float get_tag_Indent_179() const { return ___tag_Indent_179; }
	inline float* get_address_of_tag_Indent_179() { return &___tag_Indent_179; }
	inline void set_tag_Indent_179(float value)
	{
		___tag_Indent_179 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_180() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_indentStack_180)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_m_indentStack_180() const { return ___m_indentStack_180; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_m_indentStack_180() { return &___m_indentStack_180; }
	inline void set_m_indentStack_180(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___m_indentStack_180 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_180))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_181() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_NoParsing_181)); }
	inline bool get_tag_NoParsing_181() const { return ___tag_NoParsing_181; }
	inline bool* get_address_of_tag_NoParsing_181() { return &___tag_NoParsing_181; }
	inline void set_tag_NoParsing_181(bool value)
	{
		___tag_NoParsing_181 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_182() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isParsingText_182)); }
	inline bool get_m_isParsingText_182() const { return ___m_isParsingText_182; }
	inline bool* get_address_of_m_isParsingText_182() { return &___m_isParsingText_182; }
	inline void set_m_isParsingText_182(bool value)
	{
		___m_isParsingText_182 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_183() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FXMatrix_183)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_FXMatrix_183() const { return ___m_FXMatrix_183; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_FXMatrix_183() { return &___m_FXMatrix_183; }
	inline void set_m_FXMatrix_183(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_FXMatrix_183 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_184() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isFXMatrixSet_184)); }
	inline bool get_m_isFXMatrixSet_184() const { return ___m_isFXMatrixSet_184; }
	inline bool* get_address_of_m_isFXMatrixSet_184() { return &___m_isFXMatrixSet_184; }
	inline void set_m_isFXMatrixSet_184(bool value)
	{
		___m_isFXMatrixSet_184 = value;
	}

	inline static int32_t get_offset_of_m_TextParsingBuffer_185() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextParsingBuffer_185)); }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* get_m_TextParsingBuffer_185() const { return ___m_TextParsingBuffer_185; }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505** get_address_of_m_TextParsingBuffer_185() { return &___m_TextParsingBuffer_185; }
	inline void set_m_TextParsingBuffer_185(UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* value)
	{
		___m_TextParsingBuffer_185 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextParsingBuffer_185), (void*)value);
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_186() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_internalCharacterInfo_186)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_m_internalCharacterInfo_186() const { return ___m_internalCharacterInfo_186; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_m_internalCharacterInfo_186() { return &___m_internalCharacterInfo_186; }
	inline void set_m_internalCharacterInfo_186(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___m_internalCharacterInfo_186 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_186), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_187() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_input_CharArray_187)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_input_CharArray_187() const { return ___m_input_CharArray_187; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_input_CharArray_187() { return &___m_input_CharArray_187; }
	inline void set_m_input_CharArray_187(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_input_CharArray_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_188() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charArray_Length_188)); }
	inline int32_t get_m_charArray_Length_188() const { return ___m_charArray_Length_188; }
	inline int32_t* get_address_of_m_charArray_Length_188() { return &___m_charArray_Length_188; }
	inline void set_m_charArray_Length_188(int32_t value)
	{
		___m_charArray_Length_188 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_189() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_totalCharacterCount_189)); }
	inline int32_t get_m_totalCharacterCount_189() const { return ___m_totalCharacterCount_189; }
	inline int32_t* get_address_of_m_totalCharacterCount_189() { return &___m_totalCharacterCount_189; }
	inline void set_m_totalCharacterCount_189(int32_t value)
	{
		___m_totalCharacterCount_189 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_190() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedWordWrapState_190)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedWordWrapState_190() const { return ___m_SavedWordWrapState_190; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedWordWrapState_190() { return &___m_SavedWordWrapState_190; }
	inline void set_m_SavedWordWrapState_190(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedWordWrapState_190 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___textInfo_27), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___colorStack_34))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___indentStack_40))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___styleStack_42))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___actionStack_44))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___currentFontAsset_48), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___currentSpriteAsset_49), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___currentMaterial_50), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_191() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedLineState_191)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLineState_191() const { return ___m_SavedLineState_191; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLineState_191() { return &___m_SavedLineState_191; }
	inline void set_m_SavedLineState_191(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLineState_191 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___textInfo_27), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___colorStack_34))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___indentStack_40))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___styleStack_42))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___actionStack_44))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___currentFontAsset_48), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___currentSpriteAsset_49), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___currentMaterial_50), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_192() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterCount_192)); }
	inline int32_t get_m_characterCount_192() const { return ___m_characterCount_192; }
	inline int32_t* get_address_of_m_characterCount_192() { return &___m_characterCount_192; }
	inline void set_m_characterCount_192(int32_t value)
	{
		___m_characterCount_192 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_193() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstCharacterOfLine_193)); }
	inline int32_t get_m_firstCharacterOfLine_193() const { return ___m_firstCharacterOfLine_193; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_193() { return &___m_firstCharacterOfLine_193; }
	inline void set_m_firstCharacterOfLine_193(int32_t value)
	{
		___m_firstCharacterOfLine_193 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_194() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacterOfLine_194)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_194() const { return ___m_firstVisibleCharacterOfLine_194; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_194() { return &___m_firstVisibleCharacterOfLine_194; }
	inline void set_m_firstVisibleCharacterOfLine_194(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_194 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_195() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastCharacterOfLine_195)); }
	inline int32_t get_m_lastCharacterOfLine_195() const { return ___m_lastCharacterOfLine_195; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_195() { return &___m_lastCharacterOfLine_195; }
	inline void set_m_lastCharacterOfLine_195(int32_t value)
	{
		___m_lastCharacterOfLine_195 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_196() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastVisibleCharacterOfLine_196)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_196() const { return ___m_lastVisibleCharacterOfLine_196; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_196() { return &___m_lastVisibleCharacterOfLine_196; }
	inline void set_m_lastVisibleCharacterOfLine_196(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_196 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_197() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineNumber_197)); }
	inline int32_t get_m_lineNumber_197() const { return ___m_lineNumber_197; }
	inline int32_t* get_address_of_m_lineNumber_197() { return &___m_lineNumber_197; }
	inline void set_m_lineNumber_197(int32_t value)
	{
		___m_lineNumber_197 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_198() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineVisibleCharacterCount_198)); }
	inline int32_t get_m_lineVisibleCharacterCount_198() const { return ___m_lineVisibleCharacterCount_198; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_198() { return &___m_lineVisibleCharacterCount_198; }
	inline void set_m_lineVisibleCharacterCount_198(int32_t value)
	{
		___m_lineVisibleCharacterCount_198 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_199() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageNumber_199)); }
	inline int32_t get_m_pageNumber_199() const { return ___m_pageNumber_199; }
	inline int32_t* get_address_of_m_pageNumber_199() { return &___m_pageNumber_199; }
	inline void set_m_pageNumber_199(int32_t value)
	{
		___m_pageNumber_199 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_200() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxAscender_200)); }
	inline float get_m_maxAscender_200() const { return ___m_maxAscender_200; }
	inline float* get_address_of_m_maxAscender_200() { return &___m_maxAscender_200; }
	inline void set_m_maxAscender_200(float value)
	{
		___m_maxAscender_200 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_201() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxCapHeight_201)); }
	inline float get_m_maxCapHeight_201() const { return ___m_maxCapHeight_201; }
	inline float* get_address_of_m_maxCapHeight_201() { return &___m_maxCapHeight_201; }
	inline void set_m_maxCapHeight_201(float value)
	{
		___m_maxCapHeight_201 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_202() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxDescender_202)); }
	inline float get_m_maxDescender_202() const { return ___m_maxDescender_202; }
	inline float* get_address_of_m_maxDescender_202() { return &___m_maxDescender_202; }
	inline void set_m_maxDescender_202(float value)
	{
		___m_maxDescender_202 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_203() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineAscender_203)); }
	inline float get_m_maxLineAscender_203() const { return ___m_maxLineAscender_203; }
	inline float* get_address_of_m_maxLineAscender_203() { return &___m_maxLineAscender_203; }
	inline void set_m_maxLineAscender_203(float value)
	{
		___m_maxLineAscender_203 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_204() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineDescender_204)); }
	inline float get_m_maxLineDescender_204() const { return ___m_maxLineDescender_204; }
	inline float* get_address_of_m_maxLineDescender_204() { return &___m_maxLineDescender_204; }
	inline void set_m_maxLineDescender_204(float value)
	{
		___m_maxLineDescender_204 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_205() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineAscender_205)); }
	inline float get_m_startOfLineAscender_205() const { return ___m_startOfLineAscender_205; }
	inline float* get_address_of_m_startOfLineAscender_205() { return &___m_startOfLineAscender_205; }
	inline void set_m_startOfLineAscender_205(float value)
	{
		___m_startOfLineAscender_205 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_206() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineOffset_206)); }
	inline float get_m_lineOffset_206() const { return ___m_lineOffset_206; }
	inline float* get_address_of_m_lineOffset_206() { return &___m_lineOffset_206; }
	inline void set_m_lineOffset_206(float value)
	{
		___m_lineOffset_206 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_207() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_meshExtents_207)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_m_meshExtents_207() const { return ___m_meshExtents_207; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_m_meshExtents_207() { return &___m_meshExtents_207; }
	inline void set_m_meshExtents_207(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___m_meshExtents_207 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_208() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlColor_208)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_htmlColor_208() const { return ___m_htmlColor_208; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_htmlColor_208() { return &___m_htmlColor_208; }
	inline void set_m_htmlColor_208(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_htmlColor_208 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_209() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorStack_209)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_colorStack_209() const { return ___m_colorStack_209; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_colorStack_209() { return &___m_colorStack_209; }
	inline void set_m_colorStack_209(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_colorStack_209 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_209))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_210() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColorStack_210)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_underlineColorStack_210() const { return ___m_underlineColorStack_210; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_underlineColorStack_210() { return &___m_underlineColorStack_210; }
	inline void set_m_underlineColorStack_210(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_underlineColorStack_210 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_210))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_211() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColorStack_211)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_strikethroughColorStack_211() const { return ___m_strikethroughColorStack_211; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_strikethroughColorStack_211() { return &___m_strikethroughColorStack_211; }
	inline void set_m_strikethroughColorStack_211(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_strikethroughColorStack_211 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_211))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_highlightColorStack_212() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightColorStack_212)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_highlightColorStack_212() const { return ___m_highlightColorStack_212; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_highlightColorStack_212() { return &___m_highlightColorStack_212; }
	inline void set_m_highlightColorStack_212(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_highlightColorStack_212 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_highlightColorStack_212))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_213() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPreset_213)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_colorGradientPreset_213() const { return ___m_colorGradientPreset_213; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_colorGradientPreset_213() { return &___m_colorGradientPreset_213; }
	inline void set_m_colorGradientPreset_213(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_colorGradientPreset_213 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_213), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_214() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientStack_214)); }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  get_m_colorGradientStack_214() const { return ___m_colorGradientStack_214; }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D * get_address_of_m_colorGradientStack_214() { return &___m_colorGradientStack_214; }
	inline void set_m_colorGradientStack_214(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  value)
	{
		___m_colorGradientStack_214 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_214))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_214))->___m_DefaultItem_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_tabSpacing_215() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tabSpacing_215)); }
	inline float get_m_tabSpacing_215() const { return ___m_tabSpacing_215; }
	inline float* get_address_of_m_tabSpacing_215() { return &___m_tabSpacing_215; }
	inline void set_m_tabSpacing_215(float value)
	{
		___m_tabSpacing_215 = value;
	}

	inline static int32_t get_offset_of_m_spacing_216() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spacing_216)); }
	inline float get_m_spacing_216() const { return ___m_spacing_216; }
	inline float* get_address_of_m_spacing_216() { return &___m_spacing_216; }
	inline void set_m_spacing_216(float value)
	{
		___m_spacing_216 = value;
	}

	inline static int32_t get_offset_of_m_styleStack_217() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_styleStack_217)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_m_styleStack_217() const { return ___m_styleStack_217; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_m_styleStack_217() { return &___m_styleStack_217; }
	inline void set_m_styleStack_217(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___m_styleStack_217 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_styleStack_217))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_actionStack_218() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_actionStack_218)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_m_actionStack_218() const { return ___m_actionStack_218; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_m_actionStack_218() { return &___m_actionStack_218; }
	inline void set_m_actionStack_218(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___m_actionStack_218 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_218))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_219() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_padding_219)); }
	inline float get_m_padding_219() const { return ___m_padding_219; }
	inline float* get_address_of_m_padding_219() { return &___m_padding_219; }
	inline void set_m_padding_219(float value)
	{
		___m_padding_219 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_220() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffset_220)); }
	inline float get_m_baselineOffset_220() const { return ___m_baselineOffset_220; }
	inline float* get_address_of_m_baselineOffset_220() { return &___m_baselineOffset_220; }
	inline void set_m_baselineOffset_220(float value)
	{
		___m_baselineOffset_220 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_221() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffsetStack_221)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_m_baselineOffsetStack_221() const { return ___m_baselineOffsetStack_221; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_m_baselineOffsetStack_221() { return &___m_baselineOffsetStack_221; }
	inline void set_m_baselineOffsetStack_221(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___m_baselineOffsetStack_221 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_221))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_222() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xAdvance_222)); }
	inline float get_m_xAdvance_222() const { return ___m_xAdvance_222; }
	inline float* get_address_of_m_xAdvance_222() { return &___m_xAdvance_222; }
	inline void set_m_xAdvance_222(float value)
	{
		___m_xAdvance_222 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_223() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textElementType_223)); }
	inline int32_t get_m_textElementType_223() const { return ___m_textElementType_223; }
	inline int32_t* get_address_of_m_textElementType_223() { return &___m_textElementType_223; }
	inline void set_m_textElementType_223(int32_t value)
	{
		___m_textElementType_223 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_224() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_TextElement_224)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_m_cached_TextElement_224() const { return ___m_cached_TextElement_224; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_m_cached_TextElement_224() { return &___m_cached_TextElement_224; }
	inline void set_m_cached_TextElement_224(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___m_cached_TextElement_224 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_224), (void*)value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_Character_225() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_Underline_Character_225)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_m_cached_Underline_Character_225() const { return ___m_cached_Underline_Character_225; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_m_cached_Underline_Character_225() { return &___m_cached_Underline_Character_225; }
	inline void set_m_cached_Underline_Character_225(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___m_cached_Underline_Character_225 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_Underline_Character_225), (void*)value);
	}

	inline static int32_t get_offset_of_m_cached_Ellipsis_Character_226() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_Ellipsis_Character_226)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_m_cached_Ellipsis_Character_226() const { return ___m_cached_Ellipsis_Character_226; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_m_cached_Ellipsis_Character_226() { return &___m_cached_Ellipsis_Character_226; }
	inline void set_m_cached_Ellipsis_Character_226(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___m_cached_Ellipsis_Character_226 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_Ellipsis_Character_226), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_227() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_defaultSpriteAsset_227)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_defaultSpriteAsset_227() const { return ___m_defaultSpriteAsset_227; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_defaultSpriteAsset_227() { return &___m_defaultSpriteAsset_227; }
	inline void set_m_defaultSpriteAsset_227(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_defaultSpriteAsset_227 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_227), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_228() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentSpriteAsset_228)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_currentSpriteAsset_228() const { return ___m_currentSpriteAsset_228; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_currentSpriteAsset_228() { return &___m_currentSpriteAsset_228; }
	inline void set_m_currentSpriteAsset_228(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_currentSpriteAsset_228 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_228), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_229() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteCount_229)); }
	inline int32_t get_m_spriteCount_229() const { return ___m_spriteCount_229; }
	inline int32_t* get_address_of_m_spriteCount_229() { return &___m_spriteCount_229; }
	inline void set_m_spriteCount_229(int32_t value)
	{
		___m_spriteCount_229 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_230() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteIndex_230)); }
	inline int32_t get_m_spriteIndex_230() const { return ___m_spriteIndex_230; }
	inline int32_t* get_address_of_m_spriteIndex_230() { return &___m_spriteIndex_230; }
	inline void set_m_spriteIndex_230(int32_t value)
	{
		___m_spriteIndex_230 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_231() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimationID_231)); }
	inline int32_t get_m_spriteAnimationID_231() const { return ___m_spriteAnimationID_231; }
	inline int32_t* get_address_of_m_spriteAnimationID_231() { return &___m_spriteAnimationID_231; }
	inline void set_m_spriteAnimationID_231(int32_t value)
	{
		___m_spriteAnimationID_231 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_232() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreActiveState_232)); }
	inline bool get_m_ignoreActiveState_232() const { return ___m_ignoreActiveState_232; }
	inline bool* get_address_of_m_ignoreActiveState_232() { return &___m_ignoreActiveState_232; }
	inline void set_m_ignoreActiveState_232(bool value)
	{
		___m_ignoreActiveState_232 = value;
	}

	inline static int32_t get_offset_of_k_Power_233() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___k_Power_233)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_k_Power_233() const { return ___k_Power_233; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_k_Power_233() { return &___k_Power_233; }
	inline void set_k_Power_233(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___k_Power_233 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_233), (void*)value);
	}
};

struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_colorWhite_51;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargePositiveVector2_234;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargeNegativeVector2_235;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_236;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_237;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_238;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_239;

public:
	inline static int32_t get_offset_of_s_colorWhite_51() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___s_colorWhite_51)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_colorWhite_51() const { return ___s_colorWhite_51; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_colorWhite_51() { return &___s_colorWhite_51; }
	inline void set_s_colorWhite_51(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_colorWhite_51 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_234() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveVector2_234)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargePositiveVector2_234() const { return ___k_LargePositiveVector2_234; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargePositiveVector2_234() { return &___k_LargePositiveVector2_234; }
	inline void set_k_LargePositiveVector2_234(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargePositiveVector2_234 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_235() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeVector2_235)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargeNegativeVector2_235() const { return ___k_LargeNegativeVector2_235; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargeNegativeVector2_235() { return &___k_LargeNegativeVector2_235; }
	inline void set_k_LargeNegativeVector2_235(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargeNegativeVector2_235 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_236() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveFloat_236)); }
	inline float get_k_LargePositiveFloat_236() const { return ___k_LargePositiveFloat_236; }
	inline float* get_address_of_k_LargePositiveFloat_236() { return &___k_LargePositiveFloat_236; }
	inline void set_k_LargePositiveFloat_236(float value)
	{
		___k_LargePositiveFloat_236 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_237() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeFloat_237)); }
	inline float get_k_LargeNegativeFloat_237() const { return ___k_LargeNegativeFloat_237; }
	inline float* get_address_of_k_LargeNegativeFloat_237() { return &___k_LargeNegativeFloat_237; }
	inline void set_k_LargeNegativeFloat_237(float value)
	{
		___k_LargeNegativeFloat_237 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_238() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveInt_238)); }
	inline int32_t get_k_LargePositiveInt_238() const { return ___k_LargePositiveInt_238; }
	inline int32_t* get_address_of_k_LargePositiveInt_238() { return &___k_LargePositiveInt_238; }
	inline void set_k_LargePositiveInt_238(int32_t value)
	{
		___k_LargePositiveInt_238 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_239() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeInt_239)); }
	inline int32_t get_k_LargeNegativeInt_239() const { return ___k_LargeNegativeInt_239; }
	inline int32_t* get_address_of_k_LargeNegativeInt_239() { return &___k_LargeNegativeInt_239; }
	inline void set_k_LargeNegativeInt_239(int32_t value)
	{
		___k_LargeNegativeInt_239 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1  m_Items[1];

public:
	inline TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  m_Items[1];

public:
	inline TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textComponent_0), (void*)NULL);
	}
	inline TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textComponent_0), (void*)NULL);
	}
};
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  m_Items[1];

public:
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  m_Items[1];

public:
	inline TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textComponent_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___linkID_6), (void*)NULL);
		#endif
	}
	inline TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textComponent_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___linkID_6), (void*)NULL);
		#endif
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInParent_TisRuntimeObject_mBC64895B74DFE62BA4F723C7A369F7BFDE438AC6_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_gshared (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, Il2CppChar ___arg00, int32_t ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_mF7B9410683321DBE61FC4F641DA39C99A7FA75FF_gshared (UnityEvent_3_tFC992AA557296F35E887CA6A6D486BAD05CBE7E8 * __this, RuntimeObject * ___arg00, int32_t ___arg11, int32_t ___arg22, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m491E2207B7E6F885A7C0B12846108363E8D9BCC4_gshared (UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, int32_t ___arg22, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_gshared (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mDAFC5615641C9252BAA08BCCC90C90101C91603A_gshared (UnityEvent_3_tFC992AA557296F35E887CA6A6D486BAD05CBE7E8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mF6A34E6243359342CE52C9E31132478CA9BA73AD_gshared (UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15 * __this, const RuntimeMethod* method);

// System.Void TMPro.TMP_InputValidator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputValidator__ctor_m86416C378A2B37E7F1D40C4DF3E49CF41F39E13D (TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * GameObject_GetComponent_TisTMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_mAE16231F6DB7467B8D9449A2E3E9AC5A821EC4AE (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * GameObject_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m3F4A66E37DA71D5AF43D8A63F8C2D698003572F0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mBC64895B74DFE62BA4F723C7A369F7BFDE438AC6_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.RectTransform TMPro.TMP_Text::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * TMP_Text_get_rectTransform_m7D5ABF7B98E93576BDA8F7E1A2A7415284D4F05E (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53 (const RuntimeMethod* method);
// System.Boolean TMPro.TMP_TextUtilities::IsIntersectingRectTransform(UnityEngine.RectTransform,UnityEngine.Vector3,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TMP_TextUtilities_IsIntersectingRectTransform_m673D86304DB8BA8F23DB5668BB9B9B4BC103E4F1 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___rectTransform0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera2, const RuntimeMethod* method);
// System.Int32 TMPro.TMP_TextUtilities::FindIntersectingCharacter(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_TextUtilities_FindIntersectingCharacter_mE3DF825E1B004FB99F0795C9175F4BEE95C4A152 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___text0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera2, bool ___visibleOnly3, const RuntimeMethod* method);
// TMPro.TMP_TextInfo TMPro.TMP_Text::get_textInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler::SendOnCharacterSelection(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnCharacterSelection_mBC44C107A6FB8C43F7C6629D4A15CA85471A28B2 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, Il2CppChar ___character0, int32_t ___characterIndex1, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler::SendOnSpriteSelection(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnSpriteSelection_mEF24BCE06B0CE4450B6AE9561EC4B5052DAF00F6 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, Il2CppChar ___character0, int32_t ___characterIndex1, const RuntimeMethod* method);
// System.Int32 TMPro.TMP_TextUtilities::FindIntersectingWord(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_TextUtilities_FindIntersectingWord_m3D600FFD979C6F4CA0E68E476274DC52792A6E27 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___text0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera2, const RuntimeMethod* method);
// System.String TMPro.TMP_WordInfo::GetWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TMP_WordInfo_GetWord_m45402062300ED4455F6C6F5E96E42C4904E18133 (TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler::SendOnWordSelection(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnWordSelection_m7C4D266070EE2ADC66BCCFD50EB74FEB4923B77E (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, String_t* ___word0, int32_t ___charIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 TMPro.TMP_TextUtilities::FindIntersectingLine(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_TextUtilities_FindIntersectingLine_m382D73F58E10E0252FE311C164264E8564F9AE73 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___text0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera2, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler::SendOnLineSelection(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnLineSelection_mAAF4AF44929D0C9FD73C89E5266028908074AEB1 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, String_t* ___line0, int32_t ___charIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 TMPro.TMP_TextUtilities::FindIntersectingLink(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_TextUtilities_FindIntersectingLink_mC8275AA5E208929B1DB6170DEA09CA8D82F47020 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___text0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera2, const RuntimeMethod* method);
// System.String TMPro.TMP_LinkInfo::GetLinkID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TMP_LinkInfo_GetLinkID_m97C3C9028EF1FA90BF6315BFDF42AAD3A7463B53 (TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 * __this, const RuntimeMethod* method);
// System.String TMPro.TMP_LinkInfo::GetLinkText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TMP_LinkInfo_GetLinkText_m7C78982CD398EBC8AF2303E0A665A76C26FE0352 (TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler::SendOnLinkSelection(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnLinkSelection_m082D12F7D044456D8514E4D31944C6900F8262C0 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, String_t* ___linkID0, String_t* ___linkText1, int32_t ___linkIndex2, const RuntimeMethod* method);
// TMPro.TMP_TextEventHandler/CharacterSelectionEvent TMPro.TMP_TextEventHandler::get_onCharacterSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * TMP_TextEventHandler_get_onCharacterSelection_mF70DBE3FF43B3D6E64053D37A2FADF802533E1FF (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725 (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, Il2CppChar ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A *, Il2CppChar, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_gshared)(__this, ___arg00, ___arg11, method);
}
// TMPro.TMP_TextEventHandler/SpriteSelectionEvent TMPro.TMP_TextEventHandler::get_onSpriteSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * TMP_TextEventHandler_get_onSpriteSelection_m395603314F8CD073897DCAB5513270C6ADD94BF4 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method);
// TMPro.TMP_TextEventHandler/WordSelectionEvent TMPro.TMP_TextEventHandler::get_onWordSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * TMP_TextEventHandler_get_onWordSelection_m415F4479934B1739658356B47DF4C2E90496AE2E (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>::Invoke(!0,!1,!2)
inline void UnityEvent_3_Invoke_m907D837057531F0AF1AC6E6501DFD9D3549A44AD (UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930 * __this, String_t* ___arg00, int32_t ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930 *, String_t*, int32_t, int32_t, const RuntimeMethod*))UnityEvent_3_Invoke_mF7B9410683321DBE61FC4F641DA39C99A7FA75FF_gshared)(__this, ___arg00, ___arg11, ___arg22, method);
}
// TMPro.TMP_TextEventHandler/LineSelectionEvent TMPro.TMP_TextEventHandler::get_onLineSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * TMP_TextEventHandler_get_onLineSelection_m8E724700CC5DF1197B103F87156576A52F62AB2B (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method);
// TMPro.TMP_TextEventHandler/LinkSelectionEvent TMPro.TMP_TextEventHandler::get_onLinkSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * TMP_TextEventHandler_get_onLinkSelection_m221527467F0606DD3561E0FB0D7678AA8329AD5D (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>::Invoke(!0,!1,!2)
inline void UnityEvent_3_Invoke_m1353B454D2DBB8CD54B5380146A4BEE4A0888F64 (UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8 * __this, String_t* ___arg00, String_t* ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8 *, String_t*, String_t*, int32_t, const RuntimeMethod*))UnityEvent_3_Invoke_m491E2207B7E6F885A7C0B12846108363E8D9BCC4_gshared)(__this, ___arg00, ___arg11, ___arg22, method);
}
// System.Void TMPro.TMP_TextEventHandler/CharacterSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85 (CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler/SpriteSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052 (SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler/WordSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA (WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler/LineSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2 (LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler/LinkSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A (LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::.ctor()
inline void UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445 (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A *, const RuntimeMethod*))UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>::.ctor()
inline void UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713 (UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930 *, const RuntimeMethod*))UnityEvent_3__ctor_mDAFC5615641C9252BAA08BCCC90C90101C91603A_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>::.ctor()
inline void UnityEvent_3__ctor_m077EFE26C9D480C5A721A01FD53F1D3189FB407E (UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8 *, const RuntimeMethod*))UnityEvent_3__ctor_mF6A34E6243359342CE52C9E31132478CA9BA73AD_gshared)(__this, method);
}
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5 (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC (int32_t ___key0, const RuntimeMethod* method);
// System.Void TestServer::SendMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestServer_SendMessage_mD4251DD3312A0DE2300AEA1867DF6B4C61D3AE9D (TestServer_t2BCFFBF706DF6863D40446375403ED1EACA79879 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener__ctor_m2E1AEE3C98472DD2BB2439725CF0AF62505971B7 (TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___localaddr0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener_Start_m7F59BAC98F3819580CE5F2D911513D42FF21F101 (TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * __this, const RuntimeMethod* method);
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * TcpListener_AcceptTcpClient_mA55444BAE76E163D81C41D0D46D07F67662E48C2 (TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * __this, const RuntimeMethod* method);
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m2682D27AB50CD1CE4677C38D0720A302D582348D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void DataServer::RegisterDataSubscriber(System.String,DataServer/DataSubscriber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataServer_RegisterDataSubscriber_m376D297F2C83E305EF80B0BD7A18CFE1F29DB9DD (DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027 * __this, String_t* ___channel_id0, RuntimeObject* ___sb1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___separator0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365 (String_t* ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Char TMPro.TMP_DigitValidator::Validate(System.String&,System.Int32&,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TMP_DigitValidator_Validate_mD139A23C440A026E47FA8E3AD01AD6FEF7713C3D (TMP_DigitValidator_tD53B3EF123D04F923055895ED56555317D239AB5 * __this, String_t** ___text0, int32_t* ___pos1, Il2CppChar ___ch2, const RuntimeMethod* method)
{
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	int32_t G_B3_0 = 0;
	{
		// if (ch >= '0' && ch <= '9')
		Il2CppChar L_0 = ___ch2;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)48))))
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar L_1 = ___ch2;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// pos += 1;
		int32_t* L_3 = ___pos1;
		int32_t* L_4 = ___pos1;
		int32_t L_5 = *((int32_t*)L_4);
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		// return ch;
		Il2CppChar L_6 = ___ch2;
		V_1 = L_6;
		goto IL_0024;
	}

IL_0020:
	{
		// return (char)0;
		V_1 = 0;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		Il2CppChar L_7 = V_1;
		return L_7;
	}
}
// System.Void TMPro.TMP_DigitValidator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_DigitValidator__ctor_mF6477F5EB75EC15CD6B81ACD85271F854BABC5D6 (TMP_DigitValidator_tD53B3EF123D04F923055895ED56555317D239AB5 * __this, const RuntimeMethod* method)
{
	{
		TMP_InputValidator__ctor_m86416C378A2B37E7F1D40C4DF3E49CF41F39E13D(__this, /*hidden argument*/NULL);
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
// System.Char TMPro.TMP_PhoneNumberValidator::Validate(System.String&,System.Int32&,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TMP_PhoneNumberValidator_Validate_mCA5EA200223A9F224F2F4DBD306DAE038C71A35F (TMP_PhoneNumberValidator_t7EB41CFDB7C6AA586BF5AF04151FC2228F565BD2 * __this, String_t** ___text0, int32_t* ___pos1, Il2CppChar ___ch2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_PhoneNumberValidator_Validate_mCA5EA200223A9F224F2F4DBD306DAE038C71A35F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B3_0 = 0;
	{
		// Debug.Log("Trying to validate...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral75593744E3F137A0C620299F6F16A30F686FA876, /*hidden argument*/NULL);
		// if (ch < '0' && ch > '9') return (char)0;
		Il2CppChar L_0 = ___ch2;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)48))))
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar L_1 = ___ch2;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)((int32_t)57)))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (ch < '0' && ch > '9') return (char)0;
		V_2 = 0;
		goto IL_0285;
	}

IL_0024:
	{
		// int length = text.Length;
		String_t** L_3 = ___text0;
		String_t* L_4 = *((String_t**)L_3);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// for (int i = 0; i < length + 1; i++)
		V_3 = 0;
		goto IL_0272;
	}

IL_0033:
	{
		// switch (i)
		int32_t L_6 = V_3;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_00c2;
			}
			case 3:
			{
				goto IL_00e4;
			}
			case 4:
			{
				goto IL_010b;
			}
			case 5:
			{
				goto IL_0132;
			}
			case 6:
			{
				goto IL_0159;
			}
			case 7:
			{
				goto IL_017b;
			}
			case 8:
			{
				goto IL_019d;
			}
			case 9:
			{
				goto IL_01c5;
			}
			case 10:
			{
				goto IL_01ed;
			}
			case 11:
			{
				goto IL_020d;
			}
			case 12:
			{
				goto IL_022d;
			}
			case 13:
			{
				goto IL_024d;
			}
		}
	}
	{
		goto IL_026d;
	}

IL_007b:
	{
		// if (i == length)
		int32_t L_8 = V_3;
		int32_t L_9 = V_0;
		V_5 = (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0098;
		}
	}
	{
		// text = "(" + ch;
		String_t** L_11 = ___text0;
		String_t* L_12 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40, L_12, /*hidden argument*/NULL);
		*((RuntimeObject **)L_11) = (RuntimeObject *)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)L_13);
	}

IL_0098:
	{
		// pos = 2;
		int32_t* L_14 = ___pos1;
		*((int32_t*)L_14) = (int32_t)2;
		// break;
		goto IL_026d;
	}

IL_00a0:
	{
		// if (i == length)
		int32_t L_15 = V_3;
		int32_t L_16 = V_0;
		V_6 = (bool)((((int32_t)L_15) == ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		// text += ch;
		String_t** L_18 = ___text0;
		String_t** L_19 = ___text0;
		String_t* L_20 = *((String_t**)L_19);
		String_t* L_21 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_22 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_20, L_21, /*hidden argument*/NULL);
		*((RuntimeObject **)L_18) = (RuntimeObject *)L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_18, (void*)(RuntimeObject *)L_22);
	}

IL_00ba:
	{
		// pos = 2;
		int32_t* L_23 = ___pos1;
		*((int32_t*)L_23) = (int32_t)2;
		// break;
		goto IL_026d;
	}

IL_00c2:
	{
		// if (i == length)
		int32_t L_24 = V_3;
		int32_t L_25 = V_0;
		V_7 = (bool)((((int32_t)L_24) == ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00dc;
		}
	}
	{
		// text += ch;
		String_t** L_27 = ___text0;
		String_t** L_28 = ___text0;
		String_t* L_29 = *((String_t**)L_28);
		String_t* L_30 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_31 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_29, L_30, /*hidden argument*/NULL);
		*((RuntimeObject **)L_27) = (RuntimeObject *)L_31;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_27, (void*)(RuntimeObject *)L_31);
	}

IL_00dc:
	{
		// pos = 3;
		int32_t* L_32 = ___pos1;
		*((int32_t*)L_32) = (int32_t)3;
		// break;
		goto IL_026d;
	}

IL_00e4:
	{
		// if (i == length)
		int32_t L_33 = V_3;
		int32_t L_34 = V_0;
		V_8 = (bool)((((int32_t)L_33) == ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_0103;
		}
	}
	{
		// text += ch + ") ";
		String_t** L_36 = ___text0;
		String_t** L_37 = ___text0;
		String_t* L_38 = *((String_t**)L_37);
		String_t* L_39 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_40 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_38, L_39, _stringLiteral3E2B500817A96FA5BAECB12EAFF42205003D74E6, /*hidden argument*/NULL);
		*((RuntimeObject **)L_36) = (RuntimeObject *)L_40;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_36, (void*)(RuntimeObject *)L_40);
	}

IL_0103:
	{
		// pos = 6;
		int32_t* L_41 = ___pos1;
		*((int32_t*)L_41) = (int32_t)6;
		// break;
		goto IL_026d;
	}

IL_010b:
	{
		// if (i == length)
		int32_t L_42 = V_3;
		int32_t L_43 = V_0;
		V_9 = (bool)((((int32_t)L_42) == ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_012a;
		}
	}
	{
		// text += ") " + ch;
		String_t** L_45 = ___text0;
		String_t** L_46 = ___text0;
		String_t* L_47 = *((String_t**)L_46);
		String_t* L_48 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_49 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_47, _stringLiteral3E2B500817A96FA5BAECB12EAFF42205003D74E6, L_48, /*hidden argument*/NULL);
		*((RuntimeObject **)L_45) = (RuntimeObject *)L_49;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_45, (void*)(RuntimeObject *)L_49);
	}

IL_012a:
	{
		// pos = 7;
		int32_t* L_50 = ___pos1;
		*((int32_t*)L_50) = (int32_t)7;
		// break;
		goto IL_026d;
	}

IL_0132:
	{
		// if (i == length)
		int32_t L_51 = V_3;
		int32_t L_52 = V_0;
		V_10 = (bool)((((int32_t)L_51) == ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_10;
		if (!L_53)
		{
			goto IL_0151;
		}
	}
	{
		// text += " " + ch;
		String_t** L_54 = ___text0;
		String_t** L_55 = ___text0;
		String_t* L_56 = *((String_t**)L_55);
		String_t* L_57 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_58 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_56, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_57, /*hidden argument*/NULL);
		*((RuntimeObject **)L_54) = (RuntimeObject *)L_58;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_54, (void*)(RuntimeObject *)L_58);
	}

IL_0151:
	{
		// pos = 7;
		int32_t* L_59 = ___pos1;
		*((int32_t*)L_59) = (int32_t)7;
		// break;
		goto IL_026d;
	}

IL_0159:
	{
		// if (i == length)
		int32_t L_60 = V_3;
		int32_t L_61 = V_0;
		V_11 = (bool)((((int32_t)L_60) == ((int32_t)L_61))? 1 : 0);
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0173;
		}
	}
	{
		// text += ch;
		String_t** L_63 = ___text0;
		String_t** L_64 = ___text0;
		String_t* L_65 = *((String_t**)L_64);
		String_t* L_66 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_67 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_65, L_66, /*hidden argument*/NULL);
		*((RuntimeObject **)L_63) = (RuntimeObject *)L_67;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_63, (void*)(RuntimeObject *)L_67);
	}

IL_0173:
	{
		// pos = 7;
		int32_t* L_68 = ___pos1;
		*((int32_t*)L_68) = (int32_t)7;
		// break;
		goto IL_026d;
	}

IL_017b:
	{
		// if (i == length)
		int32_t L_69 = V_3;
		int32_t L_70 = V_0;
		V_12 = (bool)((((int32_t)L_69) == ((int32_t)L_70))? 1 : 0);
		bool L_71 = V_12;
		if (!L_71)
		{
			goto IL_0195;
		}
	}
	{
		// text += ch;
		String_t** L_72 = ___text0;
		String_t** L_73 = ___text0;
		String_t* L_74 = *((String_t**)L_73);
		String_t* L_75 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_76 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_74, L_75, /*hidden argument*/NULL);
		*((RuntimeObject **)L_72) = (RuntimeObject *)L_76;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_72, (void*)(RuntimeObject *)L_76);
	}

IL_0195:
	{
		// pos = 8;
		int32_t* L_77 = ___pos1;
		*((int32_t*)L_77) = (int32_t)8;
		// break;
		goto IL_026d;
	}

IL_019d:
	{
		// if (i == length)
		int32_t L_78 = V_3;
		int32_t L_79 = V_0;
		V_13 = (bool)((((int32_t)L_78) == ((int32_t)L_79))? 1 : 0);
		bool L_80 = V_13;
		if (!L_80)
		{
			goto IL_01bc;
		}
	}
	{
		// text += ch + "-";
		String_t** L_81 = ___text0;
		String_t** L_82 = ___text0;
		String_t* L_83 = *((String_t**)L_82);
		String_t* L_84 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_85 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_83, L_84, _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9, /*hidden argument*/NULL);
		*((RuntimeObject **)L_81) = (RuntimeObject *)L_85;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_81, (void*)(RuntimeObject *)L_85);
	}

IL_01bc:
	{
		// pos = 10;
		int32_t* L_86 = ___pos1;
		*((int32_t*)L_86) = (int32_t)((int32_t)10);
		// break;
		goto IL_026d;
	}

IL_01c5:
	{
		// if (i == length)
		int32_t L_87 = V_3;
		int32_t L_88 = V_0;
		V_14 = (bool)((((int32_t)L_87) == ((int32_t)L_88))? 1 : 0);
		bool L_89 = V_14;
		if (!L_89)
		{
			goto IL_01e4;
		}
	}
	{
		// text += "-" + ch;
		String_t** L_90 = ___text0;
		String_t** L_91 = ___text0;
		String_t* L_92 = *((String_t**)L_91);
		String_t* L_93 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_94 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_92, _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9, L_93, /*hidden argument*/NULL);
		*((RuntimeObject **)L_90) = (RuntimeObject *)L_94;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_90, (void*)(RuntimeObject *)L_94);
	}

IL_01e4:
	{
		// pos = 11;
		int32_t* L_95 = ___pos1;
		*((int32_t*)L_95) = (int32_t)((int32_t)11);
		// break;
		goto IL_026d;
	}

IL_01ed:
	{
		// if (i == length)
		int32_t L_96 = V_3;
		int32_t L_97 = V_0;
		V_15 = (bool)((((int32_t)L_96) == ((int32_t)L_97))? 1 : 0);
		bool L_98 = V_15;
		if (!L_98)
		{
			goto IL_0207;
		}
	}
	{
		// text += ch;
		String_t** L_99 = ___text0;
		String_t** L_100 = ___text0;
		String_t* L_101 = *((String_t**)L_100);
		String_t* L_102 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_103 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_101, L_102, /*hidden argument*/NULL);
		*((RuntimeObject **)L_99) = (RuntimeObject *)L_103;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_99, (void*)(RuntimeObject *)L_103);
	}

IL_0207:
	{
		// pos = 11;
		int32_t* L_104 = ___pos1;
		*((int32_t*)L_104) = (int32_t)((int32_t)11);
		// break;
		goto IL_026d;
	}

IL_020d:
	{
		// if (i == length)
		int32_t L_105 = V_3;
		int32_t L_106 = V_0;
		V_16 = (bool)((((int32_t)L_105) == ((int32_t)L_106))? 1 : 0);
		bool L_107 = V_16;
		if (!L_107)
		{
			goto IL_0227;
		}
	}
	{
		// text += ch;
		String_t** L_108 = ___text0;
		String_t** L_109 = ___text0;
		String_t* L_110 = *((String_t**)L_109);
		String_t* L_111 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_112 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_110, L_111, /*hidden argument*/NULL);
		*((RuntimeObject **)L_108) = (RuntimeObject *)L_112;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_108, (void*)(RuntimeObject *)L_112);
	}

IL_0227:
	{
		// pos = 12;
		int32_t* L_113 = ___pos1;
		*((int32_t*)L_113) = (int32_t)((int32_t)12);
		// break;
		goto IL_026d;
	}

IL_022d:
	{
		// if (i == length)
		int32_t L_114 = V_3;
		int32_t L_115 = V_0;
		V_17 = (bool)((((int32_t)L_114) == ((int32_t)L_115))? 1 : 0);
		bool L_116 = V_17;
		if (!L_116)
		{
			goto IL_0247;
		}
	}
	{
		// text += ch;
		String_t** L_117 = ___text0;
		String_t** L_118 = ___text0;
		String_t* L_119 = *((String_t**)L_118);
		String_t* L_120 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_121 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_119, L_120, /*hidden argument*/NULL);
		*((RuntimeObject **)L_117) = (RuntimeObject *)L_121;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_117, (void*)(RuntimeObject *)L_121);
	}

IL_0247:
	{
		// pos = 13;
		int32_t* L_122 = ___pos1;
		*((int32_t*)L_122) = (int32_t)((int32_t)13);
		// break;
		goto IL_026d;
	}

IL_024d:
	{
		// if (i == length)
		int32_t L_123 = V_3;
		int32_t L_124 = V_0;
		V_18 = (bool)((((int32_t)L_123) == ((int32_t)L_124))? 1 : 0);
		bool L_125 = V_18;
		if (!L_125)
		{
			goto IL_0267;
		}
	}
	{
		// text += ch;
		String_t** L_126 = ___text0;
		String_t** L_127 = ___text0;
		String_t* L_128 = *((String_t**)L_127);
		String_t* L_129 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_130 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_128, L_129, /*hidden argument*/NULL);
		*((RuntimeObject **)L_126) = (RuntimeObject *)L_130;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_126, (void*)(RuntimeObject *)L_130);
	}

IL_0267:
	{
		// pos = 14;
		int32_t* L_131 = ___pos1;
		*((int32_t*)L_131) = (int32_t)((int32_t)14);
		// break;
		goto IL_026d;
	}

IL_026d:
	{
		// for (int i = 0; i < length + 1; i++)
		int32_t L_132 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)1));
	}

IL_0272:
	{
		// for (int i = 0; i < length + 1; i++)
		int32_t L_133 = V_3;
		int32_t L_134 = V_0;
		V_19 = (bool)((((int32_t)L_133) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)1))))? 1 : 0);
		bool L_135 = V_19;
		if (L_135)
		{
			goto IL_0033;
		}
	}
	{
		// return ch;
		Il2CppChar L_136 = ___ch2;
		V_2 = L_136;
		goto IL_0285;
	}

IL_0285:
	{
		// }
		Il2CppChar L_137 = V_2;
		return L_137;
	}
}
// System.Void TMPro.TMP_PhoneNumberValidator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_PhoneNumberValidator__ctor_mBB38130850945A40631821275F07C19720E0C55E (TMP_PhoneNumberValidator_t7EB41CFDB7C6AA586BF5AF04151FC2228F565BD2 * __this, const RuntimeMethod* method)
{
	{
		TMP_InputValidator__ctor_m86416C378A2B37E7F1D40C4DF3E49CF41F39E13D(__this, /*hidden argument*/NULL);
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
// TMPro.TMP_TextEventHandler_CharacterSelectionEvent TMPro.TMP_TextEventHandler::get_onCharacterSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * TMP_TextEventHandler_get_onCharacterSelection_mF70DBE3FF43B3D6E64053D37A2FADF802533E1FF (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * V_0 = NULL;
	{
		// get { return m_OnCharacterSelection; }
		CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * L_0 = __this->get_m_OnCharacterSelection_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_OnCharacterSelection; }
		CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * L_1 = V_0;
		return L_1;
	}
}
// System.Void TMPro.TMP_TextEventHandler::set_onCharacterSelection(TMPro.TMP_TextEventHandler_CharacterSelectionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_set_onCharacterSelection_m237C99FE66E4E16518DAE68FF9CBF1A52E816AD2 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_OnCharacterSelection = value; }
		CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * L_0 = ___value0;
		__this->set_m_OnCharacterSelection_4(L_0);
		// set { m_OnCharacterSelection = value; }
		return;
	}
}
// TMPro.TMP_TextEventHandler_SpriteSelectionEvent TMPro.TMP_TextEventHandler::get_onSpriteSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * TMP_TextEventHandler_get_onSpriteSelection_m395603314F8CD073897DCAB5513270C6ADD94BF4 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * V_0 = NULL;
	{
		// get { return m_OnSpriteSelection; }
		SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * L_0 = __this->get_m_OnSpriteSelection_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_OnSpriteSelection; }
		SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * L_1 = V_0;
		return L_1;
	}
}
// System.Void TMPro.TMP_TextEventHandler::set_onSpriteSelection(TMPro.TMP_TextEventHandler_SpriteSelectionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_set_onSpriteSelection_mAAE4B440E34EE5736D43D6A8A7D3A7CEE0503D69 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_OnSpriteSelection = value; }
		SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * L_0 = ___value0;
		__this->set_m_OnSpriteSelection_5(L_0);
		// set { m_OnSpriteSelection = value; }
		return;
	}
}
// TMPro.TMP_TextEventHandler_WordSelectionEvent TMPro.TMP_TextEventHandler::get_onWordSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * TMP_TextEventHandler_get_onWordSelection_m415F4479934B1739658356B47DF4C2E90496AE2E (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * V_0 = NULL;
	{
		// get { return m_OnWordSelection; }
		WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * L_0 = __this->get_m_OnWordSelection_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_OnWordSelection; }
		WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * L_1 = V_0;
		return L_1;
	}
}
// System.Void TMPro.TMP_TextEventHandler::set_onWordSelection(TMPro.TMP_TextEventHandler_WordSelectionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_set_onWordSelection_m6062C0AF2FDD8752DC4A75663EE8E5C128504698 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_OnWordSelection = value; }
		WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * L_0 = ___value0;
		__this->set_m_OnWordSelection_6(L_0);
		// set { m_OnWordSelection = value; }
		return;
	}
}
// TMPro.TMP_TextEventHandler_LineSelectionEvent TMPro.TMP_TextEventHandler::get_onLineSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * TMP_TextEventHandler_get_onLineSelection_m8E724700CC5DF1197B103F87156576A52F62AB2B (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * V_0 = NULL;
	{
		// get { return m_OnLineSelection; }
		LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * L_0 = __this->get_m_OnLineSelection_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_OnLineSelection; }
		LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * L_1 = V_0;
		return L_1;
	}
}
// System.Void TMPro.TMP_TextEventHandler::set_onLineSelection(TMPro.TMP_TextEventHandler_LineSelectionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_set_onLineSelection_m1A8E37D2069EF684EF930D4F1ABE764AE17D9A62 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_OnLineSelection = value; }
		LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * L_0 = ___value0;
		__this->set_m_OnLineSelection_7(L_0);
		// set { m_OnLineSelection = value; }
		return;
	}
}
// TMPro.TMP_TextEventHandler_LinkSelectionEvent TMPro.TMP_TextEventHandler::get_onLinkSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * TMP_TextEventHandler_get_onLinkSelection_m221527467F0606DD3561E0FB0D7678AA8329AD5D (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * V_0 = NULL;
	{
		// get { return m_OnLinkSelection; }
		LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * L_0 = __this->get_m_OnLinkSelection_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_OnLinkSelection; }
		LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * L_1 = V_0;
		return L_1;
	}
}
// System.Void TMPro.TMP_TextEventHandler::set_onLinkSelection(TMPro.TMP_TextEventHandler_LinkSelectionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_set_onLinkSelection_m1376CC9B70177B0C25ACEDF91D5B94BC4B8CF71D (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_OnLinkSelection = value; }
		LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * L_0 = ___value0;
		__this->set_m_OnLinkSelection_8(L_0);
		// set { m_OnLinkSelection = value; }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_Awake_m9A353CC9705A9E824A60C3D2D026A7FD96B41D74 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_Awake_m9A353CC9705A9E824A60C3D2D026A7FD96B41D74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// m_TextComponent = gameObject.GetComponent<TMP_Text>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_1 = GameObject_GetComponent_TisTMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_mAE16231F6DB7467B8D9449A2E3E9AC5A821EC4AE(L_0, /*hidden argument*/GameObject_GetComponent_TisTMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_mAE16231F6DB7467B8D9449A2E3E9AC5A821EC4AE_RuntimeMethod_var);
		__this->set_m_TextComponent_9(L_1);
		// if (m_TextComponent.GetType() == typeof(TextMeshProUGUI))
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_2 = __this->get_m_TextComponent_9();
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		bool L_6 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0083;
		}
	}
	{
		// m_Canvas = gameObject.GetComponentInParent<Canvas>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_9 = GameObject_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m3F4A66E37DA71D5AF43D8A63F8C2D698003572F0(L_8, /*hidden argument*/GameObject_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m3F4A66E37DA71D5AF43D8A63F8C2D698003572F0_RuntimeMethod_var);
		__this->set_m_Canvas_11(L_9);
		// if (m_Canvas != null)
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_10 = __this->get_m_Canvas_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_11;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		// if (m_Canvas.renderMode == RenderMode.ScreenSpaceOverlay)
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_13 = __this->get_m_Canvas_11();
		NullCheck(L_13);
		int32_t L_14 = Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8(L_13, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_006e;
		}
	}
	{
		// m_Camera = null;
		__this->set_m_Camera_10((Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *)NULL);
		goto IL_007f;
	}

IL_006e:
	{
		// m_Camera = m_Canvas.worldCamera;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_16 = __this->get_m_Canvas_11();
		NullCheck(L_16);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_17 = Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409(L_16, /*hidden argument*/NULL);
		__this->set_m_Camera_10(L_17);
	}

IL_007f:
	{
	}

IL_0080:
	{
		goto IL_0090;
	}

IL_0083:
	{
		// m_Camera = Camera.main;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_18 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		__this->set_m_Camera_10(L_18);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_LateUpdate_m2F3241223A91F9C50E11B27F67BA2B6D19328B72 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_LateUpdate_m2F3241223A91F9C50E11B27F67BA2B6D19328B72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  V_12;
	memset((&V_12), 0, sizeof(V_12));
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_13 = NULL;
	String_t* V_14 = NULL;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t G_B4_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B29_0 = 0;
	{
		// if (TMP_TextUtilities.IsIntersectingRectTransform(m_TextComponent.rectTransform, Input.mousePosition, m_Camera))
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_0 = __this->get_m_TextComponent_9();
		NullCheck(L_0);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = TMP_Text_get_rectTransform_m7D5ABF7B98E93576BDA8F7E1A2A7415284D4F05E(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = __this->get_m_Camera_10();
		IL2CPP_RUNTIME_CLASS_INIT(TMP_TextUtilities_t0C64120E363A3DA0CB859D321248294080076A45_il2cpp_TypeInfo_var);
		bool L_4 = TMP_TextUtilities_IsIntersectingRectTransform_m673D86304DB8BA8F23DB5668BB9B9B4BC103E4F1(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0299;
		}
	}
	{
		// int charIndex = TMP_TextUtilities.FindIntersectingCharacter(m_TextComponent, Input.mousePosition, m_Camera, true);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_6 = __this->get_m_TextComponent_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = __this->get_m_Camera_10();
		IL2CPP_RUNTIME_CLASS_INIT(TMP_TextUtilities_t0C64120E363A3DA0CB859D321248294080076A45_il2cpp_TypeInfo_var);
		int32_t L_9 = TMP_TextUtilities_FindIntersectingCharacter_mE3DF825E1B004FB99F0795C9175F4BEE95C4A152(L_6, L_7, L_8, (bool)1, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (charIndex != -1 && charIndex != m_lastCharIndex)
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_m_lastCharIndex_13();
		G_B4_0 = ((((int32_t)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004f;
	}

IL_004e:
	{
		G_B4_0 = 0;
	}

IL_004f:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_00dc;
		}
	}
	{
		// m_lastCharIndex = charIndex;
		int32_t L_14 = V_1;
		__this->set_m_lastCharIndex_13(L_14);
		// TMP_TextElementType elementType = m_TextComponent.textInfo.characterInfo[charIndex].elementType;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_15 = __this->get_m_TextComponent_9();
		NullCheck(L_15);
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_16 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_17 = L_16->get_characterInfo_11();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->get_elementType_3();
		V_6 = L_19;
		// if (elementType == TMP_TextElementType.Character)
		int32_t L_20 = V_6;
		V_7 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_00ad;
		}
	}
	{
		// SendOnCharacterSelection(m_TextComponent.textInfo.characterInfo[charIndex].character, charIndex);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_22 = __this->get_m_TextComponent_9();
		NullCheck(L_22);
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_23 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_24 = L_23->get_characterInfo_11();
		int32_t L_25 = V_1;
		NullCheck(L_24);
		Il2CppChar L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_character_0();
		int32_t L_27 = V_1;
		TMP_TextEventHandler_SendOnCharacterSelection_mBC44C107A6FB8C43F7C6629D4A15CA85471A28B2(__this, L_26, L_27, /*hidden argument*/NULL);
		goto IL_00db;
	}

IL_00ad:
	{
		// else if (elementType == TMP_TextElementType.Sprite)
		int32_t L_28 = V_6;
		V_8 = (bool)((((int32_t)L_28) == ((int32_t)1))? 1 : 0);
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00db;
		}
	}
	{
		// SendOnSpriteSelection(m_TextComponent.textInfo.characterInfo[charIndex].character, charIndex);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_30 = __this->get_m_TextComponent_9();
		NullCheck(L_30);
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_31 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_32 = L_31->get_characterInfo_11();
		int32_t L_33 = V_1;
		NullCheck(L_32);
		Il2CppChar L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->get_character_0();
		int32_t L_35 = V_1;
		TMP_TextEventHandler_SendOnSpriteSelection_mEF24BCE06B0CE4450B6AE9561EC4B5052DAF00F6(__this, L_34, L_35, /*hidden argument*/NULL);
	}

IL_00db:
	{
	}

IL_00dc:
	{
		// int wordIndex = TMP_TextUtilities.FindIntersectingWord(m_TextComponent, Input.mousePosition, m_Camera);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_36 = __this->get_m_TextComponent_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_38 = __this->get_m_Camera_10();
		IL2CPP_RUNTIME_CLASS_INIT(TMP_TextUtilities_t0C64120E363A3DA0CB859D321248294080076A45_il2cpp_TypeInfo_var);
		int32_t L_39 = TMP_TextUtilities_FindIntersectingWord_m3D600FFD979C6F4CA0E68E476274DC52792A6E27(L_36, L_37, L_38, /*hidden argument*/NULL);
		V_2 = L_39;
		// if (wordIndex != -1 && wordIndex != m_lastWordIndex)
		int32_t L_40 = V_2;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_41 = V_2;
		int32_t L_42 = __this->get_m_lastWordIndex_14();
		G_B13_0 = ((((int32_t)((((int32_t)L_41) == ((int32_t)L_42))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0106;
	}

IL_0105:
	{
		G_B13_0 = 0;
	}

IL_0106:
	{
		V_9 = (bool)G_B13_0;
		bool L_43 = V_9;
		if (!L_43)
		{
			goto IL_0149;
		}
	}
	{
		// m_lastWordIndex = wordIndex;
		int32_t L_44 = V_2;
		__this->set_m_lastWordIndex_14(L_44);
		// TMP_WordInfo wInfo = m_TextComponent.textInfo.wordInfo[wordIndex];
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_45 = __this->get_m_TextComponent_9();
		NullCheck(L_45);
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_46 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09* L_47 = L_46->get_wordInfo_12();
		int32_t L_48 = V_2;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_10 = L_50;
		// SendOnWordSelection(wInfo.GetWord(), wInfo.firstCharacterIndex, wInfo.characterCount);
		String_t* L_51 = TMP_WordInfo_GetWord_m45402062300ED4455F6C6F5E96E42C4904E18133((TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90 *)(&V_10), /*hidden argument*/NULL);
		TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  L_52 = V_10;
		int32_t L_53 = L_52.get_firstCharacterIndex_1();
		TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  L_54 = V_10;
		int32_t L_55 = L_54.get_characterCount_3();
		TMP_TextEventHandler_SendOnWordSelection_m7C4D266070EE2ADC66BCCFD50EB74FEB4923B77E(__this, L_51, L_53, L_55, /*hidden argument*/NULL);
	}

IL_0149:
	{
		// int lineIndex = TMP_TextUtilities.FindIntersectingLine(m_TextComponent, Input.mousePosition, m_Camera);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_56 = __this->get_m_TextComponent_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_58 = __this->get_m_Camera_10();
		IL2CPP_RUNTIME_CLASS_INIT(TMP_TextUtilities_t0C64120E363A3DA0CB859D321248294080076A45_il2cpp_TypeInfo_var);
		int32_t L_59 = TMP_TextUtilities_FindIntersectingLine_m382D73F58E10E0252FE311C164264E8564F9AE73(L_56, L_57, L_58, /*hidden argument*/NULL);
		V_3 = L_59;
		// if (lineIndex != -1 && lineIndex != m_lastLineIndex)
		int32_t L_60 = V_3;
		if ((((int32_t)L_60) == ((int32_t)(-1))))
		{
			goto IL_0172;
		}
	}
	{
		int32_t L_61 = V_3;
		int32_t L_62 = __this->get_m_lastLineIndex_15();
		G_B18_0 = ((((int32_t)((((int32_t)L_61) == ((int32_t)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0173;
	}

IL_0172:
	{
		G_B18_0 = 0;
	}

IL_0173:
	{
		V_11 = (bool)G_B18_0;
		bool L_63 = V_11;
		if (!L_63)
		{
			goto IL_022b;
		}
	}
	{
		// m_lastLineIndex = lineIndex;
		int32_t L_64 = V_3;
		__this->set_m_lastLineIndex_15(L_64);
		// TMP_LineInfo lineInfo = m_TextComponent.textInfo.lineInfo[lineIndex];
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_65 = __this->get_m_TextComponent_9();
		NullCheck(L_65);
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_66 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C* L_67 = L_66->get_lineInfo_14();
		int32_t L_68 = V_3;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_12 = L_70;
		// char[] buffer = new char[lineInfo.characterCount];
		TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  L_71 = V_12;
		int32_t L_72 = L_71.get_characterCount_1();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_73 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)L_72);
		V_13 = L_73;
		// for (int i = 0; i < lineInfo.characterCount && i < m_TextComponent.textInfo.characterInfo.Length; i++)
		V_15 = 0;
		goto IL_01e0;
	}

IL_01af:
	{
		// buffer[i] = m_TextComponent.textInfo.characterInfo[i + lineInfo.firstCharacterIndex].character;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_74 = V_13;
		int32_t L_75 = V_15;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_76 = __this->get_m_TextComponent_9();
		NullCheck(L_76);
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_77 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78(L_76, /*hidden argument*/NULL);
		NullCheck(L_77);
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_78 = L_77->get_characterInfo_11();
		int32_t L_79 = V_15;
		TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  L_80 = V_12;
		int32_t L_81 = L_80.get_firstCharacterIndex_5();
		NullCheck(L_78);
		Il2CppChar L_82 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)L_81)))))->get_character_0();
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (Il2CppChar)L_82);
		// for (int i = 0; i < lineInfo.characterCount && i < m_TextComponent.textInfo.characterInfo.Length; i++)
		int32_t L_83 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
	}

IL_01e0:
	{
		// for (int i = 0; i < lineInfo.characterCount && i < m_TextComponent.textInfo.characterInfo.Length; i++)
		int32_t L_84 = V_15;
		TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  L_85 = V_12;
		int32_t L_86 = L_85.get_characterCount_1();
		if ((((int32_t)L_84) >= ((int32_t)L_86)))
		{
			goto IL_0203;
		}
	}
	{
		int32_t L_87 = V_15;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_88 = __this->get_m_TextComponent_9();
		NullCheck(L_88);
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_89 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_90 = L_89->get_characterInfo_11();
		NullCheck(L_90);
		G_B24_0 = ((((int32_t)L_87) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_90)->max_length))))))? 1 : 0);
		goto IL_0204;
	}

IL_0203:
	{
		G_B24_0 = 0;
	}

IL_0204:
	{
		V_16 = (bool)G_B24_0;
		bool L_91 = V_16;
		if (L_91)
		{
			goto IL_01af;
		}
	}
	{
		// string lineText = new string(buffer);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_92 = V_13;
		String_t* L_93 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_92, /*hidden argument*/NULL);
		V_14 = L_93;
		// SendOnLineSelection(lineText, lineInfo.firstCharacterIndex, lineInfo.characterCount);
		String_t* L_94 = V_14;
		TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  L_95 = V_12;
		int32_t L_96 = L_95.get_firstCharacterIndex_5();
		TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  L_97 = V_12;
		int32_t L_98 = L_97.get_characterCount_1();
		TMP_TextEventHandler_SendOnLineSelection_mAAF4AF44929D0C9FD73C89E5266028908074AEB1(__this, L_94, L_96, L_98, /*hidden argument*/NULL);
	}

IL_022b:
	{
		// int linkIndex = TMP_TextUtilities.FindIntersectingLink(m_TextComponent, Input.mousePosition, m_Camera);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_99 = __this->get_m_TextComponent_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_100 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_101 = __this->get_m_Camera_10();
		IL2CPP_RUNTIME_CLASS_INIT(TMP_TextUtilities_t0C64120E363A3DA0CB859D321248294080076A45_il2cpp_TypeInfo_var);
		int32_t L_102 = TMP_TextUtilities_FindIntersectingLink_mC8275AA5E208929B1DB6170DEA09CA8D82F47020(L_99, L_100, L_101, /*hidden argument*/NULL);
		V_4 = L_102;
		// if (linkIndex != -1 && linkIndex != m_selectedLink)
		int32_t L_103 = V_4;
		if ((((int32_t)L_103) == ((int32_t)(-1))))
		{
			goto IL_0257;
		}
	}
	{
		int32_t L_104 = V_4;
		int32_t L_105 = __this->get_m_selectedLink_12();
		G_B29_0 = ((((int32_t)((((int32_t)L_104) == ((int32_t)L_105))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0258;
	}

IL_0257:
	{
		G_B29_0 = 0;
	}

IL_0258:
	{
		V_17 = (bool)G_B29_0;
		bool L_106 = V_17;
		if (!L_106)
		{
			goto IL_0298;
		}
	}
	{
		// m_selectedLink = linkIndex;
		int32_t L_107 = V_4;
		__this->set_m_selectedLink_12(L_107);
		// TMP_LinkInfo linkInfo = m_TextComponent.textInfo.linkInfo[linkIndex];
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_108 = __this->get_m_TextComponent_9();
		NullCheck(L_108);
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_109 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78(L_108, /*hidden argument*/NULL);
		NullCheck(L_109);
		TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D* L_110 = L_109->get_linkInfo_13();
		int32_t L_111 = V_4;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_18 = L_113;
		// SendOnLinkSelection(linkInfo.GetLinkID(), linkInfo.GetLinkText(), linkIndex);
		String_t* L_114 = TMP_LinkInfo_GetLinkID_m97C3C9028EF1FA90BF6315BFDF42AAD3A7463B53((TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 *)(&V_18), /*hidden argument*/NULL);
		String_t* L_115 = TMP_LinkInfo_GetLinkText_m7C78982CD398EBC8AF2303E0A665A76C26FE0352((TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 *)(&V_18), /*hidden argument*/NULL);
		int32_t L_116 = V_4;
		TMP_TextEventHandler_SendOnLinkSelection_m082D12F7D044456D8514E4D31944C6900F8262C0(__this, L_114, L_115, L_116, /*hidden argument*/NULL);
	}

IL_0298:
	{
	}

IL_0299:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_OnPointerEnter_m1827A9D3F08839023DE71352202FE5F744E150EF (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_OnPointerExit_m788B93D2C3B54BCF09475675B274BCB047D449FB (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::SendOnCharacterSelection(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnCharacterSelection_mBC44C107A6FB8C43F7C6629D4A15CA85471A28B2 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, Il2CppChar ___character0, int32_t ___characterIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_SendOnCharacterSelection_mBC44C107A6FB8C43F7C6629D4A15CA85471A28B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (onCharacterSelection != null)
		CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * L_0 = TMP_TextEventHandler_get_onCharacterSelection_mF70DBE3FF43B3D6E64053D37A2FADF802533E1FF(__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((RuntimeObject*)(CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// onCharacterSelection.Invoke(character, characterIndex);
		CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * L_2 = TMP_TextEventHandler_get_onCharacterSelection_mF70DBE3FF43B3D6E64053D37A2FADF802533E1FF(__this, /*hidden argument*/NULL);
		Il2CppChar L_3 = ___character0;
		int32_t L_4 = ___characterIndex1;
		NullCheck(L_2);
		UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725(L_2, L_3, L_4, /*hidden argument*/UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::SendOnSpriteSelection(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnSpriteSelection_mEF24BCE06B0CE4450B6AE9561EC4B5052DAF00F6 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, Il2CppChar ___character0, int32_t ___characterIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_SendOnSpriteSelection_mEF24BCE06B0CE4450B6AE9561EC4B5052DAF00F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (onSpriteSelection != null)
		SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * L_0 = TMP_TextEventHandler_get_onSpriteSelection_m395603314F8CD073897DCAB5513270C6ADD94BF4(__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((RuntimeObject*)(SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// onSpriteSelection.Invoke(character, characterIndex);
		SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * L_2 = TMP_TextEventHandler_get_onSpriteSelection_m395603314F8CD073897DCAB5513270C6ADD94BF4(__this, /*hidden argument*/NULL);
		Il2CppChar L_3 = ___character0;
		int32_t L_4 = ___characterIndex1;
		NullCheck(L_2);
		UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725(L_2, L_3, L_4, /*hidden argument*/UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::SendOnWordSelection(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnWordSelection_m7C4D266070EE2ADC66BCCFD50EB74FEB4923B77E (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, String_t* ___word0, int32_t ___charIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_SendOnWordSelection_m7C4D266070EE2ADC66BCCFD50EB74FEB4923B77E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (onWordSelection != null)
		WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * L_0 = TMP_TextEventHandler_get_onWordSelection_m415F4479934B1739658356B47DF4C2E90496AE2E(__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((RuntimeObject*)(WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// onWordSelection.Invoke(word, charIndex, length);
		WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * L_2 = TMP_TextEventHandler_get_onWordSelection_m415F4479934B1739658356B47DF4C2E90496AE2E(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___word0;
		int32_t L_4 = ___charIndex1;
		int32_t L_5 = ___length2;
		NullCheck(L_2);
		UnityEvent_3_Invoke_m907D837057531F0AF1AC6E6501DFD9D3549A44AD(L_2, L_3, L_4, L_5, /*hidden argument*/UnityEvent_3_Invoke_m907D837057531F0AF1AC6E6501DFD9D3549A44AD_RuntimeMethod_var);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::SendOnLineSelection(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnLineSelection_mAAF4AF44929D0C9FD73C89E5266028908074AEB1 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, String_t* ___line0, int32_t ___charIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_SendOnLineSelection_mAAF4AF44929D0C9FD73C89E5266028908074AEB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (onLineSelection != null)
		LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * L_0 = TMP_TextEventHandler_get_onLineSelection_m8E724700CC5DF1197B103F87156576A52F62AB2B(__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((RuntimeObject*)(LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// onLineSelection.Invoke(line, charIndex, length);
		LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * L_2 = TMP_TextEventHandler_get_onLineSelection_m8E724700CC5DF1197B103F87156576A52F62AB2B(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___line0;
		int32_t L_4 = ___charIndex1;
		int32_t L_5 = ___length2;
		NullCheck(L_2);
		UnityEvent_3_Invoke_m907D837057531F0AF1AC6E6501DFD9D3549A44AD(L_2, L_3, L_4, L_5, /*hidden argument*/UnityEvent_3_Invoke_m907D837057531F0AF1AC6E6501DFD9D3549A44AD_RuntimeMethod_var);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::SendOnLinkSelection(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnLinkSelection_m082D12F7D044456D8514E4D31944C6900F8262C0 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, String_t* ___linkID0, String_t* ___linkText1, int32_t ___linkIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_SendOnLinkSelection_m082D12F7D044456D8514E4D31944C6900F8262C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (onLinkSelection != null)
		LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * L_0 = TMP_TextEventHandler_get_onLinkSelection_m221527467F0606DD3561E0FB0D7678AA8329AD5D(__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((RuntimeObject*)(LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// onLinkSelection.Invoke(linkID, linkText, linkIndex);
		LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * L_2 = TMP_TextEventHandler_get_onLinkSelection_m221527467F0606DD3561E0FB0D7678AA8329AD5D(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___linkID0;
		String_t* L_4 = ___linkText1;
		int32_t L_5 = ___linkIndex2;
		NullCheck(L_2);
		UnityEvent_3_Invoke_m1353B454D2DBB8CD54B5380146A4BEE4A0888F64(L_2, L_3, L_4, L_5, /*hidden argument*/UnityEvent_3_Invoke_m1353B454D2DBB8CD54B5380146A4BEE4A0888F64_RuntimeMethod_var);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler__ctor_mEA56AE9489B50CF5E5FC682AA18D1CE9AF8E1F8B (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler__ctor_mEA56AE9489B50CF5E5FC682AA18D1CE9AF8E1F8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private CharacterSelectionEvent m_OnCharacterSelection = new CharacterSelectionEvent();
		CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * L_0 = (CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 *)il2cpp_codegen_object_new(CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90_il2cpp_TypeInfo_var);
		CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85(L_0, /*hidden argument*/NULL);
		__this->set_m_OnCharacterSelection_4(L_0);
		// private SpriteSelectionEvent m_OnSpriteSelection = new SpriteSelectionEvent();
		SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * L_1 = (SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 *)il2cpp_codegen_object_new(SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32_il2cpp_TypeInfo_var);
		SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052(L_1, /*hidden argument*/NULL);
		__this->set_m_OnSpriteSelection_5(L_1);
		// private WordSelectionEvent m_OnWordSelection = new WordSelectionEvent();
		WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * L_2 = (WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 *)il2cpp_codegen_object_new(WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554_il2cpp_TypeInfo_var);
		WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA(L_2, /*hidden argument*/NULL);
		__this->set_m_OnWordSelection_6(L_2);
		// private LineSelectionEvent m_OnLineSelection = new LineSelectionEvent();
		LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * L_3 = (LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F *)il2cpp_codegen_object_new(LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F_il2cpp_TypeInfo_var);
		LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2(L_3, /*hidden argument*/NULL);
		__this->set_m_OnLineSelection_7(L_3);
		// private LinkSelectionEvent m_OnLinkSelection = new LinkSelectionEvent();
		LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * L_4 = (LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 *)il2cpp_codegen_object_new(LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8_il2cpp_TypeInfo_var);
		LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A(L_4, /*hidden argument*/NULL);
		__this->set_m_OnLinkSelection_8(L_4);
		// private int m_selectedLink = -1;
		__this->set_m_selectedLink_12((-1));
		// private int m_lastCharIndex = -1;
		__this->set_m_lastCharIndex_13((-1));
		// private int m_lastWordIndex = -1;
		__this->set_m_lastWordIndex_14((-1));
		// private int m_lastLineIndex = -1;
		__this->set_m_lastLineIndex_15((-1));
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
// System.Void TMPro.TMP_TextEventHandler_CharacterSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85 (CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445(__this, /*hidden argument*/UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_RuntimeMethod_var);
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
// System.Void TMPro.TMP_TextEventHandler_LineSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2 (LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713(__this, /*hidden argument*/UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713_RuntimeMethod_var);
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
// System.Void TMPro.TMP_TextEventHandler_LinkSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A (LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m077EFE26C9D480C5A721A01FD53F1D3189FB407E(__this, /*hidden argument*/UnityEvent_3__ctor_m077EFE26C9D480C5A721A01FD53F1D3189FB407E_RuntimeMethod_var);
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
// System.Void TMPro.TMP_TextEventHandler_SpriteSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052 (SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445(__this, /*hidden argument*/UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_RuntimeMethod_var);
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
// System.Void TMPro.TMP_TextEventHandler_WordSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA (WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713(__this, /*hidden argument*/UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713_RuntimeMethod_var);
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
// System.Void TestServer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestServer_Start_mCF3B2EDEAE8C52F55B0F1DED39E241E3409BC64C (TestServer_t2BCFFBF706DF6863D40446375403ED1EACA79879 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestServer_Start_mCF3B2EDEAE8C52F55B0F1DED39E241E3409BC64C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tcpListenerThread = new Thread(new ThreadStart(ListenForIncommingRequests));
		ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_0 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_0, __this, (intptr_t)((intptr_t)TestServer_ListenForIncommingRequests_m0A2A7D6C90BF8E5B29F910E923C3CC594B56B7D6_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_1 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
		Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_1, L_0, /*hidden argument*/NULL);
		__this->set_tcpListenerThread_5(L_1);
		// tcpListenerThread.IsBackground = true;
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_2 = __this->get_tcpListenerThread_5();
		NullCheck(L_2);
		Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39(L_2, (bool)1, /*hidden argument*/NULL);
		// tcpListenerThread.Start();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_3 = __this->get_tcpListenerThread_5();
		NullCheck(L_3);
		Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TestServer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestServer_Update_m6B85E78A6786623859A95E2E6B8E3D7FD0322B99 (TestServer_t2BCFFBF706DF6863D40446375403ED1EACA79879 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(((int32_t)32), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// SendMessage();
		TestServer_SendMessage_mD4251DD3312A0DE2300AEA1867DF6B4C61D3AE9D(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void TestServer::ListenForIncommingRequests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestServer_ListenForIncommingRequests_m0A2A7D6C90BF8E5B29F910E923C3CC594B56B7D6 (TestServer_t2BCFFBF706DF6863D40446375403ED1EACA79879 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestServer_ListenForIncommingRequests_m0A2A7D6C90BF8E5B29F910E923C3CC594B56B7D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * V_1 = NULL;
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * V_2 = NULL;
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	String_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// tcpListener = new TcpListener(IPAddress.Any, 50011);
			IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_0 = ((IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var))->get_Any_0();
			TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_1 = (TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE *)il2cpp_codegen_object_new(TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE_il2cpp_TypeInfo_var);
			TcpListener__ctor_m2E1AEE3C98472DD2BB2439725CF0AF62505971B7(L_1, L_0, ((int32_t)50011), /*hidden argument*/NULL);
			__this->set_tcpListener_4(L_1);
			// tcpListener.Start();
			TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_2 = __this->get_tcpListener_4();
			NullCheck(L_2);
			TcpListener_Start_m7F59BAC98F3819580CE5F2D911513D42FF21F101(L_2, /*hidden argument*/NULL);
			// Debug.Log("Server is listening");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral25480252187FBC97F906981317B1D385EAAFABBC, /*hidden argument*/NULL);
			// Byte[] bytes = new Byte[1024];
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
			V_0 = L_3;
			goto IL_00d0;
		}

IL_003e:
		{
			// using (connectedTcpClient = tcpListener.AcceptTcpClient())
			TcpListener_t23EA9DFFE7F84119440813E7F77A181C39BE08EE * L_4 = __this->get_tcpListener_4();
			NullCheck(L_4);
			TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_5 = TcpListener_AcceptTcpClient_mA55444BAE76E163D81C41D0D46D07F67662E48C2(L_4, /*hidden argument*/NULL);
			TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_6 = L_5;
			V_2 = L_6;
			__this->set_connectedTcpClient_6(L_6);
			TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_7 = V_2;
			V_1 = L_7;
		}

IL_0054:
		try
		{ // begin try (depth: 2)
			{
				// using (NetworkStream stream = connectedTcpClient.GetStream())
				TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_8 = __this->get_connectedTcpClient_6();
				NullCheck(L_8);
				NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_9 = TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B(L_8, /*hidden argument*/NULL);
				V_3 = L_9;
			}

IL_0061:
			try
			{ // begin try (depth: 3)
				{
					goto IL_009c;
				}

IL_0064:
				{
					// var incommingData = new byte[length];
					int32_t L_10 = V_4;
					ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_10);
					V_5 = L_11;
					// Array.Copy(bytes, 0, incommingData, 0, length);
					ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_0;
					ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_5;
					int32_t L_14 = V_4;
					Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_12, 0, (RuntimeArray *)(RuntimeArray *)L_13, 0, L_14, /*hidden argument*/NULL);
					// string clientMessage = Encoding.ASCII.GetString(incommingData);
					Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_15 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
					ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = V_5;
					NullCheck(L_15);
					String_t* L_17 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_15, L_16);
					V_6 = L_17;
					// Debug.Log("client message received as: " + clientMessage);
					String_t* L_18 = V_6;
					String_t* L_19 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralC37731DFDA099040F1ACF0900DBC4F801FD019CD, L_18, /*hidden argument*/NULL);
					IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
					Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_19, /*hidden argument*/NULL);
				}

IL_009c:
				{
					// while ((length = stream.Read(bytes, 0, bytes.Length)) != 0)
					NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_20 = V_3;
					ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_0;
					ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = V_0;
					NullCheck(L_22);
					NullCheck(L_20);
					int32_t L_23 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))));
					int32_t L_24 = L_23;
					V_4 = L_24;
					V_7 = (bool)((!(((uint32_t)L_24) <= ((uint32_t)0)))? 1 : 0);
					bool L_25 = V_7;
					if (L_25)
					{
						goto IL_0064;
					}
				}

IL_00b3:
				{
					IL2CPP_LEAVE(0xC1, FINALLY_00b6);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_00b6;
			}

FINALLY_00b6:
			{ // begin finally (depth: 3)
				{
					NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_26 = V_3;
					if (!L_26)
					{
						goto IL_00c0;
					}
				}

IL_00b9:
				{
					NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_27 = V_3;
					NullCheck(L_27);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_27);
				}

IL_00c0:
				{
					IL2CPP_END_FINALLY(182)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(182)
			{
				IL2CPP_JUMP_TBL(0xC1, IL_00c1)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_00c1:
			{
				IL2CPP_LEAVE(0xCF, FINALLY_00c4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00c4;
		}

FINALLY_00c4:
		{ // begin finally (depth: 2)
			{
				TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_28 = V_1;
				if (!L_28)
				{
					goto IL_00ce;
				}
			}

IL_00c7:
			{
				TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_29 = V_1;
				NullCheck(L_29);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_29);
			}

IL_00ce:
			{
				IL2CPP_END_FINALLY(196)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(196)
		{
			IL2CPP_JUMP_TBL(0xCF, IL_00cf)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00cf:
		{
		}

IL_00d0:
		{
			// while (true)
			V_8 = (bool)1;
			goto IL_003e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00d8;
		throw e;
	}

CATCH_00d8:
	{ // begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException socketException)
		V_9 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		// Debug.Log("SocketException " + socketException.ToString());
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_30 = V_9;
		NullCheck(L_30);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		String_t* L_32 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA61C317B3D38272A6515538A587EA4DF45784BE6, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_32, /*hidden argument*/NULL);
		goto IL_00f5;
	} // end catch (depth: 1)

IL_00f5:
	{
		// }
		return;
	}
}
// System.Void TestServer::SendMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestServer_SendMessage_mD4251DD3312A0DE2300AEA1867DF6B4C61D3AE9D (TestServer_t2BCFFBF706DF6863D40446375403ED1EACA79879 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestServer_SendMessage_mD4251DD3312A0DE2300AEA1867DF6B4C61D3AE9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (connectedTcpClient == null)
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_0 = __this->get_connectedTcpClient_6();
		V_0 = (bool)((((RuntimeObject*)(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0087;
	}

IL_0011:
	{
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			// NetworkStream stream = connectedTcpClient.GetStream();
			TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_2 = __this->get_connectedTcpClient_6();
			NullCheck(L_2);
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_3 = TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			// if (stream.CanWrite)
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_4);
			V_2 = L_5;
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_006c;
			}
		}

IL_0029:
		{
			// string serverMessage = this.transform.position.ToString();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
			NullCheck(L_7);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
			V_5 = L_8;
			String_t* L_9 = Vector3_ToString_m2682D27AB50CD1CE4677C38D0720A302D582348D((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_5), /*hidden argument*/NULL);
			V_3 = L_9;
			// byte[] serverMessageAsByteArray = Encoding.ASCII.GetBytes(serverMessage);
			Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_10 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
			String_t* L_11 = V_3;
			NullCheck(L_10);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, L_11);
			V_4 = L_12;
			// stream.Write(serverMessageAsByteArray, 0, serverMessageAsByteArray.Length);
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_13 = V_1;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_4;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_4;
			NullCheck(L_15);
			NullCheck(L_13);
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))));
			// Debug.Log("Server sent his message - should be received by client");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralCE989C4391262629841681590AD658266F112D16, /*hidden argument*/NULL);
		}

IL_006c:
		{
			goto IL_0087;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006f;
		throw e;
	}

CATCH_006f:
	{ // begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException socketException)
		V_6 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		// Debug.Log("Socket exception: " + socketException);
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_16 = V_6;
		String_t* L_17 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral0163E08E874EAE25EE567A16A21FE923E0E450C9, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_17, /*hidden argument*/NULL);
		goto IL_0087;
	} // end catch (depth: 1)

IL_0087:
	{
		// }
		return;
	}
}
// System.Void TestServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestServer__ctor_m671FAF73CD66D7DA21207B3D65796FF796F33C86 (TestServer_t2BCFFBF706DF6863D40446375403ED1EACA79879 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void TestSubscriber::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestSubscriber_Start_m9E3308AB56E9B12BC771F277DD554DBA8CD81C36 (TestSubscriber_t775CBC13A2FB95BEAE091CCB12453BA001D9F9A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSubscriber_Start_m9E3308AB56E9B12BC771F277DD554DBA8CD81C36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// server.RegisterDataSubscriber("Test", this);
		DataServer_tE5FE1C25C0159DE1253770EEF9ADBD45E3CEA027 * L_0 = __this->get_server_4();
		NullCheck(L_0);
		DataServer_RegisterDataSubscriber_m376D297F2C83E305EF80B0BD7A18CFE1F29DB9DD(L_0, _stringLiteral640AB2BAE07BEDC4C163F679A746F7AB7FB5D1FA, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TestSubscriber::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestSubscriber_Update_m1C791B722EE05A895A237C7BF56AE1C9F9052859 (TestSubscriber_t775CBC13A2FB95BEAE091CCB12453BA001D9F9A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSubscriber_Update_m1C791B722EE05A895A237C7BF56AE1C9F9052859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (update)
		bool L_0 = __this->get_update_7();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.Log("Trigger");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralD3F06A581B2B66FA7A3965DDEB6FB307F7BE20BA, /*hidden argument*/NULL);
		// Debug.Log(updatePos.ToString());
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = __this->get_address_of_updatePos_6();
		String_t* L_3 = Vector3_ToString_m2682D27AB50CD1CE4677C38D0720A302D582348D((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_2, /*hidden argument*/NULL);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// ball.transform.position += updatePos;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_ball_5();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = L_5;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_updatePos_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_6, L_9, /*hidden argument*/NULL);
		// update = false;
		__this->set_update_7((bool)0);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void TestSubscriber::OnReceiveMessage(System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestSubscriber_OnReceiveMessage_m69519862939C4A2D27CC3C3AF14DB51E168725E6 (TestSubscriber_t775CBC13A2FB95BEAE091CCB12453BA001D9F9A4 * __this, float ___timestamp0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSubscriber_OnReceiveMessage_m69519862939C4A2D27CC3C3AF14DB51E168725E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	{
		// string[] parts = message.Split(',');
		String_t* L_0 = ___message1;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// updatePos.x = System.Convert.ToInt32(parts[0]);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = __this->get_address_of_updatePos_6();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_8 = Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365(L_7, /*hidden argument*/NULL);
		L_4->set_x_2((((float)((float)L_8))));
		// updatePos.y = System.Convert.ToInt32(parts[1]);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_9 = __this->get_address_of_updatePos_6();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365(L_12, /*hidden argument*/NULL);
		L_9->set_y_3((((float)((float)L_13))));
		// updatePos.z = System.Convert.ToInt32(parts[2]);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_14 = __this->get_address_of_updatePos_6();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 2;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365(L_17, /*hidden argument*/NULL);
		L_14->set_z_4((((float)((float)L_18))));
		// update = true;
		__this->set_update_7((bool)1);
		// }
		return;
	}
}
// System.Void TestSubscriber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestSubscriber__ctor_m9C2F58331C0ACF865759082C0266492147AA6395 (TestSubscriber_t775CBC13A2FB95BEAE091CCB12453BA001D9F9A4 * __this, const RuntimeMethod* method)
{
	{
		// Vector3 updatePos = new Vector3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_updatePos_6();
		il2cpp_codegen_initobj(L_0, sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		// bool update = false;
		__this->set_update_7((bool)0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
