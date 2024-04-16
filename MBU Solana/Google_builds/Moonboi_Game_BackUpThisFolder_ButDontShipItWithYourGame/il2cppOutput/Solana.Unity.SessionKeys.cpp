#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// Solana.Unity.Programs.Models.AccountResultWrapper`1<System.Object>
struct AccountResultWrapper_1_t83675F153F8740FC4891555830129D31F32AE6DB;
// Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>
struct AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>
struct Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58;
// System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>
struct Action_3_t6C8812636092E736BCFFC8C67B0790F3B2F04D53;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>>
struct Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A;
// System.EventHandler`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionEvent>
struct EventHandler_1_t9AC229760B9490681DC11804AD73AD6526CBD64B;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<Solana.Unity.Rpc.Models.AccountKeyPair,Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>
struct Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]>
struct Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513;
// System.Collections.Generic.IEnumerable`1<Solana.Unity.Rpc.Models.AccountKeyPair>
struct IEnumerable_1_tCF0482F497CCD6B4F5F4691A71BEEAA7093A87D9;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>
struct IEnumerable_1_tC6E75C6C58963F41465364AD18E8FF9812F073DD;
// System.Collections.Generic.IEqualityComparer`1<System.UInt32>
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
// System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.AccountMeta>
struct IList_1_t9A5C9737E26A667715B960D3844A419275F5807B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>>
struct KeyCollection_t76AED03A40C89C6E8C763E6B4962B6B477C97A85;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>
struct List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195;
// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountMeta>
struct List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25;
// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.MemCmp>
struct List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>
struct List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>
struct ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F;
// Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Object>
struct ProgramAccountsResultWrapper_1_t2E23C3EEE04E0082AE901B603A75F7E3A4991CB8;
// Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>
struct ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971;
// Solana.Unity.Programs.Abstract.ProgramError`1<System.UInt32Enum>
struct ProgramError_1_t0BE0C8160EB8E3AD22D8F5E65405DB9720DB7159;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>
struct RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>
struct RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Object>
struct RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>
struct RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2;
// Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>
struct ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195;
// Solana.Unity.Rpc.Messages.ResponseValue`1<System.Object>
struct ResponseValue_1_t8663D687999D2DEE6072DDA9FD2059BBDE351512;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>
struct TaskFactory_1_t1189F125E74EC22A0B4894683835C7305ED1CA5F;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>>
struct TaskFactory_1_t069BF17B6FEF47DE4E10D44509858609D0D7AA8F;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>
struct TaskFactory_1_t1520ECA0306439B4A27571EFD01BE60EF1F68D2E;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>>
struct TaskFactory_1_t2C549A1BAA259E2D1102F7A646047EEC25C8BF6C;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>
struct TaskFactory_1_tCEEA6255AC75CD14CEB27326ECAE7A87FEE55EDE;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>
struct TaskFactory_1_tD42A16C5814A88CB41DB7C51B62713FC83E5F356;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>
struct Task_1_t7CCD5E02241B5B4D337AD5C44183A886C3AA2477;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>>
struct Task_1_tE2E6CAD2385016525B6773292A5525A74DDF3D9F;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>
struct Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>>
struct Task_1_tAE0F086D94E32A64042E1266C16B5533DD50865C;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>
struct Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>
struct Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5;
// Solana.Unity.Programs.Abstract.TransactionalBaseClient`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>
struct TransactionalBaseClient_1_t333BCAB862201CE6C201DA46079682C814BBF884;
// Solana.Unity.Programs.Abstract.TransactionalBaseClient`1<System.UInt32Enum>
struct TransactionalBaseClient_1_t4FFA641AF272BE598783919208D86E4ECD125DE6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>>
struct ValueCollection_t4B4ECB9F3539C454978C02951293A8F7B3FE59D2;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>>[]
struct EntryU5BU5D_tF31A4E3360B968E077D746452F98590E11748B16;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// Solana.Unity.Rpc.Models.AccountKeyPair[]
struct AccountKeyPairU5BU5D_t884C044806436E77EC51B836E2F1FE557ADBAA04;
// Solana.Unity.Rpc.Models.AccountMeta[]
struct AccountMetaU5BU5D_t2EF33B747B434F719379E7E87EBB631A70F9C27A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Solana.Unity.Rpc.Models.MemCmp[]
struct MemCmpU5BU5D_t37715F75E6CC94F2F96499EC5F16555BE6A852DF;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken[]
struct SessionTokenU5BU5D_t1987D7780D6DDEF07E51780F6FCF79509AA0F544;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Solana.Unity.Rpc.Models.AccountInfo
struct AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D;
// Solana.Unity.Rpc.Models.AccountKeyPair
struct AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C;
// Solana.Unity.Rpc.Models.AccountMeta
struct AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Solana.Unity.Programs.Abstract.BaseClient
struct BaseClient_t17729739896F3595EC6D20C2273EA5558597A030;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Solana.Unity.Rpc.Messages.ContextObj
struct ContextObj_t20CBAD0294B1CE430341642034DBC6207DABD526;
// Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts
struct CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Solana.Unity.Rpc.Models.ErrorData
struct ErrorData_t49373BB7C78A299593CF1FF546FFB3DCC8A9E5B8;
// System.Exception
struct Exception_t;
// Solana.Unity.SessionKeys.GplSession.GplSessionClient
struct GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Solana.Unity.Rpc.IRpcClient
struct IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE;
// Solana.Unity.Rpc.IStreamingRpcClient
struct IStreamingRpcClient_tD95D1830E2CE0EFC8A302FAC12CC93BAC7C76B3C;
// Solana.Unity.Rpc.Messages.JsonRpcRequest
struct JsonRpcRequest_t65BD1C3872CC7A9681196B11DFEE7018121E4E18;
// Solana.Unity.Rpc.Models.MemCmp
struct MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Solana.Unity.Wallet.PublicKey
struct PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751;
// Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts
struct RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken
struct SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// Solana.Unity.Rpc.Core.Sockets.SubscriptionState
struct SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Solana.Unity.Rpc.Models.TransactionInstruction
struct TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c
struct U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498;
// Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStreamingRpcClient_tD95D1830E2CE0EFC8A302FAC12CC93BAC7C76B3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral080660E8EAAF1265B4149510A09EC2C67B2F6EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral1A9C4D54493AF268DF4091287D15288BC89DAFF2;
IL2CPP_EXTERN_C String_t* _stringLiteral3BB2E526ED1FB378E7D5E024906EB5B93912DBCE;
IL2CPP_EXTERN_C String_t* _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9C39B3CEB153B3DAD54710F463B8C83E202AB9;
IL2CPP_EXTERN_C String_t* _stringLiteralE8DD721CBCB1D209D42A056FD00504980C06199D;
IL2CPP_EXTERN_C const RuntimeMethod* AccountResultWrapper_1__ctor_m6B4B7BAE3D499B1ABBB36DB95FF3D10410876DDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AccountResultWrapper_1__ctor_mA29E2C8D19D2D7663CB50C7E086FEF92615F736C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_mC0361D0ED1141D70C0BF707399BAA8FDC59BE7E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_mD01E246248CECB25CAD04D37EFE7E388CCAC1002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_mFE78B8E46442E8D0DB351C3DB53F63E270C26524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m90CE73C5150FD2D7320722109A348019497A62AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_m5041FD809550F4BA982862C815700448A3ABE571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m03F6030C9122DD31F6F0102260CB8160DB4F5064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4A6D286C83DED1D2D0FF2B20787981BAA487B661_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mB3CA0DB3A5FEA56E1660E7E5DFAEE17E2CF74CE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m01829C71FEE4E86E0689C4F2123123E4DCB16149_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m354526EADBE537610A7DD820B84C0E11BEBDC348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m4152D00F62EC46CA46A1940E5930F14B9C9F3F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m9452DEA20FF8B0AD63AD413F48523942F2746511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m4B1BCD2CBF4E4CD3EA481B227BDE61F1BE18E414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m7E2F22FF63B7BE4DDF8C66EE81F3A3085642940F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mA68B98820C7E725A7D7B56F24AE96BF3E95594E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m001F0C76FC83EB587A0A52E180CCB3C3D2B0ED39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m1972CD1BCF2A8C2ABA99BB6576B585927327A881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m431CBC5B021576614D9C4AC5116BAF16ED62997F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mDB0DA2405611EA318CB3B80C20A1FAB21A99D45E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_m96CE89C336C90C6E9783C711F5E967707D78EC74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m27020BCA939595C7404A2CB9D25FF0FB6FB695E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_m6FE2AA2938121E7EB3CD9965F46127E6CC63FA0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_m9C19CB7993091D5B5DAF089F54558C3E8A677A26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_mD34F0910C87349B476881AC4B450E63B35B070B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m381E2D457FEFD5A2D00F010D72D6BD8CF0E1CB0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m8C9078DA766448D8C7E9F40EA9E6D76E0D85A3E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mBF7AD640FE4FF3017117ED1233E73FE96D892B6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF741CB36CFA4748EE954F1136603426877F3D3D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m12B311A7CE7560C7A8645154E9ACFB89FD88714C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisAccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C_TisSessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B_mB48C0C7B23A378E89BAA1E59EACDA80E0106D252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m6210411B45B48D5C3423392569606601C95F553C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5D6820B282D9943BD9F12204D6E30CDA6CD7DC71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProgramAccountsResultWrapper_1__ctor_mF644BDF38386908BE52C75FF81D8EB35CE854D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProgramAccountsResultWrapper_1__ctor_mF7696745C086422417182629792F955BE4C83433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProgramError_1__ctor_m1E50015F694BCFCE104D4F926EEA75D4AC65B70F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_Result_m44384E02DBDFC630A0EF00A474F6306C4EF8E284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_WasSuccessful_m73B033D4E6C5FE4EDA7EA1F10EF1348BB4B8AC2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseValue_1_get_Value_m40090BF19C1D93C9F49111410206B38F25324017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m1B629E1D4201F90CA3B1CAFA7D91A9FB6D9C4274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mDDF5310FD39B9E64098A66F486A3861812DA7CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m0A514EAC59281A5D782DC63C36467FC10A80B4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m9A66C1463BBD26B3F6DDA4D062EAEE5BFDB4FF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m9DDB46E2832BAA75189781623AB95936A22896E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mBFBE25A25E4D2A7FF56168A1B599B76712061742_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransactionalBaseClient_1_SignAndSendTransaction_mC79B6168B497CFCF800DB12C115344DB9B7D95F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransactionalBaseClient_1__ctor_m2994709663EBBBC7FC615F6FC7363135EB63CA18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetSessionTokensAsyncU3Eb__1_0_mDAC24062999379D201A099EC0B24E329D5E94420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CSubscribeSessionTokenAsyncU3Eb__0_m1AD8CDA1CBE09FA569F8439EAE564771429FE02B_RuntimeMethod_var;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t99C5038D162F0595148BCC52DA733C3367169254_StaticFields____FF01D01BABDB0E95A0EED51619E30E889F1FD84F7917F83FA68D6D63B7258AD1_0_RVAStorage;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7948098E12016913BFD8234115583DF010C3AEF8 
{
};

// System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>>
struct Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF31A4E3360B968E077D746452F98590E11748B16* ____entries_1;
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
	KeyCollection_t76AED03A40C89C6E8C763E6B4962B6B477C97A85* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4B4ECB9F3539C454978C02951293A8F7B3FE59D2* ____values_8;
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

// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>
struct List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AccountKeyPairU5BU5D_t884C044806436E77EC51B836E2F1FE557ADBAA04* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AccountKeyPairU5BU5D_t884C044806436E77EC51B836E2F1FE557ADBAA04* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountMeta>
struct List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AccountMetaU5BU5D_t2EF33B747B434F719379E7E87EBB631A70F9C27A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AccountMetaU5BU5D_t2EF33B747B434F719379E7E87EBB631A70F9C27A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.MemCmp>
struct List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MemCmpU5BU5D_t37715F75E6CC94F2F96499EC5F16555BE6A852DF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MemCmpU5BU5D_t37715F75E6CC94F2F96499EC5F16555BE6A852DF* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>
struct List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SessionTokenU5BU5D_t1987D7780D6DDEF07E51780F6FCF79509AA0F544* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SessionTokenU5BU5D_t1987D7780D6DDEF07E51780F6FCF79509AA0F544* ___s_emptyArray_5;
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

// Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>
struct ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971  : public RuntimeObject
{
	// T Solana.Unity.Programs.Abstract.ProgramError`1::<ErrorKind>k__BackingField
	uint32_t ___U3CErrorKindU3Ek__BackingField_0;
	// System.String Solana.Unity.Programs.Abstract.ProgramError`1::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// System.UInt32 Solana.Unity.Programs.Abstract.ProgramError`1::<ErrorCode>k__BackingField
	uint32_t ___U3CErrorCodeU3Ek__BackingField_2;
};

// Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>
struct RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288  : public RuntimeObject
{
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasHttpRequestSuccessful>k__BackingField
	bool ___U3CWasHttpRequestSuccessfulU3Ek__BackingField_0;
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasRequestSuccessfullyHandled>k__BackingField
	bool ___U3CWasRequestSuccessfullyHandledU3Ek__BackingField_1;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<Reason>k__BackingField
	String_t* ___U3CReasonU3Ek__BackingField_2;
	// T Solana.Unity.Rpc.Core.Http.RequestResult`1::<Result>k__BackingField
	List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* ___U3CResultU3Ek__BackingField_3;
	// System.Net.HttpStatusCode Solana.Unity.Rpc.Core.Http.RequestResult`1::<HttpStatusCode>k__BackingField
	int32_t ___U3CHttpStatusCodeU3Ek__BackingField_4;
	// System.Int32 Solana.Unity.Rpc.Core.Http.RequestResult`1::<ServerErrorCode>k__BackingField
	int32_t ___U3CServerErrorCodeU3Ek__BackingField_5;
	// Solana.Unity.Rpc.Models.ErrorData Solana.Unity.Rpc.Core.Http.RequestResult`1::<ErrorData>k__BackingField
	ErrorData_t49373BB7C78A299593CF1FF546FFB3DCC8A9E5B8* ___U3CErrorDataU3Ek__BackingField_6;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcRequest>k__BackingField
	String_t* ___U3CRawRpcRequestU3Ek__BackingField_7;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcResponse>k__BackingField
	String_t* ___U3CRawRpcResponseU3Ek__BackingField_8;
};

// Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>
struct RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757  : public RuntimeObject
{
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasHttpRequestSuccessful>k__BackingField
	bool ___U3CWasHttpRequestSuccessfulU3Ek__BackingField_0;
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasRequestSuccessfullyHandled>k__BackingField
	bool ___U3CWasRequestSuccessfullyHandledU3Ek__BackingField_1;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<Reason>k__BackingField
	String_t* ___U3CReasonU3Ek__BackingField_2;
	// T Solana.Unity.Rpc.Core.Http.RequestResult`1::<Result>k__BackingField
	ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* ___U3CResultU3Ek__BackingField_3;
	// System.Net.HttpStatusCode Solana.Unity.Rpc.Core.Http.RequestResult`1::<HttpStatusCode>k__BackingField
	int32_t ___U3CHttpStatusCodeU3Ek__BackingField_4;
	// System.Int32 Solana.Unity.Rpc.Core.Http.RequestResult`1::<ServerErrorCode>k__BackingField
	int32_t ___U3CServerErrorCodeU3Ek__BackingField_5;
	// Solana.Unity.Rpc.Models.ErrorData Solana.Unity.Rpc.Core.Http.RequestResult`1::<ErrorData>k__BackingField
	ErrorData_t49373BB7C78A299593CF1FF546FFB3DCC8A9E5B8* ___U3CErrorDataU3Ek__BackingField_6;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcRequest>k__BackingField
	String_t* ___U3CRawRpcRequestU3Ek__BackingField_7;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcResponse>k__BackingField
	String_t* ___U3CRawRpcResponseU3Ek__BackingField_8;
};

// Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Object>
struct RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24  : public RuntimeObject
{
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasHttpRequestSuccessful>k__BackingField
	bool ___U3CWasHttpRequestSuccessfulU3Ek__BackingField_0;
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasRequestSuccessfullyHandled>k__BackingField
	bool ___U3CWasRequestSuccessfullyHandledU3Ek__BackingField_1;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<Reason>k__BackingField
	String_t* ___U3CReasonU3Ek__BackingField_2;
	// T Solana.Unity.Rpc.Core.Http.RequestResult`1::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_3;
	// System.Net.HttpStatusCode Solana.Unity.Rpc.Core.Http.RequestResult`1::<HttpStatusCode>k__BackingField
	int32_t ___U3CHttpStatusCodeU3Ek__BackingField_4;
	// System.Int32 Solana.Unity.Rpc.Core.Http.RequestResult`1::<ServerErrorCode>k__BackingField
	int32_t ___U3CServerErrorCodeU3Ek__BackingField_5;
	// Solana.Unity.Rpc.Models.ErrorData Solana.Unity.Rpc.Core.Http.RequestResult`1::<ErrorData>k__BackingField
	ErrorData_t49373BB7C78A299593CF1FF546FFB3DCC8A9E5B8* ___U3CErrorDataU3Ek__BackingField_6;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcRequest>k__BackingField
	String_t* ___U3CRawRpcRequestU3Ek__BackingField_7;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcResponse>k__BackingField
	String_t* ___U3CRawRpcResponseU3Ek__BackingField_8;
};

// Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>
struct RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2  : public RuntimeObject
{
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasHttpRequestSuccessful>k__BackingField
	bool ___U3CWasHttpRequestSuccessfulU3Ek__BackingField_0;
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasRequestSuccessfullyHandled>k__BackingField
	bool ___U3CWasRequestSuccessfullyHandledU3Ek__BackingField_1;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<Reason>k__BackingField
	String_t* ___U3CReasonU3Ek__BackingField_2;
	// T Solana.Unity.Rpc.Core.Http.RequestResult`1::<Result>k__BackingField
	String_t* ___U3CResultU3Ek__BackingField_3;
	// System.Net.HttpStatusCode Solana.Unity.Rpc.Core.Http.RequestResult`1::<HttpStatusCode>k__BackingField
	int32_t ___U3CHttpStatusCodeU3Ek__BackingField_4;
	// System.Int32 Solana.Unity.Rpc.Core.Http.RequestResult`1::<ServerErrorCode>k__BackingField
	int32_t ___U3CServerErrorCodeU3Ek__BackingField_5;
	// Solana.Unity.Rpc.Models.ErrorData Solana.Unity.Rpc.Core.Http.RequestResult`1::<ErrorData>k__BackingField
	ErrorData_t49373BB7C78A299593CF1FF546FFB3DCC8A9E5B8* ___U3CErrorDataU3Ek__BackingField_6;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcRequest>k__BackingField
	String_t* ___U3CRawRpcRequestU3Ek__BackingField_7;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcResponse>k__BackingField
	String_t* ___U3CRawRpcResponseU3Ek__BackingField_8;
};

// Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>
struct ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195  : public RuntimeObject
{
	// Solana.Unity.Rpc.Messages.ContextObj Solana.Unity.Rpc.Messages.ResponseValue`1::<Context>k__BackingField
	ContextObj_t20CBAD0294B1CE430341642034DBC6207DABD526* ___U3CContextU3Ek__BackingField_0;
	// T Solana.Unity.Rpc.Messages.ResponseValue`1::<Value>k__BackingField
	AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* ___U3CValueU3Ek__BackingField_1;
};

// Solana.Unity.Rpc.Messages.ResponseValue`1<System.Object>
struct ResponseValue_1_t8663D687999D2DEE6072DDA9FD2059BBDE351512  : public RuntimeObject
{
	// Solana.Unity.Rpc.Messages.ContextObj Solana.Unity.Rpc.Messages.ResponseValue`1::<Context>k__BackingField
	ContextObj_t20CBAD0294B1CE430341642034DBC6207DABD526* ___U3CContextU3Ek__BackingField_0;
	// T Solana.Unity.Rpc.Messages.ResponseValue`1::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};

// Solana.Unity.Programs.Models.ResultWrapper`2<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>,System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>
struct ResultWrapper_2_t611E0B975E708AC775A6E742AE3FC66FB9CF7445  : public RuntimeObject
{
	// Solana.Unity.Rpc.Core.Http.RequestResult`1<T> Solana.Unity.Programs.Models.ResultWrapper`2::<OriginalRequest>k__BackingField
	RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* ___U3COriginalRequestU3Ek__BackingField_0;
	// T2 Solana.Unity.Programs.Models.ResultWrapper`2::<ParsedResult>k__BackingField
	List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF* ___U3CParsedResultU3Ek__BackingField_1;
};

// Solana.Unity.Programs.Models.ResultWrapper`2<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>
struct ResultWrapper_2_tC5C32F22E943FADC66E9571E7B90882C12C05563  : public RuntimeObject
{
	// Solana.Unity.Rpc.Core.Http.RequestResult`1<T> Solana.Unity.Programs.Models.ResultWrapper`2::<OriginalRequest>k__BackingField
	RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___U3COriginalRequestU3Ek__BackingField_0;
	// T2 Solana.Unity.Programs.Models.ResultWrapper`2::<ParsedResult>k__BackingField
	SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* ___U3CParsedResultU3Ek__BackingField_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t99C5038D162F0595148BCC52DA733C3367169254  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t99C5038D162F0595148BCC52DA733C3367169254_StaticFields
{
	// System.Int64 <PrivateImplementationDetails>::FF01D01BABDB0E95A0EED51619E30E889F1FD84F7917F83FA68D6D63B7258AD1
	int64_t ___FF01D01BABDB0E95A0EED51619E30E889F1FD84F7917F83FA68D6D63B7258AD1_0;
};

// Solana.Unity.Rpc.Models.AccountInfoBase
struct AccountInfoBase_t1D3349589317F053FAC79A6C7FFDEB72B347210B  : public RuntimeObject
{
	// System.UInt64 Solana.Unity.Rpc.Models.AccountInfoBase::<Lamports>k__BackingField
	uint64_t ___U3CLamportsU3Ek__BackingField_0;
	// System.String Solana.Unity.Rpc.Models.AccountInfoBase::<Owner>k__BackingField
	String_t* ___U3COwnerU3Ek__BackingField_1;
	// System.Boolean Solana.Unity.Rpc.Models.AccountInfoBase::<Executable>k__BackingField
	bool ___U3CExecutableU3Ek__BackingField_2;
	// System.UInt64 Solana.Unity.Rpc.Models.AccountInfoBase::<RentEpoch>k__BackingField
	uint64_t ___U3CRentEpochU3Ek__BackingField_3;
};

// Solana.Unity.Rpc.Models.AccountKeyPair
struct AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C  : public RuntimeObject
{
	// Solana.Unity.Rpc.Models.AccountInfo Solana.Unity.Rpc.Models.AccountKeyPair::<Account>k__BackingField
	AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* ___U3CAccountU3Ek__BackingField_0;
	// System.String Solana.Unity.Rpc.Models.AccountKeyPair::<PublicKey>k__BackingField
	String_t* ___U3CPublicKeyU3Ek__BackingField_1;
};

// Solana.Unity.Rpc.Models.AccountMeta
struct AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F  : public RuntimeObject
{
	// System.Byte[] Solana.Unity.Rpc.Models.AccountMeta::<PublicKeyBytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CPublicKeyBytesU3Ek__BackingField_0;
	// System.String Solana.Unity.Rpc.Models.AccountMeta::<PublicKey>k__BackingField
	String_t* ___U3CPublicKeyU3Ek__BackingField_1;
	// System.Boolean Solana.Unity.Rpc.Models.AccountMeta::<IsSigner>k__BackingField
	bool ___U3CIsSignerU3Ek__BackingField_2;
	// System.Boolean Solana.Unity.Rpc.Models.AccountMeta::<IsWritable>k__BackingField
	bool ___U3CIsWritableU3Ek__BackingField_3;
};
struct Il2CppArrayBounds;

// Solana.Unity.Programs.Abstract.BaseClient
struct BaseClient_t17729739896F3595EC6D20C2273EA5558597A030  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Abstract.BaseClient::<ProgramIdKey>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CProgramIdKeyU3Ek__BackingField_0;
	// Solana.Unity.Rpc.IRpcClient Solana.Unity.Programs.Abstract.BaseClient::<RpcClient>k__BackingField
	RuntimeObject* ___U3CRpcClientU3Ek__BackingField_1;
	// Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.Programs.Abstract.BaseClient::<StreamingRpcClient>k__BackingField
	RuntimeObject* ___U3CStreamingRpcClientU3Ek__BackingField_2;
};

// Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts
struct CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::<SessionToken>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CSessionTokenU3Ek__BackingField_0;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::<SessionSigner>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CSessionSignerU3Ek__BackingField_1;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::<Authority>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CAuthorityU3Ek__BackingField_2;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::<TargetProgram>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CTargetProgramU3Ek__BackingField_3;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::<SystemProgram>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CSystemProgramU3Ek__BackingField_4;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// Solana.Unity.SessionKeys.GplSession.Program.GplSessionProgram
struct GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A  : public RuntimeObject
{
};

struct GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_StaticFields
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.GplSessionProgram::ProgramIdKey
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___ProgramIdKey_0;
};

// Solana.Unity.Rpc.Models.MemCmp
struct MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689  : public RuntimeObject
{
	// System.Int32 Solana.Unity.Rpc.Models.MemCmp::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_0;
	// System.String Solana.Unity.Rpc.Models.MemCmp::<Bytes>k__BackingField
	String_t* ___U3CBytesU3Ek__BackingField_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Solana.Unity.Wallet.PublicKey
struct PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751  : public RuntimeObject
{
	// System.String Solana.Unity.Wallet.PublicKey::_key
	String_t* ____key_2;
	// System.Byte[] Solana.Unity.Wallet.PublicKey::_keyBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____keyBytes_3;
};

struct PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_StaticFields
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Wallet.PublicKey::DefaultPublicKey
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___DefaultPublicKey_1;
	// System.Byte[] Solana.Unity.Wallet.PublicKey::ProgramDerivedAddressBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ProgramDerivedAddressBytes_4;
};

// Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts
struct RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::<SessionToken>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CSessionTokenU3Ek__BackingField_0;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::<Authority>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CAuthorityU3Ek__BackingField_1;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::<SystemProgram>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CSystemProgramU3Ek__BackingField_2;
};

// Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken
struct SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::<Authority>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CAuthorityU3Ek__BackingField_0;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::<TargetProgram>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CTargetProgramU3Ek__BackingField_1;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::<SessionSigner>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CSessionSignerU3Ek__BackingField_2;
	// System.Int64 Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::<ValidUntil>k__BackingField
	int64_t ___U3CValidUntilU3Ek__BackingField_3;
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

// Solana.Unity.Rpc.Core.Sockets.SubscriptionState
struct SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8  : public RuntimeObject
{
	// Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.Rpc.Core.Sockets.SubscriptionState::_rpcClient
	RuntimeObject* ____rpcClient_0;
	// System.Int32 Solana.Unity.Rpc.Core.Sockets.SubscriptionState::<SubscriptionId>k__BackingField
	int32_t ___U3CSubscriptionIdU3Ek__BackingField_1;
	// Solana.Unity.Rpc.Core.Sockets.SubscriptionChannel Solana.Unity.Rpc.Core.Sockets.SubscriptionState::<Channel>k__BackingField
	int32_t ___U3CChannelU3Ek__BackingField_2;
	// Solana.Unity.Rpc.Core.Sockets.SubscriptionStatus Solana.Unity.Rpc.Core.Sockets.SubscriptionState::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// Solana.Unity.Rpc.Messages.JsonRpcRequest Solana.Unity.Rpc.Core.Sockets.SubscriptionState::Request
	JsonRpcRequest_t65BD1C3872CC7A9681196B11DFEE7018121E4E18* ___Request_4;
	// System.String Solana.Unity.Rpc.Core.Sockets.SubscriptionState::<LastError>k__BackingField
	String_t* ___U3CLastErrorU3Ek__BackingField_5;
	// System.String Solana.Unity.Rpc.Core.Sockets.SubscriptionState::<LastCode>k__BackingField
	String_t* ___U3CLastCodeU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<System.Object> Solana.Unity.Rpc.Core.Sockets.SubscriptionState::<AdditionalParameters>k__BackingField
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___U3CAdditionalParametersU3Ek__BackingField_7;
	// System.EventHandler`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionEvent> Solana.Unity.Rpc.Core.Sockets.SubscriptionState::SubscriptionChanged
	EventHandler_1_t9AC229760B9490681DC11804AD73AD6526CBD64B* ___SubscriptionChanged_8;
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

// Solana.Unity.Rpc.Models.TransactionInstruction
struct TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B  : public RuntimeObject
{
	// System.Byte[] Solana.Unity.Rpc.Models.TransactionInstruction::<ProgramId>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CProgramIdU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.AccountMeta> Solana.Unity.Rpc.Models.TransactionInstruction::<Keys>k__BackingField
	RuntimeObject* ___U3CKeysU3Ek__BackingField_1;
	// System.Byte[] Solana.Unity.Rpc.Models.TransactionInstruction::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_2;
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

// Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c
struct U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498  : public RuntimeObject
{
};

struct U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_StaticFields
{
	// Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c::<>9
	U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498* ___U3CU3E9_0;
	// System.Func`2<Solana.Unity.Rpc.Models.AccountKeyPair,Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c::<>9__1_0
	Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1* ___U3CU3E9__1_0_1;
};

// Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B  : public RuntimeObject
{
	// System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c__DisplayClass3_0::callback
	Action_3_t6C8812636092E736BCFFC8C67B0790F3B2F04D53* ___callback_0;
};

// Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>
struct AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B  : public ResultWrapper_2_tC5C32F22E943FADC66E9571E7B90882C12C05563
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>
struct ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F  : public ResultWrapper_2_t611E0B975E708AC775A6E742AE3FC66FB9CF7445
{
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>
struct TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>>
struct TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tAE0F086D94E32A64042E1266C16B5533DD50865C* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>
struct TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>
struct TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>
struct Task_1_t7CCD5E02241B5B4D337AD5C44183A886C3AA2477  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B* ___m_result_38;
};

struct Task_1_t7CCD5E02241B5B4D337AD5C44183A886C3AA2477_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t1189F125E74EC22A0B4894683835C7305ED1CA5F* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>>
struct Task_1_tE2E6CAD2385016525B6773292A5525A74DDF3D9F  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F* ___m_result_38;
};

struct Task_1_tE2E6CAD2385016525B6773292A5525A74DDF3D9F_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t069BF17B6FEF47DE4E10D44509858609D0D7AA8F* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>
struct Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* ___m_result_38;
};

struct Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t1520ECA0306439B4A27571EFD01BE60EF1F68D2E* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>>
struct Task_1_tAE0F086D94E32A64042E1266C16B5533DD50865C  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___m_result_38;
};

struct Task_1_tAE0F086D94E32A64042E1266C16B5533DD50865C_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t2C549A1BAA259E2D1102F7A646047EEC25C8BF6C* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>
struct Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* ___m_result_38;
};

struct Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tCEEA6255AC75CD14CEB27326ECAE7A87FEE55EDE* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>
struct Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* ___m_result_38;
};

struct Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tD42A16C5814A88CB41DB7C51B62713FC83E5F356* ___s_defaultFactory_39;
};

// Solana.Unity.Programs.Abstract.TransactionalBaseClient`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>
struct TransactionalBaseClient_1_t333BCAB862201CE6C201DA46079682C814BBF884  : public BaseClient_t17729739896F3595EC6D20C2273EA5558597A030
{
	// System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<TEnum>> Solana.Unity.Programs.Abstract.TransactionalBaseClient`1::<ProgramErrors>k__BackingField
	Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF* ___U3CProgramErrorsU3Ek__BackingField_3;
};

// Solana.Unity.Rpc.Models.AccountInfo
struct AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D  : public AccountInfoBase_t1D3349589317F053FAC79A6C7FFDEB72B347210B
{
	// System.Collections.Generic.List`1<System.String> Solana.Unity.Rpc.Models.AccountInfo::<Data>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CDataU3Ek__BackingField_4;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>
struct AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t7CCD5E02241B5B4D337AD5C44183A886C3AA2477* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t7CCD5E02241B5B4D337AD5C44183A886C3AA2477* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>>
struct AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE2E6CAD2385016525B6773292A5525A74DDF3D9F* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE2E6CAD2385016525B6773292A5525A74DDF3D9F* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>
struct AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>
struct AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5* ___s_defaultResultTask_0;
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
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

// Solana.Unity.SessionKeys.GplSession.GplSessionClient
struct GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3  : public TransactionalBaseClient_1_t333BCAB862201CE6C201DA46079682C814BBF884
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
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

// Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2
struct U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376 
{
	// System.Int32 Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::<>t__builder
	AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E ___U3CU3Et__builder_1;
	// Solana.Unity.SessionKeys.GplSession.GplSessionClient Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::<>4__this
	GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* ___U3CU3E4__this_2;
	// System.String Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::accountAddress
	String_t* ___accountAddress_3;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::commitment
	int32_t ___commitment_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::<>u__1
	TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378 ___U3CU3Eu__1_5;
};

// Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1
struct U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09 
{
	// System.Int32 Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::<>t__builder
	AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133 ___U3CU3Et__builder_1;
	// Solana.Unity.SessionKeys.GplSession.GplSessionClient Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::<>4__this
	GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* ___U3CU3E4__this_2;
	// System.String Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::programAddress
	String_t* ___programAddress_3;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::commitment
	int32_t ___commitment_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::<>u__1
	TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E ___U3CU3Eu__1_5;
};

// Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4
struct U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28 
{
	// System.Int32 Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::<>t__builder
	AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 ___U3CU3Et__builder_1;
	// Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::accounts
	CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* ___accounts_2;
	// System.Nullable`1<System.Boolean> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::topUp
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___topUp_3;
	// System.Nullable`1<System.Int64> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::validUntil
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___validUntil_4;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::programId
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId_5;
	// Solana.Unity.SessionKeys.GplSession.GplSessionClient Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::<>4__this
	GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* ___U3CU3E4__this_6;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::feePayer
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer_7;
	// System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::signingCallback
	Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* ___signingCallback_8;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::<>u__1
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 ___U3CU3Eu__1_9;
};

// Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5
struct U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6 
{
	// System.Int32 Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 ___U3CU3Et__builder_1;
	// Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::accounts
	RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* ___accounts_2;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::programId
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId_3;
	// Solana.Unity.SessionKeys.GplSession.GplSessionClient Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::<>4__this
	GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* ___U3CU3E4__this_4;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::feePayer
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer_5;
	// System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::signingCallback
	Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* ___signingCallback_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::<>u__1
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 ___U3CU3Eu__1_7;
};

// Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3
struct U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717 
{
	// System.Int32 Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9 ___U3CU3Et__builder_1;
	// System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::callback
	Action_3_t6C8812636092E736BCFFC8C67B0790F3B2F04D53* ___callback_2;
	// Solana.Unity.SessionKeys.GplSession.GplSessionClient Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::<>4__this
	GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* ___U3CU3E4__this_3;
	// System.String Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::accountAddress
	String_t* ___accountAddress_4;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::commitment
	int32_t ___commitment_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::<>u__1
	TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C ___U3CU3Eu__1_6;
};

// System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>
struct Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87  : public MulticastDelegate_t
{
};

// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58  : public MulticastDelegate_t
{
};

// System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>
struct Action_3_t6C8812636092E736BCFFC8C67B0790F3B2F04D53  : public MulticastDelegate_t
{
};

// System.Func`2<Solana.Unity.Rpc.Models.AccountKeyPair,Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>
struct Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1  : public MulticastDelegate_t
{
};

// System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]>
struct Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void Solana.Unity.Programs.Abstract.TransactionalBaseClient`1<System.UInt32Enum>::.ctor(Solana.Unity.Rpc.IRpcClient,Solana.Unity.Rpc.IStreamingRpcClient,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionalBaseClient_1__ctor_mBB0EE868235B80BA84467DE82543C08C6362BBB2_gshared (TransactionalBaseClient_1_t4FFA641AF272BE598783919208D86E4ECD125DE6* __this, RuntimeObject* ___rpcClient0, RuntimeObject* ___streamingRpcClient1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m4BAA6FE254875D614885B3F39ECFC7825E5FEF82_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_m2964C004D3C91BE29A030D550F5F66CD595D4297_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_m10C639667A043ED6CB176C359E7CEB07CA00684F_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_m227B992468FB8168865E974397F4D24D643589AA_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_mD34BBCDFA22CB42A608E4CDF5D82258DAEB275FF_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5F2C53FF0072F4015E5D14621F555D29B1EB79E5_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Abstract.ProgramError`1<System.UInt32Enum>::.ctor(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgramError_1__ctor_m49A36855BD402230B48A2D926174CE866F1A15FC_gshared (ProgramError_1_t0BE0C8160EB8E3AD22D8F5E65405DB9720DB7159* __this, uint32_t ___value0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// T Solana.Unity.Rpc.Messages.ResponseValue`1<System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ResponseValue_1_get_Value_m6C5854737B78630F19EC3D59B572C8A944FE1A18_gshared_inline (ResponseValue_1_t8663D687999D2DEE6072DDA9FD2059BBDE351512* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_m4BB3C793EB1B9DBBB5F024601807AF972F30C5B0_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Object>::get_WasSuccessful()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestResult_1_get_WasSuccessful_mA5BF47D1E4F808D3ECA23C00469FDEC73907C1F5_gshared (RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Models.AccountResultWrapper`1<System.Object>::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountResultWrapper_1__ctor_m0F7C2EB291A96292620339F193ECFCA48AB8367C_gshared (AccountResultWrapper_1_t83675F153F8740FC4891555830129D31F32AE6DB* __this, RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___result0, const RuntimeMethod* method) ;
// T Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Object>::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline (RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Models.AccountResultWrapper`1<System.Object>::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountResultWrapper_1__ctor_mABE9D4F0587B514309DE5B414F5CD54FBE60710F_gshared (AccountResultWrapper_1_t83675F153F8740FC4891555830129D31F32AE6DB* __this, RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___result0, RuntimeObject* ___parsedResult1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m0857405A93738D1E266FC3CC7A31A06309C12C08_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Object>::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgramAccountsResultWrapper_1__ctor_mC8A0D03D226BC1549871574A2D20C47840E4F97F_gshared (ProgramAccountsResultWrapper_1_t2E23C3EEE04E0082AE901B603A75F7E3A4991CB8* __this, RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* ___result0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Object>::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgramAccountsResultWrapper_1__ctor_m3172B918996FD95B4DC5B3238D272F26E0245FB5_gshared (ProgramAccountsResultWrapper_1_t2E23C3EEE04E0082AE901B603A75F7E3A4991CB8* __this, RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* ___result0, RuntimeObject* ___parsedResult1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Programs.Abstract.TransactionalBaseClient`1<System.UInt32Enum>::SignAndSendTransaction(Solana.Unity.Rpc.Models.TransactionInstruction,Solana.Unity.Wallet.PublicKey,System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]>,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* TransactionalBaseClient_1_SignAndSendTransaction_mDFDE4303FA0E7A6F202CB90FD5FF400DA8D2BF98_gshared (TransactionalBaseClient_1_t4FFA641AF272BE598783919208D86E4ECD125DE6* __this, TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* ___instruction0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer1, Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* ___signingCallback2, int32_t ___commitment3, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_mF976AE4BCC7C2CD6854EAF5E37929246E8E2763F_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_mAF0ADE4C15BE5D827C47D0896192721603A0DF53_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_m26BD121B9851D52E6B4F2775F9C43F12C7C505B0_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717* ___stateMachine1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;

// System.Void Solana.Unity.Programs.Abstract.TransactionalBaseClient`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>::.ctor(Solana.Unity.Rpc.IRpcClient,Solana.Unity.Rpc.IStreamingRpcClient,Solana.Unity.Wallet.PublicKey)
inline void TransactionalBaseClient_1__ctor_m2994709663EBBBC7FC615F6FC7363135EB63CA18 (TransactionalBaseClient_1_t333BCAB862201CE6C201DA46079682C814BBF884* __this, RuntimeObject* ___rpcClient0, RuntimeObject* ___streamingRpcClient1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId2, const RuntimeMethod* method)
{
	((  void (*) (TransactionalBaseClient_1_t333BCAB862201CE6C201DA46079682C814BBF884*, RuntimeObject*, RuntimeObject*, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*, const RuntimeMethod*))TransactionalBaseClient_1__ctor_mBB0EE868235B80BA84467DE82543C08C6362BBB2_gshared)(__this, ___rpcClient0, ___streamingRpcClient1, ___programId2, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>>::Create()
inline AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133 AsyncTaskMethodBuilder_1_Create_mB3CA0DB3A5FEA56E1660E7E5DFAEE17E2CF74CE7 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>>::Start<Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m27020BCA939595C7404A2CB9D25FF0FB6FB695E0 (AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133* __this, U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133*, U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m4BAA6FE254875D614885B3F39ECFC7825E5FEF82_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>>::get_Task()
inline Task_1_tE2E6CAD2385016525B6773292A5525A74DDF3D9F* AsyncTaskMethodBuilder_1_get_Task_mBF7AD640FE4FF3017117ED1233E73FE96D892B6D (AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tE2E6CAD2385016525B6773292A5525A74DDF3D9F* (*) (AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>::Create()
inline AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E AsyncTaskMethodBuilder_1_Create_m03F6030C9122DD31F6F0102260CB8160DB4F5064 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>::Start<Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_m96CE89C336C90C6E9783C711F5E967707D78EC74 (AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E* __this, U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E*, U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_m2964C004D3C91BE29A030D550F5F66CD595D4297_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>::get_Task()
inline Task_1_t7CCD5E02241B5B4D337AD5C44183A886C3AA2477* AsyncTaskMethodBuilder_1_get_Task_m8C9078DA766448D8C7E9F40EA9E6D76E0D85A3E5 (AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t7CCD5E02241B5B4D337AD5C44183A886C3AA2477* (*) (AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::Create()
inline AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9 AsyncTaskMethodBuilder_1_Create_m4A6D286C83DED1D2D0FF2B20787981BAA487B661 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::Start<Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_mD34F0910C87349B476881AC4B450E63B35B070B8 (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* __this, U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9*, U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_m10C639667A043ED6CB176C359E7CEB07CA00684F_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::get_Task()
inline Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5* AsyncTaskMethodBuilder_1_get_Task_m381E2D457FEFD5A2D00F010D72D6BD8CF0E1CB0B (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5* (*) (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::Create()
inline AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::Start<Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_m6FE2AA2938121E7EB3CD9965F46127E6CC63FA0D (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_m227B992468FB8168865E974397F4D24D643589AA_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::get_Task()
inline Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::Start<Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_m9C19CB7993091D5B5DAF089F54558C3E8A677A26 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_mD34BBCDFA22CB42A608E4CDF5D82258DAEB275FF_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>>::.ctor()
inline void Dictionary_2__ctor_m12B311A7CE7560C7A8645154E9ACFB89FD88714C (Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF*, const RuntimeMethod*))Dictionary_2__ctor_m5F2C53FF0072F4015E5D14621F555D29B1EB79E5_gshared)(__this, method);
}
// System.Void Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>::.ctor(T,System.String)
inline void ProgramError_1__ctor_m1E50015F694BCFCE104D4F926EEA75D4AC65B70F (ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971* __this, uint32_t ___value0, String_t* ___message1, const RuntimeMethod* method)
{
	((  void (*) (ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971*, uint32_t, String_t*, const RuntimeMethod*))ProgramError_1__ctor_m49A36855BD402230B48A2D926174CE866F1A15FC_gshared)(__this, ___value0, ___message1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mF741CB36CFA4748EE954F1136603426877F3D3D7 (Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF* __this, uint32_t ___key0, ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF*, uint32_t, ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971*, const RuntimeMethod*))Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m65CC374C2AF87403356F4E2C70D6BDAABE6093E4 (U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.AccountInfo Solana.Unity.Rpc.Models.AccountKeyPair::get_Account()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* AccountKeyPair_get_Account_m1953E7F21E2813875D1B5088D80206F6BA7685B0_inline (AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Solana.Unity.Rpc.Models.AccountInfo::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646_inline (AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(T[])
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_gshared)(___array0, method);
}
// Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::Deserialize(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* SessionToken_Deserialize_m3BF5D0DB6A9F7362457926656B7A533697C70C3B (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ____data0, const RuntimeMethod* method) ;
// T Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>::get_Value()
inline AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* ResponseValue_1_get_Value_m40090BF19C1D93C9F49111410206B38F25324017_inline (ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* __this, const RuntimeMethod* method)
{
	return ((  AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* (*) (ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195*, const RuntimeMethod*))ResponseValue_1_get_Value_m6C5854737B78630F19EC3D59B572C8A944FE1A18_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Void System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mF1A4F868FE1CFF152E1EAADD8316927C029B945C_inline (Action_3_t6C8812636092E736BCFFC8C67B0790F3B2F04D53* __this, SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* ___arg10, ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* ___arg21, SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t6C8812636092E736BCFFC8C67B0790F3B2F04D53*, SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8*, ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195*, SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B*, const RuntimeMethod*))Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// Solana.Unity.Rpc.IRpcClient Solana.Unity.Programs.Abstract.BaseClient::get_RpcClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseClient_get_RpcClient_mDC99C59F85131FF26A4B3A336BED28115177FAE4_inline (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>>::GetAwaiter()
inline TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378 Task_1_GetAwaiter_m9DDB46E2832BAA75189781623AB95936A22896E9 (Task_1_tAE0F086D94E32A64042E1266C16B5533DD50865C* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378 (*) (Task_1_tAE0F086D94E32A64042E1266C16B5533DD50865C*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m0A514EAC59281A5D782DC63C36467FC10A80B4C6 (TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>>,Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_mC0361D0ED1141D70C0BF707399BAA8FDC59BE7E5 (AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E* __this, TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378* ___awaiter0, U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E*, TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378*, U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_m4BB3C793EB1B9DBBB5F024601807AF972F30C5B0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>>::GetResult()
inline RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* TaskAwaiter_1_GetResult_m1B629E1D4201F90CA3B1CAFA7D91A9FB6D9C4274 (TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378* __this, const RuntimeMethod* method)
{
	return ((  RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* (*) (TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>::get_WasSuccessful()
inline bool RequestResult_1_get_WasSuccessful_m73B033D4E6C5FE4EDA7EA1F10EF1348BB4B8AC2E (RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757*, const RuntimeMethod*))RequestResult_1_get_WasSuccessful_mA5BF47D1E4F808D3ECA23C00469FDEC73907C1F5_gshared)(__this, method);
}
// System.Void Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>)
inline void AccountResultWrapper_1__ctor_m6B4B7BAE3D499B1ABBB36DB95FF3D10410876DDA (AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B* __this, RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B*, RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757*, const RuntimeMethod*))AccountResultWrapper_1__ctor_m0F7C2EB291A96292620339F193ECFCA48AB8367C_gshared)(__this, ___result0, method);
}
// T Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>::get_Result()
inline ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* RequestResult_1_get_Result_m44384E02DBDFC630A0EF00A474F6306C4EF8E284_inline (RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* __this, const RuntimeMethod* method)
{
	return ((  ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* (*) (RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757*, const RuntimeMethod*))RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline)(__this, method);
}
// System.Void Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>,T)
inline void AccountResultWrapper_1__ctor_mA29E2C8D19D2D7663CB50C7E086FEF92615F736C (AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B* __this, RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___result0, SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* ___parsedResult1, const RuntimeMethod* method)
{
	((  void (*) (AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B*, RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757*, SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B*, const RuntimeMethod*))AccountResultWrapper_1__ctor_mABE9D4F0587B514309DE5B414F5CD54FBE60710F_gshared)(__this, ___result0, ___parsedResult1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m4152D00F62EC46CA46A1940E5930F14B9C9F3F61 (AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mA68B98820C7E725A7D7B56F24AE96BF3E95594E2 (AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E* __this, AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E*, AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokenAsyncU3Ed__2_MoveNext_m616DF741E9E59F9CA2332E99C40715E661CFECF7 (U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m431CBC5B021576614D9C4AC5116BAF16ED62997F (AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokenAsyncU3Ed__2_SetStateMachine_mC6E067B8329926B2D2E6A76E8675986EEF4E6F09 (U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.MemCmp>::.ctor()
inline void List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152 (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Solana.Unity.Rpc.Models.MemCmp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemCmp__ctor_m57991249C7DB05E5D8154A984009A688B1D8DE6B (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::get_ACCOUNT_DISCRIMINATOR_B58()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionToken_get_ACCOUNT_DISCRIMINATOR_B58_mC5C954065D7C1DE8B92DA41AD6B11D6478BF402F (const RuntimeMethod* method) ;
// System.Void Solana.Unity.Rpc.Models.MemCmp::set_Bytes(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemCmp_set_Bytes_mCDC0CAE1E02E4847F4BD1155280B968EA5E4E550_inline (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Rpc.Models.MemCmp::set_Offset(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemCmp_set_Offset_mCB83B81A3939A37B8DF0EFD827F906F7814E4ECC_inline (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.MemCmp>::Add(T)
inline void List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_inline (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* __this, MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E*, MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>::GetAwaiter()
inline TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8 (Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E (*) (Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7 (TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>,Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m90CE73C5150FD2D7320722109A348019497A62AF (AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133* __this, TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E* ___awaiter0, U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133*, TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E*, U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m0857405A93738D1E266FC3CC7A31A06309C12C08_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>::GetResult()
inline RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7 (TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E* __this, const RuntimeMethod* method)
{
	return ((  RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* (*) (TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>::get_WasSuccessful()
inline bool RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA (RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288*, const RuntimeMethod*))RequestResult_1_get_WasSuccessful_mA5BF47D1E4F808D3ECA23C00469FDEC73907C1F5_gshared)(__this, method);
}
// T Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>::get_Result()
inline List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_inline (RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* __this, const RuntimeMethod* method)
{
	return ((  List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* (*) (RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288*, const RuntimeMethod*))RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>::get_Count()
inline int32_t List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_inline (List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>)
inline void ProgramAccountsResultWrapper_1__ctor_mF644BDF38386908BE52C75FF81D8EB35CE854D6C (ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F* __this, RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* ___result0, const RuntimeMethod* method)
{
	((  void (*) (ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F*, RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288*, const RuntimeMethod*))ProgramAccountsResultWrapper_1__ctor_mC8A0D03D226BC1549871574A2D20C47840E4F97F_gshared)(__this, ___result0, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>::.ctor(System.Int32)
inline void List_1__ctor_m5D6820B282D9943BD9F12204D6E30CDA6CD7DC71 (List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Func`2<Solana.Unity.Rpc.Models.AccountKeyPair,Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mABD7DA334C12BCE520093E486508A7A93CEA556D (Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Solana.Unity.Rpc.Models.AccountKeyPair,Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisAccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C_TisSessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B_mB48C0C7B23A378E89BAA1E59EACDA80E0106D252 (RuntimeObject* ___source0, Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m6210411B45B48D5C3423392569606601C95F553C (List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>,T)
inline void ProgramAccountsResultWrapper_1__ctor_mF7696745C086422417182629792F955BE4C83433 (ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F* __this, RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* ___result0, List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF* ___parsedResult1, const RuntimeMethod* method)
{
	((  void (*) (ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F*, RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288*, List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF*, const RuntimeMethod*))ProgramAccountsResultWrapper_1__ctor_m3172B918996FD95B4DC5B3238D272F26E0245FB5_gshared)(__this, ___result0, ___parsedResult1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m01829C71FEE4E86E0689C4F2123123E4DCB16149 (AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m7E2F22FF63B7BE4DDF8C66EE81F3A3085642940F (AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133* __this, ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133*, ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokensAsyncU3Ed__1_MoveNext_m4CE14EAEBE1B1E8FB8A4440A3A6D87CD94C738AC (U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mDB0DA2405611EA318CB3B80C20A1FAB21A99D45E (AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokensAsyncU3Ed__1_SetStateMachine_m0D77F62AD443AB3087BBD20466A5392893700FD8 (U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.SessionKeys.GplSession.Program.GplSessionProgram::CreateSession(Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Int64>,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* GplSessionProgram_CreateSession_m4477361099296F68E9C8140ECE00FC4A915AAE36 (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* ___accounts0, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___topUp1, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___validUntil2, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId3, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Programs.Abstract.TransactionalBaseClient`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>::SignAndSendTransaction(Solana.Unity.Rpc.Models.TransactionInstruction,Solana.Unity.Wallet.PublicKey,System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]>,Solana.Unity.Rpc.Types.Commitment)
inline Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* TransactionalBaseClient_1_SignAndSendTransaction_mC79B6168B497CFCF800DB12C115344DB9B7D95F6 (TransactionalBaseClient_1_t333BCAB862201CE6C201DA46079682C814BBF884* __this, TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* ___instruction0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer1, Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* ___signingCallback2, int32_t ___commitment3, const RuntimeMethod* method)
{
	return ((  Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* (*) (TransactionalBaseClient_1_t333BCAB862201CE6C201DA46079682C814BBF884*, TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B*, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*, Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7*, int32_t, const RuntimeMethod*))TransactionalBaseClient_1_SignAndSendTransaction_mDFDE4303FA0E7A6F202CB90FD5FF400DA8D2BF98_gshared)(__this, ___instruction0, ___feePayer1, ___signingCallback2, ___commitment3, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::GetAwaiter()
inline TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988 (Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 (*) (Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C (TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>,Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_mD01E246248CECB25CAD04D37EFE7E388CCAC1002 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* ___awaiter0, U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935*, U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_mF976AE4BCC7C2CD6854EAF5E37929246E8E2763F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::GetResult()
inline RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919 (TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* __this, const RuntimeMethod* method)
{
	return ((  RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* (*) (TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m354526EADBE537610A7DD820B84C0E11BEBDC348 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCreateSessionAsyncU3Ed__4_MoveNext_m5DE090E6FB2B5892B94E0BBEBFBE8724A1CC92C0 (U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m1972CD1BCF2A8C2ABA99BB6576B585927327A881 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCreateSessionAsyncU3Ed__4_SetStateMachine_mD1988BE0E09F111EE22D94BE1C31D59780F23905 (U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.SessionKeys.GplSession.Program.GplSessionProgram::RevokeSession(Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* GplSessionProgram_RevokeSession_mC739C0554363484DC075A324D1F2B631D60066C5 (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* ___accounts0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>,Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_mFE78B8E46442E8D0DB351C3DB53F63E270C26524 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* ___awaiter0, U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935*, U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_mAF0ADE4C15BE5D827C47D0896192721603A0DF53_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRevokeSessionAsyncU3Ed__5_MoveNext_m3E586A75E9B6F38D2993F77B9E7A311C057F3FA0 (U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRevokeSessionAsyncU3Ed__5_SetStateMachine_m4AACFFFC7DADD860CD9C51F2D81EBA8B38438355 (U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m3F31FDF6C273AD21945907AC071EC6CD38BAA350 (U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B* __this, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.Programs.Abstract.BaseClient::get_StreamingRpcClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseClient_get_StreamingRpcClient_m31A16EE3DE5B5391430A9D3ADAEB2B563676A46B_inline (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m84C6F6103C32CB63F2B55A98653E5F7375003E0C (Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::GetAwaiter()
inline TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C Task_1_GetAwaiter_mBFBE25A25E4D2A7FF56168A1B599B76712061742 (Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C (*) (Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m9A66C1463BBD26B3F6DDA4D062EAEE5BFDB4FF5D (TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>,Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_m5041FD809550F4BA982862C815700448A3ABE571 (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* __this, TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C* ___awaiter0, U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9*, TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C*, U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_m26BD121B9851D52E6B4F2775F9C43F12C7C505B0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::GetResult()
inline SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* TaskAwaiter_1_GetResult_mDDF5310FD39B9E64098A66F486A3861812DA7CFB (TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C* __this, const RuntimeMethod* method)
{
	return ((  SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* (*) (TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m9452DEA20FF8B0AD63AD413F48523942F2746511 (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m4B1BCD2CBF4E4CD3EA481B227BDE61F1BE18E414 (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* __this, SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9*, SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeSessionTokenAsyncU3Ed__3_MoveNext_m85E7EC9C25A990DBFB39EA6EE412876FAD582590 (U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m001F0C76FC83EB587A0A52E180CCB3C3D2B0ED39 (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeSessionTokenAsyncU3Ed__3_SetStateMachine_mB39039384AD00AC405623C816F74FB611B4A09C4 (U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountMeta>::.ctor()
inline void List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC (List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::get_SessionToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SessionToken_m5BE46334FE14D5DFE41BF9E5E5F804ECD2618D5B_inline (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.AccountMeta Solana.Unity.Rpc.Models.AccountMeta::Writable(Solana.Unity.Wallet.PublicKey,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey0, bool ___isSigner1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountMeta>::Add(T)
inline void List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline (List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* __this, AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25*, AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::get_SessionSigner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SessionSigner_m7E4861599830F4A968261343767CA446FC54762B_inline (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::get_Authority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_Authority_mF45FB49A13442BDBB5BA231B3AA8177A38EF0E49_inline (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::get_TargetProgram()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_TargetProgram_m4B3B689B762A7381C88CC2CE34CCD986533DD683_inline (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.AccountMeta Solana.Unity.Rpc.Models.AccountMeta::ReadOnly(Solana.Unity.Wallet.PublicKey,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* AccountMeta_ReadOnly_m26D13CA31D86D71BC92CE39122BB120AF24D18F1 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey0, bool ___isSigner1, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::get_SystemProgram()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SystemProgram_m1F09BAC4E93C34F3BF0B50664E363C9D05F4E44B_inline (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Utilities.Serialization::WriteU64(System.Byte[],System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serialization_WriteU64_mBEB75818E647AE161902BBC7487FF670AE9D2210 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, uint64_t ___value1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.Void Solana.Unity.Programs.Utilities.Serialization::WriteU8(System.Byte[],System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serialization_WriteU8_m4338F127774D6FB5B464CA67772236608ED12E77 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, uint8_t ___value1, int32_t ___offset2, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// System.Void Solana.Unity.Programs.Utilities.Serialization::WriteBool(System.Byte[],System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serialization_WriteBool_m6702BE7FDEC5843B6BF2DA12856ED8AF594BBBB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, bool ___value1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int64>::get_Value()
inline int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared)(__this, method);
}
// System.Void Solana.Unity.Programs.Utilities.Serialization::WriteS64(System.Byte[],System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serialization_WriteS64_m07ECA0D32E56E1FA83557C246FBA8D6002C4AAD1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int64_t ___value1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Rpc.Models.TransactionInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionInstruction__ctor_mD4A602752140DDCA7AB55A6C1B5F6690769B473C (TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* __this, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Rpc.Models.TransactionInstruction::set_Keys(System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.AccountMeta>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionInstruction_set_Keys_mEE992F580C4FB052CA6D59F4DDE06C1C00587226_inline (TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.Wallet.PublicKey::get_KeyBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PublicKey_get_KeyBytes_m227D50C47CBD2081B12896002FC4372DE8DF5784 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* __this, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Rpc.Models.TransactionInstruction::set_ProgramId(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionInstruction_set_ProgramId_mB99504E26550E308C1FFDA8EFF9DBDEE582A9C52_inline (TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Rpc.Models.TransactionInstruction::set_Data(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionInstruction_set_Data_m04A7F7910F30C3CC2DA1A9AA4470C609BE5A7797_inline (TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::get_SessionToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_SessionToken_mBAF199E5DFBE9960737CA7196C7BD04EB29DEA41_inline (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::get_Authority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_Authority_mA1A3E94B4BD4823301729C9324EE6FB5E80A9C8C_inline (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::get_SystemProgram()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_SystemProgram_mF6130C374C2DEA54BD97BD04C599A98946803FBB_inline (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Wallet.PublicKey::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* __this, String_t* ___key0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.UInt64 Solana.Unity.Programs.Utilities.Deserialization::GetU64(System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Deserialization_GetU64_mC98F85DD4A05F61BE85FE5859415236D81086FAD (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___data0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.UInt64 Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::get_ACCOUNT_DISCRIMINATOR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SessionToken_get_ACCOUNT_DISCRIMINATOR_mACE36995A155A28B3635B3D8DB22431443592ED2 (const RuntimeMethod* method) ;
// System.Void Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionToken__ctor_m8D766BAD94A2892D86E07850D54DA5AE651EE34A (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Utilities.Deserialization::GetPubKey(System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* Deserialization_GetPubKey_mF8D0AD08885CC383A8A479802D3422F6557ABDA9 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___data0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::set_Authority(Solana.Unity.Wallet.PublicKey)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_Authority_m0CCDB8D5254D25880867F0A14EFB7E0BC898CBB1_inline (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::set_TargetProgram(Solana.Unity.Wallet.PublicKey)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_TargetProgram_m5C9303EA22972292633C13679CE2D19C696788D7_inline (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::set_SessionSigner(Solana.Unity.Wallet.PublicKey)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_SessionSigner_m7BFEEAEE23514526992B1E6CBE3E186556632E6C_inline (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) ;
// System.Int64 Solana.Unity.Programs.Utilities.Deserialization::GetS64(System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Deserialization_GetS64_m641113ED969E0E50706C20383F10EB0F8CE3959A (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___data0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::set_ValidUntil(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_ValidUntil_m6B9398B982DFBF5510B8991491152C7E448332D2_inline (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Byte[] Solana.Unity.Wallet.PublicKey::op_Implicit(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PublicKey_op_Implicit_m0B79D637828C6C7C24F7C9C31002B7ACBEB44D61 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey0, const RuntimeMethod* method) ;
// System.Boolean Solana.Unity.Wallet.PublicKey::TryFindProgramAddress(System.Collections.Generic.IEnumerable`1<System.Byte[]>,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PublicKey_TryFindProgramAddress_m380002D59B3888237ABE355B8B8365E1503A6409 (RuntimeObject* ___seeds0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751** ___address2, uint8_t* ___bump3, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___targetType0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
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
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient::.ctor(Solana.Unity.Rpc.IRpcClient,Solana.Unity.Rpc.IStreamingRpcClient,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GplSessionClient__ctor_m66AAFA3349675A789A4901C1BB7A8672245042D7 (GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* __this, RuntimeObject* ___rpcClient0, RuntimeObject* ___streamingRpcClient1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionalBaseClient_1__ctor_m2994709663EBBBC7FC615F6FC7363135EB63CA18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___rpcClient0;
		RuntimeObject* L_1 = ___streamingRpcClient1;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_2 = ___programId2;
		TransactionalBaseClient_1__ctor_m2994709663EBBBC7FC615F6FC7363135EB63CA18(__this, L_0, L_1, L_2, TransactionalBaseClient_1__ctor_m2994709663EBBBC7FC615F6FC7363135EB63CA18_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>>> Solana.Unity.SessionKeys.GplSession.GplSessionClient::GetSessionTokensAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE2E6CAD2385016525B6773292A5525A74DDF3D9F* GplSessionClient_GetSessionTokensAsync_mCFD191798BCAB9FA6BE6BD3EF43C22869CC057D0 (GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* __this, String_t* ___programAddress0, int32_t ___commitment1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mB3CA0DB3A5FEA56E1660E7E5DFAEE17E2CF74CE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m27020BCA939595C7404A2CB9D25FF0FB6FB695E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mBF7AD640FE4FF3017117ED1233E73FE96D892B6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mB3CA0DB3A5FEA56E1660E7E5DFAEE17E2CF74CE7(AsyncTaskMethodBuilder_1_Create_mB3CA0DB3A5FEA56E1660E7E5DFAEE17E2CF74CE7_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		String_t* L_1 = ___programAddress0;
		(&V_0)->___programAddress_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___programAddress_3), (void*)L_1);
		int32_t L_2 = ___commitment1;
		(&V_0)->___commitment_4 = L_2;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m27020BCA939595C7404A2CB9D25FF0FB6FB695E0(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m27020BCA939595C7404A2CB9D25FF0FB6FB695E0_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tE2E6CAD2385016525B6773292A5525A74DDF3D9F* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mBF7AD640FE4FF3017117ED1233E73FE96D892B6D(L_4, AsyncTaskMethodBuilder_1_get_Task_mBF7AD640FE4FF3017117ED1233E73FE96D892B6D_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>> Solana.Unity.SessionKeys.GplSession.GplSessionClient::GetSessionTokenAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7CCD5E02241B5B4D337AD5C44183A886C3AA2477* GplSessionClient_GetSessionTokenAsync_m64F86AF5A47E24314CBDA51F464A5B42FFAE8B4D (GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* __this, String_t* ___accountAddress0, int32_t ___commitment1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m03F6030C9122DD31F6F0102260CB8160DB4F5064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_m96CE89C336C90C6E9783C711F5E967707D78EC74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m8C9078DA766448D8C7E9F40EA9E6D76E0D85A3E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m03F6030C9122DD31F6F0102260CB8160DB4F5064(AsyncTaskMethodBuilder_1_Create_m03F6030C9122DD31F6F0102260CB8160DB4F5064_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		String_t* L_1 = ___accountAddress0;
		(&V_0)->___accountAddress_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___accountAddress_3), (void*)L_1);
		int32_t L_2 = ___commitment1;
		(&V_0)->___commitment_4 = L_2;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_m96CE89C336C90C6E9783C711F5E967707D78EC74(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_m96CE89C336C90C6E9783C711F5E967707D78EC74_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t7CCD5E02241B5B4D337AD5C44183A886C3AA2477* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m8C9078DA766448D8C7E9F40EA9E6D76E0D85A3E5(L_4, AsyncTaskMethodBuilder_1_get_Task_m8C9078DA766448D8C7E9F40EA9E6D76E0D85A3E5_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.SessionKeys.GplSession.GplSessionClient::SubscribeSessionTokenAsync(System.String,System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken>,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5* GplSessionClient_SubscribeSessionTokenAsync_m92B138C9BCFB0F03C00BF55F037EEDED835EF1CD (GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* __this, String_t* ___accountAddress0, Action_3_t6C8812636092E736BCFFC8C67B0790F3B2F04D53* ___callback1, int32_t ___commitment2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4A6D286C83DED1D2D0FF2B20787981BAA487B661_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_mD34F0910C87349B476881AC4B450E63B35B070B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m381E2D457FEFD5A2D00F010D72D6BD8CF0E1CB0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m4A6D286C83DED1D2D0FF2B20787981BAA487B661(AsyncTaskMethodBuilder_1_Create_m4A6D286C83DED1D2D0FF2B20787981BAA487B661_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		String_t* L_1 = ___accountAddress0;
		(&V_0)->___accountAddress_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___accountAddress_4), (void*)L_1);
		Action_3_t6C8812636092E736BCFFC8C67B0790F3B2F04D53* L_2 = ___callback1;
		(&V_0)->___callback_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___callback_2), (void*)L_2);
		int32_t L_3 = ___commitment2;
		(&V_0)->___commitment_5 = L_3;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_mD34F0910C87349B476881AC4B450E63B35B070B8(L_4, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_mD34F0910C87349B476881AC4B450E63B35B070B8_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5* L_6;
		L_6 = AsyncTaskMethodBuilder_1_get_Task_m381E2D457FEFD5A2D00F010D72D6BD8CF0E1CB0B(L_5, AsyncTaskMethodBuilder_1_get_Task_m381E2D457FEFD5A2D00F010D72D6BD8CF0E1CB0B_RuntimeMethod_var);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SessionKeys.GplSession.GplSessionClient::SendCreateSessionAsync(Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Int64>,Solana.Unity.Wallet.PublicKey,System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]>,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* GplSessionClient_SendCreateSessionAsync_m3E3D590E0D37FC8EAA2EAE7502BC0D2119D6B35C (GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* __this, CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* ___accounts0, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___topUp1, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___validUntil2, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer3, Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* ___signingCallback4, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_m6FE2AA2938121E7EB3CD9965F46127E6CC63FA0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D(AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_6), (void*)__this);
		CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* L_1 = ___accounts0;
		(&V_0)->___accounts_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___accounts_2), (void*)L_1);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2 = ___topUp1;
		(&V_0)->___topUp_3 = L_2;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3 = ___validUntil2;
		(&V_0)->___validUntil_4 = L_3;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_4 = ___feePayer3;
		(&V_0)->___feePayer_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___feePayer_7), (void*)L_4);
		Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* L_5 = ___signingCallback4;
		(&V_0)->___signingCallback_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___signingCallback_8), (void*)L_5);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_6 = ___programId5;
		(&V_0)->___programId_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___programId_5), (void*)L_6);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_7 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_m6FE2AA2938121E7EB3CD9965F46127E6CC63FA0D(L_7, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_m6FE2AA2938121E7EB3CD9965F46127E6CC63FA0D_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_8 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E(L_8, AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SessionKeys.GplSession.GplSessionClient::SendRevokeSessionAsync(Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts,Solana.Unity.Wallet.PublicKey,System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]>,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* GplSessionClient_SendRevokeSessionAsync_m65DF907F86ABE557D7D7C21D8BDE7BEDF2674BF3 (GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* __this, RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* ___accounts0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer1, Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* ___signingCallback2, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_m9C19CB7993091D5B5DAF089F54558C3E8A677A26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D(AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_4), (void*)__this);
		RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* L_1 = ___accounts0;
		(&V_0)->___accounts_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___accounts_2), (void*)L_1);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_2 = ___feePayer1;
		(&V_0)->___feePayer_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___feePayer_5), (void*)L_2);
		Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* L_3 = ___signingCallback2;
		(&V_0)->___signingCallback_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___signingCallback_6), (void*)L_3);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_4 = ___programId3;
		(&V_0)->___programId_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___programId_3), (void*)L_4);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_m9C19CB7993091D5B5DAF089F54558C3E8A677A26(L_5, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_m9C19CB7993091D5B5DAF089F54558C3E8A677A26_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_7;
		L_7 = AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E(L_6, AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		return L_7;
	}
}
// System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.SessionKeys.GplSession.Errors.GplSessionErrorKind>> Solana.Unity.SessionKeys.GplSession.GplSessionClient::BuildErrorsDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF* GplSessionClient_BuildErrorsDictionary_m5D0194F7EDE70C0DC1DD0AEC86141C7390A9F752 (GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF741CB36CFA4748EE954F1136603426877F3D3D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m12B311A7CE7560C7A8645154E9ACFB89FD88714C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProgramError_1__ctor_m1E50015F694BCFCE104D4F926EEA75D4AC65B70F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral080660E8EAAF1265B4149510A09EC2C67B2F6EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BB2E526ED1FB378E7D5E024906EB5B93912DBCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9C39B3CEB153B3DAD54710F463B8C83E202AB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF* L_0 = (Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF*)il2cpp_codegen_object_new(Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m12B311A7CE7560C7A8645154E9ACFB89FD88714C(L_0, Dictionary_2__ctor_m12B311A7CE7560C7A8645154E9ACFB89FD88714C_RuntimeMethod_var);
		Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF* L_1 = L_0;
		ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971* L_2 = (ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971*)il2cpp_codegen_object_new(ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ProgramError_1__ctor_m1E50015F694BCFCE104D4F926EEA75D4AC65B70F(L_2, ((int32_t)6000), _stringLiteralCB9C39B3CEB153B3DAD54710F463B8C83E202AB9, ProgramError_1__ctor_m1E50015F694BCFCE104D4F926EEA75D4AC65B70F_RuntimeMethod_var);
		NullCheck(L_1);
		Dictionary_2_Add_mF741CB36CFA4748EE954F1136603426877F3D3D7(L_1, ((int32_t)6000), L_2, Dictionary_2_Add_mF741CB36CFA4748EE954F1136603426877F3D3D7_RuntimeMethod_var);
		Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF* L_3 = L_1;
		ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971* L_4 = (ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971*)il2cpp_codegen_object_new(ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ProgramError_1__ctor_m1E50015F694BCFCE104D4F926EEA75D4AC65B70F(L_4, ((int32_t)6001), _stringLiteral3BB2E526ED1FB378E7D5E024906EB5B93912DBCE, ProgramError_1__ctor_m1E50015F694BCFCE104D4F926EEA75D4AC65B70F_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_mF741CB36CFA4748EE954F1136603426877F3D3D7(L_3, ((int32_t)6001), L_4, Dictionary_2_Add_mF741CB36CFA4748EE954F1136603426877F3D3D7_RuntimeMethod_var);
		Dictionary_2_t659B04B7DDD1AF18CD9A083F852AE1774E969ECF* L_5 = L_3;
		ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971* L_6 = (ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971*)il2cpp_codegen_object_new(ProgramError_1_t6B5ACE73553EE6CEBD0BF1D080758578C0305971_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ProgramError_1__ctor_m1E50015F694BCFCE104D4F926EEA75D4AC65B70F(L_6, ((int32_t)6002), _stringLiteral080660E8EAAF1265B4149510A09EC2C67B2F6EAF, ProgramError_1__ctor_m1E50015F694BCFCE104D4F926EEA75D4AC65B70F_RuntimeMethod_var);
		NullCheck(L_5);
		Dictionary_2_Add_mF741CB36CFA4748EE954F1136603426877F3D3D7(L_5, ((int32_t)6002), L_6, Dictionary_2_Add_mF741CB36CFA4748EE954F1136603426877F3D3D7_RuntimeMethod_var);
		return L_5;
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
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m83C2DA1B0D96D116BF5A12B60D6EC54A365697DD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498* L_0 = (U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498*)il2cpp_codegen_object_new(U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m65CC374C2AF87403356F4E2C70D6BDAABE6093E4(L_0, NULL);
		((U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m65CC374C2AF87403356F4E2C70D6BDAABE6093E4 (U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c::<GetSessionTokensAsync>b__1_0(Solana.Unity.Rpc.Models.AccountKeyPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* U3CU3Ec_U3CGetSessionTokensAsyncU3Eb__1_0_mDAC24062999379D201A099EC0B24E329D5E94420 (U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498* __this, AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* L_0 = ___result0;
		NullCheck(L_0);
		AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_1;
		L_1 = AccountKeyPair_get_Account_m1953E7F21E2813875D1B5088D80206F6BA7685B0_inline(L_0, NULL);
		NullCheck(L_1);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2;
		L_2 = AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646_inline(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_2, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_3, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_4, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* L_6;
		L_6 = SessionToken_Deserialize_m3BF5D0DB6A9F7362457926656B7A533697C70C3B(L_5, NULL);
		return L_6;
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
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m3F31FDF6C273AD21945907AC071EC6CD38BAA350 (U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<>c__DisplayClass3_0::<SubscribeSessionTokenAsync>b__0(Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CSubscribeSessionTokenAsyncU3Eb__0_m1AD8CDA1CBE09FA569F8439EAE564771429FE02B (U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B* __this, SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* ___s0, ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseValue_1_get_Value_m40090BF19C1D93C9F49111410206B38F25324017_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* V_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* G_B2_0 = NULL;
	AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* G_B1_0 = NULL;
	int32_t G_B6_0 = 0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B4_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B3_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		V_0 = (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B*)NULL;
		ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* L_0 = ___e1;
		NullCheck(L_0);
		AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_1;
		L_1 = ResponseValue_1_get_Value_m40090BF19C1D93C9F49111410206B38F25324017_inline(L_0, ResponseValue_1_get_Value_m40090BF19C1D93C9F49111410206B38F25324017_RuntimeMethod_var);
		AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000f;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0042;
	}

IL_000f:
	{
		NullCheck(G_B2_0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3;
		L_3 = AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646_inline(G_B2_0, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5 = V_3;
		G_B5_0 = L_5;
		goto IL_002d;
	}

IL_0023:
	{
		NullCheck(G_B4_0);
		int32_t L_6;
		L_6 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(G_B4_0, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B5_0 = L_7;
	}

IL_002d:
	{
		V_1 = G_B5_0;
		V_2 = 0;
		int32_t L_8;
		L_8 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_1), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		int32_t L_9 = V_2;
		bool L_10;
		L_10 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_1), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B6_0 = ((int32_t)(((((int32_t)L_8) > ((int32_t)L_9))? 1 : 0)&(int32_t)L_10));
	}

IL_0042:
	{
		if (!G_B6_0)
		{
			goto IL_0065;
		}
	}
	{
		ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* L_11 = ___e1;
		NullCheck(L_11);
		AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_12;
		L_12 = ResponseValue_1_get_Value_m40090BF19C1D93C9F49111410206B38F25324017_inline(L_11, ResponseValue_1_get_Value_m40090BF19C1D93C9F49111410206B38F25324017_RuntimeMethod_var);
		NullCheck(L_12);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13;
		L_13 = AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646_inline(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_13, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_14, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_16;
		L_16 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_15, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* L_17;
		L_17 = SessionToken_Deserialize_m3BF5D0DB6A9F7362457926656B7A533697C70C3B(L_16, NULL);
		V_0 = L_17;
	}

IL_0065:
	{
		Action_3_t6C8812636092E736BCFFC8C67B0790F3B2F04D53* L_18 = __this->___callback_0;
		SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* L_19 = ___s0;
		ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* L_20 = ___e1;
		SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* L_21 = V_0;
		NullCheck(L_18);
		Action_3_Invoke_mF1A4F868FE1CFF152E1EAADD8316927C029B945C_inline(L_18, L_19, L_20, L_21, NULL);
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
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokenAsyncU3Ed__2_MoveNext_m616DF741E9E59F9CA2332E99C40715E661CFECF7 (U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountResultWrapper_1__ctor_m6B4B7BAE3D499B1ABBB36DB95FF3D10410876DDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountResultWrapper_1__ctor_mA29E2C8D19D2D7663CB50C7E086FEF92615F736C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_mC0361D0ED1141D70C0BF707399BAA8FDC59BE7E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA68B98820C7E725A7D7B56F24AE96BF3E95594E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_Result_m44384E02DBDFC630A0EF00A474F6306C4EF8E284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_WasSuccessful_m73B033D4E6C5FE4EDA7EA1F10EF1348BB4B8AC2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseValue_1_get_Value_m40090BF19C1D93C9F49111410206B38F25324017_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m1B629E1D4201F90CA3B1CAFA7D91A9FB6D9C4274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m0A514EAC59281A5D782DC63C36467FC10A80B4C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m9DDB46E2832BAA75189781623AB95936A22896E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* V_1 = NULL;
	AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B* V_2 = NULL;
	RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* V_3 = NULL;
	SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* V_4 = NULL;
	TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005d_1;
			}
		}
		{
			GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = BaseClient_get_RpcClient_mDC99C59F85131FF26A4B3A336BED28115177FAE4_inline(L_3, NULL);
			String_t* L_5 = __this->___accountAddress_3;
			int32_t L_6 = __this->___commitment_4;
			NullCheck(L_4);
			Task_1_tAE0F086D94E32A64042E1266C16B5533DD50865C* L_7;
			L_7 = InterfaceFuncInvoker3< Task_1_tAE0F086D94E32A64042E1266C16B5533DD50865C*, String_t*, int32_t, int32_t >::Invoke(3 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>> Solana.Unity.Rpc.IRpcClient::GetAccountInfoAsync(System.String,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.BinaryEncoding) */, IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var, L_4, L_5, L_6, 1);
			NullCheck(L_7);
			TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378 L_8;
			L_8 = Task_1_GetAwaiter_m9DDB46E2832BAA75189781623AB95936A22896E9(L_7, Task_1_GetAwaiter_m9DDB46E2832BAA75189781623AB95936A22896E9_RuntimeMethod_var);
			V_5 = L_8;
			bool L_9;
			L_9 = TaskAwaiter_1_get_IsCompleted_m0A514EAC59281A5D782DC63C36467FC10A80B4C6((&V_5), TaskAwaiter_1_get_IsCompleted_m0A514EAC59281A5D782DC63C36467FC10A80B4C6_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007a_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378 L_11 = V_5;
			__this->___U3CU3Eu__1_5 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E* L_12 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_mC0361D0ED1141D70C0BF707399BAA8FDC59BE7E5(L_12, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378_TisU3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376_mC0361D0ED1141D70C0BF707399BAA8FDC59BE7E5_RuntimeMethod_var);
			goto IL_00f2;
		}

IL_005d_1:
		{
			TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378 L_13 = __this->___U3CU3Eu__1_5;
			V_5 = L_13;
			TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378* L_14 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_007a_1:
		{
			RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* L_16;
			L_16 = TaskAwaiter_1_GetResult_m1B629E1D4201F90CA3B1CAFA7D91A9FB6D9C4274((&V_5), TaskAwaiter_1_GetResult_m1B629E1D4201F90CA3B1CAFA7D91A9FB6D9C4274_RuntimeMethod_var);
			V_3 = L_16;
			RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* L_17 = V_3;
			NullCheck(L_17);
			bool L_18;
			L_18 = RequestResult_1_get_WasSuccessful_m73B033D4E6C5FE4EDA7EA1F10EF1348BB4B8AC2E(L_17, RequestResult_1_get_WasSuccessful_m73B033D4E6C5FE4EDA7EA1F10EF1348BB4B8AC2E_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0093_1;
			}
		}
		{
			RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* L_19 = V_3;
			AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B* L_20 = (AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B*)il2cpp_codegen_object_new(AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B_il2cpp_TypeInfo_var);
			NullCheck(L_20);
			AccountResultWrapper_1__ctor_m6B4B7BAE3D499B1ABBB36DB95FF3D10410876DDA(L_20, L_19, AccountResultWrapper_1__ctor_m6B4B7BAE3D499B1ABBB36DB95FF3D10410876DDA_RuntimeMethod_var);
			V_2 = L_20;
			goto IL_00de;
		}

IL_0093_1:
		{
			RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* L_21 = V_3;
			NullCheck(L_21);
			ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* L_22;
			L_22 = RequestResult_1_get_Result_m44384E02DBDFC630A0EF00A474F6306C4EF8E284_inline(L_21, RequestResult_1_get_Result_m44384E02DBDFC630A0EF00A474F6306C4EF8E284_RuntimeMethod_var);
			NullCheck(L_22);
			AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_23;
			L_23 = ResponseValue_1_get_Value_m40090BF19C1D93C9F49111410206B38F25324017_inline(L_22, ResponseValue_1_get_Value_m40090BF19C1D93C9F49111410206B38F25324017_RuntimeMethod_var);
			NullCheck(L_23);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24;
			L_24 = AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646_inline(L_23, NULL);
			NullCheck(L_24);
			String_t* L_25;
			L_25 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_24, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
			L_26 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_25, NULL);
			ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_27;
			L_27 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_26, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
			SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* L_28;
			L_28 = SessionToken_Deserialize_m3BF5D0DB6A9F7362457926656B7A533697C70C3B(L_27, NULL);
			V_4 = L_28;
			RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* L_29 = V_3;
			SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* L_30 = V_4;
			AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B* L_31 = (AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B*)il2cpp_codegen_object_new(AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B_il2cpp_TypeInfo_var);
			NullCheck(L_31);
			AccountResultWrapper_1__ctor_mA29E2C8D19D2D7663CB50C7E086FEF92615F736C(L_31, L_29, L_30, AccountResultWrapper_1__ctor_mA29E2C8D19D2D7663CB50C7E086FEF92615F736C_RuntimeMethod_var);
			V_2 = L_31;
			goto IL_00de;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c5;
		}
		throw e;
	}

CATCH_00c5:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m4152D00F62EC46CA46A1940E5930F14B9C9F3F61(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m4152D00F62EC46CA46A1940E5930F14B9C9F3F61_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f2;
	}// end catch (depth: 1)

IL_00de:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E* L_34 = (&__this->___U3CU3Et__builder_1);
		AccountResultWrapper_1_t8A7B5FF7D7B55ACFF07885163C5C46BEC1BCC64B* L_35 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mA68B98820C7E725A7D7B56F24AE96BF3E95594E2(L_34, L_35, AsyncTaskMethodBuilder_1_SetResult_mA68B98820C7E725A7D7B56F24AE96BF3E95594E2_RuntimeMethod_var);
	}

IL_00f2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSessionTokenAsyncU3Ed__2_MoveNext_m616DF741E9E59F9CA2332E99C40715E661CFECF7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376*>(__this + _offset);
	U3CGetSessionTokenAsyncU3Ed__2_MoveNext_m616DF741E9E59F9CA2332E99C40715E661CFECF7(_thisAdjusted, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokenAsyncU3Ed__2_SetStateMachine_mC6E067B8329926B2D2E6A76E8675986EEF4E6F09 (U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m431CBC5B021576614D9C4AC5116BAF16ED62997F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t15A6F8EDB2E400C25E5DEB06951916CE5303C25E* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m431CBC5B021576614D9C4AC5116BAF16ED62997F(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m431CBC5B021576614D9C4AC5116BAF16ED62997F_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSessionTokenAsyncU3Ed__2_SetStateMachine_mC6E067B8329926B2D2E6A76E8675986EEF4E6F09_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetSessionTokenAsyncU3Ed__2_t048596C00D83ECE48B6FB6C565A7EE6342F53376*>(__this + _offset);
	U3CGetSessionTokenAsyncU3Ed__2_SetStateMachine_mC6E067B8329926B2D2E6A76E8675986EEF4E6F09(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokensAsyncU3Ed__1_MoveNext_m4CE14EAEBE1B1E8FB8A4440A3A6D87CD94C738AC (U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m90CE73C5150FD2D7320722109A348019497A62AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m7E2F22FF63B7BE4DDF8C66EE81F3A3085642940F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisAccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C_TisSessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B_mB48C0C7B23A378E89BAA1E59EACDA80E0106D252_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m6210411B45B48D5C3423392569606601C95F553C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5D6820B282D9943BD9F12204D6E30CDA6CD7DC71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProgramAccountsResultWrapper_1__ctor_mF644BDF38386908BE52C75FF81D8EB35CE854D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProgramAccountsResultWrapper_1__ctor_mF7696745C086422417182629792F955BE4C83433_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetSessionTokensAsyncU3Eb__1_0_mDAC24062999379D201A099EC0B24E329D5E94420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* V_1 = NULL;
	ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F* V_2 = NULL;
	List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* V_3 = NULL;
	RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* V_4 = NULL;
	List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF* V_5 = NULL;
	TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* G_B8_0 = NULL;
	List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1* G_B13_0 = NULL;
	List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* G_B13_1 = NULL;
	List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF* G_B13_2 = NULL;
	Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1* G_B12_0 = NULL;
	List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* G_B12_1 = NULL;
	List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF* G_B12_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_008e_1;
			}
		}
		{
			List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* L_3 = (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E*)il2cpp_codegen_object_new(List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152(L_3, List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152_RuntimeMethod_var);
			List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* L_4 = L_3;
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_5 = (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689*)il2cpp_codegen_object_new(MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			MemCmp__ctor_m57991249C7DB05E5D8154A984009A688B1D8DE6B(L_5, NULL);
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_6 = L_5;
			String_t* L_7;
			L_7 = SessionToken_get_ACCOUNT_DISCRIMINATOR_B58_mC5C954065D7C1DE8B92DA41AD6B11D6478BF402F(NULL);
			NullCheck(L_6);
			MemCmp_set_Bytes_mCDC0CAE1E02E4847F4BD1155280B968EA5E4E550_inline(L_6, L_7, NULL);
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_8 = L_6;
			NullCheck(L_8);
			MemCmp_set_Offset_mCB83B81A3939A37B8DF0EFD827F906F7814E4ECC_inline(L_8, 0, NULL);
			NullCheck(L_4);
			List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_inline(L_4, L_8, List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_RuntimeMethod_var);
			V_3 = L_4;
			GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* L_9 = V_1;
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = BaseClient_get_RpcClient_mDC99C59F85131FF26A4B3A336BED28115177FAE4_inline(L_9, NULL);
			String_t* L_11 = __this->___programAddress_3;
			int32_t L_12 = __this->___commitment_4;
			List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* L_13 = V_3;
			V_7 = L_13;
			il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_14 = V_8;
			RuntimeObject* L_15 = V_7;
			NullCheck(L_10);
			Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557* L_16;
			L_16 = InterfaceFuncInvoker4< Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557*, String_t*, int32_t, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, RuntimeObject* >::Invoke(36 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>> Solana.Unity.Rpc.IRpcClient::GetProgramAccountsAsync(System.String,Solana.Unity.Rpc.Types.Commitment,System.Nullable`1<System.Int32>,System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.MemCmp>) */, IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_14, L_15);
			NullCheck(L_16);
			TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E L_17;
			L_17 = Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8(L_16, Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8_RuntimeMethod_var);
			V_6 = L_17;
			bool L_18;
			L_18 = TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7((&V_6), TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_00ab_1;
			}
		}
		{
			int32_t L_19 = 0;
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
			TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E L_20 = V_6;
			__this->___U3CU3Eu__1_5 = L_20;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133* L_21 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m90CE73C5150FD2D7320722109A348019497A62AF(L_21, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09_m90CE73C5150FD2D7320722109A348019497A62AF_RuntimeMethod_var);
			goto IL_015d;
		}

IL_008e_1:
		{
			TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E L_22 = __this->___U3CU3Eu__1_5;
			V_6 = L_22;
			TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E* L_23 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_23, sizeof(TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E));
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_00ab_1:
		{
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_25;
			L_25 = TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7((&V_6), TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7_RuntimeMethod_var);
			V_4 = L_25;
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_26 = V_4;
			NullCheck(L_26);
			bool L_27;
			L_27 = RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA(L_26, RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA_RuntimeMethod_var);
			if (!L_27)
			{
				goto IL_00d5_1;
			}
		}
		{
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_28 = V_4;
			NullCheck(L_28);
			List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* L_29;
			L_29 = RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_inline(L_28, RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
			List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* L_30 = L_29;
			G_B7_0 = L_30;
			if (L_30)
			{
				G_B8_0 = L_30;
				goto IL_00cb_1;
			}
		}
		{
			G_B9_0 = 0;
			goto IL_00d3_1;
		}

IL_00cb_1:
		{
			NullCheck(G_B8_0);
			int32_t L_31;
			L_31 = List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_inline(G_B8_0, List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_RuntimeMethod_var);
			G_B9_0 = ((((int32_t)L_31) > ((int32_t)0))? 1 : 0);
		}

IL_00d3_1:
		{
			if (G_B9_0)
			{
				goto IL_00df_1;
			}
		}

IL_00d5_1:
		{
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_32 = V_4;
			ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F* L_33 = (ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F*)il2cpp_codegen_object_new(ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F_il2cpp_TypeInfo_var);
			NullCheck(L_33);
			ProgramAccountsResultWrapper_1__ctor_mF644BDF38386908BE52C75FF81D8EB35CE854D6C(L_33, L_32, ProgramAccountsResultWrapper_1__ctor_mF644BDF38386908BE52C75FF81D8EB35CE854D6C_RuntimeMethod_var);
			V_2 = L_33;
			goto IL_0149;
		}

IL_00df_1:
		{
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_34 = V_4;
			NullCheck(L_34);
			List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* L_35;
			L_35 = RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_inline(L_34, RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
			NullCheck(L_35);
			int32_t L_36;
			L_36 = List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_inline(L_35, List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_RuntimeMethod_var);
			List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF* L_37 = (List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF*)il2cpp_codegen_object_new(List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF_il2cpp_TypeInfo_var);
			NullCheck(L_37);
			List_1__ctor_m5D6820B282D9943BD9F12204D6E30CDA6CD7DC71(L_37, L_36, List_1__ctor_m5D6820B282D9943BD9F12204D6E30CDA6CD7DC71_RuntimeMethod_var);
			V_5 = L_37;
			List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF* L_38 = V_5;
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_39 = V_4;
			NullCheck(L_39);
			List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* L_40;
			L_40 = RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_inline(L_39, RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_il2cpp_TypeInfo_var);
			Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1* L_41 = ((U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
			Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1* L_42 = L_41;
			G_B12_0 = L_42;
			G_B12_1 = L_40;
			G_B12_2 = L_38;
			if (L_42)
			{
				G_B13_0 = L_42;
				G_B13_1 = L_40;
				G_B13_2 = L_38;
				goto IL_011a_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_il2cpp_TypeInfo_var);
			U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498* L_43 = ((U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1* L_44 = (Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1*)il2cpp_codegen_object_new(Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1_il2cpp_TypeInfo_var);
			NullCheck(L_44);
			Func_2__ctor_mABD7DA334C12BCE520093E486508A7A93CEA556D(L_44, L_43, (intptr_t)((void*)U3CU3Ec_U3CGetSessionTokensAsyncU3Eb__1_0_mDAC24062999379D201A099EC0B24E329D5E94420_RuntimeMethod_var), NULL);
			Func_2_tF0AE0884184F8D18820AE0928B240CA4C05304F1* L_45 = L_44;
			((U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_45;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t139AAE59D4C9A1E39AC55B55C7B7549FB4E90498_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_45);
			G_B13_0 = L_45;
			G_B13_1 = G_B12_1;
			G_B13_2 = G_B12_2;
		}

IL_011a_1:
		{
			RuntimeObject* L_46;
			L_46 = Enumerable_Select_TisAccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C_TisSessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B_mB48C0C7B23A378E89BAA1E59EACDA80E0106D252(G_B13_1, G_B13_0, Enumerable_Select_TisAccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C_TisSessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B_mB48C0C7B23A378E89BAA1E59EACDA80E0106D252_RuntimeMethod_var);
			NullCheck(G_B13_2);
			List_1_AddRange_m6210411B45B48D5C3423392569606601C95F553C(G_B13_2, L_46, List_1_AddRange_m6210411B45B48D5C3423392569606601C95F553C_RuntimeMethod_var);
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_47 = V_4;
			List_1_t028FF212630EC72A532E5C2A53E7ECB7E1A48CDF* L_48 = V_5;
			ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F* L_49 = (ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F*)il2cpp_codegen_object_new(ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F_il2cpp_TypeInfo_var);
			NullCheck(L_49);
			ProgramAccountsResultWrapper_1__ctor_mF7696745C086422417182629792F955BE4C83433(L_49, L_47, L_48, ProgramAccountsResultWrapper_1__ctor_mF7696745C086422417182629792F955BE4C83433_RuntimeMethod_var);
			V_2 = L_49;
			goto IL_0149;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0130;
		}
		throw e;
	}

CATCH_0130:
	{// begin catch(System.Exception)
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133* L_50 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_51 = V_9;
		AsyncTaskMethodBuilder_1_SetException_m01829C71FEE4E86E0689C4F2123123E4DCB16149(L_50, L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m01829C71FEE4E86E0689C4F2123123E4DCB16149_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_015d;
	}// end catch (depth: 1)

IL_0149:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133* L_52 = (&__this->___U3CU3Et__builder_1);
		ProgramAccountsResultWrapper_1_tDA5FCBFC9C425A4A0CF4B4879F9FFBF25D74729F* L_53 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m7E2F22FF63B7BE4DDF8C66EE81F3A3085642940F(L_52, L_53, AsyncTaskMethodBuilder_1_SetResult_m7E2F22FF63B7BE4DDF8C66EE81F3A3085642940F_RuntimeMethod_var);
	}

IL_015d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSessionTokensAsyncU3Ed__1_MoveNext_m4CE14EAEBE1B1E8FB8A4440A3A6D87CD94C738AC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09*>(__this + _offset);
	U3CGetSessionTokensAsyncU3Ed__1_MoveNext_m4CE14EAEBE1B1E8FB8A4440A3A6D87CD94C738AC(_thisAdjusted, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokensAsyncU3Ed__1_SetStateMachine_m0D77F62AD443AB3087BBD20466A5392893700FD8 (U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mDB0DA2405611EA318CB3B80C20A1FAB21A99D45E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tD6DDD902EEC9AF060037DF5AB439BC9B5B3EC133* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mDB0DA2405611EA318CB3B80C20A1FAB21A99D45E(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mDB0DA2405611EA318CB3B80C20A1FAB21A99D45E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSessionTokensAsyncU3Ed__1_SetStateMachine_m0D77F62AD443AB3087BBD20466A5392893700FD8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetSessionTokensAsyncU3Ed__1_t2D6A30EEEA576DCA99A7C05C70181196F7C3FD09*>(__this + _offset);
	U3CGetSessionTokensAsyncU3Ed__1_SetStateMachine_m0D77F62AD443AB3087BBD20466A5392893700FD8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCreateSessionAsyncU3Ed__4_MoveNext_m5DE090E6FB2B5892B94E0BBEBFBE8724A1CC92C0 (U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_mD01E246248CECB25CAD04D37EFE7E388CCAC1002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionalBaseClient_1_SignAndSendTransaction_mC79B6168B497CFCF800DB12C115344DB9B7D95F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* V_1 = NULL;
	RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* V_2 = NULL;
	TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* V_3 = NULL;
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* L_1 = __this->___U3CU3E4__this_6;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0074_1;
			}
		}
		{
			CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* L_3 = __this->___accounts_2;
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_4 = __this->___topUp_3;
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_5 = __this->___validUntil_4;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_6 = __this->___programId_5;
			il2cpp_codegen_runtime_class_init_inline(GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var);
			TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_7;
			L_7 = GplSessionProgram_CreateSession_m4477361099296F68E9C8140ECE00FC4A915AAE36(L_3, L_4, L_5, L_6, NULL);
			V_3 = L_7;
			GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* L_8 = V_1;
			TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_9 = V_3;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_10 = __this->___feePayer_7;
			Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* L_11 = __this->___signingCallback_8;
			NullCheck(L_8);
			Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_12;
			L_12 = TransactionalBaseClient_1_SignAndSendTransaction_mC79B6168B497CFCF800DB12C115344DB9B7D95F6(L_8, L_9, L_10, L_11, 0, TransactionalBaseClient_1_SignAndSendTransaction_mC79B6168B497CFCF800DB12C115344DB9B7D95F6_RuntimeMethod_var);
			NullCheck(L_12);
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_13;
			L_13 = Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988(L_12, Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var);
			V_4 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C((&V_4), TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0091_1;
			}
		}
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_16 = V_4;
			__this->___U3CU3Eu__1_9 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_17 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_mD01E246248CECB25CAD04D37EFE7E388CCAC1002(L_17, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28_mD01E246248CECB25CAD04D37EFE7E388CCAC1002_RuntimeMethod_var);
			goto IL_00c8;
		}

IL_0074_1:
		{
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_18 = __this->___U3CU3Eu__1_9;
			V_4 = L_18;
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* L_19 = (&__this->___U3CU3Eu__1_9);
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
		}

IL_0091_1:
		{
			RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* L_21;
			L_21 = TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919((&V_4), TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var);
			V_2 = L_21;
			goto IL_00b4;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009b;
		}
		throw e;
	}

CATCH_009b:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m354526EADBE537610A7DD820B84C0E11BEBDC348(L_22, L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m354526EADBE537610A7DD820B84C0E11BEBDC348_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c8;
	}// end catch (depth: 1)

IL_00b4:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_24 = (&__this->___U3CU3Et__builder_1);
		RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* L_25 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9(L_24, L_25, AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var);
	}

IL_00c8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendCreateSessionAsyncU3Ed__4_MoveNext_m5DE090E6FB2B5892B94E0BBEBFBE8724A1CC92C0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28*>(__this + _offset);
	U3CSendCreateSessionAsyncU3Ed__4_MoveNext_m5DE090E6FB2B5892B94E0BBEBFBE8724A1CC92C0(_thisAdjusted, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCreateSessionAsyncU3Ed__4_SetStateMachine_mD1988BE0E09F111EE22D94BE1C31D59780F23905 (U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m1972CD1BCF2A8C2ABA99BB6576B585927327A881_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m1972CD1BCF2A8C2ABA99BB6576B585927327A881(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m1972CD1BCF2A8C2ABA99BB6576B585927327A881_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendCreateSessionAsyncU3Ed__4_SetStateMachine_mD1988BE0E09F111EE22D94BE1C31D59780F23905_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendCreateSessionAsyncU3Ed__4_t144C8BB57EFAF162A7A01B31F44E4E6456946B28*>(__this + _offset);
	U3CSendCreateSessionAsyncU3Ed__4_SetStateMachine_mD1988BE0E09F111EE22D94BE1C31D59780F23905(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRevokeSessionAsyncU3Ed__5_MoveNext_m3E586A75E9B6F38D2993F77B9E7A311C057F3FA0 (U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_mFE78B8E46442E8D0DB351C3DB53F63E270C26524_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionalBaseClient_1_SignAndSendTransaction_mC79B6168B497CFCF800DB12C115344DB9B7D95F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* V_1 = NULL;
	RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* V_2 = NULL;
	TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* V_3 = NULL;
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* L_1 = __this->___U3CU3E4__this_4;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0068_1;
			}
		}
		{
			RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* L_3 = __this->___accounts_2;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_4 = __this->___programId_3;
			il2cpp_codegen_runtime_class_init_inline(GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var);
			TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_5;
			L_5 = GplSessionProgram_RevokeSession_mC739C0554363484DC075A324D1F2B631D60066C5(L_3, L_4, NULL);
			V_3 = L_5;
			GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* L_6 = V_1;
			TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_7 = V_3;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_8 = __this->___feePayer_5;
			Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* L_9 = __this->___signingCallback_6;
			NullCheck(L_6);
			Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_10;
			L_10 = TransactionalBaseClient_1_SignAndSendTransaction_mC79B6168B497CFCF800DB12C115344DB9B7D95F6(L_6, L_7, L_8, L_9, 0, TransactionalBaseClient_1_SignAndSendTransaction_mC79B6168B497CFCF800DB12C115344DB9B7D95F6_RuntimeMethod_var);
			NullCheck(L_10);
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_11;
			L_11 = Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988(L_10, Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var);
			V_4 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C((&V_4), TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0085_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_14 = V_4;
			__this->___U3CU3Eu__1_7 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_mFE78B8E46442E8D0DB351C3DB53F63E270C26524(L_15, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6_mFE78B8E46442E8D0DB351C3DB53F63E270C26524_RuntimeMethod_var);
			goto IL_00bc;
		}

IL_0068_1:
		{
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_16 = __this->___U3CU3Eu__1_7;
			V_4 = L_16;
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* L_17 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0085_1:
		{
			RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* L_19;
			L_19 = TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919((&V_4), TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var);
			V_2 = L_19;
			goto IL_00a8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008f;
		}
		throw e;
	}

CATCH_008f:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m354526EADBE537610A7DD820B84C0E11BEBDC348(L_20, L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m354526EADBE537610A7DD820B84C0E11BEBDC348_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bc;
	}// end catch (depth: 1)

IL_00a8:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_22 = (&__this->___U3CU3Et__builder_1);
		RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* L_23 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9(L_22, L_23, AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var);
	}

IL_00bc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRevokeSessionAsyncU3Ed__5_MoveNext_m3E586A75E9B6F38D2993F77B9E7A311C057F3FA0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6*>(__this + _offset);
	U3CSendRevokeSessionAsyncU3Ed__5_MoveNext_m3E586A75E9B6F38D2993F77B9E7A311C057F3FA0(_thisAdjusted, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRevokeSessionAsyncU3Ed__5_SetStateMachine_m4AACFFFC7DADD860CD9C51F2D81EBA8B38438355 (U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m1972CD1BCF2A8C2ABA99BB6576B585927327A881_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m1972CD1BCF2A8C2ABA99BB6576B585927327A881(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m1972CD1BCF2A8C2ABA99BB6576B585927327A881_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRevokeSessionAsyncU3Ed__5_SetStateMachine_m4AACFFFC7DADD860CD9C51F2D81EBA8B38438355_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendRevokeSessionAsyncU3Ed__5_t4CD94DF792BA3B9C9875EF62E39A616873B641F6*>(__this + _offset);
	U3CSendRevokeSessionAsyncU3Ed__5_SetStateMachine_m4AACFFFC7DADD860CD9C51F2D81EBA8B38438355(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeSessionTokenAsyncU3Ed__3_MoveNext_m85E7EC9C25A990DBFB39EA6EE412876FAD582590 (U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_m5041FD809550F4BA982862C815700448A3ABE571_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m4B1BCD2CBF4E4CD3EA481B227BDE61F1BE18E414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStreamingRpcClient_tD95D1830E2CE0EFC8A302FAC12CC93BAC7C76B3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mDDF5310FD39B9E64098A66F486A3861812DA7CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m9A66C1463BBD26B3F6DDA4D062EAEE5BFDB4FF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mBFBE25A25E4D2A7FF56168A1B599B76712061742_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CSubscribeSessionTokenAsyncU3Eb__0_m1AD8CDA1CBE09FA569F8439EAE564771429FE02B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* V_1 = NULL;
	SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* V_2 = NULL;
	U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B* V_3 = NULL;
	TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0077_1;
			}
		}
		{
			U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B* L_3 = (U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass3_0__ctor_m3F31FDF6C273AD21945907AC071EC6CD38BAA350(L_3, NULL);
			V_3 = L_3;
			U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B* L_4 = V_3;
			Action_3_t6C8812636092E736BCFFC8C67B0790F3B2F04D53* L_5 = __this->___callback_2;
			NullCheck(L_4);
			L_4->___callback_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___callback_0), (void*)L_5);
			GplSessionClient_tB2DCA405B6DDEE724C79C10F9A7AD2356A6066F3* L_6 = V_1;
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = BaseClient_get_StreamingRpcClient_m31A16EE3DE5B5391430A9D3ADAEB2B563676A46B_inline(L_6, NULL);
			String_t* L_8 = __this->___accountAddress_4;
			U3CU3Ec__DisplayClass3_0_tF887D159AF4DD14FCF188327672B89B99EFD216B* L_9 = V_3;
			Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87* L_10 = (Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87*)il2cpp_codegen_object_new(Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87_il2cpp_TypeInfo_var);
			NullCheck(L_10);
			Action_2__ctor_m84C6F6103C32CB63F2B55A98653E5F7375003E0C(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CSubscribeSessionTokenAsyncU3Eb__0_m1AD8CDA1CBE09FA569F8439EAE564771429FE02B_RuntimeMethod_var), NULL);
			int32_t L_11 = __this->___commitment_5;
			NullCheck(L_7);
			Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5* L_12;
			L_12 = InterfaceFuncInvoker3< Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5*, String_t*, Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87*, int32_t >::Invoke(6 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.IStreamingRpcClient::SubscribeAccountInfoAsync(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>,Solana.Unity.Rpc.Types.Commitment) */, IStreamingRpcClient_tD95D1830E2CE0EFC8A302FAC12CC93BAC7C76B3C_il2cpp_TypeInfo_var, L_7, L_8, L_10, L_11);
			NullCheck(L_12);
			TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C L_13;
			L_13 = Task_1_GetAwaiter_mBFBE25A25E4D2A7FF56168A1B599B76712061742(L_12, Task_1_GetAwaiter_mBFBE25A25E4D2A7FF56168A1B599B76712061742_RuntimeMethod_var);
			V_4 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_1_get_IsCompleted_m9A66C1463BBD26B3F6DDA4D062EAEE5BFDB4FF5D((&V_4), TaskAwaiter_1_get_IsCompleted_m9A66C1463BBD26B3F6DDA4D062EAEE5BFDB4FF5D_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0094_1;
			}
		}
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
			TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C L_16 = V_4;
			__this->___U3CU3Eu__1_6 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* L_17 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_m5041FD809550F4BA982862C815700448A3ABE571(L_17, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717_m5041FD809550F4BA982862C815700448A3ABE571_RuntimeMethod_var);
			goto IL_00cb;
		}

IL_0077_1:
		{
			TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C L_18 = __this->___U3CU3Eu__1_6;
			V_4 = L_18;
			TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C* L_19 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
		}

IL_0094_1:
		{
			SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* L_21;
			L_21 = TaskAwaiter_1_GetResult_mDDF5310FD39B9E64098A66F486A3861812DA7CFB((&V_4), TaskAwaiter_1_GetResult_mDDF5310FD39B9E64098A66F486A3861812DA7CFB_RuntimeMethod_var);
			V_2 = L_21;
			goto IL_00b7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009e;
		}
		throw e;
	}

CATCH_009e:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m9452DEA20FF8B0AD63AD413F48523942F2746511(L_22, L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m9452DEA20FF8B0AD63AD413F48523942F2746511_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cb;
	}// end catch (depth: 1)

IL_00b7:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* L_24 = (&__this->___U3CU3Et__builder_1);
		SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* L_25 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m4B1BCD2CBF4E4CD3EA481B227BDE61F1BE18E414(L_24, L_25, AsyncTaskMethodBuilder_1_SetResult_m4B1BCD2CBF4E4CD3EA481B227BDE61F1BE18E414_RuntimeMethod_var);
	}

IL_00cb:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSubscribeSessionTokenAsyncU3Ed__3_MoveNext_m85E7EC9C25A990DBFB39EA6EE412876FAD582590_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717*>(__this + _offset);
	U3CSubscribeSessionTokenAsyncU3Ed__3_MoveNext_m85E7EC9C25A990DBFB39EA6EE412876FAD582590(_thisAdjusted, method);
}
// System.Void Solana.Unity.SessionKeys.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeSessionTokenAsyncU3Ed__3_SetStateMachine_mB39039384AD00AC405623C816F74FB611B4A09C4 (U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m001F0C76FC83EB587A0A52E180CCB3C3D2B0ED39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m001F0C76FC83EB587A0A52E180CCB3C3D2B0ED39(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m001F0C76FC83EB587A0A52E180CCB3C3D2B0ED39_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSubscribeSessionTokenAsyncU3Ed__3_SetStateMachine_mB39039384AD00AC405623C816F74FB611B4A09C4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSubscribeSessionTokenAsyncU3Ed__3_t5D70E0A499A575EAD667A6EB3041C0BAE0DE1717*>(__this + _offset);
	U3CSubscribeSessionTokenAsyncU3Ed__3_SetStateMachine_mB39039384AD00AC405623C816F74FB611B4A09C4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::get_SessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SessionToken_m5BE46334FE14D5DFE41BF9E5E5F804ECD2618D5B (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionTokenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::set_SessionToken(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionAccounts_set_SessionToken_mD2B29C7ACBAEE0A0BF0AC1E6A7D1E7FAE373F48A (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSessionTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionTokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::get_SessionSigner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SessionSigner_m7E4861599830F4A968261343767CA446FC54762B (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionSignerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::set_SessionSigner(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionAccounts_set_SessionSigner_m1DBA62133FCFD2E6080C24D86736E46C8F851ACB (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSessionSignerU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionSignerU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::get_Authority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_Authority_mF45FB49A13442BDBB5BA231B3AA8177A38EF0E49 (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CAuthorityU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::set_Authority(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionAccounts_set_Authority_m442C5B38C209BB12F214798D50893256697FB0A4 (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CAuthorityU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorityU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::get_TargetProgram()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_TargetProgram_m4B3B689B762A7381C88CC2CE34CCD986533DD683 (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CTargetProgramU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::set_TargetProgram(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionAccounts_set_TargetProgram_m9FBE40320CEE1E5E22179C7B1E19E201EB3F508B (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CTargetProgramU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetProgramU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::get_SystemProgram()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SystemProgram_m1F09BAC4E93C34F3BF0B50664E363C9D05F4E44B (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSystemProgramU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::set_SystemProgram(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionAccounts_set_SystemProgram_mAB5708E38ADE28257753B4AF89FDF84423887B80 (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSystemProgramU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSystemProgramU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionAccounts__ctor_m75987517792CC80AE7241FCB94FBDB0F8618A462 (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) 
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
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::get_SessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_SessionToken_mBAF199E5DFBE9960737CA7196C7BD04EB29DEA41 (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionTokenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::set_SessionToken(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RevokeSessionAccounts_set_SessionToken_m34EDCFE8A6B7ECB268B0BC8429896891525A8F74 (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSessionTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionTokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::get_Authority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_Authority_mA1A3E94B4BD4823301729C9324EE6FB5E80A9C8C (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CAuthorityU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::set_Authority(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RevokeSessionAccounts_set_Authority_mFB0D74285B31127DAA169C8C7009DD6F4F7D88C6 (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CAuthorityU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorityU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::get_SystemProgram()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_SystemProgram_mF6130C374C2DEA54BD97BD04C599A98946803FBB (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSystemProgramU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::set_SystemProgram(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RevokeSessionAccounts_set_SystemProgram_m7BC9D88BD9FF1A4FA8D9CE61A115E88EECC35A3E (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSystemProgramU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSystemProgramU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RevokeSessionAccounts__ctor_m79D12BB79F7A5C60F55ED947261D754E9008A76D (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, const RuntimeMethod* method) 
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
// Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.SessionKeys.GplSession.Program.GplSessionProgram::CreateSession(Solana.Unity.SessionKeys.GplSession.Program.CreateSessionAccounts,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Int64>,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* GplSessionProgram_CreateSession_m4477361099296F68E9C8140ECE00FC4A915AAE36 (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* ___accounts0, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___topUp1, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___validUntil2, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___programId3;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_1 = ((GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_StaticFields*)il2cpp_codegen_static_fields_for(GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var))->___ProgramIdKey_0;
		___programId3 = L_1;
	}

IL_000a:
	{
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_2 = (List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25*)il2cpp_codegen_object_new(List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC(L_2, List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_3 = L_2;
		CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* L_4 = ___accounts0;
		NullCheck(L_4);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_5;
		L_5 = CreateSessionAccounts_get_SessionToken_m5BE46334FE14D5DFE41BF9E5E5F804ECD2618D5B_inline(L_4, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_6;
		L_6 = AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5(L_5, (bool)0, NULL);
		NullCheck(L_3);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_3, L_6, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_7 = L_3;
		CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* L_8 = ___accounts0;
		NullCheck(L_8);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_9;
		L_9 = CreateSessionAccounts_get_SessionSigner_m7E4861599830F4A968261343767CA446FC54762B_inline(L_8, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_10;
		L_10 = AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5(L_9, (bool)1, NULL);
		NullCheck(L_7);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_7, L_10, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_11 = L_7;
		CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* L_12 = ___accounts0;
		NullCheck(L_12);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_13;
		L_13 = CreateSessionAccounts_get_Authority_mF45FB49A13442BDBB5BA231B3AA8177A38EF0E49_inline(L_12, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_14;
		L_14 = AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5(L_13, (bool)1, NULL);
		NullCheck(L_11);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_11, L_14, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_15 = L_11;
		CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* L_16 = ___accounts0;
		NullCheck(L_16);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_17;
		L_17 = CreateSessionAccounts_get_TargetProgram_m4B3B689B762A7381C88CC2CE34CCD986533DD683_inline(L_16, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_18;
		L_18 = AccountMeta_ReadOnly_m26D13CA31D86D71BC92CE39122BB120AF24D18F1(L_17, (bool)0, NULL);
		NullCheck(L_15);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_15, L_18, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_19 = L_15;
		CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* L_20 = ___accounts0;
		NullCheck(L_20);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_21;
		L_21 = CreateSessionAccounts_get_SystemProgram_m1F09BAC4E93C34F3BF0B50664E363C9D05F4E44B_inline(L_20, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_22;
		L_22 = AccountMeta_ReadOnly_m26D13CA31D86D71BC92CE39122BB120AF24D18F1(L_21, (bool)0, NULL);
		NullCheck(L_19);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_19, L_22, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		V_0 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1200));
		V_1 = L_23;
		V_2 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
		int32_t L_25 = V_2;
		Serialization_WriteU64_mBEB75818E647AE161902BBC7487FF670AE9D2210(L_24, ((int64_t)-2055302144892878350LL), L_25, NULL);
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 8));
		bool L_27;
		L_27 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&___topUp1), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (!L_27)
		{
			goto IL_00b4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_1;
		int32_t L_29 = V_2;
		Serialization_WriteU8_m4338F127774D6FB5B464CA67772236608ED12E77(L_28, (uint8_t)1, L_29, NULL);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_1;
		bool L_32;
		L_32 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&___topUp1), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		int32_t L_33 = V_2;
		Serialization_WriteBool_m6702BE7FDEC5843B6BF2DA12856ED8AF594BBBB3(L_31, L_32, L_33, NULL);
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		goto IL_00c0;
	}

IL_00b4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_1;
		int32_t L_36 = V_2;
		Serialization_WriteU8_m4338F127774D6FB5B464CA67772236608ED12E77(L_35, (uint8_t)0, L_36, NULL);
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00c0:
	{
		bool L_38;
		L_38 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&___validUntil2), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (!L_38)
		{
			goto IL_00e9;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_1;
		int32_t L_40 = V_2;
		Serialization_WriteU8_m4338F127774D6FB5B464CA67772236608ED12E77(L_39, (uint8_t)1, L_40, NULL);
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_1;
		int64_t L_43;
		L_43 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC((&___validUntil2), Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		int32_t L_44 = V_2;
		Serialization_WriteS64_m07ECA0D32E56E1FA83557C246FBA8D6002C4AAD1(L_42, L_43, L_44, NULL);
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_45, 8));
		goto IL_00f5;
	}

IL_00e9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_1;
		int32_t L_47 = V_2;
		Serialization_WriteU8_m4338F127774D6FB5B464CA67772236608ED12E77(L_46, (uint8_t)0, L_47, NULL);
		int32_t L_48 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00f5:
	{
		int32_t L_49 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_49);
		V_3 = L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_3;
		int32_t L_53 = V_2;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_51, (RuntimeArray*)L_52, L_53, NULL);
		TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_54 = (TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B*)il2cpp_codegen_object_new(TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		TransactionInstruction__ctor_mD4A602752140DDCA7AB55A6C1B5F6690769B473C(L_54, NULL);
		TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_55 = L_54;
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_56 = V_0;
		NullCheck(L_55);
		TransactionInstruction_set_Keys_mEE992F580C4FB052CA6D59F4DDE06C1C00587226_inline(L_55, L_56, NULL);
		TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_57 = L_55;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_58 = ___programId3;
		NullCheck(L_58);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59;
		L_59 = PublicKey_get_KeyBytes_m227D50C47CBD2081B12896002FC4372DE8DF5784(L_58, NULL);
		NullCheck(L_57);
		TransactionInstruction_set_ProgramId_mB99504E26550E308C1FFDA8EFF9DBDEE582A9C52_inline(L_57, L_59, NULL);
		TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_60 = L_57;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_3;
		NullCheck(L_60);
		TransactionInstruction_set_Data_m04A7F7910F30C3CC2DA1A9AA4470C609BE5A7797_inline(L_60, L_61, NULL);
		return L_60;
	}
}
// Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.SessionKeys.GplSession.Program.GplSessionProgram::RevokeSession(Solana.Unity.SessionKeys.GplSession.Program.RevokeSessionAccounts,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* GplSessionProgram_RevokeSession_mC739C0554363484DC075A324D1F2B631D60066C5 (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* ___accounts0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___programId1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_1 = ((GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_StaticFields*)il2cpp_codegen_static_fields_for(GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var))->___ProgramIdKey_0;
		___programId1 = L_1;
	}

IL_000a:
	{
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_2 = (List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25*)il2cpp_codegen_object_new(List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC(L_2, List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_3 = L_2;
		RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* L_4 = ___accounts0;
		NullCheck(L_4);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_5;
		L_5 = RevokeSessionAccounts_get_SessionToken_mBAF199E5DFBE9960737CA7196C7BD04EB29DEA41_inline(L_4, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_6;
		L_6 = AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5(L_5, (bool)0, NULL);
		NullCheck(L_3);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_3, L_6, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_7 = L_3;
		RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* L_8 = ___accounts0;
		NullCheck(L_8);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_9;
		L_9 = RevokeSessionAccounts_get_Authority_mA1A3E94B4BD4823301729C9324EE6FB5E80A9C8C_inline(L_8, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_10;
		L_10 = AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5(L_9, (bool)0, NULL);
		NullCheck(L_7);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_7, L_10, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_11 = L_7;
		RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* L_12 = ___accounts0;
		NullCheck(L_12);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_13;
		L_13 = RevokeSessionAccounts_get_SystemProgram_mF6130C374C2DEA54BD97BD04C599A98946803FBB_inline(L_12, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_14;
		L_14 = AccountMeta_ReadOnly_m26D13CA31D86D71BC92CE39122BB120AF24D18F1(L_13, (bool)0, NULL);
		NullCheck(L_11);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_11, L_14, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		V_0 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1200));
		V_1 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15;
		int32_t L_17 = V_1;
		Serialization_WriteU64_mBEB75818E647AE161902BBC7487FF670AE9D2210(L_16, ((int64_t)-4465597685989745578LL), L_17, NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 8));
		int32_t L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_2 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		int32_t L_22 = V_1;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_16, (RuntimeArray*)L_21, L_22, NULL);
		TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_23 = (TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B*)il2cpp_codegen_object_new(TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		TransactionInstruction__ctor_mD4A602752140DDCA7AB55A6C1B5F6690769B473C(L_23, NULL);
		TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_24 = L_23;
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_25 = V_0;
		NullCheck(L_24);
		TransactionInstruction_set_Keys_mEE992F580C4FB052CA6D59F4DDE06C1C00587226_inline(L_24, L_25, NULL);
		TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_26 = L_24;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_27 = ___programId1;
		NullCheck(L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = PublicKey_get_KeyBytes_m227D50C47CBD2081B12896002FC4372DE8DF5784(L_27, NULL);
		NullCheck(L_26);
		TransactionInstruction_set_ProgramId_mB99504E26550E308C1FFDA8EFF9DBDEE582A9C52_inline(L_26, L_28, NULL);
		TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_29 = L_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_2;
		NullCheck(L_29);
		TransactionInstruction_set_Data_m04A7F7910F30C3CC2DA1A9AA4470C609BE5A7797_inline(L_29, L_30, NULL);
		return L_29;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Program.GplSessionProgram::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GplSessionProgram__cctor_m761F43DC8B9575965A941F226F258BEE8673989D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A9C4D54493AF268DF4091287D15288BC89DAFF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_0, _stringLiteral1A9C4D54493AF268DF4091287D15288BC89DAFF2, NULL);
		((GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_StaticFields*)il2cpp_codegen_static_fields_for(GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var))->___ProgramIdKey_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_StaticFields*)il2cpp_codegen_static_fields_for(GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var))->___ProgramIdKey_0), (void*)L_0);
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
// System.UInt64 Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::get_ACCOUNT_DISCRIMINATOR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SessionToken_get_ACCOUNT_DISCRIMINATOR_mACE36995A155A28B3635B3D8DB22431443592ED2 (const RuntimeMethod* method) 
{
	{
		return ((int64_t)1081168673100727529LL);
	}
}
// System.ReadOnlySpan`1<System.Byte> Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::get_ACCOUNT_DISCRIMINATOR_BYTES()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D SessionToken_get_ACCOUNT_DISCRIMINATOR_BYTES_m52B2AEED26C6FB3DFBA959CDD89AE52B506A1962 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t99C5038D162F0595148BCC52DA733C3367169254_StaticFields____FF01D01BABDB0E95A0EED51619E30E889F1FD84F7917F83FA68D6D63B7258AD1_0_RVAStorage);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		memset((&L_0), 0, sizeof(L_0));
		ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_inline((&L_0), (void*)((int64_t*)U3CPrivateImplementationDetailsU3E_t99C5038D162F0595148BCC52DA733C3367169254_StaticFields____FF01D01BABDB0E95A0EED51619E30E889F1FD84F7917F83FA68D6D63B7258AD1_0_RVAStorage), 8, /*hidden argument*/ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		return L_0;
	}
}
// System.String Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::get_ACCOUNT_DISCRIMINATOR_B58()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionToken_get_ACCOUNT_DISCRIMINATOR_B58_mC5C954065D7C1DE8B92DA41AD6B11D6478BF402F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8DD721CBCB1D209D42A056FD00504980C06199D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE8DD721CBCB1D209D42A056FD00504980C06199D;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::get_Authority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* SessionToken_get_Authority_mBE9D43C58C052DD8FA6A57630AE664B5FA1F9286 (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CAuthorityU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::set_Authority(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionToken_set_Authority_m0CCDB8D5254D25880867F0A14EFB7E0BC898CBB1 (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CAuthorityU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorityU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::get_TargetProgram()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* SessionToken_get_TargetProgram_m68CE8EE7450A44EB2FDBFD6E57B1DD8663E8E088 (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CTargetProgramU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::set_TargetProgram(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionToken_set_TargetProgram_m5C9303EA22972292633C13679CE2D19C696788D7 (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CTargetProgramU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetProgramU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::get_SessionSigner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* SessionToken_get_SessionSigner_m9ADD59F5751EED083FBE93D82EB73DF951775C4F (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionSignerU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::set_SessionSigner(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionToken_set_SessionSigner_m7BFEEAEE23514526992B1E6CBE3E186556632E6C (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSessionSignerU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionSignerU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Int64 Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::get_ValidUntil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SessionToken_get_ValidUntil_mA6F32B19AD315C4A1E3BC74720EB3528D2F4B0F8 (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CValidUntilU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::set_ValidUntil(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionToken_set_ValidUntil_m6B9398B982DFBF5510B8991491152C7E448332D2 (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CValidUntilU3Ek__BackingField_3 = L_0;
		return;
	}
}
// Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::Deserialize(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* SessionToken_Deserialize_m3BF5D0DB6A9F7362457926656B7A533697C70C3B (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ____data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ____data0;
		int32_t L_1 = V_0;
		uint64_t L_2;
		L_2 = Deserialization_GetU64_mC98F85DD4A05F61BE85FE5859415236D81086FAD(L_0, L_1, NULL);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 8));
		uint64_t L_4;
		L_4 = SessionToken_get_ACCOUNT_DISCRIMINATOR_mACE36995A155A28B3635B3D8DB22431443592ED2(NULL);
		if ((((int64_t)L_2) == ((int64_t)L_4)))
		{
			goto IL_0016;
		}
	}
	{
		return (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B*)NULL;
	}

IL_0016:
	{
		SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* L_5 = (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B*)il2cpp_codegen_object_new(SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SessionToken__ctor_m8D766BAD94A2892D86E07850D54DA5AE651EE34A(L_5, NULL);
		SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* L_6 = L_5;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7 = ____data0;
		int32_t L_8 = V_0;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_9;
		L_9 = Deserialization_GetPubKey_mF8D0AD08885CC383A8A479802D3422F6557ABDA9(L_7, L_8, NULL);
		NullCheck(L_6);
		SessionToken_set_Authority_m0CCDB8D5254D25880867F0A14EFB7E0BC898CBB1_inline(L_6, L_9, NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)32)));
		SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* L_11 = L_6;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_12 = ____data0;
		int32_t L_13 = V_0;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_14;
		L_14 = Deserialization_GetPubKey_mF8D0AD08885CC383A8A479802D3422F6557ABDA9(L_12, L_13, NULL);
		NullCheck(L_11);
		SessionToken_set_TargetProgram_m5C9303EA22972292633C13679CE2D19C696788D7_inline(L_11, L_14, NULL);
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)32)));
		SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* L_16 = L_11;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_17 = ____data0;
		int32_t L_18 = V_0;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_19;
		L_19 = Deserialization_GetPubKey_mF8D0AD08885CC383A8A479802D3422F6557ABDA9(L_17, L_18, NULL);
		NullCheck(L_16);
		SessionToken_set_SessionSigner_m7BFEEAEE23514526992B1E6CBE3E186556632E6C_inline(L_16, L_19, NULL);
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)32)));
		SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* L_21 = L_16;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_22 = ____data0;
		int32_t L_23 = V_0;
		int64_t L_24;
		L_24 = Deserialization_GetS64_m641113ED969E0E50706C20383F10EB0F8CE3959A(L_22, L_23, NULL);
		NullCheck(L_21);
		SessionToken_set_ValidUntil_m6B9398B982DFBF5510B8991491152C7E448332D2_inline(L_21, L_24, NULL);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 8));
		return L_21;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::DeriveSessionTokenAccount(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* SessionToken_DeriveSessionTokenAccount_mE42821DF9028866E9B0C8CE13B9898A17868B2A3 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___authority0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___targetProgram1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___sessionSigner2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		s_Il2CppMethodInitialized = true;
	}
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1 = L_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		NullCheck(L_1);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_1, L_3, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_4 = L_1;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_5 = ___targetProgram1;
		il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = PublicKey_op_Implicit_m0B79D637828C6C7C24F7C9C31002B7ACBEB44D61(L_5, NULL);
		NullCheck(L_4);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_4, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_7 = L_4;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_8 = ___sessionSigner2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = PublicKey_op_Implicit_m0B79D637828C6C7C24F7C9C31002B7ACBEB44D61(L_8, NULL);
		NullCheck(L_7);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_7, L_9, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_10 = L_7;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_11 = ___authority0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = PublicKey_op_Implicit_m0B79D637828C6C7C24F7C9C31002B7ACBEB44D61(L_11, NULL);
		NullCheck(L_10);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_10, L_12, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_13 = ((GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_StaticFields*)il2cpp_codegen_static_fields_for(GplSessionProgram_tBA60C769558FE3A7557CE4406727DC2D5C85039A_il2cpp_TypeInfo_var))->___ProgramIdKey_0;
		bool L_14;
		L_14 = PublicKey_TryFindProgramAddress_m380002D59B3888237ABE355B8B8365E1503A6409(L_10, L_13, (&V_0), (&V_1), NULL);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_15 = V_0;
		return L_15;
	}
}
// System.Void Solana.Unity.SessionKeys.GplSession.Accounts.SessionToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionToken__ctor_m8D766BAD94A2892D86E07850D54DA5AE651EE34A (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* AccountKeyPair_get_Account_m1953E7F21E2813875D1B5088D80206F6BA7685B0_inline (AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* __this, const RuntimeMethod* method) 
{
	{
		AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_0 = __this->___U3CAccountU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646_inline (AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseClient_get_RpcClient_mDC99C59F85131FF26A4B3A336BED28115177FAE4_inline (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CRpcClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemCmp_set_Bytes_mCDC0CAE1E02E4847F4BD1155280B968EA5E4E550_inline (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CBytesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBytesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemCmp_set_Offset_mCB83B81A3939A37B8DF0EFD827F906F7814E4ECC_inline (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3COffsetU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseClient_get_StreamingRpcClient_m31A16EE3DE5B5391430A9D3ADAEB2B563676A46B_inline (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CStreamingRpcClientU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SessionToken_m5BE46334FE14D5DFE41BF9E5E5F804ECD2618D5B_inline (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SessionSigner_m7E4861599830F4A968261343767CA446FC54762B_inline (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionSignerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_Authority_mF45FB49A13442BDBB5BA231B3AA8177A38EF0E49_inline (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CAuthorityU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_TargetProgram_m4B3B689B762A7381C88CC2CE34CCD986533DD683_inline (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CTargetProgramU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SystemProgram_m1F09BAC4E93C34F3BF0B50664E363C9D05F4E44B_inline (CreateSessionAccounts_tDD77D376800A66F1A3924539A18CFB75029908EC* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSystemProgramU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionInstruction_set_Keys_mEE992F580C4FB052CA6D59F4DDE06C1C00587226_inline (TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CKeysU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeysU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionInstruction_set_ProgramId_mB99504E26550E308C1FFDA8EFF9DBDEE582A9C52_inline (TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CProgramIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProgramIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionInstruction_set_Data_m04A7F7910F30C3CC2DA1A9AA4470C609BE5A7797_inline (TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_SessionToken_mBAF199E5DFBE9960737CA7196C7BD04EB29DEA41_inline (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_Authority_mA1A3E94B4BD4823301729C9324EE6FB5E80A9C8C_inline (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CAuthorityU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_SystemProgram_mF6130C374C2DEA54BD97BD04C599A98946803FBB_inline (RevokeSessionAccounts_tA8E2616609483926B8CB4C6E3B8F8A022BD9ACF0* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSystemProgramU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_Authority_m0CCDB8D5254D25880867F0A14EFB7E0BC898CBB1_inline (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CAuthorityU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorityU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_TargetProgram_m5C9303EA22972292633C13679CE2D19C696788D7_inline (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CTargetProgramU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetProgramU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_SessionSigner_m7BFEEAEE23514526992B1E6CBE3E186556632E6C_inline (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSessionSignerU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionSignerU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_ValidUntil_m6B9398B982DFBF5510B8991491152C7E448332D2_inline (SessionToken_t4C50A99A5AE15950A6FE586B82ABB91AA6C8496B* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CValidUntilU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ResponseValue_1_get_Value_m6C5854737B78630F19EC3D59B572C8A944FE1A18_gshared_inline (ResponseValue_1_t8663D687999D2DEE6072DDA9FD2059BBDE351512* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CValueU3Ek__BackingField_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline (RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CResultU3Ek__BackingField_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___pointer0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___length1;
		__this->____length_1 = L_6;
		return;
	}
}
