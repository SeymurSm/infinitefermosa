#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct KeyCollection_t319CB2458043B154A9D9D84AF7D5E6B38FD0EF77;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct KeyCollection_tF70499656138826AD3E654168CBF30B379EF62D4;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct ValueCollection_t3A77B537DE5FF3A9F15B0163150C51679B26AFB7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct ValueCollection_tB6E6FD1AAD2BABBD0864CA3D355D667017F9E1D7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>[]
struct EntryU5BU5D_t45EF1C4E08B01510F58E7B3D876CC5DDDF84851C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>[]
struct EntryU5BU5D_t6FFC1584F1FEEC05E3208816983C3B2E00DCD5C8;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_t2435B6E8E35E91E6B881A6968883722652B75A1C;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0;
// CameraShake
struct CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CoinManager
struct CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GoldController
struct GoldController_tF571D95F4BE86E883CF19510C9B8B95C033003D5;
// GradientBack
struct GradientBack_t6820F368B047DDA7593C54F4739409E4831316ED;
// Ground
struct Ground_tA6C2CF3CC20EE1D731A5A21CBBF1F7A5E8898E90;
// GroundController
struct GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t1A7845480C1A0832982B2740453C53703E0B09B2;
// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_t2F1DF79DABE7E49169CB22FCF65C0237720ACEDD;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ScoreManager
struct ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t27C209D4AB4E716E594657AAE6B1C75A7C4905A9;
// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UIController
struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WallController
struct WallController_t4DC0906AB58DCC0029018EF8788CF11D4B4B96AE;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// CameraController/<FixCamera>d__13
struct U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669;
// CameraController/<MoveCamera>d__12
struct U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E;
// CoinManager/<>c
struct U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48;
// GroundController/<RandomGroundAndWall>d__25
struct U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4;
// GroundController/<ScaleGround>d__27
struct U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PlayerController/<MovePlayer>d__18
struct U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1;
// ScoreManager/<>c
struct U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D;
// SoundManager/<CRPlaySound>d__18
struct U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789;
// SoundManager/OnMuteStatusChanged
struct OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76;
// SoundManager/Sound
struct Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t8B5B07F7E95F2AE39BE3A059459C1A5ACCE96427;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AxisTouchButtonU5BU5D_t72776D384169F1CB3BEA8B143321CE87BDB94DCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral088C68B8B70890806CF94EAAE69316081722ADE9;
IL2CPP_EXTERN_C String_t* _stringLiteral08EF1409295A748F17C961491378A3B6215AA838;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9;
IL2CPP_EXTERN_C String_t* _stringLiteral3DA913C8FA5C16202F27441C46D20054CA5AF089;
IL2CPP_EXTERN_C String_t* _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2;
IL2CPP_EXTERN_C String_t* _stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD;
IL2CPP_EXTERN_C String_t* _stringLiteralA30632DCAE623E87F8DEF40940B09D77ECFB8E04;
IL2CPP_EXTERN_C String_t* _stringLiteralAA26747DD0EBFD13F4BD9E4FD0B859C42B61275C;
IL2CPP_EXTERN_C String_t* _stringLiteralAB1EA0D19EDD2C3A2F60B0C36AD599E6C289DB3F;
IL2CPP_EXTERN_C String_t* _stringLiteralAB782883D90193A8164077ABDAC1F8E27AC48F65;
IL2CPP_EXTERN_C String_t* _stringLiteralAF9E0076AA4141E7B80C3AE6BAA112DD6ACB5DDA;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDB992B6DEAEC231ACFF5BEAA520CD60405D3E728;
IL2CPP_EXTERN_C String_t* _stringLiteralE1921D3070489B1532E810684C2992B44215A052;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrossPlatformInputManager_UnRegisterVirtualAxis_m64342E501FD520FE5FE28A1AB5CF1B56334168F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5939A79FB12E9E026B0EAC2CD560418C09105918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mCA41944174418E6CD20DF9DAA719EF69BA0D138F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9ABB93EF4BB85F52163ADE13240BB5BCF7DBC14F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mFCA74707FFA822AA929227F758CE72F1D475F41B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m652A77AC86C1E2526D2D7F1E61C287D9B34B2069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE6C778BE0A659414246FFABF6F957F741215BD86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_mB2CBD09AEDFA298DD4A7A34CE5E001ABF4BB160D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisNegative_mFC6573E09AAD9371BDF288183584126E3C45BB02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisPositive_m48E3A614364EA257E208F312D690B4156545E314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisZero_m76EE6A91ADD9C7A867B279C16239FCC197FCBA0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxis_m38950004F9B6DD18B1ADFE2061DEF3356816E31F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonDown_mC273D780F0692CD7233597FF543B1A83A947F34A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonUp_mFF786A10495F3FFAB08DA57378B11BE278C9670D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCRPlaySoundU3Ed__18_System_Collections_IEnumerator_Reset_mDB1AFE30DE9D1C39BB027F43809CECC236F72FC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFixCameraU3Ed__13_System_Collections_IEnumerator_Reset_mB40DD48A4FBA94ABE45B00E172F2CCA52573C253_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveCameraU3Ed__12_System_Collections_IEnumerator_Reset_m1992928CF319210B1C8CE0C9AF28CACB241BD1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMovePlayerU3Ed__18_System_Collections_IEnumerator_Reset_m203EECC499600E37DDAA7A4F158E04FC645CBE48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRandomGroundAndWallU3Ed__25_System_Collections_IEnumerator_Reset_m877874ADBC21F39D8DBBC8D6584B1A44D9DFAA6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CScaleGroundU3Ed__27_System_Collections_IEnumerator_Reset_m38B5ABE943A46413EAEFB2F61533727D10846F57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__16_0_mEB383CF77380E219BB8E9AE30A7B10B8BAECFF8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__25_0_m98B982D46BC3B93A960D04AD0464AEE5CECF3334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__25_1_mCE282ECBFA90C72F167C66F04AE9D810D38422C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AxisTouchButtonU5BU5D_t72776D384169F1CB3BEA8B143321CE87BDB94DCD;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t45EF1C4E08B01510F58E7B3D876CC5DDDF84851C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t319CB2458043B154A9D9D84AF7D5E6B38FD0EF77 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3A77B537DE5FF3A9F15B0163150C51679B26AFB7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___entries_1)); }
	inline EntryU5BU5D_t45EF1C4E08B01510F58E7B3D876CC5DDDF84851C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t45EF1C4E08B01510F58E7B3D876CC5DDDF84851C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t45EF1C4E08B01510F58E7B3D876CC5DDDF84851C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___keys_7)); }
	inline KeyCollection_t319CB2458043B154A9D9D84AF7D5E6B38FD0EF77 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t319CB2458043B154A9D9D84AF7D5E6B38FD0EF77 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t319CB2458043B154A9D9D84AF7D5E6B38FD0EF77 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ___values_8)); }
	inline ValueCollection_t3A77B537DE5FF3A9F15B0163150C51679B26AFB7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3A77B537DE5FF3A9F15B0163150C51679B26AFB7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3A77B537DE5FF3A9F15B0163150C51679B26AFB7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6FFC1584F1FEEC05E3208816983C3B2E00DCD5C8* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF70499656138826AD3E654168CBF30B379EF62D4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB6E6FD1AAD2BABBD0864CA3D355D667017F9E1D7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___entries_1)); }
	inline EntryU5BU5D_t6FFC1584F1FEEC05E3208816983C3B2E00DCD5C8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6FFC1584F1FEEC05E3208816983C3B2E00DCD5C8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6FFC1584F1FEEC05E3208816983C3B2E00DCD5C8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___keys_7)); }
	inline KeyCollection_tF70499656138826AD3E654168CBF30B379EF62D4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF70499656138826AD3E654168CBF30B379EF62D4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF70499656138826AD3E654168CBF30B379EF62D4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ___values_8)); }
	inline ValueCollection_tB6E6FD1AAD2BABBD0864CA3D355D667017F9E1D7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB6E6FD1AAD2BABBD0864CA3D355D667017F9E1D7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB6E6FD1AAD2BABBD0864CA3D355D667017F9E1D7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5  : public RuntimeObject
{
public:

public:
};

struct CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields
{
public:
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * ___s_HardwareInput_2;

public:
	inline static int32_t get_offset_of_activeInput_0() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields, ___activeInput_0)); }
	inline VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * get_activeInput_0() const { return ___activeInput_0; }
	inline VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F ** get_address_of_activeInput_0() { return &___activeInput_0; }
	inline void set_activeInput_0(VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * value)
	{
		___activeInput_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeInput_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_TouchInput_1() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields, ___s_TouchInput_1)); }
	inline VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * get_s_TouchInput_1() const { return ___s_TouchInput_1; }
	inline VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F ** get_address_of_s_TouchInput_1() { return &___s_TouchInput_1; }
	inline void set_s_TouchInput_1(VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * value)
	{
		___s_TouchInput_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TouchInput_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_HardwareInput_2() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields, ___s_HardwareInput_2)); }
	inline VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * get_s_HardwareInput_2() const { return ___s_HardwareInput_2; }
	inline VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F ** get_address_of_s_HardwareInput_2() { return &___s_HardwareInput_2; }
	inline void set_s_HardwareInput_2(VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * value)
	{
		___s_HardwareInput_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HardwareInput_2), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// CoinManager/<>c
struct U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991_StaticFields
{
public:
	// CoinManager/<>c CoinManager/<>c::<>9
	U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7, ___U3CmatchWithInputManagerU3Ek__BackingField_2)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_2() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return &___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_2(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_4;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___U3CmatchWithInputManagerU3Ek__BackingField_1)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_1() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return &___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_1(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_LastPressedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___m_LastPressedFrame_2)); }
	inline int32_t get_m_LastPressedFrame_2() const { return ___m_LastPressedFrame_2; }
	inline int32_t* get_address_of_m_LastPressedFrame_2() { return &___m_LastPressedFrame_2; }
	inline void set_m_LastPressedFrame_2(int32_t value)
	{
		___m_LastPressedFrame_2 = value;
	}

	inline static int32_t get_offset_of_m_ReleasedFrame_3() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___m_ReleasedFrame_3)); }
	inline int32_t get_m_ReleasedFrame_3() const { return ___m_ReleasedFrame_3; }
	inline int32_t* get_address_of_m_ReleasedFrame_3() { return &___m_ReleasedFrame_3; }
	inline void set_m_ReleasedFrame_3(int32_t value)
	{
		___m_ReleasedFrame_3 = value;
	}

	inline static int32_t get_offset_of_m_Pressed_4() { return static_cast<int32_t>(offsetof(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48, ___m_Pressed_4)); }
	inline bool get_m_Pressed_4() const { return ___m_Pressed_4; }
	inline bool* get_address_of_m_Pressed_4() { return &___m_Pressed_4; }
	inline void set_m_Pressed_4(bool value)
	{
		___m_Pressed_4 = value;
	}
};


// GroundController/<ScaleGround>d__27
struct U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A  : public RuntimeObject
{
public:
	// System.Int32 GroundController/<ScaleGround>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GroundController/<ScaleGround>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single GroundController/<ScaleGround>d__27::time
	float ___time_2;
	// UnityEngine.GameObject GroundController/<ScaleGround>d__27::ground
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ground_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_ground_3() { return static_cast<int32_t>(offsetof(U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A, ___ground_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ground_3() const { return ___ground_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ground_3() { return &___ground_3; }
	inline void set_ground_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ground_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ground_3), (void*)value);
	}
};


// PlayerController/<MovePlayer>d__18
struct U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB  : public RuntimeObject
{
public:
	// System.Int32 PlayerController/<MovePlayer>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<MovePlayer>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerController PlayerController/<MovePlayer>d__18::<>4__this
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB, ___U3CU3E4__this_2)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ScoreManager/<>c
struct U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_StaticFields
{
public:
	// ScoreManager/<>c ScoreManager/<>c::<>9
	U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// SoundManager/<CRPlaySound>d__18
struct U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789  : public RuntimeObject
{
public:
	// System.Int32 SoundManager/<CRPlaySound>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SoundManager/<CRPlaySound>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SoundManager/Sound SoundManager/<CRPlaySound>d__18::sound
	Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * ___sound_2;
	// SoundManager SoundManager/<CRPlaySound>d__18::<>4__this
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___U3CU3E4__this_3;
	// System.Single SoundManager/<CRPlaySound>d__18::maxVolumeScale
	float ___maxVolumeScale_4;
	// System.Boolean SoundManager/<CRPlaySound>d__18::autoScaleVolume
	bool ___autoScaleVolume_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_sound_2() { return static_cast<int32_t>(offsetof(U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789, ___sound_2)); }
	inline Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * get_sound_2() const { return ___sound_2; }
	inline Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 ** get_address_of_sound_2() { return &___sound_2; }
	inline void set_sound_2(Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * value)
	{
		___sound_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sound_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789, ___U3CU3E4__this_3)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_maxVolumeScale_4() { return static_cast<int32_t>(offsetof(U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789, ___maxVolumeScale_4)); }
	inline float get_maxVolumeScale_4() const { return ___maxVolumeScale_4; }
	inline float* get_address_of_maxVolumeScale_4() { return &___maxVolumeScale_4; }
	inline void set_maxVolumeScale_4(float value)
	{
		___maxVolumeScale_4 = value;
	}

	inline static int32_t get_offset_of_autoScaleVolume_5() { return static_cast<int32_t>(offsetof(U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789, ___autoScaleVolume_5)); }
	inline bool get_autoScaleVolume_5() const { return ___autoScaleVolume_5; }
	inline bool* get_address_of_autoScaleVolume_5() { return &___autoScaleVolume_5; }
	inline void set_autoScaleVolume_5(bool value)
	{
		___autoScaleVolume_5 = value;
	}
};


// SoundManager/Sound
struct Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3  : public RuntimeObject
{
public:
	// UnityEngine.AudioClip SoundManager/Sound::clip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip_0;
	// System.Int32 SoundManager/Sound::simultaneousPlayCount
	int32_t ___simultaneousPlayCount_1;

public:
	inline static int32_t get_offset_of_clip_0() { return static_cast<int32_t>(offsetof(Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3, ___clip_0)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_clip_0() const { return ___clip_0; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_clip_0() { return &___clip_0; }
	inline void set_clip_0(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___clip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clip_0), (void*)value);
	}

	inline static int32_t get_offset_of_simultaneousPlayCount_1() { return static_cast<int32_t>(offsetof(Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3, ___simultaneousPlayCount_1)); }
	inline int32_t get_simultaneousPlayCount_1() const { return ___simultaneousPlayCount_1; }
	inline int32_t* get_address_of_simultaneousPlayCount_1() { return &___simultaneousPlayCount_1; }
	inline void set_simultaneousPlayCount_1(int32_t value)
	{
		___simultaneousPlayCount_1 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CameraClearFlags
struct CameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
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
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_AlwaysUseVirtual_3;

public:
	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F, ___U3CvirtualMousePositionU3Ek__BackingField_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CvirtualMousePositionU3Ek__BackingField_0() const { return ___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return &___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_VirtualAxes_1() { return static_cast<int32_t>(offsetof(VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F, ___m_VirtualAxes_1)); }
	inline Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * get_m_VirtualAxes_1() const { return ___m_VirtualAxes_1; }
	inline Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 ** get_address_of_m_VirtualAxes_1() { return &___m_VirtualAxes_1; }
	inline void set_m_VirtualAxes_1(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * value)
	{
		___m_VirtualAxes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VirtualAxes_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_VirtualButtons_2() { return static_cast<int32_t>(offsetof(VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F, ___m_VirtualButtons_2)); }
	inline Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * get_m_VirtualButtons_2() const { return ___m_VirtualButtons_2; }
	inline Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C ** get_address_of_m_VirtualButtons_2() { return &___m_VirtualButtons_2; }
	inline void set_m_VirtualButtons_2(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * value)
	{
		___m_VirtualButtons_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VirtualButtons_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlwaysUseVirtual_3() { return static_cast<int32_t>(offsetof(VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F, ___m_AlwaysUseVirtual_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_AlwaysUseVirtual_3() const { return ___m_AlwaysUseVirtual_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_AlwaysUseVirtual_3() { return &___m_AlwaysUseVirtual_3; }
	inline void set_m_AlwaysUseVirtual_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_AlwaysUseVirtual_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlwaysUseVirtual_3), (void*)value);
	}
};


// CameraController/<FixCamera>d__13
struct U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669  : public RuntimeObject
{
public:
	// System.Int32 CameraController/<FixCamera>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CameraController/<FixCamera>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// CameraController CameraController/<FixCamera>d__13::<>4__this
	CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 CameraController/<FixCamera>d__13::<startPos>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartPosU3E5__2_3;
	// System.Single CameraController/<FixCamera>d__13::<t>5__3
	float ___U3CtU3E5__3_4;
	// UnityEngine.Vector3 CameraController/<FixCamera>d__13::<endPos>5__4
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CendPosU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669, ___U3CU3E4__this_2)); }
	inline CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartPosU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669, ___U3CstartPosU3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartPosU3E5__2_3() const { return ___U3CstartPosU3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartPosU3E5__2_3() { return &___U3CstartPosU3E5__2_3; }
	inline void set_U3CstartPosU3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartPosU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669, ___U3CtU3E5__3_4)); }
	inline float get_U3CtU3E5__3_4() const { return ___U3CtU3E5__3_4; }
	inline float* get_address_of_U3CtU3E5__3_4() { return &___U3CtU3E5__3_4; }
	inline void set_U3CtU3E5__3_4(float value)
	{
		___U3CtU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CendPosU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669, ___U3CendPosU3E5__4_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CendPosU3E5__4_5() const { return ___U3CendPosU3E5__4_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CendPosU3E5__4_5() { return &___U3CendPosU3E5__4_5; }
	inline void set_U3CendPosU3E5__4_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CendPosU3E5__4_5 = value;
	}
};


// CameraController/<MoveCamera>d__12
struct U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E  : public RuntimeObject
{
public:
	// System.Int32 CameraController/<MoveCamera>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CameraController/<MoveCamera>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// CameraController CameraController/<MoveCamera>d__12::<>4__this
	CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 CameraController/<MoveCamera>d__12::<startPos>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartPosU3E5__2_3;
	// UnityEngine.Vector3 CameraController/<MoveCamera>d__12::<endPos>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CendPosU3E5__3_4;
	// System.Single CameraController/<MoveCamera>d__12::<t>5__4
	float ___U3CtU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E, ___U3CU3E4__this_2)); }
	inline CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartPosU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E, ___U3CstartPosU3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartPosU3E5__2_3() const { return ___U3CstartPosU3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartPosU3E5__2_3() { return &___U3CstartPosU3E5__2_3; }
	inline void set_U3CstartPosU3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartPosU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CendPosU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E, ___U3CendPosU3E5__3_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CendPosU3E5__3_4() const { return ___U3CendPosU3E5__3_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CendPosU3E5__3_4() { return &___U3CendPosU3E5__3_4; }
	inline void set_U3CendPosU3E5__3_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CendPosU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E, ___U3CtU3E5__4_5)); }
	inline float get_U3CtU3E5__4_5() const { return ___U3CtU3E5__4_5; }
	inline float* get_address_of_U3CtU3E5__4_5() { return &___U3CtU3E5__4_5; }
	inline void set_U3CtU3E5__4_5(float value)
	{
		___U3CtU3E5__4_5 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
struct ActiveInputMethod_t81B5C5485AC5B373F518F7F5C7220422429C49E1 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActiveInputMethod_t81B5C5485AC5B373F518F7F5C7220422429C49E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GroundController/<RandomGroundAndWall>d__25
struct U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4  : public RuntimeObject
{
public:
	// System.Int32 GroundController/<RandomGroundAndWall>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GroundController/<RandomGroundAndWall>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GroundController GroundController/<RandomGroundAndWall>d__25::<>4__this
	GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * ___U3CU3E4__this_2;
	// System.Int32 GroundController/<RandomGroundAndWall>d__25::dirTurn
	int32_t ___dirTurn_3;
	// UnityEngine.Vector3 GroundController/<RandomGroundAndWall>d__25::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GroundController/<RandomGroundAndWall>d__25::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_5;
	// UnityEngine.Vector3 GroundController/<RandomGroundAndWall>d__25::directionOfGround
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___directionOfGround_6;
	// System.Int32 GroundController/<RandomGroundAndWall>d__25::numberOfGround
	int32_t ___numberOfGround_7;
	// UnityEngine.Vector3 GroundController/<RandomGroundAndWall>d__25::positionOfTheWall
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionOfTheWall_8;
	// System.Int32 GroundController/<RandomGroundAndWall>d__25::<i>5__2
	int32_t ___U3CiU3E5__2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4, ___U3CU3E4__this_2)); }
	inline GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_dirTurn_3() { return static_cast<int32_t>(offsetof(U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4, ___dirTurn_3)); }
	inline int32_t get_dirTurn_3() const { return ___dirTurn_3; }
	inline int32_t* get_address_of_dirTurn_3() { return &___dirTurn_3; }
	inline void set_dirTurn_3(int32_t value)
	{
		___dirTurn_3 = value;
	}

	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4, ___pos_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_4() const { return ___pos_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_list_5() { return static_cast<int32_t>(offsetof(U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4, ___list_5)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_5() const { return ___list_5; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_5() { return &___list_5; }
	inline void set_list_5(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_5), (void*)value);
	}

	inline static int32_t get_offset_of_directionOfGround_6() { return static_cast<int32_t>(offsetof(U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4, ___directionOfGround_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_directionOfGround_6() const { return ___directionOfGround_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_directionOfGround_6() { return &___directionOfGround_6; }
	inline void set_directionOfGround_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___directionOfGround_6 = value;
	}

	inline static int32_t get_offset_of_numberOfGround_7() { return static_cast<int32_t>(offsetof(U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4, ___numberOfGround_7)); }
	inline int32_t get_numberOfGround_7() const { return ___numberOfGround_7; }
	inline int32_t* get_address_of_numberOfGround_7() { return &___numberOfGround_7; }
	inline void set_numberOfGround_7(int32_t value)
	{
		___numberOfGround_7 = value;
	}

	inline static int32_t get_offset_of_positionOfTheWall_8() { return static_cast<int32_t>(offsetof(U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4, ___positionOfTheWall_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionOfTheWall_8() const { return ___positionOfTheWall_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionOfTheWall_8() { return &___positionOfTheWall_8; }
	inline void set_positionOfTheWall_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionOfTheWall_8 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4, ___U3CiU3E5__2_9)); }
	inline int32_t get_U3CiU3E5__2_9() const { return ___U3CiU3E5__2_9; }
	inline int32_t* get_address_of_U3CiU3E5__2_9() { return &___U3CiU3E5__2_9; }
	inline void set_U3CiU3E5__2_9(int32_t value)
	{
		___U3CiU3E5__2_9 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
struct AxisOption_t0F3EE8C872F69ECED3C618D7401F4FD791C6E0A2 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOption_t0F3EE8C872F69ECED3C618D7401F4FD791C6E0A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
struct AxisOptions_t7ABCE4F92A15C22999680E99EBCA83A5D263F7E9 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOptions_t7ABCE4F92A15C22999680E99EBCA83A5D263F7E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
struct AxisOption_tD35772FCA78862E0CF09E332EA4FDD33DA99FB80 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOption_tD35772FCA78862E0CF09E332EA4FDD33DA99FB80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
struct ControlStyle_t1C92A41DAAEB62BC19BB5AB279DE45C553E4A8E3 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlStyle_t1C92A41DAAEB62BC19BB5AB279DE45C553E4A8E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
struct MappingType_tF22825BB93417A5C60F9DF9ABBDEE10DD5CE4738 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MappingType_tF22825BB93417A5C60F9DF9ABBDEE10DD5CE4738, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82  : public VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3  : public VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
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
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t8B5B07F7E95F2AE39BE3A059459C1A5ACCE96427  : public RuntimeObject
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::type
	int32_t ___type_0;
	// System.String UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::axisName
	String_t* ___axisName_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AxisMapping_t8B5B07F7E95F2AE39BE3A059459C1A5ACCE96427, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_axisName_1() { return static_cast<int32_t>(offsetof(AxisMapping_t8B5B07F7E95F2AE39BE3A059459C1A5ACCE96427, ___axisName_1)); }
	inline String_t* get_axisName_1() const { return ___axisName_1; }
	inline String_t** get_address_of_axisName_1() { return &___axisName_1; }
	inline void set_axisName_1(String_t* value)
	{
		___axisName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisName_1), (void*)value);
	}
};


// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// SoundManager/OnMuteStatusChanged
struct OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_7;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * ___m_PairedWith_8;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___m_Axis_9;

public:
	inline static int32_t get_offset_of_axisName_4() { return static_cast<int32_t>(offsetof(AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB, ___axisName_4)); }
	inline String_t* get_axisName_4() const { return ___axisName_4; }
	inline String_t** get_address_of_axisName_4() { return &___axisName_4; }
	inline void set_axisName_4(String_t* value)
	{
		___axisName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisName_4), (void*)value);
	}

	inline static int32_t get_offset_of_axisValue_5() { return static_cast<int32_t>(offsetof(AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB, ___axisValue_5)); }
	inline float get_axisValue_5() const { return ___axisValue_5; }
	inline float* get_address_of_axisValue_5() { return &___axisValue_5; }
	inline void set_axisValue_5(float value)
	{
		___axisValue_5 = value;
	}

	inline static int32_t get_offset_of_responseSpeed_6() { return static_cast<int32_t>(offsetof(AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB, ___responseSpeed_6)); }
	inline float get_responseSpeed_6() const { return ___responseSpeed_6; }
	inline float* get_address_of_responseSpeed_6() { return &___responseSpeed_6; }
	inline void set_responseSpeed_6(float value)
	{
		___responseSpeed_6 = value;
	}

	inline static int32_t get_offset_of_returnToCentreSpeed_7() { return static_cast<int32_t>(offsetof(AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB, ___returnToCentreSpeed_7)); }
	inline float get_returnToCentreSpeed_7() const { return ___returnToCentreSpeed_7; }
	inline float* get_address_of_returnToCentreSpeed_7() { return &___returnToCentreSpeed_7; }
	inline void set_returnToCentreSpeed_7(float value)
	{
		___returnToCentreSpeed_7 = value;
	}

	inline static int32_t get_offset_of_m_PairedWith_8() { return static_cast<int32_t>(offsetof(AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB, ___m_PairedWith_8)); }
	inline AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * get_m_PairedWith_8() const { return ___m_PairedWith_8; }
	inline AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB ** get_address_of_m_PairedWith_8() { return &___m_PairedWith_8; }
	inline void set_m_PairedWith_8(AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * value)
	{
		___m_PairedWith_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PairedWith_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Axis_9() { return static_cast<int32_t>(offsetof(AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB, ___m_Axis_9)); }
	inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * get_m_Axis_9() const { return ___m_Axis_9; }
	inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 ** get_address_of_m_Axis_9() { return &___m_Axis_9; }
	inline void set_m_Axis_9(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * value)
	{
		___m_Axis_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Axis_9), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_t2435B6E8E35E91E6B881A6968883722652B75A1C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.ButtonHandler::Name
	String_t* ___Name_4;

public:
	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(ButtonHandler_t2435B6E8E35E91E6B881A6968883722652B75A1C, ___Name_4)); }
	inline String_t* get_Name_4() const { return ___Name_4; }
	inline String_t** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(String_t* value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_4), (void*)value);
	}
};


// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera CameraController::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_4;
	// PlayerController CameraController::playerController
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___playerController_5;
	// GroundController CameraController::groundController
	GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * ___groundController_6;
	// UnityEngine.Color[] CameraController::colors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors_7;
	// System.Boolean CameraController::isMoved
	bool ___isMoved_8;
	// System.Boolean CameraController::cameraFixedLeft
	bool ___cameraFixedLeft_9;
	// System.Boolean CameraController::cameraFixedRight
	bool ___cameraFixedRight_10;
	// System.Single CameraController::timeToMoveCamera
	float ___timeToMoveCamera_11;
	// System.Single CameraController::timeToFixCamera
	float ___timeToFixCamera_12;
	// System.Int32 CameraController::temp
	int32_t ___temp_13;

public:
	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___cam_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_4() const { return ___cam_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerController_5() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___playerController_5)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_playerController_5() const { return ___playerController_5; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_playerController_5() { return &___playerController_5; }
	inline void set_playerController_5(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___playerController_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerController_5), (void*)value);
	}

	inline static int32_t get_offset_of_groundController_6() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___groundController_6)); }
	inline GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * get_groundController_6() const { return ___groundController_6; }
	inline GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 ** get_address_of_groundController_6() { return &___groundController_6; }
	inline void set_groundController_6(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * value)
	{
		___groundController_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundController_6), (void*)value);
	}

	inline static int32_t get_offset_of_colors_7() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___colors_7)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_colors_7() const { return ___colors_7; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_colors_7() { return &___colors_7; }
	inline void set_colors_7(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___colors_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors_7), (void*)value);
	}

	inline static int32_t get_offset_of_isMoved_8() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___isMoved_8)); }
	inline bool get_isMoved_8() const { return ___isMoved_8; }
	inline bool* get_address_of_isMoved_8() { return &___isMoved_8; }
	inline void set_isMoved_8(bool value)
	{
		___isMoved_8 = value;
	}

	inline static int32_t get_offset_of_cameraFixedLeft_9() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___cameraFixedLeft_9)); }
	inline bool get_cameraFixedLeft_9() const { return ___cameraFixedLeft_9; }
	inline bool* get_address_of_cameraFixedLeft_9() { return &___cameraFixedLeft_9; }
	inline void set_cameraFixedLeft_9(bool value)
	{
		___cameraFixedLeft_9 = value;
	}

	inline static int32_t get_offset_of_cameraFixedRight_10() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___cameraFixedRight_10)); }
	inline bool get_cameraFixedRight_10() const { return ___cameraFixedRight_10; }
	inline bool* get_address_of_cameraFixedRight_10() { return &___cameraFixedRight_10; }
	inline void set_cameraFixedRight_10(bool value)
	{
		___cameraFixedRight_10 = value;
	}

	inline static int32_t get_offset_of_timeToMoveCamera_11() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___timeToMoveCamera_11)); }
	inline float get_timeToMoveCamera_11() const { return ___timeToMoveCamera_11; }
	inline float* get_address_of_timeToMoveCamera_11() { return &___timeToMoveCamera_11; }
	inline void set_timeToMoveCamera_11(float value)
	{
		___timeToMoveCamera_11 = value;
	}

	inline static int32_t get_offset_of_timeToFixCamera_12() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___timeToFixCamera_12)); }
	inline float get_timeToFixCamera_12() const { return ___timeToFixCamera_12; }
	inline float* get_address_of_timeToFixCamera_12() { return &___timeToFixCamera_12; }
	inline void set_timeToFixCamera_12(float value)
	{
		___timeToFixCamera_12 = value;
	}

	inline static int32_t get_offset_of_temp_13() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___temp_13)); }
	inline int32_t get_temp_13() const { return ___temp_13; }
	inline int32_t* get_address_of_temp_13() { return &___temp_13; }
	inline void set_temp_13(int32_t value)
	{
		___temp_13 = value;
	}
};


// CameraShake
struct CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform CameraShake::camTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___camTransform_4;
	// System.Single CameraShake::shakeDuration
	float ___shakeDuration_5;
	// System.Single CameraShake::shakeAmount
	float ___shakeAmount_6;
	// System.Single CameraShake::decreaseFactor
	float ___decreaseFactor_7;
	// UnityEngine.Vector3 CameraShake::originalPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originalPos_8;

public:
	inline static int32_t get_offset_of_camTransform_4() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___camTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_camTransform_4() const { return ___camTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_camTransform_4() { return &___camTransform_4; }
	inline void set_camTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___camTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_shakeDuration_5() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___shakeDuration_5)); }
	inline float get_shakeDuration_5() const { return ___shakeDuration_5; }
	inline float* get_address_of_shakeDuration_5() { return &___shakeDuration_5; }
	inline void set_shakeDuration_5(float value)
	{
		___shakeDuration_5 = value;
	}

	inline static int32_t get_offset_of_shakeAmount_6() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___shakeAmount_6)); }
	inline float get_shakeAmount_6() const { return ___shakeAmount_6; }
	inline float* get_address_of_shakeAmount_6() { return &___shakeAmount_6; }
	inline void set_shakeAmount_6(float value)
	{
		___shakeAmount_6 = value;
	}

	inline static int32_t get_offset_of_decreaseFactor_7() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___decreaseFactor_7)); }
	inline float get_decreaseFactor_7() const { return ___decreaseFactor_7; }
	inline float* get_address_of_decreaseFactor_7() { return &___decreaseFactor_7; }
	inline void set_decreaseFactor_7(float value)
	{
		___decreaseFactor_7 = value;
	}

	inline static int32_t get_offset_of_originalPos_8() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___originalPos_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originalPos_8() const { return ___originalPos_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originalPos_8() { return &___originalPos_8; }
	inline void set_originalPos_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originalPos_8 = value;
	}
};


// CoinManager
struct CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 CoinManager::<Coins>k__BackingField
	int32_t ___U3CCoinsU3Ek__BackingField_5;
	// System.Int32 CoinManager::INITIAL_COINS
	int32_t ___INITIAL_COINS_7;

public:
	inline static int32_t get_offset_of_U3CCoinsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D, ___U3CCoinsU3Ek__BackingField_5)); }
	inline int32_t get_U3CCoinsU3Ek__BackingField_5() const { return ___U3CCoinsU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CCoinsU3Ek__BackingField_5() { return &___U3CCoinsU3Ek__BackingField_5; }
	inline void set_U3CCoinsU3Ek__BackingField_5(int32_t value)
	{
		___U3CCoinsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_INITIAL_COINS_7() { return static_cast<int32_t>(offsetof(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D, ___INITIAL_COINS_7)); }
	inline int32_t get_INITIAL_COINS_7() const { return ___INITIAL_COINS_7; }
	inline int32_t* get_address_of_INITIAL_COINS_7() { return &___INITIAL_COINS_7; }
	inline void set_INITIAL_COINS_7(int32_t value)
	{
		___INITIAL_COINS_7 = value;
	}
};

struct CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields
{
public:
	// CoinManager CoinManager::Instance
	CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * ___Instance_4;
	// System.Action`1<System.Int32> CoinManager::CoinsUpdated
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___CoinsUpdated_6;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields, ___Instance_4)); }
	inline CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * get_Instance_4() const { return ___Instance_4; }
	inline CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_CoinsUpdated_6() { return static_cast<int32_t>(offsetof(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields, ___CoinsUpdated_6)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_CoinsUpdated_6() const { return ___CoinsUpdated_6; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_CoinsUpdated_6() { return &___CoinsUpdated_6; }
	inline void set_CoinsUpdated_6(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___CoinsUpdated_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoinsUpdated_6), (void*)value);
	}
};


// GoldController
struct GoldController_tF571D95F4BE86E883CF19510C9B8B95C033003D5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single GoldController::speedGoldFalling
	float ___speedGoldFalling_4;

public:
	inline static int32_t get_offset_of_speedGoldFalling_4() { return static_cast<int32_t>(offsetof(GoldController_tF571D95F4BE86E883CF19510C9B8B95C033003D5, ___speedGoldFalling_4)); }
	inline float get_speedGoldFalling_4() const { return ___speedGoldFalling_4; }
	inline float* get_address_of_speedGoldFalling_4() { return &___speedGoldFalling_4; }
	inline void set_speedGoldFalling_4(float value)
	{
		___speedGoldFalling_4 = value;
	}
};


// GradientBack
struct GradientBack_t6820F368B047DDA7593C54F4739409E4831316ED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color GradientBack::color1
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1_4;
	// UnityEngine.Color GradientBack::color2
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2_5;
	// System.Single GradientBack::duration
	float ___duration_6;
	// UnityEngine.Camera GradientBack::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_7;

public:
	inline static int32_t get_offset_of_color1_4() { return static_cast<int32_t>(offsetof(GradientBack_t6820F368B047DDA7593C54F4739409E4831316ED, ___color1_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color1_4() const { return ___color1_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color1_4() { return &___color1_4; }
	inline void set_color1_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color1_4 = value;
	}

	inline static int32_t get_offset_of_color2_5() { return static_cast<int32_t>(offsetof(GradientBack_t6820F368B047DDA7593C54F4739409E4831316ED, ___color2_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color2_5() const { return ___color2_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color2_5() { return &___color2_5; }
	inline void set_color2_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color2_5 = value;
	}

	inline static int32_t get_offset_of_duration_6() { return static_cast<int32_t>(offsetof(GradientBack_t6820F368B047DDA7593C54F4739409E4831316ED, ___duration_6)); }
	inline float get_duration_6() const { return ___duration_6; }
	inline float* get_address_of_duration_6() { return &___duration_6; }
	inline void set_duration_6(float value)
	{
		___duration_6 = value;
	}

	inline static int32_t get_offset_of_camera_7() { return static_cast<int32_t>(offsetof(GradientBack_t6820F368B047DDA7593C54F4739409E4831316ED, ___camera_7)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_7() const { return ___camera_7; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_7() { return &___camera_7; }
	inline void set_camera_7(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_7), (void*)value);
	}
};


// Ground
struct Ground_tA6C2CF3CC20EE1D731A5A21CBBF1F7A5E8898E90  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GroundController
struct GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GroundController::groundPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___groundPrefab_4;
	// UnityEngine.GameObject GroundController::firstGround
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___firstGround_5;
	// UnityEngine.GameObject GroundController::theWall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___theWall_6;
	// UnityEngine.GameObject GroundController::gold
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gold_7;
	// UnityEngine.GameObject GroundController::parentObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___parentObject_8;
	// PlayerController GroundController::playerController
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___playerController_9;
	// System.Int32 GroundController::groundRandomNumber
	int32_t ___groundRandomNumber_10;
	// System.Boolean GroundController::enableTouch
	bool ___enableTouch_11;
	// System.Boolean GroundController::finishCreateGround
	bool ___finishCreateGround_12;
	// System.Single GroundController::goldFrequency
	float ___goldFrequency_13;
	// System.Single GroundController::timeToDestroyGround
	float ___timeToDestroyGround_14;
	// System.Single GroundController::timeToDestroyGroundAfterGameOver
	float ___timeToDestroyGroundAfterGameOver_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GroundController::listGroundLeft
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___listGroundLeft_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GroundController::listGroundRight
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___listGroundRight_17;
	// UnityEngine.GameObject GroundController::currentGround
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentGround_18;
	// UnityEngine.Vector3 GroundController::firstPosOfGround
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___firstPosOfGround_19;
	// UnityEngine.Vector3 GroundController::leftRandomPositionOfTheWall
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftRandomPositionOfTheWall_20;
	// UnityEngine.Vector3 GroundController::rightRandomtPositionOfTheWall
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightRandomtPositionOfTheWall_21;
	// System.Boolean GroundController::isGroundAndWallHaveRandomOnRight
	bool ___isGroundAndWallHaveRandomOnRight_22;
	// System.Boolean GroundController::isGroundAndWallHaveRandomOnLeft
	bool ___isGroundAndWallHaveRandomOnLeft_23;
	// System.Int32 GroundController::indexPositionOfGround
	int32_t ___indexPositionOfGround_26;

public:
	inline static int32_t get_offset_of_groundPrefab_4() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___groundPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_groundPrefab_4() const { return ___groundPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_groundPrefab_4() { return &___groundPrefab_4; }
	inline void set_groundPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___groundPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_firstGround_5() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___firstGround_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_firstGround_5() const { return ___firstGround_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_firstGround_5() { return &___firstGround_5; }
	inline void set_firstGround_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___firstGround_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstGround_5), (void*)value);
	}

	inline static int32_t get_offset_of_theWall_6() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___theWall_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_theWall_6() const { return ___theWall_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_theWall_6() { return &___theWall_6; }
	inline void set_theWall_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___theWall_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theWall_6), (void*)value);
	}

	inline static int32_t get_offset_of_gold_7() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___gold_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gold_7() const { return ___gold_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gold_7() { return &___gold_7; }
	inline void set_gold_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gold_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gold_7), (void*)value);
	}

	inline static int32_t get_offset_of_parentObject_8() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___parentObject_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_parentObject_8() const { return ___parentObject_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_parentObject_8() { return &___parentObject_8; }
	inline void set_parentObject_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___parentObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentObject_8), (void*)value);
	}

	inline static int32_t get_offset_of_playerController_9() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___playerController_9)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_playerController_9() const { return ___playerController_9; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_playerController_9() { return &___playerController_9; }
	inline void set_playerController_9(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___playerController_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerController_9), (void*)value);
	}

	inline static int32_t get_offset_of_groundRandomNumber_10() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___groundRandomNumber_10)); }
	inline int32_t get_groundRandomNumber_10() const { return ___groundRandomNumber_10; }
	inline int32_t* get_address_of_groundRandomNumber_10() { return &___groundRandomNumber_10; }
	inline void set_groundRandomNumber_10(int32_t value)
	{
		___groundRandomNumber_10 = value;
	}

	inline static int32_t get_offset_of_enableTouch_11() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___enableTouch_11)); }
	inline bool get_enableTouch_11() const { return ___enableTouch_11; }
	inline bool* get_address_of_enableTouch_11() { return &___enableTouch_11; }
	inline void set_enableTouch_11(bool value)
	{
		___enableTouch_11 = value;
	}

	inline static int32_t get_offset_of_finishCreateGround_12() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___finishCreateGround_12)); }
	inline bool get_finishCreateGround_12() const { return ___finishCreateGround_12; }
	inline bool* get_address_of_finishCreateGround_12() { return &___finishCreateGround_12; }
	inline void set_finishCreateGround_12(bool value)
	{
		___finishCreateGround_12 = value;
	}

	inline static int32_t get_offset_of_goldFrequency_13() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___goldFrequency_13)); }
	inline float get_goldFrequency_13() const { return ___goldFrequency_13; }
	inline float* get_address_of_goldFrequency_13() { return &___goldFrequency_13; }
	inline void set_goldFrequency_13(float value)
	{
		___goldFrequency_13 = value;
	}

	inline static int32_t get_offset_of_timeToDestroyGround_14() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___timeToDestroyGround_14)); }
	inline float get_timeToDestroyGround_14() const { return ___timeToDestroyGround_14; }
	inline float* get_address_of_timeToDestroyGround_14() { return &___timeToDestroyGround_14; }
	inline void set_timeToDestroyGround_14(float value)
	{
		___timeToDestroyGround_14 = value;
	}

	inline static int32_t get_offset_of_timeToDestroyGroundAfterGameOver_15() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___timeToDestroyGroundAfterGameOver_15)); }
	inline float get_timeToDestroyGroundAfterGameOver_15() const { return ___timeToDestroyGroundAfterGameOver_15; }
	inline float* get_address_of_timeToDestroyGroundAfterGameOver_15() { return &___timeToDestroyGroundAfterGameOver_15; }
	inline void set_timeToDestroyGroundAfterGameOver_15(float value)
	{
		___timeToDestroyGroundAfterGameOver_15 = value;
	}

	inline static int32_t get_offset_of_listGroundLeft_16() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___listGroundLeft_16)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_listGroundLeft_16() const { return ___listGroundLeft_16; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_listGroundLeft_16() { return &___listGroundLeft_16; }
	inline void set_listGroundLeft_16(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___listGroundLeft_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listGroundLeft_16), (void*)value);
	}

	inline static int32_t get_offset_of_listGroundRight_17() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___listGroundRight_17)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_listGroundRight_17() const { return ___listGroundRight_17; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_listGroundRight_17() { return &___listGroundRight_17; }
	inline void set_listGroundRight_17(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___listGroundRight_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listGroundRight_17), (void*)value);
	}

	inline static int32_t get_offset_of_currentGround_18() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___currentGround_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentGround_18() const { return ___currentGround_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentGround_18() { return &___currentGround_18; }
	inline void set_currentGround_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentGround_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGround_18), (void*)value);
	}

	inline static int32_t get_offset_of_firstPosOfGround_19() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___firstPosOfGround_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_firstPosOfGround_19() const { return ___firstPosOfGround_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_firstPosOfGround_19() { return &___firstPosOfGround_19; }
	inline void set_firstPosOfGround_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___firstPosOfGround_19 = value;
	}

	inline static int32_t get_offset_of_leftRandomPositionOfTheWall_20() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___leftRandomPositionOfTheWall_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftRandomPositionOfTheWall_20() const { return ___leftRandomPositionOfTheWall_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftRandomPositionOfTheWall_20() { return &___leftRandomPositionOfTheWall_20; }
	inline void set_leftRandomPositionOfTheWall_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftRandomPositionOfTheWall_20 = value;
	}

	inline static int32_t get_offset_of_rightRandomtPositionOfTheWall_21() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___rightRandomtPositionOfTheWall_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightRandomtPositionOfTheWall_21() const { return ___rightRandomtPositionOfTheWall_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightRandomtPositionOfTheWall_21() { return &___rightRandomtPositionOfTheWall_21; }
	inline void set_rightRandomtPositionOfTheWall_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightRandomtPositionOfTheWall_21 = value;
	}

	inline static int32_t get_offset_of_isGroundAndWallHaveRandomOnRight_22() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___isGroundAndWallHaveRandomOnRight_22)); }
	inline bool get_isGroundAndWallHaveRandomOnRight_22() const { return ___isGroundAndWallHaveRandomOnRight_22; }
	inline bool* get_address_of_isGroundAndWallHaveRandomOnRight_22() { return &___isGroundAndWallHaveRandomOnRight_22; }
	inline void set_isGroundAndWallHaveRandomOnRight_22(bool value)
	{
		___isGroundAndWallHaveRandomOnRight_22 = value;
	}

	inline static int32_t get_offset_of_isGroundAndWallHaveRandomOnLeft_23() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___isGroundAndWallHaveRandomOnLeft_23)); }
	inline bool get_isGroundAndWallHaveRandomOnLeft_23() const { return ___isGroundAndWallHaveRandomOnLeft_23; }
	inline bool* get_address_of_isGroundAndWallHaveRandomOnLeft_23() { return &___isGroundAndWallHaveRandomOnLeft_23; }
	inline void set_isGroundAndWallHaveRandomOnLeft_23(bool value)
	{
		___isGroundAndWallHaveRandomOnLeft_23 = value;
	}

	inline static int32_t get_offset_of_indexPositionOfGround_26() { return static_cast<int32_t>(offsetof(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684, ___indexPositionOfGround_26)); }
	inline int32_t get_indexPositionOfGround_26() const { return ___indexPositionOfGround_26; }
	inline int32_t* get_address_of_indexPositionOfGround_26() { return &___indexPositionOfGround_26; }
	inline void set_indexPositionOfGround_26(int32_t value)
	{
		___indexPositionOfGround_26 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t1A7845480C1A0832982B2740453C53703E0B09B2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::axis
	String_t* ___axis_4;

public:
	inline static int32_t get_offset_of_axis_4() { return static_cast<int32_t>(offsetof(InputAxisScrollbar_t1A7845480C1A0832982B2740453C53703E0B09B2, ___axis_4)); }
	inline String_t* get_axis_4() const { return ___axis_4; }
	inline String_t** get_address_of_axis_4() { return &___axis_4; }
	inline void set_axis_4(String_t* value)
	{
		___axis_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axis_4), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_4;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_5;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_StartPos_8;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_9;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_10;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___m_HorizontalVirtualAxis_11;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___m_VerticalVirtualAxis_12;

public:
	inline static int32_t get_offset_of_MovementRange_4() { return static_cast<int32_t>(offsetof(Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391, ___MovementRange_4)); }
	inline int32_t get_MovementRange_4() const { return ___MovementRange_4; }
	inline int32_t* get_address_of_MovementRange_4() { return &___MovementRange_4; }
	inline void set_MovementRange_4(int32_t value)
	{
		___MovementRange_4 = value;
	}

	inline static int32_t get_offset_of_axesToUse_5() { return static_cast<int32_t>(offsetof(Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391, ___axesToUse_5)); }
	inline int32_t get_axesToUse_5() const { return ___axesToUse_5; }
	inline int32_t* get_address_of_axesToUse_5() { return &___axesToUse_5; }
	inline void set_axesToUse_5(int32_t value)
	{
		___axesToUse_5 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_6() { return static_cast<int32_t>(offsetof(Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391, ___horizontalAxisName_6)); }
	inline String_t* get_horizontalAxisName_6() const { return ___horizontalAxisName_6; }
	inline String_t** get_address_of_horizontalAxisName_6() { return &___horizontalAxisName_6; }
	inline void set_horizontalAxisName_6(String_t* value)
	{
		___horizontalAxisName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___horizontalAxisName_6), (void*)value);
	}

	inline static int32_t get_offset_of_verticalAxisName_7() { return static_cast<int32_t>(offsetof(Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391, ___verticalAxisName_7)); }
	inline String_t* get_verticalAxisName_7() const { return ___verticalAxisName_7; }
	inline String_t** get_address_of_verticalAxisName_7() { return &___verticalAxisName_7; }
	inline void set_verticalAxisName_7(String_t* value)
	{
		___verticalAxisName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verticalAxisName_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartPos_8() { return static_cast<int32_t>(offsetof(Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391, ___m_StartPos_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_StartPos_8() const { return ___m_StartPos_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_StartPos_8() { return &___m_StartPos_8; }
	inline void set_m_StartPos_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_StartPos_8 = value;
	}

	inline static int32_t get_offset_of_m_UseX_9() { return static_cast<int32_t>(offsetof(Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391, ___m_UseX_9)); }
	inline bool get_m_UseX_9() const { return ___m_UseX_9; }
	inline bool* get_address_of_m_UseX_9() { return &___m_UseX_9; }
	inline void set_m_UseX_9(bool value)
	{
		___m_UseX_9 = value;
	}

	inline static int32_t get_offset_of_m_UseY_10() { return static_cast<int32_t>(offsetof(Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391, ___m_UseY_10)); }
	inline bool get_m_UseY_10() const { return ___m_UseY_10; }
	inline bool* get_address_of_m_UseY_10() { return &___m_UseY_10; }
	inline void set_m_UseY_10(bool value)
	{
		___m_UseY_10 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_11() { return static_cast<int32_t>(offsetof(Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391, ___m_HorizontalVirtualAxis_11)); }
	inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * get_m_HorizontalVirtualAxis_11() const { return ___m_HorizontalVirtualAxis_11; }
	inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 ** get_address_of_m_HorizontalVirtualAxis_11() { return &___m_HorizontalVirtualAxis_11; }
	inline void set_m_HorizontalVirtualAxis_11(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * value)
	{
		___m_HorizontalVirtualAxis_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalVirtualAxis_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_12() { return static_cast<int32_t>(offsetof(Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391, ___m_VerticalVirtualAxis_12)); }
	inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * get_m_VerticalVirtualAxis_12() const { return ___m_VerticalVirtualAxis_12; }
	inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 ** get_address_of_m_VerticalVirtualAxis_12() { return &___m_VerticalVirtualAxis_12; }
	inline void set_m_VerticalVirtualAxis_12(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * value)
	{
		___m_VerticalVirtualAxis_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalVirtualAxis_12), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_t2F1DF79DABE7E49169CB22FCF65C0237720ACEDD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PlayerController::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// UnityEngine.ParticleSystem PlayerController::particle
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particle_5;
	// GroundController PlayerController::groundController
	GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * ___groundController_6;
	// System.Int32 PlayerController::dirTurn
	int32_t ___dirTurn_7;
	// System.Boolean PlayerController::touchDisable
	bool ___touchDisable_8;
	// System.Boolean PlayerController::isPlayerHitTheWall
	bool ___isPlayerHitTheWall_9;
	// System.Boolean PlayerController::gameOver
	bool ___gameOver_10;
	// System.Single PlayerController::movingSpeedOfPlayer
	float ___movingSpeedOfPlayer_11;
	// System.Single PlayerController::movingSpeedIncrement
	float ___movingSpeedIncrement_12;
	// System.Single PlayerController::timeToDestroyParticle
	float ___timeToDestroyParticle_13;
	// UnityEngine.ParticleSystem PlayerController::particleTemp
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleTemp_14;
	// UnityEngine.Vector3 PlayerController::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_15;
	// System.Boolean PlayerController::hittedWallLeft
	bool ___hittedWallLeft_16;
	// System.Boolean PlayerController::hittedWallright
	bool ___hittedWallright_17;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_particle_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___particle_5)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_particle_5() const { return ___particle_5; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_particle_5() { return &___particle_5; }
	inline void set_particle_5(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___particle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___particle_5), (void*)value);
	}

	inline static int32_t get_offset_of_groundController_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___groundController_6)); }
	inline GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * get_groundController_6() const { return ___groundController_6; }
	inline GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 ** get_address_of_groundController_6() { return &___groundController_6; }
	inline void set_groundController_6(GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * value)
	{
		___groundController_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundController_6), (void*)value);
	}

	inline static int32_t get_offset_of_dirTurn_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___dirTurn_7)); }
	inline int32_t get_dirTurn_7() const { return ___dirTurn_7; }
	inline int32_t* get_address_of_dirTurn_7() { return &___dirTurn_7; }
	inline void set_dirTurn_7(int32_t value)
	{
		___dirTurn_7 = value;
	}

	inline static int32_t get_offset_of_touchDisable_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___touchDisable_8)); }
	inline bool get_touchDisable_8() const { return ___touchDisable_8; }
	inline bool* get_address_of_touchDisable_8() { return &___touchDisable_8; }
	inline void set_touchDisable_8(bool value)
	{
		___touchDisable_8 = value;
	}

	inline static int32_t get_offset_of_isPlayerHitTheWall_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___isPlayerHitTheWall_9)); }
	inline bool get_isPlayerHitTheWall_9() const { return ___isPlayerHitTheWall_9; }
	inline bool* get_address_of_isPlayerHitTheWall_9() { return &___isPlayerHitTheWall_9; }
	inline void set_isPlayerHitTheWall_9(bool value)
	{
		___isPlayerHitTheWall_9 = value;
	}

	inline static int32_t get_offset_of_gameOver_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___gameOver_10)); }
	inline bool get_gameOver_10() const { return ___gameOver_10; }
	inline bool* get_address_of_gameOver_10() { return &___gameOver_10; }
	inline void set_gameOver_10(bool value)
	{
		___gameOver_10 = value;
	}

	inline static int32_t get_offset_of_movingSpeedOfPlayer_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___movingSpeedOfPlayer_11)); }
	inline float get_movingSpeedOfPlayer_11() const { return ___movingSpeedOfPlayer_11; }
	inline float* get_address_of_movingSpeedOfPlayer_11() { return &___movingSpeedOfPlayer_11; }
	inline void set_movingSpeedOfPlayer_11(float value)
	{
		___movingSpeedOfPlayer_11 = value;
	}

	inline static int32_t get_offset_of_movingSpeedIncrement_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___movingSpeedIncrement_12)); }
	inline float get_movingSpeedIncrement_12() const { return ___movingSpeedIncrement_12; }
	inline float* get_address_of_movingSpeedIncrement_12() { return &___movingSpeedIncrement_12; }
	inline void set_movingSpeedIncrement_12(float value)
	{
		___movingSpeedIncrement_12 = value;
	}

	inline static int32_t get_offset_of_timeToDestroyParticle_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___timeToDestroyParticle_13)); }
	inline float get_timeToDestroyParticle_13() const { return ___timeToDestroyParticle_13; }
	inline float* get_address_of_timeToDestroyParticle_13() { return &___timeToDestroyParticle_13; }
	inline void set_timeToDestroyParticle_13(float value)
	{
		___timeToDestroyParticle_13 = value;
	}

	inline static int32_t get_offset_of_particleTemp_14() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___particleTemp_14)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_particleTemp_14() const { return ___particleTemp_14; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_particleTemp_14() { return &___particleTemp_14; }
	inline void set_particleTemp_14(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___particleTemp_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___particleTemp_14), (void*)value);
	}

	inline static int32_t get_offset_of_dir_15() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___dir_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_15() const { return ___dir_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_15() { return &___dir_15; }
	inline void set_dir_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_15 = value;
	}

	inline static int32_t get_offset_of_hittedWallLeft_16() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___hittedWallLeft_16)); }
	inline bool get_hittedWallLeft_16() const { return ___hittedWallLeft_16; }
	inline bool* get_address_of_hittedWallLeft_16() { return &___hittedWallLeft_16; }
	inline void set_hittedWallLeft_16(bool value)
	{
		___hittedWallLeft_16 = value;
	}

	inline static int32_t get_offset_of_hittedWallright_17() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___hittedWallright_17)); }
	inline bool get_hittedWallright_17() const { return ___hittedWallright_17; }
	inline bool* get_address_of_hittedWallright_17() { return &___hittedWallright_17; }
	inline void set_hittedWallright_17(bool value)
	{
		___hittedWallright_17 = value;
	}
};


// ScoreManager
struct ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 ScoreManager::<Score>k__BackingField
	int32_t ___U3CScoreU3Ek__BackingField_5;
	// System.Int32 ScoreManager::<HighScore>k__BackingField
	int32_t ___U3CHighScoreU3Ek__BackingField_6;
	// System.Boolean ScoreManager::<HasNewHighScore>k__BackingField
	bool ___U3CHasNewHighScoreU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CScoreU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113, ___U3CScoreU3Ek__BackingField_5)); }
	inline int32_t get_U3CScoreU3Ek__BackingField_5() const { return ___U3CScoreU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CScoreU3Ek__BackingField_5() { return &___U3CScoreU3Ek__BackingField_5; }
	inline void set_U3CScoreU3Ek__BackingField_5(int32_t value)
	{
		___U3CScoreU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CHighScoreU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113, ___U3CHighScoreU3Ek__BackingField_6)); }
	inline int32_t get_U3CHighScoreU3Ek__BackingField_6() const { return ___U3CHighScoreU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CHighScoreU3Ek__BackingField_6() { return &___U3CHighScoreU3Ek__BackingField_6; }
	inline void set_U3CHighScoreU3Ek__BackingField_6(int32_t value)
	{
		___U3CHighScoreU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CHasNewHighScoreU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113, ___U3CHasNewHighScoreU3Ek__BackingField_7)); }
	inline bool get_U3CHasNewHighScoreU3Ek__BackingField_7() const { return ___U3CHasNewHighScoreU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CHasNewHighScoreU3Ek__BackingField_7() { return &___U3CHasNewHighScoreU3Ek__BackingField_7; }
	inline void set_U3CHasNewHighScoreU3Ek__BackingField_7(bool value)
	{
		___U3CHasNewHighScoreU3Ek__BackingField_7 = value;
	}
};

struct ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields
{
public:
	// ScoreManager ScoreManager::Instance
	ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * ___Instance_4;
	// System.Action`1<System.Int32> ScoreManager::ScoreUpdated
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___ScoreUpdated_8;
	// System.Action`1<System.Int32> ScoreManager::HighscoreUpdated
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___HighscoreUpdated_9;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields, ___Instance_4)); }
	inline ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * get_Instance_4() const { return ___Instance_4; }
	inline ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_ScoreUpdated_8() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields, ___ScoreUpdated_8)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_ScoreUpdated_8() const { return ___ScoreUpdated_8; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_ScoreUpdated_8() { return &___ScoreUpdated_8; }
	inline void set_ScoreUpdated_8(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___ScoreUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScoreUpdated_8), (void*)value);
	}

	inline static int32_t get_offset_of_HighscoreUpdated_9() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields, ___HighscoreUpdated_9)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_HighscoreUpdated_9() const { return ___HighscoreUpdated_9; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_HighscoreUpdated_9() { return &___HighscoreUpdated_9; }
	inline void set_HighscoreUpdated_9(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___HighscoreUpdated_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HighscoreUpdated_9), (void*)value);
	}
};


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 SoundManager::maxSimultaneousSounds
	int32_t ___maxSimultaneousSounds_5;
	// SoundManager/Sound SoundManager::hitButton
	Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * ___hitButton_6;
	// SoundManager/Sound SoundManager::hitCoin
	Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * ___hitCoin_7;
	// SoundManager/Sound SoundManager::randomGround
	Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * ___randomGround_8;
	// SoundManager/Sound SoundManager::gameOver
	Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * ___gameOver_9;
	// UnityEngine.AudioSource SoundManager::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_11;

public:
	inline static int32_t get_offset_of_maxSimultaneousSounds_5() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___maxSimultaneousSounds_5)); }
	inline int32_t get_maxSimultaneousSounds_5() const { return ___maxSimultaneousSounds_5; }
	inline int32_t* get_address_of_maxSimultaneousSounds_5() { return &___maxSimultaneousSounds_5; }
	inline void set_maxSimultaneousSounds_5(int32_t value)
	{
		___maxSimultaneousSounds_5 = value;
	}

	inline static int32_t get_offset_of_hitButton_6() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___hitButton_6)); }
	inline Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * get_hitButton_6() const { return ___hitButton_6; }
	inline Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 ** get_address_of_hitButton_6() { return &___hitButton_6; }
	inline void set_hitButton_6(Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * value)
	{
		___hitButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitButton_6), (void*)value);
	}

	inline static int32_t get_offset_of_hitCoin_7() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___hitCoin_7)); }
	inline Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * get_hitCoin_7() const { return ___hitCoin_7; }
	inline Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 ** get_address_of_hitCoin_7() { return &___hitCoin_7; }
	inline void set_hitCoin_7(Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * value)
	{
		___hitCoin_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitCoin_7), (void*)value);
	}

	inline static int32_t get_offset_of_randomGround_8() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___randomGround_8)); }
	inline Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * get_randomGround_8() const { return ___randomGround_8; }
	inline Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 ** get_address_of_randomGround_8() { return &___randomGround_8; }
	inline void set_randomGround_8(Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * value)
	{
		___randomGround_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___randomGround_8), (void*)value);
	}

	inline static int32_t get_offset_of_gameOver_9() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___gameOver_9)); }
	inline Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * get_gameOver_9() const { return ___gameOver_9; }
	inline Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 ** get_address_of_gameOver_9() { return &___gameOver_9; }
	inline void set_gameOver_9(Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * value)
	{
		___gameOver_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOver_9), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_11() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___audioSource_11)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_11() const { return ___audioSource_11; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_11() { return &___audioSource_11; }
	inline void set_audioSource_11(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_11), (void*)value);
	}
};

struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields
{
public:
	// SoundManager SoundManager::Instance
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___Instance_4;
	// SoundManager/OnMuteStatusChanged SoundManager::MuteStatusChanged
	OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * ___MuteStatusChanged_10;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___Instance_4)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_Instance_4() const { return ___Instance_4; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_MuteStatusChanged_10() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___MuteStatusChanged_10)); }
	inline OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * get_MuteStatusChanged_10() const { return ___MuteStatusChanged_10; }
	inline OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 ** get_address_of_MuteStatusChanged_10() { return &___MuteStatusChanged_10; }
	inline void set_MuteStatusChanged_10(OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * value)
	{
		___MuteStatusChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MuteStatusChanged_10), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t27C209D4AB4E716E594657AAE6B1C75A7C4905A9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_t8B5B07F7E95F2AE39BE3A059459C1A5ACCE96427 * ___mapping_4;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_7;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___m_SteerAxis_8;

public:
	inline static int32_t get_offset_of_mapping_4() { return static_cast<int32_t>(offsetof(TiltInput_t27C209D4AB4E716E594657AAE6B1C75A7C4905A9, ___mapping_4)); }
	inline AxisMapping_t8B5B07F7E95F2AE39BE3A059459C1A5ACCE96427 * get_mapping_4() const { return ___mapping_4; }
	inline AxisMapping_t8B5B07F7E95F2AE39BE3A059459C1A5ACCE96427 ** get_address_of_mapping_4() { return &___mapping_4; }
	inline void set_mapping_4(AxisMapping_t8B5B07F7E95F2AE39BE3A059459C1A5ACCE96427 * value)
	{
		___mapping_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapping_4), (void*)value);
	}

	inline static int32_t get_offset_of_tiltAroundAxis_5() { return static_cast<int32_t>(offsetof(TiltInput_t27C209D4AB4E716E594657AAE6B1C75A7C4905A9, ___tiltAroundAxis_5)); }
	inline int32_t get_tiltAroundAxis_5() const { return ___tiltAroundAxis_5; }
	inline int32_t* get_address_of_tiltAroundAxis_5() { return &___tiltAroundAxis_5; }
	inline void set_tiltAroundAxis_5(int32_t value)
	{
		___tiltAroundAxis_5 = value;
	}

	inline static int32_t get_offset_of_fullTiltAngle_6() { return static_cast<int32_t>(offsetof(TiltInput_t27C209D4AB4E716E594657AAE6B1C75A7C4905A9, ___fullTiltAngle_6)); }
	inline float get_fullTiltAngle_6() const { return ___fullTiltAngle_6; }
	inline float* get_address_of_fullTiltAngle_6() { return &___fullTiltAngle_6; }
	inline void set_fullTiltAngle_6(float value)
	{
		___fullTiltAngle_6 = value;
	}

	inline static int32_t get_offset_of_centreAngleOffset_7() { return static_cast<int32_t>(offsetof(TiltInput_t27C209D4AB4E716E594657AAE6B1C75A7C4905A9, ___centreAngleOffset_7)); }
	inline float get_centreAngleOffset_7() const { return ___centreAngleOffset_7; }
	inline float* get_address_of_centreAngleOffset_7() { return &___centreAngleOffset_7; }
	inline void set_centreAngleOffset_7(float value)
	{
		___centreAngleOffset_7 = value;
	}

	inline static int32_t get_offset_of_m_SteerAxis_8() { return static_cast<int32_t>(offsetof(TiltInput_t27C209D4AB4E716E594657AAE6B1C75A7C4905A9, ___m_SteerAxis_8)); }
	inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * get_m_SteerAxis_8() const { return ___m_SteerAxis_8; }
	inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 ** get_address_of_m_SteerAxis_8() { return &___m_SteerAxis_8; }
	inline void set_m_SteerAxis_8(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * value)
	{
		___m_SteerAxis_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SteerAxis_8), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption UnityStandardAssets.CrossPlatformInput.TouchPad::axesToUse
	int32_t ___axesToUse_4;
	// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle UnityStandardAssets.CrossPlatformInput.TouchPad::controlStyle
	int32_t ___controlStyle_5;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::verticalAxisName
	String_t* ___verticalAxisName_7;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Xsensitivity
	float ___Xsensitivity_8;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Ysensitivity
	float ___Ysensitivity_9;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_StartPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_StartPos_10;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousDelta_11;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_JoytickOutput
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_JoytickOutput_12;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseX
	bool ___m_UseX_13;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseY
	bool ___m_UseY_14;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_HorizontalVirtualAxis
	VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___m_HorizontalVirtualAxis_15;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_VerticalVirtualAxis
	VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___m_VerticalVirtualAxis_16;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_Dragging
	bool ___m_Dragging_17;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Id
	int32_t ___m_Id_18;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousTouchPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousTouchPos_19;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_20;
	// UnityEngine.UI.Image UnityStandardAssets.CrossPlatformInput.TouchPad::m_Image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_Image_21;

public:
	inline static int32_t get_offset_of_axesToUse_4() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___axesToUse_4)); }
	inline int32_t get_axesToUse_4() const { return ___axesToUse_4; }
	inline int32_t* get_address_of_axesToUse_4() { return &___axesToUse_4; }
	inline void set_axesToUse_4(int32_t value)
	{
		___axesToUse_4 = value;
	}

	inline static int32_t get_offset_of_controlStyle_5() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___controlStyle_5)); }
	inline int32_t get_controlStyle_5() const { return ___controlStyle_5; }
	inline int32_t* get_address_of_controlStyle_5() { return &___controlStyle_5; }
	inline void set_controlStyle_5(int32_t value)
	{
		___controlStyle_5 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_6() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___horizontalAxisName_6)); }
	inline String_t* get_horizontalAxisName_6() const { return ___horizontalAxisName_6; }
	inline String_t** get_address_of_horizontalAxisName_6() { return &___horizontalAxisName_6; }
	inline void set_horizontalAxisName_6(String_t* value)
	{
		___horizontalAxisName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___horizontalAxisName_6), (void*)value);
	}

	inline static int32_t get_offset_of_verticalAxisName_7() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___verticalAxisName_7)); }
	inline String_t* get_verticalAxisName_7() const { return ___verticalAxisName_7; }
	inline String_t** get_address_of_verticalAxisName_7() { return &___verticalAxisName_7; }
	inline void set_verticalAxisName_7(String_t* value)
	{
		___verticalAxisName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verticalAxisName_7), (void*)value);
	}

	inline static int32_t get_offset_of_Xsensitivity_8() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___Xsensitivity_8)); }
	inline float get_Xsensitivity_8() const { return ___Xsensitivity_8; }
	inline float* get_address_of_Xsensitivity_8() { return &___Xsensitivity_8; }
	inline void set_Xsensitivity_8(float value)
	{
		___Xsensitivity_8 = value;
	}

	inline static int32_t get_offset_of_Ysensitivity_9() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___Ysensitivity_9)); }
	inline float get_Ysensitivity_9() const { return ___Ysensitivity_9; }
	inline float* get_address_of_Ysensitivity_9() { return &___Ysensitivity_9; }
	inline void set_Ysensitivity_9(float value)
	{
		___Ysensitivity_9 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_10() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___m_StartPos_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_StartPos_10() const { return ___m_StartPos_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_StartPos_10() { return &___m_StartPos_10; }
	inline void set_m_StartPos_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_StartPos_10 = value;
	}

	inline static int32_t get_offset_of_m_PreviousDelta_11() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___m_PreviousDelta_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousDelta_11() const { return ___m_PreviousDelta_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousDelta_11() { return &___m_PreviousDelta_11; }
	inline void set_m_PreviousDelta_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousDelta_11 = value;
	}

	inline static int32_t get_offset_of_m_JoytickOutput_12() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___m_JoytickOutput_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_JoytickOutput_12() const { return ___m_JoytickOutput_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_JoytickOutput_12() { return &___m_JoytickOutput_12; }
	inline void set_m_JoytickOutput_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_JoytickOutput_12 = value;
	}

	inline static int32_t get_offset_of_m_UseX_13() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___m_UseX_13)); }
	inline bool get_m_UseX_13() const { return ___m_UseX_13; }
	inline bool* get_address_of_m_UseX_13() { return &___m_UseX_13; }
	inline void set_m_UseX_13(bool value)
	{
		___m_UseX_13 = value;
	}

	inline static int32_t get_offset_of_m_UseY_14() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___m_UseY_14)); }
	inline bool get_m_UseY_14() const { return ___m_UseY_14; }
	inline bool* get_address_of_m_UseY_14() { return &___m_UseY_14; }
	inline void set_m_UseY_14(bool value)
	{
		___m_UseY_14 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_15() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___m_HorizontalVirtualAxis_15)); }
	inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * get_m_HorizontalVirtualAxis_15() const { return ___m_HorizontalVirtualAxis_15; }
	inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 ** get_address_of_m_HorizontalVirtualAxis_15() { return &___m_HorizontalVirtualAxis_15; }
	inline void set_m_HorizontalVirtualAxis_15(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * value)
	{
		___m_HorizontalVirtualAxis_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalVirtualAxis_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_16() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___m_VerticalVirtualAxis_16)); }
	inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * get_m_VerticalVirtualAxis_16() const { return ___m_VerticalVirtualAxis_16; }
	inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 ** get_address_of_m_VerticalVirtualAxis_16() { return &___m_VerticalVirtualAxis_16; }
	inline void set_m_VerticalVirtualAxis_16(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * value)
	{
		___m_VerticalVirtualAxis_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalVirtualAxis_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Dragging_17() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___m_Dragging_17)); }
	inline bool get_m_Dragging_17() const { return ___m_Dragging_17; }
	inline bool* get_address_of_m_Dragging_17() { return &___m_Dragging_17; }
	inline void set_m_Dragging_17(bool value)
	{
		___m_Dragging_17 = value;
	}

	inline static int32_t get_offset_of_m_Id_18() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___m_Id_18)); }
	inline int32_t get_m_Id_18() const { return ___m_Id_18; }
	inline int32_t* get_address_of_m_Id_18() { return &___m_Id_18; }
	inline void set_m_Id_18(int32_t value)
	{
		___m_Id_18 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTouchPos_19() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___m_PreviousTouchPos_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousTouchPos_19() const { return ___m_PreviousTouchPos_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousTouchPos_19() { return &___m_PreviousTouchPos_19; }
	inline void set_m_PreviousTouchPos_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousTouchPos_19 = value;
	}

	inline static int32_t get_offset_of_m_Center_20() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___m_Center_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_20() const { return ___m_Center_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_20() { return &___m_Center_20; }
	inline void set_m_Center_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_20 = value;
	}

	inline static int32_t get_offset_of_m_Image_21() { return static_cast<int32_t>(offsetof(TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02, ___m_Image_21)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_Image_21() const { return ___m_Image_21; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_Image_21() { return &___m_Image_21; }
	inline void set_m_Image_21(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_Image_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_21), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIController
struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text UIController::score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___score_5;
	// UnityEngine.UI.Text UIController::bestScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___bestScore_6;
	// UnityEngine.UI.Text UIController::gold
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___gold_7;
	// UnityEngine.UI.Image UIController::muteButton
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___muteButton_8;
	// UnityEngine.UI.Image UIController::unMuteButton
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___unMuteButton_9;
	// UnityEngine.UI.Image UIController::replayButton
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___replayButton_10;
	// PlayerController UIController::playerController
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___playerController_11;
	// UnityEngine.GameObject UIController::rateMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rateMenu_12;
	// System.Int32 UIController::playCount
	int32_t ___playCount_13;

public:
	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___score_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_score_5() const { return ___score_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___score_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___score_5), (void*)value);
	}

	inline static int32_t get_offset_of_bestScore_6() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___bestScore_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_bestScore_6() const { return ___bestScore_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_bestScore_6() { return &___bestScore_6; }
	inline void set_bestScore_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___bestScore_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestScore_6), (void*)value);
	}

	inline static int32_t get_offset_of_gold_7() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___gold_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_gold_7() const { return ___gold_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_gold_7() { return &___gold_7; }
	inline void set_gold_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___gold_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gold_7), (void*)value);
	}

	inline static int32_t get_offset_of_muteButton_8() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___muteButton_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_muteButton_8() const { return ___muteButton_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_muteButton_8() { return &___muteButton_8; }
	inline void set_muteButton_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___muteButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___muteButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_unMuteButton_9() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___unMuteButton_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_unMuteButton_9() const { return ___unMuteButton_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_unMuteButton_9() { return &___unMuteButton_9; }
	inline void set_unMuteButton_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___unMuteButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unMuteButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_replayButton_10() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___replayButton_10)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_replayButton_10() const { return ___replayButton_10; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_replayButton_10() { return &___replayButton_10; }
	inline void set_replayButton_10(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___replayButton_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replayButton_10), (void*)value);
	}

	inline static int32_t get_offset_of_playerController_11() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___playerController_11)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_playerController_11() const { return ___playerController_11; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_playerController_11() { return &___playerController_11; }
	inline void set_playerController_11(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___playerController_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerController_11), (void*)value);
	}

	inline static int32_t get_offset_of_rateMenu_12() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___rateMenu_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_rateMenu_12() const { return ___rateMenu_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_rateMenu_12() { return &___rateMenu_12; }
	inline void set_rateMenu_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___rateMenu_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rateMenu_12), (void*)value);
	}

	inline static int32_t get_offset_of_playCount_13() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___playCount_13)); }
	inline int32_t get_playCount_13() const { return ___playCount_13; }
	inline int32_t* get_address_of_playCount_13() { return &___playCount_13; }
	inline void set_playCount_13(int32_t value)
	{
		___playCount_13 = value;
	}
};

struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_StaticFields
{
public:
	// UIController UIController::Instance
	UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_StaticFields, ___Instance_4)); }
	inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * get_Instance_4() const { return ___Instance_4; }
	inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// WallController
struct WallController_t4DC0906AB58DCC0029018EF8788CF11D4B4B96AE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421  : public BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_PointerData_14)); }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_MouseState_15)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD  : public PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_PrevActionTime_16)); }
	inline float get_m_PrevActionTime_16() const { return ___m_PrevActionTime_16; }
	inline float* get_address_of_m_PrevActionTime_16() { return &___m_PrevActionTime_16; }
	inline void set_m_PrevActionTime_16(float value)
	{
		___m_PrevActionTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMoveVector_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMoveVector_17() const { return ___m_LastMoveVector_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMoveVector_17() { return &___m_LastMoveVector_17; }
	inline void set_m_LastMoveVector_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMoveVector_17 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ConsecutiveMoveCount_18)); }
	inline int32_t get_m_ConsecutiveMoveCount_18() const { return ___m_ConsecutiveMoveCount_18; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_18() { return &___m_ConsecutiveMoveCount_18; }
	inline void set_m_ConsecutiveMoveCount_18(int32_t value)
	{
		___m_ConsecutiveMoveCount_18 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMousePosition_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMousePosition_19() const { return ___m_LastMousePosition_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMousePosition_19() { return &___m_LastMousePosition_19; }
	inline void set_m_LastMousePosition_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMousePosition_19 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_MousePosition_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_MousePosition_20() const { return ___m_MousePosition_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_MousePosition_20() { return &___m_MousePosition_20; }
	inline void set_m_MousePosition_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_MousePosition_20 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CurrentFocusedGameObject_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentFocusedGameObject_21() const { return ___m_CurrentFocusedGameObject_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentFocusedGameObject_21() { return &___m_CurrentFocusedGameObject_21; }
	inline void set_m_CurrentFocusedGameObject_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentFocusedGameObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFocusedGameObject_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputPointerEvent_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputPointerEvent_22)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_m_InputPointerEvent_22() const { return ___m_InputPointerEvent_22; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_m_InputPointerEvent_22() { return &___m_InputPointerEvent_22; }
	inline void set_m_InputPointerEvent_22(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___m_InputPointerEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputPointerEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_HorizontalAxis_23)); }
	inline String_t* get_m_HorizontalAxis_23() const { return ___m_HorizontalAxis_23; }
	inline String_t** get_address_of_m_HorizontalAxis_23() { return &___m_HorizontalAxis_23; }
	inline void set_m_HorizontalAxis_23(String_t* value)
	{
		___m_HorizontalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalAxis_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_VerticalAxis_24)); }
	inline String_t* get_m_VerticalAxis_24() const { return ___m_VerticalAxis_24; }
	inline String_t** get_address_of_m_VerticalAxis_24() { return &___m_VerticalAxis_24; }
	inline void set_m_VerticalAxis_24(String_t* value)
	{
		___m_VerticalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalAxis_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_SubmitButton_25)); }
	inline String_t* get_m_SubmitButton_25() const { return ___m_SubmitButton_25; }
	inline String_t** get_address_of_m_SubmitButton_25() { return &___m_SubmitButton_25; }
	inline void set_m_SubmitButton_25(String_t* value)
	{
		___m_SubmitButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubmitButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelButton_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CancelButton_26)); }
	inline String_t* get_m_CancelButton_26() const { return ___m_CancelButton_26; }
	inline String_t** get_address_of_m_CancelButton_26() { return &___m_CancelButton_26; }
	inline void set_m_CancelButton_26(String_t* value)
	{
		___m_CancelButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_27() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputActionsPerSecond_27)); }
	inline float get_m_InputActionsPerSecond_27() const { return ___m_InputActionsPerSecond_27; }
	inline float* get_address_of_m_InputActionsPerSecond_27() { return &___m_InputActionsPerSecond_27; }
	inline void set_m_InputActionsPerSecond_27(float value)
	{
		___m_InputActionsPerSecond_27 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_28() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_RepeatDelay_28)); }
	inline float get_m_RepeatDelay_28() const { return ___m_RepeatDelay_28; }
	inline float* get_address_of_m_RepeatDelay_28() { return &___m_RepeatDelay_28; }
	inline void set_m_RepeatDelay_28(float value)
	{
		___m_RepeatDelay_28 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_29() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ForceModuleActive_29)); }
	inline bool get_m_ForceModuleActive_29() const { return ___m_ForceModuleActive_29; }
	inline bool* get_address_of_m_ForceModuleActive_29() { return &___m_ForceModuleActive_29; }
	inline void set_m_ForceModuleActive_29(bool value)
	{
		___m_ForceModuleActive_29 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton[]
struct AxisTouchButtonU5BU5D_t72776D384169F1CB3BEA8B143321CE87BDB94DCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * m_Items[1];

public:
	inline AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * m_Items[1];

public:
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  m_Items[1];

public:
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);

// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_m4766470D2A3BCE44CFFE44BCAC0FDA0623B23372 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m88EDC66F4BAB51D1BA2BDB502EBE995F08F42E64 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_mDA9D3A2181CD74F9096BF1C7807802DE353E4E1A (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___axis0, const RuntimeMethod* method);
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * CrossPlatformInputManager_VirtualAxisReference_m181E96561480060A9559B3749982548E347D634A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_m639BD2D1A09BE33E8C82071921C4C14C57A68B39 (AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* Object_FindObjectsOfType_m6E4A383F89274D0F316FDDA39745C59025A11B02 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_mCC5EF7DB8EC863AC7030AC9AB92F46A723BB7748 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mAC358FAC6484FAA00EB187E0583ECD4576794C44_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321 (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_mF5AB872C58C8C9A01435623E0C2679F68B768595 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_m6676EAE387ED7F03018429E9198113891378087B (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_m4ACAB49EC1004299FDC5A2F547E9E5EC66F2F1DB (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_m670B5FE17F3239D65FDC176C613309D87D86B1CC (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_m5A5DE4693430AB47774341EFB6B368EBD45A4CC1 (String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator CameraController::FixCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraController_FixCamera_m5A66E6A47787F8CFC9F92E53AF64C8A39F29C297 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Collections.IEnumerator CameraController::MoveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraController_MoveCamera_m6C9ED23BA5E7D0F032360076FAB03542CB09833E (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method);
// System.Void CameraController/<MoveCamera>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCameraU3Ed__12__ctor_mA282C5BD73B18BCABC144DDDFA5391D8D42C7D95 (U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void CameraController/<FixCamera>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFixCameraU3Ed__13__ctor_m41933D5EF38DD045A69DE966CBCF74112B15D0E8 (U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * Component_GetComponent_m4DE64B46F790BD785FDDDAD364E0364CDDE05BDB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void CoinManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinManager_Reset_m0743630E461DF9321C5459F1225C9FA6B70086D5 (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void CoinManager::set_Coins(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoinManager_set_Coins_m4ACA2C8A59120AFA99AF38E18F01FDFE1FAD12E4_inline (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 CoinManager::get_Coins()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CoinManager_get_Coins_m0482D9A403BF3F3211D7BFD0925404357267925D_inline (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
inline void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, int32_t, const RuntimeMethod*))Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_m50B1FDC06838FEABE2C9E43F8AE4476426413240 (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_mD89211F517B446A581B7D7AA1079D8FEBFEC389D (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_m01EC1FD139D4DC78B03BD91601E694BB0FD99FCD (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_m504FCFBACFAF025BD335F73B9E6365D0877F21FC (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m4D5DAB8CD547D5200513D860FDA6DC3930150BAC (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___axis0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m7AEF52824F354DA313380E110D03D2800F1A9B21 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * ___button0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_mDC436E4797B5E7091462A67AC29559F8DE1FD688 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_mFD11E0016A1865D5A0C3E05ED7DC6C3F15DAF2EB (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * VirtualInput_VirtualAxisReference_mB9BFA6AD246B52D158CE8309581FE468DF756914 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m9F2D914919AF9FC38087D229A6B6C1845045B5EE (String_t* ___name0, bool ___raw1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_mDEE15F467D72B1B64C99473FFB2E7C3D65175B70 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m4A9FB6CF5DBD17EABABABFC241BBCBD2720B3EA9 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m5EF12D8C9F3A8F7FCC443E682DA1F456AAD5B1DD (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, float ___f0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1 (float ___t0, float ___length1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.IEnumerator GroundController::RandomGroundAndWall(UnityEngine.Vector3,System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GroundController_RandomGroundAndWall_m778C109F896870BA299F919751AA24EDCDFD0CEC (GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, int32_t ___numberOfGround1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___directionOfGround2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionOfTheWall3, int32_t ___dirTurn4, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list5, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void SoundManager::PlaySound(SoundManager/Sound,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_mA6B5BAC882A03D2643CB55C00F70976EAC6621F3 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * ___sound0, bool ___autoScaleVolume1, float ___maxVolumeScale2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.GameObject> GroundController::ListCopyOf(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * GroundController_ListCopyOf_mACDE5C448CD67B3B1AF50CD295038704F500CDF4 (GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * __this, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___listToCopy0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Collections.IEnumerator GroundController::ScaleGround(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GroundController_ScaleGround_m86C9369473D5C995023EFA39976D1FFCFB5B4A95 (GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ground0, float ___time1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void GroundController/<RandomGroundAndWall>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomGroundAndWallU3Ed__25__ctor_m9758DCC1D6B91343ABA73AF5696D3692EDE0C8DF (U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void GroundController/<ScaleGround>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScaleGroundU3Ed__27__ctor_m5487EC9350ABA2560378E2A6BB1BE2038E28F4D3 (U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_mDB627063A19E94CF4C7BDD682EB7205D46F9619A (String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_m10235FD4D0F3393790EBF5A58391886D78549173 (Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_m7D6CB9CF992E3F6A52D21E37B0293E2EF11EDDE0 (Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_m1708EC5391D82F8050E2F3E2939FE19A02B01DED (MobileControlRig_t2F1DF79DABE7E49169CB22FCF65C0237720ACEDD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801 (const RuntimeMethod* method)
{
	return ((  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * GameObject_AddComponent_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_mB2CBD09AEDFA298DD4A7A34CE5E001ABF4BB160D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD * GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_m8F79B98DE64549179F06D849E9F97E139B388221 (MobileControlRig_t2F1DF79DABE7E49169CB22FCF65C0237720ACEDD * __this, bool ___enabled0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m71595BAF216317FBF79F564F306D3A87F430EDE4 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m5E3A328FC6A6EC011EB337125A67468BDD86AAF4 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * ___button0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77 (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m9E1EF0D37885B89830E25966ACA9241FE6A67B05 (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0)
inline VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454 (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * (*) (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_mCE54D249830BB224C0E7868831F5DE9872721ECA (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0)
inline VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214 (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * (*) (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mAAC725DA03D80EC7275B0F0B82528E3C21670ADE (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_mD4D0FD8E203575FE98152A62BF6B16071E383F5C (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m6C10A64F6C990B87627E8DDE6C1FFCFEBCD8FDB7 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_mE7D1541E27B10531F1542C55781ED62EED0DC37F (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mD1EBB3A0B0A88B5CC0589120B42106447F9ED065_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m39FA60B6A3FB2A793B3825E6EE488A0262224DCB (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerController::MovePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_MovePlayer_m30E6F304109EB37FA73D51E9E5D4D8A821271DB9 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void CoinManager::AddCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinManager_AddCoins_mB108638A4CCABAF5CE702FE1CC21B8F12D6309E6 (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, int32_t ___amount0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.ParticleSystem>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Simulate_mC2F2E060D7CE94D4936BA995C49827231DF5F1F8 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, float ___t0, bool ___withChildren1, bool ___restart2, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void ScoreManager::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_AddScore_m29230659E4787DE465721000EA79302A2D2B05D0 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, int32_t ___amount0, const RuntimeMethod* method);
// System.Void PlayerController/<MovePlayer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMovePlayerU3Ed__18__ctor_m6E7EE2B2D20D49E175B2B8866A02164F2EF2A9C4 (U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void ScoreManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Reset_m30E63C66FFEADE70DE216789164D2929816B0748 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method);
// System.Void ScoreManager::set_Score(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreManager_set_Score_mBA2C094FE2271625BD7FC0E35379758317471BC3_inline (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ScoreManager::set_HighScore(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreManager_set_HighScore_mFF9BE08C2F25EA0E97DFADD4AAD053E68589FCE0_inline (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ScoreManager::set_HasNewHighScore(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreManager_set_HasNewHighScore_m10A794EBFAD166E79295828858680403CF67E1F1_inline (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 ScoreManager::get_Score()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3_inline (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method);
// System.Int32 ScoreManager::get_HighScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScoreManager_get_HighScore_m21FE4C89A84AA1114CE87CC60143DF6A64538124_inline (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean SoundManager::IsMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_IsMuted_m69B8CBF349D293B9B670CF0ACE1FEAEA827659DD (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Void SoundManager::SetMute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_SetMute_mAC57D96044379B352DCF29A592897E31DC460180 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, bool ___isMuted0, const RuntimeMethod* method);
// System.Collections.IEnumerator SoundManager::CRPlaySound(SoundManager/Sound,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SoundManager_CRPlaySound_m616DC60B0FF65461EDB4815B21C42AFA7D60B960 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * ___sound0, bool ___autoScaleVolume1, float ___maxVolumeScale2, const RuntimeMethod* method);
// System.Void SoundManager/<CRPlaySound>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCRPlaySoundU3Ed__18__ctor_mEBE8F5DF8B571D8329DCC4381D6FEAAB7108D838 (U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::UnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_UnPause_m17BEE2B5A9607757EF0635450D210E4FD5E3EAF2 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void SoundManager/OnMuteStatusChanged::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMuteStatusChanged_Invoke_m47994F23764AF85A5DB528BA66657CE259999AAC (OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * __this, bool ___isMuted0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m69E2DFCF261D2D187ED756096B7E0DE622292C71 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_m963A27C3CD1CA33ED0054E029C046E6A492E4EF0 (float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m7EC2205F945F0DF0BAC67DC9907C8EDEFE97169E (float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_mAA1C2749743422A7326CDC4C40BEABCD1C6C1DDF (float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_m09ACDDC26B1A01D3904821C3547FE8CFC67CD6F0 (TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_m1E34D78B61E20D535CF499A7D7A0690D8082EBDA (TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m64342E501FD520FE5FE28A1AB5CF1B56334168F7 (String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void SoundManager::ToggleMute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ToggleMute_mAAE00DB82332AF519DA5307514F8FBEF4AD0823D (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(!0,!1)
inline void Dictionary_2_Add_m5939A79FB12E9E026B0EAC2CD560418C09105918 (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * __this, String_t* ___key0, VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 *, String_t*, VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_m531F00E4DD93A41FB0244FB71343FC9FB07DC4DF_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(!0,!1)
inline void Dictionary_2_Add_mCA41944174418E6CD20DF9DAA719EF69BA0D138F (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * __this, String_t* ___key0, VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C *, String_t*, VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m614D75F3386EB15F081A2F5D548B5743589BE939_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(!0)
inline bool Dictionary_2_Remove_m9ABB93EF4BB85F52163ADE13240BB5BCF7DBC14F (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(!0)
inline bool Dictionary_2_Remove_mFCA74707FFA822AA929227F758CE72F1D475F41B (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m3D48CAC3DC8D5A673C81F6986C8FE48DCD19CB59_inline (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::.ctor()
inline void Dictionary_2__ctor_m652A77AC86C1E2526D2D7F1E61C287D9B34B2069 (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::.ctor()
inline void Dictionary_2__ctor_mE6C778BE0A659414246FFABF6F957F741215BD86 (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void CoinManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE9FFA3430BF726B757D880F7B5074D87A9BC2CE6 (U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m486C4129232F0F15151DA882C1C9F1DFDFE5D047 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mE474E7B124D3E784ADF9D3532BC0A75F2684A2A2_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m61D9709975B67900CAD15101BF9C3AD57D2D88D0_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m50F9D1236BD4CFA9C3136E0D9321DF9604D5C021 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_mEF2365424C0A01C48B1D95066D01E5DC0B5B6DFA_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m371812D456658C76DBC0128EC168A3091BBDF5C0_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0 (const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m6EFB512B492D6FD6475DE35B931F27CE5B107741 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void ScoreManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3E27B6F030262B16CC606C881CC4252D9B0A75BB (U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, float ___volumeScale1, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnEnable_mD8C2E1D724758527A2846C09CC7937830BA33AA9 (AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!CrossPlatformInputManager.AxisExists(axisName))
		String_t* L_0 = __this->get_axisName_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_AxisExists_m4766470D2A3BCE44CFFE44BCAC0FDA0623B23372(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// m_Axis = new CrossPlatformInputManager.VirtualAxis(axisName);
		String_t* L_2 = __this->get_axisName_4();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_3 = (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 *)il2cpp_codegen_object_new(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m88EDC66F4BAB51D1BA2BDB502EBE995F08F42E64(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_Axis_9(L_3);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_Axis);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_4 = __this->get_m_Axis_9();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDA9D3A2181CD74F9096BF1C7807802DE353E4E1A(L_4, /*hidden argument*/NULL);
		// }
		goto IL_003c;
	}

IL_002b:
	{
		// m_Axis = CrossPlatformInputManager.VirtualAxisReference(axisName);
		String_t* L_5 = __this->get_axisName_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_6;
		L_6 = CrossPlatformInputManager_VirtualAxisReference_m181E96561480060A9559B3749982548E347D634A(L_5, /*hidden argument*/NULL);
		__this->set_m_Axis_9(L_6);
	}

IL_003c:
	{
		// FindPairedButton();
		AxisTouchButton_FindPairedButton_m639BD2D1A09BE33E8C82071921C4C14C57A68B39(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_m639BD2D1A09BE33E8C82071921C4C14C57A68B39 (AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisTouchButtonU5BU5D_t72776D384169F1CB3BEA8B143321CE87BDB94DCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AxisTouchButtonU5BU5D_t72776D384169F1CB3BEA8B143321CE87BDB94DCD* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var otherAxisButtons = FindObjectsOfType(typeof(AxisTouchButton)) as AxisTouchButton[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2;
		L_2 = Object_FindObjectsOfType_m6E4A383F89274D0F316FDDA39745C59025A11B02(L_1, /*hidden argument*/NULL);
		V_0 = ((AxisTouchButtonU5BU5D_t72776D384169F1CB3BEA8B143321CE87BDB94DCD*)IsInst((RuntimeObject*)L_2, AxisTouchButtonU5BU5D_t72776D384169F1CB3BEA8B143321CE87BDB94DCD_il2cpp_TypeInfo_var));
		// if (otherAxisButtons != null)
		AxisTouchButtonU5BU5D_t72776D384169F1CB3BEA8B143321CE87BDB94DCD* L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		V_1 = 0;
		goto IL_0049;
	}

IL_001c:
	{
		// if (otherAxisButtons[i].axisName == axisName && otherAxisButtons[i] != this)
		AxisTouchButtonU5BU5D_t72776D384169F1CB3BEA8B143321CE87BDB94DCD* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->get_axisName_4();
		String_t* L_9 = __this->get_axisName_4();
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		AxisTouchButtonU5BU5D_t72776D384169F1CB3BEA8B143321CE87BDB94DCD* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, __this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0045;
		}
	}
	{
		// m_PairedWith = otherAxisButtons[i];
		AxisTouchButtonU5BU5D_t72776D384169F1CB3BEA8B143321CE87BDB94DCD* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->set_m_PairedWith_8(L_19);
	}

IL_0045:
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0049:
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		int32_t L_21 = V_1;
		AxisTouchButtonU5BU5D_t72776D384169F1CB3BEA8B143321CE87BDB94DCD* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_001c;
		}
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnDisable_m5694ED6BFFCD06F121BBEA0FE552FF6B52D3078F (AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * __this, const RuntimeMethod* method)
{
	{
		// m_Axis.Remove();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_0 = __this->get_m_Axis_9();
		NullCheck(L_0);
		VirtualAxis_Remove_mCC5EF7DB8EC863AC7030AC9AB92F46A723BB7748(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerDown_m9AFBEB27DC7F3EA9E1EAE3BBF652EBC59BC66D4F (AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PairedWith == null)
		AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * L_0 = __this->get_m_PairedWith_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// FindPairedButton();
		AxisTouchButton_FindPairedButton_m639BD2D1A09BE33E8C82071921C4C14C57A68B39(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// m_Axis.Update(Mathf.MoveTowards(m_Axis.GetValue, axisValue, responseSpeed * Time.deltaTime));
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_2 = __this->get_m_Axis_9();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_3 = __this->get_m_Axis_9();
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualAxis_get_GetValue_mAC358FAC6484FAA00EB187E0583ECD4576794C44_inline(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_axisValue_5();
		float L_6 = __this->get_responseSpeed_6();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_8;
		L_8 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321(L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline(L_2, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerUp_mC38DDA9F687A46DE07977EBCFC2A9EF9242C248A (AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	{
		// m_Axis.Update(Mathf.MoveTowards(m_Axis.GetValue, 0, responseSpeed * Time.deltaTime));
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_0 = __this->get_m_Axis_9();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_1 = __this->get_m_Axis_9();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualAxis_get_GetValue_mAC358FAC6484FAA00EB187E0583ECD4576794C44_inline(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_responseSpeed_6();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_5;
		L_5 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321(L_2, (0.0f), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton__ctor_mD1833F5DAAC806A70E989E4AC6A1C06BE04F2649 (AxisTouchButton_t9FC0DC97B56B6174DD71927ECAE0E55ABE2AF0EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string axisName = "Horizontal"; // The name of the axis
		__this->set_axisName_4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public float axisValue = 1; // The axis that the value has
		__this->set_axisValue_5((1.0f));
		// public float responseSpeed = 3; // The speed at which the axis touch button responds
		__this->set_responseSpeed_6((3.0f));
		// public float returnToCentreSpeed = 3; // The speed at which the button will return to its centre
		__this->set_returnToCentreSpeed_7((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_OnEnable_mD1D2CC3990A4EEDF5F393F0F5117E6634B2A5E9E (ButtonHandler_t2435B6E8E35E91E6B881A6968883722652B75A1C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetDownState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetDownState_m7AB2F0D5E7AD859EBBBB3EDF459EF7279DCFA65E (ButtonHandler_t2435B6E8E35E91E6B881A6968883722652B75A1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetButtonDown(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonDown_mF5AB872C58C8C9A01435623E0C2679F68B768595(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetUpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetUpState_m2BE684CD4BD7766903C83E3A2A78DDD38F941952 (ButtonHandler_t2435B6E8E35E91E6B881A6968883722652B75A1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetButtonUp(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonUp_m6676EAE387ED7F03018429E9198113891378087B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisPositiveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisPositiveState_mA25C8B1267D683CF9CBF988958190D84EBE9EC2A (ButtonHandler_t2435B6E8E35E91E6B881A6968883722652B75A1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisPositive(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisPositive_m4ACAB49EC1004299FDC5A2F547E9E5EC66F2F1DB(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNeutralState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNeutralState_mBFD4413300A657D797F1035A3D772E0CD080C990 (ButtonHandler_t2435B6E8E35E91E6B881A6968883722652B75A1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisZero(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisZero_m670B5FE17F3239D65FDC176C613309D87D86B1CC(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNegativeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNegativeState_mFD8E0D0F76D32DDEB582DA2FEA1F71A2B75C8B2A (ButtonHandler_t2435B6E8E35E91E6B881A6968883722652B75A1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisNegative(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisNegative_m5A5DE4693430AB47774341EFB6B368EBD45A4CC1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_Update_m9949BD0A3FBB84B766C797804FC347F5CBD52699 (ButtonHandler_t2435B6E8E35E91E6B881A6968883722652B75A1C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler__ctor_mD247ECA143AE9FA0DAA5D1D2E41ED6CB8D46BB08 (ButtonHandler_t2435B6E8E35E91E6B881A6968883722652B75A1C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_mBDE87C2FCF352957C2B86B67610667663422FBE6 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int indexColor = Random.Range(0, colors.Length);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = __this->get_colors_7();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		// cam.backgroundColor = colors[indexColor];
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_cam_4();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_3 = __this->get_colors_7();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF(L_2, L_6, /*hidden argument*/NULL);
		// isMoved = false;
		__this->set_isMoved_8((bool)0);
		// cameraFixedLeft = false;
		__this->set_cameraFixedLeft_9((bool)0);
		// cameraFixedRight = false;
		__this->set_cameraFixedRight_10((bool)0);
		// temp = groundController.groundRandomNumber;
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_7 = __this->get_groundController_6();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_groundRandomNumber_10();
		__this->set_temp_13(L_8);
		// }
		return;
	}
}
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_m3C257AC762117CFDDAD03C9C4FBBFDE51C61D534 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// if (groundController.finishCreateGround && !isMoved)
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_0 = __this->get_groundController_6();
		NullCheck(L_0);
		bool L_1 = L_0->get_finishCreateGround_12();
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		bool L_2 = __this->get_isMoved_8();
		if (L_2)
		{
			goto IL_004d;
		}
	}
	{
		// isMoved = true;
		__this->set_isMoved_8((bool)1);
		// if (temp < groundController.groundRandomNumber)
		int32_t L_3 = __this->get_temp_13();
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_4 = __this->get_groundController_6();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_groundRandomNumber_10();
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		// StartCoroutine(FixCamera());
		RuntimeObject* L_6;
		L_6 = CameraController_FixCamera_m5A66E6A47787F8CFC9F92E53AF64C8A39F29C297(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// temp = groundController.groundRandomNumber;
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_8 = __this->get_groundController_6();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_groundRandomNumber_10();
		__this->set_temp_13(L_9);
	}

IL_004d:
	{
		// if (!groundController.finishCreateGround)
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_10 = __this->get_groundController_6();
		NullCheck(L_10);
		bool L_11 = L_10->get_finishCreateGround_12();
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		// isMoved = false;
		__this->set_isMoved_8((bool)0);
	}

IL_0061:
	{
		// if (Input.GetMouseButtonDown(0) && !playerController.touchDisable)
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0091;
		}
	}
	{
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_13 = __this->get_playerController_5();
		NullCheck(L_13);
		bool L_14 = L_13->get_touchDisable_8();
		if (L_14)
		{
			goto IL_0091;
		}
	}
	{
		// if (playerController.dirTurn < 0)
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_15 = __this->get_playerController_5();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_dirTurn_7();
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		// StartCoroutine(MoveCamera());
		RuntimeObject* L_17;
		L_17 = CameraController_MoveCamera_m6C9ED23BA5E7D0F032360076FAB03542CB09833E(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_18;
		L_18 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_17, /*hidden argument*/NULL);
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator CameraController::MoveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraController_MoveCamera_m6C9ED23BA5E7D0F032360076FAB03542CB09833E (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E * L_0 = (U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E *)il2cpp_codegen_object_new(U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E_il2cpp_TypeInfo_var);
		U3CMoveCameraU3Ed__12__ctor_mA282C5BD73B18BCABC144DDDFA5391D8D42C7D95(L_0, 0, /*hidden argument*/NULL);
		U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator CameraController::FixCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraController_FixCamera_m5A66E6A47787F8CFC9F92E53AF64C8A39F29C297 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669 * L_0 = (U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669 *)il2cpp_codegen_object_new(U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669_il2cpp_TypeInfo_var);
		U3CFixCameraU3Ed__13__ctor_m41933D5EF38DD045A69DE966CBCF74112B15D0E8(L_0, 0, /*hidden argument*/NULL);
		U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m07EC5A8C82742876097619BE7DD9043F47327DAE (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// private float timeToMoveCamera = 0.5f;
		__this->set_timeToMoveCamera_11((0.5f));
		// private float timeToFixCamera = 0.3f;
		__this->set_timeToFixCamera_12((0.300000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraShake::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Awake_mD1656D7D85966B5A59A35E809B5BAB84A080A14C (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (camTransform == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_camTransform_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// camTransform = GetComponent(typeof(Transform)) as Transform;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_4;
		L_4 = Component_GetComponent_m4DE64B46F790BD785FDDDAD364E0364CDDE05BDB(__this, L_3, /*hidden argument*/NULL);
		__this->set_camTransform_4(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)IsInstClass((RuntimeObject*)L_4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)));
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void CameraShake::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_OnEnable_mC5F0D09F47325774263C96E1D04D7F5B086A7396 (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	{
		// originalPos = camTransform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_camTransform_4();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		__this->set_originalPos_8(L_1);
		// }
		return;
	}
}
// System.Void CameraShake::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Update_mA645C66F43D75201C877BCB3505623B08C30CCAB (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	{
		// if (shakeDuration > 0)
		float L_0 = __this->get_shakeDuration_5();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// camTransform.localPosition = originalPos + Random.insideUnitSphere * shakeAmount;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_camTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_originalPos_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90(/*hidden argument*/NULL);
		float L_4 = __this->get_shakeAmount_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_1, L_6, /*hidden argument*/NULL);
		// shakeDuration -= Time.deltaTime * decreaseFactor;
		float L_7 = __this->get_shakeDuration_5();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_9 = __this->get_decreaseFactor_7();
		__this->set_shakeDuration_5(((float)il2cpp_codegen_subtract((float)L_7, (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))));
		// }
		return;
	}

IL_004d:
	{
		// shakeDuration = 0f;
		__this->set_shakeDuration_5((0.0f));
		// camTransform.localPosition = originalPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_camTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_originalPos_8();
		NullCheck(L_10);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraShake::setShake(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_setShake_m7CD131D57F0BF7C92F4A9EEAAC00BBD76A912192 (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, float ___amount0, const RuntimeMethod* method)
{
	{
		// shakeDuration = amount;
		float L_0 = ___amount0;
		__this->set_shakeDuration_5(L_0);
		// }
		return;
	}
}
// System.Void CameraShake::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake__ctor_mB96D113BFE38658F4F65E8AE2F14388045C2AF68 (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	{
		// public float shakeAmount = 0.4f;
		__this->set_shakeAmount_6((0.400000006f));
		// public float decreaseFactor = 1.0f;
		__this->set_decreaseFactor_7((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 CoinManager::get_Coins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CoinManager_get_Coins_m0482D9A403BF3F3211D7BFD0925404357267925D (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, const RuntimeMethod* method)
{
	{
		// public int Coins { get; private set; }
		int32_t L_0 = __this->get_U3CCoinsU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void CoinManager::set_Coins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinManager_set_Coins_m4ACA2C8A59120AFA99AF38E18F01FDFE1FAD12E4 (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Coins { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCoinsU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void CoinManager::add_CoinsUpdated(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinManager_add_CoinsUpdated_m8F95749CFA2F0BBD55AED579C895C107A1B2E481 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->get_CoinsUpdated_6();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_5 = V_2;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *>((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B **)(((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->get_address_of_CoinsUpdated_6()), L_5, L_6);
		V_0 = L_7;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8 = V_0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_8) == ((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CoinManager::remove_CoinsUpdated(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinManager_remove_CoinsUpdated_mBA95BE1D34295DDA8A166CE640D803D58F5869E4 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->get_CoinsUpdated_6();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_5 = V_2;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *>((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B **)(((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->get_address_of_CoinsUpdated_6()), L_5, L_6);
		V_0 = L_7;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8 = V_0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_8) == ((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CoinManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinManager_Awake_m02257AB03709AFB029C51718253B583CE25409FB (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance)
		IL2CPP_RUNTIME_CLASS_INIT(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * L_0 = ((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0018:
	{
		// Instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CoinManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinManager_Start_mADB0DC63161F8C16FB6E3BB62B8CDF4A106E5F25 (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, const RuntimeMethod* method)
{
	{
		// Reset();
		CoinManager_Reset_m0743630E461DF9321C5459F1225C9FA6B70086D5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CoinManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinManager_Reset_m0743630E461DF9321C5459F1225C9FA6B70086D5 (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DA913C8FA5C16202F27441C46D20054CA5AF089);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Coins = PlayerPrefs.GetInt(COINS, INITIAL_COINS);
		int32_t L_0 = __this->get_INITIAL_COINS_7();
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral3DA913C8FA5C16202F27441C46D20054CA5AF089, L_0, /*hidden argument*/NULL);
		CoinManager_set_Coins_m4ACA2C8A59120AFA99AF38E18F01FDFE1FAD12E4_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CoinManager::AddCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinManager_AddCoins_mB108638A4CCABAF5CE702FE1CC21B8F12D6309E6 (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DA913C8FA5C16202F27441C46D20054CA5AF089);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Coins += amount;
		int32_t L_0;
		L_0 = CoinManager_get_Coins_m0482D9A403BF3F3211D7BFD0925404357267925D_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___amount0;
		CoinManager_set_Coins_m4ACA2C8A59120AFA99AF38E18F01FDFE1FAD12E4_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		// PlayerPrefs.SetInt(COINS, Coins);
		int32_t L_2;
		L_2 = CoinManager_get_Coins_m0482D9A403BF3F3211D7BFD0925404357267925D_inline(__this, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral3DA913C8FA5C16202F27441C46D20054CA5AF089, L_2, /*hidden argument*/NULL);
		// CoinsUpdated(Coins);
		IL2CPP_RUNTIME_CLASS_INIT(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->get_CoinsUpdated_6();
		int32_t L_4;
		L_4 = CoinManager_get_Coins_m0482D9A403BF3F3211D7BFD0925404357267925D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(L_3, L_4, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CoinManager::RemoveCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinManager_RemoveCoins_mC683D4FF0FC48D3179D147144DAA24EF3F6AB2E2 (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DA913C8FA5C16202F27441C46D20054CA5AF089);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Coins -= amount;
		int32_t L_0;
		L_0 = CoinManager_get_Coins_m0482D9A403BF3F3211D7BFD0925404357267925D_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___amount0;
		CoinManager_set_Coins_m4ACA2C8A59120AFA99AF38E18F01FDFE1FAD12E4_inline(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		// PlayerPrefs.SetInt(COINS, Coins);
		int32_t L_2;
		L_2 = CoinManager_get_Coins_m0482D9A403BF3F3211D7BFD0925404357267925D_inline(__this, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral3DA913C8FA5C16202F27441C46D20054CA5AF089, L_2, /*hidden argument*/NULL);
		// CoinsUpdated(Coins);
		IL2CPP_RUNTIME_CLASS_INIT(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->get_CoinsUpdated_6();
		int32_t L_4;
		L_4 = CoinManager_get_Coins_m0482D9A403BF3F3211D7BFD0925404357267925D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(L_3, L_4, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CoinManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinManager__ctor_m3F80C2463FFD611F342BBFEB8C9FF745C6F3A09B (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, const RuntimeMethod* method)
{
	{
		// int INITIAL_COINS = 100;
		__this->set_INITIAL_COINS_7(((int32_t)100));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CoinManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinManager__cctor_m98B4150EE02A29693A645BDD19C0ACA21E7767F4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__16_0_mEB383CF77380E219BB8E9AE30A7B10B8BAECFF8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static event Action<int> CoinsUpdated = delegate {};
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991_il2cpp_TypeInfo_var);
		U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991 * L_0 = ((U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__16_0_mEB383CF77380E219BB8E9AE30A7B10B8BAECFF8E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->set_CoinsUpdated_6(L_1);
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
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager__cctor_m3DA11007BA9960F289314B3995540642637E6B96 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_TouchInput = new MobileInput();
		MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * L_0 = (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 *)il2cpp_codegen_object_new(MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82_il2cpp_TypeInfo_var);
		MobileInput__ctor_m50B1FDC06838FEABE2C9E43F8AE4476426413240(L_0, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->set_s_TouchInput_1(L_0);
		// s_HardwareInput = new StandaloneInput();
		StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * L_1 = (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 *)il2cpp_codegen_object_new(StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3_il2cpp_TypeInfo_var);
		StandaloneInput__ctor_mD89211F517B446A581B7D7AA1079D8FEBFEC389D(L_1, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->set_s_HardwareInput_2(L_1);
		// activeInput = s_TouchInput;
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_2 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_s_TouchInput_1();
		((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->set_activeInput_0(L_2);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SwitchActiveInputMethod_m5509783E9C56F86EBCEC9A51323FEAC33F456485 (int32_t ___activeInputMethod0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___activeInputMethod0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___activeInputMethod0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// activeInput = s_HardwareInput;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_2 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_s_HardwareInput_2();
		((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->set_activeInput_0(L_2);
		// break;
		return;
	}

IL_0013:
	{
		// activeInput = s_TouchInput;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_3 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_s_TouchInput_1();
		((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->set_activeInput_0(L_3);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_m4766470D2A3BCE44CFFE44BCAC0FDA0623B23372 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.AxisExists(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualInput_AxisExists_m01EC1FD139D4DC78B03BD91601E694BB0FD99FCD(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_ButtonExists_m046F62C8CA5B80CB8B5EC9830C430C12155FBB4F (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.ButtonExists(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualInput_ButtonExists_m504FCFBACFAF025BD335F73B9E6365D0877F21FC(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_mDA9D3A2181CD74F9096BF1C7807802DE353E4E1A (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualAxis(axis);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_1 = ___axis0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualAxis_m4D5DAB8CD547D5200513D860FDA6DC3930150BAC(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m5E3A328FC6A6EC011EB337125A67468BDD86AAF4 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualButton(button);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_1 = ___button0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualButton_m7AEF52824F354DA313380E110D03D2800F1A9B21(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m64342E501FD520FE5FE28A1AB5CF1B56334168F7 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (name == null)
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("name");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CrossPlatformInputManager_UnRegisterVirtualAxis_m64342E501FD520FE5FE28A1AB5CF1B56334168F7_RuntimeMethod_var)));
	}

IL_000e:
	{
		// activeInput.UnRegisterVirtualAxis(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_2 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		VirtualInput_UnRegisterVirtualAxis_mDC436E4797B5E7091462A67AC29559F8DE1FD688(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m6EFB512B492D6FD6475DE35B931F27CE5B107741 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.UnRegisterVirtualButton(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualInput_UnRegisterVirtualButton_mFD11E0016A1865D5A0C3E05ED7DC6C3F15DAF2EB(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * CrossPlatformInputManager_VirtualAxisReference_m181E96561480060A9559B3749982548E347D634A (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.VirtualAxisReference(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_2;
		L_2 = VirtualInput_VirtualAxisReference_mB9BFA6AD246B52D158CE8309581FE468DF756914(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_mB7AB6DA9693D497643353CF2B97A48C75F95007E (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, false);
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m9F2D914919AF9FC38087D229A6B6C1845045B5EE(L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxisRaw_m2B6A9EE32A0AE8ABD902BB5F6B74D0BB814C42E8 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, true);
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m9F2D914919AF9FC38087D229A6B6C1845045B5EE(L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m9F2D914919AF9FC38087D229A6B6C1845045B5EE (String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetAxis(name, raw);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		bool L_2 = ___raw1;
		NullCheck(L_0);
		float L_3;
		L_3 = VirtFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButton_mF4FDF5B4FE1B224C4271E9B832CD8BA08AE73EFF (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButton(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_mCA7A96BB65979ADD959C6BFD8B6A3A1A7B1CDC26 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonDown(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonUp_mFB33294740857F8DE0BF7ACF110938B80C4DBDA5 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonUp(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_mF5AB872C58C8C9A01435623E0C2679F68B768595 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonDown(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_m6676EAE387ED7F03018429E9198113891378087B (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonUp(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_m4ACAB49EC1004299FDC5A2F547E9E5EC66F2F1DB (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisPositive(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_m5A5DE4693430AB47774341EFB6B368EBD45A4CC1 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisNegative(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_m670B5FE17F3239D65FDC176C613309D87D86B1CC (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisZero(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_mDB627063A19E94CF4C7BDD682EB7205D46F9619A (String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxis(name, value);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		float L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CrossPlatformInputManager_get_mousePosition_mE656A61832658E0E3DB01CC62D3998454087CAA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return activeInput.MousePosition(); }
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(14 /* UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_m963A27C3CD1CA33ED0054E029C046E6A492E4EF0 (float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionX(f);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionX_mDEE15F467D72B1B64C99473FFB2E7C3D65175B70(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m7EC2205F945F0DF0BAC67DC9907C8EDEFE97169E (float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionY(f);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionY_m4A9FB6CF5DBD17EABABABFC241BBCBD2720B3EA9(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_mAA1C2749743422A7326CDC4C40BEABCD1C6C1DDF (float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionZ(f);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * L_0 = ((CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionZ_m5EF12D8C9F3A8F7FCC443E682DA1F456AAD5B1DD(L_0, L_1, /*hidden argument*/NULL);
		// }
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
// System.Void GoldController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoldController_Update_m56DFE1744152FE3A32536470F10C42C2204EECC3 (GoldController_tF571D95F4BE86E883CF19510C9B8B95C033003D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Ray rayDown = new Ray(gameObject.transform.position, Vector3.down);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_4), L_2, L_3, /*hidden argument*/NULL);
		// if(!Physics.Raycast(rayDown,out hit, 0.5f))
		bool L_5;
		L_5 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_4, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (0.5f), /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0059;
		}
	}
	{
		// gameObject.GetComponent<Rigidbody>().isKinematic = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7;
		L_7 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		NullCheck(L_7);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_7, (bool)0, /*hidden argument*/NULL);
		// gameObject.GetComponent<Rigidbody>().velocity = Vector3.down * speedGoldFalling;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9;
		L_9 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_8, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		float L_11 = __this->get_speedGoldFalling_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_9, L_12, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void GoldController::OnBecameInvisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoldController_OnBecameInvisible_mB4EFDB00B698F788C96F1E5AC0BFD63C6C6BBADD (GoldController_tF571D95F4BE86E883CF19510C9B8B95C033003D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoldController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoldController__ctor_mE9CA68094ACA49CD2A1FF0C0F40DD4191FB80071 (GoldController_tF571D95F4BE86E883CF19510C9B8B95C033003D5 * __this, const RuntimeMethod* method)
{
	{
		// public float speedGoldFalling = 20f; // How fast gold falling down
		__this->set_speedGoldFalling_4((20.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GradientBack::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientBack_Start_mA61FA46952E700CACCE5F33A751833D9CEFB5ED2 (GradientBack_t6820F368B047DDA7593C54F4739409E4831316ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// camera = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_camera_7(L_0);
		// camera.clearFlags = CameraClearFlags.SolidColor;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_camera_7();
		NullCheck(L_1);
		Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373(L_1, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GradientBack::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientBack_Update_mC8465B11C602BD0386815BCFF3E31B48C7BA4506 (GradientBack_t6820F368B047DDA7593C54F4739409E4831316ED * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float t = Mathf.PingPong(Time.time, duration) / duration;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_duration_6();
		float L_2;
		L_2 = Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1(L_0, L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_duration_6();
		V_0 = ((float)((float)L_2/(float)L_3));
		// camera.backgroundColor = Color.Lerp(color1, color2, t);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_camera_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_color1_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = __this->get_color2_5();
		float L_7 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF(L_4, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GradientBack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientBack__ctor_m0C4CA5190505C44DECA18E180B6150F205432BC3 (GradientBack_t6820F368B047DDA7593C54F4739409E4831316ED * __this, const RuntimeMethod* method)
{
	{
		// public Color color1 = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		__this->set_color1_4(L_0);
		// public Color color2 = Color.blue;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		__this->set_color2_5(L_1);
		// public float duration = 3.0F;
		__this->set_duration_6((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Ground::OnAnimationEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ground_OnAnimationEnd_m149C35F6465BECCB04D1EBC08225D867B5D28766 (Ground_tA6C2CF3CC20EE1D731A5A21CBBF1F7A5E8898E90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<MeshRenderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_1;
		L_1 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_0, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_1);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_1, (bool)0, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ground::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ground__ctor_m5D2DB7DEB8F7D77327F42A8B58FA5A071C270754 (Ground_tA6C2CF3CC20EE1D731A5A21CBBF1F7A5E8898E90 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GroundController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundController_Start_m4504D082D5623FE60D32F66F1C952E060D2523E9 (GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// groundRandomNumber = 5;
		__this->set_groundRandomNumber_10(5);
		// firstPosOfGround = firstGround.transform.position + Vector3.forward; //Make firstPosOfGround equals to position of firstGround
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_firstGround_5();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		__this->set_firstPosOfGround_19(L_4);
		// listGroundLeft.Add(firstGround); // Add first ground for listGround_2
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_listGroundLeft_16();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_firstGround_5();
		NullCheck(L_5);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_5, L_6, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// StartCoroutine(RandomGroundAndWall(firstPosOfGround, groundRandomNumber, Vector3.forward, leftRandomPositionOfTheWall, 1, listGroundLeft));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_firstPosOfGround_19();
		int32_t L_8 = __this->get_groundRandomNumber_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_leftRandomPositionOfTheWall_20();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_11 = __this->get_listGroundLeft_16();
		RuntimeObject* L_12;
		L_12 = GroundController_RandomGroundAndWall_m778C109F896870BA299F919751AA24EDCDFD0CEC(__this, L_7, L_8, L_9, L_10, 1, L_11, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GroundController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundController_Update_m344BB2293F7704B541BC428367AB92F55C70D662 (GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF9E0076AA4141E7B80C3AE6BAA112DD6ACB5DDA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	int32_t V_4 = 0;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * V_5 = NULL;
	int32_t V_6 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_7 = NULL;
	{
		// if (playerController.gameOver)
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0 = __this->get_playerController_9();
		NullCheck(L_0);
		bool L_1 = L_0->get_gameOver_10();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Invoke("DestroyGroundAfterGameOver", timeToDestroyGroundAfterGameOver);
		float L_2 = __this->get_timeToDestroyGroundAfterGameOver_15();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralAF9E0076AA4141E7B80C3AE6BAA112DD6ACB5DDA, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// if (playerController.dirTurn < 0) // The player is running on left
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_3 = __this->get_playerController_9();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_dirTurn_7();
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_018f;
		}
	}
	{
		// if (playerController.isPlayerHitTheWall) // Player hit the wall
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_5 = __this->get_playerController_9();
		NullCheck(L_5);
		bool L_6 = L_5->get_isPlayerHitTheWall_9();
		if (!L_6)
		{
			goto IL_0318;
		}
	}
	{
		// if (!isGroundAndWallHaveRandomOnRight) // The ground have not create on right
		bool L_7 = __this->get_isGroundAndWallHaveRandomOnRight_22();
		if (L_7)
		{
			goto IL_0318;
		}
	}
	{
		// SoundManager.Instance.PlaySound(SoundManager.Instance.randomGround);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_8 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_9 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_9);
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_10 = L_9->get_randomGround_8();
		NullCheck(L_8);
		SoundManager_PlaySound_mA6B5BAC882A03D2643CB55C00F70976EAC6621F3(L_8, L_10, (bool)1, (1.0f), /*hidden argument*/NULL);
		// isGroundAndWallHaveRandomOnRight = true; // The ground and wall have create on right
		__this->set_isGroundAndWallHaveRandomOnRight_22((bool)1);
		// isGroundAndWallHaveRandomOnLeft = false; // Make the ground and wall haven't create on left
		__this->set_isGroundAndWallHaveRandomOnLeft_23((bool)0);
		// if (listGroundRight != null) // If listGroundRight not null
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_11 = __this->get_listGroundRight_17();
		if (!L_11)
		{
			goto IL_00d3;
		}
	}
	{
		// List<GameObject> newList = ListCopyOf(listGroundRight); // Create newList and point it to a list
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_12 = __this->get_listGroundRight_17();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_13;
		L_13 = GroundController_ListCopyOf_mACDE5C448CD67B3B1AF50CD295038704F500CDF4(__this, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// for (int i = 0; i < newList.Count; i++)
		V_2 = 0;
		goto IL_00ae;
	}

IL_008b:
	{
		// GameObject countGround = newList[i];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		V_3 = L_16;
		// StartCoroutine(ScaleGround(countGround, timeToDestroyGround * (float)i));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_3;
		float L_18 = __this->get_timeToDestroyGround_14();
		int32_t L_19 = V_2;
		RuntimeObject* L_20;
		L_20 = GroundController_ScaleGround_m86C9369473D5C995023EFA39976D1FFCFB5B4A95(__this, L_17, ((float)il2cpp_codegen_multiply((float)L_18, (float)((float)((float)L_19)))), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_21;
		L_21 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_20, /*hidden argument*/NULL);
		// for (int i = 0; i < newList.Count; i++)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_00ae:
	{
		// for (int i = 0; i < newList.Count; i++)
		int32_t L_23 = V_2;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_24, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_008b;
		}
	}
	{
		// ListCopyOf(listGroundRight).Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_26 = __this->get_listGroundRight_17();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_27;
		L_27 = GroundController_ListCopyOf_mACDE5C448CD67B3B1AF50CD295038704F500CDF4(__this, L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_27, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		// listGroundRight.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_28 = __this->get_listGroundRight_17();
		NullCheck(L_28);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_28, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
	}

IL_00d3:
	{
		// groundRandomNumber = Random.Range(minGroundRandomNumber, maxGroundRandomNumber); // How much ground is random
		int32_t L_29;
		L_29 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(5, 7, /*hidden argument*/NULL);
		__this->set_groundRandomNumber_10(L_29);
		// indexPositionOfGround = Random.Range(2, listGroundLeft.Count - 2); // Position to create ground
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_30 = __this->get_listGroundLeft_16();
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_30, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_32;
		L_32 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)2)), /*hidden argument*/NULL);
		__this->set_indexPositionOfGround_26(L_32);
		// StartCoroutine(RandomGroundAndWall(listGroundLeft[indexPositionOfGround].transform.position + Vector3.right, groundRandomNumber, Vector3.right, rightRandomtPositionOfTheWall, playerController.dirTurn, listGroundRight)); // Random ground on right
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_33 = __this->get_listGroundLeft_16();
		int32_t L_34 = __this->get_indexPositionOfGround_26();
		NullCheck(L_33);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_33, L_34, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_37, L_38, /*hidden argument*/NULL);
		int32_t L_40 = __this->get_groundRandomNumber_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = __this->get_rightRandomtPositionOfTheWall_21();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_43 = __this->get_playerController_9();
		NullCheck(L_43);
		int32_t L_44 = L_43->get_dirTurn_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_45 = __this->get_listGroundRight_17();
		RuntimeObject* L_46;
		L_46 = GroundController_RandomGroundAndWall_m778C109F896870BA299F919751AA24EDCDFD0CEC(__this, L_39, L_40, L_41, L_42, L_44, L_45, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_47;
		L_47 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_46, /*hidden argument*/NULL);
		// int indexOfTheWall = Random.Range(0, indexPositionOfGround - 2); // Position to create wall, it's must be between 0 and indexPositionOfGround -2
		int32_t L_48 = __this->get_indexPositionOfGround_26();
		int32_t L_49;
		L_49 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_49;
		// Instantiate(theWall, listGroundLeft[indexOfTheWall].transform.position + leftRandomPositionOfTheWall, Quaternion.identity); // Create the wall
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_theWall_6();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_51 = __this->get_listGroundLeft_16();
		int32_t L_52 = V_0;
		NullCheck(L_51);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53;
		L_53 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_51, L_52, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_54, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = __this->get_leftRandomPositionOfTheWall_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_55, L_56, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_58;
		L_58 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_50, L_57, L_58, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}

IL_018f:
	{
		// if (playerController.isPlayerHitTheWall) //Player hit the wall
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_60 = __this->get_playerController_9();
		NullCheck(L_60);
		bool L_61 = L_60->get_isPlayerHitTheWall_9();
		if (!L_61)
		{
			goto IL_0318;
		}
	}
	{
		// if (!isGroundAndWallHaveRandomOnLeft)// The ground and wall haven't create on left
		bool L_62 = __this->get_isGroundAndWallHaveRandomOnLeft_23();
		if (L_62)
		{
			goto IL_0318;
		}
	}
	{
		// SoundManager.Instance.PlaySound(SoundManager.Instance.randomGround);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_63 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_64 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_64);
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_65 = L_64->get_randomGround_8();
		NullCheck(L_63);
		SoundManager_PlaySound_mA6B5BAC882A03D2643CB55C00F70976EAC6621F3(L_63, L_65, (bool)1, (1.0f), /*hidden argument*/NULL);
		// isGroundAndWallHaveRandomOnLeft = true; //The ground and wall have create on left
		__this->set_isGroundAndWallHaveRandomOnLeft_23((bool)1);
		// isGroundAndWallHaveRandomOnRight = false; // Make the ground and wall haven't create on right
		__this->set_isGroundAndWallHaveRandomOnRight_22((bool)0);
		// if (listGroundLeft != null) // If listGroundRight not null
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_66 = __this->get_listGroundLeft_16();
		if (!L_66)
		{
			goto IL_023e;
		}
	}
	{
		// List<GameObject> newList = ListCopyOf(listGroundLeft); // Create newList and point it to a list
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_67 = __this->get_listGroundLeft_16();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_68;
		L_68 = GroundController_ListCopyOf_mACDE5C448CD67B3B1AF50CD295038704F500CDF4(__this, L_67, /*hidden argument*/NULL);
		V_5 = L_68;
		// for (int i = 0; i < newList.Count; i++)
		V_6 = 0;
		goto IL_0217;
	}

IL_01ed:
	{
		// GameObject countGround = newList[i];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_69 = V_5;
		int32_t L_70 = V_6;
		NullCheck(L_69);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71;
		L_71 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_69, L_70, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		V_7 = L_71;
		// StartCoroutine(ScaleGround(countGround, timeToDestroyGround * (float)i));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = V_7;
		float L_73 = __this->get_timeToDestroyGround_14();
		int32_t L_74 = V_6;
		RuntimeObject* L_75;
		L_75 = GroundController_ScaleGround_m86C9369473D5C995023EFA39976D1FFCFB5B4A95(__this, L_72, ((float)il2cpp_codegen_multiply((float)L_73, (float)((float)((float)L_74)))), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_76;
		L_76 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_75, /*hidden argument*/NULL);
		// for (int i = 0; i < newList.Count; i++)
		int32_t L_77 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_0217:
	{
		// for (int i = 0; i < newList.Count; i++)
		int32_t L_78 = V_6;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_79 = V_5;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_79, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_78) < ((int32_t)L_80)))
		{
			goto IL_01ed;
		}
	}
	{
		// ListCopyOf(listGroundLeft).Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_81 = __this->get_listGroundLeft_16();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_82;
		L_82 = GroundController_ListCopyOf_mACDE5C448CD67B3B1AF50CD295038704F500CDF4(__this, L_81, /*hidden argument*/NULL);
		NullCheck(L_82);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_82, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		// listGroundLeft.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_83 = __this->get_listGroundLeft_16();
		NullCheck(L_83);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_83, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
	}

IL_023e:
	{
		// groundRandomNumber = Random.Range(minGroundRandomNumber, maxGroundRandomNumber);//How much ground is random
		int32_t L_84;
		L_84 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(5, 7, /*hidden argument*/NULL);
		__this->set_groundRandomNumber_10(L_84);
		// indexPositionOfGround = Random.Range(2, listGroundRight.Count - 2);//Position to create ground
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_85 = __this->get_listGroundRight_17();
		NullCheck(L_85);
		int32_t L_86;
		L_86 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_85, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_87;
		L_87 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)2)), /*hidden argument*/NULL);
		__this->set_indexPositionOfGround_26(L_87);
		// StartCoroutine(RandomGroundAndWall(listGroundRight[indexPositionOfGround].transform.position + Vector3.forward, groundRandomNumber, Vector3.forward, leftRandomPositionOfTheWall, playerController.dirTurn, listGroundLeft)); // Create ground on left
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_88 = __this->get_listGroundRight_17();
		int32_t L_89 = __this->get_indexPositionOfGround_26();
		NullCheck(L_88);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90;
		L_90 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_88, L_89, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_91;
		L_91 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_90, /*hidden argument*/NULL);
		NullCheck(L_91);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
		L_92 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_91, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
		L_94 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_92, L_93, /*hidden argument*/NULL);
		int32_t L_95 = __this->get_groundRandomNumber_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		L_96 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97 = __this->get_leftRandomPositionOfTheWall_20();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_98 = __this->get_playerController_9();
		NullCheck(L_98);
		int32_t L_99 = L_98->get_dirTurn_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_100 = __this->get_listGroundLeft_16();
		RuntimeObject* L_101;
		L_101 = GroundController_RandomGroundAndWall_m778C109F896870BA299F919751AA24EDCDFD0CEC(__this, L_94, L_95, L_96, L_97, L_99, L_100, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_102;
		L_102 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_101, /*hidden argument*/NULL);
		// int indexOfTheWall = Random.Range(0, indexPositionOfGround - 2);// Position to create the wall, it's must be between 0 and indexPositionOfGround -2
		int32_t L_103 = __this->get_indexPositionOfGround_26();
		int32_t L_104;
		L_104 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_103, (int32_t)2)), /*hidden argument*/NULL);
		V_4 = L_104;
		// GameObject currentWall = (GameObject)Instantiate(theWall, listGroundRight[indexOfTheWall].transform.position + rightRandomtPositionOfTheWall, Quaternion.identity); //Create the wall
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_105 = __this->get_theWall_6();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_106 = __this->get_listGroundRight_17();
		int32_t L_107 = V_4;
		NullCheck(L_106);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_108;
		L_108 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_106, L_107, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_108);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_109;
		L_109 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_108, /*hidden argument*/NULL);
		NullCheck(L_109);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110;
		L_110 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_109, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111 = __this->get_rightRandomtPositionOfTheWall_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112;
		L_112 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_110, L_111, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_113;
		L_113 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_114;
		L_114 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_105, L_112, L_113, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// currentWall.transform.rotation = Quaternion.Euler(0, 90, 0); // Rotate the wall
		NullCheck(L_114);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_115;
		L_115 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_114, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_116;
		L_116 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (90.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_115);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_115, L_116, /*hidden argument*/NULL);
	}

IL_0318:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GroundController::RandomGroundAndWall(UnityEngine.Vector3,System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GroundController_RandomGroundAndWall_m778C109F896870BA299F919751AA24EDCDFD0CEC (GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, int32_t ___numberOfGround1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___directionOfGround2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionOfTheWall3, int32_t ___dirTurn4, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * L_0 = (U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 *)il2cpp_codegen_object_new(U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4_il2cpp_TypeInfo_var);
		U3CRandomGroundAndWallU3Ed__25__ctor_m9758DCC1D6B91343ABA73AF5696D3692EDE0C8DF(L_0, 0, /*hidden argument*/NULL);
		U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___pos0;
		NullCheck(L_2);
		L_2->set_pos_4(L_3);
		U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * L_4 = L_2;
		int32_t L_5 = ___numberOfGround1;
		NullCheck(L_4);
		L_4->set_numberOfGround_7(L_5);
		U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * L_6 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___directionOfGround2;
		NullCheck(L_6);
		L_6->set_directionOfGround_6(L_7);
		U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * L_8 = L_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___positionOfTheWall3;
		NullCheck(L_8);
		L_8->set_positionOfTheWall_8(L_9);
		U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * L_10 = L_8;
		int32_t L_11 = ___dirTurn4;
		NullCheck(L_10);
		L_10->set_dirTurn_3(L_11);
		U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * L_12 = L_10;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_13 = ___list5;
		NullCheck(L_12);
		L_12->set_list_5(L_13);
		return L_12;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> GroundController::ListCopyOf(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * GroundController_ListCopyOf_mACDE5C448CD67B3B1AF50CD295038704F500CDF4 (GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * __this, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___listToCopy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// List<GameObject> newList = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < listToCopy.Count; i++)
		V_1 = 0;
		goto IL_001b;
	}

IL_000a:
	{
		// newList.Add(listToCopy[i]);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = ___listToCopy0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_1, L_4, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// for (int i = 0; i < listToCopy.Count; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001b:
	{
		// for (int i = 0; i < listToCopy.Count; i++)
		int32_t L_6 = V_1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_7 = ___listToCopy0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_7, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000a;
		}
	}
	{
		// return newList;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.IEnumerator GroundController::ScaleGround(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GroundController_ScaleGround_m86C9369473D5C995023EFA39976D1FFCFB5B4A95 (GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ground0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A * L_0 = (U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A *)il2cpp_codegen_object_new(U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A_il2cpp_TypeInfo_var);
		U3CScaleGroundU3Ed__27__ctor_m5487EC9350ABA2560378E2A6BB1BE2038E28F4D3(L_0, 0, /*hidden argument*/NULL);
		U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A * L_1 = L_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___ground0;
		NullCheck(L_1);
		L_1->set_ground_3(L_2);
		U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A * L_3 = L_1;
		float L_4 = ___time1;
		NullCheck(L_3);
		L_3->set_time_2(L_4);
		return L_3;
	}
}
// System.Void GroundController::DestroyGroundAfterGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundController_DestroyGroundAfterGameOver_m89154D9BA347AD66D4C7A9C44BA778510600D41C (GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_5 = NULL;
	{
		// if (listGroundLeft != null)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_listGroundLeft_16();
		if (!L_0)
		{
			goto IL_0050;
		}
	}
	{
		// List<GameObject> newList = ListCopyOf(listGroundLeft);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_listGroundLeft_16();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2;
		L_2 = GroundController_ListCopyOf_mACDE5C448CD67B3B1AF50CD295038704F500CDF4(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// for (int i = 0; i < newList.Count; i++)
		V_1 = 0;
		goto IL_003c;
	}

IL_0019:
	{
		// GameObject countGround = newList[i];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		V_2 = L_5;
		// StartCoroutine(ScaleGround(countGround, timeToDestroyGround * (float)i));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_2;
		float L_7 = __this->get_timeToDestroyGround_14();
		int32_t L_8 = V_1;
		RuntimeObject* L_9;
		L_9 = GroundController_ScaleGround_m86C9369473D5C995023EFA39976D1FFCFB5B4A95(__this, L_6, ((float)il2cpp_codegen_multiply((float)L_7, (float)((float)((float)L_8)))), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_10;
		L_10 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_9, /*hidden argument*/NULL);
		// for (int i = 0; i < newList.Count; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003c:
	{
		// for (int i = 0; i < newList.Count; i++)
		int32_t L_12 = V_1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_13, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0019;
		}
	}
	{
		// listGroundLeft.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = __this->get_listGroundLeft_16();
		NullCheck(L_15);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_15, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
	}

IL_0050:
	{
		// if (listGroundRight != null)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_16 = __this->get_listGroundRight_17();
		if (!L_16)
		{
			goto IL_00a8;
		}
	}
	{
		// List<GameObject> newList = ListCopyOf(listGroundRight);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_17 = __this->get_listGroundRight_17();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_18;
		L_18 = GroundController_ListCopyOf_mACDE5C448CD67B3B1AF50CD295038704F500CDF4(__this, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// for (int i = 0; i < newList.Count; i++)
		V_4 = 0;
		goto IL_0093;
	}

IL_006a:
	{
		// GameObject countGround = newList[i];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		V_5 = L_21;
		// StartCoroutine(ScaleGround(countGround, timeToDestroyGround * (float)i));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_5;
		float L_23 = __this->get_timeToDestroyGround_14();
		int32_t L_24 = V_4;
		RuntimeObject* L_25;
		L_25 = GroundController_ScaleGround_m86C9369473D5C995023EFA39976D1FFCFB5B4A95(__this, L_22, ((float)il2cpp_codegen_multiply((float)L_23, (float)((float)((float)L_24)))), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_26;
		L_26 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_25, /*hidden argument*/NULL);
		// for (int i = 0; i < newList.Count; i++)
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0093:
	{
		// for (int i = 0; i < newList.Count; i++)
		int32_t L_28 = V_4;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_29 = V_3;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_29, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_006a;
		}
	}
	{
		// listGroundRight.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_31 = __this->get_listGroundRight_17();
		NullCheck(L_31);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_31, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void GroundController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundController__ctor_m762225CE07224F58DB3EA7A2D974AC9C1D6E772D (GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float timeToDestroyGround = 0.15f; // How long from the first ground have destroyed to the last ground have destroyed in one list
		__this->set_timeToDestroyGround_14((0.150000006f));
		// public float timeToDestroyGroundAfterGameOver = 0.5f; // How long the DestroyGroundAfterGameOver function is called after game over
		__this->set_timeToDestroyGroundAfterGameOver_15((0.5f));
		// private List<GameObject> listGroundLeft = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_listGroundLeft_16(L_0);
		// private List<GameObject> listGroundRight = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_1, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_listGroundRight_17(L_1);
		// private Vector3 leftRandomPositionOfTheWall = new Vector3(0, 6f, 0.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (6.0f), (0.5f), /*hidden argument*/NULL);
		__this->set_leftRandomPositionOfTheWall_20(L_2);
		// private Vector3 rightRandomtPositionOfTheWall = new Vector3(0.5f, 6f, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (0.5f), (6.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_rightRandomtPositionOfTheWall_21(L_3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar_Update_m2E6071A5B2BA9BBE9F0D5AA4B7285053BD83FDCB (InputAxisScrollbar_t1A7845480C1A0832982B2740453C53703E0B09B2 * __this, const RuntimeMethod* method)
{
	{
		// void Update() { }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::HandleInput(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar_HandleInput_m4E53774409CC762C0D34D83B186D18266E21A280 (InputAxisScrollbar_t1A7845480C1A0832982B2740453C53703E0B09B2 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxis(axis, (value*2f) - 1f);
		String_t* L_0 = __this->get_axis_4();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxis_mDB627063A19E94CF4C7BDD682EB7205D46F9619A(L_0, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_1, (float)(2.0f))), (float)(1.0f))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar__ctor_mBDEC7527CCE962AC682F51B9179CC6E139CDCE98 (InputAxisScrollbar_t1A7845480C1A0832982B2740453C53703E0B09B2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnEnable_m24A5EA0EDD73F1486837F1F08DF4B80721EF754C (Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * __this, const RuntimeMethod* method)
{
	{
		// CreateVirtualAxes();
		Joystick_CreateVirtualAxes_m10235FD4D0F3393790EBF5A58391886D78549173(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m8CE36CA457A4A410C33F008316130997880DB58F (Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * __this, const RuntimeMethod* method)
{
	{
		// m_StartPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_m_StartPos_8(L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_m7D6CB9CF992E3F6A52D21E37B0293E2EF11EDDE0 (Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var delta = m_StartPos - value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_StartPos_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___value0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// delta.y = -delta.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		float L_4 = L_3.get_y_3();
		(&V_0)->set_y_3(((-L_4)));
		// delta /= MovementRange;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		int32_t L_6 = __this->get_MovementRange_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_5, ((float)((float)L_6)), /*hidden argument*/NULL);
		V_0 = L_7;
		// if (m_UseX)
		bool L_8 = __this->get_m_UseX_9();
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// m_HorizontalVirtualAxis.Update(-delta.x);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_9 = __this->get_m_HorizontalVirtualAxis_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_x_2();
		NullCheck(L_9);
		VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline(L_9, ((-L_11)), /*hidden argument*/NULL);
	}

IL_0043:
	{
		// if (m_UseY)
		bool L_12 = __this->get_m_UseY_10();
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// m_VerticalVirtualAxis.Update(delta.y);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_13 = __this->get_m_VerticalVirtualAxis_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = L_14.get_y_3();
		NullCheck(L_13);
		VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline(L_13, L_15, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_m10235FD4D0F3393790EBF5A58391886D78549173 (Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * G_B2_0 = NULL;
	Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * G_B3_1 = NULL;
	Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * G_B5_0 = NULL;
	Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * G_B6_1 = NULL;
	{
		// m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
		int32_t L_0 = __this->get_axesToUse_5();
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->get_axesToUse_5();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_UseX_9((bool)G_B3_0);
		// m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);
		int32_t L_2 = __this->get_axesToUse_5();
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->get_axesToUse_5();
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_m_UseY_10((bool)G_B6_0);
		// if (m_UseX)
		bool L_4 = __this->get_m_UseX_9();
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
		String_t* L_5 = __this->get_horizontalAxisName_6();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_6 = (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 *)il2cpp_codegen_object_new(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m88EDC66F4BAB51D1BA2BDB502EBE995F08F42E64(L_6, L_5, /*hidden argument*/NULL);
		__this->set_m_HorizontalVirtualAxis_11(L_6);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_7 = __this->get_m_HorizontalVirtualAxis_11();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDA9D3A2181CD74F9096BF1C7807802DE353E4E1A(L_7, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// if (m_UseY)
		bool L_8 = __this->get_m_UseY_10();
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
		String_t* L_9 = __this->get_verticalAxisName_7();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_10 = (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 *)il2cpp_codegen_object_new(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m88EDC66F4BAB51D1BA2BDB502EBE995F08F42E64(L_10, L_9, /*hidden argument*/NULL);
		__this->set_m_VerticalVirtualAxis_12(L_10);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_11 = __this->get_m_VerticalVirtualAxis_12();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDA9D3A2181CD74F9096BF1C7807802DE353E4E1A(L_11, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_mA04BB282F1D24DA48FCFCBD7889D4964C15BC7F0 (Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Vector3 newPos = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (m_UseX)
		bool L_1 = __this->get_m_UseX_9();
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// int delta = (int)(data.position.x - m_StartPos.x);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___data0;
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_m_StartPos_8();
		float L_6 = L_5->get_x_2();
		V_1 = ((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_4, (float)L_6))));
		// delta = Mathf.Clamp(delta, - MovementRange, MovementRange);
		int32_t L_7 = V_1;
		int32_t L_8 = __this->get_MovementRange_4();
		int32_t L_9 = __this->get_MovementRange_4();
		int32_t L_10;
		L_10 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_7, ((-L_8)), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// newPos.x = delta;
		int32_t L_11 = V_1;
		(&V_0)->set_x_2(((float)((float)L_11)));
	}

IL_0044:
	{
		// if (m_UseY)
		bool L_12 = __this->get_m_UseY_10();
		if (!L_12)
		{
			goto IL_0082;
		}
	}
	{
		// int delta = (int)(data.position.y - m_StartPos.y);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_13 = ___data0;
		NullCheck(L_13);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = __this->get_address_of_m_StartPos_8();
		float L_17 = L_16->get_y_3();
		V_2 = ((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_15, (float)L_17))));
		// delta = Mathf.Clamp(delta, -MovementRange, MovementRange);
		int32_t L_18 = V_2;
		int32_t L_19 = __this->get_MovementRange_4();
		int32_t L_20 = __this->get_MovementRange_4();
		int32_t L_21;
		L_21 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_18, ((-L_19)), L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		// newPos.y = delta;
		int32_t L_22 = V_2;
		(&V_0)->set_y_3(((float)((float)L_22)));
	}

IL_0082:
	{
		// transform.position = new Vector3(m_StartPos.x + newPos.x, m_StartPos.y + newPos.y, m_StartPos.z + newPos.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_24 = __this->get_address_of_m_StartPos_8();
		float L_25 = L_24->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_0;
		float L_27 = L_26.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_28 = __this->get_address_of_m_StartPos_8();
		float L_29 = L_28->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_0;
		float L_31 = L_30.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = __this->get_address_of_m_StartPos_8();
		float L_33 = L_32->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_0;
		float L_35 = L_34.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), ((float)il2cpp_codegen_add((float)L_25, (float)L_27)), ((float)il2cpp_codegen_add((float)L_29, (float)L_31)), ((float)il2cpp_codegen_add((float)L_33, (float)L_35)), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_23, L_36, /*hidden argument*/NULL);
		// UpdateVirtualAxes(transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		Joystick_UpdateVirtualAxes_m7D6CB9CF992E3F6A52D21E37B0293E2EF11EDDE0(__this, L_38, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m8E4F8B50A7E5665DA2226F16EF6CDE5BAE5326A5 (Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	{
		// transform.position = m_StartPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_m_StartPos_8();
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		// UpdateVirtualAxes(m_StartPos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_m_StartPos_8();
		Joystick_UpdateVirtualAxes_m7D6CB9CF992E3F6A52D21E37B0293E2EF11EDDE0(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m6AF1B2BF22F35B5E3498907EC51C8C0561729FAD (Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	{
		// public void OnPointerDown(PointerEventData data) { }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDisable_m656AD25023372C1AB0A455F73218ABFB0145B8FF (Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * __this, const RuntimeMethod* method)
{
	{
		// if (m_UseX)
		bool L_0 = __this->get_m_UseX_9();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_HorizontalVirtualAxis.Remove();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_1 = __this->get_m_HorizontalVirtualAxis_11();
		NullCheck(L_1);
		VirtualAxis_Remove_mCC5EF7DB8EC863AC7030AC9AB92F46A723BB7748(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// if (m_UseY)
		bool L_2 = __this->get_m_UseY_10();
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// m_VerticalVirtualAxis.Remove();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_3 = __this->get_m_VerticalVirtualAxis_12();
		NullCheck(L_3);
		VirtualAxis_Remove_mCC5EF7DB8EC863AC7030AC9AB92F46A723BB7748(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_mE448490D7C35B109542036993D0D4C1A94998D4E (Joystick_tF2036EF0085F837C905C73FB03944C220B9E5391 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MovementRange = 100;
		__this->set_MovementRange_4(((int32_t)100));
		// public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		__this->set_horizontalAxisName_6(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		__this->set_verticalAxisName_7(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_OnEnable_mD1C1F78BDA9EA618AB12221F826AE0DDB93BB1E6 (MobileControlRig_t2F1DF79DABE7E49169CB22FCF65C0237720ACEDD * __this, const RuntimeMethod* method)
{
	{
		// CheckEnableControlRig();
		MobileControlRig_CheckEnableControlRig_m1708EC5391D82F8050E2F3E2939FE19A02B01DED(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_Start_m5DE87E0E24CB89A6D9DB4755EC7443592630ADA1 (MobileControlRig_t2F1DF79DABE7E49169CB22FCF65C0237720ACEDD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_mB2CBD09AEDFA298DD4A7A34CE5E001ABF4BB160D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.EventSystems.EventSystem system = GameObject.FindObjectOfType<UnityEngine.EventSystems.EventSystem>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801(/*hidden argument*/Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801_RuntimeMethod_var);
		// if (system == null)
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// GameObject o = new GameObject("EventSystem");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F, /*hidden argument*/NULL);
		// o.AddComponent<UnityEngine.EventSystems.EventSystem>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2;
		NullCheck(L_3);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_4;
		L_4 = GameObject_AddComponent_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_mB2CBD09AEDFA298DD4A7A34CE5E001ABF4BB160D(L_3, /*hidden argument*/GameObject_AddComponent_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_mB2CBD09AEDFA298DD4A7A34CE5E001ABF4BB160D_RuntimeMethod_var);
		// o.AddComponent<UnityEngine.EventSystems.StandaloneInputModule>();
		NullCheck(L_3);
		StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD * L_5;
		L_5 = GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895(L_3, /*hidden argument*/GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_m1708EC5391D82F8050E2F3E2939FE19A02B01DED (MobileControlRig_t2F1DF79DABE7E49169CB22FCF65C0237720ACEDD * __this, const RuntimeMethod* method)
{
	{
		// EnableControlRig(true);
		MobileControlRig_EnableControlRig_m8F79B98DE64549179F06D849E9F97E139B388221(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_m8F79B98DE64549179F06D849E9F97E139B388221 (MobileControlRig_t2F1DF79DABE7E49169CB22FCF65C0237720ACEDD * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Transform t in transform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_000e:
		{
			// foreach (Transform t in transform)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject * L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_2);
			// t.gameObject.SetActive(enabled);
			NullCheck(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			bool L_5 = ___enabled0;
			NullCheck(L_4);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, L_5, /*hidden argument*/NULL);
		}

IL_0024:
		{
			// foreach (Transform t in transform)
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			bool L_7;
			L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_9 = V_1;
			if (!L_9)
			{
				goto IL_003e;
			}
		}

IL_0038:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_003e:
		{
			IL2CPP_END_FINALLY(46)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig__ctor_m127520DB08F2DFE95FA839E1C5043E603D2C61DA (MobileControlRig_t2F1DF79DABE7E49169CB22FCF65C0237720ACEDD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_mCE54D249830BB224C0E7868831F5DE9872721ECA (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualButton(new CrossPlatformInputManager.VirtualButton(name));
		String_t* L_0 = ___name0;
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_1 = (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 *)il2cpp_codegen_object_new(VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48_il2cpp_TypeInfo_var);
		VirtualButton__ctor_m71595BAF216317FBF79F564F306D3A87F430EDE4(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m5E3A328FC6A6EC011EB337125A67468BDD86AAF4(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m9E1EF0D37885B89830E25966ACA9241FE6A67B05 (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualAxis(new CrossPlatformInputManager.VirtualAxis(name));
		String_t* L_0 = ___name0;
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_1 = (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 *)il2cpp_codegen_object_new(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m88EDC66F4BAB51D1BA2BDB502EBE995F08F42E64(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDA9D3A2181CD74F9096BF1C7807802DE353E4E1A(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MobileInput_GetAxis_mF7E4D1D5BB15C8D6DBBFA1D0ACB34C07BC52C3AB (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m9E1EF0D37885B89830E25966ACA9241FE6A67B05(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// return m_VirtualAxes[name].GetValue;
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_4 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_6;
		L_6 = Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualAxis_get_GetValue_mAC358FAC6484FAA00EB187E0583ECD4576794C44_inline(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonDown_mC9D7C110515111912F656057FEFBEF8E5880D70C (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_0 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___name0;
		MobileInput_AddButton_mCE54D249830BB224C0E7868831F5DE9872721ECA(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Pressed();
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_4 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_6;
		L_6 = Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Pressed_mAAC725DA03D80EC7275B0F0B82528E3C21670ADE(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonUp_mAC2717F036575064C64280479659887F0B448410 (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_0 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___name0;
		MobileInput_AddButton_mCE54D249830BB224C0E7868831F5DE9872721ECA(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Released();
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_4 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_6;
		L_6 = Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Released_mD4D0FD8E203575FE98152A62BF6B16071E383F5C(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisPositive_mDB01EA55F7F75B0C1FA2D79DC42D742F4B5FC45D (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m9E1EF0D37885B89830E25966ACA9241FE6A67B05(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(1f);
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_4 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_6;
		L_6 = Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline(L_6, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisNegative_mD1181DCDCC49DF0D476E9B525AF8274D2E2386FF (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m9E1EF0D37885B89830E25966ACA9241FE6A67B05(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(-1f);
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_4 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_6;
		L_6 = Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline(L_6, (-1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisZero_m93E3632453634975E55A9D4181FED4D5DBE15694 (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m9E1EF0D37885B89830E25966ACA9241FE6A67B05(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(0f);
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_4 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_6;
		L_6 = Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline(L_6, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxis_m57CFF9414DCE627C9AA83AECA9E3F61013EB94FB (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m9E1EF0D37885B89830E25966ACA9241FE6A67B05(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(value);
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_4 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_6;
		L_6 = Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		float L_7 = ___value1;
		NullCheck(L_6);
		VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonDown_m4AA7D6AB5B05ABCCA3C1908FA877E26998FBB71B (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_0 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_3 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_5;
		L_5 = Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualButton_get_GetButtonDown_m6C10A64F6C990B87627E8DDE6C1FFCFEBCD8FDB7(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mCE54D249830BB224C0E7868831F5DE9872721ECA(__this, L_7, /*hidden argument*/NULL);
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_8 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_10;
		L_10 = Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualButton_get_GetButtonDown_m6C10A64F6C990B87627E8DDE6C1FFCFEBCD8FDB7(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonUp_m473F8F5AA2D5CDCB5505837AA1CE17077C0D2C0A (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_0 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_3 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_5;
		L_5 = Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualButton_get_GetButtonUp_mE7D1541E27B10531F1542C55781ED62EED0DC37F(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mCE54D249830BB224C0E7868831F5DE9872721ECA(__this, L_7, /*hidden argument*/NULL);
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_8 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_10;
		L_10 = Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualButton_get_GetButtonUp_mE7D1541E27B10531F1542C55781ED62EED0DC37F(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButton_mAAF8F610076711577A20B084469AC344454E6632 (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_0 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_3 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_5;
		L_5 = Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualButton_get_GetButton_mD1EBB3A0B0A88B5CC0589120B42106447F9ED065_inline(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mCE54D249830BB224C0E7868831F5DE9872721ECA(__this, L_7, /*hidden argument*/NULL);
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_8 = ((VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_10;
		L_10 = Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m4E8ADD7A66EE39349A79EBAA965A7300C021F214_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualButton_get_GetButton_mD1EBB3A0B0A88B5CC0589120B42106447F9ED065_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MobileInput_MousePosition_mDE6DFB3175A5C3A75D210339227B70DA6E0CEA35 (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, const RuntimeMethod* method)
{
	{
		// return virtualMousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_m50B1FDC06838FEABE2C9E43F8AE4476426413240 (MobileInput_t0FE224AC3633CD98248B3BF5052FCB972DB4EA82 * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m39FA60B6A3FB2A793B3825E6EE488A0262224DCB(__this, /*hidden argument*/NULL);
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m9531F30EC892BDD1758A2EEC724E86EFBDA150A3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(MovePlayer());
		RuntimeObject* L_0;
		L_0 = PlayerController_MovePlayer_m30E6F304109EB37FA73D51E9E5D4D8A821271DB9(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// touchDisable = false;
		__this->set_touchDisable_8((bool)0);
		// gameOver = false;
		__this->set_gameOver_10((bool)0);
		// hittedWallLeft = false;
		__this->set_hittedWallLeft_16((bool)0);
		// hittedWallright = false;
		__this->set_hittedWallright_17((bool)0);
		// dirTurn = 1;
		__this->set_dirTurn_7(1);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_mB31159CAD7DD2329859472554BC9154A83D8E794 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB992B6DEAEC231ACFF5BEAA520CD60405D3E728);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (Input.GetMouseButtonDown(0) && groundController.enableTouch && !touchDisable)
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0077;
		}
	}
	{
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_1 = __this->get_groundController_6();
		NullCheck(L_1);
		bool L_2 = L_1->get_enableTouch_11();
		if (!L_2)
		{
			goto IL_0077;
		}
	}
	{
		bool L_3 = __this->get_touchDisable_8();
		if (L_3)
		{
			goto IL_0077;
		}
	}
	{
		// if(!UIController.Instance.rateMenu.activeSelf){
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_4 = ((UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_StaticFields*)il2cpp_codegen_static_fields_for(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_rateMenu_12();
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		// movingSpeedOfPlayer += movingSpeedIncrement;
		float L_7 = __this->get_movingSpeedOfPlayer_11();
		float L_8 = __this->get_movingSpeedIncrement_12();
		__this->set_movingSpeedOfPlayer_11(((float)il2cpp_codegen_add((float)L_7, (float)L_8)));
		// touchDisable = true;
		__this->set_touchDisable_8((bool)1);
		// dirTurn = dirTurn * (-1);
		int32_t L_9 = __this->get_dirTurn_7();
		__this->set_dirTurn_7(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)(-1))));
		// if (dirTurn < 0)
		int32_t L_10 = __this->get_dirTurn_7();
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		// dir = Vector3.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		__this->set_dir_15(L_11);
		// }
		goto IL_0077;
	}

IL_006c:
	{
		// dir = Vector3.right;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		__this->set_dir_15(L_12);
	}

IL_0077:
	{
		// Ray rayDown = new Ray(player.transform.position, Vector3.down);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_player_4();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_17), L_15, L_16, /*hidden argument*/NULL);
		// if(Physics.Raycast(rayDown,out hit, 0.6f))
		bool L_18;
		L_18 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_17, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (0.600000024f), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_040d;
		}
	}
	{
		// if (hit.collider.gameObject.tag == "Ground")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_19;
		L_19 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_20, /*hidden argument*/NULL);
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0461;
		}
	}
	{
		// isPlayerHitTheWall = false;
		__this->set_isPlayerHitTheWall_9((bool)0);
		// Ray rayForward = new Ray(player.transform.position, Vector3.forward);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_player_4();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_27), L_25, L_26, /*hidden argument*/NULL);
		// Ray rayBack = new Ray(player.transform.position, Vector3.back);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_player_4();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220(/*hidden argument*/NULL);
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_1), L_30, L_31, /*hidden argument*/NULL);
		// Ray rayRight = new Ray(player.transform.position, Vector3.right);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_player_4();
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_34, L_35, /*hidden argument*/NULL);
		// Ray rayLeft = new Ray(player.transform.position, Vector3.left);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_player_4();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_3), L_38, L_39, /*hidden argument*/NULL);
		// if (Physics.Raycast(rayForward, out hit, 0.6f))
		bool L_40;
		L_40 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_27, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (0.600000024f), /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_026d;
		}
	}
	{
		// if (hit.collider.tag == "Gold")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_41;
		L_41 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_41, /*hidden argument*/NULL);
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0217;
		}
	}
	{
		// SoundManager.Instance.PlaySound(SoundManager.Instance.hitCoin);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_44 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_45 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_45);
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_46 = L_45->get_hitCoin_7();
		NullCheck(L_44);
		SoundManager_PlaySound_mA6B5BAC882A03D2643CB55C00F70976EAC6621F3(L_44, L_46, (bool)1, (1.0f), /*hidden argument*/NULL);
		// CoinManager.Instance.AddCoins(1);
		IL2CPP_RUNTIME_CLASS_INIT(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * L_47 = ((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_47);
		CoinManager_AddCoins_mB108638A4CCABAF5CE702FE1CC21B8F12D6309E6(L_47, 1, /*hidden argument*/NULL);
		// particleTemp = (ParticleSystem)Instantiate(particle, hit.collider.gameObject.transform.position, Quaternion.identity);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_48 = __this->get_particle_5();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_49;
		L_49 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_49);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_51, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53;
		L_53 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_54;
		L_54 = Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283(L_48, L_52, L_53, /*hidden argument*/Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283_RuntimeMethod_var);
		__this->set_particleTemp_14(L_54);
		// particleTemp.transform.rotation = Quaternion.Euler(90, 0, 0);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_55 = __this->get_particleTemp_14();
		NullCheck(L_55);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_55, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_57;
		L_57 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_56);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_56, L_57, /*hidden argument*/NULL);
		// particleTemp.Simulate(0.5f, true, false);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_58 = __this->get_particleTemp_14();
		NullCheck(L_58);
		ParticleSystem_Simulate_mC2F2E060D7CE94D4936BA995C49827231DF5F1F8(L_58, (0.5f), (bool)1, (bool)0, /*hidden argument*/NULL);
		// particleTemp.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_59 = __this->get_particleTemp_14();
		NullCheck(L_59);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_59, /*hidden argument*/NULL);
		// Destroy(particleTemp, timeToDestroyParticle);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_60 = __this->get_particleTemp_14();
		float L_61 = __this->get_timeToDestroyParticle_13();
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_60, L_61, /*hidden argument*/NULL);
		// Destroy(hit.collider.gameObject);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_62;
		L_62 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_62);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_63;
		L_63 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_62, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_63, /*hidden argument*/NULL);
	}

IL_0217:
	{
		// if (hit.collider.tag == "TheWall")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_64;
		L_64 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_64);
		String_t* L_65;
		L_65 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_64, /*hidden argument*/NULL);
		bool L_66;
		L_66 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_65, _stringLiteralDB992B6DEAEC231ACFF5BEAA520CD60405D3E728, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_0461;
		}
	}
	{
		// if (!hittedWallLeft)
		bool L_67 = __this->get_hittedWallLeft_16();
		if (L_67)
		{
			goto IL_0253;
		}
	}
	{
		// hittedWallLeft = true;
		__this->set_hittedWallLeft_16((bool)1);
		// hittedWallright = false;
		__this->set_hittedWallright_17((bool)0);
		// ScoreManager.Instance.AddScore(1);
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_68 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_68);
		ScoreManager_AddScore_m29230659E4787DE465721000EA79302A2D2B05D0(L_68, 1, /*hidden argument*/NULL);
	}

IL_0253:
	{
		// isPlayerHitTheWall = true;
		__this->set_isPlayerHitTheWall_9((bool)1);
		// touchDisable = false;
		__this->set_touchDisable_8((bool)0);
		// dir = Vector3.back;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220(/*hidden argument*/NULL);
		__this->set_dir_15(L_69);
		// }
		return;
	}

IL_026d:
	{
		// else if (Physics.Raycast(rayBack, out hit, 0.6f))
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_70 = V_1;
		bool L_71;
		L_71 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_70, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (0.600000024f), /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_02a3;
		}
	}
	{
		// if (hit.collider.tag == "TheWall")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_72;
		L_72 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_72);
		String_t* L_73;
		L_73 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_72, /*hidden argument*/NULL);
		bool L_74;
		L_74 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_73, _stringLiteralDB992B6DEAEC231ACFF5BEAA520CD60405D3E728, /*hidden argument*/NULL);
		if (!L_74)
		{
			goto IL_0461;
		}
	}
	{
		// dir = Vector3.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		__this->set_dir_15(L_75);
		// }
		return;
	}

IL_02a3:
	{
		// else if (Physics.Raycast(rayRight, out hit, 0.6f))
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_76 = V_2;
		bool L_77;
		L_77 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_76, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (0.600000024f), /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_03da;
		}
	}
	{
		// if (hit.collider.tag == "Gold")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_78;
		L_78 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_78);
		String_t* L_79;
		L_79 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_78, /*hidden argument*/NULL);
		bool L_80;
		L_80 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_79, _stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_0384;
		}
	}
	{
		// SoundManager.Instance.PlaySound(SoundManager.Instance.hitCoin);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_81 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_82 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_82);
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_83 = L_82->get_hitCoin_7();
		NullCheck(L_81);
		SoundManager_PlaySound_mA6B5BAC882A03D2643CB55C00F70976EAC6621F3(L_81, L_83, (bool)1, (1.0f), /*hidden argument*/NULL);
		// CoinManager.Instance.AddCoins(1);
		IL2CPP_RUNTIME_CLASS_INIT(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * L_84 = ((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_84);
		CoinManager_AddCoins_mB108638A4CCABAF5CE702FE1CC21B8F12D6309E6(L_84, 1, /*hidden argument*/NULL);
		// particleTemp = (ParticleSystem)Instantiate(particle, hit.collider.gameObject.transform.position, Quaternion.identity);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_85 = __this->get_particle_5();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_86;
		L_86 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_86);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87;
		L_87 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_86, /*hidden argument*/NULL);
		NullCheck(L_87);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88;
		L_88 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_87, /*hidden argument*/NULL);
		NullCheck(L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_88, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_90;
		L_90 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_91;
		L_91 = Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283(L_85, L_89, L_90, /*hidden argument*/Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283_RuntimeMethod_var);
		__this->set_particleTemp_14(L_91);
		// particleTemp.transform.rotation = Quaternion.Euler(90, 0, 0);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_92 = __this->get_particleTemp_14();
		NullCheck(L_92);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
		L_93 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_92, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_94;
		L_94 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_93);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_93, L_94, /*hidden argument*/NULL);
		// particleTemp.Simulate(0.5f, true, false);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_95 = __this->get_particleTemp_14();
		NullCheck(L_95);
		ParticleSystem_Simulate_mC2F2E060D7CE94D4936BA995C49827231DF5F1F8(L_95, (0.5f), (bool)1, (bool)0, /*hidden argument*/NULL);
		// particleTemp.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_96 = __this->get_particleTemp_14();
		NullCheck(L_96);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_96, /*hidden argument*/NULL);
		// Destroy(particleTemp, timeToDestroyParticle);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_97 = __this->get_particleTemp_14();
		float L_98 = __this->get_timeToDestroyParticle_13();
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_97, L_98, /*hidden argument*/NULL);
		// Destroy(hit.collider.gameObject);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_99;
		L_99 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_99);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100;
		L_100 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_99, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_100, /*hidden argument*/NULL);
	}

IL_0384:
	{
		// if (hit.collider.tag == "TheWall")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_101;
		L_101 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_101);
		String_t* L_102;
		L_102 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_101, /*hidden argument*/NULL);
		bool L_103;
		L_103 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_102, _stringLiteralDB992B6DEAEC231ACFF5BEAA520CD60405D3E728, /*hidden argument*/NULL);
		if (!L_103)
		{
			goto IL_0461;
		}
	}
	{
		// if (!hittedWallright)
		bool L_104 = __this->get_hittedWallright_17();
		if (L_104)
		{
			goto IL_03c0;
		}
	}
	{
		// hittedWallright = true;
		__this->set_hittedWallright_17((bool)1);
		// hittedWallLeft = false;
		__this->set_hittedWallLeft_16((bool)0);
		// ScoreManager.Instance.AddScore(1);
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_105 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_105);
		ScoreManager_AddScore_m29230659E4787DE465721000EA79302A2D2B05D0(L_105, 1, /*hidden argument*/NULL);
	}

IL_03c0:
	{
		// isPlayerHitTheWall = true;
		__this->set_isPlayerHitTheWall_9((bool)1);
		// touchDisable = false;
		__this->set_touchDisable_8((bool)0);
		// dir = Vector3.left;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106;
		L_106 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		__this->set_dir_15(L_106);
		// }
		return;
	}

IL_03da:
	{
		// else if (Physics.Raycast(rayLeft, out hit, 0.6f))
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_107 = V_3;
		bool L_108;
		L_108 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_107, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (0.600000024f), /*hidden argument*/NULL);
		if (!L_108)
		{
			goto IL_0461;
		}
	}
	{
		// if (hit.collider.tag == "TheWall")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_109;
		L_109 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_109);
		String_t* L_110;
		L_110 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_109, /*hidden argument*/NULL);
		bool L_111;
		L_111 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_110, _stringLiteralDB992B6DEAEC231ACFF5BEAA520CD60405D3E728, /*hidden argument*/NULL);
		if (!L_111)
		{
			goto IL_0461;
		}
	}
	{
		// dir = Vector3.right;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112;
		L_112 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		__this->set_dir_15(L_112);
		// }
		return;
	}

IL_040d:
	{
		// if (!gameOver)
		bool L_113 = __this->get_gameOver_10();
		if (L_113)
		{
			goto IL_0461;
		}
	}
	{
		// SoundManager.Instance.PlaySound(SoundManager.Instance.gameOver);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_114 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_115 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_115);
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_116 = L_115->get_gameOver_9();
		NullCheck(L_114);
		SoundManager_PlaySound_mA6B5BAC882A03D2643CB55C00F70976EAC6621F3(L_114, L_116, (bool)1, (1.0f), /*hidden argument*/NULL);
		// touchDisable = true;
		__this->set_touchDisable_8((bool)1);
		// gameOver = true;
		__this->set_gameOver_10((bool)1);
		// dir = Vector3.down + new Vector3(0, -1, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117;
		L_117 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118;
		memset((&L_118), 0, sizeof(L_118));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_118), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119;
		L_119 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_117, L_118, /*hidden argument*/NULL);
		__this->set_dir_15(L_119);
	}

IL_0461:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerEnter_mA341783BDD02CF2476E18D5D2504CA3812E0F5B3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.Instance.PlaySound(SoundManager.Instance.hitCoin);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_1 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_1);
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_2 = L_1->get_hitCoin_7();
		NullCheck(L_0);
		SoundManager_PlaySound_mA6B5BAC882A03D2643CB55C00F70976EAC6621F3(L_0, L_2, (bool)1, (1.0f), /*hidden argument*/NULL);
		// CoinManager.Instance.AddCoins(1);
		IL2CPP_RUNTIME_CLASS_INIT(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * L_3 = ((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_3);
		CoinManager_AddCoins_mB108638A4CCABAF5CE702FE1CC21B8F12D6309E6(L_3, 1, /*hidden argument*/NULL);
		// particleTemp = (ParticleSystem)Instantiate(particle, other.gameObject.transform.position, Quaternion.identity);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_4 = __this->get_particle_5();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5 = ___other0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_10;
		L_10 = Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283(L_4, L_8, L_9, /*hidden argument*/Object_Instantiate_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m7D0C03E7F9BDE2D0CBBE7890D8F857AA06070283_RuntimeMethod_var);
		__this->set_particleTemp_14(L_10);
		// particleTemp.transform.rotation = Quaternion.Euler(90, 0, 0);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_11 = __this->get_particleTemp_14();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_12, L_13, /*hidden argument*/NULL);
		// particleTemp.Simulate(0.5f, true, false);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_14 = __this->get_particleTemp_14();
		NullCheck(L_14);
		ParticleSystem_Simulate_mC2F2E060D7CE94D4936BA995C49827231DF5F1F8(L_14, (0.5f), (bool)1, (bool)0, /*hidden argument*/NULL);
		// particleTemp.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_15 = __this->get_particleTemp_14();
		NullCheck(L_15);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_15, /*hidden argument*/NULL);
		// Destroy(particleTemp, timeToDestroyParticle);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_16 = __this->get_particleTemp_14();
		float L_17 = __this->get_timeToDestroyParticle_13();
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_16, L_17, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_18 = ___other0;
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnBecameInvisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnBecameInvisible_m1E4FD242BF4FCD2BA24DF4526CF723E7672632EA (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(player);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::MovePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_MovePlayer_m30E6F304109EB37FA73D51E9E5D4D8A821271DB9 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB * L_0 = (U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB *)il2cpp_codegen_object_new(U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB_il2cpp_TypeInfo_var);
		U3CMovePlayerU3Ed__18__ctor_m6E7EE2B2D20D49E175B2B8866A02164F2EF2A9C4(L_0, 0, /*hidden argument*/NULL);
		U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public float movingSpeedOfPlayer = 10f; //How fast player moving
		__this->set_movingSpeedOfPlayer_11((10.0f));
		// public float movingSpeedIncrement = 0.2f;  // How much to increase player speed after each score
		__this->set_movingSpeedIncrement_12((0.200000003f));
		// public float timeToDestroyParticle = 0.5f; // How long particle survive
		__this->set_timeToDestroyParticle_13((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 ScoreManager::get_Score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	{
		// public int Score { get; private set; }
		int32_t L_0 = __this->get_U3CScoreU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ScoreManager::set_Score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_set_Score_mBA2C094FE2271625BD7FC0E35379758317471BC3 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Score { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScoreU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 ScoreManager::get_HighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScoreManager_get_HighScore_m21FE4C89A84AA1114CE87CC60143DF6A64538124 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	{
		// public int HighScore { get; private set; }
		int32_t L_0 = __this->get_U3CHighScoreU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ScoreManager::set_HighScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_set_HighScore_mFF9BE08C2F25EA0E97DFADD4AAD053E68589FCE0 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int HighScore { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHighScoreU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean ScoreManager::get_HasNewHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScoreManager_get_HasNewHighScore_m11C10A90A5F32B4BEDD9A054174F0A2F7D8DF1AE (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasNewHighScore { get; private set; }
		bool L_0 = __this->get_U3CHasNewHighScoreU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ScoreManager::set_HasNewHighScore(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_set_HasNewHighScore_m10A794EBFAD166E79295828858680403CF67E1F1 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HasNewHighScore { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CHasNewHighScoreU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void ScoreManager::add_ScoreUpdated(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_add_ScoreUpdated_m861EAFB35137B57E82F8B8EF9592E0F08DF546D6 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_ScoreUpdated_8();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_5 = V_2;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *>((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B **)(((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_address_of_ScoreUpdated_8()), L_5, L_6);
		V_0 = L_7;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8 = V_0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_8) == ((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ScoreManager::remove_ScoreUpdated(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_remove_ScoreUpdated_m807A3D2DB8177C2C2A39FE17CC938B77C84543EF (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_ScoreUpdated_8();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_5 = V_2;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *>((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B **)(((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_address_of_ScoreUpdated_8()), L_5, L_6);
		V_0 = L_7;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8 = V_0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_8) == ((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ScoreManager::add_HighscoreUpdated(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_add_HighscoreUpdated_m5CF50C585277D796C9FBC3311A9A0BD11FEE4781 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_HighscoreUpdated_9();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_5 = V_2;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *>((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B **)(((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_address_of_HighscoreUpdated_9()), L_5, L_6);
		V_0 = L_7;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8 = V_0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_8) == ((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ScoreManager::remove_HighscoreUpdated(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_remove_HighscoreUpdated_m9D6BF58E1273C00152EB513EC286D1639A4D18FE (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_HighscoreUpdated_9();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_5 = V_2;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *>((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B **)(((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_address_of_HighscoreUpdated_9()), L_5, L_6);
		V_0 = L_7;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8 = V_0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_8) == ((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ScoreManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Awake_mB6C30C958421EED1082D2D5B24532F2548DB4575 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance)
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_0 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0018:
	{
		// Instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Start_mD3AD35C8B826532687C5600F2BF465093D6D1F91 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	{
		// Reset();
		ScoreManager_Reset_m30E63C66FFEADE70DE216789164D2929816B0748(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Reset_m30E63C66FFEADE70DE216789164D2929816B0748 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB1EA0D19EDD2C3A2F60B0C36AD599E6C289DB3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Score = 0;
		ScoreManager_set_Score_mBA2C094FE2271625BD7FC0E35379758317471BC3_inline(__this, 0, /*hidden argument*/NULL);
		// HighScore = PlayerPrefs.GetInt(HIGHSCORE, 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralAB1EA0D19EDD2C3A2F60B0C36AD599E6C289DB3F, 0, /*hidden argument*/NULL);
		ScoreManager_set_HighScore_mFF9BE08C2F25EA0E97DFADD4AAD053E68589FCE0_inline(__this, L_0, /*hidden argument*/NULL);
		// HasNewHighScore = false;
		ScoreManager_set_HasNewHighScore_m10A794EBFAD166E79295828858680403CF67E1F1_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreManager::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_AddScore_m29230659E4787DE465721000EA79302A2D2B05D0 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB1EA0D19EDD2C3A2F60B0C36AD599E6C289DB3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Score += amount;
		int32_t L_0;
		L_0 = ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___amount0;
		ScoreManager_set_Score_mBA2C094FE2271625BD7FC0E35379758317471BC3_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		// ScoreUpdated(Score);
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_ScoreUpdated_8();
		int32_t L_3;
		L_3 = ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(L_2, L_3, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		// if (Score > HighScore)
		int32_t L_4;
		L_4 = ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3_inline(__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = ScoreManager_get_HighScore_m21FE4C89A84AA1114CE87CC60143DF6A64538124_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_005f;
		}
	}
	{
		// HighScore = Score;
		int32_t L_6;
		L_6 = ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3_inline(__this, /*hidden argument*/NULL);
		ScoreManager_set_HighScore_mFF9BE08C2F25EA0E97DFADD4AAD053E68589FCE0_inline(__this, L_6, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt(HIGHSCORE, HighScore);
		int32_t L_7;
		L_7 = ScoreManager_get_HighScore_m21FE4C89A84AA1114CE87CC60143DF6A64538124_inline(__this, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralAB1EA0D19EDD2C3A2F60B0C36AD599E6C289DB3F, L_7, /*hidden argument*/NULL);
		// HasNewHighScore = true;
		ScoreManager_set_HasNewHighScore_m10A794EBFAD166E79295828858680403CF67E1F1_inline(__this, (bool)1, /*hidden argument*/NULL);
		// HighscoreUpdated(HighScore);
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_HighscoreUpdated_9();
		int32_t L_9;
		L_9 = ScoreManager_get_HighScore_m21FE4C89A84AA1114CE87CC60143DF6A64538124_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(L_8, L_9, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void ScoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager__ctor_m638A240D34643E8AB9D17553622C1C9354348354 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager__cctor_m9ECA957805869A27B1D69C340B2BBB2EC279869D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__25_0_m98B982D46BC3B93A960D04AD0464AEE5CECF3334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__25_1_mCE282ECBFA90C72F167C66F04AE9D810D38422C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static event Action<int> ScoreUpdated = delegate {};
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_il2cpp_TypeInfo_var);
		U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D * L_0 = ((U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__25_0_m98B982D46BC3B93A960D04AD0464AEE5CECF3334_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->set_ScoreUpdated_8(L_1);
		// public static event Action<int> HighscoreUpdated = delegate {};
		U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D * L_2 = ((U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__25_1_mCE282ECBFA90C72F167C66F04AE9D810D38422C7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->set_HighscoreUpdated_9(L_3);
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
// System.Void SoundManager::add_MuteStatusChanged(SoundManager/OnMuteStatusChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_add_MuteStatusChanged_m16D1FAFF35B2FE9632AC5C354478A73476DFD84E (OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * V_0 = NULL;
	OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * V_1 = NULL;
	OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * V_2 = NULL;
	{
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_MuteStatusChanged_10();
		V_0 = L_0;
	}

IL_0006:
	{
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_1 = V_0;
		V_1 = L_1;
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_2 = V_1;
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 *)CastclassSealed((RuntimeObject*)L_4, OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76_il2cpp_TypeInfo_var));
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_5 = V_2;
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_6 = V_1;
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_7;
		L_7 = InterlockedCompareExchangeImpl<OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 *>((OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 **)(((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_address_of_MuteStatusChanged_10()), L_5, L_6);
		V_0 = L_7;
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_8 = V_0;
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_9 = V_1;
		if ((!(((RuntimeObject*)(OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 *)L_8) == ((RuntimeObject*)(OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void SoundManager::remove_MuteStatusChanged(SoundManager/OnMuteStatusChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_remove_MuteStatusChanged_m075883817335B5AC52DD0C7D45194C57F6D1748D (OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * V_0 = NULL;
	OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * V_1 = NULL;
	OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * V_2 = NULL;
	{
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_MuteStatusChanged_10();
		V_0 = L_0;
	}

IL_0006:
	{
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_1 = V_0;
		V_1 = L_1;
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_2 = V_1;
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 *)CastclassSealed((RuntimeObject*)L_4, OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76_il2cpp_TypeInfo_var));
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_5 = V_2;
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_6 = V_1;
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_7;
		L_7 = InterlockedCompareExchangeImpl<OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 *>((OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 **)(((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_address_of_MuteStatusChanged_10()), L_5, L_6);
		V_0 = L_7;
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_8 = V_0;
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_9 = V_1;
		if ((!(((RuntimeObject*)(OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 *)L_8) == ((RuntimeObject*)(OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_m78F953F39CFB3F539240E1226D04270B793B1A76 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance)
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0018:
	{
		// Instance = this;
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Start_mE4854722D4248D4CCD33E4202389B3F187C51303 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_11(L_0);
		// SetMute(IsMuted());
		bool L_1;
		L_1 = SoundManager_IsMuted_m69B8CBF349D293B9B670CF0ACE1FEAEA827659DD(__this, /*hidden argument*/NULL);
		SoundManager_SetMute_mAC57D96044379B352DCF29A592897E31DC460180(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlaySound(SoundManager/Sound,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_mA6B5BAC882A03D2643CB55C00F70976EAC6621F3 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * ___sound0, bool ___autoScaleVolume1, float ___maxVolumeScale2, const RuntimeMethod* method)
{
	{
		// StartCoroutine(CRPlaySound(sound, autoScaleVolume, maxVolumeScale));
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_0 = ___sound0;
		bool L_1 = ___autoScaleVolume1;
		float L_2 = ___maxVolumeScale2;
		RuntimeObject* L_3;
		L_3 = SoundManager_CRPlaySound_m616DC60B0FF65461EDB4815B21C42AFA7D60B960(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SoundManager::CRPlaySound(SoundManager/Sound,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SoundManager_CRPlaySound_m616DC60B0FF65461EDB4815B21C42AFA7D60B960 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * ___sound0, bool ___autoScaleVolume1, float ___maxVolumeScale2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 * L_0 = (U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 *)il2cpp_codegen_object_new(U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789_il2cpp_TypeInfo_var);
		U3CCRPlaySoundU3Ed__18__ctor_mEBE8F5DF8B571D8329DCC4381D6FEAAB7108D838(L_0, 0, /*hidden argument*/NULL);
		U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 * L_2 = L_1;
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_3 = ___sound0;
		NullCheck(L_2);
		L_2->set_sound_2(L_3);
		U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 * L_4 = L_2;
		bool L_5 = ___autoScaleVolume1;
		NullCheck(L_4);
		L_4->set_autoScaleVolume_5(L_5);
		U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 * L_6 = L_4;
		float L_7 = ___maxVolumeScale2;
		NullCheck(L_6);
		L_6->set_maxVolumeScale_4(L_7);
		return L_6;
	}
}
// System.Void SoundManager::PlayMusic(SoundManager/Sound,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayMusic_mAD786F79287D55A41EC7E2CFD1CB46090169C089 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * ___music0, bool ___loop1, const RuntimeMethod* method)
{
	{
		// audioSource.clip = music.clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_11();
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_1 = ___music0;
		NullCheck(L_1);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = L_1->get_clip_0();
		NullCheck(L_0);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_0, L_2, /*hidden argument*/NULL);
		// audioSource.loop = loop;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_audioSource_11();
		bool L_4 = ___loop1;
		NullCheck(L_3);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_3, L_4, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_audioSource_11();
		NullCheck(L_5);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PauseMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PauseMusic_m07DB395B99F050DA39E5DD7D30DDE8337548FD4B (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// audioSource.Pause();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_11();
		NullCheck(L_0);
		AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::ResumeMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ResumeMusic_mD7B4D52DFAB5942DD159764585D449BC9B37F944 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// audioSource.UnPause();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_11();
		NullCheck(L_0);
		AudioSource_UnPause_m17BEE2B5A9607757EF0635450D210E4FD5E3EAF2(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Stop_m89B78A3949876214FCFEF8C6662A478493AEA51B (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_11();
		NullCheck(L_0);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SoundManager::IsMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_IsMuted_m69B8CBF349D293B9B670CF0ACE1FEAEA827659DD (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA30632DCAE623E87F8DEF40940B09D77ECFB8E04);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (PlayerPrefs.GetInt(MUTE_PREF_KEY, UN_MUTED) == MUTED);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralA30632DCAE623E87F8DEF40940B09D77ECFB8E04, (-1), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void SoundManager::ToggleMute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ToggleMute_mAAE00DB82332AF519DA5307514F8FBEF4AD0823D (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA30632DCAE623E87F8DEF40940B09D77ECFB8E04);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool mute = !IsMuted();
		bool L_0;
		L_0 = SoundManager_IsMuted_m69B8CBF349D293B9B670CF0ACE1FEAEA827659DD(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (mute)
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// PlayerPrefs.SetInt(MUTE_PREF_KEY, MUTED);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA30632DCAE623E87F8DEF40940B09D77ECFB8E04, 1, /*hidden argument*/NULL);
		// if (MuteStatusChanged != null)
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_2 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_MuteStatusChanged_10();
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		// MuteStatusChanged(true);
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_3 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_MuteStatusChanged_10();
		NullCheck(L_3);
		OnMuteStatusChanged_Invoke_m47994F23764AF85A5DB528BA66657CE259999AAC(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0049;
	}

IL_002c:
	{
		// PlayerPrefs.SetInt(MUTE_PREF_KEY, UN_MUTED);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA30632DCAE623E87F8DEF40940B09D77ECFB8E04, (-1), /*hidden argument*/NULL);
		// if (MuteStatusChanged != null)
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_4 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_MuteStatusChanged_10();
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		// MuteStatusChanged(false);
		OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * L_5 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_MuteStatusChanged_10();
		NullCheck(L_5);
		OnMuteStatusChanged_Invoke_m47994F23764AF85A5DB528BA66657CE259999AAC(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// SetMute(mute);
		bool L_6 = V_0;
		SoundManager_SetMute_mAC57D96044379B352DCF29A592897E31DC460180(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::SetMute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_SetMute_mAC57D96044379B352DCF29A592897E31DC460180 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, bool ___isMuted0, const RuntimeMethod* method)
{
	{
		// audioSource.mute = isMuted;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_11();
		bool L_1 = ___isMuted0;
		NullCheck(L_0);
		AudioSource_set_mute_m69E2DFCF261D2D187ED756096B7E0DE622292C71(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m30D18BC25871BD3FF7FB195A1CAE50A2EE48FCAE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// public int maxSimultaneousSounds = 7;
		__this->set_maxSimultaneousSounds_5(7);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StandaloneInput_GetAxis_m879778236E844FFB175FC5EFED4D50C31FE914A0 (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	{
		// return raw ? Input.GetAxisRaw(name) : Input.GetAxis(name);
		bool L_0 = ___raw1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___name0;
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000a:
	{
		String_t* L_3 = ___name0;
		float L_4;
		L_4 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButton_m6082577C808C1ED0E6D41434A917CAA90C6054DC (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// return Input.GetButton(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonDown_m1170A0D0F15EFAA2C69F865A8FBED63EED6F55C2 (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// return Input.GetButtonDown(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonUp_mD1A9A9DA63DEF0BB1F5743E1E92A5A65DA89B28B (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// return Input.GetButtonUp(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonDown_mC273D780F0692CD7233597FF543B1A83A947F34A (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetButtonDown_mC273D780F0692CD7233597FF543B1A83A947F34A_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonUp_mFF786A10495F3FFAB08DA57378B11BE278C9670D (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetButtonUp_mFF786A10495F3FFAB08DA57378B11BE278C9670D_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisPositive_m48E3A614364EA257E208F312D690B4156545E314 (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisPositive_m48E3A614364EA257E208F312D690B4156545E314_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisNegative_mFC6573E09AAD9371BDF288183584126E3C45BB02 (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisNegative_mFC6573E09AAD9371BDF288183584126E3C45BB02_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisZero_m76EE6A91ADD9C7A867B279C16239FCC197FCBA0B (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisZero_m76EE6A91ADD9C7A867B279C16239FCC197FCBA0B_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxis_m38950004F9B6DD18B1ADFE2061DEF3356816E31F (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxis_m38950004F9B6DD18B1ADFE2061DEF3356816E31F_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  StandaloneInput_MousePosition_mFBD800C92551160E40AC7EB8549E760240334BFE (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, const RuntimeMethod* method)
{
	{
		// return Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_mD89211F517B446A581B7D7AA1079D8FEBFEC389D (StandaloneInput_t0A608653795632B5513FD86ED7AD48F0BA002FB3 * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m39FA60B6A3FB2A793B3825E6EE488A0262224DCB(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_OnEnable_m9419C0AFC8EABA0CB8F02488E6653CB6C0ED262B (TiltInput_t27C209D4AB4E716E594657AAE6B1C75A7C4905A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mapping.type == AxisMapping.MappingType.NamedAxis)
		AxisMapping_t8B5B07F7E95F2AE39BE3A059459C1A5ACCE96427 * L_0 = __this->get_mapping_4();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_0();
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		// m_SteerAxis = new CrossPlatformInputManager.VirtualAxis(mapping.axisName);
		AxisMapping_t8B5B07F7E95F2AE39BE3A059459C1A5ACCE96427 * L_2 = __this->get_mapping_4();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_axisName_1();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_4 = (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 *)il2cpp_codegen_object_new(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m88EDC66F4BAB51D1BA2BDB502EBE995F08F42E64(L_4, L_3, /*hidden argument*/NULL);
		__this->set_m_SteerAxis_8(L_4);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_SteerAxis);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_5 = __this->get_m_SteerAxis_8();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDA9D3A2181CD74F9096BF1C7807802DE353E4E1A(L_5, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_Update_mC35CD38493ECF6EB17DB66B5219C8C817F88F034 (TiltInput_t27C209D4AB4E716E594657AAE6B1C75A7C4905A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// float angle = 0;
		V_0 = (0.0f);
		// if (Input.acceleration != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0079;
		}
	}
	{
		// switch (tiltAroundAxis)
		int32_t L_3 = __this->get_tiltAroundAxis_5();
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0079;
	}

IL_0027:
	{
		// angle = Mathf.Atan2(Input.acceleration.x, -Input.acceleration.y)*Mathf.Rad2Deg +
		//         centreAngleOffset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		float L_10;
		L_10 = atan2f(L_7, ((-L_9)));
		float L_11 = __this->get_centreAngleOffset_7();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_10, (float)(57.2957802f))), (float)L_11));
		// break;
		goto IL_0079;
	}

IL_0051:
	{
		// angle = Mathf.Atan2(Input.acceleration.z, -Input.acceleration.y)*Mathf.Rad2Deg +
		//         centreAngleOffset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		float L_16;
		L_16 = atan2f(L_13, ((-L_15)));
		float L_17 = __this->get_centreAngleOffset_7();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_16, (float)(57.2957802f))), (float)L_17));
	}

IL_0079:
	{
		// float axisValue = Mathf.InverseLerp(-fullTiltAngle, fullTiltAngle, angle)*2 - 1;
		float L_18 = __this->get_fullTiltAngle_6();
		float L_19 = __this->get_fullTiltAngle_6();
		float L_20 = V_0;
		float L_21;
		L_21 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B(((-L_18)), L_19, L_20, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_21, (float)(2.0f))), (float)(1.0f)));
		// switch (mapping.type)
		AxisMapping_t8B5B07F7E95F2AE39BE3A059459C1A5ACCE96427 * L_22 = __this->get_mapping_4();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_type_0();
		V_3 = L_23;
		int32_t L_24 = V_3;
		switch (L_24)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_00d7;
			}
			case 3:
			{
				goto IL_00e5;
			}
		}
	}
	{
		return;
	}

IL_00bc:
	{
		// m_SteerAxis.Update(axisValue);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_25 = __this->get_m_SteerAxis_8();
		float L_26 = V_1;
		NullCheck(L_25);
		VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline(L_25, L_26, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c9:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionX(axisValue*Screen.width);
		float L_27 = V_1;
		int32_t L_28;
		L_28 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionX_m963A27C3CD1CA33ED0054E029C046E6A492E4EF0(((float)il2cpp_codegen_multiply((float)L_27, (float)((float)((float)L_28)))), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00d7:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionY(axisValue*Screen.width);
		float L_29 = V_1;
		int32_t L_30;
		L_30 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionY_m7EC2205F945F0DF0BAC67DC9907C8EDEFE97169E(((float)il2cpp_codegen_multiply((float)L_29, (float)((float)((float)L_30)))), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00e5:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionZ(axisValue*Screen.width);
		float L_31 = V_1;
		int32_t L_32;
		L_32 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionZ_mAA1C2749743422A7326CDC4C40BEABCD1C6C1DDF(((float)il2cpp_codegen_multiply((float)L_31, (float)((float)((float)L_32)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_OnDisable_m2125CE9F5BD06B2C184F6642BCE6585218A6E223 (TiltInput_t27C209D4AB4E716E594657AAE6B1C75A7C4905A9 * __this, const RuntimeMethod* method)
{
	{
		// m_SteerAxis.Remove();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_0 = __this->get_m_SteerAxis_8();
		NullCheck(L_0);
		VirtualAxis_Remove_mCC5EF7DB8EC863AC7030AC9AB92F46A723BB7748(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput__ctor_m20D49463D098180E19FA5980DCE712A520358551 (TiltInput_t27C209D4AB4E716E594657AAE6B1C75A7C4905A9 * __this, const RuntimeMethod* method)
{
	{
		// public float fullTiltAngle = 25;
		__this->set_fullTiltAngle_6((25.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnEnable_m8046F501C2F56DD64ADF83DCD0923DD745E4806F (TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * __this, const RuntimeMethod* method)
{
	{
		// CreateVirtualAxes();
		TouchPad_CreateVirtualAxes_m09ACDDC26B1A01D3904821C3547FE8CFC67CD6F0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_Start_mCD5535ABCB35D5C1660120B56C74EFC6FD7D8D93 (TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Image = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_m_Image_21(L_0);
		// m_Center = m_Image.transform.position;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_m_Image_21();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		__this->set_m_Center_20(L_3);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_m09ACDDC26B1A01D3904821C3547FE8CFC67CD6F0 (TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * G_B2_0 = NULL;
	TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * G_B3_1 = NULL;
	TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * G_B5_0 = NULL;
	TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * G_B6_1 = NULL;
	{
		// m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
		int32_t L_0 = __this->get_axesToUse_4();
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->get_axesToUse_4();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_UseX_13((bool)G_B3_0);
		// m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);
		int32_t L_2 = __this->get_axesToUse_4();
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->get_axesToUse_4();
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_m_UseY_14((bool)G_B6_0);
		// if (m_UseX)
		bool L_4 = __this->get_m_UseX_13();
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
		String_t* L_5 = __this->get_horizontalAxisName_6();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_6 = (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 *)il2cpp_codegen_object_new(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m88EDC66F4BAB51D1BA2BDB502EBE995F08F42E64(L_6, L_5, /*hidden argument*/NULL);
		__this->set_m_HorizontalVirtualAxis_15(L_6);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_7 = __this->get_m_HorizontalVirtualAxis_15();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDA9D3A2181CD74F9096BF1C7807802DE353E4E1A(L_7, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// if (m_UseY)
		bool L_8 = __this->get_m_UseY_14();
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
		String_t* L_9 = __this->get_verticalAxisName_7();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_10 = (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 *)il2cpp_codegen_object_new(VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m88EDC66F4BAB51D1BA2BDB502EBE995F08F42E64(L_10, L_9, /*hidden argument*/NULL);
		__this->set_m_VerticalVirtualAxis_16(L_10);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_11 = __this->get_m_VerticalVirtualAxis_16();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDA9D3A2181CD74F9096BF1C7807802DE353E4E1A(L_11, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_m1E34D78B61E20D535CF499A7D7A0690D8082EBDA (TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// value = value.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___value0), /*hidden argument*/NULL);
		___value0 = L_0;
		// if (m_UseX)
		bool L_1 = __this->get_m_UseX_13();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// m_HorizontalVirtualAxis.Update(value.x);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_2 = __this->get_m_HorizontalVirtualAxis_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___value0;
		float L_4 = L_3.get_x_2();
		NullCheck(L_2);
		VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (m_UseY)
		bool L_5 = __this->get_m_UseY_14();
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// m_VerticalVirtualAxis.Update(value.y);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_6 = __this->get_m_VerticalVirtualAxis_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___value0;
		float L_8 = L_7.get_y_3();
		NullCheck(L_6);
		VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline(L_6, L_8, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnPointerDown_mDE5A780D09754F413B01C3D71717A82E101F492B (TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	{
		// m_Dragging = true;
		__this->set_m_Dragging_17((bool)1);
		// m_Id = data.pointerId;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline(L_0, /*hidden argument*/NULL);
		__this->set_m_Id_18(L_1);
		// if (controlStyle != ControlStyle.Absolute )
		int32_t L_2 = __this->get_controlStyle_5();
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// m_Center = data.position;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___data0;
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_4, /*hidden argument*/NULL);
		__this->set_m_Center_20(L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_Update_m89E6817453070E87C77A803271689E69AC83111C (TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!m_Dragging)
		bool L_0 = __this->get_m_Dragging_17();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Input.touchCount >= m_Id + 1 && m_Id != -1)
		int32_t L_1;
		L_1 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		int32_t L_2 = __this->get_m_Id_18();
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_3 = __this->get_m_Id_18();
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_00f4;
		}
	}
	{
		// if (controlStyle == ControlStyle.Swipe)
		int32_t L_4 = __this->get_controlStyle_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_005c;
		}
	}
	{
		// m_Center = m_PreviousTouchPos;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = __this->get_m_PreviousTouchPos_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		__this->set_m_Center_20(L_6);
		// m_PreviousTouchPos = Input.touches[m_Id].position;
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_7;
		L_7 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		int32_t L_8 = __this->get_m_Id_18();
		NullCheck(L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), /*hidden argument*/NULL);
		__this->set_m_PreviousTouchPos_19(L_9);
	}

IL_005c:
	{
		// Vector2 pointerDelta = new Vector2(Input.touches[m_Id].position.x - m_Center.x , Input.touches[m_Id].position.y - m_Center.y).normalized;
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_10;
		L_10 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		int32_t L_11 = __this->get_m_Id_18();
		NullCheck(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), /*hidden argument*/NULL);
		float L_13 = L_12.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_m_Center_20();
		float L_15 = L_14->get_x_2();
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_16;
		L_16 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		int32_t L_17 = __this->get_m_Id_18();
		NullCheck(L_16);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), /*hidden argument*/NULL);
		float L_19 = L_18.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_m_Center_20();
		float L_21 = L_20->get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_22), ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)), ((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), /*hidden argument*/NULL);
		V_1 = L_22;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_23;
		// pointerDelta.x *= Xsensitivity;
		float* L_24 = (&V_0)->get_address_of_x_0();
		float* L_25 = L_24;
		float L_26 = *((float*)L_25);
		float L_27 = __this->get_Xsensitivity_8();
		*((float*)L_25) = (float)((float)il2cpp_codegen_multiply((float)L_26, (float)L_27));
		// pointerDelta.y *= Ysensitivity;
		float* L_28 = (&V_0)->get_address_of_y_1();
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		float L_31 = __this->get_Ysensitivity_9();
		*((float*)L_29) = (float)((float)il2cpp_codegen_multiply((float)L_30, (float)L_31));
		// UpdateVirtualAxes(new Vector3(pointerDelta.x, pointerDelta.y, 0));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_0;
		float L_33 = L_32.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = V_0;
		float L_35 = L_34.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), L_33, L_35, (0.0f), /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m1E34D78B61E20D535CF499A7D7A0690D8082EBDA(__this, L_36, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnPointerUp_m88F91FCE7A72803EF92EF4F2518C1082AA221C68 (TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	{
		// m_Dragging = false;
		__this->set_m_Dragging_17((bool)0);
		// m_Id = -1;
		__this->set_m_Id_18((-1));
		// UpdateVirtualAxes(Vector3.zero);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m1E34D78B61E20D535CF499A7D7A0690D8082EBDA(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnDisable_mB3CFD5F3AF6F4BBB0DB43DFDFFBC6ABCAE9B25F2 (TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CrossPlatformInputManager.AxisExists(horizontalAxisName))
		String_t* L_0 = __this->get_horizontalAxisName_6();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_AxisExists_m4766470D2A3BCE44CFFE44BCAC0FDA0623B23372(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// CrossPlatformInputManager.UnRegisterVirtualAxis(horizontalAxisName);
		String_t* L_2 = __this->get_horizontalAxisName_6();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m64342E501FD520FE5FE28A1AB5CF1B56334168F7(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if (CrossPlatformInputManager.AxisExists(verticalAxisName))
		String_t* L_3 = __this->get_verticalAxisName_7();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = CrossPlatformInputManager_AxisExists_m4766470D2A3BCE44CFFE44BCAC0FDA0623B23372(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// CrossPlatformInputManager.UnRegisterVirtualAxis(verticalAxisName);
		String_t* L_5 = __this->get_verticalAxisName_7();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m64342E501FD520FE5FE28A1AB5CF1B56334168F7(L_5, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad__ctor_m222A3522FA022C53F488FBB4F482F913ED34C009 (TouchPad_t17AAB8867A97BC6EB7BA080CA9ABFE5AE4CE2D02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		__this->set_horizontalAxisName_6(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		__this->set_verticalAxisName_7(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// public float Xsensitivity = 1f;
		__this->set_Xsensitivity_8((1.0f));
		// public float Ysensitivity = 1f;
		__this->set_Ysensitivity_9((1.0f));
		// int m_Id = -1;
		__this->set_m_Id_18((-1));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Start_m74C43E03145ECBC4566A9979DB7A1D342972A527 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA26747DD0EBFD13F4BD9E4FD0B859C42B61275C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_StaticFields*)il2cpp_codegen_static_fields_for(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// playCount = PlayerPrefs.GetInt("play_count");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralAA26747DD0EBFD13F4BD9E4FD0B859C42B61275C, /*hidden argument*/NULL);
		__this->set_playCount_13(L_0);
		// if(playCount>0 && playCount%3 ==0)
		int32_t L_1 = __this->get_playCount_13();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->get_playCount_13();
		if (((int32_t)((int32_t)L_2%(int32_t)3)))
		{
			goto IL_0035;
		}
	}
	{
		// rateMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_rateMenu_12();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// ScoreManager.Instance.Reset();
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_4 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_4);
		ScoreManager_Reset_m30E63C66FFEADE70DE216789164D2929816B0748(L_4, /*hidden argument*/NULL);
		// muteButton.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_muteButton_8();
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)0, /*hidden argument*/NULL);
		// unMuteButton.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_unMuteButton_9();
		NullCheck(L_6);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_6, (bool)0, /*hidden argument*/NULL);
		// replayButton.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_replayButton_10();
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Update_m01A435E125093AE9631843DBDD904FEF5C82D282 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB782883D90193A8164077ABDAC1F8E27AC48F65);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// score.text = ScoreManager.Instance.Score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_score_5();
		IL2CPP_RUNTIME_CLASS_INIT(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_1 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// bestScore.text = ScoreManager.Instance.HighScore.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_bestScore_6();
		ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_5 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ScoreManager_get_HighScore_m21FE4C89A84AA1114CE87CC60143DF6A64538124_inline(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// gold.text = CoinManager.Instance.Coins.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_gold_7();
		IL2CPP_RUNTIME_CLASS_INIT(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var);
		CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * L_9 = ((CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = CoinManager_get_Coins_m0482D9A403BF3F3211D7BFD0925404357267925D_inline(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// if (playerController.gameOver)
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_12 = __this->get_playerController_11();
		NullCheck(L_12);
		bool L_13 = L_12->get_gameOver_10();
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		// Invoke("EnableButton", 1.5f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralAB782883D90193A8164077ABDAC1F8E27AC48F65, (1.5f), /*hidden argument*/NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void UIController::SoundClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SoundClick_mE779F074A39FF1BD03D884FD7B097D84A3AAA1BF (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SoundManager.Instance.IsMuted())
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = SoundManager_IsMuted_m69B8CBF349D293B9B670CF0ACE1FEAEA827659DD(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// unMuteButton.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_unMuteButton_9();
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)1, /*hidden argument*/NULL);
		// muteButton.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_muteButton_8();
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)0, /*hidden argument*/NULL);
		// SoundManager.Instance.ToggleMute();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_4 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_4);
		SoundManager_ToggleMute_mAAE00DB82332AF519DA5307514F8FBEF4AD0823D(L_4, /*hidden argument*/NULL);
		// }
		goto IL_0052;
	}

IL_0030:
	{
		// unMuteButton.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_unMuteButton_9();
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)0, /*hidden argument*/NULL);
		// muteButton.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_muteButton_8();
		NullCheck(L_6);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_6, (bool)1, /*hidden argument*/NULL);
		// SoundManager.Instance.ToggleMute();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_7 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_7);
		SoundManager_ToggleMute_mAAE00DB82332AF519DA5307514F8FBEF4AD0823D(L_7, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// SoundManager.Instance.PlaySound(SoundManager.Instance.hitButton);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_8 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_9 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_9);
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_10 = L_9->get_hitButton_6();
		NullCheck(L_8);
		SoundManager_PlaySound_mA6B5BAC882A03D2643CB55C00F70976EAC6621F3(L_8, L_10, (bool)1, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::ReplayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ReplayButton_m53D5500720B2E31D6099A9B9151BA33A76CE515C (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA26747DD0EBFD13F4BD9E4FD0B859C42B61275C);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// PlayerPrefs.SetInt("play_count", playCount+1);
		int32_t L_0 = __this->get_playCount_13();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralAA26747DD0EBFD13F4BD9E4FD0B859C42B61275C, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// SoundManager.Instance.PlaySound(SoundManager.Instance.hitButton);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_1 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_2 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_2);
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_3 = L_2->get_hitButton_6();
		NullCheck(L_1);
		SoundManager_PlaySound_mA6B5BAC882A03D2643CB55C00F70976EAC6621F3(L_1, L_3, (bool)1, (1.0f), /*hidden argument*/NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4;
		L_4 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::Rate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Rate_mF4F5E6C8C37E14B0A80C1BF5121B1566024AFE35 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, bool ___rate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral088C68B8B70890806CF94EAAE69316081722ADE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rateMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_rateMenu_12();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// if(rate)
		bool L_1 = ___rate0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Application.OpenURL("http://unity3d.com/");
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(_stringLiteral088C68B8B70890806CF94EAAE69316081722ADE9, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UIController::EnableButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_EnableButton_m1BE173FC127C6F33AE8EC2087A403B5A534B98E4 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// replayButton.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_replayButton_10();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// if (SoundManager.Instance.IsMuted())
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_1 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = SoundManager_IsMuted_m69B8CBF349D293B9B670CF0ACE1FEAEA827659DD(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// muteButton.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_muteButton_8();
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)1, /*hidden argument*/NULL);
		// unMuteButton.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_unMuteButton_9();
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0031:
	{
		// muteButton.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_muteButton_8();
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)0, /*hidden argument*/NULL);
		// unMuteButton.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_unMuteButton_9();
		NullCheck(L_6);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_m57DAF9FADDD58C79489BCF6474E55D3514E9BA21 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CvirtualMousePositionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m3D48CAC3DC8D5A673C81F6986C8FE48DCD19CB59 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CvirtualMousePositionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_m01EC1FD139D4DC78B03BD91601E694BB0FD99FCD (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name);
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_m504FCFBACFAF025BD335F73B9E6365D0877F21FC (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualButtons.ContainsKey(name);
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_0 = __this->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m4D5DAB8CD547D5200513D860FDA6DC3930150BAC (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5939A79FB12E9E026B0EAC2CD560418C09105918_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1921D3070489B1532E810684C2992B44215A052);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(axis.name))
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = __this->get_m_VirtualAxes_1();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_1 = ___axis0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual axis named " + axis.name + " registered.");
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_4 = ___axis0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE1921D3070489B1532E810684C2992B44215A052, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// m_VirtualAxes.Add(axis.name, axis);
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_7 = __this->get_m_VirtualAxes_1();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_8 = ___axis0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline(L_8, /*hidden argument*/NULL);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_10 = ___axis0;
		NullCheck(L_7);
		Dictionary_2_Add_m5939A79FB12E9E026B0EAC2CD560418C09105918(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m5939A79FB12E9E026B0EAC2CD560418C09105918_RuntimeMethod_var);
		// if (!axis.matchWithInputManager)
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_11 = ___axis0;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualAxis_get_matchWithInputManager_m531F00E4DD93A41FB0244FB71343FC9FB07DC4DF_inline(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(axis.name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = __this->get_m_AlwaysUseVirtual_3();
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_14 = ___axis0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_13, L_15, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m7AEF52824F354DA313380E110D03D2800F1A9B21 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mCA41944174418E6CD20DF9DAA719EF69BA0D138F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(button.name))
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_0 = __this->get_m_VirtualButtons_2();
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_1 = ___button0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual button named " + button.name + " registered.");
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_4 = ___button0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// m_VirtualButtons.Add(button.name, button);
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_7 = __this->get_m_VirtualButtons_2();
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_8 = ___button0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline(L_8, /*hidden argument*/NULL);
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_10 = ___button0;
		NullCheck(L_7);
		Dictionary_2_Add_mCA41944174418E6CD20DF9DAA719EF69BA0D138F(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_mCA41944174418E6CD20DF9DAA719EF69BA0D138F_RuntimeMethod_var);
		// if (!button.matchWithInputManager)
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_11 = ___button0;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualButton_get_matchWithInputManager_m614D75F3386EB15F081A2F5D548B5743589BE939_inline(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(button.name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = __this->get_m_AlwaysUseVirtual_3();
		VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * L_14 = ___button0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_13, L_15, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_mDC436E4797B5E7091462A67AC29559F8DE1FD688 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9ABB93EF4BB85F52163ADE13240BB5BCF7DBC14F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualAxes.Remove(name);
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_3 = __this->get_m_VirtualAxes_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m9ABB93EF4BB85F52163ADE13240BB5BCF7DBC14F(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m9ABB93EF4BB85F52163ADE13240BB5BCF7DBC14F_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_mFD11E0016A1865D5A0C3E05ED7DC6C3F15DAF2EB (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mFCA74707FFA822AA929227F758CE72F1D475F41B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_0 = __this->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m718C9E685F6654CF550F6161FF5106C46CADD2BA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualButtons.Remove(name);
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_3 = __this->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_mFCA74707FFA822AA929227F758CE72F1D475F41B(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_mFCA74707FFA822AA929227F758CE72F1D475F41B_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * VirtualInput_VirtualAxisReference_mB9BFA6AD246B52D158CE8309581FE468DF756914 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name) ? m_VirtualAxes[name] : null;
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m42FAA40BFC7782C3091A8CB00F264B0FF8480A77_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 *)NULL;
	}

IL_0010:
	{
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_3 = __this->get_m_VirtualAxes_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * L_5;
		L_5 = Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m368F6DF64D47F92AC059E5BDD4A08D2DA76AB454_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_mDEE15F467D72B1B64C99473FFB2E7C3D65175B70 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// virtualMousePosition = new Vector3(f, virtualMousePosition.y, virtualMousePosition.z);
		float L_0 = ___f0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		float L_4 = L_3.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m3D48CAC3DC8D5A673C81F6986C8FE48DCD19CB59_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m4A9FB6CF5DBD17EABABABFC241BBCBD2720B3EA9 (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, f, virtualMousePosition.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		float L_2 = ___f0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		float L_4 = L_3.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m3D48CAC3DC8D5A673C81F6986C8FE48DCD19CB59_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m5EF12D8C9F3A8F7FCC443E682DA1F456AAD5B1DD (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, virtualMousePosition.y, f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline(__this, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		float L_4 = ___f0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m3D48CAC3DC8D5A673C81F6986C8FE48DCD19CB59_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m39FA60B6A3FB2A793B3825E6EE488A0262224DCB (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m652A77AC86C1E2526D2D7F1E61C287D9B34B2069_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE6C778BE0A659414246FFABF6F957F741215BD86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, CrossPlatformInputManager.VirtualAxis> m_VirtualAxes =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualAxis>();
		Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 * L_0 = (Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666 *)il2cpp_codegen_object_new(Dictionary_2_tC4A6D857F0007417D8E990658D531B6D091D3666_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m652A77AC86C1E2526D2D7F1E61C287D9B34B2069(L_0, /*hidden argument*/Dictionary_2__ctor_m652A77AC86C1E2526D2D7F1E61C287D9B34B2069_RuntimeMethod_var);
		__this->set_m_VirtualAxes_1(L_0);
		// protected Dictionary<string, CrossPlatformInputManager.VirtualButton> m_VirtualButtons =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualButton>();
		Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C * L_1 = (Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C *)il2cpp_codegen_object_new(Dictionary_2_t39C73AC12187888098523CB04765880D3C038E7C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE6C778BE0A659414246FFABF6F957F741215BD86(L_1, /*hidden argument*/Dictionary_2__ctor_mE6C778BE0A659414246FFABF6F957F741215BD86_RuntimeMethod_var);
		__this->set_m_VirtualButtons_2(L_1);
		// protected List<string> m_AlwaysUseVirtual = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_m_AlwaysUseVirtual_3(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void WallController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallController_Start_m75A9EA44A1A582CF5FD7A6FFF878F1A0D4F0932F (WallController_t4DC0906AB58DCC0029018EF8788CF11D4B4B96AE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WallController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallController_Update_mB926F372FB50ACA0FC18535337C4BAB43C7B2930 (WallController_t4DC0906AB58DCC0029018EF8788CF11D4B4B96AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Ray rayDown = new Ray(gameObject.transform.position, Vector3.down);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_4), L_2, L_3, /*hidden argument*/NULL);
		// if(!Physics.Raycast(rayDown,out hit, 1.6f))
		bool L_5;
		L_5 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_4, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (1.60000002f), /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void WallController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallController__ctor_m9FF3C201AEC33EE35C10FE916354A1A297890224 (WallController_t4DC0906AB58DCC0029018EF8788CF11D4B4B96AE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraController/<FixCamera>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFixCameraU3Ed__13__ctor_m41933D5EF38DD045A69DE966CBCF74112B15D0E8 (U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void CameraController/<FixCamera>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFixCameraU3Ed__13_System_IDisposable_Dispose_mCEE5C08AF30DE06B8EE514C63B5C4440D8371809 (U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean CameraController/<FixCamera>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFixCameraU3Ed__13_MoveNext_m0FBC6F9B0199438845F81C042A82D1B8CF15D950 (U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00f7;
			}
			case 2:
			{
				goto IL_01db;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 startPos = cam.transform.position;
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_3 = V_1;
		NullCheck(L_3);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = L_3->get_cam_4();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		__this->set_U3CstartPosU3E5__2_3(L_6);
		// float t = 0;
		__this->set_U3CtU3E5__3_4((0.0f));
		// if (playerController.dirTurn > 0 && !cameraFixedLeft)
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_7 = V_1;
		NullCheck(L_7);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_8 = L_7->get_playerController_5();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_dirTurn_7();
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_012e;
		}
	}
	{
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->get_cameraFixedLeft_9();
		if (L_11)
		{
			goto IL_012e;
		}
	}
	{
		// cameraFixedLeft = true;
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_12 = V_1;
		NullCheck(L_12);
		L_12->set_cameraFixedLeft_9((bool)1);
		// cameraFixedRight = false;
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_13 = V_1;
		NullCheck(L_13);
		L_13->set_cameraFixedRight_10((bool)0);
		// Vector3 endPos = cam.transform.position + new Vector3(-1.5f, 0, 1.5f);
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_14 = V_1;
		NullCheck(L_14);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = L_14->get_cam_4();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), (-1.5f), (0.0f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_18, /*hidden argument*/NULL);
		__this->set_U3CendPosU3E5__4_5(L_19);
		goto IL_00fe;
	}

IL_00a5:
	{
		// float fraction = t / timeToFixCamera;
		float L_20 = __this->get_U3CtU3E5__3_4();
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->get_timeToFixCamera_12();
		V_2 = ((float)((float)L_20/(float)L_22));
		// cam.transform.position = Vector3.Lerp(startPos, endPos, fraction);
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_23 = V_1;
		NullCheck(L_23);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_24 = L_23->get_cam_4();
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = __this->get_U3CstartPosU3E5__2_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = __this->get_U3CendPosU3E5__4_5();
		float L_28 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_26, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_29, /*hidden argument*/NULL);
		// t += Time.deltaTime;
		float L_30 = __this->get_U3CtU3E5__3_4();
		float L_31;
		L_31 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtU3E5__3_4(((float)il2cpp_codegen_add((float)L_30, (float)L_31)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00f7:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00fe:
	{
		// while (t < timeToFixCamera)
		float L_32 = __this->get_U3CtU3E5__3_4();
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_33 = V_1;
		NullCheck(L_33);
		float L_34 = L_33->get_timeToFixCamera_12();
		if ((((float)L_32) < ((float)L_34)))
		{
			goto IL_00a5;
		}
	}
	{
		// cam.transform.position = endPos;
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_35 = V_1;
		NullCheck(L_35);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_36 = L_35->get_cam_4();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = __this->get_U3CendPosU3E5__4_5();
		NullCheck(L_37);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_37, L_38, /*hidden argument*/NULL);
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_39 = __this->get_address_of_U3CendPosU3E5__4_5();
		il2cpp_codegen_initobj(L_39, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}

IL_012e:
	{
		// if(playerController.dirTurn < 0 && !cameraFixedRight)
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_40 = V_1;
		NullCheck(L_40);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_41 = L_40->get_playerController_5();
		NullCheck(L_41);
		int32_t L_42 = L_41->get_dirTurn_7();
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_0212;
		}
	}
	{
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_43 = V_1;
		NullCheck(L_43);
		bool L_44 = L_43->get_cameraFixedRight_10();
		if (L_44)
		{
			goto IL_0212;
		}
	}
	{
		// cameraFixedRight = true;
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_45 = V_1;
		NullCheck(L_45);
		L_45->set_cameraFixedRight_10((bool)1);
		// cameraFixedLeft = false;
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_46 = V_1;
		NullCheck(L_46);
		L_46->set_cameraFixedLeft_9((bool)0);
		// Vector3 endPos = cam.transform.position + new Vector3(1.5f, 0, -1.5f);
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_47 = V_1;
		NullCheck(L_47);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_48 = L_47->get_cam_4();
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_51), (1.5f), (0.0f), (-1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_50, L_51, /*hidden argument*/NULL);
		__this->set_U3CendPosU3E5__4_5(L_52);
		goto IL_01e2;
	}

IL_0189:
	{
		// float fraction = t / timeToFixCamera;
		float L_53 = __this->get_U3CtU3E5__3_4();
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_54 = V_1;
		NullCheck(L_54);
		float L_55 = L_54->get_timeToFixCamera_12();
		V_3 = ((float)((float)L_53/(float)L_55));
		// cam.transform.position = Vector3.Lerp(startPos, endPos, fraction);
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_56 = V_1;
		NullCheck(L_56);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_57 = L_56->get_cam_4();
		NullCheck(L_57);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_57, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = __this->get_U3CstartPosU3E5__2_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = __this->get_U3CendPosU3E5__4_5();
		float L_61 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_59, L_60, L_61, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_58, L_62, /*hidden argument*/NULL);
		// t += Time.deltaTime;
		float L_63 = __this->get_U3CtU3E5__3_4();
		float L_64;
		L_64 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtU3E5__3_4(((float)il2cpp_codegen_add((float)L_63, (float)L_64)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01db:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01e2:
	{
		// while (t < timeToFixCamera)
		float L_65 = __this->get_U3CtU3E5__3_4();
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_66 = V_1;
		NullCheck(L_66);
		float L_67 = L_66->get_timeToFixCamera_12();
		if ((((float)L_65) < ((float)L_67)))
		{
			goto IL_0189;
		}
	}
	{
		// cam.transform.position = endPos;
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_68 = V_1;
		NullCheck(L_68);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_69 = L_68->get_cam_4();
		NullCheck(L_69);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_69, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71 = __this->get_U3CendPosU3E5__4_5();
		NullCheck(L_70);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_70, L_71, /*hidden argument*/NULL);
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_72 = __this->get_address_of_U3CendPosU3E5__4_5();
		il2cpp_codegen_initobj(L_72, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}

IL_0212:
	{
		// }
		return (bool)0;
	}
}
// System.Object CameraController/<FixCamera>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFixCameraU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1BE71C3DDB9E78302B27F990CBAF7C7C0F30B214 (U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void CameraController/<FixCamera>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFixCameraU3Ed__13_System_Collections_IEnumerator_Reset_mB40DD48A4FBA94ABE45B00E172F2CCA52573C253 (U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFixCameraU3Ed__13_System_Collections_IEnumerator_Reset_mB40DD48A4FBA94ABE45B00E172F2CCA52573C253_RuntimeMethod_var)));
	}
}
// System.Object CameraController/<FixCamera>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFixCameraU3Ed__13_System_Collections_IEnumerator_get_Current_mA8B367605B43D09F08FF6C78EB4B756A67E85567 (U3CFixCameraU3Ed__13_tBB6C974421D6E812CC40EA5DE6C6D347BAA96669 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void CameraController/<MoveCamera>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCameraU3Ed__12__ctor_mA282C5BD73B18BCABC144DDDFA5391D8D42C7D95 (U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void CameraController/<MoveCamera>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCameraU3Ed__12_System_IDisposable_Dispose_mC584B493848E97142CAD029A0CEF076470E2C40B (U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean CameraController/<MoveCamera>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveCameraU3Ed__12_MoveNext_m65E26FDBD2823D08C892647EF1BBEE45717B92FE (U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ce;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 startPos = cam.transform.position;
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_4 = V_1;
		NullCheck(L_4);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = L_4->get_cam_4();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_U3CstartPosU3E5__2_3(L_7);
		// Vector3 endPos = cam.transform.position += new Vector3(2.7f, 2.7f, 2.7f);
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_8 = V_1;
		NullCheck(L_8);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = L_8->get_cam_4();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (2.70000005f), (2.70000005f), (2.70000005f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = L_14;
		V_2 = L_15;
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_2;
		__this->set_U3CendPosU3E5__3_4(L_16);
		// float t = 0;
		__this->set_U3CtU3E5__4_5((0.0f));
		goto IL_00d5;
	}

IL_007c:
	{
		// float fraction = t / timeToMoveCamera;
		float L_17 = __this->get_U3CtU3E5__4_5();
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->get_timeToMoveCamera_11();
		V_3 = ((float)((float)L_17/(float)L_19));
		// cam.transform.position = Vector3.Lerp(startPos, endPos, fraction);
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_20 = V_1;
		NullCheck(L_20);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21 = L_20->get_cam_4();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = __this->get_U3CstartPosU3E5__2_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = __this->get_U3CendPosU3E5__3_4();
		float L_25 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_23, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_26, /*hidden argument*/NULL);
		// t += Time.deltaTime;
		float L_27 = __this->get_U3CtU3E5__4_5();
		float L_28;
		L_28 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtU3E5__4_5(((float)il2cpp_codegen_add((float)L_27, (float)L_28)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ce:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00d5:
	{
		// while (t < timeToMoveCamera)
		float L_29 = __this->get_U3CtU3E5__4_5();
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_30 = V_1;
		NullCheck(L_30);
		float L_31 = L_30->get_timeToMoveCamera_11();
		if ((((float)L_29) < ((float)L_31)))
		{
			goto IL_007c;
		}
	}
	{
		// cam.transform.position = endPos;
		CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * L_32 = V_1;
		NullCheck(L_32);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_33 = L_32->get_cam_4();
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = __this->get_U3CendPosU3E5__3_4();
		NullCheck(L_34);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_34, L_35, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object CameraController/<MoveCamera>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveCameraU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F9BA8D097D798A0CE4A4526899D63A0541627DA (U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void CameraController/<MoveCamera>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCameraU3Ed__12_System_Collections_IEnumerator_Reset_m1992928CF319210B1C8CE0C9AF28CACB241BD1D7 (U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveCameraU3Ed__12_System_Collections_IEnumerator_Reset_m1992928CF319210B1C8CE0C9AF28CACB241BD1D7_RuntimeMethod_var)));
	}
}
// System.Object CameraController/<MoveCamera>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveCameraU3Ed__12_System_Collections_IEnumerator_get_Current_mE2F63A1ACF2C4057D3B19E003CCB20310E386EE9 (U3CMoveCameraU3Ed__12_t4FD2F3306C18EB82453B8E204D3827C93B601C3E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void CoinManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mED2EE4223F89FFF579A4E1B5F15C73DCA1C81B5B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991 * L_0 = (U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991 *)il2cpp_codegen_object_new(U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE9FFA3430BF726B757D880F7B5074D87A9BC2CE6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void CoinManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE9FFA3430BF726B757D880F7B5074D87A9BC2CE6 (U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CoinManager/<>c::<.cctor>b__16_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__16_0_mEB383CF77380E219BB8E9AE30A7B10B8BAECFF8E (U3CU3Ec_t587AF1C0BBA440484D40F2F2C4094C90AA05C991 * __this, int32_t ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public static event Action<int> CoinsUpdated = delegate {};
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mE474E7B124D3E784ADF9D3532BC0A75F2684A2A2 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_m531F00E4DD93A41FB0244FB71343FC9FB07DC4DF (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m61D9709975B67900CAD15101BF9C3AD57D2D88D0 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m88EDC66F4BAB51D1BA2BDB502EBE995F08F42E64 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualAxis__ctor_m486C4129232F0F15151DA882C1C9F1DFDFE5D047(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m486C4129232F0F15151DA882C1C9F1DFDFE5D047 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		// public VirtualAxis(string name, bool matchToInputSettings)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualAxis_set_name_mE474E7B124D3E784ADF9D3532BC0A75F2684A2A2_inline(__this, L_0, /*hidden argument*/NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualAxis_set_matchWithInputManager_m61D9709975B67900CAD15101BF9C3AD57D2D88D0_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_mCC5EF7DB8EC863AC7030AC9AB92F46A723BB7748 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualAxis(name);
		String_t* L_0;
		L_0 = VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m64342E501FD520FE5FE28A1AB5CF1B56334168F7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->set_m_Value_1(L_0);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mAC358FAC6484FAA00EB187E0583ECD4576794C44 (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Value; }
		float L_0 = __this->get_m_Value_1();
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValueRaw_mDCDC78FB43C16D8F65B9BE8799F0053DBB64007E (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Value; }
		float L_0 = __this->get_m_Value_1();
		return L_0;
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
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_name_mEF2365424C0A01C48B1D95066D01E5DC0B5B6DFA (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m614D75F3386EB15F081A2F5D548B5743589BE939 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m371812D456658C76DBC0128EC168A3091BBDF5C0 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m71595BAF216317FBF79F564F306D3A87F430EDE4 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualButton__ctor_m50F9D1236BD4CFA9C3136E0D9321DF9604D5C021(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m50F9D1236BD4CFA9C3136E0D9321DF9604D5C021 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		// private int m_LastPressedFrame = -5;
		__this->set_m_LastPressedFrame_2(((int32_t)-5));
		// private int m_ReleasedFrame = -5;
		__this->set_m_ReleasedFrame_3(((int32_t)-5));
		// public VirtualButton(string name, bool matchToInputSettings)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualButton_set_name_mEF2365424C0A01C48B1D95066D01E5DC0B5B6DFA_inline(__this, L_0, /*hidden argument*/NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualButton_set_matchWithInputManager_m371812D456658C76DBC0128EC168A3091BBDF5C0_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mAAC725DA03D80EC7275B0F0B82528E3C21670ADE (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Pressed)
		bool L_0 = __this->get_m_Pressed_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Pressed = true;
		__this->set_m_Pressed_4((bool)1);
		// m_LastPressedFrame = Time.frameCount;
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_m_LastPressedFrame_2(L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_mD4D0FD8E203575FE98152A62BF6B16071E383F5C (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// m_Pressed = false;
		__this->set_m_Pressed_4((bool)0);
		// m_ReleasedFrame = Time.frameCount;
		int32_t L_0;
		L_0 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_m_ReleasedFrame_3(L_0);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Remove_m040109DCD13EF3704399353ED4BC4AAB35539DF6 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualButton(name);
		String_t* L_0;
		L_0 = VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t0BED7CD52A3F492FA55E420470222FCDF9A89AD5_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m6EFB512B492D6FD6475DE35B931F27CE5B107741(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mD1EBB3A0B0A88B5CC0589120B42106447F9ED065 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->get_m_Pressed_4();
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m6C10A64F6C990B87627E8DDE6C1FFCFEBCD8FDB7 (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// return m_LastPressedFrame - Time.frameCount == -1;
		int32_t L_0 = __this->get_m_LastPressedFrame_2();
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_mE7D1541E27B10531F1542C55781ED62EED0DC37F (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// return (m_ReleasedFrame == Time.frameCount - 1);
		int32_t L_0 = __this->get_m_ReleasedFrame_3();
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))))? 1 : 0);
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
// System.Void GroundController/<RandomGroundAndWall>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomGroundAndWallU3Ed__25__ctor_m9758DCC1D6B91343ABA73AF5696D3692EDE0C8DF (U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GroundController/<RandomGroundAndWall>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomGroundAndWallU3Ed__25_System_IDisposable_Dispose_mA4115149D397C2DE345851E007B139FDA40B45B7 (U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GroundController/<RandomGroundAndWall>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRandomGroundAndWallU3Ed__25_MoveNext_mFA5485FF08246DF28796893D77BA51EE5B80246F (U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0112;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// enableTouch = false; // Disable touch
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_enableTouch_11((bool)0);
		// finishCreateGround = false;
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_5 = V_1;
		NullCheck(L_5);
		L_5->set_finishCreateGround_12((bool)0);
		// for (int i = 0; i < numberOfGround; i++)
		__this->set_U3CiU3E5__2_9(0);
		goto IL_012b;
	}

IL_003b:
	{
		// if (dirTurn < 0)
		int32_t L_6 = __this->get_dirTurn_3();
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		// pos += new Vector3(0.5f, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_pos_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_7, L_8, /*hidden argument*/NULL);
		__this->set_pos_4(L_9);
		// }
		goto IL_0090;
	}

IL_006b:
	{
		// pos += new Vector3(0, 0, 0.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_pos_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), (0.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_10, L_11, /*hidden argument*/NULL);
		__this->set_pos_4(L_12);
	}

IL_0090:
	{
		// currentGround = (GameObject)Instantiate(groundPrefab, pos, Quaternion.identity); //Create ground
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_13 = V_1;
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_14 = V_1;
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14->get_groundPrefab_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_pos_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_16, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->set_currentGround_18(L_18);
		// currentGround.transform.SetParent(parentObject.transform);
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_19 = V_1;
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = L_19->get_currentGround_18();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_22 = V_1;
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = L_22->get_parentObject_8();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_21, L_24, /*hidden argument*/NULL);
		// list.Add(currentGround);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_25 = __this->get_list_5();
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_26 = V_1;
		NullCheck(L_26);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = L_26->get_currentGround_18();
		NullCheck(L_25);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_25, L_27, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// pos = currentGround.transform.position + directionOfGround;
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_28 = V_1;
		NullCheck(L_28);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = L_28->get_currentGround_18();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = __this->get_directionOfGround_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_31, L_32, /*hidden argument*/NULL);
		__this->set_pos_4(L_33);
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_34 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_34, (0.0500000007f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_34);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0112:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < numberOfGround; i++)
		int32_t L_35 = __this->get_U3CiU3E5__2_9();
		V_4 = L_35;
		int32_t L_36 = V_4;
		__this->set_U3CiU3E5__2_9(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
	}

IL_012b:
	{
		// for (int i = 0; i < numberOfGround; i++)
		int32_t L_37 = __this->get_U3CiU3E5__2_9();
		int32_t L_38 = __this->get_numberOfGround_7();
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_003b;
		}
	}
	{
		// GameObject currentWall = (GameObject)Instantiate(theWall, currentGround.transform.position + positionOfTheWall, Quaternion.identity); //Create wall
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_39 = V_1;
		NullCheck(L_39);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = L_39->get_theWall_6();
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_41 = V_1;
		NullCheck(L_41);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = L_41->get_currentGround_18();
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = __this->get_positionOfTheWall_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_44, L_45, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_47;
		L_47 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_40, L_46, L_47, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_2 = L_48;
		// finishCreateGround = true;
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_49 = V_1;
		NullCheck(L_49);
		L_49->set_finishCreateGround_12((bool)1);
		// if (dirTurn < 0)
		int32_t L_50 = __this->get_dirTurn_3();
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		// currentWall.transform.rotation = Quaternion.Euler(0, 90, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = V_2;
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_51, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53;
		L_53 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (90.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_52, L_53, /*hidden argument*/NULL);
	}

IL_0197:
	{
		// int posGold = Random.Range(0, list.Count - 1); //Position to create gold
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_54 = __this->get_list_5();
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_54, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_56;
		L_56 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_56;
		// float indexGold = Random.Range(0f, 1f);
		float L_57;
		L_57 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (1.0f), /*hidden argument*/NULL);
		// if (indexGold <= goldFrequency)
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_58 = V_1;
		NullCheck(L_58);
		float L_59 = L_58->get_goldFrequency_13();
		if ((!(((float)L_57) <= ((float)L_59))))
		{
			goto IL_0202;
		}
	}
	{
		// Instantiate(gold, list[posGold].transform.position + new Vector3(0f, 5.5f, 0f), Quaternion.identity);
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_60 = V_1;
		NullCheck(L_60);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = L_60->get_gold_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_62 = __this->get_list_5();
		int32_t L_63 = V_3;
		NullCheck(L_62);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64;
		L_64 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_62, L_63, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_65, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_67), (0.0f), (5.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_66, L_67, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_69;
		L_69 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70;
		L_70 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_61, L_68, L_69, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_0202:
	{
		// enableTouch = true; // Enable touch
		GroundController_tA6386C4F8BE8433EE74A22B4B643FBD05DB9E684 * L_71 = V_1;
		NullCheck(L_71);
		L_71->set_enableTouch_11((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object GroundController/<RandomGroundAndWall>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRandomGroundAndWallU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBDFEABFEB02FF38218239638AF31560C3F3D8B0B (U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GroundController/<RandomGroundAndWall>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomGroundAndWallU3Ed__25_System_Collections_IEnumerator_Reset_m877874ADBC21F39D8DBBC8D6584B1A44D9DFAA6A (U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRandomGroundAndWallU3Ed__25_System_Collections_IEnumerator_Reset_m877874ADBC21F39D8DBBC8D6584B1A44D9DFAA6A_RuntimeMethod_var)));
	}
}
// System.Object GroundController/<RandomGroundAndWall>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRandomGroundAndWallU3Ed__25_System_Collections_IEnumerator_get_Current_m6637BE52C93BDA86C44858517702F418583AAEA8 (U3CRandomGroundAndWallU3Ed__25_t5C9F6272D156AEA3585D66DE9470834E68097FD4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void GroundController/<ScaleGround>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScaleGroundU3Ed__27__ctor_m5487EC9350ABA2560378E2A6BB1BE2038E28F4D3 (U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GroundController/<ScaleGround>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScaleGroundU3Ed__27_System_IDisposable_Dispose_mC8793D9E1A0D9B7CE05F7025B5E595C73A0D7143 (U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GroundController/<ScaleGround>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CScaleGroundU3Ed__27_MoveNext_m3F2DE54C9E03C3E4A48BF83864DB2EA0C3CEF732 (U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08EF1409295A748F17C961491378A3B6215AA838);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(time);
		float L_3 = __this->get_time_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ground.GetComponent<Animator>().SetTrigger("Die");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_ground_3();
		NullCheck(L_5);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6;
		L_6 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_5, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		NullCheck(L_6);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_6, _stringLiteral08EF1409295A748F17C961491378A3B6215AA838, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GroundController/<ScaleGround>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CScaleGroundU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF6EFB0289FB16551110C41E595158E217B95591C (U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GroundController/<ScaleGround>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScaleGroundU3Ed__27_System_Collections_IEnumerator_Reset_m38B5ABE943A46413EAEFB2F61533727D10846F57 (U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CScaleGroundU3Ed__27_System_Collections_IEnumerator_Reset_m38B5ABE943A46413EAEFB2F61533727D10846F57_RuntimeMethod_var)));
	}
}
// System.Object GroundController/<ScaleGround>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CScaleGroundU3Ed__27_System_Collections_IEnumerator_get_Current_m1D028B9BDC36050DA91D102161FEB060B56206B1 (U3CScaleGroundU3Ed__27_t3DB032D87ECCDD30FAB14C78182663070EB3A31A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController/<MovePlayer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMovePlayerU3Ed__18__ctor_m6E7EE2B2D20D49E175B2B8866A02164F2EF2A9C4 (U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerController/<MovePlayer>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMovePlayerU3Ed__18_System_IDisposable_Dispose_mE93959DB251B115C75A651E0DD48F3BE677A55F6 (U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerController/<MovePlayer>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMovePlayerU3Ed__18_MoveNext_mECA19605B491F16A2FCE321E9DF758D2306C0C05 (U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// player.transform.position = player.transform.position + dir * movingSpeedOfPlayer * Time.deltaTime;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_player_4();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_7 = V_1;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_player_4();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_11 = V_1;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = L_11->get_dir_15();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->get_movingSpeedOfPlayer_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, L_14, /*hidden argument*/NULL);
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_10, L_17, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_18, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_001e;
	}
}
// System.Object PlayerController/<MovePlayer>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMovePlayerU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE2B28D8F8EEF51B76A7D04A8C08B3D88A14DB319 (U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerController/<MovePlayer>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMovePlayerU3Ed__18_System_Collections_IEnumerator_Reset_m203EECC499600E37DDAA7A4F158E04FC645CBE48 (U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMovePlayerU3Ed__18_System_Collections_IEnumerator_Reset_m203EECC499600E37DDAA7A4F158E04FC645CBE48_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<MovePlayer>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMovePlayerU3Ed__18_System_Collections_IEnumerator_get_Current_m43CBE13903C572E6B933A88DFF58F86461D28C4D (U3CMovePlayerU3Ed__18_t416506F83E2446B34B9CCA7E86B281B0586F82FB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ScoreManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m751DC1871C9519E4563E5544B03324214AC2A03E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D * L_0 = (U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D *)il2cpp_codegen_object_new(U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3E27B6F030262B16CC606C881CC4252D9B0A75BB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ScoreManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3E27B6F030262B16CC606C881CC4252D9B0A75BB (U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreManager/<>c::<.cctor>b__25_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__25_0_m98B982D46BC3B93A960D04AD0464AEE5CECF3334 (U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D * __this, int32_t ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public static event Action<int> ScoreUpdated = delegate {};
		return;
	}
}
// System.Void ScoreManager/<>c::<.cctor>b__25_1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__25_1_mCE282ECBFA90C72F167C66F04AE9D810D38422C7 (U3CU3Ec_t196EB1E887CF2B3CFCFB09FAE228AE7F0D8EB92D * __this, int32_t ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public static event Action<int> HighscoreUpdated = delegate {};
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
// System.Void SoundManager/<CRPlaySound>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCRPlaySoundU3Ed__18__ctor_mEBE8F5DF8B571D8329DCC4381D6FEAAB7108D838 (U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SoundManager/<CRPlaySound>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCRPlaySoundU3Ed__18_System_IDisposable_Dispose_m35DB644B286DCAE5820918BE072E20A0C81327E6 (U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SoundManager/<CRPlaySound>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCRPlaySoundU3Ed__18_MoveNext_mC539F63CD1505E31CAD98DB0D334B7CF78017C54 (U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00b8;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (sound.simultaneousPlayCount >= maxSimultaneousSounds)
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_4 = __this->get_sound_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_simultaneousPlayCount_1();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_maxSimultaneousSounds_5();
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0036;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0036:
	{
		// sound.simultaneousPlayCount++;
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_8 = __this->get_sound_2();
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_simultaneousPlayCount_1();
		NullCheck(L_9);
		L_9->set_simultaneousPlayCount_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		// float vol = maxVolumeScale;
		float L_11 = __this->get_maxVolumeScale_4();
		V_2 = L_11;
		// if (autoScaleVolume && sound.simultaneousPlayCount > 0)
		bool L_12 = __this->get_autoScaleVolume_5();
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_13 = __this->get_sound_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_simultaneousPlayCount_1();
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		// vol = vol/(float)(sound.simultaneousPlayCount);
		float L_15 = V_2;
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_16 = __this->get_sound_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_simultaneousPlayCount_1();
		V_2 = ((float)((float)L_15/(float)((float)((float)L_17))));
	}

IL_0075:
	{
		// audioSource.PlayOneShot(sound.clip, vol);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_18 = V_1;
		NullCheck(L_18);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_19 = L_18->get_audioSource_11();
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_20 = __this->get_sound_2();
		NullCheck(L_20);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_21 = L_20->get_clip_0();
		float L_22 = V_2;
		NullCheck(L_19);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_19, L_21, L_22, /*hidden argument*/NULL);
		// float delay = sound.clip.length * 0.7f;
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_23 = __this->get_sound_2();
		NullCheck(L_23);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_24 = L_23->get_clip_0();
		NullCheck(L_24);
		float L_25;
		L_25 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_24, /*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_multiply((float)L_25, (float)(0.699999988f)));
		// yield return new WaitForSeconds(delay);
		float L_26 = V_3;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_27 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_27, L_26, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// sound.simultaneousPlayCount--;
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_28 = __this->get_sound_2();
		Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * L_29 = L_28;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_simultaneousPlayCount_1();
		NullCheck(L_29);
		L_29->set_simultaneousPlayCount_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)));
		// }
		return (bool)0;
	}
}
// System.Object SoundManager/<CRPlaySound>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCRPlaySoundU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0C574CDE298F1BADBD0D405B339CD803C817AB54 (U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SoundManager/<CRPlaySound>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCRPlaySoundU3Ed__18_System_Collections_IEnumerator_Reset_mDB1AFE30DE9D1C39BB027F43809CECC236F72FC6 (U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCRPlaySoundU3Ed__18_System_Collections_IEnumerator_Reset_mDB1AFE30DE9D1C39BB027F43809CECC236F72FC6_RuntimeMethod_var)));
	}
}
// System.Object SoundManager/<CRPlaySound>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCRPlaySoundU3Ed__18_System_Collections_IEnumerator_get_Current_mE0E380D4233B3BDDA5515F1EAC72327DEE8F42EB (U3CCRPlaySoundU3Ed__18_t660E7753C4095151D8551671B0A4471EDB6BF789 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 (OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * __this, bool ___isMuted0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___isMuted0));

}
// System.Void SoundManager/OnMuteStatusChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMuteStatusChanged__ctor_mA6F6B86B8AA3E3D02E0B41DE320AD675D737AA0B (OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SoundManager/OnMuteStatusChanged::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMuteStatusChanged_Invoke_m47994F23764AF85A5DB528BA66657CE259999AAC (OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * __this, bool ___isMuted0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___isMuted0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isMuted0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___isMuted0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___isMuted0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___isMuted0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___isMuted0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isMuted0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SoundManager/OnMuteStatusChanged::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnMuteStatusChanged_BeginInvoke_m962DDA89A2FAE3514BD5F31911F09213FDBE6FA7 (OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * __this, bool ___isMuted0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___isMuted0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void SoundManager/OnMuteStatusChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMuteStatusChanged_EndInvoke_m3DE0D86195D01E2FE1C14F3FAF6FCB5C51765622 (OnMuteStatusChanged_tB3CE68BA65FD984EB7E5AB89766E07EC1FC44C76 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager/Sound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sound__ctor_m7CDA443F9BC3B23F48FC25D23B6F25054E660201 (Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisMapping__ctor_mC15745B60FFEA4482E885B02C8910FC2A0972981 (AxisMapping_t8B5B07F7E95F2AE39BE3A059459C1A5ACCE96427 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mAC358FAC6484FAA00EB187E0583ECD4576794C44_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Value; }
		float L_0 = __this->get_m_Value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_m2A06394E13EA748D09D1506235BAB669636D9CBB_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->set_m_Value_1(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoinManager_set_Coins_m4ACA2C8A59120AFA99AF38E18F01FDFE1FAD12E4_inline (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Coins { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCoinsU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CoinManager_get_Coins_m0482D9A403BF3F3211D7BFD0925404357267925D_inline (CoinManager_tCF7ED169581BBF725ADB9C3525A4D85B35046F1D * __this, const RuntimeMethod* method)
{
	{
		// public int Coins { get; private set; }
		int32_t L_0 = __this->get_U3CCoinsU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mD1EBB3A0B0A88B5CC0589120B42106447F9ED065_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->get_m_Pressed_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VirtualInput_get_virtualMousePosition_m9DF87F8DAE8FA5CF9BC85284922026025AABB1FF_inline (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CvirtualMousePositionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreManager_set_Score_mBA2C094FE2271625BD7FC0E35379758317471BC3_inline (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Score { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScoreU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreManager_set_HighScore_mFF9BE08C2F25EA0E97DFADD4AAD053E68589FCE0_inline (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int HighScore { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHighScoreU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreManager_set_HasNewHighScore_m10A794EBFAD166E79295828858680403CF67E1F1_inline (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HasNewHighScore { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CHasNewHighScoreU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3_inline (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	{
		// public int Score { get; private set; }
		int32_t L_0 = __this->get_U3CScoreU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScoreManager_get_HighScore_m21FE4C89A84AA1114CE87CC60143DF6A64538124_inline (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	{
		// public int HighScore { get; private set; }
		int32_t L_0 = __this->get_U3CHighScoreU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public int pointerId { get; set; }
		int32_t L_0 = __this->get_U3CpointerIdU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mBBB8C139AABF771FC91A61B8444F835908F25A39_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_m531F00E4DD93A41FB0244FB71343FC9FB07DC4DF_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m0B8D3FE4453224CE39D4316089F38D80399B449C_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m614D75F3386EB15F081A2F5D548B5743589BE939_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m3D48CAC3DC8D5A673C81F6986C8FE48DCD19CB59_inline (VirtualInput_t33A955464CA1C49B600AC2DD27F3E27A94DDE69F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CvirtualMousePositionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mE474E7B124D3E784ADF9D3532BC0A75F2684A2A2_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m61D9709975B67900CAD15101BF9C3AD57D2D88D0_inline (VirtualAxis_tB79E3702DD586E4586AADDF0EA2D60A3ABDBD1C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_mEF2365424C0A01C48B1D95066D01E5DC0B5B6DFA_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m371812D456658C76DBC0128EC168A3091BBDF5C0_inline (VirtualButton_t164FA94D32D1260D0E4B691D4B09F1ACFF2A4D48 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
