#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<WebSocketSharp.MessageEventArgs>
struct Action_1_tCC474399A6BCD59F54513B0EE2C3FF37A69B943A;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.implementation.WebGL.WebSocket>
struct Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t036451F69EBAA973E2E51BC964AA0FB614025C4C;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t011D6A9F3944F82F2146438E79391DBC343A801E;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t41A73EC8BDB892BCF0AB6B6004774F0BDB8D3065;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_t78C049319E4A53A5A121ACA6DF25A11A1DC2CBEC;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,NativeWebSocket.implementation.WebGL.WebSocket>
struct KeyCollection_tC6DC839177426D3BF695CB0A217E6361C3B9FA1B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs>
struct Queue_1_t798A74B2D05C6ADFE0C424F537EAA612744DA07F;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,NativeWebSocket.implementation.WebGL.WebSocket>
struct ValueCollection_t8FBBAE99C42AC885E7B11B19CD4379040A49B1B8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,NativeWebSocket.implementation.WebGL.WebSocket>[]
struct EntryU5BU5D_t0346EB574B7910E96629C950DC4E9FF9232B92AF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t394EDFC82EA20146E9C730D9044FD2594ED724AD;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t0593B44317AB2160879E8CA7CD73BD3E0A253EA9;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t99E465F52826923F4A69119F09CD9F35EA79746F;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_tB899B8F7605F9BF853D59A60E72C20292C5277E6;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t1C045182DD81E1C8F01FC407723BF179A74AD33C;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// NativeWebSocket.IWebSocket
struct IWebSocket_t1288CCC1058AEFF9C14067AD44DFC46E67C5F051;
// WebSocketSharp.Logger
struct Logger_t6E9D5493D1C5E19314B480E2C75EB362F19DFAF1;
// MainThreadUtil
struct MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t8D441959C71C2C2F63301CA26EEDB385A62ABC11;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_tDB54903C7F506ED1B819CF879A1D121E9407A3D2;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// WebSocketSharp.PayloadData
struct PayloadData_t6C764A25E18BF790E11F430D6231D5932925ECF3;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
// NativeWebSocket.RuntimeUtils
struct RuntimeUtils_tA2D5888109FE5C924E908B81C12808EA73741FA0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NativeWebSocket.WaitForBackgroundThread
struct WaitForBackgroundThread_tD9066469606614A592FFD2459D4F043A3A921F52;
// WaitForUpdate
struct WaitForUpdate_t5F46E906AE9C8E81621D6E7DABAEAB40DEE4BDBA;
// NativeWebSocket.implementation.NoWebGL.WebSocket
struct WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55;
// NativeWebSocket.implementation.WebGL.WebSocket
struct WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3;
// WebSocketSharp.WebSocket
struct WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C;
// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_tB9E4793BB60781441660915CCF9594A2116EE950;
// WebSocketDispatcher
struct WebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7;
// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1;
// NativeWebSocket.WebSocketException
struct WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9;
// NativeWebSocket.WebSocketInvalidArgumentException
struct WebSocketInvalidArgumentException_tE7B70E1697DD7E269106D8934BC510C5B59AC010;
// NativeWebSocket.WebSocketInvalidStateException
struct WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12;
// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE;
// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7;
// NativeWebSocket.WebSocketUnexpectedException
struct WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19;
// MainThreadUtil/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858;
// MainThreadUtil/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2;
// WaitForUpdate/<CoroutineWrapper>d__4
struct U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00;
// WaitForUpdate/MainThreadAwaiter
struct MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C;
// NativeWebSocket.WebSocket/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0;
// NativeWebSocket.implementation.NoWebGL.WebSocket/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED;
// NativeWebSocket.implementation.WebGL.WebSocketFactory/OnCloseCallback
struct OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B;
// NativeWebSocket.implementation.WebGL.WebSocketFactory/OnErrorCallback
struct OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7;
// NativeWebSocket.implementation.WebGL.WebSocketFactory/OnMessageCallback
struct OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B;
// NativeWebSocket.implementation.WebGL.WebSocketFactory/OnOpenCallback
struct OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t011D6A9F3944F82F2146438E79391DBC343A801E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t036451F69EBAA973E2E51BC964AA0FB614025C4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t41A73EC8BDB892BCF0AB6B6004774F0BDB8D3065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebSocket_t1288CCC1058AEFF9C14067AD44DFC46E67C5F051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseCode_t233EE90E74C1B280016DE278E95BBF37339B64CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidArgumentException_tE7B70E1697DD7E269106D8934BC510C5B59AC010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BF7557B3AF9EF999246B81405B614F782A6C12B;
IL2CPP_EXTERN_C String_t* _stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B;
IL2CPP_EXTERN_C String_t* _stringLiteral1742337439BBC66D76773857596C8E79F12FE929;
IL2CPP_EXTERN_C String_t* _stringLiteral313D79D9E074019D65BA61008615A5F9FEB79BB6;
IL2CPP_EXTERN_C String_t* _stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69;
IL2CPP_EXTERN_C String_t* _stringLiteral479625953694FC0583C3D8F93F44332026972846;
IL2CPP_EXTERN_C String_t* _stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A;
IL2CPP_EXTERN_C String_t* _stringLiteral5A281A2F891333CB268DF263357AEDABD718B1BC;
IL2CPP_EXTERN_C String_t* _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612;
IL2CPP_EXTERN_C String_t* _stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48;
IL2CPP_EXTERN_C String_t* _stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF396B71BB7F430F29F0721783E8FFD22D76B2EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m98AD48C32B08E12B4A8E4682D6AA8F3F9936A3D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3CBFD64FA4A4E40C0C7FBFD89FB01985D0477560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_mA3B40F4071235D5C8BFA28182D9C9B19D07137A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7_mF843269B5EFD6E3A55DDCAE2B9BD2F30789959FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimePlatforms_IsUnityPlayer_m400F05602917510938FD7EBCA97DB2E082577259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m8E487F2587B905596F900A52FDFFF33EA7FC3096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m65856493E4866529D1B7D95452A07B1C24E9A0CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m6016817880E9612BA87B4A018107202203288A66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CCreateU3Eb__0_m4FC35771EF80C9F443B28399C8554427611D606B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CCreateU3Eb__1_mFDD9E9F680AAC9DC00C46BE573DB519098BFC105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CCreateU3Eb__2_m53F4036BEBFED4B919B6F4A105FF7ECD3AADD7F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CRunU3Eb__0_mE3835C6B26F8CD2C84AB65FE78EAE14ABD4C6B71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__0_m864C8AD61754FA4D646B95BDAA3FA2EF01E00B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__1_m07E0C59D2731DFAE2420772DB1E1BC2FDBAC249C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__2_m4CCD91037D1232DBE5A92B2FBACA3E8DA376F41D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__3_m89335D72A8631F155DD99B8A615443196A030599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_mAEFBD0E8F0487C1E74C287561F3458BBBACB6499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnCloseEvent_mB1D8CD3AE6ABFE9C48657FC7880BEDE974CE964F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnErrorEvent_mE97552235E93CBDEFD5F2554B62C9A3DA6093436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnMessageEvent_mF99184E8B0D311D101804B6ECE63517FC547BACE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnOpenEvent_mB653BA26D02887721F87C858E5D937FF271C5656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Close_m129D765E6BDD36348422148E9164397D1CCC8140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Close_m425002A03CCAB65B9DB8A5F90143949A9A363F6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Connect_mA331C0FA2F3050DF47B1FA37BA20C86CF93A7E5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_SendText_m23A0321981365AF4EB400A5F1E9EA536644EB27F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Send_mE52DC299506D9D2EEFAC86624F522901D4856378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_U3CDelegateOnOpenEventU3Eb__33_0_mEA99F99680FFA685F6B365E6902B07462F2583B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_get_State_mD54AD2A8CBE7EE50DFECA69D6A428052E0AA3F19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebSocketCloseCode_t233EE90E74C1B280016DE278E95BBF37339B64CE_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD8BE53282C0C74B48701902ED9C8EA584CBA6851 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.implementation.WebGL.WebSocket>
struct Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0346EB574B7910E96629C950DC4E9FF9232B92AF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC6DC839177426D3BF695CB0A217E6361C3B9FA1B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8FBBAE99C42AC885E7B11B19CD4379040A49B1B8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// NativeWebSocket.RuntimePlatforms
struct RuntimePlatforms_t32749D849EC619BA5939AAC21A285DCBC15FEDDB  : public RuntimeObject
{
};

// NativeWebSocket.RuntimeUtils
struct RuntimeUtils_tA2D5888109FE5C924E908B81C12808EA73741FA0  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t* ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t* ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t* ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t* ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t* ___s_cachedPreparedType5_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// NativeWebSocket.WaitForBackgroundThread
struct WaitForBackgroundThread_tD9066469606614A592FFD2459D4F043A3A921F52  : public RuntimeObject
{
};

// NativeWebSocket.WebSocket
struct WebSocket_t76D64B0BC424DBC475C3CF71833509EA7B71386A  : public RuntimeObject
{
};

// NativeWebSocket.implementation.NoWebGL.WebSocket
struct WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55  : public RuntimeObject
{
	// NativeWebSocket.WebSocketOpenEventHandler NativeWebSocket.implementation.NoWebGL.WebSocket::OnOpen
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* ___OnOpen_0;
	// NativeWebSocket.WebSocketMessageEventHandler NativeWebSocket.implementation.NoWebGL.WebSocket::OnMessage
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* ___OnMessage_1;
	// NativeWebSocket.WebSocketErrorEventHandler NativeWebSocket.implementation.NoWebGL.WebSocket::OnError
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* ___OnError_2;
	// NativeWebSocket.WebSocketCloseEventHandler NativeWebSocket.implementation.NoWebGL.WebSocket::OnClose
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* ___OnClose_3;
	// WebSocketSharp.WebSocket NativeWebSocket.implementation.NoWebGL.WebSocket::sharpWebSocket
	WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* ___sharpWebSocket_4;
	// System.String NativeWebSocket.implementation.NoWebGL.WebSocket::websocketUrl
	String_t* ___websocketUrl_5;
	// System.String[] NativeWebSocket.implementation.NoWebGL.WebSocket::subprotocols
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___subprotocols_6;
	// System.Collections.Generic.List`1<System.Byte[]> NativeWebSocket.implementation.NoWebGL.WebSocket::m_MessageList
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___m_MessageList_7;
	// System.Object NativeWebSocket.implementation.NoWebGL.WebSocket::IncomingMessageLock
	RuntimeObject* ___IncomingMessageLock_8;
};

// NativeWebSocket.implementation.WebGL.WebSocket
struct WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3  : public RuntimeObject
{
	// System.Int32 NativeWebSocket.implementation.WebGL.WebSocket::instanceId
	int32_t ___instanceId_0;
	// NativeWebSocket.WebSocketOpenEventHandler NativeWebSocket.implementation.WebGL.WebSocket::OnOpen
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* ___OnOpen_1;
	// NativeWebSocket.WebSocketMessageEventHandler NativeWebSocket.implementation.WebGL.WebSocket::OnMessage
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* ___OnMessage_2;
	// NativeWebSocket.WebSocketErrorEventHandler NativeWebSocket.implementation.WebGL.WebSocket::OnError
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* ___OnError_3;
	// NativeWebSocket.WebSocketCloseEventHandler NativeWebSocket.implementation.WebGL.WebSocket::OnClose
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* ___OnClose_4;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> NativeWebSocket.implementation.WebGL.WebSocket::_connectionTask
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ____connectionTask_5;
};

// NativeWebSocket.implementation.NoWebGL.WebSocketFactory
struct WebSocketFactory_t2B44C890413F67FD415A250281A5F90B8A6C3695  : public RuntimeObject
{
};

// NativeWebSocket.implementation.WebGL.WebSocketFactory
struct WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8  : public RuntimeObject
{
};

struct WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.implementation.WebGL.WebSocket> NativeWebSocket.implementation.WebGL.WebSocketFactory::instances
	Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* ___instances_0;
	// System.Boolean NativeWebSocket.implementation.WebGL.WebSocketFactory::isInitialized
	bool ___isInitialized_1;
};

// NativeWebSocket.WebSocketHelpers
struct WebSocketHelpers_tB2BDE9BF831606ED5C63B6CDBAD1E4FFD6818353  : public RuntimeObject
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// MainThreadUtil/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858  : public RuntimeObject
{
	// System.Action MainThreadUtil/<>c__DisplayClass10_0::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_0;
};

// MainThreadUtil/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A  : public RuntimeObject
{
	// System.Collections.IEnumerator MainThreadUtil/<>c__DisplayClass9_0::waitForUpdate
	RuntimeObject* ___waitForUpdate_0;
};

// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2  : public RuntimeObject
{
};

struct U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_StaticFields
{
	// NativeWebSocket.WaitForBackgroundThread/<>c NativeWebSocket.WaitForBackgroundThread/<>c::<>9
	U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2* ___U3CU3E9_0;
	// System.Action NativeWebSocket.WaitForBackgroundThread/<>c::<>9__0_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__0_0_1;
};

// WaitForUpdate/<CoroutineWrapper>d__4
struct U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00  : public RuntimeObject
{
	// System.Int32 WaitForUpdate/<CoroutineWrapper>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WaitForUpdate/<CoroutineWrapper>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Collections.IEnumerator WaitForUpdate/<CoroutineWrapper>d__4::theWorker
	RuntimeObject* ___theWorker_2;
	// WaitForUpdate/MainThreadAwaiter WaitForUpdate/<CoroutineWrapper>d__4::awaiter
	MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* ___awaiter_3;
};

// WaitForUpdate/MainThreadAwaiter
struct MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C  : public RuntimeObject
{
	// System.Action WaitForUpdate/MainThreadAwaiter::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_0;
	// System.Boolean WaitForUpdate/MainThreadAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_1;
};

// NativeWebSocket.WebSocket/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0  : public RuntimeObject
{
	// WebSocketDispatcher NativeWebSocket.WebSocket/<>c__DisplayClass0_0::wsObj
	WebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7* ___wsObj_0;
	// NativeWebSocket.implementation.NoWebGL.WebSocket NativeWebSocket.WebSocket/<>c__DisplayClass0_0::ws
	WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* ___ws_1;
	// System.Action NativeWebSocket.WebSocket/<>c__DisplayClass0_0::<>9__2
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__2_2;
};

// NativeWebSocket.implementation.NoWebGL.WebSocket/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> NativeWebSocket.implementation.NoWebGL.WebSocket/<>c__DisplayClass21_0::connectionTask
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___connectionTask_0;
	// NativeWebSocket.implementation.NoWebGL.WebSocket NativeWebSocket.implementation.NoWebGL.WebSocket/<>c__DisplayClass21_0::<>4__this
	WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* ___U3CU3E4__this_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_39;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t99E465F52826923F4A69119F09CD9F35EA79746F  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean WebSocketSharp.CloseEventArgs::_clean
	bool ____clean_1;
	// WebSocketSharp.PayloadData WebSocketSharp.CloseEventArgs::_payloadData
	PayloadData_t6C764A25E18BF790E11F430D6231D5932925ECF3* ____payloadData_2;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t1C045182DD81E1C8F01FC407723BF179A74AD33C  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Exception WebSocketSharp.ErrorEventArgs::_exception
	Exception_t* ____exception_1;
	// System.String WebSocketSharp.ErrorEventArgs::_message
	String_t* ____message_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t8D441959C71C2C2F63301CA26EEDB385A62ABC11  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String WebSocketSharp.MessageEventArgs::_data
	String_t* ____data_1;
	// System.Boolean WebSocketSharp.MessageEventArgs::_dataSet
	bool ____dataSet_2;
	// WebSocketSharp.Opcode WebSocketSharp.MessageEventArgs::_opcode
	uint8_t ____opcode_3;
	// System.Byte[] WebSocketSharp.MessageEventArgs::_rawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____rawData_4;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// WaitForUpdate
struct WaitForUpdate_t5F46E906AE9C8E81621D6E7DABAEAB40DEE4BDBA  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// WebSocketSharp.WebSocket
struct WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C  : public RuntimeObject
{
	// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.WebSocket::_authChallenge
	AuthenticationChallenge_t394EDFC82EA20146E9C730D9044FD2594ED724AD* ____authChallenge_0;
	// System.String WebSocketSharp.WebSocket::_base64Key
	String_t* ____base64Key_1;
	// System.Boolean WebSocketSharp.WebSocket::_client
	bool ____client_2;
	// System.Action WebSocketSharp.WebSocket::_closeContext
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____closeContext_3;
	// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::_compression
	uint8_t ____compression_4;
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.WebSocket::_context
	WebSocketContext_tB9E4793BB60781441660915CCF9594A2116EE950* ____context_5;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::_cookies
	CookieCollection_tB899B8F7605F9BF853D59A60E72C20292C5277E6* ____cookies_6;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_credentials
	NetworkCredential_tDB54903C7F506ED1B819CF879A1D121E9407A3D2* ____credentials_7;
	// System.Boolean WebSocketSharp.WebSocket::_emitOnPing
	bool ____emitOnPing_8;
	// System.Boolean WebSocketSharp.WebSocket::_enableRedirection
	bool ____enableRedirection_9;
	// System.String WebSocketSharp.WebSocket::_extensions
	String_t* ____extensions_10;
	// System.Boolean WebSocketSharp.WebSocket::_extensionsRequested
	bool ____extensionsRequested_11;
	// System.Object WebSocketSharp.WebSocket::_forMessageEventQueue
	RuntimeObject* ____forMessageEventQueue_12;
	// System.Object WebSocketSharp.WebSocket::_forPing
	RuntimeObject* ____forPing_13;
	// System.Object WebSocketSharp.WebSocket::_forSend
	RuntimeObject* ____forSend_14;
	// System.Object WebSocketSharp.WebSocket::_forState
	RuntimeObject* ____forState_15;
	// System.IO.MemoryStream WebSocketSharp.WebSocket::_fragmentsBuffer
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____fragmentsBuffer_16;
	// System.Boolean WebSocketSharp.WebSocket::_fragmentsCompressed
	bool ____fragmentsCompressed_17;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocket::_fragmentsOpcode
	uint8_t ____fragmentsOpcode_18;
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::_handshakeRequestChecker
	Func_2_t78C049319E4A53A5A121ACA6DF25A11A1DC2CBEC* ____handshakeRequestChecker_20;
	// System.Boolean WebSocketSharp.WebSocket::_ignoreExtensions
	bool ____ignoreExtensions_21;
	// System.Boolean WebSocketSharp.WebSocket::_inContinuation
	bool ____inContinuation_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_inMessage
	bool ____inMessage_23;
	// WebSocketSharp.Logger modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_log
	Logger_t6E9D5493D1C5E19314B480E2C75EB362F19DFAF1* ____log_24;
	// System.Action`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_message
	Action_1_tCC474399A6BCD59F54513B0EE2C3FF37A69B943A* ____message_26;
	// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_messageEventQueue
	Queue_1_t798A74B2D05C6ADFE0C424F537EAA612744DA07F* ____messageEventQueue_27;
	// System.UInt32 WebSocketSharp.WebSocket::_nonceCount
	uint32_t ____nonceCount_28;
	// System.String WebSocketSharp.WebSocket::_origin
	String_t* ____origin_29;
	// System.Threading.ManualResetEvent WebSocketSharp.WebSocket::_pongReceived
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____pongReceived_30;
	// System.Boolean WebSocketSharp.WebSocket::_preAuth
	bool ____preAuth_31;
	// System.String WebSocketSharp.WebSocket::_protocol
	String_t* ____protocol_32;
	// System.String[] WebSocketSharp.WebSocket::_protocols
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____protocols_33;
	// System.Boolean WebSocketSharp.WebSocket::_protocolsRequested
	bool ____protocolsRequested_34;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_proxyCredentials
	NetworkCredential_tDB54903C7F506ED1B819CF879A1D121E9407A3D2* ____proxyCredentials_35;
	// System.Uri WebSocketSharp.WebSocket::_proxyUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____proxyUri_36;
	// WebSocketSharp.WebSocketState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_readyState
	uint16_t ____readyState_37;
	// System.Threading.ManualResetEvent WebSocketSharp.WebSocket::_receivingExited
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____receivingExited_38;
	// System.Int32 WebSocketSharp.WebSocket::_retryCountForConnect
	int32_t ____retryCountForConnect_39;
	// System.Boolean WebSocketSharp.WebSocket::_secure
	bool ____secure_40;
	// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::_sslConfig
	ClientSslConfiguration_t0593B44317AB2160879E8CA7CD73BD3E0A253EA9* ____sslConfig_41;
	// System.IO.Stream WebSocketSharp.WebSocket::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_42;
	// System.Net.Sockets.TcpClient WebSocketSharp.WebSocket::_tcpClient
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ____tcpClient_43;
	// System.Uri WebSocketSharp.WebSocket::_uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____uri_44;
	// System.TimeSpan WebSocketSharp.WebSocket::_waitTime
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____waitTime_46;
	// System.EventHandler`1<WebSocketSharp.CloseEventArgs> WebSocketSharp.WebSocket::OnClose
	EventHandler_1_t036451F69EBAA973E2E51BC964AA0FB614025C4C* ___OnClose_50;
	// System.EventHandler`1<WebSocketSharp.ErrorEventArgs> WebSocketSharp.WebSocket::OnError
	EventHandler_1_t011D6A9F3944F82F2146438E79391DBC343A801E* ___OnError_51;
	// System.EventHandler`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::OnMessage
	EventHandler_1_t41A73EC8BDB892BCF0AB6B6004774F0BDB8D3065* ___OnMessage_52;
	// System.EventHandler WebSocketSharp.WebSocket::OnOpen
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnOpen_53;
};

struct WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C_StaticFields
{
	// System.Int32 WebSocketSharp.WebSocket::_maxRetryCountForConnect
	int32_t ____maxRetryCountForConnect_25;
	// System.Byte[] WebSocketSharp.WebSocket::EmptyBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyBytes_47;
	// System.Int32 WebSocketSharp.WebSocket::FragmentLength
	int32_t ___FragmentLength_48;
	// System.Security.Cryptography.RandomNumberGenerator WebSocketSharp.WebSocket::RandomNumber
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ___RandomNumber_49;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// NativeWebSocket.WebSocketException
struct WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9  : public Exception_t
{
};

// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t036451F69EBAA973E2E51BC964AA0FB614025C4C  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t011D6A9F3944F82F2146438E79391DBC343A801E  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t41A73EC8BDB892BCF0AB6B6004774F0BDB8D3065  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketInvalidArgumentException
struct WebSocketInvalidArgumentException_tE7B70E1697DD7E269106D8934BC510C5B59AC010  : public WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9
{
};

// NativeWebSocket.WebSocketInvalidStateException
struct WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12  : public WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9
{
};

// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketUnexpectedException
struct WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19  : public WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9
{
};

// NativeWebSocket.implementation.WebGL.WebSocketFactory/OnCloseCallback
struct OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B  : public MulticastDelegate_t
{
};

// NativeWebSocket.implementation.WebGL.WebSocketFactory/OnErrorCallback
struct OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7  : public MulticastDelegate_t
{
};

// NativeWebSocket.implementation.WebGL.WebSocketFactory/OnMessageCallback
struct OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B  : public MulticastDelegate_t
{
};

// NativeWebSocket.implementation.WebGL.WebSocketFactory/OnOpenCallback
struct OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// MainThreadUtil
struct MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields
{
	// MainThreadUtil MainThreadUtil::<Instance>k__BackingField
	MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* ___U3CInstanceU3Ek__BackingField_4;
	// System.Threading.SynchronizationContext MainThreadUtil::<synchronizationContext>k__BackingField
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___U3CsynchronizationContextU3Ek__BackingField_5;
};

// WebSocketDispatcher
struct WebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NativeWebSocket.IWebSocket WebSocketDispatcher::WebSocket
	RuntimeObject* ___WebSocket_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m8E487F2587B905596F900A52FDFFF33EA7FC3096_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, int32_t ___creationOptions0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// MainThreadUtil MainThreadUtil::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* MainThreadUtil_get_Instance_mBA97B8479B0030AA8D40ECD0E913974C100B0637_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<MainThreadUtil>()
inline MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* GameObject_AddComponent_TisMainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_mA3B40F4071235D5C8BFA28182D9C9B19D07137A2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void MainThreadUtil::set_Instance(MainThreadUtil)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mC4CA0A9F1B4F1647106A6EA26DF6C8155648084C_inline (MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* ___value0, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
// System.Void MainThreadUtil::set_synchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_m1524E2CC2EA4CEB88C13FBAD6E8B3F59D2C76AF6_inline (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___value0, const RuntimeMethod* method) ;
// System.Void MainThreadUtil/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mCF5FABE7DCBEB95638C7A1E0F927E948CC684B52 (U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A* __this, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext MainThreadUtil::get_synchronizationContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* MainThreadUtil_get_synchronizationContext_m13349C21F8C279BF70B2430B5F3C055C218CA592_inline (const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void MainThreadUtil/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mA4B5939CCC67354051BD000F0D5148E188052D09 (U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void WaitForUpdate/MainThreadAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter__ctor_mC728BFFC9FEBFCDDF913197A4B1FE8990AFD8880 (MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WaitForUpdate::CoroutineWrapper(System.Collections.IEnumerator,WaitForUpdate/MainThreadAwaiter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForUpdate_CoroutineWrapper_m01034D69F4A4FD9CD01816369F87655C9715FCCE (RuntimeObject* ___theWorker0, MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* ___awaiter1, const RuntimeMethod* method) ;
// System.Void MainThreadUtil::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_m5F24AD38E3997740896D82FA04964898B79BDAAE (RuntimeObject* ___waitForUpdate0, const RuntimeMethod* method) ;
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4__ctor_m14FBD3A4AF5624D9298E53E4A08FF043F8E14424 (U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void WaitForUpdate/MainThreadAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_m42D4A891E07CD3F61C073EE92C59438885CCD7CC_inline (MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void WaitForUpdate/MainThreadAwaiter::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_Complete_m8B418527B7707028798D266C9FB3CCA96528E83D (MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean NativeWebSocket.RuntimePlatforms::IsUnityPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimePlatforms_IsUnityPlayer_m400F05602917510938FD7EBCA97DB2E082577259 (const RuntimeMethod* method) ;
// System.String NativeWebSocket.RuntimeUtils::GetRuntimePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RuntimeUtils_GetRuntimePlatform_m14D1C379E1663D53918636A1A536A3146A4680D8 (const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28 (Type_t* ___enumType0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mDAB34C35B5F9614D9449E3D3D8882A38CEA97BC4 (WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_mF0112F4B2735AD6925ACD3DFCDC2F58C7F9DF2C7 (WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m1E02223C69CF78C2DB56335BAFCA7FE7E8E462BC (WebSocketInvalidArgumentException_tE7B70E1697DD7E269106D8934BC510C5B59AC010* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mEE4B486BC6DC3311292410F797E78E3D8635686B (WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m718D30F86B060FEBCE249D5E04033B4311D22132 (WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m11CB07B4B273561D701997F75FF92F165521185D (WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBBAF2A3B4039C1D9899D34D612182052CB1B1B61 (U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mF9B00650729A347679094F692214A741225A6ACA (U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* __this, const RuntimeMethod* method) ;
// System.Boolean NativeWebSocket.RuntimePlatforms::IsWebGL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimePlatforms_IsWebGL_mF94C10DD66EA7D0F9078219C12ACB07252DC0A5E (const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m48C5FD4DBA22741E5C2162CB34DB4EA06147783F (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, String_t* ___url0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::.ctor(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m5BF315C34BF3C6E08DCB7A45B90DA38BEB4061B1 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, String_t* ___url0, String_t* ___subprotocol1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers2, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m83FF0718C314AC7DCB8BC4F7DE043F2ABECAE681 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, String_t* ___uri0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m2D1CF26422D415084B71F14DD27BBD8DFFEA83C7 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, String_t* ___uri0, String_t* ___subprotocol1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_mA44B7B49190DCAAC6939B0855F307011E7919897 (WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_m7F0A163BE994A7CE6EEC5B17C46C2460C2975143 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* ___value0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_mB13B2B5767E3DD304D66411611A49584CB36D739 (WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m0510AF316BD60C4C135E76F6090B369ED1D028EC (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* ___value0, const RuntimeMethod* method) ;
// System.Void MainThreadUtil::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_mB9CE68E525B9FB1281A12F9331948AB47B0CFF4D (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<WebSocketDispatcher>()
inline WebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7* GameObject_AddComponent_TisWebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7_mF843269B5EFD6E3A55DDCAE2B9BD2F30789959FF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::DelegateOnOpenEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnOpenEvent_mB653BA26D02887721F87C858E5D937FF271C5656 (int32_t ___instanceId0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::DelegateOnMessageEvent(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnMessageEvent_mF99184E8B0D311D101804B6ECE63517FC547BACE (int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::DelegateOnErrorEvent(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnErrorEvent_mE97552235E93CBDEFD5F2554B62C9A3DA6093436 (int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::DelegateOnCloseEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnCloseEvent_mB1D8CD3AE6ABFE9C48657FC7880BEDE974CE964F (int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback__ctor_m174ADD99FDD01A61CA745CE034340B78514E0D93 (OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketSetOnOpen(NativeWebSocket.implementation.WebGL.WebSocketFactory/OnOpenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnOpen_m7CFE8CC3D114ABC248143E4E48FBB57226164A50 (OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* ___callback0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback__ctor_m34A77697BCD5AA8D782E73B37AA67FBD77D000A1 (OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketSetOnMessage(NativeWebSocket.implementation.WebGL.WebSocketFactory/OnMessageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnMessage_mD684805EF88AD078193C9C414970327420BD30E8 (OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* ___callback0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback__ctor_m9A64A316091A1523B4DA7AADBFEC6FAFEBDA8DFD (OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketSetOnError(NativeWebSocket.implementation.WebGL.WebSocketFactory/OnErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnError_m33E3701F97D82E9737C436A1A4021C155FB88368 (OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* ___callback0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback__ctor_m9BB590AB823ACAA4AFB9B9ADF717CB66A836ADAC (OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketSetOnClose(NativeWebSocket.implementation.WebGL.WebSocketFactory/OnCloseCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnClose_m2B16BA5666CE63015E3E06EA876547F41BDBCF85 (OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* ___callback0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.implementation.WebGL.WebSocket>::Remove(TKey)
inline bool Dictionary_2_Remove_m98AD48C32B08E12B4A8E4682D6AA8F3F9936A3D9 (Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketFree_mC5068840282718501A8D8370519B7A32E2A2DA86 (int32_t ___instanceId0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.implementation.WebGL.WebSocket>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43 (Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* __this, int32_t ___key0, WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11*, int32_t, WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::DelegateOnOpenEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnOpenEvent_m01F057BCB76F30B1C32165347729801E4B383E20 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::DelegateOnMessageEvent(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnMessageEvent_mC51FC018BEDDC2826D0388BD61BF9C351E7737DB (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::DelegateOnErrorEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnErrorEvent_m1A975C486B834823D967506B6E7DCFEF1A5C0455 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, String_t* ___errorMsg0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::DelegateOnCloseEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnCloseEvent_m191E0E27F25B3005371253B960F0FC5A1F165AE0 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, int32_t ___closeCode0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.implementation.WebGL.WebSocket>::.ctor()
inline void Dictionary_2__ctor_m3CBFD64FA4A4E40C0C7FBFD89FB01985D0477560 (Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_Initialize_m91733B0355D63D32E5C99EB11741764D35EEA3FE (const RuntimeMethod* method) ;
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketAllocate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAllocate_m8AC3C9DBD1294F017571195E088F15C05183E3C4 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.implementation.WebGL.WebSocket>::Add(TKey,TValue)
inline void Dictionary_2_Add_mF396B71BB7F430F29F0721783E8FFD22D76B2EDA (Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* __this, int32_t ___key0, WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11*, int32_t, WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketAddSubProtocol(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAddSubProtocol_mCFF81E062A7DCB2C31BD46EB184454F94AFBEDF1 (int32_t ___instanceId0, String_t* ___subprotocol1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::HandleInstanceDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_HandleInstanceDestroy_mCEBFA0F7C7E75C9B238074C8255B470467245504 (int32_t ___instanceId0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor(System.Threading.Tasks.TaskCreationOptions)
inline void TaskCompletionSource_1__ctor_m8E487F2587B905596F900A52FDFFF33EA7FC3096 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, int32_t ___creationOptions0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, int32_t, const RuntimeMethod*))TaskCompletionSource_1__ctor_m8E487F2587B905596F900A52FDFFF33EA7FC3096_gshared)(__this, ___creationOptions0, method);
}
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocket::WebSocketConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketConnect_m4A17DA7F885A8889E15E521021554429D285AD21 (int32_t ___instanceId0, const RuntimeMethod* method) ;
// NativeWebSocket.WebSocketException NativeWebSocket.WebSocketHelpers::GetErrorMessageFromCode(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* WebSocketHelpers_GetErrorMessageFromCode_mB6BCBD83B6BE88E2B94E25CE1580001BF6D5F268 (int32_t ___errorCode0, Exception_t* ___inner1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// NativeWebSocket.WebSocketState NativeWebSocket.implementation.WebGL.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_mD54AD2A8CBE7EE50DFECA69D6A428052E0AA3F19 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task NativeWebSocket.implementation.WebGL.WebSocket::Close(NativeWebSocket.WebSocketCloseCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Close_m425002A03CCAB65B9DB8A5F90143949A9A363F6D (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, int32_t ___code0, String_t* ___reason1, const RuntimeMethod* method) ;
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocket::WebSocketClose(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketClose_mFA7A9B9B7D157DF3DAA8AE8ED64E169970273C76 (int32_t ___instanceId0, int32_t ___code1, String_t* ___reason2, const RuntimeMethod* method) ;
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocket::WebSocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSend_m1EE5156EDF7BA82236060C856D4D548AB77226B2 (int32_t ___instanceId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataPtr1, int32_t ___dataLength2, const RuntimeMethod* method) ;
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocket::WebSocketSendText(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSendText_m5C4C9C264066A6CC08A48DC9ABCB306665078DFF (int32_t ___instanceId0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocket::WebSocketGetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketGetState_m1BE8011A7C49A28CE3EED0BB6FE8428E0016CD49 (int32_t ___instanceId0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_inline (WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_inline (WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_inline (WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* __this, String_t* ___errorMsg0, const RuntimeMethod* method) ;
// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_m4C5375A8031685C82674FBB43B572CC5831926D5 (int32_t ___closeCode0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketCloseEventHandler::Invoke(NativeWebSocket.WebSocketCloseCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_inline (WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, int32_t ___closeCode0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(TResult)
inline bool TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, RuntimeObject*, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_gshared)(__this, ___result0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// WebSocketSharp.WebSocketState WebSocketSharp.WebSocket::get_ReadyState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t WebSocket_get_ReadyState_m65E78C481175718F99775825586709ACE891EAF3 (WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m3045978DF293D0434E20A2AD323362EEF30441C3 (U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
inline void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Void WebSocketSharp.WebSocket::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m6EA8DE0A65122F6AF8C1FB5881953054844460CD (WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* __this, String_t* ___url0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___protocols1, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::add_OnOpen(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_mB53281A381E1BC513222B421076B54C9264A450B (WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WebSocketSharp.MessageEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m31570F839D1B4718D0A6B1665D6BD8337B77230D (EventHandler_1_t41A73EC8BDB892BCF0AB6B6004774F0BDB8D3065* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t41A73EC8BDB892BCF0AB6B6004774F0BDB8D3065*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnMessage(System.EventHandler`1<WebSocketSharp.MessageEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_mED655F2D2ECCB16BB1BA39A948841FEDC9432ECC (WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* __this, EventHandler_1_t41A73EC8BDB892BCF0AB6B6004774F0BDB8D3065* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WebSocketSharp.CloseEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCC4319C9795F75B3999BB6529D72F4A2611B1FF5 (EventHandler_1_t036451F69EBAA973E2E51BC964AA0FB614025C4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t036451F69EBAA973E2E51BC964AA0FB614025C4C*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnClose(System.EventHandler`1<WebSocketSharp.CloseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_mC10D165020370A38A29386070E64E6D7695CDCE0 (WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* __this, EventHandler_1_t036451F69EBAA973E2E51BC964AA0FB614025C4C* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WebSocketSharp.ErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m7BAC7007A4758B129E9D565D13CF295D3BA0D24A (EventHandler_1_t011D6A9F3944F82F2146438E79391DBC343A801E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t011D6A9F3944F82F2146438E79391DBC343A801E*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnError(System.EventHandler`1<WebSocketSharp.ErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_mC01276ABBBCFE9F49730B13692E8EE49620B66EF (WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* __this, EventHandler_1_t011D6A9F3944F82F2146438E79391DBC343A801E* ___value0, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::ConnectAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_ConnectAsync_m71B63FD252A9661EAA866B4A4F7DFDCB438DEE2E (WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_m717A916D71EB8DA2B940CE3A1F910961270396AA (WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mA13A25F8E6DA3D0585104524E2399D706DE2538B (WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mAACDCC139AA89F7F916DF380ED8F80C48E7142DE (WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* __this, String_t* ___data0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
inline int32_t List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
inline void List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Byte[] WebSocketSharp.MessageEventArgs::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessageEventArgs_get_RawData_m6E034E82C47E60CF865AE152EAECC0435D5D7C7F (MessageEventArgs_t8D441959C71C2C2F63301CA26EEDB385A62ABC11* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.UInt16 WebSocketSharp.CloseEventArgs::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CloseEventArgs_get_Code_m193160AC3497114BE85F012713BB7BF8FF9E9DCC (CloseEventArgs_t99E465F52826923F4A69119F09CD9F35EA79746F* __this, const RuntimeMethod* method) ;
// System.String WebSocketSharp.ErrorEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorEventArgs_get_Message_mBA8163EDA3CEBC93A37A8026B4E70D6AD27C4556 (ErrorEventArgs_t1C045182DD81E1C8F01FC407723BF179A74AD33C* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketAllocate(char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketAddSubProtocol(int32_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketFree(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnOpen(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnMessage(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnError(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnClose(Il2CppMethodPointer);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketConnect(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketClose(int32_t, int32_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketSend(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketSendText(int32_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketGetState(int32_t);
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
// System.Void WebSocketDispatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketDispatcher_Update_m11F5297A0D46DBB727537DC8ECA36D1BD0E02D04 (WebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebSocket_t1288CCC1058AEFF9C14067AD44DFC46E67C5F051_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___WebSocket_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(13 /* System.Void NativeWebSocket.IWebSocket::DispatchMessageQueue() */, IWebSocket_t1288CCC1058AEFF9C14067AD44DFC46E67C5F051_il2cpp_TypeInfo_var, G_B2_0);
		return;
	}
}
// System.Void WebSocketDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketDispatcher__ctor_m6E47107C8F31A38432EDEA7200B783EC21ACE540 (WebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// MainThreadUtil MainThreadUtil::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* MainThreadUtil_get_Instance_mBA97B8479B0030AA8D40ECD0E913974C100B0637 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* L_0 = ((MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void MainThreadUtil::set_Instance(MainThreadUtil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mC4CA0A9F1B4F1647106A6EA26DF6C8155648084C (MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* L_0 = ___value0;
		((MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Threading.SynchronizationContext MainThreadUtil::get_synchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* MainThreadUtil_get_synchronizationContext_m13349C21F8C279BF70B2430B5F3C055C218CA592 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void MainThreadUtil::set_synchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_m1524E2CC2EA4CEB88C13FBAD6E8B3F59D2C76AF6 (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___value0;
		((MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void MainThreadUtil::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Setup_m6D9C4FD795518162C5CCD7F6AE76225626F0760B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_mA3B40F4071235D5C8BFA28182D9C9B19D07137A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral479625953694FC0583C3D8F93F44332026972846);
		s_Il2CppMethodInitialized = true;
	}
	{
		MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* L_0;
		L_0 = MainThreadUtil_get_Instance_mBA97B8479B0030AA8D40ECD0E913974C100B0637_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral479625953694FC0583C3D8F93F44332026972846, NULL);
		NullCheck(L_2);
		MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* L_3;
		L_3 = GameObject_AddComponent_TisMainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_mA3B40F4071235D5C8BFA28182D9C9B19D07137A2(L_2, GameObject_AddComponent_TisMainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_mA3B40F4071235D5C8BFA28182D9C9B19D07137A2_RuntimeMethod_var);
		MainThreadUtil_set_Instance_mC4CA0A9F1B4F1647106A6EA26DF6C8155648084C_inline(L_3, NULL);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_4;
		L_4 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		MainThreadUtil_set_synchronizationContext_m1524E2CC2EA4CEB88C13FBAD6E8B3F59D2C76AF6_inline(L_4, NULL);
		return;
	}
}
// System.Void MainThreadUtil::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_m5F24AD38E3997740896D82FA04964898B79BDAAE (RuntimeObject* ___waitForUpdate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_mAEFBD0E8F0487C1E74C287561F3458BBBACB6499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A* L_0 = (U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_mCF5FABE7DCBEB95638C7A1E0F927E948CC684B52(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A* L_1 = V_0;
		RuntimeObject* L_2 = ___waitForUpdate0;
		NullCheck(L_1);
		L_1->___waitForUpdate_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___waitForUpdate_0), (void*)L_2);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3;
		L_3 = MainThreadUtil_get_synchronizationContext_m13349C21F8C279BF70B2430B5F3C055C218CA592_inline(NULL);
		U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A* L_4 = V_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_5 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_mAEFBD0E8F0487C1E74C287561F3458BBBACB6499_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_3, L_5, NULL);
		return;
	}
}
// System.Void MainThreadUtil::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_mB9CE68E525B9FB1281A12F9331948AB47B0CFF4D (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CRunU3Eb__0_mE3835C6B26F8CD2C84AB65FE78EAE14ABD4C6B71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858* L_0 = (U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_mA4B5939CCC67354051BD000F0D5148E188052D09(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858* L_1 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___action0;
		NullCheck(L_1);
		L_1->___action_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___action_0), (void*)L_2);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3;
		L_3 = MainThreadUtil_get_synchronizationContext_m13349C21F8C279BF70B2430B5F3C055C218CA592_inline(NULL);
		U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858* L_4 = V_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_5 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CRunU3Eb__0_mE3835C6B26F8CD2C84AB65FE78EAE14ABD4C6B71_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_3, L_5, NULL);
		return;
	}
}
// System.Void MainThreadUtil::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Awake_m50CB937A5F44EC2133222DEED35B542738EB448D (MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_0, ((int32_t)61), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_1, NULL);
		return;
	}
}
// System.Void MainThreadUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil__ctor_m0564D5E4BA9326D1E68F877754F8D83D95CD38AB (MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MainThreadUtil/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mA4B5939CCC67354051BD000F0D5148E188052D09 (U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MainThreadUtil/<>c__DisplayClass10_0::<Run>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CRunU3Eb__0_mE3835C6B26F8CD2C84AB65FE78EAE14ABD4C6B71 (U3CU3Ec__DisplayClass10_0_t4E8EB8620EB893BCD4BD7EE525068CF23191A858* __this, RuntimeObject* ____0, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___action_0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
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
// System.Void MainThreadUtil/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mCF5FABE7DCBEB95638C7A1E0F927E948CC684B52 (U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MainThreadUtil/<>c__DisplayClass9_0::<Run>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_mAEFBD0E8F0487C1E74C287561F3458BBBACB6499 (U3CU3Ec__DisplayClass9_0_t8FE6CDD4C6C44A7109D4EC45FC7FE36A3E1D313A* __this, RuntimeObject* ____0, const RuntimeMethod* method) 
{
	{
		MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* L_0;
		L_0 = MainThreadUtil_get_Instance_mBA97B8479B0030AA8D40ECD0E913974C100B0637_inline(NULL);
		RuntimeObject* L_1 = __this->___waitForUpdate_0;
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
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
// System.Boolean WaitForUpdate::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForUpdate_get_keepWaiting_m69A7F6491F73B7E0D25E74381EADD763BE54AA5B (WaitForUpdate_t5F46E906AE9C8E81621D6E7DABAEAB40DEE4BDBA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// WaitForUpdate/MainThreadAwaiter WaitForUpdate::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* WaitForUpdate_GetAwaiter_mF05B8B2C0889BBADBCC5D79AC5744B6F4746DB3E (WaitForUpdate_t5F46E906AE9C8E81621D6E7DABAEAB40DEE4BDBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* V_0 = NULL;
	{
		MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* L_0 = (MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C*)il2cpp_codegen_object_new(MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MainThreadAwaiter__ctor_mC728BFFC9FEBFCDDF913197A4B1FE8990AFD8880(L_0, NULL);
		V_0 = L_0;
		MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = WaitForUpdate_CoroutineWrapper_m01034D69F4A4FD9CD01816369F87655C9715FCCE(__this, L_1, NULL);
		MainThreadUtil_Run_m5F24AD38E3997740896D82FA04964898B79BDAAE(L_2, NULL);
		MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* L_3 = V_0;
		return L_3;
	}
}
// System.Collections.IEnumerator WaitForUpdate::CoroutineWrapper(System.Collections.IEnumerator,WaitForUpdate/MainThreadAwaiter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForUpdate_CoroutineWrapper_m01034D69F4A4FD9CD01816369F87655C9715FCCE (RuntimeObject* ___theWorker0, MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* ___awaiter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00* L_0 = (U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00*)il2cpp_codegen_object_new(U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoroutineWrapperU3Ed__4__ctor_m14FBD3A4AF5624D9298E53E4A08FF043F8E14424(L_0, 0, NULL);
		U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00* L_1 = L_0;
		RuntimeObject* L_2 = ___theWorker0;
		NullCheck(L_1);
		L_1->___theWorker_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___theWorker_2), (void*)L_2);
		U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00* L_3 = L_1;
		MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* L_4 = ___awaiter1;
		NullCheck(L_3);
		L_3->___awaiter_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___awaiter_3), (void*)L_4);
		return L_3;
	}
}
// System.Void WaitForUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForUpdate__ctor_m1E58C16B551B038BA1E0B06EA0FB3B8996DF9C07 (WaitForUpdate_t5F46E906AE9C8E81621D6E7DABAEAB40DEE4BDBA* __this, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
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
// System.Boolean WaitForUpdate/MainThreadAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainThreadAwaiter_get_IsCompleted_m188C3FC937D8D4FF9308CAE509208A060E1F02AB (MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_m42D4A891E07CD3F61C073EE92C59438885CCD7CC (MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsCompletedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_GetResult_m74D1F3692E2AE9B727E3D6C4FDDDBBF5AB6A4142 (MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_Complete_m8B418527B7707028798D266C9FB3CCA96528E83D (MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		MainThreadAwaiter_set_IsCompleted_m42D4A891E07CD3F61C073EE92C59438885CCD7CC_inline(__this, (bool)1, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___continuation_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::System.Runtime.CompilerServices.INotifyCompletion.OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_m81BF7ADDE1FB3C74CFE8E46AE2ADF493507B39EE (MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___continuation0;
		__this->___continuation_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___continuation_0), (void*)L_0);
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter__ctor_mC728BFFC9FEBFCDDF913197A4B1FE8990AFD8880 (MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4__ctor_m14FBD3A4AF5624D9298E53E4A08FF043F8E14424 (U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4_System_IDisposable_Dispose_m02ECD6D6557865F222BDB7A0CEF95B72C2B99875 (U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WaitForUpdate/<CoroutineWrapper>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutineWrapperU3Ed__4_MoveNext_mE763458286118A80D9C5DBC36C775DD1E40C98EE (U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_3 = __this->___theWorker_2;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* L_4 = __this->___awaiter_3;
		NullCheck(L_4);
		MainThreadAwaiter_Complete_m8B418527B7707028798D266C9FB3CCA96528E83D(L_4, NULL);
		return (bool)0;
	}
}
// System.Object WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoroutineWrapperU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBD83E214BAF309E8C847AAED2777CC04626F45AE (U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m65856493E4866529D1B7D95452A07B1C24E9A0CC (U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m65856493E4866529D1B7D95452A07B1C24E9A0CC_RuntimeMethod_var)));
	}
}
// System.Object WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_get_Current_mB183CC2F7D1C6E2592020BD8B90E95E93780E155 (U3CCoroutineWrapperU3Ed__4_t655956CED0E1D80CF76EE6109170CCD9A7418B00* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Boolean NativeWebSocket.RuntimePlatforms::IsUnityPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimePlatforms_IsUnityPlayer_m400F05602917510938FD7EBCA97DB2E082577259 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatforms_IsUnityPlayer_m400F05602917510938FD7EBCA97DB2E082577259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A281A2F891333CB268DF263357AEDABD718B1BC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_0;
			L_0 = il2cpp_codegen_get_type(_stringLiteral5A281A2F891333CB268DF263357AEDABD718B1BC, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, RuntimePlatforms_IsUnityPlayer_m400F05602917510938FD7EBCA97DB2E082577259_RuntimeMethod_var);
			bool L_1;
			L_1 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, (Type_t*)NULL, NULL);
			if (!L_1)
			{
				goto IL_0016_1;
			}
		}
		{
			V_0 = (bool)1;
			goto IL_001f;
		}

IL_0016_1:
		{
			goto IL_001d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0018;
		}
		throw e;
	}

CATCH_0018:
	{// begin catch(System.Exception)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean NativeWebSocket.RuntimePlatforms::IsWebGL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimePlatforms_IsWebGL_mF94C10DD66EA7D0F9078219C12ACB07252DC0A5E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BF7557B3AF9EF999246B81405B614F782A6C12B);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RuntimePlatforms_IsUnityPlayer_m400F05602917510938FD7EBCA97DB2E082577259(NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		String_t* L_1;
		L_1 = RuntimeUtils_GetRuntimePlatform_m14D1C379E1663D53918636A1A536A3146A4680D8(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, _stringLiteral0BF7557B3AF9EF999246B81405B614F782A6C12B, NULL);
		return L_2;
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
// System.String NativeWebSocket.RuntimeUtils::GetRuntimePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RuntimeUtils_GetRuntimePlatform_m14D1C379E1663D53918636A1A536A3146A4680D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_0 = L_0;
		Il2CppFakeBox<int32_t> L_1(RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		return L_2;
	}
}
// System.Void NativeWebSocket.RuntimeUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUtils__ctor_m82CE506E855EFB1BF8FBE214AE561EA91852B996 (RuntimeUtils_tA2D5888109FE5C924E908B81C12808EA73741FA0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_Multicast(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* currentDelegate = reinterpret_cast<WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_OpenInst(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_OpenStatic(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_OpenStaticInvoker(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_ClosedStaticInvoker(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7 (WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_mA44B7B49190DCAAC6939B0855F307011E7919897 (WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_Multicast;
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919 (WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketOpenEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketOpenEventHandler_BeginInvoke_m755DD2CC838C39FD995F2C11D46F10D03CBE8915 (WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_EndInvoke_m0D9FAB6C9D72DEAE9CCA6C3CE2FB464CFE8D57B2 (WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_Multicast(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* currentDelegate = reinterpret_cast<WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_OpenInst(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	NullCheck(___data0);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_OpenStatic(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_OpenStaticInvoker(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___data0);
}
void WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_ClosedStaticInvoker(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___data0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE (WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___data0' to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler__ctor_mFF143B85D97ABE5112EE7B68C16DD87699231CE5 (WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_Multicast;
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877 (WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketMessageEventHandler::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketMessageEventHandler_BeginInvoke_m5F95B25EC0C9963DAB69B7A2577BD03C677302C6 (WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_EndInvoke_m056067DAF49259A293C9BAA3066DD2A2A7A1941A (WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_Multicast(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* currentDelegate = reinterpret_cast<WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___errorMsg0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_OpenInst(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	NullCheck(___errorMsg0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___errorMsg0, method);
}
void WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_OpenStatic(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___errorMsg0, method);
}
void WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_OpenStaticInvoker(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___errorMsg0);
}
void WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_ClosedStaticInvoker(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___errorMsg0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1 (WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___errorMsg0' to native representation
	char* ____errorMsg0_marshaled = NULL;
	____errorMsg0_marshaled = il2cpp_codegen_marshal_string(___errorMsg0);

	// Native function invocation
	il2cppPInvokeFunc(____errorMsg0_marshaled);

	// Marshaling cleanup of parameter '___errorMsg0' native representation
	il2cpp_codegen_marshal_free(____errorMsg0_marshaled);
	____errorMsg0_marshaled = NULL;

}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler__ctor_mFE91637F719F8EF46C9D5AE54BF4E37A25EB25F5 (WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_Multicast;
}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700 (WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* __this, String_t* ___errorMsg0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___errorMsg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketErrorEventHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketErrorEventHandler_BeginInvoke_m8434D8EFE4852A80483281D0625B5DB180FC7732 (WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* __this, String_t* ___errorMsg0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___errorMsg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_EndInvoke_m0E71E12BA91FDD1052E8F8375AFF4DE2EF3AFDFC (WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_Multicast(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* currentDelegate = reinterpret_cast<WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___closeCode0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_OpenInst(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___closeCode0, method);
}
void WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_OpenStatic(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___closeCode0, method);
}
void WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_OpenStaticInvoker(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___closeCode0);
}
void WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_ClosedStaticInvoker(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___closeCode0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13 (WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___closeCode0);

}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_mB13B2B5767E3DD304D66411611A49584CB36D739 (WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_Multicast;
}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::Invoke(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53 (WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, int32_t ___closeCode0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___closeCode0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketCloseEventHandler::BeginInvoke(NativeWebSocket.WebSocketCloseCode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketCloseEventHandler_BeginInvoke_m9F1E2F52871BD230E864CB69C4E10C449634374A (WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, int32_t ___closeCode0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseCode_t233EE90E74C1B280016DE278E95BBF37339B64CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebSocketCloseCode_t233EE90E74C1B280016DE278E95BBF37339B64CE_il2cpp_TypeInfo_var, &___closeCode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_EndInvoke_m22A5D24B688F4DB610C6D5ACA2C9A83B91516620 (WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_m4C5375A8031685C82674FBB43B572CC5831926D5 (int32_t ___closeCode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseCode_t233EE90E74C1B280016DE278E95BBF37339B64CE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (WebSocketCloseCode_t233EE90E74C1B280016DE278E95BBF37339B64CE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2 = ___closeCode0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28(L_1, L_4, NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_6 = ___closeCode0;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		return (int32_t)(((int32_t)1004));
	}
}
// NativeWebSocket.WebSocketException NativeWebSocket.WebSocketHelpers::GetErrorMessageFromCode(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* WebSocketHelpers_GetErrorMessageFromCode_mB6BCBD83B6BE88E2B94E25CE1580001BF6D5F268 (int32_t ___errorCode0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketInvalidArgumentException_tE7B70E1697DD7E269106D8934BC510C5B59AC010_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1742337439BBC66D76773857596C8E79F12FE929);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)-7))))
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_003f;
			}
			case 5:
			{
				goto IL_0033;
			}
			case 6:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_0027:
	{
		Exception_t* L_1 = ___inner1;
		WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19* L_2 = (WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19*)il2cpp_codegen_object_new(WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WebSocketUnexpectedException__ctor_mDAB34C35B5F9614D9449E3D3D8882A38CEA97BC4(L_2, _stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B, L_1, NULL);
		return L_2;
	}

IL_0033:
	{
		Exception_t* L_3 = ___inner1;
		WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12* L_4 = (WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12*)il2cpp_codegen_object_new(WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WebSocketInvalidStateException__ctor_mF0112F4B2735AD6925ACD3DFCDC2F58C7F9DF2C7(L_4, _stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48, L_3, NULL);
		return L_4;
	}

IL_003f:
	{
		Exception_t* L_5 = ___inner1;
		WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12* L_6 = (WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12*)il2cpp_codegen_object_new(WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WebSocketInvalidStateException__ctor_mF0112F4B2735AD6925ACD3DFCDC2F58C7F9DF2C7(L_6, _stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612, L_5, NULL);
		return L_6;
	}

IL_004b:
	{
		Exception_t* L_7 = ___inner1;
		WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12* L_8 = (WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12*)il2cpp_codegen_object_new(WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WebSocketInvalidStateException__ctor_mF0112F4B2735AD6925ACD3DFCDC2F58C7F9DF2C7(L_8, _stringLiteral1742337439BBC66D76773857596C8E79F12FE929, L_7, NULL);
		return L_8;
	}

IL_0057:
	{
		Exception_t* L_9 = ___inner1;
		WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12* L_10 = (WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12*)il2cpp_codegen_object_new(WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WebSocketInvalidStateException__ctor_mF0112F4B2735AD6925ACD3DFCDC2F58C7F9DF2C7(L_10, _stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C, L_9, NULL);
		return L_10;
	}

IL_0063:
	{
		Exception_t* L_11 = ___inner1;
		WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12* L_12 = (WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12*)il2cpp_codegen_object_new(WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WebSocketInvalidStateException__ctor_mF0112F4B2735AD6925ACD3DFCDC2F58C7F9DF2C7(L_12, _stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A, L_11, NULL);
		return L_12;
	}

IL_006f:
	{
		Exception_t* L_13 = ___inner1;
		WebSocketInvalidArgumentException_tE7B70E1697DD7E269106D8934BC510C5B59AC010* L_14 = (WebSocketInvalidArgumentException_tE7B70E1697DD7E269106D8934BC510C5B59AC010*)il2cpp_codegen_object_new(WebSocketInvalidArgumentException_tE7B70E1697DD7E269106D8934BC510C5B59AC010_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WebSocketInvalidArgumentException__ctor_m1E02223C69CF78C2DB56335BAFCA7FE7E8E462BC(L_14, _stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69, L_13, NULL);
		return L_14;
	}

IL_007b:
	{
		Exception_t* L_15 = ___inner1;
		WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19* L_16 = (WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19*)il2cpp_codegen_object_new(WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WebSocketUnexpectedException__ctor_mDAB34C35B5F9614D9449E3D3D8882A38CEA97BC4(L_16, _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D, L_15, NULL);
		return L_16;
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
// System.Void NativeWebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mEE4B486BC6DC3311292410F797E78E3D8635686B (WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m718D30F86B060FEBCE249D5E04033B4311D22132 (WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m11CB07B4B273561D701997F75FF92F165521185D (WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_m3EA7573617D9E97AC137E9ECC71B90F5E615CB60 (WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19* __this, const RuntimeMethod* method) 
{
	{
		WebSocketException__ctor_mEE4B486BC6DC3311292410F797E78E3D8635686B(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mD22736D0863F388B6799E3F37F9801DFF6F84394 (WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m718D30F86B060FEBCE249D5E04033B4311D22132(__this, L_0, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mDAB34C35B5F9614D9449E3D3D8882A38CEA97BC4 (WebSocketUnexpectedException_tC70A6FDA23AF7E913513217476815094AD6A0B19* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		WebSocketException__ctor_m11CB07B4B273561D701997F75FF92F165521185D(__this, L_0, L_1, NULL);
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
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m40746C8F8D1719999015CB58E0DE90F07711EFFB (WebSocketInvalidArgumentException_tE7B70E1697DD7E269106D8934BC510C5B59AC010* __this, const RuntimeMethod* method) 
{
	{
		WebSocketException__ctor_mEE4B486BC6DC3311292410F797E78E3D8635686B(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_mB7CFF4DC51E761EBE1E8118737334CA5F24D04D6 (WebSocketInvalidArgumentException_tE7B70E1697DD7E269106D8934BC510C5B59AC010* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m718D30F86B060FEBCE249D5E04033B4311D22132(__this, L_0, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m1E02223C69CF78C2DB56335BAFCA7FE7E8E462BC (WebSocketInvalidArgumentException_tE7B70E1697DD7E269106D8934BC510C5B59AC010* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		WebSocketException__ctor_m11CB07B4B273561D701997F75FF92F165521185D(__this, L_0, L_1, NULL);
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
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_mEEA7BEBDA02B7B9928447917A734A9338E2626E9 (WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12* __this, const RuntimeMethod* method) 
{
	{
		WebSocketException__ctor_mEE4B486BC6DC3311292410F797E78E3D8635686B(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_m0E5C427D6F9271FF57DC59054546482C4D38C5F2 (WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m718D30F86B060FEBCE249D5E04033B4311D22132(__this, L_0, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_mF0112F4B2735AD6925ACD3DFCDC2F58C7F9DF2C7 (WebSocketInvalidStateException_tCC940245EB3618290B9E3FCFFE1842C334B13C12* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		WebSocketException__ctor_m11CB07B4B273561D701997F75FF92F165521185D(__this, L_0, L_1, NULL);
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
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter NativeWebSocket.WaitForBackgroundThread::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 WaitForBackgroundThread_GetAwaiter_mFE1C03A891AD7626DC82EDADD2721D72A9E979A7 (WaitForBackgroundThread_tD9066469606614A592FFD2459D4F043A3A921F52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m6016817880E9612BA87B4A018107202203288A66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_il2cpp_TypeInfo_var);
		U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2* L_2 = ((U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m6016817880E9612BA87B4A018107202203288A66_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(G_B2_0, NULL);
		NullCheck(L_5);
		ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_6;
		L_6 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_5, (bool)0, NULL);
		V_0 = L_6;
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_7;
		L_7 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_0), NULL);
		return L_7;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForBackgroundThread__ctor_m6C8386FB00AC12BAABC2BAD09F33524664BED13F (WaitForBackgroundThread_tD9066469606614A592FFD2459D4F043A3A921F52* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8DF4C99179486A5B74EB72C569D59868E5895520 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2* L_0 = (U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2*)il2cpp_codegen_object_new(U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mBBAF2A3B4039C1D9899D34D612182052CB1B1B61(L_0, NULL);
		((U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBBAF2A3B4039C1D9899D34D612182052CB1B1B61 (U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::<GetAwaiter>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m6016817880E9612BA87B4A018107202203288A66 (U3CU3Ec_t4BF3570EC6020D48AA6CE67F62EB9FDDC1D407D2* __this, const RuntimeMethod* method) 
{
	{
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
// NativeWebSocket.IWebSocket NativeWebSocket.WebSocket::Create(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocket_Create_mDA2D7CFE9C82E9352B6C3132142AF0FACB094240 (String_t* ___url0, String_t* ___subProtocol1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CCreateU3Eb__0_m4FC35771EF80C9F443B28399C8554427611D606B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CCreateU3Eb__1_mFDD9E9F680AAC9DC00C46BE573DB519098BFC105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* V_0 = NULL;
	U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* G_B6_0 = NULL;
	U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* G_B5_0 = NULL;
	WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* G_B7_0 = NULL;
	U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* G_B7_1 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* L_0 = (U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_mF9B00650729A347679094F692214A741225A6ACA(L_0, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = RuntimePlatforms_IsWebGL_mF94C10DD66EA7D0F9078219C12ACB07252DC0A5E(NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___subProtocol1;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___url0;
		WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* L_4 = (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3*)il2cpp_codegen_object_new(WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WebSocket__ctor_m48C5FD4DBA22741E5C2162CB34DB4EA06147783F(L_4, L_3, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, NULL);
		return L_4;
	}

IL_0018:
	{
		String_t* L_5 = ___url0;
		String_t* L_6 = ___subProtocol1;
		WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* L_7 = (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3*)il2cpp_codegen_object_new(WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WebSocket__ctor_m5BF315C34BF3C6E08DCB7A45B90DA38BEB4061B1(L_7, L_5, L_6, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, NULL);
		return L_7;
	}

IL_0021:
	{
		U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* L_8 = V_0;
		String_t* L_9 = ___subProtocol1;
		G_B5_0 = L_8;
		if (L_9)
		{
			G_B6_0 = L_8;
			goto IL_002d;
		}
	}
	{
		String_t* L_10 = ___url0;
		WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* L_11 = (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55*)il2cpp_codegen_object_new(WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WebSocket__ctor_m83FF0718C314AC7DCB8BC4F7DE043F2ABECAE681(L_11, L_10, NULL);
		G_B7_0 = L_11;
		G_B7_1 = G_B5_0;
		goto IL_0034;
	}

IL_002d:
	{
		String_t* L_12 = ___url0;
		String_t* L_13 = ___subProtocol1;
		WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* L_14 = (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55*)il2cpp_codegen_object_new(WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WebSocket__ctor_m2D1CF26422D415084B71F14DD27BBD8DFFEA83C7(L_14, L_12, L_13, NULL);
		G_B7_0 = L_14;
		G_B7_1 = G_B6_0;
	}

IL_0034:
	{
		NullCheck(G_B7_1);
		G_B7_1->___ws_1 = G_B7_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B7_1->___ws_1), (void*)G_B7_0);
		U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* L_15 = V_0;
		NullCheck(L_15);
		L_15->___wsObj_0 = (WebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___wsObj_0), (void*)(WebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7*)NULL);
		U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* L_16 = V_0;
		NullCheck(L_16);
		WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* L_17 = L_16->___ws_1;
		U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* L_18 = V_0;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_19 = (WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)il2cpp_codegen_object_new(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		WebSocketOpenEventHandler__ctor_mA44B7B49190DCAAC6939B0855F307011E7919897(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CCreateU3Eb__0_m4FC35771EF80C9F443B28399C8554427611D606B_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		WebSocket_add_OnOpen_m7F0A163BE994A7CE6EEC5B17C46C2460C2975143(L_17, L_19, NULL);
		U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* L_20 = V_0;
		NullCheck(L_20);
		WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* L_21 = L_20->___ws_1;
		U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* L_22 = V_0;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_23 = (WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)il2cpp_codegen_object_new(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WebSocketCloseEventHandler__ctor_mB13B2B5767E3DD304D66411611A49584CB36D739(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CCreateU3Eb__1_mFDD9E9F680AAC9DC00C46BE573DB519098BFC105_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		WebSocket_add_OnClose_m0510AF316BD60C4C135E76F6090B369ED1D028EC(L_21, L_23, NULL);
		U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* L_24 = V_0;
		NullCheck(L_24);
		WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* L_25 = L_24->___ws_1;
		return L_25;
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
// System.Void NativeWebSocket.WebSocket/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mF9B00650729A347679094F692214A741225A6ACA (U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<>c__DisplayClass0_0::<Create>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CCreateU3Eb__0_m4FC35771EF80C9F443B28399C8554427611D606B (U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CCreateU3Eb__2_m53F4036BEBFED4B919B6F4A105FF7ECD3AADD7F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3CU3E9__2_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CCreateU3Eb__2_m53F4036BEBFED4B919B6F4A105FF7ECD3AADD7F7_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = L_2;
		V_0 = L_3;
		__this->___U3CU3E9__2_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__2_2), (void*)L_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_001f:
	{
		MainThreadUtil_Run_mB9CE68E525B9FB1281A12F9331948AB47B0CFF4D(G_B2_0, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<>c__DisplayClass0_0::<Create>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CCreateU3Eb__2_m53F4036BEBFED4B919B6F4A105FF7ECD3AADD7F7 (U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7_mF843269B5EFD6E3A55DDCAE2B9BD2F30789959FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral313D79D9E074019D65BA61008615A5F9FEB79BB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral313D79D9E074019D65BA61008615A5F9FEB79BB6, L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, L_3, NULL);
		NullCheck(L_4);
		WebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7* L_5;
		L_5 = GameObject_AddComponent_TisWebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7_mF843269B5EFD6E3A55DDCAE2B9BD2F30789959FF(L_4, GameObject_AddComponent_TisWebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7_mF843269B5EFD6E3A55DDCAE2B9BD2F30789959FF_RuntimeMethod_var);
		__this->___wsObj_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wsObj_0), (void*)L_5);
		WebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7* L_6 = __this->___wsObj_0;
		WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* L_7 = __this->___ws_1;
		NullCheck(L_6);
		L_6->___WebSocket_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___WebSocket_4), (void*)L_7);
		return;
	}
}
// System.Void NativeWebSocket.WebSocket/<>c__DisplayClass0_0::<Create>b__1(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CCreateU3Eb__1_mFDD9E9F680AAC9DC00C46BE573DB519098BFC105 (U3CU3Ec__DisplayClass0_0_tA9EDFF4BB1848FAB35C447A35C42E386CB523AD0* __this, int32_t ___code0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocketDispatcher_t2D73297DFD90977E08B4DD2354ABC25FB7637BB7* L_0 = __this->___wsObj_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnOpenEvent_mB653BA26D02887721F87C858E5D937FF271C5656(int32_t ___instanceId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnOpenEvent_mB653BA26D02887721F87C858E5D937FF271C5656(___instanceId0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnMessageEvent_mF99184E8B0D311D101804B6ECE63517FC547BACE(int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnMessageEvent_mF99184E8B0D311D101804B6ECE63517FC547BACE(___instanceId0, ___msgPtr1, ___msgSize2, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnErrorEvent_mE97552235E93CBDEFD5F2554B62C9A3DA6093436(int32_t ___instanceId0, intptr_t ___errorPtr1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnErrorEvent_mE97552235E93CBDEFD5F2554B62C9A3DA6093436(___instanceId0, ___errorPtr1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnCloseEvent_mB1D8CD3AE6ABFE9C48657FC7880BEDE974CE964F(int32_t ___instanceId0, int32_t ___closeCode1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnCloseEvent_mB1D8CD3AE6ABFE9C48657FC7880BEDE974CE964F(___instanceId0, ___closeCode1, NULL);

}
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketAllocate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAllocate_m8AC3C9DBD1294F017571195E088F15C05183E3C4 (String_t* ___url0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketAllocate)(____url0_marshaled);

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	return returnValue;
}
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketAddSubProtocol(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAddSubProtocol_mCFF81E062A7DCB2C31BD46EB184454F94AFBEDF1 (int32_t ___instanceId0, String_t* ___subprotocol1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	// Marshaling of parameter '___subprotocol1' to native representation
	char* ____subprotocol1_marshaled = NULL;
	____subprotocol1_marshaled = il2cpp_codegen_marshal_string(___subprotocol1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketAddSubProtocol)(___instanceId0, ____subprotocol1_marshaled);

	// Marshaling cleanup of parameter '___subprotocol1' native representation
	il2cpp_codegen_marshal_free(____subprotocol1_marshaled);
	____subprotocol1_marshaled = NULL;

	return returnValue;
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketFree_mC5068840282718501A8D8370519B7A32E2A2DA86 (int32_t ___instanceId0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketFree)(___instanceId0);

}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketSetOnOpen(NativeWebSocket.implementation.WebGL.WebSocketFactory/OnOpenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnOpen_m7CFE8CC3D114ABC248143E4E48FBB57226164A50 (OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* ___callback0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnOpen)(____callback0_marshaled);

}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketSetOnMessage(NativeWebSocket.implementation.WebGL.WebSocketFactory/OnMessageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnMessage_mD684805EF88AD078193C9C414970327420BD30E8 (OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* ___callback0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnMessage)(____callback0_marshaled);

}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketSetOnError(NativeWebSocket.implementation.WebGL.WebSocketFactory/OnErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnError_m33E3701F97D82E9737C436A1A4021C155FB88368 (OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* ___callback0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnError)(____callback0_marshaled);

}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::WebSocketSetOnClose(NativeWebSocket.implementation.WebGL.WebSocketFactory/OnCloseCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnClose_m2B16BA5666CE63015E3E06EA876547F41BDBCF85 (OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* ___callback0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnClose)(____callback0_marshaled);

}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_Initialize_m91733B0355D63D32E5C99EB11741764D35EEA3FE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnCloseEvent_mB1D8CD3AE6ABFE9C48657FC7880BEDE974CE964F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnErrorEvent_mE97552235E93CBDEFD5F2554B62C9A3DA6093436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnMessageEvent_mF99184E8B0D311D101804B6ECE63517FC547BACE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnOpenEvent_mB653BA26D02887721F87C858E5D937FF271C5656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* L_0 = (OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A*)il2cpp_codegen_object_new(OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnOpenCallback__ctor_m174ADD99FDD01A61CA745CE034340B78514E0D93(L_0, NULL, (intptr_t)((void*)WebSocketFactory_DelegateOnOpenEvent_mB653BA26D02887721F87C858E5D937FF271C5656_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		WebSocketFactory_WebSocketSetOnOpen_m7CFE8CC3D114ABC248143E4E48FBB57226164A50(L_0, NULL);
		OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* L_1 = (OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B*)il2cpp_codegen_object_new(OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnMessageCallback__ctor_m34A77697BCD5AA8D782E73B37AA67FBD77D000A1(L_1, NULL, (intptr_t)((void*)WebSocketFactory_DelegateOnMessageEvent_mF99184E8B0D311D101804B6ECE63517FC547BACE_RuntimeMethod_var), NULL);
		WebSocketFactory_WebSocketSetOnMessage_mD684805EF88AD078193C9C414970327420BD30E8(L_1, NULL);
		OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* L_2 = (OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7*)il2cpp_codegen_object_new(OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OnErrorCallback__ctor_m9A64A316091A1523B4DA7AADBFEC6FAFEBDA8DFD(L_2, NULL, (intptr_t)((void*)WebSocketFactory_DelegateOnErrorEvent_mE97552235E93CBDEFD5F2554B62C9A3DA6093436_RuntimeMethod_var), NULL);
		WebSocketFactory_WebSocketSetOnError_m33E3701F97D82E9737C436A1A4021C155FB88368(L_2, NULL);
		OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* L_3 = (OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B*)il2cpp_codegen_object_new(OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OnCloseCallback__ctor_m9BB590AB823ACAA4AFB9B9ADF717CB66A836ADAC(L_3, NULL, (intptr_t)((void*)WebSocketFactory_DelegateOnCloseEvent_mB1D8CD3AE6ABFE9C48657FC7880BEDE974CE964F_RuntimeMethod_var), NULL);
		WebSocketFactory_WebSocketSetOnClose_m2B16BA5666CE63015E3E06EA876547F41BDBCF85(L_3, NULL);
		((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___isInitialized_1 = (bool)1;
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::HandleInstanceDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_HandleInstanceDestroy_mCEBFA0F7C7E75C9B238074C8255B470467245504 (int32_t ___instanceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m98AD48C32B08E12B4A8E4682D6AA8F3F9936A3D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* L_0 = ((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_1 = ___instanceId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_m98AD48C32B08E12B4A8E4682D6AA8F3F9936A3D9(L_0, L_1, Dictionary_2_Remove_m98AD48C32B08E12B4A8E4682D6AA8F3F9936A3D9_RuntimeMethod_var);
		int32_t L_3 = ___instanceId0;
		WebSocketFactory_WebSocketFree_mC5068840282718501A8D8370519B7A32E2A2DA86(L_3, NULL);
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::DelegateOnOpenEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnOpenEvent_mB653BA26D02887721F87C858E5D937FF271C5656 (int32_t ___instanceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* L_0 = ((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_1 = ___instanceId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* L_3 = V_0;
		NullCheck(L_3);
		WebSocket_DelegateOnOpenEvent_m01F057BCB76F30B1C32165347729801E4B383E20(L_3, NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::DelegateOnMessageEvent(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnMessageEvent_mF99184E8B0D311D101804B6ECE63517FC547BACE (int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* L_0 = ((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_1 = ___instanceId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___msgSize2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		intptr_t L_5 = ___msgPtr1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		int32_t L_7 = ___msgSize2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_5, L_6, 0, L_7, NULL);
		WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck(L_8);
		WebSocket_DelegateOnMessageEvent_mC51FC018BEDDC2826D0388BD61BF9C351E7737DB(L_8, L_9, NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::DelegateOnErrorEvent(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnErrorEvent_mE97552235E93CBDEFD5F2554B62C9A3DA6093436 (int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* L_0 = ((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_1 = ___instanceId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		intptr_t L_3 = ___errorPtr1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275(L_3, NULL);
		V_1 = L_4;
		WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* L_5 = V_0;
		String_t* L_6 = V_1;
		NullCheck(L_5);
		WebSocket_DelegateOnErrorEvent_m1A975C486B834823D967506B6E7DCFEF1A5C0455(L_5, L_6, NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::DelegateOnCloseEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnCloseEvent_mB1D8CD3AE6ABFE9C48657FC7880BEDE974CE964F (int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* L_0 = ((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_1 = ___instanceId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m6D68FC9D1D1084CFB4FA633E63C143B3C8F3FE43_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* L_3 = V_0;
		int32_t L_4 = ___closeCode1;
		NullCheck(L_3);
		WebSocket_DelegateOnCloseEvent_m191E0E27F25B3005371253B960F0FC5A1F165AE0(L_3, L_4, NULL);
	}

IL_0016:
	{
		return;
	}
}
// NativeWebSocket.implementation.WebGL.WebSocket NativeWebSocket.implementation.WebGL.WebSocketFactory::CreateInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* WebSocketFactory_CreateInstance_m15781DCC3E0082111B95050D4192FF05B483A932 (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___url0;
		WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* L_1 = (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3*)il2cpp_codegen_object_new(WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WebSocket__ctor_m48C5FD4DBA22741E5C2162CB34DB4EA06147783F(L_1, L_0, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, NULL);
		return L_1;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory__cctor_m16FB70DD5CC91DB4FA4FB6DD0E7149472E184480 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3CBFD64FA4A4E40C0C7FBFD89FB01985D0477560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* L_0 = (Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11*)il2cpp_codegen_object_new(Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3CBFD64FA4A4E40C0C7FBFD89FB01985D0477560(L_0, Dictionary_2__ctor_m3CBFD64FA4A4E40C0C7FBFD89FB01985D0477560_RuntimeMethod_var);
		((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___instances_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___instances_0), (void*)L_0);
		((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___isInitialized_1 = (bool)0;
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
void OnOpenCallback_Invoke_m14770F54A31A1BB81DC7C918E4388D4628944BFE_Multicast(OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* currentDelegate = reinterpret_cast<OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___instanceId0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnOpenCallback_Invoke_m14770F54A31A1BB81DC7C918E4388D4628944BFE_OpenInst(OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___instanceId0, method);
}
void OnOpenCallback_Invoke_m14770F54A31A1BB81DC7C918E4388D4628944BFE_OpenStatic(OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___instanceId0, method);
}
void OnOpenCallback_Invoke_m14770F54A31A1BB81DC7C918E4388D4628944BFE_OpenStaticInvoker(OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___instanceId0);
}
void OnOpenCallback_Invoke_m14770F54A31A1BB81DC7C918E4388D4628944BFE_ClosedStaticInvoker(OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___instanceId0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A (OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___instanceId0);

}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback__ctor_m174ADD99FDD01A61CA745CE034340B78514E0D93 (OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOpenCallback_Invoke_m14770F54A31A1BB81DC7C918E4388D4628944BFE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnOpenCallback_Invoke_m14770F54A31A1BB81DC7C918E4388D4628944BFE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOpenCallback_Invoke_m14770F54A31A1BB81DC7C918E4388D4628944BFE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnOpenCallback_Invoke_m14770F54A31A1BB81DC7C918E4388D4628944BFE_Multicast;
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnOpenCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback_Invoke_m14770F54A31A1BB81DC7C918E4388D4628944BFE (OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* __this, int32_t ___instanceId0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___instanceId0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.implementation.WebGL.WebSocketFactory/OnOpenCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOpenCallback_BeginInvoke_m024763DEA66BDBE8499E1651FE74FD0097EC0658 (OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* __this, int32_t ___instanceId0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___instanceId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnOpenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback_EndInvoke_m6E96867B31BCC515C92DF7CDECE616061277DA9B (OnOpenCallback_t81DC362B0C75DBF2CDCDFF6775605F8C45E5B71A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void OnMessageCallback_Invoke_mE5CB7B9B98669F72B78EDF0EC1F14D850B88D87B_Multicast(OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* currentDelegate = reinterpret_cast<OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___instanceId0, ___msgPtr1, ___msgSize2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnMessageCallback_Invoke_mE5CB7B9B98669F72B78EDF0EC1F14D850B88D87B_OpenInst(OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___instanceId0, ___msgPtr1, ___msgSize2, method);
}
void OnMessageCallback_Invoke_mE5CB7B9B98669F72B78EDF0EC1F14D850B88D87B_OpenStatic(OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___instanceId0, ___msgPtr1, ___msgSize2, method);
}
void OnMessageCallback_Invoke_mE5CB7B9B98669F72B78EDF0EC1F14D850B88D87B_OpenStaticInvoker(OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___instanceId0, ___msgPtr1, ___msgSize2);
}
void OnMessageCallback_Invoke_mE5CB7B9B98669F72B78EDF0EC1F14D850B88D87B_ClosedStaticInvoker(OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___instanceId0, ___msgPtr1, ___msgSize2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B (OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___instanceId0, ___msgPtr1, ___msgSize2);

}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback__ctor_m34A77697BCD5AA8D782E73B37AA67FBD77D000A1 (OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnMessageCallback_Invoke_mE5CB7B9B98669F72B78EDF0EC1F14D850B88D87B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnMessageCallback_Invoke_mE5CB7B9B98669F72B78EDF0EC1F14D850B88D87B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnMessageCallback_Invoke_mE5CB7B9B98669F72B78EDF0EC1F14D850B88D87B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnMessageCallback_Invoke_mE5CB7B9B98669F72B78EDF0EC1F14D850B88D87B_Multicast;
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnMessageCallback::Invoke(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback_Invoke_mE5CB7B9B98669F72B78EDF0EC1F14D850B88D87B (OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___instanceId0, ___msgPtr1, ___msgSize2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.implementation.WebGL.WebSocketFactory/OnMessageCallback::BeginInvoke(System.Int32,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnMessageCallback_BeginInvoke_m33C09A3FE9AB558BAC5C93A5735249C1DD46BA8D (OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___instanceId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___msgPtr1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___msgSize2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnMessageCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback_EndInvoke_mF7D1890ADFCD09A25EAE8FA761012339617F1B4A (OnMessageCallback_t538D11B0222529CE6FE51A5E84663FDA43D8C38B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void OnErrorCallback_Invoke_m0FB095959BC81FFD66BB454BAD8F308EBF4ECC4C_Multicast(OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* currentDelegate = reinterpret_cast<OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___instanceId0, ___errorPtr1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnErrorCallback_Invoke_m0FB095959BC81FFD66BB454BAD8F308EBF4ECC4C_OpenInst(OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___instanceId0, ___errorPtr1, method);
}
void OnErrorCallback_Invoke_m0FB095959BC81FFD66BB454BAD8F308EBF4ECC4C_OpenStatic(OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___instanceId0, ___errorPtr1, method);
}
void OnErrorCallback_Invoke_m0FB095959BC81FFD66BB454BAD8F308EBF4ECC4C_OpenStaticInvoker(OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___instanceId0, ___errorPtr1);
}
void OnErrorCallback_Invoke_m0FB095959BC81FFD66BB454BAD8F308EBF4ECC4C_ClosedStaticInvoker(OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___instanceId0, ___errorPtr1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7 (OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___instanceId0, ___errorPtr1);

}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback__ctor_m9A64A316091A1523B4DA7AADBFEC6FAFEBDA8DFD (OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnErrorCallback_Invoke_m0FB095959BC81FFD66BB454BAD8F308EBF4ECC4C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnErrorCallback_Invoke_m0FB095959BC81FFD66BB454BAD8F308EBF4ECC4C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnErrorCallback_Invoke_m0FB095959BC81FFD66BB454BAD8F308EBF4ECC4C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnErrorCallback_Invoke_m0FB095959BC81FFD66BB454BAD8F308EBF4ECC4C_Multicast;
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnErrorCallback::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback_Invoke_m0FB095959BC81FFD66BB454BAD8F308EBF4ECC4C (OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___instanceId0, ___errorPtr1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.implementation.WebGL.WebSocketFactory/OnErrorCallback::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnErrorCallback_BeginInvoke_m9AF5436A0A3378825EFC70014230037B11CD158E (OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* __this, int32_t ___instanceId0, intptr_t ___errorPtr1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___instanceId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___errorPtr1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback_EndInvoke_mC184EC7862BDF0FB89E15302AB831935990F5B4C (OnErrorCallback_tDD707C39E1D24415C7891A5FFC4C1CA7A44402F7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void OnCloseCallback_Invoke_m8F691B8E9CD8D1022D1E4D1F38C6D67BFDD03209_Multicast(OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* currentDelegate = reinterpret_cast<OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___instanceId0, ___closeCode1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCloseCallback_Invoke_m8F691B8E9CD8D1022D1E4D1F38C6D67BFDD03209_OpenInst(OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___instanceId0, ___closeCode1, method);
}
void OnCloseCallback_Invoke_m8F691B8E9CD8D1022D1E4D1F38C6D67BFDD03209_OpenStatic(OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___instanceId0, ___closeCode1, method);
}
void OnCloseCallback_Invoke_m8F691B8E9CD8D1022D1E4D1F38C6D67BFDD03209_OpenStaticInvoker(OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___instanceId0, ___closeCode1);
}
void OnCloseCallback_Invoke_m8F691B8E9CD8D1022D1E4D1F38C6D67BFDD03209_ClosedStaticInvoker(OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___instanceId0, ___closeCode1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B (OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___instanceId0, ___closeCode1);

}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback__ctor_m9BB590AB823ACAA4AFB9B9ADF717CB66A836ADAC (OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCloseCallback_Invoke_m8F691B8E9CD8D1022D1E4D1F38C6D67BFDD03209_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCloseCallback_Invoke_m8F691B8E9CD8D1022D1E4D1F38C6D67BFDD03209_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCloseCallback_Invoke_m8F691B8E9CD8D1022D1E4D1F38C6D67BFDD03209_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnCloseCallback_Invoke_m8F691B8E9CD8D1022D1E4D1F38C6D67BFDD03209_Multicast;
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnCloseCallback::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback_Invoke_m8F691B8E9CD8D1022D1E4D1F38C6D67BFDD03209 (OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___instanceId0, ___closeCode1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.implementation.WebGL.WebSocketFactory/OnCloseCallback::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCloseCallback_BeginInvoke_m2CA4D1BD38622787892B8128BE207D3940383A89 (OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* __this, int32_t ___instanceId0, int32_t ___closeCode1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___instanceId0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___closeCode1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocketFactory/OnCloseCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback_EndInvoke_mD9A78CE112335A8B624D3EE277A4A3E6B54717AE (OnCloseCallback_t77297801CCC5990FEE3FA8CD294DB7356D71824B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocket::WebSocketConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketConnect_m4A17DA7F885A8889E15E521021554429D285AD21 (int32_t ___instanceId0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketConnect)(___instanceId0);

	return returnValue;
}
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocket::WebSocketClose(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketClose_mFA7A9B9B7D157DF3DAA8AE8ED64E169970273C76 (int32_t ___instanceId0, int32_t ___code1, String_t* ___reason2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, char*);

	// Marshaling of parameter '___reason2' to native representation
	char* ____reason2_marshaled = NULL;
	____reason2_marshaled = il2cpp_codegen_marshal_string(___reason2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketClose)(___instanceId0, ___code1, ____reason2_marshaled);

	// Marshaling cleanup of parameter '___reason2' native representation
	il2cpp_codegen_marshal_free(____reason2_marshaled);
	____reason2_marshaled = NULL;

	return returnValue;
}
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocket::WebSocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSend_m1EE5156EDF7BA82236060C856D4D548AB77226B2 (int32_t ___instanceId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataPtr1, int32_t ___dataLength2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___dataPtr1' to native representation
	uint8_t* ____dataPtr1_marshaled = NULL;
	if (___dataPtr1 != NULL)
	{
		____dataPtr1_marshaled = reinterpret_cast<uint8_t*>((___dataPtr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketSend)(___instanceId0, ____dataPtr1_marshaled, ___dataLength2);

	return returnValue;
}
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocket::WebSocketSendText(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSendText_m5C4C9C264066A6CC08A48DC9ABCB306665078DFF (int32_t ___instanceId0, String_t* ___message1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketSendText)(___instanceId0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

	return returnValue;
}
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocket::WebSocketGetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketGetState_m1BE8011A7C49A28CE3EED0BB6FE8428E0016CD49 (int32_t ___instanceId0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketGetState)(___instanceId0);

	return returnValue;
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_mB9E2A3D6FEC3130FB3E5B16BFCCDEB13AA350C50 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* V_0 = NULL;
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* V_1 = NULL;
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* V_2 = NULL;
	{
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_0 = __this->___OnOpen_1;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_2 = V_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7** L_5 = (&__this->___OnOpen_1);
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_6 = V_2;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_7 = V_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_9 = V_0;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::remove_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnOpen_m310BC01107B353878DA7F1C39305984F943F107B (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* V_0 = NULL;
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* V_1 = NULL;
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* V_2 = NULL;
	{
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_0 = __this->___OnOpen_1;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_2 = V_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7** L_5 = (&__this->___OnOpen_1);
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_6 = V_2;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_7 = V_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_9 = V_0;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::add_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_m4C4EBFFA4758C6F68DBD9C1267BF682066300180 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* V_0 = NULL;
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* V_1 = NULL;
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* V_2 = NULL;
	{
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_0 = __this->___OnMessage_2;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_2 = V_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE** L_5 = (&__this->___OnMessage_2);
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_6 = V_2;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_7 = V_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_9 = V_0;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::remove_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnMessage_mD630D030715C2B6F1CB9CE101839EBFB559D97F7 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* V_0 = NULL;
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* V_1 = NULL;
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* V_2 = NULL;
	{
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_0 = __this->___OnMessage_2;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_2 = V_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE** L_5 = (&__this->___OnMessage_2);
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_6 = V_2;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_7 = V_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_9 = V_0;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::add_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_mF51C06798D16E722779327D687BA49F856005E10 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* V_0 = NULL;
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* V_1 = NULL;
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* V_2 = NULL;
	{
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_0 = __this->___OnError_3;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_2 = V_1;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1** L_5 = (&__this->___OnError_3);
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_6 = V_2;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_7 = V_1;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_9 = V_0;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::remove_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnError_mB9691513946320AF15EF9F973990277B7646FEED (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* V_0 = NULL;
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* V_1 = NULL;
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* V_2 = NULL;
	{
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_0 = __this->___OnError_3;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_2 = V_1;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1** L_5 = (&__this->___OnError_3);
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_6 = V_2;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_7 = V_1;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_9 = V_0;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m59DE84D91D9E3F191F3FE86513F73026066075C0 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* V_0 = NULL;
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* V_1 = NULL;
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* V_2 = NULL;
	{
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_0 = __this->___OnClose_4;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_2 = V_1;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13** L_5 = (&__this->___OnClose_4);
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_6 = V_2;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_7 = V_1;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_9 = V_0;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::remove_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnClose_m36765D711EFD599AD91414755C7D3D442E3F1546 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* V_0 = NULL;
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* V_1 = NULL;
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* V_2 = NULL;
	{
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_0 = __this->___OnClose_4;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_2 = V_1;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13** L_5 = (&__this->___OnClose_4);
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_6 = V_2;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_7 = V_1;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_9 = V_0;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m48C5FD4DBA22741E5C2162CB34DB4EA06147783F (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, String_t* ___url0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF396B71BB7F430F29F0721783E8FFD22D76B2EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		bool L_0 = ((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___isInitialized_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		WebSocketFactory_Initialize_m91733B0355D63D32E5C99EB11741764D35EEA3FE(NULL);
	}

IL_0012:
	{
		String_t* L_1 = ___url0;
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = WebSocketFactory_WebSocketAllocate_m8AC3C9DBD1294F017571195E088F15C05183E3C4(L_1, NULL);
		V_0 = L_2;
		Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* L_3 = ((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Dictionary_2_Add_mF396B71BB7F430F29F0721783E8FFD22D76B2EDA(L_3, L_4, __this, Dictionary_2_Add_mF396B71BB7F430F29F0721783E8FFD22D76B2EDA_RuntimeMethod_var);
		int32_t L_5 = V_0;
		__this->___instanceId_0 = L_5;
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::.ctor(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m5BF315C34BF3C6E08DCB7A45B90DA38BEB4061B1 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, String_t* ___url0, String_t* ___subprotocol1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF396B71BB7F430F29F0721783E8FFD22D76B2EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		bool L_0 = ((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___isInitialized_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		WebSocketFactory_Initialize_m91733B0355D63D32E5C99EB11741764D35EEA3FE(NULL);
	}

IL_0012:
	{
		String_t* L_1 = ___url0;
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = WebSocketFactory_WebSocketAllocate_m8AC3C9DBD1294F017571195E088F15C05183E3C4(L_1, NULL);
		V_0 = L_2;
		Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* L_3 = ((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Dictionary_2_Add_mF396B71BB7F430F29F0721783E8FFD22D76B2EDA(L_3, L_4, __this, Dictionary_2_Add_mF396B71BB7F430F29F0721783E8FFD22D76B2EDA_RuntimeMethod_var);
		int32_t L_5 = V_0;
		String_t* L_6 = ___subprotocol1;
		int32_t L_7;
		L_7 = WebSocketFactory_WebSocketAddSubProtocol_mCFF81E062A7DCB2C31BD46EB184454F94AFBEDF1(L_5, L_6, NULL);
		int32_t L_8 = V_0;
		__this->___instanceId_0 = L_8;
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::.ctor(System.String,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m12C5BBAF7E4A52DD452DB5FE89021DAB26886CE3 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, String_t* ___url0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___subprotocols1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF396B71BB7F430F29F0721783E8FFD22D76B2EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		bool L_0 = ((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___isInitialized_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		WebSocketFactory_Initialize_m91733B0355D63D32E5C99EB11741764D35EEA3FE(NULL);
	}

IL_0012:
	{
		String_t* L_1 = ___url0;
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = WebSocketFactory_WebSocketAllocate_m8AC3C9DBD1294F017571195E088F15C05183E3C4(L_1, NULL);
		V_0 = L_2;
		Dictionary_2_t5AC4265269E4766659A35314FE2216BDC2A8DE11* L_3 = ((WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Dictionary_2_Add_mF396B71BB7F430F29F0721783E8FFD22D76B2EDA(L_3, L_4, __this, Dictionary_2_Add_mF396B71BB7F430F29F0721783E8FFD22D76B2EDA_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___subprotocols1;
		NullCheck(L_5);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_6;
		L_6 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_5, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_1), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_002e_1:
			{
				String_t* L_7;
				L_7 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_1), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_2 = L_7;
				int32_t L_8 = V_0;
				String_t* L_9 = V_2;
				il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
				int32_t L_10;
				L_10 = WebSocketFactory_WebSocketAddSubProtocol_mCFF81E062A7DCB2C31BD46EB184454F94AFBEDF1(L_8, L_9, NULL);
			}

IL_003e_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_1), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		int32_t L_12 = V_0;
		__this->___instanceId_0 = L_12;
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Finalize_m8A16631A0B7A19F4D36582A974F095102B3919C7 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			int32_t L_0 = __this->___instanceId_0;
			il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t81890B9D9376FB033945BA7069141F6692CEA4C8_il2cpp_TypeInfo_var);
			WebSocketFactory_HandleInstanceDestroy_mCEBFA0F7C7E75C9B238074C8255B470467245504(L_0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Int32 NativeWebSocket.implementation.WebGL.WebSocket::GetInstanceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_GetInstanceId_mF1246F1970501008A6BC8B82A20EBBEA12568AE6 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___instanceId_0;
		return L_0;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.implementation.WebGL.WebSocket::Connect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Connect_mA331C0FA2F3050DF47B1FA37BA20C86CF93A7E5C (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, bool ___awaitConnection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m8E487F2587B905596F900A52FDFFF33EA7FC3096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)il2cpp_codegen_object_new(TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m8E487F2587B905596F900A52FDFFF33EA7FC3096(L_0, ((int32_t)64), TaskCompletionSource_1__ctor_m8E487F2587B905596F900A52FDFFF33EA7FC3096_RuntimeMethod_var);
		__this->____connectionTask_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connectionTask_5), (void*)L_0);
		int32_t L_1 = __this->___instanceId_0;
		int32_t L_2;
		L_2 = WebSocket_WebSocketConnect_m4A17DA7F885A8889E15E521021554429D285AD21(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_0;
		WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* L_5;
		L_5 = WebSocketHelpers_GetErrorMessageFromCode_mB6BCBD83B6BE88E2B94E25CE1580001BF6D5F268(L_4, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Connect_mA331C0FA2F3050DF47B1FA37BA20C86CF93A7E5C_RuntimeMethod_var)));
	}

IL_0025:
	{
		bool L_6 = ___awaitConnection0;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_7;
	}

IL_002e:
	{
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_8 = __this->____connectionTask_5;
		NullCheck(L_8);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_9;
		L_9 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(L_8, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		return L_9;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::CancelConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_CancelConnection_mDCF9BB37B86A97D494817E46A47450304D02E374 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = WebSocket_get_State_mD54AD2A8CBE7EE50DFECA69D6A428052E0AA3F19(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = WebSocket_Close_m425002A03CCAB65B9DB8A5F90143949A9A363F6D(__this, ((int32_t)1006), (String_t*)NULL, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.implementation.WebGL.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Close_m129D765E6BDD36348422148E9164397D1CCC8140 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___instanceId_0;
		int32_t L_1;
		L_1 = WebSocket_WebSocketClose_mFA7A9B9B7D157DF3DAA8AE8ED64E169970273C76(L_0, ((int32_t)1000), (String_t*)NULL, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = V_0;
		WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* L_4;
		L_4 = WebSocketHelpers_GetErrorMessageFromCode_mB6BCBD83B6BE88E2B94E25CE1580001BF6D5F268(L_3, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Close_m129D765E6BDD36348422148E9164397D1CCC8140_RuntimeMethod_var)));
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.implementation.WebGL.WebSocket::Close(NativeWebSocket.WebSocketCloseCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Close_m425002A03CCAB65B9DB8A5F90143949A9A363F6D (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, int32_t ___code0, String_t* ___reason1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___instanceId_0;
		int32_t L_1 = ___code0;
		String_t* L_2 = ___reason1;
		int32_t L_3;
		L_3 = WebSocket_WebSocketClose_mFA7A9B9B7D157DF3DAA8AE8ED64E169970273C76(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_5 = V_0;
		WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* L_6;
		L_6 = WebSocketHelpers_GetErrorMessageFromCode_mB6BCBD83B6BE88E2B94E25CE1580001BF6D5F268(L_5, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Close_m425002A03CCAB65B9DB8A5F90143949A9A363F6D_RuntimeMethod_var)));
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.implementation.WebGL.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Send_mE52DC299506D9D2EEFAC86624F522901D4856378 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___instanceId_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = WebSocket_WebSocketSend_m1EE5156EDF7BA82236060C856D4D548AB77226B2(L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_5 = V_0;
		WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* L_6;
		L_6 = WebSocketHelpers_GetErrorMessageFromCode_mB6BCBD83B6BE88E2B94E25CE1580001BF6D5F268(L_5, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Send_mE52DC299506D9D2EEFAC86624F522901D4856378_RuntimeMethod_var)));
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.implementation.WebGL.WebSocket::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_SendText_m23A0321981365AF4EB400A5F1E9EA536644EB27F (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___instanceId_0;
		String_t* L_1 = ___message0;
		int32_t L_2;
		L_2 = WebSocket_WebSocketSendText_m5C4C9C264066A6CC08A48DC9ABCB306665078DFF(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = V_0;
		WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* L_5;
		L_5 = WebSocketHelpers_GetErrorMessageFromCode_mB6BCBD83B6BE88E2B94E25CE1580001BF6D5F268(L_4, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_SendText_m23A0321981365AF4EB400A5F1E9EA536644EB27F_RuntimeMethod_var)));
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_6;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::DispatchMessageQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DispatchMessageQueue_mCCE5BEE1BFC61EFE8D191366782480D573FB9353 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// NativeWebSocket.WebSocketState NativeWebSocket.implementation.WebGL.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_mD54AD2A8CBE7EE50DFECA69D6A428052E0AA3F19 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___instanceId_0;
		int32_t L_1;
		L_1 = WebSocket_WebSocketGetState_m1BE8011A7C49A28CE3EED0BB6FE8428E0016CD49(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = V_0;
		WebSocketException_t0F2D023349DF8288C6B80FD7CAFCA217C19581C9* L_4;
		L_4 = WebSocketHelpers_GetErrorMessageFromCode_mB6BCBD83B6BE88E2B94E25CE1580001BF6D5F268(L_3, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_get_State_mD54AD2A8CBE7EE50DFECA69D6A428052E0AA3F19_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_0038;
	}

IL_0030:
	{
		return (int32_t)(0);
	}

IL_0032:
	{
		return (int32_t)(1);
	}

IL_0034:
	{
		return (int32_t)(2);
	}

IL_0036:
	{
		return (int32_t)(3);
	}

IL_0038:
	{
		return (int32_t)(3);
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::DelegateOnOpenEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnOpenEvent_m01F057BCB76F30B1C32165347729801E4B383E20 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_U3CDelegateOnOpenEventU3Eb__33_0_mEA99F99680FFA685F6B365E6902B07462F2583B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* G_B2_0 = NULL;
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)WebSocket_U3CDelegateOnOpenEventU3Eb__33_0_mEA99F99680FFA685F6B365E6902B07462F2583B2_RuntimeMethod_var), NULL);
		MainThreadUtil_Run_mB9CE68E525B9FB1281A12F9331948AB47B0CFF4D(L_0, NULL);
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_1 = __this->___OnOpen_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		NullCheck(G_B2_0);
		WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_inline(G_B2_0, NULL);
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::DelegateOnMessageEvent(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnMessageEvent_mC51FC018BEDDC2826D0388BD61BF9C351E7737DB (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* G_B2_0 = NULL;
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* G_B1_0 = NULL;
	{
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_0 = __this->___OnMessage_2;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		NullCheck(G_B2_0);
		WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_inline(G_B2_0, L_2, NULL);
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::DelegateOnErrorEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnErrorEvent_m1A975C486B834823D967506B6E7DCFEF1A5C0455 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, String_t* ___errorMsg0, const RuntimeMethod* method) 
{
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* G_B2_0 = NULL;
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* G_B1_0 = NULL;
	{
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_0 = __this->___OnError_3;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___errorMsg0;
		NullCheck(G_B2_0);
		WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_inline(G_B2_0, L_2, NULL);
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::DelegateOnCloseEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnCloseEvent_m191E0E27F25B3005371253B960F0FC5A1F165AE0 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, int32_t ___closeCode0, const RuntimeMethod* method) 
{
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* G_B2_0 = NULL;
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* G_B1_0 = NULL;
	{
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_0 = __this->___OnClose_4;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___closeCode0;
		int32_t L_3;
		L_3 = WebSocketHelpers_ParseCloseCodeEnum_m4C5375A8031685C82674FBB43B572CC5831926D5(L_2, NULL);
		NullCheck(G_B2_0);
		WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_inline(G_B2_0, L_3, NULL);
		return;
	}
}
// System.Void NativeWebSocket.implementation.WebGL.WebSocket::<DelegateOnOpenEvent>b__33_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_U3CDelegateOnOpenEventU3Eb__33_0_mEA99F99680FFA685F6B365E6902B07462F2583B2 (WebSocket_t71E11E66B04F442F31A7573BE67593C343525EE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = __this->____connectionTask_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B(L_0, NULL, TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
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
// NativeWebSocket.implementation.NoWebGL.WebSocket NativeWebSocket.implementation.NoWebGL.WebSocketFactory::CreateInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* WebSocketFactory_CreateInstance_m2AB0BA8847CF0F3994475F7BFC67D276B55C2CF7 (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___url0;
		WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* L_1 = (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55*)il2cpp_codegen_object_new(WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WebSocket__ctor_m83FF0718C314AC7DCB8BC4F7DE043F2ABECAE681(L_1, L_0, NULL);
		return L_1;
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
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_m7F0A163BE994A7CE6EEC5B17C46C2460C2975143 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* V_0 = NULL;
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* V_1 = NULL;
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* V_2 = NULL;
	{
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_0 = __this->___OnOpen_0;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_2 = V_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7** L_5 = (&__this->___OnOpen_0);
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_6 = V_2;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_7 = V_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_9 = V_0;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::remove_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnOpen_m51F9D88F286F2757ADD9FD691F0EAC0A2479AB70 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* V_0 = NULL;
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* V_1 = NULL;
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* V_2 = NULL;
	{
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_0 = __this->___OnOpen_0;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_2 = V_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7** L_5 = (&__this->___OnOpen_0);
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_6 = V_2;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_7 = V_1;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_9 = V_0;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::add_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_mB5F01BA50FCA8963924F6DCC3DCF18EB7277EFAB (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* V_0 = NULL;
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* V_1 = NULL;
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* V_2 = NULL;
	{
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_0 = __this->___OnMessage_1;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_2 = V_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE** L_5 = (&__this->___OnMessage_1);
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_6 = V_2;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_7 = V_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_9 = V_0;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::remove_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnMessage_mD3349F39C0F980A16234084F6E2D6E976B9BF268 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* V_0 = NULL;
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* V_1 = NULL;
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* V_2 = NULL;
	{
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_0 = __this->___OnMessage_1;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_2 = V_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE** L_5 = (&__this->___OnMessage_1);
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_6 = V_2;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_7 = V_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_9 = V_0;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::add_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_m0A7BC99BA3D029A4010FABE2226D6C51A58D8E63 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* V_0 = NULL;
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* V_1 = NULL;
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* V_2 = NULL;
	{
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_0 = __this->___OnError_2;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_2 = V_1;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1** L_5 = (&__this->___OnError_2);
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_6 = V_2;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_7 = V_1;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_9 = V_0;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::remove_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnError_mD06EAA518B0DEB1EB4B0006200A903ACD6B38637 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* V_0 = NULL;
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* V_1 = NULL;
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* V_2 = NULL;
	{
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_0 = __this->___OnError_2;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_2 = V_1;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1** L_5 = (&__this->___OnError_2);
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_6 = V_2;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_7 = V_1;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_9 = V_0;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m0510AF316BD60C4C135E76F6090B369ED1D028EC (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* V_0 = NULL;
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* V_1 = NULL;
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* V_2 = NULL;
	{
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_0 = __this->___OnClose_3;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_2 = V_1;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13** L_5 = (&__this->___OnClose_3);
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_6 = V_2;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_7 = V_1;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_9 = V_0;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::remove_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnClose_m3ACCE8808D8E81A8D5D5422A3A9DFD7AD3FE0254 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* V_0 = NULL;
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* V_1 = NULL;
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* V_2 = NULL;
	{
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_0 = __this->___OnClose_3;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_2 = V_1;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13** L_5 = (&__this->___OnClose_3);
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_6 = V_2;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_7 = V_1;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_9 = V_0;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m83FF0718C314AC7DCB8BC4F7DE043F2ABECAE681 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, String_t* ___uri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		__this->___m_MessageList_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MessageList_7), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->___IncomingMessageLock_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IncomingMessageLock_8), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_2 = ___uri0;
		__this->___websocketUrl_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___websocketUrl_5), (void*)L_2);
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m2D1CF26422D415084B71F14DD27BBD8DFFEA83C7 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, String_t* ___uri0, String_t* ___subprotocol1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		__this->___m_MessageList_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MessageList_7), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->___IncomingMessageLock_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IncomingMessageLock_8), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_2 = ___uri0;
		__this->___websocketUrl_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___websocketUrl_5), (void*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5 = ___subprotocol1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		__this->___subprotocols_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subprotocols_6), (void*)L_4);
		return;
	}
}
// NativeWebSocket.WebSocketState NativeWebSocket.implementation.NoWebGL.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_mE1973AD6C18B6A9769569372BDA318C6F31FE179 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* L_0 = __this->___sharpWebSocket_4;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (int32_t)(4);
	}

IL_000a:
	{
		WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* L_1 = __this->___sharpWebSocket_4;
		NullCheck(L_1);
		uint16_t L_2;
		L_2 = WebSocket_get_ReadyState_m65E78C481175718F99775825586709ACE891EAF3(L_1, NULL);
		V_0 = L_2;
		uint16_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0032;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_0038;
			}
			case 4:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_0032:
	{
		return (int32_t)(0);
	}

IL_0034:
	{
		return (int32_t)(0);
	}

IL_0036:
	{
		return (int32_t)(1);
	}

IL_0038:
	{
		return (int32_t)(2);
	}

IL_003a:
	{
		return (int32_t)(3);
	}

IL_003c:
	{
		return (int32_t)(3);
	}
}
// System.Threading.Tasks.Task NativeWebSocket.implementation.NoWebGL.WebSocket::Connect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Connect_mFEEA561C32E9A0B06E12B519AFC5DE4AB1EEE87E (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, bool ___awaitConnection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t011D6A9F3944F82F2146438E79391DBC343A801E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t036451F69EBAA973E2E51BC964AA0FB614025C4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t41A73EC8BDB892BCF0AB6B6004774F0BDB8D3065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__0_m864C8AD61754FA4D646B95BDAA3FA2EF01E00B31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__1_m07E0C59D2731DFAE2420772DB1E1BC2FDBAC249C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__2_m4CCD91037D1232DBE5A92B2FBACA3E8DA376F41D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__3_m89335D72A8631F155DD99B8A615443196A030599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* L_0 = (U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass21_0__ctor_m3045978DF293D0434E20A2AD323362EEF30441C3(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* L_2 = V_0;
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_3 = (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)il2cpp_codegen_object_new(TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60(L_3, TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___connectionTask_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___connectionTask_0), (void*)L_3);
		String_t* L_4 = __this->___websocketUrl_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___subprotocols_6;
		WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* L_6 = (WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C*)il2cpp_codegen_object_new(WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WebSocket__ctor_m6EA8DE0A65122F6AF8C1FB5881953054844460CD(L_6, L_4, L_5, NULL);
		__this->___sharpWebSocket_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharpWebSocket_4), (void*)L_6);
		WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* L_7 = __this->___sharpWebSocket_4;
		U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* L_8 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__0_m864C8AD61754FA4D646B95BDAA3FA2EF01E00B31_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		WebSocket_add_OnOpen_mB53281A381E1BC513222B421076B54C9264A450B(L_7, L_9, NULL);
		WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* L_10 = __this->___sharpWebSocket_4;
		U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* L_11 = V_0;
		EventHandler_1_t41A73EC8BDB892BCF0AB6B6004774F0BDB8D3065* L_12 = (EventHandler_1_t41A73EC8BDB892BCF0AB6B6004774F0BDB8D3065*)il2cpp_codegen_object_new(EventHandler_1_t41A73EC8BDB892BCF0AB6B6004774F0BDB8D3065_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		EventHandler_1__ctor_m31570F839D1B4718D0A6B1665D6BD8337B77230D(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__1_m07E0C59D2731DFAE2420772DB1E1BC2FDBAC249C_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		WebSocket_add_OnMessage_mED655F2D2ECCB16BB1BA39A948841FEDC9432ECC(L_10, L_12, NULL);
		WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* L_13 = __this->___sharpWebSocket_4;
		U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* L_14 = V_0;
		EventHandler_1_t036451F69EBAA973E2E51BC964AA0FB614025C4C* L_15 = (EventHandler_1_t036451F69EBAA973E2E51BC964AA0FB614025C4C*)il2cpp_codegen_object_new(EventHandler_1_t036451F69EBAA973E2E51BC964AA0FB614025C4C_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventHandler_1__ctor_mCC4319C9795F75B3999BB6529D72F4A2611B1FF5(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__2_m4CCD91037D1232DBE5A92B2FBACA3E8DA376F41D_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		WebSocket_add_OnClose_mC10D165020370A38A29386070E64E6D7695CDCE0(L_13, L_15, NULL);
		WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* L_16 = __this->___sharpWebSocket_4;
		U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* L_17 = V_0;
		EventHandler_1_t011D6A9F3944F82F2146438E79391DBC343A801E* L_18 = (EventHandler_1_t011D6A9F3944F82F2146438E79391DBC343A801E*)il2cpp_codegen_object_new(EventHandler_1_t011D6A9F3944F82F2146438E79391DBC343A801E_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		EventHandler_1__ctor_m7BAC7007A4758B129E9D565D13CF295D3BA0D24A(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__3_m89335D72A8631F155DD99B8A615443196A030599_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		WebSocket_add_OnError_mC01276ABBBCFE9F49730B13692E8EE49620B66EF(L_16, L_18, NULL);
		WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* L_19 = __this->___sharpWebSocket_4;
		NullCheck(L_19);
		WebSocket_ConnectAsync_m71B63FD252A9661EAA866B4A4F7DFDCB438DEE2E(L_19, NULL);
		bool L_20 = ___awaitConnection0;
		if (L_20)
		{
			goto IL_009f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_21;
		L_21 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_21;
	}

IL_009f:
	{
		U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* L_22 = V_0;
		NullCheck(L_22);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_23 = L_22->___connectionTask_0;
		NullCheck(L_23);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_24;
		L_24 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(L_23, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		return L_24;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.implementation.NoWebGL.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Close_m078963F7541EE2EA3016C73C2B034B89379EA563 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* L_0 = __this->___sharpWebSocket_4;
		NullCheck(L_0);
		WebSocket_Close_m717A916D71EB8DA2B940CE3A1F910961270396AA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.implementation.NoWebGL.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Send_mA9E5DF00D971D73C30B2186B44177229EA9BC325 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* L_0 = __this->___sharpWebSocket_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		NullCheck(L_0);
		WebSocket_Send_mA13A25F8E6DA3D0585104524E2399D706DE2538B(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.implementation.NoWebGL.WebSocket::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_SendText_m675B86B1B23793D8CEA859F64EED11D061D0F824 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocket_t14BF4D314E0C236502942A07A2B1FEF59172D28C* L_0 = __this->___sharpWebSocket_4;
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		WebSocket_Send_mAACDCC139AA89F7F916DF380ED8F80C48E7142DE(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_2;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket::DispatchMessageQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DispatchMessageQueue_m1DB6AF162374AD3A8A8878446A3AFA7A9F7142A2 (WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* G_B10_0 = NULL;
	WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* G_B9_0 = NULL;
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_MessageList_7;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_0, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		RuntimeObject* L_2 = __this->___IncomingMessageLock_8;
		V_2 = L_2;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_3;
					if (!L_3)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_5 = V_2;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_3), NULL);
			List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_MessageList_7;
			List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_7 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E(L_7, L_6, List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E_RuntimeMethod_var);
			V_0 = L_7;
			List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_8 = __this->___m_MessageList_7;
			NullCheck(L_8);
			List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_inline(L_8, List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_RuntimeMethod_var);
			goto IL_0042;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_9, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		V_1 = L_10;
		V_4 = 0;
		goto IL_006d;
	}

IL_004e:
	{
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_11 = __this->___OnMessage_1;
		WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* L_12 = L_11;
		G_B9_0 = L_12;
		if (L_12)
		{
			G_B10_0 = L_12;
			goto IL_005a;
		}
	}
	{
		goto IL_0067;
	}

IL_005a:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_13 = V_0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6(L_13, L_14, List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
		NullCheck(G_B10_0);
		WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_inline(G_B10_0, L_15, NULL);
	}

IL_0067:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_006d:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_004e;
		}
	}
	{
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
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m3045978DF293D0434E20A2AD323362EEF30441C3 (U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket/<>c__DisplayClass21_0::<Connect>b__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__0_m864C8AD61754FA4D646B95BDAA3FA2EF01E00B31 (U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* G_B2_0 = NULL;
	WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* G_B1_0 = NULL;
	{
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = __this->___connectionTask_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B(L_0, NULL, TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
		WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* L_2 = __this->___U3CU3E4__this_1;
		NullCheck(L_2);
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_3 = L_2->___OnOpen_0;
		WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		NullCheck(G_B2_0);
		WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_inline(G_B2_0, NULL);
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket/<>c__DisplayClass21_0::<Connect>b__1(System.Object,WebSocketSharp.MessageEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__1_m07E0C59D2731DFAE2420772DB1E1BC2FDBAC249C (U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* __this, RuntimeObject* ___sender0, MessageEventArgs_t8D441959C71C2C2F63301CA26EEDB385A62ABC11* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1 = L_0->___m_MessageList_7;
		MessageEventArgs_t8D441959C71C2C2F63301CA26EEDB385A62ABC11* L_2 = ___args1;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = MessageEventArgs_get_RawData_m6E034E82C47E60CF865AE152EAECC0435D5D7C7F(L_2, NULL);
		NullCheck(L_1);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_1, L_3, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket/<>c__DisplayClass21_0::<Connect>b__2(System.Object,WebSocketSharp.CloseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__2_m4CCD91037D1232DBE5A92B2FBACA3E8DA376F41D (U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* __this, RuntimeObject* ___sender0, CloseEventArgs_t99E465F52826923F4A69119F09CD9F35EA79746F* ___args1, const RuntimeMethod* method) 
{
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* G_B2_0 = NULL;
	WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* G_B1_0 = NULL;
	{
		WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_1 = L_0->___OnClose_3;
		WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		CloseEventArgs_t99E465F52826923F4A69119F09CD9F35EA79746F* L_3 = ___args1;
		NullCheck(L_3);
		uint16_t L_4;
		L_4 = CloseEventArgs_get_Code_m193160AC3497114BE85F012713BB7BF8FF9E9DCC(L_3, NULL);
		int32_t L_5;
		L_5 = WebSocketHelpers_ParseCloseCodeEnum_m4C5375A8031685C82674FBB43B572CC5831926D5(L_4, NULL);
		NullCheck(G_B2_0);
		WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_inline(G_B2_0, L_5, NULL);
		return;
	}
}
// System.Void NativeWebSocket.implementation.NoWebGL.WebSocket/<>c__DisplayClass21_0::<Connect>b__3(System.Object,WebSocketSharp.ErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CConnectU3Eb__3_m89335D72A8631F155DD99B8A615443196A030599 (U3CU3Ec__DisplayClass21_0_t81C1E8C5451DC7E61AC4CC00A3A752278DCF93ED* __this, RuntimeObject* ___sender0, ErrorEventArgs_t1C045182DD81E1C8F01FC407723BF179A74AD33C* ___args1, const RuntimeMethod* method) 
{
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* G_B2_0 = NULL;
	WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* G_B1_0 = NULL;
	{
		WebSocket_tBE2FF91F6E97501349A30C4DA0CF8C14EC49FC55* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_1 = L_0->___OnError_2;
		WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		ErrorEventArgs_t1C045182DD81E1C8F01FC407723BF179A74AD33C* L_3 = ___args1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ErrorEventArgs_get_Message_mBA8163EDA3CEBC93A37A8026B4E70D6AD27C4556(L_3, NULL);
		NullCheck(G_B2_0);
		WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_inline(G_B2_0, L_4, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* MainThreadUtil_get_Instance_mBA97B8479B0030AA8D40ECD0E913974C100B0637_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* L_0 = ((MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mC4CA0A9F1B4F1647106A6EA26DF6C8155648084C_inline (MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC* L_0 = ___value0;
		((MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_m1524E2CC2EA4CEB88C13FBAD6E8B3F59D2C76AF6_inline (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___value0;
		((MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* MainThreadUtil_get_synchronizationContext_m13349C21F8C279BF70B2430B5F3C055C218CA592_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tD6E790915B75506EFFD174D01BD840DD274A82DC_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_m42D4A891E07CD3F61C073EE92C59438885CCD7CC_inline (MainThreadAwaiter_tE54C561E83F5553B72814275A80336F6E41FB59C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsCompletedU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_mD45BE8062ACC393C626048A46373A8A7F0047919_inline (WebSocketOpenEventHandler_tE33B09539332D9CA3718829A2A7073CFF2A3C3F7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_m495A880853359118D1675CC73D8CA07E8ED80877_inline (WebSocketMessageEventHandler_t6793AC01D92EE1B8DD6CFD170FE673FEEF48B8CE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mE9DE2B17D3BA716B3C53B1C3D4F09A810BD86700_inline (WebSocketErrorEventHandler_tFB5B488E5AE419671F6F5F39E24B1C7680832BB1* __this, String_t* ___errorMsg0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___errorMsg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_mA6BD741EBA86AAECB0F18600A8A923705C571A53_inline (WebSocketCloseEventHandler_t3C86BEA9F202B04A134353ED965ABB75CBB0EB13* __this, int32_t ___closeCode0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___closeCode0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
