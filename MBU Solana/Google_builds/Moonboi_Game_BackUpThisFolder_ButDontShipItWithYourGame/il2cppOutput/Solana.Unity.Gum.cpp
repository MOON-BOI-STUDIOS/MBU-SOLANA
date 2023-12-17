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
// Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>
struct AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>
struct Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58;
// System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.Gum.GplSession.Accounts.SessionToken>
struct Action_3_t14CCC75DB8D4FE7D99A21E7D0002716F39C6AB6A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>>
struct Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A;
// System.EventHandler`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionEvent>
struct EventHandler_1_t9AC229760B9490681DC11804AD73AD6526CBD64B;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<Solana.Unity.Rpc.Models.AccountKeyPair,Solana.Unity.Gum.GplSession.Accounts.SessionToken>
struct Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D;
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
// System.Collections.Generic.IEnumerable`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>
struct IEnumerable_1_t35733E7D1735C4C247633EB76F3063FA9C87C49E;
// System.Collections.Generic.IEqualityComparer`1<System.UInt32>
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
// System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.AccountMeta>
struct IList_1_t9A5C9737E26A667715B960D3844A419275F5807B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>>
struct KeyCollection_tB1A926F5DF8D2AC13956BD3968A25B8608E0B35B;
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
// System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>
struct List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>
struct ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2;
// Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Object>
struct ProgramAccountsResultWrapper_1_t2E23C3EEE04E0082AE901B603A75F7E3A4991CB8;
// Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>
struct ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B;
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
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>
struct TaskFactory_1_tA8474EF46C700E5265A55AC743999F536DA3FDDE;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>>
struct TaskFactory_1_tCB0E5D774AB92B5754A89364062C246B2BEA713D;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>
struct TaskFactory_1_t1520ECA0306439B4A27571EFD01BE60EF1F68D2E;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>>
struct TaskFactory_1_t2C549A1BAA259E2D1102F7A646047EEC25C8BF6C;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>
struct TaskFactory_1_tCEEA6255AC75CD14CEB27326ECAE7A87FEE55EDE;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>
struct TaskFactory_1_tD42A16C5814A88CB41DB7C51B62713FC83E5F356;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>
struct Task_1_t83BDC09668E59B5A1953F9E660089C53B49161B0;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>>
struct Task_1_tDCAF09BCB136DD575C09032DDFD317123A828A7F;
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
// Solana.Unity.Programs.Abstract.TransactionalBaseClient`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>
struct TransactionalBaseClient_1_t044CD941558EE546E02C9EF40261B0D612727966;
// Solana.Unity.Programs.Abstract.TransactionalBaseClient`1<System.UInt32Enum>
struct TransactionalBaseClient_1_t4FFA641AF272BE598783919208D86E4ECD125DE6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>>
struct ValueCollection_t193192C7BACC1A2A5BD5591429475C11630A45BF;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>>[]
struct EntryU5BU5D_tA7AF8C62CD720C7D85B6158A4254599225036802;
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
// Solana.Unity.Gum.GplSession.Accounts.SessionToken[]
struct SessionTokenU5BU5D_t53B1B81CA77EF18006C1FFEED92901A6F49BB9D9;
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
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
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
// Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts
struct CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB2AEE53B4CB5C290294D802ADB874F1D52102B5B;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Solana.Unity.Rpc.Models.ErrorData
struct ErrorData_t49373BB7C78A299593CF1FF546FFB3DCC8A9E5B8;
// System.Exception
struct Exception_t;
// Solana.Unity.Gum.GplSession.GplSessionClient
struct GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880;
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
// Solana.Unity.Rpc.Models.MemCmp
struct MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Solana.Unity.Wallet.PublicKey
struct PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751;
// System.Runtime.CompilerServices.RefSafetyRulesAttribute
struct RefSafetyRulesAttribute_t44A84CB0CEB7D40477C9F898FC527BB071402488;
// Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts
struct RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Solana.Unity.Gum.GplSession.Accounts.SessionToken
struct SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42;
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
// Solana.Unity.Gum.GplSession.GplSessionClient/<>c
struct U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C;
// Solana.Unity.Gum.GplSession.GplSessionClient/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStreamingRpcClient_tD95D1830E2CE0EFC8A302FAC12CC93BAC7C76B3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral080660E8EAAF1265B4149510A09EC2C67B2F6EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral3BB2E526ED1FB378E7D5E024906EB5B93912DBCE;
IL2CPP_EXTERN_C String_t* _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990;
IL2CPP_EXTERN_C String_t* _stringLiteralC499D64877849DB4B53913F9ABC6253ECB35E58D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9C39B3CEB153B3DAD54710F463B8C83E202AB9;
IL2CPP_EXTERN_C String_t* _stringLiteralE8DD721CBCB1D209D42A056FD00504980C06199D;
IL2CPP_EXTERN_C const RuntimeMethod* AccountResultWrapper_1__ctor_m5BCF1E0EF46ED37645F946CB7579F1D55299FCC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AccountResultWrapper_1__ctor_m6474A00913333EEE36236E0267DB43512D262101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_mADAB7E50626CEC2B9AE7CC7712DD0223928A45C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m3AF4FFB7BEB6CF289FAC75F51894CC76B7882991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_m723D87F5756129D590AADB204BCD0B0E4F5F074E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_m18366C1D5EB7066E8BB220B1800444CDA87EC0CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mE9788331DDFF177ED3CDF8B463FC8D946FDB8395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m1D81FD5F4274CCC9D7E01D983A67B0C58C89CFA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4A6D286C83DED1D2D0FF2B20787981BAA487B661_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4D99FF6BE7560C6B4DCA95D56C9C4B00BEF4A986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m354526EADBE537610A7DD820B84C0E11BEBDC348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m6DE396BEBBC4B508D4CBCDBA3E19BCE1D4579F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m9452DEA20FF8B0AD63AD413F48523942F2746511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF8538A444709A8E4AAA70E7321CF90352A754D87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m113A07686FEAB51013F960F33FE6F8A487FF50B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m31AC3A767596473E4ED13727AE134EE13A12F2C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m4B1BCD2CBF4E4CD3EA481B227BDE61F1BE18E414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m001F0C76FC83EB587A0A52E180CCB3C3D2B0ED39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m0DFDC6BEBF368C4E75EC0FAD7D1DE3C0293A6884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m1972CD1BCF2A8C2ABA99BB6576B585927327A881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mD29C5666A733F70AA758EEBB93FEBF32394C8CD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_m55F0FBEB8F583DEDA09AD3CE987371664FB612B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_mCFEFA3C77F9834F5AF8885B82838EB24D1A99188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m22B380C7F0A3D372A793CA720605493BCFC86CBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_m1A05576148DD7171B1E7B15441BC6A956885C4FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mEAB8E20578D005AC15919D645AC9F6489291E34C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m381E2D457FEFD5A2D00F010D72D6BD8CF0E1CB0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m3BB0D768B82C00C9D57FAFA4DC085E7758FE5655_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mCB8E365BD548B3CE8F2731502E883642DA2D2060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mBB1A8E9153B7E47B9FBC80C7278497645856E03F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m53E4E682C7E9187A9CDC1B262F3480668BB5EB7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisAccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C_TisSessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42_m8D24D3973D37AA3D2113C8B983AEE0E758773FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mEC70303E6F31052FBFFE49CF82D9DC682E42C982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m05D5A179D674E5B3277D3BFF1C7436DE0CF6B456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152_RuntimeMethod_var;
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
IL2CPP_EXTERN_C const RuntimeMethod* ProgramAccountsResultWrapper_1__ctor_m6524A0CD8037C61ADC864DB2615F1B1F9F80FAA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProgramAccountsResultWrapper_1__ctor_m78E931E90E46B1A14C31B53E15F5AB4D60EF9A8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProgramError_1__ctor_m3C3C63088BD2ED3DFE18ADD8E15AB386BDB10510_RuntimeMethod_var;
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
IL2CPP_EXTERN_C const RuntimeMethod* TransactionalBaseClient_1_SignAndSendTransaction_m6C62CFC2AC8455658B0F5C2DB43D0BFDBD6A4213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransactionalBaseClient_1__ctor_m893A3E8EC40FA79D9C0181080FD1F5ABE9F93597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetSessionTokensAsyncU3Eb__1_0_m037163DC2147D11275E21A80471791D36DF96BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CSubscribeSessionTokenAsyncU3Eb__0_m11FCBA3EC484B3D1764F033A6EA2A952625D5618_RuntimeMethod_var;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t666DC25B694A6622FF8CB817B4D2F67D75F8E98E_StaticFields____FF01D01BABDB0E95A0EED51619E30E889F1FD84F7917F83FA68D6D63B7258AD1_0_RVAStorage;
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
struct U3CModuleU3E_t60CEACEBB80C95B3D0F2E18AA987D0285A0219A7 
{
};

// System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>>
struct Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA7AF8C62CD720C7D85B6158A4254599225036802* ____entries_1;
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
	KeyCollection_tB1A926F5DF8D2AC13956BD3968A25B8608E0B35B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t193192C7BACC1A2A5BD5591429475C11630A45BF* ____values_8;
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

// System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>
struct List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SessionTokenU5BU5D_t53B1B81CA77EF18006C1FFEED92901A6F49BB9D9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SessionTokenU5BU5D_t53B1B81CA77EF18006C1FFEED92901A6F49BB9D9* ___s_emptyArray_5;
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

// Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>
struct ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B  : public RuntimeObject
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

// Solana.Unity.Programs.Models.ResultWrapper`2<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>,System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>
struct ResultWrapper_2_tB16FA16BDCAB29D39F957A29AA9B1245A26D1F09  : public RuntimeObject
{
	// Solana.Unity.Rpc.Core.Http.RequestResult`1<T> Solana.Unity.Programs.Models.ResultWrapper`2::<OriginalRequest>k__BackingField
	RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* ___U3COriginalRequestU3Ek__BackingField_0;
	// T2 Solana.Unity.Programs.Models.ResultWrapper`2::<ParsedResult>k__BackingField
	List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29* ___U3CParsedResultU3Ek__BackingField_1;
};

// Solana.Unity.Programs.Models.ResultWrapper`2<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.Gum.GplSession.Accounts.SessionToken>
struct ResultWrapper_2_t076060AFFA625E8B2708FB4FC2DAB1231EA60FE0  : public RuntimeObject
{
	// Solana.Unity.Rpc.Core.Http.RequestResult`1<T> Solana.Unity.Programs.Models.ResultWrapper`2::<OriginalRequest>k__BackingField
	RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___U3COriginalRequestU3Ek__BackingField_0;
	// T2 Solana.Unity.Programs.Models.ResultWrapper`2::<ParsedResult>k__BackingField
	SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* ___U3CParsedResultU3Ek__BackingField_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t666DC25B694A6622FF8CB817B4D2F67D75F8E98E  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t666DC25B694A6622FF8CB817B4D2F67D75F8E98E_StaticFields
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

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

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

// Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts
struct CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::<SessionToken>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CSessionTokenU3Ek__BackingField_0;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::<SessionSigner>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CSessionSignerU3Ek__BackingField_1;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::<Authority>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CAuthorityU3Ek__BackingField_2;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::<TargetProgram>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CTargetProgramU3Ek__BackingField_3;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::<SystemProgram>k__BackingField
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

// Solana.Unity.Gum.GplSession.Program.GplSessionProgram
struct GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA  : public RuntimeObject
{
};

struct GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_StaticFields
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.GplSessionProgram::ProgramIdKey
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

// Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts
struct RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::<SessionToken>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CSessionTokenU3Ek__BackingField_0;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::<Authority>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CAuthorityU3Ek__BackingField_1;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::<SystemProgram>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CSystemProgramU3Ek__BackingField_2;
};

// Solana.Unity.Gum.GplSession.Accounts.SessionToken
struct SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Accounts.SessionToken::<Authority>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CAuthorityU3Ek__BackingField_0;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Accounts.SessionToken::<TargetProgram>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CTargetProgramU3Ek__BackingField_1;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Accounts.SessionToken::<SessionSigner>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CSessionSignerU3Ek__BackingField_2;
	// System.Int64 Solana.Unity.Gum.GplSession.Accounts.SessionToken::<ValidUntil>k__BackingField
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
	// System.String Solana.Unity.Rpc.Core.Sockets.SubscriptionState::<LastError>k__BackingField
	String_t* ___U3CLastErrorU3Ek__BackingField_4;
	// System.String Solana.Unity.Rpc.Core.Sockets.SubscriptionState::<LastCode>k__BackingField
	String_t* ___U3CLastCodeU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.Object> Solana.Unity.Rpc.Core.Sockets.SubscriptionState::<AdditionalParameters>k__BackingField
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___U3CAdditionalParametersU3Ek__BackingField_6;
	// System.EventHandler`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionEvent> Solana.Unity.Rpc.Core.Sockets.SubscriptionState::SubscriptionChanged
	EventHandler_1_t9AC229760B9490681DC11804AD73AD6526CBD64B* ___SubscriptionChanged_7;
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

// Solana.Unity.Gum.GplSession.GplSessionClient/<>c
struct U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C  : public RuntimeObject
{
};

struct U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_StaticFields
{
	// Solana.Unity.Gum.GplSession.GplSessionClient/<>c Solana.Unity.Gum.GplSession.GplSessionClient/<>c::<>9
	U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C* ___U3CU3E9_0;
	// System.Func`2<Solana.Unity.Rpc.Models.AccountKeyPair,Solana.Unity.Gum.GplSession.Accounts.SessionToken> Solana.Unity.Gum.GplSession.GplSessionClient/<>c::<>9__1_0
	Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D* ___U3CU3E9__1_0_1;
};

// Solana.Unity.Gum.GplSession.GplSessionClient/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE  : public RuntimeObject
{
	// System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.Gum.GplSession.Accounts.SessionToken> Solana.Unity.Gum.GplSession.GplSessionClient/<>c__DisplayClass3_0::callback
	Action_3_t14CCC75DB8D4FE7D99A21E7D0002716F39C6AB6A* ___callback_0;
};

// Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>
struct AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA  : public ResultWrapper_2_t076060AFFA625E8B2708FB4FC2DAB1231EA60FE0
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

// Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>
struct ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2  : public ResultWrapper_2_tB16FA16BDCAB29D39F957A29AA9B1245A26D1F09
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

// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>
struct Task_1_t83BDC09668E59B5A1953F9E660089C53B49161B0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA* ___m_result_38;
};

struct Task_1_t83BDC09668E59B5A1953F9E660089C53B49161B0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA8474EF46C700E5265A55AC743999F536DA3FDDE* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>>
struct Task_1_tDCAF09BCB136DD575C09032DDFD317123A828A7F  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2* ___m_result_38;
};

struct Task_1_tDCAF09BCB136DD575C09032DDFD317123A828A7F_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tCB0E5D774AB92B5754A89364062C246B2BEA713D* ___s_defaultFactory_39;
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

// Solana.Unity.Programs.Abstract.TransactionalBaseClient`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>
struct TransactionalBaseClient_1_t044CD941558EE546E02C9EF40261B0D612727966  : public BaseClient_t17729739896F3595EC6D20C2273EA5558597A030
{
	// System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<TEnum>> Solana.Unity.Programs.Abstract.TransactionalBaseClient`1::<ProgramErrors>k__BackingField
	Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206* ___U3CProgramErrorsU3Ek__BackingField_3;
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

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB2AEE53B4CB5C290294D802ADB874F1D52102B5B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
struct RefSafetyRulesAttribute_t44A84CB0CEB7D40477C9F898FC527BB071402488  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 System.Runtime.CompilerServices.RefSafetyRulesAttribute::Version
	int32_t ___Version_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>
struct AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t83BDC09668E59B5A1953F9E660089C53B49161B0* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t83BDC09668E59B5A1953F9E660089C53B49161B0* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>>
struct AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tDCAF09BCB136DD575C09032DDFD317123A828A7F* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tDCAF09BCB136DD575C09032DDFD317123A828A7F* ___s_defaultResultTask_0;
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

// Solana.Unity.Gum.GplSession.GplSessionClient
struct GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880  : public TransactionalBaseClient_1_t044CD941558EE546E02C9EF40261B0D612727966
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

// Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2
struct U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6 
{
	// System.Int32 Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>> Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::<>t__builder
	AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7 ___U3CU3Et__builder_1;
	// Solana.Unity.Gum.GplSession.GplSessionClient Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::<>4__this
	GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* ___U3CU3E4__this_2;
	// System.String Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::accountAddress
	String_t* ___accountAddress_3;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::commitment
	int32_t ___commitment_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>> Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::<>u__1
	TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378 ___U3CU3Eu__1_5;
};

// Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1
struct U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7 
{
	// System.Int32 Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>> Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::<>t__builder
	AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF ___U3CU3Et__builder_1;
	// Solana.Unity.Gum.GplSession.GplSessionClient Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::<>4__this
	GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* ___U3CU3E4__this_2;
	// System.String Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::programAddress
	String_t* ___programAddress_3;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::commitment
	int32_t ___commitment_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>> Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::<>u__1
	TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E ___U3CU3Eu__1_5;
};

// Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4
struct U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9 
{
	// System.Int32 Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::<>t__builder
	AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 ___U3CU3Et__builder_1;
	// Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::accounts
	CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* ___accounts_2;
	// System.Nullable`1<System.Boolean> Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::topUp
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___topUp_3;
	// System.Nullable`1<System.Int64> Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::validUntil
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___validUntil_4;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::programId
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId_5;
	// Solana.Unity.Gum.GplSession.GplSessionClient Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::<>4__this
	GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* ___U3CU3E4__this_6;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::feePayer
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer_7;
	// System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]> Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::signingCallback
	Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* ___signingCallback_8;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::<>u__1
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 ___U3CU3Eu__1_9;
};

// Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5
struct U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6 
{
	// System.Int32 Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 ___U3CU3Et__builder_1;
	// Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::accounts
	RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* ___accounts_2;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::programId
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId_3;
	// Solana.Unity.Gum.GplSession.GplSessionClient Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::<>4__this
	GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* ___U3CU3E4__this_4;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::feePayer
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer_5;
	// System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]> Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::signingCallback
	Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* ___signingCallback_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::<>u__1
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 ___U3CU3Eu__1_7;
};

// Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3
struct U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448 
{
	// System.Int32 Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9 ___U3CU3Et__builder_1;
	// System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.Gum.GplSession.Accounts.SessionToken> Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::callback
	Action_3_t14CCC75DB8D4FE7D99A21E7D0002716F39C6AB6A* ___callback_2;
	// Solana.Unity.Gum.GplSession.GplSessionClient Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::<>4__this
	GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* ___U3CU3E4__this_3;
	// System.String Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::accountAddress
	String_t* ___accountAddress_4;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::commitment
	int32_t ___commitment_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::<>u__1
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

// System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.Gum.GplSession.Accounts.SessionToken>
struct Action_3_t14CCC75DB8D4FE7D99A21E7D0002716F39C6AB6A  : public MulticastDelegate_t
{
};

// System.Func`2<Solana.Unity.Rpc.Models.AccountKeyPair,Solana.Unity.Gum.GplSession.Accounts.SessionToken>
struct Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D  : public MulticastDelegate_t
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_m5E406F639F370ED68B24CAE0FEA795FB24A63E92_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_m5F85993EC15CE9C7957EA9CF773BFF97D8B12542_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mF49202E8A99F52317529E407443D6CA1C96272FE_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m76786A98656BC1B40642A0DC367F07830BDD9AB3_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_m7E70A4A15EE7921024257C00EEE90857417BF042_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6* ___stateMachine0, const RuntimeMethod* method) ;
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_m78C3770753F441C3499C56C9A826EAEF5F134DD9_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6* ___stateMachine1, const RuntimeMethod* method) ;
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_mAED175679E52A28FA36801B47C66B33A8ED4BE99_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7* ___stateMachine1, const RuntimeMethod* method) ;
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m0E85F722D12FB9DF222F8EE27D15AF910B420D0B_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_mD9688098B9C041D8BD441837C6A0C2C37A3509E5_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mBE1D0597B16E796DA43EABEED06984A6204BE7B4_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448* ___stateMachine1, const RuntimeMethod* method) ;
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

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Abstract.TransactionalBaseClient`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>::.ctor(Solana.Unity.Rpc.IRpcClient,Solana.Unity.Rpc.IStreamingRpcClient,Solana.Unity.Wallet.PublicKey)
inline void TransactionalBaseClient_1__ctor_m893A3E8EC40FA79D9C0181080FD1F5ABE9F93597 (TransactionalBaseClient_1_t044CD941558EE546E02C9EF40261B0D612727966* __this, RuntimeObject* ___rpcClient0, RuntimeObject* ___streamingRpcClient1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId2, const RuntimeMethod* method)
{
	((  void (*) (TransactionalBaseClient_1_t044CD941558EE546E02C9EF40261B0D612727966*, RuntimeObject*, RuntimeObject*, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*, const RuntimeMethod*))TransactionalBaseClient_1__ctor_mBB0EE868235B80BA84467DE82543C08C6362BBB2_gshared)(__this, ___rpcClient0, ___streamingRpcClient1, ___programId2, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>>::Create()
inline AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF AsyncTaskMethodBuilder_1_Create_m1D81FD5F4274CCC9D7E01D983A67B0C58C89CFA5 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>>::Start<Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_mCFEFA3C77F9834F5AF8885B82838EB24D1A99188 (AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF* __this, U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF*, U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_m5E406F639F370ED68B24CAE0FEA795FB24A63E92_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>>::get_Task()
inline Task_1_tDCAF09BCB136DD575C09032DDFD317123A828A7F* AsyncTaskMethodBuilder_1_get_Task_m3BB0D768B82C00C9D57FAFA4DC085E7758FE5655 (AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tDCAF09BCB136DD575C09032DDFD317123A828A7F* (*) (AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>::Create()
inline AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7 AsyncTaskMethodBuilder_1_Create_m4D99FF6BE7560C6B4DCA95D56C9C4B00BEF4A986 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>::Start<Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_m55F0FBEB8F583DEDA09AD3CE987371664FB612B7 (AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7* __this, U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7*, U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_m5F85993EC15CE9C7957EA9CF773BFF97D8B12542_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>::get_Task()
inline Task_1_t83BDC09668E59B5A1953F9E660089C53B49161B0* AsyncTaskMethodBuilder_1_get_Task_mCB8E365BD548B3CE8F2731502E883642DA2D2060 (AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t83BDC09668E59B5A1953F9E660089C53B49161B0* (*) (AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::Create()
inline AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9 AsyncTaskMethodBuilder_1_Create_m4A6D286C83DED1D2D0FF2B20787981BAA487B661 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::Start<Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mEAB8E20578D005AC15919D645AC9F6489291E34C (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* __this, U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9*, U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mF49202E8A99F52317529E407443D6CA1C96272FE_gshared)(__this, ___stateMachine0, method);
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::Start<Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m22B380C7F0A3D372A793CA720605493BCFC86CBB (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m76786A98656BC1B40642A0DC367F07830BDD9AB3_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::get_Task()
inline Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::Start<Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_m1A05576148DD7171B1E7B15441BC6A956885C4FB (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_m7E70A4A15EE7921024257C00EEE90857417BF042_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>>::.ctor()
inline void Dictionary_2__ctor_m53E4E682C7E9187A9CDC1B262F3480668BB5EB7F (Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206*, const RuntimeMethod*))Dictionary_2__ctor_m5F2C53FF0072F4015E5D14621F555D29B1EB79E5_gshared)(__this, method);
}
// System.Void Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>::.ctor(T,System.String)
inline void ProgramError_1__ctor_m3C3C63088BD2ED3DFE18ADD8E15AB386BDB10510 (ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B* __this, uint32_t ___value0, String_t* ___message1, const RuntimeMethod* method)
{
	((  void (*) (ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B*, uint32_t, String_t*, const RuntimeMethod*))ProgramError_1__ctor_m49A36855BD402230B48A2D926174CE866F1A15FC_gshared)(__this, ___value0, ___message1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mBB1A8E9153B7E47B9FBC80C7278497645856E03F (Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206* __this, uint32_t ___key0, ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206*, uint32_t, ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B*, const RuntimeMethod*))Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8377D2F4FBE10C2AB2EF3013CD399542CB56532B (U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C* __this, const RuntimeMethod* method) ;
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
// Solana.Unity.Gum.GplSession.Accounts.SessionToken Solana.Unity.Gum.GplSession.Accounts.SessionToken::Deserialize(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* SessionToken_Deserialize_m2942384E08D09B814C8B24CAE169334AF8316C6A (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ____data0, const RuntimeMethod* method) ;
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
// System.Void System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.Gum.GplSession.Accounts.SessionToken>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mDDA2FE0F91AC1E63EA3451A7B5301B320EACA70F_inline (Action_3_t14CCC75DB8D4FE7D99A21E7D0002716F39C6AB6A* __this, SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* ___arg10, ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* ___arg21, SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t14CCC75DB8D4FE7D99A21E7D0002716F39C6AB6A*, SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8*, ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195*, SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42*, const RuntimeMethod*))Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>>,Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_mADAB7E50626CEC2B9AE7CC7712DD0223928A45C7 (AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7* __this, TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378* ___awaiter0, U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7*, TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378*, U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_m78C3770753F441C3499C56C9A826EAEF5F134DD9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
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
// System.Void Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>)
inline void AccountResultWrapper_1__ctor_m5BCF1E0EF46ED37645F946CB7579F1D55299FCC1 (AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA* __this, RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA*, RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757*, const RuntimeMethod*))AccountResultWrapper_1__ctor_m0F7C2EB291A96292620339F193ECFCA48AB8367C_gshared)(__this, ___result0, method);
}
// T Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>::get_Result()
inline ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* RequestResult_1_get_Result_m44384E02DBDFC630A0EF00A474F6306C4EF8E284_inline (RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* __this, const RuntimeMethod* method)
{
	return ((  ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* (*) (RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757*, const RuntimeMethod*))RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline)(__this, method);
}
// System.Void Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>,T)
inline void AccountResultWrapper_1__ctor_m6474A00913333EEE36236E0267DB43512D262101 (AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA* __this, RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___result0, SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* ___parsedResult1, const RuntimeMethod* method)
{
	((  void (*) (AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA*, RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757*, SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42*, const RuntimeMethod*))AccountResultWrapper_1__ctor_mABE9D4F0587B514309DE5B414F5CD54FBE60710F_gshared)(__this, ___result0, ___parsedResult1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m6DE396BEBBC4B508D4CBCDBA3E19BCE1D4579F3F (AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m31AC3A767596473E4ED13727AE134EE13A12F2C5 (AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7* __this, AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7*, AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokenAsyncU3Ed__2_MoveNext_m22DC578CCDD449BCC4B2E9E4D7F318E337DA86E2 (U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m0DFDC6BEBF368C4E75EC0FAD7D1DE3C0293A6884 (AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokenAsyncU3Ed__2_SetStateMachine_m34AFBA9EF0CE51FA1E2AFD7C30E0193D031B98B6 (U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.MemCmp>::.ctor()
inline void List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152 (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Solana.Unity.Rpc.Models.MemCmp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemCmp__ctor_m57991249C7DB05E5D8154A984009A688B1D8DE6B (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.Gum.GplSession.Accounts.SessionToken::get_ACCOUNT_DISCRIMINATOR_B58()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionToken_get_ACCOUNT_DISCRIMINATOR_B58_mDFBBA63B3BF58EBEC59C35915F167713921065E7 (const RuntimeMethod* method) ;
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>,Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_m18366C1D5EB7066E8BB220B1800444CDA87EC0CB (AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF* __this, TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E* ___awaiter0, U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF*, TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E*, U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_mAED175679E52A28FA36801B47C66B33A8ED4BE99_gshared)(__this, ___awaiter0, ___stateMachine1, method);
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
// System.Void Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>)
inline void ProgramAccountsResultWrapper_1__ctor_m6524A0CD8037C61ADC864DB2615F1B1F9F80FAA5 (ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2* __this, RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* ___result0, const RuntimeMethod* method)
{
	((  void (*) (ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2*, RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288*, const RuntimeMethod*))ProgramAccountsResultWrapper_1__ctor_mC8A0D03D226BC1549871574A2D20C47840E4F97F_gshared)(__this, ___result0, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>::.ctor(System.Int32)
inline void List_1__ctor_m05D5A179D674E5B3277D3BFF1C7436DE0CF6B456 (List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Func`2<Solana.Unity.Rpc.Models.AccountKeyPair,Solana.Unity.Gum.GplSession.Accounts.SessionToken>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBFB714A4BF93C95B25A01D1946FE51BBBB1C9DBA (Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Solana.Unity.Rpc.Models.AccountKeyPair,Solana.Unity.Gum.GplSession.Accounts.SessionToken>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisAccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C_TisSessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42_m8D24D3973D37AA3D2113C8B983AEE0E758773FB3 (RuntimeObject* ___source0, Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mEC70303E6F31052FBFFE49CF82D9DC682E42C982 (List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>,T)
inline void ProgramAccountsResultWrapper_1__ctor_m78E931E90E46B1A14C31B53E15F5AB4D60EF9A8E (ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2* __this, RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* ___result0, List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29* ___parsedResult1, const RuntimeMethod* method)
{
	((  void (*) (ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2*, RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288*, List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29*, const RuntimeMethod*))ProgramAccountsResultWrapper_1__ctor_m3172B918996FD95B4DC5B3238D272F26E0245FB5_gshared)(__this, ___result0, ___parsedResult1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF8538A444709A8E4AAA70E7321CF90352A754D87 (AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m113A07686FEAB51013F960F33FE6F8A487FF50B3 (AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF* __this, ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF*, ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokensAsyncU3Ed__1_MoveNext_mF4892841CBD8ADFB8900D269B8AA51EACB82438E (U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mD29C5666A733F70AA758EEBB93FEBF32394C8CD4 (AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokensAsyncU3Ed__1_SetStateMachine_mCFD483575387D4A67F3741166DA3F8A8BC620BA0 (U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.Gum.GplSession.Program.GplSessionProgram::CreateSession(Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Int64>,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* GplSessionProgram_CreateSession_mAC9BCA8A6C1264953E6594D0F058B6968B9B9065 (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* ___accounts0, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___topUp1, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___validUntil2, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId3, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Programs.Abstract.TransactionalBaseClient`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>::SignAndSendTransaction(Solana.Unity.Rpc.Models.TransactionInstruction,Solana.Unity.Wallet.PublicKey,System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]>,Solana.Unity.Rpc.Types.Commitment)
inline Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* TransactionalBaseClient_1_SignAndSendTransaction_m6C62CFC2AC8455658B0F5C2DB43D0BFDBD6A4213 (TransactionalBaseClient_1_t044CD941558EE546E02C9EF40261B0D612727966* __this, TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* ___instruction0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer1, Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* ___signingCallback2, int32_t ___commitment3, const RuntimeMethod* method)
{
	return ((  Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* (*) (TransactionalBaseClient_1_t044CD941558EE546E02C9EF40261B0D612727966*, TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B*, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*, Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7*, int32_t, const RuntimeMethod*))TransactionalBaseClient_1_SignAndSendTransaction_mDFDE4303FA0E7A6F202CB90FD5FF400DA8D2BF98_gshared)(__this, ___instruction0, ___feePayer1, ___signingCallback2, ___commitment3, method);
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>,Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m3AF4FFB7BEB6CF289FAC75F51894CC76B7882991 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* ___awaiter0, U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935*, U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m0E85F722D12FB9DF222F8EE27D15AF910B420D0B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
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
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCreateSessionAsyncU3Ed__4_MoveNext_m00D1986E0C40951FE0F44408A9421A739898152E (U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m1972CD1BCF2A8C2ABA99BB6576B585927327A881 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCreateSessionAsyncU3Ed__4_SetStateMachine_m89D9B1B9A1BA6BF461BF3FC11F1C1DBC1D74D553 (U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.Gum.GplSession.Program.GplSessionProgram::RevokeSession(Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* GplSessionProgram_RevokeSession_mD012E2583D3C2B2FA643898EC45820A302B3E97F (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* ___accounts0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>,Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_m723D87F5756129D590AADB204BCD0B0E4F5F074E (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* ___awaiter0, U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935*, U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_mD9688098B9C041D8BD441837C6A0C2C37A3509E5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRevokeSessionAsyncU3Ed__5_MoveNext_mE8C75427876C32B9428841B7CE8B65B03E02C612 (U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRevokeSessionAsyncU3Ed__5_SetStateMachine_m354071A11E310B922A77250561CF14518CCC33B1 (U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mB178AA5D2BAE431F8DB1B23CA36263DAAA36C213 (U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE* __this, const RuntimeMethod* method) ;
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>,Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mE9788331DDFF177ED3CDF8B463FC8D946FDB8395 (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* __this, TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C* ___awaiter0, U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9*, TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C*, U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mBE1D0597B16E796DA43EABEED06984A6204BE7B4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
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
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeSessionTokenAsyncU3Ed__3_MoveNext_m9D1D498CEF9BB0D3927F1E87771F16674F8639E2 (U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m001F0C76FC83EB587A0A52E180CCB3C3D2B0ED39 (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeSessionTokenAsyncU3Ed__3_SetStateMachine_m5727FF3934B36B0FDAB8CBCC4ECA4B2AF7A11F76 (U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountMeta>::.ctor()
inline void List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC (List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::get_SessionToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SessionToken_m8438B0A602952AFE27B1FF8A1F8879BBFE7660BC_inline (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.AccountMeta Solana.Unity.Rpc.Models.AccountMeta::Writable(Solana.Unity.Wallet.PublicKey,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey0, bool ___isSigner1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountMeta>::Add(T)
inline void List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline (List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* __this, AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25*, AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::get_SessionSigner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SessionSigner_mCCC6E4E215B30E90710F3DBF741C54C141A6E855_inline (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::get_Authority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_Authority_mEECAE25E490DEB039658D8C43470EBF3CED8C8AC_inline (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::get_TargetProgram()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_TargetProgram_m933C15B55145E2ED1C6368C3A5B9F753C47950BF_inline (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.AccountMeta Solana.Unity.Rpc.Models.AccountMeta::ReadOnly(Solana.Unity.Wallet.PublicKey,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* AccountMeta_ReadOnly_m26D13CA31D86D71BC92CE39122BB120AF24D18F1 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey0, bool ___isSigner1, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::get_SystemProgram()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SystemProgram_m8B9366B95FD79C7D067075EAF74BACF8C653B368_inline (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) ;
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
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::get_SessionToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_SessionToken_m79169A09ADD8156C01C7B284BEA018FD7DAABB7D_inline (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::get_Authority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_Authority_mC99BE59864F2B291807D70AA4A2E2625E3C2D56A_inline (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::get_SystemProgram()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_SystemProgram_m3EDA5941CA48CB7000B960BE194D0DDB97297C70_inline (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Wallet.PublicKey::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* __this, String_t* ___key0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.UInt64 Solana.Unity.Programs.Utilities.Deserialization::GetU64(System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Deserialization_GetU64_mC98F85DD4A05F61BE85FE5859415236D81086FAD (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___data0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.UInt64 Solana.Unity.Gum.GplSession.Accounts.SessionToken::get_ACCOUNT_DISCRIMINATOR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SessionToken_get_ACCOUNT_DISCRIMINATOR_m8BF077BF09AA9F3C5FB612F834CAB2B2EE617D40 (const RuntimeMethod* method) ;
// System.Void Solana.Unity.Gum.GplSession.Accounts.SessionToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionToken__ctor_m687BD08C424D875AEAC3558DD670C52A134A4151 (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Utilities.Deserialization::GetPubKey(System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* Deserialization_GetPubKey_mF8D0AD08885CC383A8A479802D3422F6557ABDA9 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___data0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Gum.GplSession.Accounts.SessionToken::set_Authority(Solana.Unity.Wallet.PublicKey)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_Authority_mB372EDFB1E663EBD73D8235EAABD5CF7F574897F_inline (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Gum.GplSession.Accounts.SessionToken::set_TargetProgram(Solana.Unity.Wallet.PublicKey)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_TargetProgram_m3D284E32BE2344FBE8AAD5FDEE53E325476D1E26_inline (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Gum.GplSession.Accounts.SessionToken::set_SessionSigner(Solana.Unity.Wallet.PublicKey)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_SessionSigner_m55033D81C770EA2EF432AE67D52640AF3BB0C01F_inline (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) ;
// System.Int64 Solana.Unity.Programs.Utilities.Deserialization::GetS64(System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Deserialization_GetS64_m641113ED969E0E50706C20383F10EB0F8CE3959A (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___data0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Gum.GplSession.Accounts.SessionToken::set_ValidUntil(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_ValidUntil_m5ECFEE3C2CC9ECCB8E1EFA1E28F6460A63C2FAB0_inline (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, int64_t ___value0, const RuntimeMethod* method) ;
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mC6637F6B1B6F25A23B33B3CD6C7E7B7F16AF45CB (EmbeddedAttribute_tB2AEE53B4CB5C290294D802ADB874F1D52102B5B* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.RefSafetyRulesAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefSafetyRulesAttribute__ctor_mCE9E18DFC08376FB4E436B836697D8D8BFA3C700 (RefSafetyRulesAttribute_t44A84CB0CEB7D40477C9F898FC527BB071402488* __this, int32_t p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = p0;
		__this->___Version_0 = L_0;
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
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient::.ctor(Solana.Unity.Rpc.IRpcClient,Solana.Unity.Rpc.IStreamingRpcClient,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GplSessionClient__ctor_mFB56B57B452EBEEF71155D245C5B76DDFDDD5F1F (GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* __this, RuntimeObject* ___rpcClient0, RuntimeObject* ___streamingRpcClient1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionalBaseClient_1__ctor_m893A3E8EC40FA79D9C0181080FD1F5ABE9F93597_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___rpcClient0;
		RuntimeObject* L_1 = ___streamingRpcClient1;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_2 = ___programId2;
		TransactionalBaseClient_1__ctor_m893A3E8EC40FA79D9C0181080FD1F5ABE9F93597(__this, L_0, L_1, L_2, TransactionalBaseClient_1__ctor_m893A3E8EC40FA79D9C0181080FD1F5ABE9F93597_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>>> Solana.Unity.Gum.GplSession.GplSessionClient::GetSessionTokensAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDCAF09BCB136DD575C09032DDFD317123A828A7F* GplSessionClient_GetSessionTokensAsync_m0F548BF47545B9DAE0708013006A7FFC9B402760 (GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* __this, String_t* ___programAddress0, int32_t ___commitment1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m1D81FD5F4274CCC9D7E01D983A67B0C58C89CFA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_mCFEFA3C77F9834F5AF8885B82838EB24D1A99188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m3BB0D768B82C00C9D57FAFA4DC085E7758FE5655_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m1D81FD5F4274CCC9D7E01D983A67B0C58C89CFA5(AsyncTaskMethodBuilder_1_Create_m1D81FD5F4274CCC9D7E01D983A67B0C58C89CFA5_RuntimeMethod_var);
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
		AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_mCFEFA3C77F9834F5AF8885B82838EB24D1A99188(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_mCFEFA3C77F9834F5AF8885B82838EB24D1A99188_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tDCAF09BCB136DD575C09032DDFD317123A828A7F* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m3BB0D768B82C00C9D57FAFA4DC085E7758FE5655(L_4, AsyncTaskMethodBuilder_1_get_Task_m3BB0D768B82C00C9D57FAFA4DC085E7758FE5655_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Gum.GplSession.Accounts.SessionToken>> Solana.Unity.Gum.GplSession.GplSessionClient::GetSessionTokenAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t83BDC09668E59B5A1953F9E660089C53B49161B0* GplSessionClient_GetSessionTokenAsync_m63940DF55978EE0BD9703D09B225E30D80DCC914 (GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* __this, String_t* ___accountAddress0, int32_t ___commitment1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4D99FF6BE7560C6B4DCA95D56C9C4B00BEF4A986_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_m55F0FBEB8F583DEDA09AD3CE987371664FB612B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mCB8E365BD548B3CE8F2731502E883642DA2D2060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m4D99FF6BE7560C6B4DCA95D56C9C4B00BEF4A986(AsyncTaskMethodBuilder_1_Create_m4D99FF6BE7560C6B4DCA95D56C9C4B00BEF4A986_RuntimeMethod_var);
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
		AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_m55F0FBEB8F583DEDA09AD3CE987371664FB612B7(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_m55F0FBEB8F583DEDA09AD3CE987371664FB612B7_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t83BDC09668E59B5A1953F9E660089C53B49161B0* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mCB8E365BD548B3CE8F2731502E883642DA2D2060(L_4, AsyncTaskMethodBuilder_1_get_Task_mCB8E365BD548B3CE8F2731502E883642DA2D2060_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Gum.GplSession.GplSessionClient::SubscribeSessionTokenAsync(System.String,System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.Gum.GplSession.Accounts.SessionToken>,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5* GplSessionClient_SubscribeSessionTokenAsync_m682E0F94172351B33DC27C75C1DD70204C9D042C (GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* __this, String_t* ___accountAddress0, Action_3_t14CCC75DB8D4FE7D99A21E7D0002716F39C6AB6A* ___callback1, int32_t ___commitment2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4A6D286C83DED1D2D0FF2B20787981BAA487B661_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mEAB8E20578D005AC15919D645AC9F6489291E34C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m381E2D457FEFD5A2D00F010D72D6BD8CF0E1CB0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448 V_0;
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
		Action_3_t14CCC75DB8D4FE7D99A21E7D0002716F39C6AB6A* L_2 = ___callback1;
		(&V_0)->___callback_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___callback_2), (void*)L_2);
		int32_t L_3 = ___commitment2;
		(&V_0)->___commitment_5 = L_3;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mEAB8E20578D005AC15919D645AC9F6489291E34C(L_4, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mEAB8E20578D005AC15919D645AC9F6489291E34C_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tBBAD01C1DA593EDCD34CCC4458F63A61E57056D9* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5* L_6;
		L_6 = AsyncTaskMethodBuilder_1_get_Task_m381E2D457FEFD5A2D00F010D72D6BD8CF0E1CB0B(L_5, AsyncTaskMethodBuilder_1_get_Task_m381E2D457FEFD5A2D00F010D72D6BD8CF0E1CB0B_RuntimeMethod_var);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Gum.GplSession.GplSessionClient::SendCreateSessionAsync(Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Int64>,Solana.Unity.Wallet.PublicKey,System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]>,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* GplSessionClient_SendCreateSessionAsync_mC415C607CF8E5ABDDE1F9E8D28A3396BC603ABBE (GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* __this, CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* ___accounts0, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___topUp1, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___validUntil2, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer3, Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* ___signingCallback4, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m22B380C7F0A3D372A793CA720605493BCFC86CBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9 V_0;
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
		CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* L_1 = ___accounts0;
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
		AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m22B380C7F0A3D372A793CA720605493BCFC86CBB(L_7, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m22B380C7F0A3D372A793CA720605493BCFC86CBB_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_8 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E(L_8, AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Gum.GplSession.GplSessionClient::SendRevokeSessionAsync(Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts,Solana.Unity.Wallet.PublicKey,System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]>,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* GplSessionClient_SendRevokeSessionAsync_m2F00E269286338CDCCE3803CB8868A28D1968181 (GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* __this, RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* ___accounts0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer1, Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* ___signingCallback2, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_m1A05576148DD7171B1E7B15441BC6A956885C4FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6 V_0;
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
		RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* L_1 = ___accounts0;
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
		AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_m1A05576148DD7171B1E7B15441BC6A956885C4FB(L_5, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_m1A05576148DD7171B1E7B15441BC6A956885C4FB_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_7;
		L_7 = AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E(L_6, AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		return L_7;
	}
}
// System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<Solana.Unity.Gum.GplSession.Errors.GplSessionErrorKind>> Solana.Unity.Gum.GplSession.GplSessionClient::BuildErrorsDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206* GplSessionClient_BuildErrorsDictionary_mF073F648B467A16133A42BA688E0D52CB3604FDC (GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mBB1A8E9153B7E47B9FBC80C7278497645856E03F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m53E4E682C7E9187A9CDC1B262F3480668BB5EB7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProgramError_1__ctor_m3C3C63088BD2ED3DFE18ADD8E15AB386BDB10510_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral080660E8EAAF1265B4149510A09EC2C67B2F6EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BB2E526ED1FB378E7D5E024906EB5B93912DBCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9C39B3CEB153B3DAD54710F463B8C83E202AB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206* L_0 = (Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206*)il2cpp_codegen_object_new(Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m53E4E682C7E9187A9CDC1B262F3480668BB5EB7F(L_0, Dictionary_2__ctor_m53E4E682C7E9187A9CDC1B262F3480668BB5EB7F_RuntimeMethod_var);
		Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206* L_1 = L_0;
		ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B* L_2 = (ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B*)il2cpp_codegen_object_new(ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ProgramError_1__ctor_m3C3C63088BD2ED3DFE18ADD8E15AB386BDB10510(L_2, ((int32_t)6000), _stringLiteralCB9C39B3CEB153B3DAD54710F463B8C83E202AB9, ProgramError_1__ctor_m3C3C63088BD2ED3DFE18ADD8E15AB386BDB10510_RuntimeMethod_var);
		NullCheck(L_1);
		Dictionary_2_Add_mBB1A8E9153B7E47B9FBC80C7278497645856E03F(L_1, ((int32_t)6000), L_2, Dictionary_2_Add_mBB1A8E9153B7E47B9FBC80C7278497645856E03F_RuntimeMethod_var);
		Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206* L_3 = L_1;
		ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B* L_4 = (ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B*)il2cpp_codegen_object_new(ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ProgramError_1__ctor_m3C3C63088BD2ED3DFE18ADD8E15AB386BDB10510(L_4, ((int32_t)6001), _stringLiteral3BB2E526ED1FB378E7D5E024906EB5B93912DBCE, ProgramError_1__ctor_m3C3C63088BD2ED3DFE18ADD8E15AB386BDB10510_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_mBB1A8E9153B7E47B9FBC80C7278497645856E03F(L_3, ((int32_t)6001), L_4, Dictionary_2_Add_mBB1A8E9153B7E47B9FBC80C7278497645856E03F_RuntimeMethod_var);
		Dictionary_2_t8D729EB1DD6EFF9041AD4C5C54982A626F23C206* L_5 = L_3;
		ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B* L_6 = (ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B*)il2cpp_codegen_object_new(ProgramError_1_t0517DDCAFFFDE2871FA964E06CCB97690164DA9B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ProgramError_1__ctor_m3C3C63088BD2ED3DFE18ADD8E15AB386BDB10510(L_6, ((int32_t)6002), _stringLiteral080660E8EAAF1265B4149510A09EC2C67B2F6EAF, ProgramError_1__ctor_m3C3C63088BD2ED3DFE18ADD8E15AB386BDB10510_RuntimeMethod_var);
		NullCheck(L_5);
		Dictionary_2_Add_mBB1A8E9153B7E47B9FBC80C7278497645856E03F(L_5, ((int32_t)6002), L_6, Dictionary_2_Add_mBB1A8E9153B7E47B9FBC80C7278497645856E03F_RuntimeMethod_var);
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
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD43594B6EB66EBE2D3E0E693656227CCFD1A2ED0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C* L_0 = (U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C*)il2cpp_codegen_object_new(U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8377D2F4FBE10C2AB2EF3013CD399542CB56532B(L_0, NULL);
		((U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8377D2F4FBE10C2AB2EF3013CD399542CB56532B (U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Solana.Unity.Gum.GplSession.Accounts.SessionToken Solana.Unity.Gum.GplSession.GplSessionClient/<>c::<GetSessionTokensAsync>b__1_0(Solana.Unity.Rpc.Models.AccountKeyPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* U3CU3Ec_U3CGetSessionTokensAsyncU3Eb__1_0_m037163DC2147D11275E21A80471791D36DF96BB6 (U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C* __this, AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* ___result0, const RuntimeMethod* method) 
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
		SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* L_6;
		L_6 = SessionToken_Deserialize_m2942384E08D09B814C8B24CAE169334AF8316C6A(L_5, NULL);
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
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mB178AA5D2BAE431F8DB1B23CA36263DAAA36C213 (U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<>c__DisplayClass3_0::<SubscribeSessionTokenAsync>b__0(Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CSubscribeSessionTokenAsyncU3Eb__0_m11FCBA3EC484B3D1764F033A6EA2A952625D5618 (U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE* __this, SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* ___s0, ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* ___e1, const RuntimeMethod* method) 
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
	SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* V_0 = NULL;
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
		V_0 = (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42*)NULL;
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
		SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* L_17;
		L_17 = SessionToken_Deserialize_m2942384E08D09B814C8B24CAE169334AF8316C6A(L_16, NULL);
		V_0 = L_17;
	}

IL_0065:
	{
		Action_3_t14CCC75DB8D4FE7D99A21E7D0002716F39C6AB6A* L_18 = __this->___callback_0;
		SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* L_19 = ___s0;
		ResponseValue_1_tC8C170740C5870A6802659B4F5985D52987DA195* L_20 = ___e1;
		SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* L_21 = V_0;
		NullCheck(L_18);
		Action_3_Invoke_mDDA2FE0F91AC1E63EA3451A7B5301B320EACA70F_inline(L_18, L_19, L_20, L_21, NULL);
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
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokenAsyncU3Ed__2_MoveNext_m22DC578CCDD449BCC4B2E9E4D7F318E337DA86E2 (U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountResultWrapper_1__ctor_m5BCF1E0EF46ED37645F946CB7579F1D55299FCC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountResultWrapper_1__ctor_m6474A00913333EEE36236E0267DB43512D262101_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_mADAB7E50626CEC2B9AE7CC7712DD0223928A45C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m31AC3A767596473E4ED13727AE134EE13A12F2C5_RuntimeMethod_var);
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
	GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* V_1 = NULL;
	AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA* V_2 = NULL;
	RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* V_3 = NULL;
	SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* V_4 = NULL;
	TaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* L_1 = __this->___U3CU3E4__this_2;
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
			GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* L_3 = V_1;
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
			AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7* L_12 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_mADAB7E50626CEC2B9AE7CC7712DD0223928A45C7(L_12, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1369B76EAB93CB6BD59231F075559508A6C36378_TisU3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6_mADAB7E50626CEC2B9AE7CC7712DD0223928A45C7_RuntimeMethod_var);
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
			AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA* L_20 = (AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA*)il2cpp_codegen_object_new(AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA_il2cpp_TypeInfo_var);
			NullCheck(L_20);
			AccountResultWrapper_1__ctor_m5BCF1E0EF46ED37645F946CB7579F1D55299FCC1(L_20, L_19, AccountResultWrapper_1__ctor_m5BCF1E0EF46ED37645F946CB7579F1D55299FCC1_RuntimeMethod_var);
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
			SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* L_28;
			L_28 = SessionToken_Deserialize_m2942384E08D09B814C8B24CAE169334AF8316C6A(L_27, NULL);
			V_4 = L_28;
			RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* L_29 = V_3;
			SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* L_30 = V_4;
			AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA* L_31 = (AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA*)il2cpp_codegen_object_new(AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA_il2cpp_TypeInfo_var);
			NullCheck(L_31);
			AccountResultWrapper_1__ctor_m6474A00913333EEE36236E0267DB43512D262101(L_31, L_29, L_30, AccountResultWrapper_1__ctor_m6474A00913333EEE36236E0267DB43512D262101_RuntimeMethod_var);
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
		AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m6DE396BEBBC4B508D4CBCDBA3E19BCE1D4579F3F(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m6DE396BEBBC4B508D4CBCDBA3E19BCE1D4579F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f2;
	}// end catch (depth: 1)

IL_00de:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7* L_34 = (&__this->___U3CU3Et__builder_1);
		AccountResultWrapper_1_tCFA5DA5BFB8AA9084E458CD95B8BB4551B5A3CFA* L_35 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m31AC3A767596473E4ED13727AE134EE13A12F2C5(L_34, L_35, AsyncTaskMethodBuilder_1_SetResult_m31AC3A767596473E4ED13727AE134EE13A12F2C5_RuntimeMethod_var);
	}

IL_00f2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSessionTokenAsyncU3Ed__2_MoveNext_m22DC578CCDD449BCC4B2E9E4D7F318E337DA86E2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6*>(__this + _offset);
	U3CGetSessionTokenAsyncU3Ed__2_MoveNext_m22DC578CCDD449BCC4B2E9E4D7F318E337DA86E2(_thisAdjusted, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokenAsync>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokenAsyncU3Ed__2_SetStateMachine_m34AFBA9EF0CE51FA1E2AFD7C30E0193D031B98B6 (U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0DFDC6BEBF368C4E75EC0FAD7D1DE3C0293A6884_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t9AFDCB181307FE0EABB43CEB4FD084ED8D7ADFB7* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0DFDC6BEBF368C4E75EC0FAD7D1DE3C0293A6884(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m0DFDC6BEBF368C4E75EC0FAD7D1DE3C0293A6884_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSessionTokenAsyncU3Ed__2_SetStateMachine_m34AFBA9EF0CE51FA1E2AFD7C30E0193D031B98B6_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetSessionTokenAsyncU3Ed__2_tADCED2F5EF512648E16284856753FCD7234021C6*>(__this + _offset);
	U3CGetSessionTokenAsyncU3Ed__2_SetStateMachine_m34AFBA9EF0CE51FA1E2AFD7C30E0193D031B98B6(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokensAsyncU3Ed__1_MoveNext_mF4892841CBD8ADFB8900D269B8AA51EACB82438E (U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_m18366C1D5EB7066E8BB220B1800444CDA87EC0CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m113A07686FEAB51013F960F33FE6F8A487FF50B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisAccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C_TisSessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42_m8D24D3973D37AA3D2113C8B983AEE0E758773FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mEC70303E6F31052FBFFE49CF82D9DC682E42C982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m05D5A179D674E5B3277D3BFF1C7436DE0CF6B456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProgramAccountsResultWrapper_1__ctor_m6524A0CD8037C61ADC864DB2615F1B1F9F80FAA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProgramAccountsResultWrapper_1__ctor_m78E931E90E46B1A14C31B53E15F5AB4D60EF9A8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetSessionTokensAsyncU3Eb__1_0_m037163DC2147D11275E21A80471791D36DF96BB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* V_1 = NULL;
	ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2* V_2 = NULL;
	List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* V_3 = NULL;
	RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* V_4 = NULL;
	List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29* V_5 = NULL;
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
	Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D* G_B13_0 = NULL;
	List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* G_B13_1 = NULL;
	List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29* G_B13_2 = NULL;
	Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D* G_B12_0 = NULL;
	List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* G_B12_1 = NULL;
	List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29* G_B12_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* L_1 = __this->___U3CU3E4__this_2;
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
			L_7 = SessionToken_get_ACCOUNT_DISCRIMINATOR_B58_mDFBBA63B3BF58EBEC59C35915F167713921065E7(NULL);
			NullCheck(L_6);
			MemCmp_set_Bytes_mCDC0CAE1E02E4847F4BD1155280B968EA5E4E550_inline(L_6, L_7, NULL);
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_8 = L_6;
			NullCheck(L_8);
			MemCmp_set_Offset_mCB83B81A3939A37B8DF0EFD827F906F7814E4ECC_inline(L_8, 0, NULL);
			NullCheck(L_4);
			List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_inline(L_4, L_8, List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_RuntimeMethod_var);
			V_3 = L_4;
			GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* L_9 = V_1;
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
			AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF* L_21 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_m18366C1D5EB7066E8BB220B1800444CDA87EC0CB(L_21, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7_m18366C1D5EB7066E8BB220B1800444CDA87EC0CB_RuntimeMethod_var);
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
			ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2* L_33 = (ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2*)il2cpp_codegen_object_new(ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2_il2cpp_TypeInfo_var);
			NullCheck(L_33);
			ProgramAccountsResultWrapper_1__ctor_m6524A0CD8037C61ADC864DB2615F1B1F9F80FAA5(L_33, L_32, ProgramAccountsResultWrapper_1__ctor_m6524A0CD8037C61ADC864DB2615F1B1F9F80FAA5_RuntimeMethod_var);
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
			List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29* L_37 = (List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29*)il2cpp_codegen_object_new(List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29_il2cpp_TypeInfo_var);
			NullCheck(L_37);
			List_1__ctor_m05D5A179D674E5B3277D3BFF1C7436DE0CF6B456(L_37, L_36, List_1__ctor_m05D5A179D674E5B3277D3BFF1C7436DE0CF6B456_RuntimeMethod_var);
			V_5 = L_37;
			List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29* L_38 = V_5;
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_39 = V_4;
			NullCheck(L_39);
			List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* L_40;
			L_40 = RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_inline(L_39, RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_il2cpp_TypeInfo_var);
			Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D* L_41 = ((U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
			Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D* L_42 = L_41;
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
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_il2cpp_TypeInfo_var);
			U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C* L_43 = ((U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D* L_44 = (Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D*)il2cpp_codegen_object_new(Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D_il2cpp_TypeInfo_var);
			NullCheck(L_44);
			Func_2__ctor_mBFB714A4BF93C95B25A01D1946FE51BBBB1C9DBA(L_44, L_43, (intptr_t)((void*)U3CU3Ec_U3CGetSessionTokensAsyncU3Eb__1_0_m037163DC2147D11275E21A80471791D36DF96BB6_RuntimeMethod_var), NULL);
			Func_2_t7AEC29C4B9B2BABBB66708AE2838198E9F48069D* L_45 = L_44;
			((U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_45;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91F06207DE4DE9A3B5A7D337F90B6426D098429C_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_45);
			G_B13_0 = L_45;
			G_B13_1 = G_B12_1;
			G_B13_2 = G_B12_2;
		}

IL_011a_1:
		{
			RuntimeObject* L_46;
			L_46 = Enumerable_Select_TisAccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C_TisSessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42_m8D24D3973D37AA3D2113C8B983AEE0E758773FB3(G_B13_1, G_B13_0, Enumerable_Select_TisAccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C_TisSessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42_m8D24D3973D37AA3D2113C8B983AEE0E758773FB3_RuntimeMethod_var);
			NullCheck(G_B13_2);
			List_1_AddRange_mEC70303E6F31052FBFFE49CF82D9DC682E42C982(G_B13_2, L_46, List_1_AddRange_mEC70303E6F31052FBFFE49CF82D9DC682E42C982_RuntimeMethod_var);
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_47 = V_4;
			List_1_t07335B16A63B697A4FF7D8690382BB5DA5A3DD29* L_48 = V_5;
			ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2* L_49 = (ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2*)il2cpp_codegen_object_new(ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2_il2cpp_TypeInfo_var);
			NullCheck(L_49);
			ProgramAccountsResultWrapper_1__ctor_m78E931E90E46B1A14C31B53E15F5AB4D60EF9A8E(L_49, L_47, L_48, ProgramAccountsResultWrapper_1__ctor_m78E931E90E46B1A14C31B53E15F5AB4D60EF9A8E_RuntimeMethod_var);
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
		AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF* L_50 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_51 = V_9;
		AsyncTaskMethodBuilder_1_SetException_mF8538A444709A8E4AAA70E7321CF90352A754D87(L_50, L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF8538A444709A8E4AAA70E7321CF90352A754D87_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_015d;
	}// end catch (depth: 1)

IL_0149:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF* L_52 = (&__this->___U3CU3Et__builder_1);
		ProgramAccountsResultWrapper_1_t3C53351A0F97A5EC9485B2236C3C1B76D74E5DA2* L_53 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m113A07686FEAB51013F960F33FE6F8A487FF50B3(L_52, L_53, AsyncTaskMethodBuilder_1_SetResult_m113A07686FEAB51013F960F33FE6F8A487FF50B3_RuntimeMethod_var);
	}

IL_015d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSessionTokensAsyncU3Ed__1_MoveNext_mF4892841CBD8ADFB8900D269B8AA51EACB82438E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7*>(__this + _offset);
	U3CGetSessionTokensAsyncU3Ed__1_MoveNext_mF4892841CBD8ADFB8900D269B8AA51EACB82438E(_thisAdjusted, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<GetSessionTokensAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionTokensAsyncU3Ed__1_SetStateMachine_mCFD483575387D4A67F3741166DA3F8A8BC620BA0 (U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mD29C5666A733F70AA758EEBB93FEBF32394C8CD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC15AE77EBED71A166799FA74747822E79BB79BDF* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mD29C5666A733F70AA758EEBB93FEBF32394C8CD4(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mD29C5666A733F70AA758EEBB93FEBF32394C8CD4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSessionTokensAsyncU3Ed__1_SetStateMachine_mCFD483575387D4A67F3741166DA3F8A8BC620BA0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetSessionTokensAsyncU3Ed__1_t9A28E284FC23D6347CE3EB5A0EE74662B21BF1C7*>(__this + _offset);
	U3CGetSessionTokensAsyncU3Ed__1_SetStateMachine_mCFD483575387D4A67F3741166DA3F8A8BC620BA0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCreateSessionAsyncU3Ed__4_MoveNext_m00D1986E0C40951FE0F44408A9421A739898152E (U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m3AF4FFB7BEB6CF289FAC75F51894CC76B7882991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionalBaseClient_1_SignAndSendTransaction_m6C62CFC2AC8455658B0F5C2DB43D0BFDBD6A4213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* V_1 = NULL;
	RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* V_2 = NULL;
	TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* V_3 = NULL;
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* L_1 = __this->___U3CU3E4__this_6;
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
			CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* L_3 = __this->___accounts_2;
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_4 = __this->___topUp_3;
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_5 = __this->___validUntil_4;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_6 = __this->___programId_5;
			il2cpp_codegen_runtime_class_init_inline(GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var);
			TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_7;
			L_7 = GplSessionProgram_CreateSession_mAC9BCA8A6C1264953E6594D0F058B6968B9B9065(L_3, L_4, L_5, L_6, NULL);
			V_3 = L_7;
			GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* L_8 = V_1;
			TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_9 = V_3;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_10 = __this->___feePayer_7;
			Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* L_11 = __this->___signingCallback_8;
			NullCheck(L_8);
			Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_12;
			L_12 = TransactionalBaseClient_1_SignAndSendTransaction_m6C62CFC2AC8455658B0F5C2DB43D0BFDBD6A4213(L_8, L_9, L_10, L_11, 0, TransactionalBaseClient_1_SignAndSendTransaction_m6C62CFC2AC8455658B0F5C2DB43D0BFDBD6A4213_RuntimeMethod_var);
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
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m3AF4FFB7BEB6CF289FAC75F51894CC76B7882991(L_17, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9_m3AF4FFB7BEB6CF289FAC75F51894CC76B7882991_RuntimeMethod_var);
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
IL2CPP_EXTERN_C  void U3CSendCreateSessionAsyncU3Ed__4_MoveNext_m00D1986E0C40951FE0F44408A9421A739898152E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9*>(__this + _offset);
	U3CSendCreateSessionAsyncU3Ed__4_MoveNext_m00D1986E0C40951FE0F44408A9421A739898152E(_thisAdjusted, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<SendCreateSessionAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCreateSessionAsyncU3Ed__4_SetStateMachine_m89D9B1B9A1BA6BF461BF3FC11F1C1DBC1D74D553 (U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void U3CSendCreateSessionAsyncU3Ed__4_SetStateMachine_m89D9B1B9A1BA6BF461BF3FC11F1C1DBC1D74D553_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendCreateSessionAsyncU3Ed__4_t6AAA1B6AA5B48F4CE98A615C39476E1D31241AF9*>(__this + _offset);
	U3CSendCreateSessionAsyncU3Ed__4_SetStateMachine_m89D9B1B9A1BA6BF461BF3FC11F1C1DBC1D74D553(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRevokeSessionAsyncU3Ed__5_MoveNext_mE8C75427876C32B9428841B7CE8B65B03E02C612 (U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_m723D87F5756129D590AADB204BCD0B0E4F5F074E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionalBaseClient_1_SignAndSendTransaction_m6C62CFC2AC8455658B0F5C2DB43D0BFDBD6A4213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* V_1 = NULL;
	RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* V_2 = NULL;
	TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* V_3 = NULL;
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* L_1 = __this->___U3CU3E4__this_4;
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
			RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* L_3 = __this->___accounts_2;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_4 = __this->___programId_3;
			il2cpp_codegen_runtime_class_init_inline(GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var);
			TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_5;
			L_5 = GplSessionProgram_RevokeSession_mD012E2583D3C2B2FA643898EC45820A302B3E97F(L_3, L_4, NULL);
			V_3 = L_5;
			GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* L_6 = V_1;
			TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_7 = V_3;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_8 = __this->___feePayer_5;
			Func_3_t6070D38707E5EEF23AE02DBA54B1DFFF136E43A7* L_9 = __this->___signingCallback_6;
			NullCheck(L_6);
			Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_10;
			L_10 = TransactionalBaseClient_1_SignAndSendTransaction_m6C62CFC2AC8455658B0F5C2DB43D0BFDBD6A4213(L_6, L_7, L_8, L_9, 0, TransactionalBaseClient_1_SignAndSendTransaction_m6C62CFC2AC8455658B0F5C2DB43D0BFDBD6A4213_RuntimeMethod_var);
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
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_m723D87F5756129D590AADB204BCD0B0E4F5F074E(L_15, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6_m723D87F5756129D590AADB204BCD0B0E4F5F074E_RuntimeMethod_var);
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
IL2CPP_EXTERN_C  void U3CSendRevokeSessionAsyncU3Ed__5_MoveNext_mE8C75427876C32B9428841B7CE8B65B03E02C612_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6*>(__this + _offset);
	U3CSendRevokeSessionAsyncU3Ed__5_MoveNext_mE8C75427876C32B9428841B7CE8B65B03E02C612(_thisAdjusted, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<SendRevokeSessionAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRevokeSessionAsyncU3Ed__5_SetStateMachine_m354071A11E310B922A77250561CF14518CCC33B1 (U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void U3CSendRevokeSessionAsyncU3Ed__5_SetStateMachine_m354071A11E310B922A77250561CF14518CCC33B1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendRevokeSessionAsyncU3Ed__5_t97CAD00652B5EB5EAC48BD41910EE861533E25E6*>(__this + _offset);
	U3CSendRevokeSessionAsyncU3Ed__5_SetStateMachine_m354071A11E310B922A77250561CF14518CCC33B1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeSessionTokenAsyncU3Ed__3_MoveNext_m9D1D498CEF9BB0D3927F1E87771F16674F8639E2 (U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mE9788331DDFF177ED3CDF8B463FC8D946FDB8395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m4B1BCD2CBF4E4CD3EA481B227BDE61F1BE18E414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStreamingRpcClient_tD95D1830E2CE0EFC8A302FAC12CC93BAC7C76B3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mDDF5310FD39B9E64098A66F486A3861812DA7CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m9A66C1463BBD26B3F6DDA4D062EAEE5BFDB4FF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mBFBE25A25E4D2A7FF56168A1B599B76712061742_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CSubscribeSessionTokenAsyncU3Eb__0_m11FCBA3EC484B3D1764F033A6EA2A952625D5618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* V_1 = NULL;
	SubscriptionState_tC612CC1D7DCF58D6BF7B339339E335E957C22EF8* V_2 = NULL;
	U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE* V_3 = NULL;
	TaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* L_1 = __this->___U3CU3E4__this_3;
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
			U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE* L_3 = (U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass3_0__ctor_mB178AA5D2BAE431F8DB1B23CA36263DAAA36C213(L_3, NULL);
			V_3 = L_3;
			U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE* L_4 = V_3;
			Action_3_t14CCC75DB8D4FE7D99A21E7D0002716F39C6AB6A* L_5 = __this->___callback_2;
			NullCheck(L_4);
			L_4->___callback_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___callback_0), (void*)L_5);
			GplSessionClient_tFAC5BD88624CE13973D68D0F738600089FFEC880* L_6 = V_1;
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = BaseClient_get_StreamingRpcClient_m31A16EE3DE5B5391430A9D3ADAEB2B563676A46B_inline(L_6, NULL);
			String_t* L_8 = __this->___accountAddress_4;
			U3CU3Ec__DisplayClass3_0_t9C5D363B3686D001E4461AA7FE84806A661525EE* L_9 = V_3;
			Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87* L_10 = (Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87*)il2cpp_codegen_object_new(Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87_il2cpp_TypeInfo_var);
			NullCheck(L_10);
			Action_2__ctor_m84C6F6103C32CB63F2B55A98653E5F7375003E0C(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CSubscribeSessionTokenAsyncU3Eb__0_m11FCBA3EC484B3D1764F033A6EA2A952625D5618_RuntimeMethod_var), NULL);
			int32_t L_11 = __this->___commitment_5;
			NullCheck(L_7);
			Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5* L_12;
			L_12 = InterfaceFuncInvoker3< Task_1_t40F88F0722EA2CE3B6747C1EF7D83CBA1E3DEAD5*, String_t*, Action_2_t7F6F0306E6EFBCAE4296DE50C91FD0CDC5109A87*, int32_t >::Invoke(5 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.IStreamingRpcClient::SubscribeAccountInfoAsync(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>,Solana.Unity.Rpc.Types.Commitment) */, IStreamingRpcClient_tD95D1830E2CE0EFC8A302FAC12CC93BAC7C76B3C_il2cpp_TypeInfo_var, L_7, L_8, L_10, L_11);
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
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mE9788331DDFF177ED3CDF8B463FC8D946FDB8395(L_17, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8336371FB28C236254C0A39BB7499454C3DF228C_TisU3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448_mE9788331DDFF177ED3CDF8B463FC8D946FDB8395_RuntimeMethod_var);
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
IL2CPP_EXTERN_C  void U3CSubscribeSessionTokenAsyncU3Ed__3_MoveNext_m9D1D498CEF9BB0D3927F1E87771F16674F8639E2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448*>(__this + _offset);
	U3CSubscribeSessionTokenAsyncU3Ed__3_MoveNext_m9D1D498CEF9BB0D3927F1E87771F16674F8639E2(_thisAdjusted, method);
}
// System.Void Solana.Unity.Gum.GplSession.GplSessionClient/<SubscribeSessionTokenAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeSessionTokenAsyncU3Ed__3_SetStateMachine_m5727FF3934B36B0FDAB8CBCC4ECA4B2AF7A11F76 (U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void U3CSubscribeSessionTokenAsyncU3Ed__3_SetStateMachine_m5727FF3934B36B0FDAB8CBCC4ECA4B2AF7A11F76_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSubscribeSessionTokenAsyncU3Ed__3_t6CC397F0A21DE26A33D3532BBDF1BCCF7AE80448*>(__this + _offset);
	U3CSubscribeSessionTokenAsyncU3Ed__3_SetStateMachine_m5727FF3934B36B0FDAB8CBCC4ECA4B2AF7A11F76(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::get_SessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SessionToken_m8438B0A602952AFE27B1FF8A1F8879BBFE7660BC (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionTokenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::set_SessionToken(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionAccounts_set_SessionToken_mE6521D6A88A76B5B85021277A9B7347F98C49B95 (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSessionTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionTokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::get_SessionSigner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SessionSigner_mCCC6E4E215B30E90710F3DBF741C54C141A6E855 (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionSignerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::set_SessionSigner(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionAccounts_set_SessionSigner_m3F132D7AC5E4C6C56EFC0043C5B5BB445602ADA1 (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSessionSignerU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionSignerU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::get_Authority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_Authority_mEECAE25E490DEB039658D8C43470EBF3CED8C8AC (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CAuthorityU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::set_Authority(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionAccounts_set_Authority_m62FCBC471648859D9C8E3E4A11E64DAA05C515DC (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CAuthorityU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorityU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::get_TargetProgram()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_TargetProgram_m933C15B55145E2ED1C6368C3A5B9F753C47950BF (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CTargetProgramU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::set_TargetProgram(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionAccounts_set_TargetProgram_m57B9FC49BFA95E6B8AD7C4E80C1174B8B1F81DFA (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CTargetProgramU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetProgramU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::get_SystemProgram()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SystemProgram_m8B9366B95FD79C7D067075EAF74BACF8C653B368 (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSystemProgramU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::set_SystemProgram(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionAccounts_set_SystemProgram_mBC918F3E52F73D486E362821F38F1BC98723042A (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSystemProgramU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSystemProgramU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionAccounts__ctor_mF54DD166296E00801BF6297A7B67EB9B654C7E9C (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) 
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
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::get_SessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_SessionToken_m79169A09ADD8156C01C7B284BEA018FD7DAABB7D (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionTokenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::set_SessionToken(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RevokeSessionAccounts_set_SessionToken_mB869D053C21FE0B15D465FADE662BE4B3F9BFB56 (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSessionTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionTokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::get_Authority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_Authority_mC99BE59864F2B291807D70AA4A2E2625E3C2D56A (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CAuthorityU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::set_Authority(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RevokeSessionAccounts_set_Authority_m00572A2FE3880A3A1BE44D8860EFADC20B53F2DF (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CAuthorityU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorityU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::get_SystemProgram()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_SystemProgram_m3EDA5941CA48CB7000B960BE194D0DDB97297C70 (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSystemProgramU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::set_SystemProgram(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RevokeSessionAccounts_set_SystemProgram_m2647633928C262597CD912BCCF42739D5F5ADD00 (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSystemProgramU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSystemProgramU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RevokeSessionAccounts__ctor_m6725A3FBB2A718AB71D76B422B34D9063E0E690C (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, const RuntimeMethod* method) 
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
// Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.Gum.GplSession.Program.GplSessionProgram::CreateSession(Solana.Unity.Gum.GplSession.Program.CreateSessionAccounts,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Int64>,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* GplSessionProgram_CreateSession_mAC9BCA8A6C1264953E6594D0F058B6968B9B9065 (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* ___accounts0, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___topUp1, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___validUntil2, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_1 = ((GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_StaticFields*)il2cpp_codegen_static_fields_for(GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var))->___ProgramIdKey_0;
		___programId3 = L_1;
	}

IL_000a:
	{
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_2 = (List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25*)il2cpp_codegen_object_new(List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC(L_2, List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_3 = L_2;
		CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* L_4 = ___accounts0;
		NullCheck(L_4);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_5;
		L_5 = CreateSessionAccounts_get_SessionToken_m8438B0A602952AFE27B1FF8A1F8879BBFE7660BC_inline(L_4, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_6;
		L_6 = AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5(L_5, (bool)0, NULL);
		NullCheck(L_3);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_3, L_6, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_7 = L_3;
		CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* L_8 = ___accounts0;
		NullCheck(L_8);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_9;
		L_9 = CreateSessionAccounts_get_SessionSigner_mCCC6E4E215B30E90710F3DBF741C54C141A6E855_inline(L_8, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_10;
		L_10 = AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5(L_9, (bool)1, NULL);
		NullCheck(L_7);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_7, L_10, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_11 = L_7;
		CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* L_12 = ___accounts0;
		NullCheck(L_12);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_13;
		L_13 = CreateSessionAccounts_get_Authority_mEECAE25E490DEB039658D8C43470EBF3CED8C8AC_inline(L_12, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_14;
		L_14 = AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5(L_13, (bool)1, NULL);
		NullCheck(L_11);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_11, L_14, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_15 = L_11;
		CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* L_16 = ___accounts0;
		NullCheck(L_16);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_17;
		L_17 = CreateSessionAccounts_get_TargetProgram_m933C15B55145E2ED1C6368C3A5B9F753C47950BF_inline(L_16, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_18;
		L_18 = AccountMeta_ReadOnly_m26D13CA31D86D71BC92CE39122BB120AF24D18F1(L_17, (bool)0, NULL);
		NullCheck(L_15);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_15, L_18, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_19 = L_15;
		CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* L_20 = ___accounts0;
		NullCheck(L_20);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_21;
		L_21 = CreateSessionAccounts_get_SystemProgram_m8B9366B95FD79C7D067075EAF74BACF8C653B368_inline(L_20, NULL);
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
// Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.Gum.GplSession.Program.GplSessionProgram::RevokeSession(Solana.Unity.Gum.GplSession.Program.RevokeSessionAccounts,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* GplSessionProgram_RevokeSession_mD012E2583D3C2B2FA643898EC45820A302B3E97F (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* ___accounts0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_1 = ((GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_StaticFields*)il2cpp_codegen_static_fields_for(GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var))->___ProgramIdKey_0;
		___programId1 = L_1;
	}

IL_000a:
	{
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_2 = (List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25*)il2cpp_codegen_object_new(List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC(L_2, List_1__ctor_mCFD88B56E96A857A2E5393D6EBF8C9BC184BD6FC_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_3 = L_2;
		RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* L_4 = ___accounts0;
		NullCheck(L_4);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_5;
		L_5 = RevokeSessionAccounts_get_SessionToken_m79169A09ADD8156C01C7B284BEA018FD7DAABB7D_inline(L_4, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_6;
		L_6 = AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5(L_5, (bool)0, NULL);
		NullCheck(L_3);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_3, L_6, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_7 = L_3;
		RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* L_8 = ___accounts0;
		NullCheck(L_8);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_9;
		L_9 = RevokeSessionAccounts_get_Authority_mC99BE59864F2B291807D70AA4A2E2625E3C2D56A_inline(L_8, NULL);
		AccountMeta_t541C82B459AD2D2C44F9C9BED4E3BA8C5571137F* L_10;
		L_10 = AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5(L_9, (bool)0, NULL);
		NullCheck(L_7);
		List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_inline(L_7, L_10, List_1_Add_mFBAD85C95B46CF748CEF8F7D60A0C0EE2D19206D_RuntimeMethod_var);
		List_1_tCD6ABB9D9150093D7DF920674414F5665C10AA25* L_11 = L_7;
		RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* L_12 = ___accounts0;
		NullCheck(L_12);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_13;
		L_13 = RevokeSessionAccounts_get_SystemProgram_m3EDA5941CA48CB7000B960BE194D0DDB97297C70_inline(L_12, NULL);
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
// System.Void Solana.Unity.Gum.GplSession.Program.GplSessionProgram::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GplSessionProgram__cctor_m91F1274E9975B960E33175C6351575C433069200 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC499D64877849DB4B53913F9ABC6253ECB35E58D);
		s_Il2CppMethodInitialized = true;
	}
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_0, _stringLiteralC499D64877849DB4B53913F9ABC6253ECB35E58D, NULL);
		((GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_StaticFields*)il2cpp_codegen_static_fields_for(GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var))->___ProgramIdKey_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_StaticFields*)il2cpp_codegen_static_fields_for(GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var))->___ProgramIdKey_0), (void*)L_0);
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
// System.UInt64 Solana.Unity.Gum.GplSession.Accounts.SessionToken::get_ACCOUNT_DISCRIMINATOR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SessionToken_get_ACCOUNT_DISCRIMINATOR_m8BF077BF09AA9F3C5FB612F834CAB2B2EE617D40 (const RuntimeMethod* method) 
{
	{
		return ((int64_t)1081168673100727529LL);
	}
}
// System.ReadOnlySpan`1<System.Byte> Solana.Unity.Gum.GplSession.Accounts.SessionToken::get_ACCOUNT_DISCRIMINATOR_BYTES()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D SessionToken_get_ACCOUNT_DISCRIMINATOR_BYTES_m28A10FC690F290C4A305D36C755D2A27FB9D0759 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t666DC25B694A6622FF8CB817B4D2F67D75F8E98E_StaticFields____FF01D01BABDB0E95A0EED51619E30E889F1FD84F7917F83FA68D6D63B7258AD1_0_RVAStorage);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		memset((&L_0), 0, sizeof(L_0));
		ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_inline((&L_0), (void*)((int64_t*)U3CPrivateImplementationDetailsU3E_t666DC25B694A6622FF8CB817B4D2F67D75F8E98E_StaticFields____FF01D01BABDB0E95A0EED51619E30E889F1FD84F7917F83FA68D6D63B7258AD1_0_RVAStorage), 8, /*hidden argument*/ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		return L_0;
	}
}
// System.String Solana.Unity.Gum.GplSession.Accounts.SessionToken::get_ACCOUNT_DISCRIMINATOR_B58()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionToken_get_ACCOUNT_DISCRIMINATOR_B58_mDFBBA63B3BF58EBEC59C35915F167713921065E7 (const RuntimeMethod* method) 
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
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Accounts.SessionToken::get_Authority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* SessionToken_get_Authority_m8C12E29908CAD2639E617F6DF4D7ACF41904F081 (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CAuthorityU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Accounts.SessionToken::set_Authority(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionToken_set_Authority_mB372EDFB1E663EBD73D8235EAABD5CF7F574897F (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CAuthorityU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorityU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Accounts.SessionToken::get_TargetProgram()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* SessionToken_get_TargetProgram_mF98DD39BDAB1E17BE06B815214BDB7D791F0D9C6 (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CTargetProgramU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Accounts.SessionToken::set_TargetProgram(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionToken_set_TargetProgram_m3D284E32BE2344FBE8AAD5FDEE53E325476D1E26 (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CTargetProgramU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetProgramU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Accounts.SessionToken::get_SessionSigner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* SessionToken_get_SessionSigner_m4934B4547AE3A330E6F88B4D9648EAD5483E28A2 (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionSignerU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Accounts.SessionToken::set_SessionSigner(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionToken_set_SessionSigner_m55033D81C770EA2EF432AE67D52640AF3BB0C01F (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSessionSignerU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionSignerU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Int64 Solana.Unity.Gum.GplSession.Accounts.SessionToken::get_ValidUntil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SessionToken_get_ValidUntil_m4C91038AEC0D14AB7000EE741D837BE406200678 (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CValidUntilU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Accounts.SessionToken::set_ValidUntil(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionToken_set_ValidUntil_m5ECFEE3C2CC9ECCB8E1EFA1E28F6460A63C2FAB0 (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CValidUntilU3Ek__BackingField_3 = L_0;
		return;
	}
}
// Solana.Unity.Gum.GplSession.Accounts.SessionToken Solana.Unity.Gum.GplSession.Accounts.SessionToken::Deserialize(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* SessionToken_Deserialize_m2942384E08D09B814C8B24CAE169334AF8316C6A (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ____data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42_il2cpp_TypeInfo_var);
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
		L_4 = SessionToken_get_ACCOUNT_DISCRIMINATOR_m8BF077BF09AA9F3C5FB612F834CAB2B2EE617D40(NULL);
		if ((((int64_t)L_2) == ((int64_t)L_4)))
		{
			goto IL_0016;
		}
	}
	{
		return (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42*)NULL;
	}

IL_0016:
	{
		SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* L_5 = (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42*)il2cpp_codegen_object_new(SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SessionToken__ctor_m687BD08C424D875AEAC3558DD670C52A134A4151(L_5, NULL);
		SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* L_6 = L_5;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7 = ____data0;
		int32_t L_8 = V_0;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_9;
		L_9 = Deserialization_GetPubKey_mF8D0AD08885CC383A8A479802D3422F6557ABDA9(L_7, L_8, NULL);
		NullCheck(L_6);
		SessionToken_set_Authority_mB372EDFB1E663EBD73D8235EAABD5CF7F574897F_inline(L_6, L_9, NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)32)));
		SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* L_11 = L_6;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_12 = ____data0;
		int32_t L_13 = V_0;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_14;
		L_14 = Deserialization_GetPubKey_mF8D0AD08885CC383A8A479802D3422F6557ABDA9(L_12, L_13, NULL);
		NullCheck(L_11);
		SessionToken_set_TargetProgram_m3D284E32BE2344FBE8AAD5FDEE53E325476D1E26_inline(L_11, L_14, NULL);
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)32)));
		SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* L_16 = L_11;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_17 = ____data0;
		int32_t L_18 = V_0;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_19;
		L_19 = Deserialization_GetPubKey_mF8D0AD08885CC383A8A479802D3422F6557ABDA9(L_17, L_18, NULL);
		NullCheck(L_16);
		SessionToken_set_SessionSigner_m55033D81C770EA2EF432AE67D52640AF3BB0C01F_inline(L_16, L_19, NULL);
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)32)));
		SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* L_21 = L_16;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_22 = ____data0;
		int32_t L_23 = V_0;
		int64_t L_24;
		L_24 = Deserialization_GetS64_m641113ED969E0E50706C20383F10EB0F8CE3959A(L_22, L_23, NULL);
		NullCheck(L_21);
		SessionToken_set_ValidUntil_m5ECFEE3C2CC9ECCB8E1EFA1E28F6460A63C2FAB0_inline(L_21, L_24, NULL);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 8));
		return L_21;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Gum.GplSession.Accounts.SessionToken::DeriveSessionTokenAccount(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* SessionToken_DeriveSessionTokenAccount_mA2CEAC37A06F23D62A33C7CB9B5CBED56288E09A (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___authority0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___targetProgram1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___sessionSigner2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_13 = ((GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_StaticFields*)il2cpp_codegen_static_fields_for(GplSessionProgram_tFE2538F049FAFCBB2021261502E41E832536B5DA_il2cpp_TypeInfo_var))->___ProgramIdKey_0;
		bool L_14;
		L_14 = PublicKey_TryFindProgramAddress_m380002D59B3888237ABE355B8B8365E1503A6409(L_10, L_13, (&V_0), (&V_1), NULL);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_15 = V_0;
		return L_15;
	}
}
// System.Void Solana.Unity.Gum.GplSession.Accounts.SessionToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionToken__ctor_m687BD08C424D875AEAC3558DD670C52A134A4151 (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SessionToken_m8438B0A602952AFE27B1FF8A1F8879BBFE7660BC_inline (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SessionSigner_mCCC6E4E215B30E90710F3DBF741C54C141A6E855_inline (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionSignerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_Authority_mEECAE25E490DEB039658D8C43470EBF3CED8C8AC_inline (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CAuthorityU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_TargetProgram_m933C15B55145E2ED1C6368C3A5B9F753C47950BF_inline (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CTargetProgramU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* CreateSessionAccounts_get_SystemProgram_m8B9366B95FD79C7D067075EAF74BACF8C653B368_inline (CreateSessionAccounts_t974438D54733FD3689C56D650640D4DA09D03B0F* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_SessionToken_m79169A09ADD8156C01C7B284BEA018FD7DAABB7D_inline (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSessionTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_Authority_mC99BE59864F2B291807D70AA4A2E2625E3C2D56A_inline (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CAuthorityU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RevokeSessionAccounts_get_SystemProgram_m3EDA5941CA48CB7000B960BE194D0DDB97297C70_inline (RevokeSessionAccounts_t3E219048E2E9A02834813FFDC5668F8998957E17* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CSystemProgramU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_Authority_mB372EDFB1E663EBD73D8235EAABD5CF7F574897F_inline (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CAuthorityU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorityU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_TargetProgram_m3D284E32BE2344FBE8AAD5FDEE53E325476D1E26_inline (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CTargetProgramU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetProgramU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_SessionSigner_m55033D81C770EA2EF432AE67D52640AF3BB0C01F_inline (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CSessionSignerU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionSignerU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionToken_set_ValidUntil_m5ECFEE3C2CC9ECCB8E1EFA1E28F6460A63C2FAB0_inline (SessionToken_t7B5D1F8EF6997AECDBA4BA9363D24677A5625F42* __this, int64_t ___value0, const RuntimeMethod* method) 
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
