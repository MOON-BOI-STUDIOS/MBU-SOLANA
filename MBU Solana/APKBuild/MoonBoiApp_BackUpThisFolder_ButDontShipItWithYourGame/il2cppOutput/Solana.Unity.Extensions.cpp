﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>,Newtonsoft.Json.Serialization.JsonContract>
struct Dictionary_2_t35511E60D5802E152E6A56E984ACBE19AF7654AD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Wallet.PublicKey>
struct Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF;
// System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.Models.TokenMint.TokenDef>
struct Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818;
// System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.TokenWalletBalance>
struct Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<Solana.Unity.Rpc.Models.TokenAccount,System.Boolean>
struct Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30;
// System.Func`2<Solana.Unity.Extensions.TokenWalletAccount,System.Boolean>
struct Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600;
// System.Func`2<Solana.Unity.Extensions.TokenWalletAccount,System.String>
struct Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173;
// System.Func`2<Solana.Unity.Extensions.TokenWalletBalance,System.String>
struct Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F;
// System.Func`2<Solana.Unity.Rpc.Builders.TransactionBuilder,System.Byte[]>
struct Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Solana.Unity.Wallet.PublicKey>
struct IEnumerable_1_t2037C2BCDBB3E7CB4F7394B07087334C6AF79E29;
// System.Collections.Generic.IEnumerable`1<Solana.Unity.Rpc.Models.TokenAccount>
struct IEnumerable_1_t00BFF455C18202836E0080C3043F028F5B7CDDFB;
// System.Collections.Generic.IEnumerable`1<Solana.Unity.Extensions.Models.TokenMint.TokenDef>
struct IEnumerable_1_t3A4D34DE2CAA459072D190F8A4F055583ABB268F;
// System.Collections.Generic.IEnumerable`1<Solana.Unity.Extensions.TokenWalletAccount>
struct IEnumerable_1_t3E11F6E448DB9A84526E610784611B2A3096CA58;
// System.Collections.Generic.IEnumerable`1<Solana.Unity.Extensions.TokenWalletBalance>
struct IEnumerable_1_tA620598EF4F546273B3614A55475F08D5330804E;
// System.Collections.Generic.IEnumerator`1<Solana.Unity.Extensions.TokenWalletAccount>
struct IEnumerator_1_tB0B8103DD699D4F672180A0B4C8456340489A542;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.AccountMeta>
struct IList_1_t9A5C9737E26A667715B960D3844A419275F5807B;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t106D4C1340745E38431865BBEA6AE170A4713431;
// System.Collections.Generic.IList`1<Solana.Unity.Extensions.Models.TokenMint.TokenDef>
struct IList_1_tBA4C35C658F6D77E747E10704D3F108A28B3473B;
// System.Collections.Generic.IList`1<Solana.Unity.Extensions.TokenWalletAccount>
struct IList_1_t47461F0719D56705D361FA9FE90E86AEA649DD67;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// System.Linq.IOrderedEnumerable`1<Solana.Unity.Extensions.TokenWalletAccount>
struct IOrderedEnumerable_1_tC7821E7756445FDF9D38A0EA0EAC910589836F3B;
// System.Linq.IOrderedEnumerable`1<Solana.Unity.Extensions.TokenWalletBalance>
struct IOrderedEnumerable_1_t5CB6B9746F804DD4BFCC21053A5882CB894592CF;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Solana.Unity.Extensions.Models.TokenMint.TokenDef>
struct IReadOnlyDictionary_2_t58C4050C4085C6A3D39578B446BE08A7455F8EFD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Solana.Unity.Wallet.PublicKey>
struct KeyCollection_t5DE3775BCADD1242308ABA694D6FAA522397DD83;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Solana.Unity.Extensions.Models.TokenMint.TokenDef>
struct KeyCollection_t53B4352C864390D4DBF4D1B9F666C03EF29D0BC9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Solana.Unity.Extensions.TokenWalletBalance>
struct KeyCollection_t195AFC665566DD861D96ECEEEF714BD720E30C87;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>
struct List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73;
// System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenDef>
struct List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675;
// System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenListItem>
struct List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D;
// System.Collections.Generic.List`1<Solana.Unity.Extensions.TokenWalletAccount>
struct List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Predicate`1<Solana.Unity.Extensions.TokenWalletAccount>
struct Predicate_1_t2B924A8D85AFBF69B001EB1CB9B49274C086ED71;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>
struct RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>
struct RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>
struct RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Object>
struct RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>
struct RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2;
// Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>
struct ResponseValue_1_tA9E11CD10D2ECAD8D2FC880998215523D5EA385C;
// Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>
struct ResponseValue_1_t47F8A210890E6A267CEE9183D62273224351A5B6;
// Solana.Unity.Rpc.Messages.ResponseValue`1<System.Object>
struct ResponseValue_1_t8663D687999D2DEE6072DDA9FD2059BBDE351512;
// Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>
struct ResponseValue_1_t0BCADF3E5348490F730192C8C7282EFED595AB57;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>
struct TaskFactory_1_tD59DB9B82D6EB94EAFCCFE8C6917BD399868670C;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>
struct TaskFactory_1_tB66249D720FEAF2618DBFE3129A263CEA11D05F3;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>
struct TaskFactory_1_t5B3D2301B1D8EBB2445D4B8F7516985CB45B281E;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>
struct TaskFactory_1_tCEEA6255AC75CD14CEB27326ECAE7A87FEE55EDE;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<System.Net.Http.HttpResponseMessage>
struct TaskFactory_1_t7BDD01363BBCFF64B4A6BDDBBE222716A0B2E2BA;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Extensions.TokenMintResolver>
struct TaskFactory_1_t0EE4F858D6530BE76B9657963C67D9FB9A314118;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Extensions.TokenWallet>
struct TaskFactory_1_t2C8FA17272D2E1CFD3B3D3882B4F8596755C863B;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>
struct Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>
struct Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>
struct Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>
struct Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenMintResolver>
struct Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9;
// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenWallet>
struct Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.JsonContract>
struct ThreadSafeStore_2_tF22121D3E11895CE38FFEE9105F013F4ECC2DFC5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Solana.Unity.Wallet.PublicKey>
struct ValueCollection_tBE280C6D0B44FF3039F87584B93C1FF24965217C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Solana.Unity.Extensions.Models.TokenMint.TokenDef>
struct ValueCollection_t8213169FEECF99215B492F0966E7287C6544E295;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Solana.Unity.Extensions.TokenWalletBalance>
struct ValueCollection_t479C6184D9CB8F88145D04970A0A33A4243AFD1F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Solana.Unity.Wallet.PublicKey>[]
struct EntryU5BU5D_t8989CEBFE73DD8F32B150B1322A62855210C5202;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Solana.Unity.Extensions.Models.TokenMint.TokenDef>[]
struct EntryU5BU5D_t9A3C7B3108DD1B39A1C2B9D3527797CFD68624AD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Solana.Unity.Extensions.TokenWalletBalance>[]
struct EntryU5BU5D_tE0F6B399920C5D1B916D98DD3E7C167481B88AC6;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Solana.Unity.Rpc.Models.TokenAccount[]
struct TokenAccountU5BU5D_t1D50969A995BF8ADD11A16C9A3A7A4255C8F3DAC;
// Solana.Unity.Extensions.Models.TokenMint.TokenDef[]
struct TokenDefU5BU5D_t366F0EFA0F0AE464DB4064D83430910C640D0C36;
// Solana.Unity.Extensions.Models.TokenMint.TokenListItem[]
struct TokenListItemU5BU5D_tA54ED2BD7B23E306ADC1F5E192525C1F0575F264;
// Solana.Unity.Extensions.TokenWalletAccount[]
struct TokenWalletAccountU5BU5D_t344A52248F34B1FF5E2F78CF3D17C6B92F1F2BF7;
// Solana.Unity.Extensions.TokenWalletBalance[]
struct TokenWalletBalanceU5BU5D_tD464B6024B54154141CA4D2AB4EC92CE07DB1F3B;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Solana.Unity.Rpc.Models.AccountInfoBase
struct AccountInfoBase_t1D3349589317F053FAC79A6C7FFDEB72B347210B;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Solana.Unity.Rpc.Models.BlockHash
struct BlockHash_t01BC23F321B989D27E8E37A68BCE97B3C47BD9A3;
// Newtonsoft.Json.Serialization.CamelCaseNamingStrategy
struct CamelCaseNamingStrategy_tCD17472E129D8769696271E3785AC5FA29DE6DB8;
// Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver
struct CamelCasePropertyNamesContractResolver_tB03DB20CC6D59C5D7C4E5959D5AA60AE22980D0C;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Solana.Unity.Rpc.Messages.ContextObj
struct ContextObj_t20CBAD0294B1CE430341642034DBC6207DABD526;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// Newtonsoft.Json.DefaultJsonNameTable
struct DefaultJsonNameTable_t81ABCBAD900C62AEA009A48779C3F3893DBC110D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Solana.Unity.Rpc.Models.ErrorData
struct ErrorData_t49373BB7C78A299593CF1FF546FFB3DCC8A9E5B8;
// System.Exception
struct Exception_t;
// Solana.Unity.Rpc.Models.FeeCalculator
struct FeeCalculator_tA5405DEF85DB80887E252A76DB88830F219654F5;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42;
// System.Net.Http.HttpContent
struct HttpContent_tD09737BB27CB151BC9688882F785208620211E1C;
// System.Net.Http.Headers.HttpContentHeaders
struct HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F;
// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17;
// System.Net.Http.HttpMethod
struct HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E;
// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7;
// System.Net.Http.HttpRequestMessage
struct HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2;
// System.Net.Http.Headers.HttpResponseHeaders
struct HttpResponseHeaders_tAD02F8CC2960BC561FEFD63E0121701743EAA7A8;
// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Solana.Unity.Rpc.Core.Http.IRequestResult
struct IRequestResult_t909A4EB9375A7FCCDE87EC363F9AC65E2078747A;
// Solana.Unity.Rpc.IRpcClient
struct IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Solana.Unity.Extensions.ITokenMintResolver
struct ITokenMintResolver_tD4AC0E8E0E0873DB93173BE6B73AB7BFECC5FDBA;
// Solana.Unity.Extensions.ITokenWalletRpcProxy
struct ITokenWalletRpcProxy_t666D02A5DF7DD0D88A08DCC64606A1ABCCD82C2B;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Solana.Unity.Rpc.Builders.MessageBuilder
struct MessageBuilder_t79F41E3E76BE5BBB6D146628BB96C70CBE68E2E2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50;
// Solana.Unity.Rpc.Models.ParsedTokenAccountData
struct ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442;
// Solana.Unity.Wallet.PublicKey
struct PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// Newtonsoft.Json.Converters.StringEnumConverter
struct StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Solana.Unity.Rpc.Models.TokenAccount
struct TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643;
// Solana.Unity.Rpc.Models.TokenAccountData
struct TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66;
// Solana.Unity.Rpc.Models.TokenAccountInfo
struct TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF;
// Solana.Unity.Rpc.Models.TokenAccountInfoDetails
struct TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE;
// Solana.Unity.Rpc.Models.TokenBalance
struct TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE;
// Solana.Unity.Extensions.Models.TokenMint.TokenDef
struct TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32;
// Solana.Unity.Extensions.Models.TokenMint.TokenListDoc
struct TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F;
// Solana.Unity.Extensions.Models.TokenMint.TokenListItem
struct TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26;
// Solana.Unity.Extensions.TokenMintResolver
struct TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6;
// Solana.Unity.Extensions.TokenQuantity
struct TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59;
// Solana.Unity.Extensions.TokenWallet
struct TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F;
// Solana.Unity.Extensions.TokenWalletAccount
struct TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D;
// Solana.Unity.Extensions.TokenWalletBalance
struct TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9;
// Solana.Unity.Extensions.TokenWalletException
struct TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6;
// Solana.Unity.Extensions.Models.TokenWalletFilterList
struct TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D;
// Solana.Unity.Extensions.TokenWalletRpcProxy
struct TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4;
// Solana.Unity.Rpc.Builders.TransactionBuilder
struct TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4;
// Solana.Unity.Rpc.Models.TransactionInstruction
struct TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.Http.HttpContent/FixedMemoryStream
struct FixedMemoryStream_tDCEF941500AF29277C42DDF40970FB21B4A66188;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Solana.Unity.Extensions.TokenWallet/<>c
struct U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0;
// Solana.Unity.Extensions.TokenWallet/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75;
// Solana.Unity.Extensions.TokenWallet/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9;
// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c
struct U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4;
// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06;
// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE;
// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92;
// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259;
// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E;
// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118;
// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C;

IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssociatedTokenAccountProgram_tFC3624824F991B8AEA618DEE565CB16C25BCBC22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CamelCaseNamingStrategy_tCD17472E129D8769696271E3785AC5FA29DE6DB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CamelCasePropertyNamesContractResolver_tB03DB20CC6D59C5D7C4E5959D5AA60AE22980D0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tBA46B0B91EBAF6B08DED48AF18B2916FC06B7FC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3E11F6E448DB9A84526E610784611B2A3096CA58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITokenMintResolver_tD4AC0E8E0E0873DB93173BE6B73AB7BFECC5FDBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITokenWalletRpcProxy_t666D02A5DF7DD0D88A08DCC64606A1ABCCD82C2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenProgram_tAC7AD56BE92E3D7F5BB55E7C8F018DB308607424_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00BE36C63F27ED6F72FB26584B5F509DFF4BA46F;
IL2CPP_EXTERN_C String_t* _stringLiteral01C49C594CAF9844B68FFD2EBC26B618D993E7CD;
IL2CPP_EXTERN_C String_t* _stringLiteral024A46E3FEBCDB951A077E7169AB10F7B499AA5B;
IL2CPP_EXTERN_C String_t* _stringLiteral0ABB213B01DF8C822F02D77AD95E59A4C797765C;
IL2CPP_EXTERN_C String_t* _stringLiteral0D10863ED4DC715EC1023B9D9A9C00C811DC0EF1;
IL2CPP_EXTERN_C String_t* _stringLiteral1FD052877C9864234FB786B3B92C4106C8F18A55;
IL2CPP_EXTERN_C String_t* _stringLiteral22156D18812AD53B55CF15C634577C4C5AD1A0E7;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2409FA1FB48FCAFE0359BF3A7E0D2D5142610764;
IL2CPP_EXTERN_C String_t* _stringLiteral27ABE71F1CEC5AC21624FF97DAB57C7949B71E48;
IL2CPP_EXTERN_C String_t* _stringLiteral281F1336E8014A7EDDC28A187E4E6489D2F565DA;
IL2CPP_EXTERN_C String_t* _stringLiteral3274DA16C9ECBC2C163F56693A2AEEE654A7780F;
IL2CPP_EXTERN_C String_t* _stringLiteral3287D1C3089591C12517EFD1E8FE23AA84BCB74C;
IL2CPP_EXTERN_C String_t* _stringLiteral38AEDFD3C6BA3CA0B51C929B99CCF80486B4545A;
IL2CPP_EXTERN_C String_t* _stringLiteral3905566959D411246460F7BD4671847860431EC9;
IL2CPP_EXTERN_C String_t* _stringLiteral3988471A2015D5CC894E22E1A900B66E97CD4306;
IL2CPP_EXTERN_C String_t* _stringLiteral402388F9B757B2883D1D68662F8E7FA6BC587CB1;
IL2CPP_EXTERN_C String_t* _stringLiteral424D6DB2974268B77106E052C997C34EF58685AA;
IL2CPP_EXTERN_C String_t* _stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84;
IL2CPP_EXTERN_C String_t* _stringLiteral4366E4715E79DB263BDA331ED3D7E40DF8D6A7A5;
IL2CPP_EXTERN_C String_t* _stringLiteral4414789E0C56F453460AB12B7BC0AF5469A88944;
IL2CPP_EXTERN_C String_t* _stringLiteral4497D5B032416AF0F9973056CD13F2030ACA599D;
IL2CPP_EXTERN_C String_t* _stringLiteral46033C4AC994646BFDD12E66C1895928700D7657;
IL2CPP_EXTERN_C String_t* _stringLiteral464DAF3D4E86DF2B65C8B8BE784A487AF6C17A28;
IL2CPP_EXTERN_C String_t* _stringLiteral48C6E419154509C139FB700BA6DE57467A32375E;
IL2CPP_EXTERN_C String_t* _stringLiteral4A6F224D73185375CDB19D92D1734E62466F4CB6;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9D19F93374071B759BC0E11C49C7FC23830C91;
IL2CPP_EXTERN_C String_t* _stringLiteral53BDFE9554561CC208A0A6E9F42F4045C0E7FE44;
IL2CPP_EXTERN_C String_t* _stringLiteral55E33AEC810D7C6A9309168416814B8AB9759431;
IL2CPP_EXTERN_C String_t* _stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118;
IL2CPP_EXTERN_C String_t* _stringLiteral574961B4CC42717A4EEE54FCCEA8C426A9ACCB48;
IL2CPP_EXTERN_C String_t* _stringLiteral586BDC5C6778BF8FF69C7AF8C6E63403447F1631;
IL2CPP_EXTERN_C String_t* _stringLiteral589AA47E41353AFF7D034EC4C7687518B3A11034;
IL2CPP_EXTERN_C String_t* _stringLiteral58F731E7EB208B855437DDB54E37A28C65A896F6;
IL2CPP_EXTERN_C String_t* _stringLiteral59A00D9F3CB2E5AA005A039F73FB608EB87D3C93;
IL2CPP_EXTERN_C String_t* _stringLiteral59B38EF506C8235146581F6DBE40D5D557A5698B;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB33A02CD098BC922B025A1A60CAF37401341D1;
IL2CPP_EXTERN_C String_t* _stringLiteral5D62EFD0557DBB570574E826B910E4ECA33137FD;
IL2CPP_EXTERN_C String_t* _stringLiteral62AA8ACC3DF0550D8FE15D5AACAC775AC45B8D81;
IL2CPP_EXTERN_C String_t* _stringLiteral62CE8F5D963A0AC7966F11B20743F4E68F0E8038;
IL2CPP_EXTERN_C String_t* _stringLiteral63E2C2AAE85341B6890CF2B1A43E572B573FCA5B;
IL2CPP_EXTERN_C String_t* _stringLiteral65B7DE7F3DD33F05E643572EA4FD0ACCED36AA71;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral6B168350301D800FA58E5E32CF84E662EDF92110;
IL2CPP_EXTERN_C String_t* _stringLiteral6CFDCF6804A75071AE7AEFDDDC03F87387C8A5F2;
IL2CPP_EXTERN_C String_t* _stringLiteral6DCC3FBCEF7946127620E5F35DA4B0133CD6C169;
IL2CPP_EXTERN_C String_t* _stringLiteral6EC2672932158AC68FF0D15F1E0D30BE47F285D7;
IL2CPP_EXTERN_C String_t* _stringLiteral745CD92AF16DFE2F7B9B8CBC289B43963BA78463;
IL2CPP_EXTERN_C String_t* _stringLiteral79EB288E9CE4DD60C7BE551F0693785F2D5DEF97;
IL2CPP_EXTERN_C String_t* _stringLiteral7E5D18E1CE2E1731257E917A43830648310DB294;
IL2CPP_EXTERN_C String_t* _stringLiteral8176DD3B2014F3E88638376F738A3C6112E3E6C2;
IL2CPP_EXTERN_C String_t* _stringLiteral82A1BA10F869975F64777D136D1C83BB93F8A58C;
IL2CPP_EXTERN_C String_t* _stringLiteral84599DCBF1902CF3C8992EEF5CBD559B720562FB;
IL2CPP_EXTERN_C String_t* _stringLiteral84CF58A87B7CAAAC388E700181FA2F086384BF4C;
IL2CPP_EXTERN_C String_t* _stringLiteral854AD188B8CB26C997E496F2E25773B38557472E;
IL2CPP_EXTERN_C String_t* _stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846;
IL2CPP_EXTERN_C String_t* _stringLiteral868881D7B043EC02238167F923A71ECDE42595D1;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteral8F32691F4B97240AA4139CD0BEEA4C59FAF96EE7;
IL2CPP_EXTERN_C String_t* _stringLiteral9584A636B2153EFE760CE0D5B3C6238641301506;
IL2CPP_EXTERN_C String_t* _stringLiteral9657D9D14EEB5FF064C60DBDDEDAB601A082251E;
IL2CPP_EXTERN_C String_t* _stringLiteralA02045EA247E784599834F152FECBB16CE49E551;
IL2CPP_EXTERN_C String_t* _stringLiteralA1F613FC956017179FBCC99574B7118D53154F70;
IL2CPP_EXTERN_C String_t* _stringLiteralA607283D5330AC137E18BD5CD0F4907236F1FC86;
IL2CPP_EXTERN_C String_t* _stringLiteralA8420F2866C2A6A424AF142AB7E16B9404A02A0A;
IL2CPP_EXTERN_C String_t* _stringLiteralA8866377C730A2C551C07074F3DC5329C45EA772;
IL2CPP_EXTERN_C String_t* _stringLiteralA90A6C3F8AF2040BB342A9E9B41CC54966F1452B;
IL2CPP_EXTERN_C String_t* _stringLiteralABBC3036D294E929671B0BA190A73D9D4D54AA61;
IL2CPP_EXTERN_C String_t* _stringLiteralB14576EB8C296833FEA6801D7B3EB1398C260902;
IL2CPP_EXTERN_C String_t* _stringLiteralB3404129078A0013AC74B07C39E1301B36B3886F;
IL2CPP_EXTERN_C String_t* _stringLiteralB4D7D11D649D29CC5B3AE0F2EB6A9329A98B31C0;
IL2CPP_EXTERN_C String_t* _stringLiteralB4D9B9FBB2F76DB2392E4A041FB58F23E00288A3;
IL2CPP_EXTERN_C String_t* _stringLiteralB53B17787EA102AED259CCF48EAC835DF731598C;
IL2CPP_EXTERN_C String_t* _stringLiteralB552DD4A6370A6DFA2B3F60429F8737B17E798F5;
IL2CPP_EXTERN_C String_t* _stringLiteralB8CF1883E7F924AE4F7410C926EB0DD0D967F7F4;
IL2CPP_EXTERN_C String_t* _stringLiteralBE6A0DE909ED9D1DC050D44EA5FC852CF0615412;
IL2CPP_EXTERN_C String_t* _stringLiteralBF4ACBEBD200046FBD7AB24AE66E09647724E6EA;
IL2CPP_EXTERN_C String_t* _stringLiteralBFED256FAD24DFB918C3171760B73C3949AF3AF0;
IL2CPP_EXTERN_C String_t* _stringLiteralC89994489E374EE60488665751DAAD6F3B411190;
IL2CPP_EXTERN_C String_t* _stringLiteralCA5C7CB71E39011715F43F521A4821DC146AED51;
IL2CPP_EXTERN_C String_t* _stringLiteralCCED0C8C85E3D382C8ED9C923EFE1AAC5FD96EEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD1642399B611F4197E269924B0C6046527168604;
IL2CPP_EXTERN_C String_t* _stringLiteralD2C65D36F339CB37AE22324E018B4D54335A20CA;
IL2CPP_EXTERN_C String_t* _stringLiteralD2E80D292EF114389BA7BA391D7EA63456D3073D;
IL2CPP_EXTERN_C String_t* _stringLiteralD4440AFF7DE2F1708927839914FAF97C372E7616;
IL2CPP_EXTERN_C String_t* _stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908;
IL2CPP_EXTERN_C String_t* _stringLiteralDA2D97B2F7B55E79AA5FA122265795CBC45022B4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC648322218F0982D0260CE79C3072F796B816B4;
IL2CPP_EXTERN_C String_t* _stringLiteralE0080E66F278BF182EDCF76F9B45031CCFBCF5F2;
IL2CPP_EXTERN_C String_t* _stringLiteralE571C9AFC6FEADD447A633583A2852DB10BC8CFD;
IL2CPP_EXTERN_C String_t* _stringLiteralE7EB46C626C10B81C0CE6C68B439A6EEA26086E9;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC8BFBFDF43105DB471CBD4F2F73BDE1ECBF667;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE4EDB2F1C7AD57CC7A1AB4F2C573B7B16A348B;
IL2CPP_EXTERN_C String_t* _stringLiteralEC368E12A459EB0AE60F982EC4BDA704F3B00314;
IL2CPP_EXTERN_C String_t* _stringLiteralED3FEEB0C3B221F5B07815EE43940E711ACBB067;
IL2CPP_EXTERN_C String_t* _stringLiteralF0F9268C5A65A883765CEB3C34C927FB7BE03D88;
IL2CPP_EXTERN_C String_t* _stringLiteralF173BBB462D9C35895D9EE802901FE0DE67E8A57;
IL2CPP_EXTERN_C String_t* _stringLiteralF23290496A911CF6508FBCC592553A8BF7061E76;
IL2CPP_EXTERN_C String_t* _stringLiteralF6E39914BF9A5C3C3263F09D1AC43AD6BF3FB8DD;
IL2CPP_EXTERN_C String_t* _stringLiteralF6F579AAFA7693712FEBE6A98B1C0663E340DB0B;
IL2CPP_EXTERN_C String_t* _stringLiteralF7D14D484B9743D72CE9F2F31CF9A99EB6E18F39;
IL2CPP_EXTERN_C String_t* _stringLiteralF7EBB6ED5ACB225AF9CB005C84DE7A94F735D07E;
IL2CPP_EXTERN_C String_t* _stringLiteralFB3737E6C8BF6CC42FA8D272FE8A688B08F80555;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF73C07136AED4702403F8748000DAE35A4EB8;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_m2EA52D365EF2DD5E2152066CDA61AE02DB3CF647_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_mA4BEC34AE8334D70BC2BC4E56D8EE0BFAB466016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m11779804B327DA56AE9EC66783200EC267F3E1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_m79C526D57EEDC9A7E91E08B04B6225285405D252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m961BD19A877E5B9C0D2752A41A80E5155DFACAD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_m9EC93BA4BF891225FD71CC6590C01DC98CD48EDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_m1F0312E26EB9AB392E25D829B4EADE31DCA186E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_m3446294B9B5D2D0BAAC6726974C0E35FFE1388AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_m44EAACA4A9773A975B95C1F73BD2EC44EA1562C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m70310DC158811CE55E4A49FA9ED677ABDBA67858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_m869A0BFE7217EB2543211FAC85AA1975E28AE50C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_m7E056E02E3F8AE0D87A36C6BCEB8113C5F782821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m3D8A1725C8A753B3E725A83FA2332D1611A54FC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m936071E2AC6D1AAEBCB5BCD5E5E1222075E8BED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m3367959D2106CA70EC44FDA33EC592EF74A45F31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_m8564CAFD4CC2B507834D32E1C57103AC577C3181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_mF7AF3023A3B2B65C340511A54434D2917867E505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m9A24FCC741B6729C788256762956EDFC0A8FA802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mAE9D4A2883BE4F7FD39E326A1D321CAF074BF958_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mF6EAAE188734F76BDD8BB3E11FCC8A2E881E011A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mFCCDD0228A9F00EFEDE296FAF3EDF187EC34D2FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m021BA8202E68EBD8C5DEDB6DB3A1E43A23B8DDAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m0AA09C2CFD4AC8FA4F23E2CC9AA5B7D58548B5E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m354526EADBE537610A7DD820B84C0E11BEBDC348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m8B324307E27D9DDEE350A1FE88C577E7F67DA90D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m9C3587FE2AD11DAECA18672DE5C1387BFF5C85EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mDC63A0696B4FA52DE511D9B6210400420B9D8FD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m2136AA9545E9784547AEB2C0806E2AB34C0B8C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m48394B8F12345495B9527D6E4279E2420CEF9656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m549DC4BCB161AA465764DD43CA2DA5F46D48F60D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mA1C269371D112FD181DD7B6650AAB2C33946DF0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m1972CD1BCF2A8C2ABA99BB6576B585927327A881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m2A624F7042C71D9EADEDF1574895757EF8493608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m73796A57B676B154F5B6E9AA6F3EB486D723CE4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mC6D818A291824DBF11B035B899B3BD1C8B580689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mF53D4075F551460FF0F3E254FE697ED90C4FECF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_mCEFB46CCF0B94020033036FFE8D814DE49DAFB9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_mCD0D2C28767ACAB92D83F5C4F59F00F1CD207A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_mDED583229BE1542F665006895443CA7F9DD5DA88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_mC1566667968010D9D4A5B55467652883A95E1B1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_mDD54974279B92E7FE7664668A51A580B08C3A3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m7A6CD1BF4A04C24D4D38107BD87B1C715926DB64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_mF3D649AE932C26B43C880826EAC814F42A070BDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_mCE6689EAD3F37BDB64796CF5F593B940C3E108D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m468AB170A93719FE94A003F1C12BAC45AA1E39A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_m9162F6C5093AEF55E762A9384C576EE1DC59BDDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_mC39836A1114F0CFE4C3B6F6E5FD13249FB247842_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_mC1B8FCD72B29DDCF077B2146DBF1926F8A8AEF65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_m96135BC2FD8E362D8F747FA51D8AC5AD8E15A250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m70E46116596A4CB9C20E1F23442C092ACA8E5328_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mA8003BA84EE2C641EE57DBEE6D26916D93D6EBAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mA8AAA8A9BF98B81BC30E76ECA991EDF0E2389C07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mAD988C0C9692580DD1EC8DE5048182355A0F9152_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD75F0079EF503B5FA80A9E25D7CC50BF10C2D7A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD7845D8DC84BC05B205A9480B26CF0B4BD299C9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF0813250843D513DF62D3C2DA910AA6250024A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4698BE108CAC5C7B84751D82633883D8DCE45AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC008731FD250FAEE364BD415BEE9474CD0AF57AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE55DEA23551CAB765EAFC4833BB919C515ACDD4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m52AEB945DA92C0520466482676ECAABE19CB83B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m7C42E426FED0A9522AF4E0E16B0C96EFB5BC3E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8FF89C82047794810B021D0062035F1FEA6D5410_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m58A5818EBC052EBADB7D7E2DDB2F7232C63961A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m21138BA2F5632A4C5F094F2FDEF06DDC619BD5CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m245629A6A6F08F2BF9C70EF0CFBE61D4623D2B18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mBA2684552979B621B05DD1D540FCBF53AF11E4EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisTokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643_m60C5DD5C6EC4E5C593C3E9C9296D79A414579ABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mB26E6487168FD7282C2D658AECF9AD1CB2DCC855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mE65AF05E694AD6B39C3D2A81EF243470E70B5CEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mA08E426415C9FBB5FC1A303C4BECDB0AC40A2DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_TisString_t_mA3E7F7D5B673888B175FD0F04DDCCA9D89661FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisTokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_TisString_t_m580BE76A3C34271853ACB2B0C4BA3265B28D9821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisTokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_mFAFD8C11D029EA5B468AFD7FBE5B5503CC0DE9DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2A2BF37044EEB6CFE09E6651A274ECEC1CDB4048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m47F61ABEDB60E04336CFB76FF2157F532163285A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m68926877B191826DAE5B83A97FC18F0EE52530AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m77CAB1FB0A9202CAE7D6330A2470A0039DAC4EEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m82507BBCC84EDA18A526DA7918E9CF76775B999E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC38B6A8FDCEB8AAF4C164B99A600989DFA200802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m59EC364FBCF20B9D08102DA709EC31F5AB8CB833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7039604A42771F859FACFCF0EA586FE655E68618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFFC9D4DAF9BFE2DD742720A1FBF7FBE0123C2DDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisTokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F_m3EE360BFEA0B89FC24377D59685F62D5ABECAF16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6DE9140C07494601787A888ABD6696E5E9E0EFA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCAB8E72F24B803816C5286F764E024D810E4E6C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCFEBF16B3B26CE59BD19C7B2ECA62B1A71A7D9F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD44A69F58F1F1E4DE020F64C60F8A6476530AD06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF3E7F881643B2D0E9C2AF2CA1A242E68A0D06BA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m54C0827B5D4FF4CE92484CDA800543288B3910E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7211545F73A91AE8CE1FBF3EF09BF8936826034D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9CA6560781E4F09D62EA081916D1B42F5370393B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDEE589CC285EACB41983B8E83CA2F2D4942C5494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_Result_m778909233587BBFF9A67EE973BAFA34E3C286034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_Result_m7BAECB2E70159C4BA91EF9D38742F31D764E1470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_Result_m98EBAFB5D6691E3A96E672636A1B270E231A500D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_WasSuccessful_m4E651DCE974BC81765CB2AB4516B5DC5E614D785_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_WasSuccessful_m6566B78C4F6941509C8682E4804934D0FD22E199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseValue_1_get_Value_m6C9351679C717202CFC83FABDC35E2BFCDEF044E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseValue_1_get_Value_m6FB8CBBB37A0CD1D031E09EC1084703D7FBAA05D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseValue_1_get_Value_mDE4FA4A5E7A249541D4C381297887EE275738698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m2B9D52C4A03B1CDBABC19ED365A2CA0C39FC37AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m7089CEB8607FB0DE0AD8D1CD8457F41646E80D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mA4FDB67254A98EACB7127BECA43B2AA26F6F1893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mEC6245D3C905529969065AE79EC039C09C777356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m485AF7F64784968FFBB292516F59B5246C1A5791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m5A1C8CE07E6CCFD772FAAF407939C198772F7532_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m5E970A292A9A0E787F2673CE972335AB08FF7AD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m73E78CD498272FF708F048856F7E06736CC3DED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2C907EACD6FBC51FC6DB62B5861C9565B5B2A151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m858B8A79A1D9BEDD8237BD7051CB8A2D2B215651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mBA03D0B38E519B0F47180DC732F22247E6CDFBA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mF1A54DABE4F6DA9C82BFF31D977CD7A3A22E1935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_mB3EB3913BF9CD6E2E0665AA3728782BE81636EB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenDef_CloneWithKnownDecimals_m08ED941099F660B0E21FF112DE380D61ACC060FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenDef_ConvertDecimalToUlong_m27A55D52FFD6AA2C7198B1A8EF4C839B9DE4FB3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenDef_ConvertUlongToDecimal_m5CA83D515E01B776D85CEA8C18E5A8E584749A8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenMintResolver_Add_m0C754F83A31A3D878BCAFD5584E21EBC9074E84F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenMintResolver_Add_m4E2A3FCC5A5E7E58A05E737A5CB64EE42D2347CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenMintResolver_ParseTokenList_m4D8DF9046EEB2027E6FEC7F50077E3C630A72199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenMintResolver_Resolve_m1E462C672B3C61EFCE294C4FBFCE61F9635F4A19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenQuantity__ctor_m7E4959AD5EABF35D2FD2CFE52A3D688B61ADD767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenWalletAccount__ctor_m822DAC39B15BE63CD298B864D77147394F7BDD07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenWalletFilterList_ForToken_m4BE948CA1784BAA77F1985FD33B99E26117B2CC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenWalletFilterList_WithCustomFilter_m0E69163928C20EC84E32981BACB91F2BD814B6E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenWalletFilterList_WithPublicKey_m1CBE91C7ACE700D0137B24EF85599D5B31F1BF44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenWalletFilterList_WithSymbol_mEFA64AA481954B88929F73579D9CC3449827B2B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenWalletRpcProxy__ctor_mA34EF6D16073CA9CCF9E4799D30E6A1FF73F5621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenWallet_GetAssociatedTokenAddressForMint_mC67728532F60F137C2BA85EF269A6DD66457FF2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenWallet_IsSubAccount_m2F81F4ACBEDB538D447F77B0A8D1C9237FC29A11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenWallet_IsSubAccount_mEB8AE918E0BFC2790207D0AD7E23B5FD09A0227F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenWallet_JitCreateAssociatedTokenAccount_m2E3443667664133120E1D1418965DD1653692407_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TokenWallet__ctor_mBEEE4D25F598B07CF74BBBEBDF66C63166B70314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsyncU3Ed__24_MoveNext_m9FF1B50F6B5011F2B894DAF56E965D1E5ED03B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRefreshAsyncU3Ed__25_MoveNext_m8F13C69DA0384E7B18A0EF2F3B706917878E79B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBalancesU3Eb__26_0_mEA8CF0ABEECD939376C0229E9C392E3A9833BA5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTokenAccountsU3Eb__27_0_m699E4B4B3A9DE97A026D8769A4EE5CAC2F44776E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CWhichAreAssociatedTokenAccountsU3Eb__11_0_m5BCBE032F661C863725356B0E95AD12196039FD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CWithNonZeroU3Eb__10_0_m2E46E2D95D0A9711F6BB8711B8C469E7573D09EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CWithCustomFilterU3Eb__0_m6F7F38AD73B1B62B9C053351E843F3DBD85D8100_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3CIsSubAccountU3Eb__0_m0A67FAE8E7E1F9D7AAF5B85FB7858B852C6778C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_0_U3CIsSubAccountU3Eb__0_m3F54E129D7FEFC92F83BDD79ACBB5540406C7854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CForTokenU3Eb__0_m11AE38D49AAEE925F9A084470485D492DA6F715A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CWithSymbolU3Eb__0_m502B1EAFBE37726C82D869F30DC70B575E0423FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CWithPublicKeyU3Eb__0_m0E9822D5A2B622CF1EA9C439CFE0EDAFF549955F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CWithMintU3Eb__0_m27D19D23B3AB0AB4CD41DD3F4D99C854EB1F6721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CWithAtLeastU3Eb__0_mE2510613CE68884E7E572770C590EE1E06287F74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CWithAtLeastU3Eb__0_m55196783AC44E9CB236A12C063A182AC7C18A88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TokenWalletBalanceU5BU5D_tD464B6024B54154141CA4D2AB4EC92CE07DB1F3B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t69D80226B4C6457551E72B6918B91C835AF905DA 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Wallet.PublicKey>
struct Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8989CEBFE73DD8F32B150B1322A62855210C5202* ____entries_1;
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
	KeyCollection_t5DE3775BCADD1242308ABA694D6FAA522397DD83* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBE280C6D0B44FF3039F87584B93C1FF24965217C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.Models.TokenMint.TokenDef>
struct Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9A3C7B3108DD1B39A1C2B9D3527797CFD68624AD* ____entries_1;
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
	KeyCollection_t53B4352C864390D4DBF4D1B9F666C03EF29D0BC9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8213169FEECF99215B492F0966E7287C6544E295* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.TokenWalletBalance>
struct Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE0F6B399920C5D1B916D98DD3E7C167481B88AC6* ____entries_1;
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
	KeyCollection_t195AFC665566DD861D96ECEEEF714BD720E30C87* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t479C6184D9CB8F88145D04970A0A33A4243AFD1F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>
struct List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TokenAccountU5BU5D_t1D50969A995BF8ADD11A16C9A3A7A4255C8F3DAC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TokenAccountU5BU5D_t1D50969A995BF8ADD11A16C9A3A7A4255C8F3DAC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenDef>
struct List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TokenDefU5BU5D_t366F0EFA0F0AE464DB4064D83430910C640D0C36* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TokenDefU5BU5D_t366F0EFA0F0AE464DB4064D83430910C640D0C36* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenListItem>
struct List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TokenListItemU5BU5D_tA54ED2BD7B23E306ADC1F5E192525C1F0575F264* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TokenListItemU5BU5D_tA54ED2BD7B23E306ADC1F5E192525C1F0575F264* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Solana.Unity.Extensions.TokenWalletAccount>
struct List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TokenWalletAccountU5BU5D_t344A52248F34B1FF5E2F78CF3D17C6B92F1F2BF7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TokenWalletAccountU5BU5D_t344A52248F34B1FF5E2F78CF3D17C6B92F1F2BF7* ___s_emptyArray_5;
};

// Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>
struct RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA  : public RuntimeObject
{
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasHttpRequestSuccessful>k__BackingField
	bool ___U3CWasHttpRequestSuccessfulU3Ek__BackingField_0;
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasRequestSuccessfullyHandled>k__BackingField
	bool ___U3CWasRequestSuccessfullyHandledU3Ek__BackingField_1;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<Reason>k__BackingField
	String_t* ___U3CReasonU3Ek__BackingField_2;
	// T Solana.Unity.Rpc.Core.Http.RequestResult`1::<Result>k__BackingField
	ResponseValue_1_tA9E11CD10D2ECAD8D2FC880998215523D5EA385C* ___U3CResultU3Ek__BackingField_3;
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

// Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>
struct RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672  : public RuntimeObject
{
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasHttpRequestSuccessful>k__BackingField
	bool ___U3CWasHttpRequestSuccessfulU3Ek__BackingField_0;
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasRequestSuccessfullyHandled>k__BackingField
	bool ___U3CWasRequestSuccessfullyHandledU3Ek__BackingField_1;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<Reason>k__BackingField
	String_t* ___U3CReasonU3Ek__BackingField_2;
	// T Solana.Unity.Rpc.Core.Http.RequestResult`1::<Result>k__BackingField
	ResponseValue_1_t47F8A210890E6A267CEE9183D62273224351A5B6* ___U3CResultU3Ek__BackingField_3;
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

// Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>
struct RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8  : public RuntimeObject
{
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasHttpRequestSuccessful>k__BackingField
	bool ___U3CWasHttpRequestSuccessfulU3Ek__BackingField_0;
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasRequestSuccessfullyHandled>k__BackingField
	bool ___U3CWasRequestSuccessfullyHandledU3Ek__BackingField_1;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<Reason>k__BackingField
	String_t* ___U3CReasonU3Ek__BackingField_2;
	// T Solana.Unity.Rpc.Core.Http.RequestResult`1::<Result>k__BackingField
	ResponseValue_1_t0BCADF3E5348490F730192C8C7282EFED595AB57* ___U3CResultU3Ek__BackingField_3;
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

// Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>
struct ResponseValue_1_tA9E11CD10D2ECAD8D2FC880998215523D5EA385C  : public RuntimeObject
{
	// Solana.Unity.Rpc.Messages.ContextObj Solana.Unity.Rpc.Messages.ResponseValue`1::<Context>k__BackingField
	ContextObj_t20CBAD0294B1CE430341642034DBC6207DABD526* ___U3CContextU3Ek__BackingField_0;
	// T Solana.Unity.Rpc.Messages.ResponseValue`1::<Value>k__BackingField
	List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73* ___U3CValueU3Ek__BackingField_1;
};

// Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>
struct ResponseValue_1_t47F8A210890E6A267CEE9183D62273224351A5B6  : public RuntimeObject
{
	// Solana.Unity.Rpc.Messages.ContextObj Solana.Unity.Rpc.Messages.ResponseValue`1::<Context>k__BackingField
	ContextObj_t20CBAD0294B1CE430341642034DBC6207DABD526* ___U3CContextU3Ek__BackingField_0;
	// T Solana.Unity.Rpc.Messages.ResponseValue`1::<Value>k__BackingField
	BlockHash_t01BC23F321B989D27E8E37A68BCE97B3C47BD9A3* ___U3CValueU3Ek__BackingField_1;
};

// Solana.Unity.Rpc.Messages.ResponseValue`1<System.Object>
struct ResponseValue_1_t8663D687999D2DEE6072DDA9FD2059BBDE351512  : public RuntimeObject
{
	// Solana.Unity.Rpc.Messages.ContextObj Solana.Unity.Rpc.Messages.ResponseValue`1::<Context>k__BackingField
	ContextObj_t20CBAD0294B1CE430341642034DBC6207DABD526* ___U3CContextU3Ek__BackingField_0;
	// T Solana.Unity.Rpc.Messages.ResponseValue`1::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};

// Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>
struct ResponseValue_1_t0BCADF3E5348490F730192C8C7282EFED595AB57  : public RuntimeObject
{
	// Solana.Unity.Rpc.Messages.ContextObj Solana.Unity.Rpc.Messages.ResponseValue`1::<Context>k__BackingField
	ContextObj_t20CBAD0294B1CE430341642034DBC6207DABD526* ___U3CContextU3Ek__BackingField_0;
	// T Solana.Unity.Rpc.Messages.ResponseValue`1::<Value>k__BackingField
	uint64_t ___U3CValueU3Ek__BackingField_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Solana.Unity.Extensions.TokenWalletBalance>
struct ValueCollection_t479C6184D9CB8F88145D04970A0A33A4243AFD1F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* ____dictionary_0;
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
struct Il2CppArrayBounds;

// Solana.Unity.Rpc.Models.BlockHash
struct BlockHash_t01BC23F321B989D27E8E37A68BCE97B3C47BD9A3  : public RuntimeObject
{
	// System.String Solana.Unity.Rpc.Models.BlockHash::<Blockhash>k__BackingField
	String_t* ___U3CBlockhashU3Ek__BackingField_0;
	// Solana.Unity.Rpc.Models.FeeCalculator Solana.Unity.Rpc.Models.BlockHash::<FeeCalculator>k__BackingField
	FeeCalculator_tA5405DEF85DB80887E252A76DB88830F219654F5* ___U3CFeeCalculatorU3Ek__BackingField_1;
};

// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD  : public RuntimeObject
{
	// Newtonsoft.Json.DefaultJsonNameTable Newtonsoft.Json.Serialization.DefaultContractResolver::_nameTable
	DefaultJsonNameTable_t81ABCBAD900C62AEA009A48779C3F3893DBC110D* ____nameTable_3;
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.JsonContract> Newtonsoft.Json.Serialization.DefaultContractResolver::_contractCache
	ThreadSafeStore_2_tF22121D3E11895CE38FFEE9105F013F4ECC2DFC5* ____contractCache_4;
	// System.Reflection.BindingFlags Newtonsoft.Json.Serialization.DefaultContractResolver::<DefaultMembersSearchFlags>k__BackingField
	int32_t ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<SerializeCompilerGeneratedMembers>k__BackingField
	bool ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableInterface>k__BackingField
	bool ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableAttribute>k__BackingField
	bool ___U3CIgnoreSerializableAttributeU3Ek__BackingField_8;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreIsSpecifiedMembers>k__BackingField
	bool ___U3CIgnoreIsSpecifiedMembersU3Ek__BackingField_9;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreShouldSerializeMembers>k__BackingField
	bool ___U3CIgnoreShouldSerializeMembersU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Serialization.DefaultContractResolver::<NamingStrategy>k__BackingField
	NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50* ___U3CNamingStrategyU3Ek__BackingField_11;
};

struct DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD_StaticFields
{
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.DefaultContractResolver::_instance
	RuntimeObject* ____instance_0;
	// System.String[] Newtonsoft.Json.Serialization.DefaultContractResolver::BlacklistedTypeNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___BlacklistedTypeNames_1;
	// Newtonsoft.Json.JsonConverter[] Newtonsoft.Json.Serialization.DefaultContractResolver::BuiltInConverters
	JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* ___BuiltInConverters_2;
};

// System.Net.Http.HttpContent
struct HttpContent_tD09737BB27CB151BC9688882F785208620211E1C  : public RuntimeObject
{
	// System.Net.Http.HttpContent/FixedMemoryStream System.Net.Http.HttpContent::buffer
	FixedMemoryStream_tDCEF941500AF29277C42DDF40970FB21B4A66188* ___buffer_0;
	// System.Boolean System.Net.Http.HttpContent::disposed
	bool ___disposed_1;
	// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::headers
	HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F* ___headers_2;
};

// System.Net.Http.HttpMessageInvoker
struct HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800  : public RuntimeObject
{
	// System.Net.Http.HttpMessageHandler System.Net.Http.HttpMessageInvoker::handler
	HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* ___handler_0;
	// System.Boolean System.Net.Http.HttpMessageInvoker::disposeHandler
	bool ___disposeHandler_1;
};

// System.Net.Http.HttpMethod
struct HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E  : public RuntimeObject
{
	// System.String System.Net.Http.HttpMethod::method
	String_t* ___method_7;
};

struct HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_StaticFields
{
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::delete_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___delete_method_0;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::get_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___get_method_1;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::head_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___head_method_2;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::options_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___options_method_3;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::post_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___post_method_4;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::put_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___put_method_5;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::trace_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___trace_method_6;
};

// System.Net.Http.HttpRequestMessage
struct HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2  : public RuntimeObject
{
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpRequestMessage::headers
	HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* ___headers_0;
	// System.Net.Http.HttpMethod System.Net.Http.HttpRequestMessage::method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___method_1;
	// System.Version System.Net.Http.HttpRequestMessage::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_2;
	// System.Uri System.Net.Http.HttpRequestMessage::uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri_3;
	// System.Boolean System.Net.Http.HttpRequestMessage::is_used
	bool ___is_used_4;
	// System.Boolean System.Net.Http.HttpRequestMessage::disposed
	bool ___disposed_5;
	// System.Net.Http.HttpContent System.Net.Http.HttpRequestMessage::<Content>k__BackingField
	HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___U3CContentU3Ek__BackingField_6;
};

// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970  : public RuntimeObject
{
	// System.Net.Http.Headers.HttpResponseHeaders System.Net.Http.HttpResponseMessage::headers
	HttpResponseHeaders_tAD02F8CC2960BC561FEFD63E0121701743EAA7A8* ___headers_0;
	// System.String System.Net.Http.HttpResponseMessage::reasonPhrase
	String_t* ___reasonPhrase_1;
	// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::statusCode
	int32_t ___statusCode_2;
	// System.Version System.Net.Http.HttpResponseMessage::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_3;
	// System.Boolean System.Net.Http.HttpResponseMessage::disposed
	bool ___disposed_4;
	// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::<Content>k__BackingField
	HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___U3CContentU3Ek__BackingField_5;
	// System.Net.Http.HttpRequestMessage System.Net.Http.HttpResponseMessage::<RequestMessage>k__BackingField
	HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___U3CRequestMessageU3Ek__BackingField_6;
};

// System.Runtime.CompilerServices.IsExternalInit
struct IsExternalInit_t592A4F8D7C1EAF2D00C14B5F4970FD71FDE33A33  : public RuntimeObject
{
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50  : public RuntimeObject
{
	// System.Boolean Newtonsoft.Json.Serialization.NamingStrategy::<ProcessDictionaryKeys>k__BackingField
	bool ___U3CProcessDictionaryKeysU3Ek__BackingField_0;
	// System.Boolean Newtonsoft.Json.Serialization.NamingStrategy::<ProcessExtensionDataNames>k__BackingField
	bool ___U3CProcessExtensionDataNamesU3Ek__BackingField_1;
	// System.Boolean Newtonsoft.Json.Serialization.NamingStrategy::<OverrideSpecifiedNames>k__BackingField
	bool ___U3COverrideSpecifiedNamesU3Ek__BackingField_2;
};

// Solana.Unity.Rpc.Models.ParsedTokenAccountData
struct ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442  : public RuntimeObject
{
	// System.String Solana.Unity.Rpc.Models.ParsedTokenAccountData::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_0;
	// Solana.Unity.Rpc.Models.TokenAccountInfoDetails Solana.Unity.Rpc.Models.ParsedTokenAccountData::<Info>k__BackingField
	TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* ___U3CInfoU3Ek__BackingField_1;
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

// Solana.Unity.Rpc.Models.TokenAccount
struct TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643  : public RuntimeObject
{
	// Solana.Unity.Rpc.Models.TokenAccountInfo Solana.Unity.Rpc.Models.TokenAccount::<Account>k__BackingField
	TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* ___U3CAccountU3Ek__BackingField_0;
	// System.String Solana.Unity.Rpc.Models.TokenAccount::<PublicKey>k__BackingField
	String_t* ___U3CPublicKeyU3Ek__BackingField_1;
};

// Solana.Unity.Rpc.Models.TokenAccountData
struct TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66  : public RuntimeObject
{
	// System.String Solana.Unity.Rpc.Models.TokenAccountData::<Program>k__BackingField
	String_t* ___U3CProgramU3Ek__BackingField_0;
	// System.UInt64 Solana.Unity.Rpc.Models.TokenAccountData::<Space>k__BackingField
	uint64_t ___U3CSpaceU3Ek__BackingField_1;
	// Solana.Unity.Rpc.Models.ParsedTokenAccountData Solana.Unity.Rpc.Models.TokenAccountData::<Parsed>k__BackingField
	ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* ___U3CParsedU3Ek__BackingField_2;
};

// Solana.Unity.Rpc.Models.TokenAccountInfoDetails
struct TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE  : public RuntimeObject
{
	// Solana.Unity.Rpc.Models.TokenBalance Solana.Unity.Rpc.Models.TokenAccountInfoDetails::<TokenAmount>k__BackingField
	TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* ___U3CTokenAmountU3Ek__BackingField_0;
	// System.String Solana.Unity.Rpc.Models.TokenAccountInfoDetails::<Delegate>k__BackingField
	String_t* ___U3CDelegateU3Ek__BackingField_1;
	// Solana.Unity.Rpc.Models.TokenBalance Solana.Unity.Rpc.Models.TokenAccountInfoDetails::<DelegatedAmount>k__BackingField
	TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* ___U3CDelegatedAmountU3Ek__BackingField_2;
	// System.String Solana.Unity.Rpc.Models.TokenAccountInfoDetails::<State>k__BackingField
	String_t* ___U3CStateU3Ek__BackingField_3;
	// System.Boolean Solana.Unity.Rpc.Models.TokenAccountInfoDetails::<IsNative>k__BackingField
	bool ___U3CIsNativeU3Ek__BackingField_4;
	// System.String Solana.Unity.Rpc.Models.TokenAccountInfoDetails::<Mint>k__BackingField
	String_t* ___U3CMintU3Ek__BackingField_5;
	// System.String Solana.Unity.Rpc.Models.TokenAccountInfoDetails::<Owner>k__BackingField
	String_t* ___U3COwnerU3Ek__BackingField_6;
};

// Solana.Unity.Extensions.Models.TokenMint.TokenDef
struct TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32  : public RuntimeObject
{
	// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::<TokenMint>k__BackingField
	String_t* ___U3CTokenMintU3Ek__BackingField_0;
	// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::<TokenName>k__BackingField
	String_t* ___U3CTokenNameU3Ek__BackingField_1;
	// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::<Symbol>k__BackingField
	String_t* ___U3CSymbolU3Ek__BackingField_2;
	// System.Int32 Solana.Unity.Extensions.Models.TokenMint.TokenDef::<DecimalPlaces>k__BackingField
	int32_t ___U3CDecimalPlacesU3Ek__BackingField_3;
	// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::<CoinGeckoId>k__BackingField
	String_t* ___U3CCoinGeckoIdU3Ek__BackingField_4;
	// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::<TokenProjectUrl>k__BackingField
	String_t* ___U3CTokenProjectUrlU3Ek__BackingField_5;
	// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::<TokenLogoUrl>k__BackingField
	String_t* ___U3CTokenLogoUrlU3Ek__BackingField_6;
};

// Solana.Unity.Extensions.Models.TokenMint.TokenListDoc
struct TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenListItem> Solana.Unity.Extensions.Models.TokenMint.TokenListDoc::<tokens>k__BackingField
	List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* ___U3CtokensU3Ek__BackingField_0;
};

// Solana.Unity.Extensions.Models.TokenMint.TokenListItem
struct TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26  : public RuntimeObject
{
	// System.String Solana.Unity.Extensions.Models.TokenMint.TokenListItem::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_0;
	// System.String Solana.Unity.Extensions.Models.TokenMint.TokenListItem::<Symbol>k__BackingField
	String_t* ___U3CSymbolU3Ek__BackingField_1;
	// System.String Solana.Unity.Extensions.Models.TokenMint.TokenListItem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Int32 Solana.Unity.Extensions.Models.TokenMint.TokenListItem::<Decimals>k__BackingField
	int32_t ___U3CDecimalsU3Ek__BackingField_3;
	// System.String Solana.Unity.Extensions.Models.TokenMint.TokenListItem::<LogoUri>k__BackingField
	String_t* ___U3CLogoUriU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Solana.Unity.Extensions.Models.TokenMint.TokenListItem::<Extensions>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CExtensionsU3Ek__BackingField_5;
};

// Solana.Unity.Extensions.TokenMintResolver
struct TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.Models.TokenMint.TokenDef> Solana.Unity.Extensions.TokenMintResolver::_tokens
	Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818* ____tokens_1;
};

// Solana.Unity.Programs.TokenProgram
struct TokenProgram_tAC7AD56BE92E3D7F5BB55E7C8F018DB308607424  : public RuntimeObject
{
};

struct TokenProgram_tAC7AD56BE92E3D7F5BB55E7C8F018DB308607424_StaticFields
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.TokenProgram::ProgramIdKey
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___ProgramIdKey_0;
};

// Solana.Unity.Extensions.TokenWallet
struct TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F  : public RuntimeObject
{
	// Solana.Unity.Extensions.ITokenWalletRpcProxy Solana.Unity.Extensions.TokenWallet::<RpcClient>k__BackingField
	RuntimeObject* ___U3CRpcClientU3Ek__BackingField_0;
	// Solana.Unity.Extensions.ITokenMintResolver Solana.Unity.Extensions.TokenWallet::<MintResolver>k__BackingField
	RuntimeObject* ___U3CMintResolverU3Ek__BackingField_1;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet::<PublicKey>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CPublicKeyU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Wallet.PublicKey> Solana.Unity.Extensions.TokenWallet::_ataCache
	Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF* ____ataCache_3;
	// System.UInt64 Solana.Unity.Extensions.TokenWallet::<Lamports>k__BackingField
	uint64_t ___U3CLamportsU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount> Solana.Unity.Extensions.TokenWallet::_tokenAccounts
	List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73* ____tokenAccounts_5;
};

// Solana.Unity.Extensions.Models.TokenWalletFilterList
struct TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<Solana.Unity.Extensions.TokenWalletAccount> Solana.Unity.Extensions.Models.TokenWalletFilterList::_list
	RuntimeObject* ____list_0;
};

// Solana.Unity.Extensions.TokenWalletRpcProxy
struct TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4  : public RuntimeObject
{
	// Solana.Unity.Rpc.IRpcClient Solana.Unity.Extensions.TokenWalletRpcProxy::_client
	RuntimeObject* ____client_0;
};

// Solana.Unity.Rpc.Builders.TransactionBuilder
struct TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4  : public RuntimeObject
{
	// Solana.Unity.Rpc.Builders.MessageBuilder Solana.Unity.Rpc.Builders.TransactionBuilder::_messageBuilder
	MessageBuilder_t79F41E3E76BE5BBB6D146628BB96C70CBE68E2E2* ____messageBuilder_1;
	// System.Collections.Generic.List`1<System.String> Solana.Unity.Rpc.Builders.TransactionBuilder::_signatures
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____signatures_2;
	// System.Byte[] Solana.Unity.Rpc.Builders.TransactionBuilder::_serializedMessage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____serializedMessage_3;
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

// Solana.Unity.Extensions.WellKnownTokens
struct WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0  : public RuntimeObject
{
};

struct WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields
{
	// System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenDef> Solana.Unity.Extensions.WellKnownTokens::_tokens
	List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* ____tokens_0;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::WrappedSOL
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___WrappedSOL_1;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::USDC
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___USDC_2;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::USDT
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___USDT_3;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Serum
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Serum_4;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Raydium
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Raydium_5;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Bonfida
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Bonfida_6;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Cope
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Cope_7;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Kin
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Kin_8;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Tulip
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Tulip_9;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Orca
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Orca_10;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Mango
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Mango_11;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Samoyed
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Samoyed_12;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Saber
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Saber_13;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Fabric
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Fabric_14;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Boring
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Boring_15;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Liquid
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Liquid_16;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Step
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Step_17;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Solrise
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Solrise_18;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Only1
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Only1_19;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::StarAtlas
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___StarAtlas_20;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::StarAtlasDao
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___StarAtlasDao_21;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::Woof
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___Woof_22;
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.WellKnownTokens::ShadowToken
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___ShadowToken_23;
};

// Solana.Unity.Extensions.TokenWallet/<>c
struct U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0  : public RuntimeObject
{
};

struct U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_StaticFields
{
	// Solana.Unity.Extensions.TokenWallet/<>c Solana.Unity.Extensions.TokenWallet/<>c::<>9
	U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0* ___U3CU3E9_0;
	// System.Func`2<Solana.Unity.Extensions.TokenWalletBalance,System.String> Solana.Unity.Extensions.TokenWallet/<>c::<>9__26_0
	Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F* ___U3CU3E9__26_0_1;
	// System.Func`2<Solana.Unity.Extensions.TokenWalletAccount,System.String> Solana.Unity.Extensions.TokenWallet/<>c::<>9__27_0
	Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173* ___U3CU3E9__27_0_2;
};

// Solana.Unity.Extensions.TokenWallet/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75  : public RuntimeObject
{
	// System.String Solana.Unity.Extensions.TokenWallet/<>c__DisplayClass32_0::pubkey
	String_t* ___pubkey_0;
};

// Solana.Unity.Extensions.TokenWallet/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet/<>c__DisplayClass33_0::pubkey
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___pubkey_0;
};

// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c
struct U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4  : public RuntimeObject
{
};

struct U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_StaticFields
{
	// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c::<>9
	U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4* ___U3CU3E9_0;
	// System.Func`2<Solana.Unity.Extensions.TokenWalletAccount,System.Boolean> Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c::<>9__10_0
	Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* ___U3CU3E9__10_0_1;
	// System.Func`2<Solana.Unity.Extensions.TokenWalletAccount,System.Boolean> Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c::<>9__11_0
	Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* ___U3CU3E9__11_0_2;
};

// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06  : public RuntimeObject
{
	// System.Predicate`1<Solana.Unity.Extensions.TokenWalletAccount> Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass13_0::filter
	Predicate_1_t2B924A8D85AFBF69B001EB1CB9B49274C086ED71* ___filter_0;
};

// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE  : public RuntimeObject
{
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass4_0::token
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___token_0;
};

// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92  : public RuntimeObject
{
	// System.String Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass5_0::symbol
	String_t* ___symbol_0;
};

// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259  : public RuntimeObject
{
	// System.String Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass6_0::publicKey
	String_t* ___publicKey_0;
};

// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E  : public RuntimeObject
{
	// System.String Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass7_0::mint
	String_t* ___mint_0;
};

// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C  : public RuntimeObject
{
	// System.UInt64 Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass9_0::minimumBalance
	uint64_t ___minimumBalance_0;
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

// System.Collections.Generic.List`1/Enumerator<Solana.Unity.Rpc.Models.TokenAccount>
struct Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Solana.Unity.Extensions.Models.TokenMint.TokenDef>
struct Enumerator_tC8E0EF05C012F0C94CCE1AECF59B80183950E246 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Solana.Unity.Extensions.Models.TokenMint.TokenListItem>
struct Enumerator_t95B3515B0BBE9CEF864137A59519312A9AB6649D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* ____current_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>
struct TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>
struct TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>
struct TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>
struct TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>
struct TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenMintResolver>
struct TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenWallet>
struct TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>
struct Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* ___m_result_38;
};

struct Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tD59DB9B82D6EB94EAFCCFE8C6917BD399868670C* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>
struct Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672* ___m_result_38;
};

struct Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tB66249D720FEAF2618DBFE3129A263CEA11D05F3* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>
struct Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* ___m_result_38;
};

struct Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t5B3D2301B1D8EBB2445D4B8F7516985CB45B281E* ___s_defaultFactory_39;
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

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
};

struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___m_result_38;
};

struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7BDD01363BBCFF64B4A6BDDBBE222716A0B2E2BA* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_38;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenMintResolver>
struct Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* ___m_result_38;
};

struct Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0EE4F858D6530BE76B9657963C67D9FB9A314118* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenWallet>
struct Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* ___m_result_38;
};

struct Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t2C8FA17272D2E1CFD3B3D3882B4F8596755C863B* ___s_defaultFactory_39;
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

// Newtonsoft.Json.Serialization.CamelCaseNamingStrategy
struct CamelCaseNamingStrategy_tCD17472E129D8769696271E3785AC5FA29DE6DB8  : public NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50
{
};

// Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver
struct CamelCasePropertyNamesContractResolver_tB03DB20CC6D59C5D7C4E5959D5AA60AE22980D0C  : public DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD
{
};

struct CamelCasePropertyNamesContractResolver_tB03DB20CC6D59C5D7C4E5959D5AA60AE22980D0C_StaticFields
{
	// System.Object Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver::TypeContractCacheLock
	RuntimeObject* ___TypeContractCacheLock_12;
	// Newtonsoft.Json.DefaultJsonNameTable Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver::NameTable
	DefaultJsonNameTable_t81ABCBAD900C62AEA009A48779C3F3893DBC110D* ___NameTable_13;
	// System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,System.Type>,Newtonsoft.Json.Serialization.JsonContract> Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver::_contractCache
	Dictionary_2_t35511E60D5802E152E6A56E984ACBE19AF7654AD* ____contractCache_14;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// Newtonsoft.Json.Converters.StringEnumConverter
struct StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Converters.StringEnumConverter::<NamingStrategy>k__BackingField
	NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50* ___U3CNamingStrategyU3Ek__BackingField_0;
	// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::<AllowIntegerValues>k__BackingField
	bool ___U3CAllowIntegerValuesU3Ek__BackingField_1;
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

// Solana.Unity.Rpc.Models.TokenAccountInfo
struct TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF  : public AccountInfoBase_t1D3349589317F053FAC79A6C7FFDEB72B347210B
{
	// Solana.Unity.Rpc.Models.TokenAccountData Solana.Unity.Rpc.Models.TokenAccountInfo::<Data>k__BackingField
	TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* ___U3CDataU3Ek__BackingField_4;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>
struct AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>
struct AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>
struct AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4* ___s_defaultResultTask_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_defaultResultTask_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver>
struct AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>
struct AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* ___s_defaultResultTask_0;
};

// System.Nullable`1<System.Decimal>
struct Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value_1;
};

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value_1;
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

// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42  : public HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800
{
	// System.Uri System.Net.Http.HttpClient::base_address
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___base_address_3;
	// System.Threading.CancellationTokenSource System.Net.Http.HttpClient::cts
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___cts_4;
	// System.Boolean System.Net.Http.HttpClient::disposed
	bool ___disposed_5;
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpClient::headers
	HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* ___headers_6;
	// System.Int64 System.Net.Http.HttpClient::buffer_size
	int64_t ___buffer_size_7;
	// System.TimeSpan System.Net.Http.HttpClient::timeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout_8;
};

struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_StaticFields
{
	// System.TimeSpan System.Net.Http.HttpClient::TimeoutDefault
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___TimeoutDefault_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Solana.Unity.Extensions.TokenQuantity
struct TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59  : public RuntimeObject
{
	// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.TokenQuantity::<TokenDef>k__BackingField
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___U3CTokenDefU3Ek__BackingField_0;
	// System.String Solana.Unity.Extensions.TokenQuantity::<TokenMint>k__BackingField
	String_t* ___U3CTokenMintU3Ek__BackingField_1;
	// System.String Solana.Unity.Extensions.TokenQuantity::<Symbol>k__BackingField
	String_t* ___U3CSymbolU3Ek__BackingField_2;
	// System.String Solana.Unity.Extensions.TokenQuantity::<TokenName>k__BackingField
	String_t* ___U3CTokenNameU3Ek__BackingField_3;
	// System.Int32 Solana.Unity.Extensions.TokenQuantity::<DecimalPlaces>k__BackingField
	int32_t ___U3CDecimalPlacesU3Ek__BackingField_4;
	// System.Decimal Solana.Unity.Extensions.TokenQuantity::<QuantityDecimal>k__BackingField
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CQuantityDecimalU3Ek__BackingField_5;
	// System.UInt64 Solana.Unity.Extensions.TokenQuantity::<QuantityRaw>k__BackingField
	uint64_t ___U3CQuantityRawU3Ek__BackingField_6;
};

// Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118  : public RuntimeObject
{
	// System.Decimal Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass8_0::minimumBalance
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___minimumBalance_0;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF  : public RuntimeObject
{
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_22;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_23;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_24;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_25;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_26;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_27;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_28;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_29;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_30;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_31;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_32;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_33;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_34;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F ____typeNameAssemblyFormatHandling_35;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 ____defaultValueHandling_36;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 ____preserveReferencesHandling_37;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ____nullValueHandling_38;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D ____objectCreationHandling_39;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 ____missingMemberHandling_40;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ____referenceLoopHandling_41;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A ____context_42;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 ____constructorHandling_43;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ____typeNameHandling_44;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE ____metadataPropertyHandling_45;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_46;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_47;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_48;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2* ___U3CReferenceResolverProviderU3Ek__BackingField_49;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_50;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_51;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___U3CErrorU3Ek__BackingField_52;
};

struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_StaticFields
{
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___DefaultContext_9;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___DefaultCulture_18;
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

// Solana.Unity.Rpc.Models.TokenBalance
struct TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE  : public RuntimeObject
{
	// System.String Solana.Unity.Rpc.Models.TokenBalance::<Amount>k__BackingField
	String_t* ___U3CAmountU3Ek__BackingField_0;
	// System.Int32 Solana.Unity.Rpc.Models.TokenBalance::<Decimals>k__BackingField
	int32_t ___U3CDecimalsU3Ek__BackingField_1;
	// System.Nullable`1<System.Decimal> Solana.Unity.Rpc.Models.TokenBalance::<UiAmount>k__BackingField
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CUiAmountU3Ek__BackingField_2;
	// System.String Solana.Unity.Rpc.Models.TokenBalance::<UiAmountString>k__BackingField
	String_t* ___U3CUiAmountStringU3Ek__BackingField_3;
};

// Solana.Unity.Extensions.TokenWalletBalance
struct TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9  : public TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59
{
	// System.UInt64 Solana.Unity.Extensions.TokenWalletBalance::<Lamports>k__BackingField
	uint64_t ___U3CLamportsU3Ek__BackingField_7;
	// System.Int32 Solana.Unity.Extensions.TokenWalletBalance::<AccountCount>k__BackingField
	int32_t ___U3CAccountCountU3Ek__BackingField_8;
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

// Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__8
struct U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957 
{
	// System.Int32 Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver> Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A ___U3CU3Et__builder_1;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenMintResolver> Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__8::<>u__1
	TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF ___U3CU3Eu__1_2;
};

// Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9
struct U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D 
{
	// System.Int32 Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver> Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9::<>t__builder
	AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A ___U3CU3Et__builder_1;
	// System.String Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9::url
	String_t* ___url_2;
	// System.Net.Http.HttpClient Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9::<client>5__2
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ___U3CclientU3E5__2_3;
	// System.Net.Http.HttpRequestMessage Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9::<httpReq>5__3
	HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___U3ChttpReqU3E5__3_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage> Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9::<>u__1
	TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9::<>u__2
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__2_6;
};

// Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21
struct U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3 
{
	// System.Int32 Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21::<>t__builder
	AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9 ___U3CU3Et__builder_1;
	// Solana.Unity.Extensions.ITokenWalletRpcProxy Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21::client
	RuntimeObject* ___client_2;
	// Solana.Unity.Extensions.ITokenMintResolver Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21::mintResolver
	RuntimeObject* ___mintResolver_3;
	// System.String Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21::publicKey
	String_t* ___publicKey_4;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21::commitment
	int32_t ___commitment_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21::<>u__1
	TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 ___U3CU3Eu__1_6;
};

// Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22
struct U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81 
{
	// System.Int32 Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22::<>t__builder
	AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9 ___U3CU3Et__builder_1;
	// Solana.Unity.Rpc.IRpcClient Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22::client
	RuntimeObject* ___client_2;
	// Solana.Unity.Extensions.ITokenMintResolver Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22::mintResolver
	RuntimeObject* ___mintResolver_3;
	// System.String Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22::publicKey
	String_t* ___publicKey_4;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22::commitment
	int32_t ___commitment_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22::<>u__1
	TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 ___U3CU3Eu__1_6;
};

// Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23
struct U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A 
{
	// System.Int32 Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23::<>t__builder
	AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9 ___U3CU3Et__builder_1;
	// Solana.Unity.Rpc.IRpcClient Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23::client
	RuntimeObject* ___client_2;
	// Solana.Unity.Extensions.ITokenMintResolver Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23::mintResolver
	RuntimeObject* ___mintResolver_3;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23::publicKey
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey_4;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23::commitment
	int32_t ___commitment_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23::<>u__1
	TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 ___U3CU3Eu__1_6;
};

// Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24
struct U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA 
{
	// System.Int32 Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24::<>t__builder
	AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9 ___U3CU3Et__builder_1;
	// Solana.Unity.Extensions.ITokenWalletRpcProxy Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24::client
	RuntimeObject* ___client_2;
	// Solana.Unity.Extensions.ITokenMintResolver Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24::mintResolver
	RuntimeObject* ___mintResolver_3;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24::publicKey
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey_4;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24::commitment
	int32_t ___commitment_5;
	// Solana.Unity.Extensions.TokenWallet Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24::<output>5__2
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* ___U3CoutputU3E5__2_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_7;
};

// Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25
struct U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938 
{
	// System.Int32 Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// Solana.Unity.Extensions.TokenWallet Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25::<>4__this
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* ___U3CU3E4__this_2;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25::commitment
	int32_t ___commitment_3;
	// Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>> Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25::<balance>5__2
	RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* ___U3CbalanceU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>> Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25::<>u__1
	TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>> Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25::<>u__2
	TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 ___U3CU3Eu__2_6;
};

// Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28
struct U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636 
{
	// System.Int32 Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::<>t__builder
	AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 ___U3CU3Et__builder_1;
	// Solana.Unity.Extensions.TokenWallet Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::<>4__this
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* ___U3CU3E4__this_2;
	// Solana.Unity.Extensions.TokenWalletAccount Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::source
	TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___source_3;
	// System.Decimal Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::amount
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___amount_4;
	// System.String Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::destination
	String_t* ___destination_5;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::feePayer
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer_6;
	// System.Func`2<Solana.Unity.Rpc.Builders.TransactionBuilder,System.Byte[]> Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::signTxCallback
	Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52* ___signTxCallback_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::<>u__1
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 ___U3CU3Eu__1_8;
};

// Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29
struct U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB 
{
	// System.Int32 Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::<>t__builder
	AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 ___U3CU3Et__builder_1;
	// Solana.Unity.Extensions.TokenWalletAccount Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::source
	TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___source_2;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::destination
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___destination_3;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::feePayer
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer_4;
	// System.Func`2<Solana.Unity.Rpc.Builders.TransactionBuilder,System.Byte[]> Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::signTxCallback
	Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52* ___signTxCallback_5;
	// Solana.Unity.Extensions.TokenWallet Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::<>4__this
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* ___U3CU3E4__this_6;
	// System.Decimal Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::amount
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___amount_7;
	// Solana.Unity.Extensions.TokenWallet Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::<destWallet>5__2
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* ___U3CdestWalletU3E5__2_8;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::<>u__1
	TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 ___U3CU3Eu__1_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>> Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::<>u__2
	TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 ___U3CU3Eu__2_10;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::<>u__3
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 ___U3CU3Eu__3_11;
};

// Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2
struct U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44 
{
	// System.Int32 Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>> Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2::<>t__builder
	AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95 ___U3CU3Et__builder_1;
	// Solana.Unity.Extensions.TokenWalletRpcProxy Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2::<>4__this
	TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* ___U3CU3E4__this_2;
	// System.String Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2::pubKey
	String_t* ___pubKey_3;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2::commitment
	int32_t ___commitment_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>> Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2::<>u__1
	TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 ___U3CU3Eu__1_5;
};

// Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3
struct U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC 
{
	// System.Int32 Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>> Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61 ___U3CU3Et__builder_1;
	// Solana.Unity.Extensions.TokenWalletRpcProxy Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3::<>4__this
	TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* ___U3CU3E4__this_2;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3::commitment
	int32_t ___commitment_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>> Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3::<>u__1
	TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 ___U3CU3Eu__1_4;
};

// Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4
struct U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23 
{
	// System.Int32 Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>> Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4::<>t__builder
	AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB ___U3CU3Et__builder_1;
	// Solana.Unity.Extensions.TokenWalletRpcProxy Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4::<>4__this
	TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* ___U3CU3E4__this_2;
	// System.String Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4::ownerPubKey
	String_t* ___ownerPubKey_3;
	// System.String Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4::tokenMintPubKey
	String_t* ___tokenMintPubKey_4;
	// System.String Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4::tokenProgramId
	String_t* ___tokenProgramId_5;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4::commitment
	int32_t ___commitment_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>> Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4::<>u__1
	TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 ___U3CU3Eu__1_7;
};

// Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5
struct U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44 
{
	// System.Int32 Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 ___U3CU3Et__builder_1;
	// Solana.Unity.Extensions.TokenWalletRpcProxy Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5::<>4__this
	TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* ___U3CU3E4__this_2;
	// System.Byte[] Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5::transaction
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___transaction_3;
	// System.Boolean Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5::skipPreflight
	bool ___skipPreflight_4;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5::commitment
	int32_t ___commitment_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5::<>u__1
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 ___U3CU3Eu__1_6;
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<Solana.Unity.Rpc.Models.TokenAccount,System.Boolean>
struct Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30  : public MulticastDelegate_t
{
};

// System.Func`2<Solana.Unity.Extensions.TokenWalletAccount,System.Boolean>
struct Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600  : public MulticastDelegate_t
{
};

// System.Func`2<Solana.Unity.Extensions.TokenWalletAccount,System.String>
struct Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173  : public MulticastDelegate_t
{
};

// System.Func`2<Solana.Unity.Extensions.TokenWalletBalance,System.String>
struct Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F  : public MulticastDelegate_t
{
};

// System.Func`2<Solana.Unity.Rpc.Builders.TransactionBuilder,System.Byte[]>
struct Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52  : public MulticastDelegate_t
{
};

// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12  : public MulticastDelegate_t
{
};

// System.Predicate`1<Solana.Unity.Extensions.TokenWalletAccount>
struct Predicate_1_t2B924A8D85AFBF69B001EB1CB9B49274C086ED71  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Solana.Unity.Extensions.TokenWalletAccount
struct TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D  : public TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9
{
	// System.String Solana.Unity.Extensions.TokenWalletAccount::<PublicKey>k__BackingField
	String_t* ___U3CPublicKeyU3Ek__BackingField_9;
	// System.String Solana.Unity.Extensions.TokenWalletAccount::<Owner>k__BackingField
	String_t* ___U3COwnerU3Ek__BackingField_10;
	// System.Boolean Solana.Unity.Extensions.TokenWalletAccount::<IsAssociatedTokenAccount>k__BackingField
	bool ___U3CIsAssociatedTokenAccountU3Ek__BackingField_11;
};

// Solana.Unity.Extensions.TokenWalletException
struct TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
	// Solana.Unity.Rpc.Core.Http.IRequestResult Solana.Unity.Extensions.TokenWalletException::<RequestResult>k__BackingField
	RuntimeObject* ___U3CRequestResultU3Ek__BackingField_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Solana.Unity.Extensions.TokenWalletBalance[]
struct TokenWalletBalanceU5BU5D_tD464B6024B54154141CA4D2AB4EC92CE07DB1F3B  : public RuntimeArray
{
	ALIGN_FIELD (8) TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* m_Items[1];

	inline TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* value)
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
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__8>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_m05F488A257A3D05117B09B5EF61B8729B089BB8A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_mCF9D716AA8762043447812BCAB0E7AB88E98043A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D* ___stateMachine0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String,Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_mA0A545A7C0835F2CCABDCD416530F65994B8EFBA_gshared (String_t* ___value0, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___settings1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_m7C5FBA7579231B6211480605B82127408E92CDA9_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m10C605EBB66B482F2486F5D9EDA2CD8F2B9526DE_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_m22DF21329FEB3430E33CE9021070E53823575993_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_mA9619F4041E3950BBB96CC20AC8472321FEE4D4E_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m4DFADD2EAA4992161916CB91A2837071C1E096CC_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_m8D50973F43FE85F1286417B546569C461C9E3C5A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_m9162F6C5093AEF55E762A9384C576EE1DC59BDDD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisRuntimeObject_m95A8A4774C308571D7F63FEFC3313E6ACE9C8049_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___keySelector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_m37FE4D9171400DDD3351E1206E34252E9871B225_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_mEF2FFC126995C38AEC97E1450A0CDD3C51316D1D_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB* ___stateMachine0, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_mE18FD5DA5651606D780D556CEAB4CDBC78CF9A6D_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_m03492A5F79C2B3C38240081BD153865EBC15DB26_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m5C163AC897A9465314D456BBFD03D494D2D611DC_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A* ___stateMachine1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_mEA540987878615A1D86E50310DF4BF94BE61B28C_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_mA2F600753869C85AE39CA79B79A90C805BA907B6_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938* ___stateMachine1, const RuntimeMethod* method) ;
// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Object>::get_WasSuccessful()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestResult_1_get_WasSuccessful_mA5BF47D1E4F808D3ECA23C00469FDEC73907C1F5_gshared (RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24* __this, const RuntimeMethod* method) ;
// T Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Object>::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline (RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24* __this, const RuntimeMethod* method) ;
// T Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ResponseValue_1_get_Value_m6FB8CBBB37A0CD1D031E09EC1084703D7FBAA05D_gshared_inline (ResponseValue_1_t0BCADF3E5348490F730192C8C7282EFED595AB57* __this, const RuntimeMethod* method) ;
// T Solana.Unity.Rpc.Messages.ResponseValue`1<System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ResponseValue_1_get_Value_m6C5854737B78630F19EC3D59B572C8A944FE1A18_gshared_inline (ResponseValue_1_t8663D687999D2DEE6072DDA9FD2059BBDE351512* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_m67CC03D0243EEB35D7698EF6CECCE659E8D67D4C_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m19940F710CC8C5BDF8E1C09A556D9F0275622AC6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_mE77E73470B7E48EF564B01970590CD36076F173D_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_m310A66658B566280B65F68D8D9E6BA340FCE4DD2_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_m0841F208CEC77DC08B34A4F66835309AA2C7B560_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_m010927B124E554742F9D743F1DFB125CBF734EDA_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_m5FF5EA5524020D20561A2EC9AFD4EA7A835F1536_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_m6AD75863DE609452F39E1A8375B9151F5FB86E81_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_mC54F77144AA63FDF6BA68B42ABAE89940BB0C946_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_mC67E9980C550401F288A4C73BBA94032AC331641_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_TokenDef(Solana.Unity.Extensions.Models.TokenMint.TokenDef)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_TokenDef_mF933ACAE5DC9CBA40E83CD1E0933F172377F8073_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___value0, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_Symbol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenDef_get_Symbol_mF10C13255383D8CF7F10427121498A9FF525ECF5_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_Symbol(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_Symbol_m5D8A85A23668AA5BABA2E31C402C2BF23425BC21_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_TokenName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenDef_get_TokenName_m5F5C15AC4C1350DDE67D6443C577E8DBAA8D23FA_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_TokenName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_TokenName_m2124BD17CAC7C0CE5B43A1A80BD08046CAF7FC86_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_TokenMint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenDef_get_TokenMint_m9C11A72AE8F806C8E3AA87F16A62BACBE294A4EF_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_TokenMint(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_TokenMint_mEFA0EE0FDBCE50A66AA3FEFCFA5E0F0A2711B2C5_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_DecimalPlaces()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TokenDef_get_DecimalPlaces_m47B7CDF205D0183783B65710019B623F0B0B22A0_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_DecimalPlaces(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_DecimalPlaces_mCF9D872D35D69B2597B0F86BE4A6684E90D70CE9_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_QuantityDecimal(System.Decimal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_QuantityDecimal_m8BCD5423FDA3A7D28110685BD3F1E261098F0D5D_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_QuantityRaw(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_QuantityRaw_mFFD6858F8A920D2614BD7DB29330A86503741077_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.TokenQuantity::get_Symbol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenQuantity_get_Symbol_mC48660211C14B01AD64BABD3782484FEF579FCD6_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.TokenQuantity::get_TokenName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenQuantity_get_TokenName_mF332A5FEA9CC65C10CFEB63D7F05A7E441F5E9D1_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Decimal Solana.Unity.Extensions.TokenQuantity::get_QuantityDecimal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F TokenQuantity_get_QuantityDecimal_m13F35912C1E5B59B18608B7FAE522577E7A94EA7_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.TokenQuantity::get_TokenDef()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* TokenQuantity_get_TokenDef_m3E7206E9CD6FC84A06E2B5E0B349E4B06DFA9552_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Addition(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.UInt64 Solana.Unity.Extensions.TokenQuantity::get_QuantityRaw()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TokenQuantity_get_QuantityRaw_m4568F62D6A019E2ED22B04545DCC480647AD0AB0_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenQuantity::.ctor(Solana.Unity.Extensions.Models.TokenMint.TokenDef,System.Decimal,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenQuantity__ctor_m7E4959AD5EABF35D2FD2CFE52A3D688B61ADD767 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___tokenDef0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___balanceDecimal1, uint64_t ___balanceRaw2, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenWalletBalance::.ctor(Solana.Unity.Extensions.Models.TokenMint.TokenDef,System.Decimal,System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletBalance__ctor_m060225BAE7A54411E53CA47D16B58BAA043FD6BB (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___tokenDef0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___balanceDecimal1, uint64_t ___balanceRaw2, uint64_t ___lamportsRaw3, int32_t ___accountCount4, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWalletAccount::set_PublicKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWalletAccount_set_PublicKey_mCB6918F4D29BB45379C6F925974C64133BA19681_inline (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWalletAccount::set_Owner(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWalletAccount_set_Owner_mEC0ED5C5D2EE4F3FB8DA808918DF6F46872548FE_inline (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWalletAccount::set_IsAssociatedTokenAccount(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWalletAccount_set_IsAssociatedTokenAccount_mAB4BDDD2E9B38D6290B1F8E1D025AD6A0BCB17A8_inline (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.TokenWalletBalance::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenWalletBalance_ToString_m9DE3779320B5CB5D87F5BB40962E767DFD714028 (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, const RuntimeMethod* method) ;
// System.Boolean Solana.Unity.Extensions.TokenWalletAccount::get_IsAssociatedTokenAccount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TokenWalletAccount_get_IsAssociatedTokenAccount_m075A43BE0B9EC0F1E68AF7DC54517D2358C143BF_inline (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWalletBalance::set_Lamports(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWalletBalance_set_Lamports_mEF4F95ED5E9AF61878CAD680351C64BE6B10ECFE_inline (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWalletBalance::set_AccountCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWalletBalance_set_AccountCount_m7AA79B3517CE0458E4D5102E278FB4285F57F196_inline (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 Solana.Unity.Extensions.TokenWalletBalance::get_Lamports()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TokenWalletBalance_get_Lamports_m80B419801AB886D7F0780D3C185DDE99328D73C1_inline (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, const RuntimeMethod* method) ;
// System.Int32 Solana.Unity.Extensions.TokenWalletBalance::get_AccountCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TokenWalletBalance_get_AccountCount_mD20C9F9157F2F20D31BC77030196BD52029E4FE0_inline (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.Models.TokenMint.TokenDef>::.ctor()
inline void Dictionary_2__ctor_mE55DEA23551CAB765EAFC4833BB919C515ACDD4A (Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Solana.Unity.Extensions.TokenMintResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenMintResolver__ctor_mA5EC797F104F5C23903C6A163625B9698558D160 (TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenListItem> Solana.Unity.Extensions.Models.TokenMint.TokenListDoc::get_tokens()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* TokenListDoc_get_tokens_mBE8DCDBCD854F05A583F46581D8256A0FD5F611B_inline (TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenListItem>::GetEnumerator()
inline Enumerator_t95B3515B0BBE9CEF864137A59519312A9AB6649D List_1_GetEnumerator_mF3E7F881643B2D0E9C2AF2CA1A242E68A0D06BA6 (List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t95B3515B0BBE9CEF864137A59519312A9AB6649D (*) (List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Solana.Unity.Extensions.Models.TokenMint.TokenListItem>::Dispose()
inline void Enumerator_Dispose_m68926877B191826DAE5B83A97FC18F0EE52530AF (Enumerator_t95B3515B0BBE9CEF864137A59519312A9AB6649D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t95B3515B0BBE9CEF864137A59519312A9AB6649D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Solana.Unity.Extensions.Models.TokenMint.TokenListItem>::get_Current()
inline TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* Enumerator_get_Current_mFFC9D4DAF9BFE2DD742720A1FBF7FBE0123C2DDC_inline (Enumerator_t95B3515B0BBE9CEF864137A59519312A9AB6649D* __this, const RuntimeMethod* method)
{
	return ((  TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* (*) (Enumerator_t95B3515B0BBE9CEF864137A59519312A9AB6649D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Solana.Unity.Extensions.TokenMintResolver::Add(Solana.Unity.Extensions.Models.TokenMint.TokenListItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenMintResolver_Add_m4E2A3FCC5A5E7E58A05E737A5CB64EE42D2347CD (TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* __this, TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* ___tokenItem0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Solana.Unity.Extensions.Models.TokenMint.TokenListItem>::MoveNext()
inline bool Enumerator_MoveNext_mC38B6A8FDCEB8AAF4C164B99A600989DFA200802 (Enumerator_t95B3515B0BBE9CEF864137A59519312A9AB6649D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t95B3515B0BBE9CEF864137A59519312A9AB6649D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenMintResolver> Solana.Unity.Extensions.TokenMintResolver::LoadAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* TokenMintResolver_LoadAsync_m8689F0A73126C6FA50154A2C527DA24A16035404 (const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenMintResolver>::get_Result()
inline TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* Task_1_get_Result_mB3EB3913BF9CD6E2E0665AA3728782BE81636EB5 (Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* __this, const RuntimeMethod* method)
{
	return ((  TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* (*) (Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenMintResolver> Solana.Unity.Extensions.TokenMintResolver::LoadAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* TokenMintResolver_LoadAsync_m75460407A00A155F820E1DD4C4E7B40377DF0D9E (String_t* ___url0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver>::Create()
inline AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A AsyncTaskMethodBuilder_1_Create_mFCCDD0228A9F00EFEDE296FAF3EDF187EC34D2FD (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver>::Start<Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__8>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_mCE6689EAD3F37BDB64796CF5F593B940C3E108D0 (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* __this, U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A*, U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_m05F488A257A3D05117B09B5EF61B8729B089BB8A_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver>::get_Task()
inline Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* AsyncTaskMethodBuilder_1_get_Task_mAD988C0C9692580DD1EC8DE5048182355A0F9152 (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* (*) (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver>::Start<Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m468AB170A93719FE94A003F1C12BAC45AA1E39A4 (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* __this, U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A*, U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_mCF9D716AA8762043447812BCAB0E7AB88E98043A_gshared)(__this, ___stateMachine0, method);
}
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelCasePropertyNamesContractResolver__ctor_m71B6E080791024F83516A378AEC9852D4BF284A7 (CamelCasePropertyNamesContractResolver_tB03DB20CC6D59C5D7C4E5959D5AA60AE22980D0C* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_ContractResolver(Newtonsoft.Json.Serialization.IContractResolver)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_ContractResolver_m88FDD134350590ABDBD87BD2AC124B1A5C2385D5_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::get_Converters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Serialization.CamelCaseNamingStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelCaseNamingStrategy__ctor_mF8654DDF11007C1CA79C1152B59BD07B3EF088E1 (CamelCaseNamingStrategy_tCD17472E129D8769696271E3785AC5FA29DE6DB8* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.StringEnumConverter::.ctor(Newtonsoft.Json.Serialization.NamingStrategy,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEnumConverter__ctor_m178741A52494B93F2FBB671C459EFB3117DF3D66 (StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184* __this, NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50* ___namingStrategy0, bool ___allowIntegerValues1, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Solana.Unity.Extensions.Models.TokenMint.TokenListDoc>(System.String,Newtonsoft.Json.JsonSerializerSettings)
inline TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* JsonConvert_DeserializeObject_TisTokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F_m3EE360BFEA0B89FC24377D59685F62D5ABECAF16 (String_t* ___value0, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___settings1, const RuntimeMethod* method)
{
	return ((  TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* (*) (String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_mA0A545A7C0835F2CCABDCD416530F65994B8EFBA_gshared)(___value0, ___settings1, method);
}
// System.Void Solana.Unity.Extensions.TokenMintResolver::.ctor(Solana.Unity.Extensions.Models.TokenMint.TokenListDoc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenMintResolver__ctor_mD54312ED491E372B0B73E8AAF61FD98BCD2B7ECA (TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* __this, TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* ___tokenList0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.Models.TokenMint.TokenDef>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mF0813250843D513DF62D3C2DA910AA6250024A76 (Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.Models.TokenMint.TokenDef>::get_Item(TKey)
inline TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* Dictionary_2_get_Item_m52AEB945DA92C0520466482676ECAABE19CB83B8 (Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* (*) (Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenDef::.ctor(System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___mint0, String_t* ___name1, String_t* ___symbol2, int32_t ___decimalPlaces3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.Models.TokenMint.TokenDef>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mBA2684552979B621B05DD1D540FCBF53AF11E4EB (Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818* __this, String_t* ___key0, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818*, String_t*, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenListItem::get_LogoUri()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenListItem_get_LogoUri_mE5AB0562E0F1E040C665557F1CFBAE3E6BE801B5_inline (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Solana.Unity.Extensions.Models.TokenMint.TokenListItem::get_Extensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* TokenListItem_get_Extensions_m172F5431771AD9B16FD94B3DBB64FC65C59B3EFE_inline (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenListItem::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenListItem_get_Address_m6522AB5DCCBA5F5ABDBDFE8424EA6C825E4E1305_inline (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenListItem::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenListItem_get_Name_m1C4F76B986164CCDD814CF9F6B69B0C9ACB4E743_inline (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenListItem::get_Symbol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenListItem_get_Symbol_mEEBB90292D58DBB1FA27FCA742ADE0120BD2C218_inline (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) ;
// System.Int32 Solana.Unity.Extensions.Models.TokenMint.TokenListItem::get_Decimals()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TokenListItem_get_Decimals_mDD6E4559BD6D99FB92760172150BADE13FF42A2F_inline (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_CoinGeckoId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_CoinGeckoId_m58DF8B5B0F558D5869E99194806347EECB3CFC01_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_TokenLogoUrl(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_TokenLogoUrl_m0A96C70BE39ED0B81E7E3FB120FEF9E6040ABF8F_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_TokenProjectUrl(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_TokenProjectUrl_m5A9C75C7AA4DC27730B4267F1281528485B1A941_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenMintResolver>::GetAwaiter()
inline TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF Task_1_GetAwaiter_mF1A54DABE4F6DA9C82BFF31D977CD7A3A22E1935 (Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF (*) (Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenMintResolver>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m5E970A292A9A0E787F2673CE972335AB08FF7AD6 (TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenMintResolver>,Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_m2EA52D365EF2DD5E2152066CDA61AE02DB3CF647 (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* __this, TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF* ___awaiter0, U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A*, TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF*, U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_m7C5FBA7579231B6211480605B82127408E92CDA9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenMintResolver>::GetResult()
inline TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* TaskAwaiter_1_GetResult_m7089CEB8607FB0DE0AD8D1CD8457F41646E80D75 (TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF* __this, const RuntimeMethod* method)
{
	return ((  TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* (*) (TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m8B324307E27D9DDEE350A1FE88C577E7F67DA90D (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mA1C269371D112FD181DD7B6650AAB2C33946DF0E (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* __this, TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A*, TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__8_MoveNext_m687F2DBDA006E25FF247AD44BFB2750AC4DAF6F9 (U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m2A624F7042C71D9EADEDF1574895757EF8493608 (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__8_SetStateMachine_m333ABAF29659D95BAAF38BC24560068A17531EC8 (U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient__ctor_mD64C48138600CF1398E7BB24BF33EB582ECB1AFD (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, const RuntimeMethod* method) ;
// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::get_Get()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* HttpMethod_get_Get_mAD94BF07B40B20DAF42CBEEC2E910FC5CE0DA670_inline (const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpRequestMessage::.ctor(System.Net.Http.HttpMethod,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage__ctor_m56BE095A8CA0D3F611076723C36DB13949FF8F85 (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___method0, String_t* ___requestUri1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> Solana.Unity.Rpc.Core.Http.CrossHttpClient::SendAsyncRequest(System.Net.Http.HttpClient,System.Net.Http.HttpRequestMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* CrossHttpClient_SendAsyncRequest_mDADF69EE9C2403B8DE074043325BEC458A4D3283 (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ___httpClient0, HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___httpReq1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>::GetAwaiter()
inline TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC (Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 (*) (Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>,Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m3367959D2106CA70EC44FDA33EC592EF74A45F31 (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* __this, TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4* ___awaiter0, U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A*, TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4*, U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m10C605EBB66B482F2486F5D9EDA2CD8F2B9526DE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>::GetResult()
inline HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9 (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4* __this, const RuntimeMethod* method)
{
	return ((  HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* (*) (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean System.Net.Http.HttpResponseMessage::get_IsSuccessStatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpResponseMessage_get_IsSuccessStatusCode_m2B9DA5ECF8EE760D5A1A511C798FA08EAA931B9C (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> System.Net.Http.HttpContent::ReadAsStringAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* HttpContent_ReadAsStringAsync_m69166E8C01E4287FFBA3E8E41805FF068362BF2B (HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenMintResolver>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m11779804B327DA56AE9EC66783200EC267F3E1B9 (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___awaiter0, U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m10C605EBB66B482F2486F5D9EDA2CD8F2B9526DE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// Solana.Unity.Extensions.TokenMintResolver Solana.Unity.Extensions.TokenMintResolver::ParseTokenList(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* TokenMintResolver_ParseTokenList_m4D8DF9046EEB2027E6FEC7F50077E3C630A72199 (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__9_MoveNext_m3AF98AE64E5EFB11602F131F0B18703266D0085F (U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__9_SetStateMachine_m821BC5899073BD659DCBD0B3E8F73D41FD3EBEB2 (U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.UInt64 Solana.Unity.Extensions.TokenWallet::get_Lamports()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TokenWallet_get_Lamports_mA898D3421D5B97424CFC871693C5310D34D6702F_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) ;
// System.Decimal Solana.Unity.Programs.Utilities.SolHelper::ConvertToSol(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F SolHelper_ConvertToSol_m8476A2A0843D37F4F19EF896B8F48B8CDA8141F7 (uint64_t ___lamports0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWallet::set_RpcClient(Solana.Unity.Extensions.ITokenWalletRpcProxy)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWallet_set_RpcClient_m605D800CE4E9FACA5A759658C35AF20034D0ECDD_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWallet::set_MintResolver(Solana.Unity.Extensions.ITokenMintResolver)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWallet_set_MintResolver_m32D3836BE09065FF00E95050369A48DF91B358A8_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWallet::set_PublicKey(Solana.Unity.Wallet.PublicKey)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWallet_set_PublicKey_m8398D5C2F73F37F6B9E1AA2B082A43CC5CA9026A_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Wallet.PublicKey>::.ctor()
inline void Dictionary_2__ctor_mC008731FD250FAEE364BD415BEE9474CD0AF57AD (Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::Create()
inline AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9 AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::Start<Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_mC1566667968010D9D4A5B55467652883A95E1B1C (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* __this, U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9*, U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_m22DF21329FEB3430E33CE9021070E53823575993_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::get_Task()
inline Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* (*) (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::Start<Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_mDD54974279B92E7FE7664668A51A580B08C3A3D2 (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* __this, U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9*, U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_mA9619F4041E3950BBB96CC20AC8472321FEE4D4E_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::Start<Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m7A6CD1BF4A04C24D4D38107BD87B1C715926DB64 (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* __this, U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9*, U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m4DFADD2EAA4992161916CB91A2837071C1E096CC_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::Start<Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_mF3D649AE932C26B43C880826EAC814F42A070BDB (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* __this, U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9*, U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_m8D50973F43FE85F1286417B546569C461C9E3C5A_gshared)(__this, ___stateMachine0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_m9162F6C5093AEF55E762A9384C576EE1DC59BDDD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_m9162F6C5093AEF55E762A9384C576EE1DC59BDDD_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.TokenWalletBalance>::.ctor()
inline void Dictionary_2__ctor_m4698BE108CAC5C7B84751D82633883D8DCE45AAB (Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>::GetEnumerator()
inline Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81 List_1_GetEnumerator_mD44A69F58F1F1E4DE020F64C60F8A6476530AD06 (List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81 (*) (List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Solana.Unity.Rpc.Models.TokenAccount>::Dispose()
inline void Enumerator_Dispose_m2A2BF37044EEB6CFE09E6651A274ECEC1CDB4048 (Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Solana.Unity.Rpc.Models.TokenAccount>::get_Current()
inline TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* Enumerator_get_Current_m59EC364FBCF20B9D08102DA709EC31F5AB8CB833_inline (Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81* __this, const RuntimeMethod* method)
{
	return ((  TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* (*) (Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Solana.Unity.Rpc.Models.TokenAccountInfo Solana.Unity.Rpc.Models.TokenAccount::get_Account()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline (TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* __this, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.TokenAccountData Solana.Unity.Rpc.Models.TokenAccountInfo::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9_inline (TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* __this, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.ParsedTokenAccountData Solana.Unity.Rpc.Models.TokenAccountData::get_Parsed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB_inline (TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* __this, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.TokenAccountInfoDetails Solana.Unity.Rpc.Models.ParsedTokenAccountData::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED_inline (ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.Rpc.Models.TokenAccountInfoDetails::get_Mint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenAccountInfoDetails_get_Mint_m3335A83447115280C56F2061713666864A65C03C_inline (TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* __this, const RuntimeMethod* method) ;
// System.UInt64 Solana.Unity.Rpc.Models.AccountInfoBase::get_Lamports()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t AccountInfoBase_get_Lamports_m7A93911FFB8740125E0A8162776621CED052546D_inline (AccountInfoBase_t1D3349589317F053FAC79A6C7FFDEB72B347210B* __this, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.TokenBalance Solana.Unity.Rpc.Models.TokenAccountInfoDetails::get_TokenAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* TokenAccountInfoDetails_get_TokenAmount_mCD5AFD1463727A6A85E257470E62C2451F791646_inline (TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* __this, const RuntimeMethod* method) ;
// System.UInt64 Solana.Unity.Rpc.Models.TokenBalance::get_AmountUlong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TokenBalance_get_AmountUlong_mE18DA694712240D74636A085D6210983E2377CDF (TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* __this, const RuntimeMethod* method) ;
// System.Decimal Solana.Unity.Rpc.Models.TokenBalance::get_AmountDecimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F TokenBalance_get_AmountDecimal_m35DD24905951567450E582DC78779D0868DB705F (TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.TokenWalletBalance>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD7845D8DC84BC05B205A9480B26CF0B4BD299C9F (Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// Solana.Unity.Extensions.ITokenMintResolver Solana.Unity.Extensions.TokenWallet::get_MintResolver()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TokenWallet_get_MintResolver_m789A9FEB1CBA4C99F485FC07C5CAF1C576A1E458_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) ;
// System.Int32 Solana.Unity.Rpc.Models.TokenBalance::get_Decimals()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TokenBalance_get_Decimals_m256A81CD453B7FE928625C52A92840FF4F2C1616_inline (TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* __this, const RuntimeMethod* method) ;
// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.Models.TokenMint.TokenDef::CloneWithKnownDecimals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* TokenDef_CloneWithKnownDecimals_m08ED941099F660B0E21FF112DE380D61ACC060FD (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, int32_t ___decimalPlaces0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.TokenWalletBalance>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m21138BA2F5632A4C5F094F2FDEF06DDC619BD5CA (Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* __this, String_t* ___key0, TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4*, String_t*, TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.TokenWalletBalance>::get_Item(TKey)
inline TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* Dictionary_2_get_Item_m8FF89C82047794810B021D0062035F1FEA6D5410 (Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* (*) (Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// Solana.Unity.Extensions.TokenWalletBalance Solana.Unity.Extensions.TokenWalletBalance::AddAccount(System.Decimal,System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* TokenWalletBalance_AddAccount_m5F9241D43916C0DA5A99DF3D7851B8E59D3575AE (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___valueDecimal0, uint64_t ___valueRaw1, uint64_t ___lamportsRaw2, int32_t ___accountCount3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Solana.Unity.Rpc.Models.TokenAccount>::MoveNext()
inline bool Enumerator_MoveNext_m77CAB1FB0A9202CAE7D6330A2470A0039DAC4EEE (Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Extensions.TokenWalletBalance>::get_Values()
inline ValueCollection_t479C6184D9CB8F88145D04970A0A33A4243AFD1F* Dictionary_2_get_Values_m58A5818EBC052EBADB7D7E2DDB2F7232C63961A9 (Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t479C6184D9CB8F88145D04970A0A33A4243AFD1F* (*) (Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Void System.Func`2<Solana.Unity.Extensions.TokenWalletBalance,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDAB667D4A7FFC79CC28EE5B91B3E4F29A5976606 (Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<Solana.Unity.Extensions.TokenWalletBalance,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisTokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_TisString_t_m580BE76A3C34271853ACB2B0C4BA3265B28D9821 (RuntimeObject* ___source0, Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisRuntimeObject_m95A8A4774C308571D7F63FEFC3313E6ACE9C8049_gshared)(___source0, ___keySelector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Solana.Unity.Extensions.TokenWalletBalance>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TokenWalletBalanceU5BU5D_tD464B6024B54154141CA4D2AB4EC92CE07DB1F3B* Enumerable_ToArray_TisTokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_mFAFD8C11D029EA5B468AFD7FBE5B5503CC0DE9DD (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TokenWalletBalanceU5BU5D_tD464B6024B54154141CA4D2AB4EC92CE07DB1F3B* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.Extensions.TokenWalletAccount>::.ctor()
inline void List_1__ctor_m54C0827B5D4FF4CE92484CDA800543288B3910E4 (List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet::GetAssociatedTokenAddressForMint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* TokenWallet_GetAssociatedTokenAddressForMint_mC67728532F60F137C2BA85EF269A6DD66457FF2C (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, String_t* ___mint0, const RuntimeMethod* method) ;
// System.String Solana.Unity.Rpc.Models.TokenAccount::get_PublicKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenAccount_get_PublicKey_mA307152D18933F83868F1AB250842C4F1094906A_inline (TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.Rpc.Models.TokenAccountInfoDetails::get_Owner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenAccountInfoDetails_get_Owner_m98E4D9B72749240E19C29D47868EE59A7230C258_inline (TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet::get_PublicKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* TokenWallet_get_PublicKey_m0AB262A3C3ABDD5672BA0D3027A99F295DE19EF7_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.Wallet.PublicKey::op_Implicit(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PublicKey_op_Implicit_m384B7ABBC96BB94E492A1F7EDD3EA30EFCB38921 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenWalletAccount::.ctor(Solana.Unity.Extensions.Models.TokenMint.TokenDef,System.Decimal,System.UInt64,System.UInt64,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletAccount__ctor_m822DAC39B15BE63CD298B864D77147394F7BDD07 (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___tokenDef0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___balanceDecimal1, uint64_t ___balanceRaw2, uint64_t ___lamportsRaw3, String_t* ___publicKey4, String_t* ___owner5, bool ___isAta6, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Extensions.TokenWalletAccount>::Add(T)
inline void List_1_Add_m6DE9140C07494601787A888ABD6696E5E9E0EFA5_inline (List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E*, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Func`2<Solana.Unity.Extensions.TokenWalletAccount,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m727AC67E07D4547D726F3016D60C86DEA846DB16 (Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<Solana.Unity.Extensions.TokenWalletAccount,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_TisString_t_mA3E7F7D5B673888B175FD0F04DDCCA9D89661FDA (RuntimeObject* ___source0, Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisRuntimeObject_m95A8A4774C308571D7F63FEFC3313E6ACE9C8049_gshared)(___source0, ___keySelector1, method);
}
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList::.ctor(System.Collections.Generic.IEnumerable`1<Solana.Unity.Extensions.TokenWalletAccount>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, RuntimeObject* ___accounts0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::Create()
inline AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::Start<Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_mC39836A1114F0CFE4C3B6F6E5FD13249FB247842 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_m37FE4D9171400DDD3351E1206E34252E9871B225_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::get_Task()
inline Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::Start<Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_mC1B8FCD72B29DDCF077B2146DBF1926F8A8AEF65 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_mEF2FFC126995C38AEC97E1450A0CDD3C51316D1D_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean Solana.Unity.Wallet.PublicKey::op_Equality(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PublicKey_op_Equality_m0AA9C9DFE5518A02C138793CDC1394B872C92CF9 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___lhs0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___rhs1, const RuntimeMethod* method) ;
// System.Boolean Solana.Unity.Wallet.PublicKey::IsOnCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PublicKey_IsOnCurve_mBF12BA49AEF38386A854D99A2E7893FD06496E5A (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Solana.Unity.Extensions.Models.TokenWalletFilterList Solana.Unity.Extensions.TokenWallet::TokenAccounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* TokenWallet_TokenAccounts_mE85FB0EEF55C059D0C36D06CEA2276AC441CB527 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) ;
// Solana.Unity.Extensions.Models.TokenWalletFilterList Solana.Unity.Extensions.Models.TokenWalletFilterList::WithMint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* TokenWalletFilterList_WithMint_mECC22CF8AEA5474E3EFAFDC1FB713F2A602A5E8A (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, String_t* ___mint0, const RuntimeMethod* method) ;
// Solana.Unity.Extensions.Models.TokenWalletFilterList Solana.Unity.Extensions.Models.TokenWalletFilterList::WhichAreAssociatedTokenAccounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* TokenWalletFilterList_WhichAreAssociatedTokenAccounts_m1855DDC6D9F0DEC09AC4CB078A9A1A564CE92669 (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<Solana.Unity.Extensions.TokenWalletAccount>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mB26E6487168FD7282C2D658AECF9AD1CB2DCC855 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared)(___source0, method);
}
// System.Void Solana.Unity.Wallet.PublicKey::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* __this, String_t* ___key0, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.Programs.AssociatedTokenAccountProgram::CreateAssociatedTokenAccount(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* AssociatedTokenAccountProgram_CreateAssociatedTokenAccount_m9A2226857DA069073EA2E4BD7A24B8B5B3CCCE6C (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___payer0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___owner1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___mint2, bool ___idempotent3, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Builders.TransactionBuilder Solana.Unity.Rpc.Builders.TransactionBuilder::AddInstruction(Solana.Unity.Rpc.Models.TransactionInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* TransactionBuilder_AddInstruction_m47204C5F74C6203BCF68D1965D8BB186CA148B3A (TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* __this, TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* ___instruction0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<Solana.Unity.Extensions.TokenWalletAccount>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* Enumerable_First_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mA08E426415C9FBB5FC1A303C4BECDB0AC40A2DD4 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___source0, method);
}
// System.String Solana.Unity.Extensions.TokenWalletAccount::get_PublicKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenWalletAccount_get_PublicKey_mB34F80B2E26590EFB3C70BDEFCA6055D20FBCAFA_inline (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Wallet.PublicKey>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD75F0079EF503B5FA80A9E25D7CC50BF10C2D7A0 (Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Wallet.PublicKey>::get_Item(TKey)
inline PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* Dictionary_2_get_Item_m7C42E426FED0A9522AF4E0E16B0C96EFB5BC3E7A (Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* (*) (Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.AssociatedTokenAccountProgram::DeriveAssociatedTokenAccount(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* AssociatedTokenAccountProgram_DeriveAssociatedTokenAccount_m1F121F2AB02376A948F92BE49A09E48F239C91B4 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___owner0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___mint1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Wallet.PublicKey>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m245629A6A6F08F2BF9C70EF0CFBE61D4623D2B18 (Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF* __this, String_t* ___key0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF*, String_t*, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mB02D5B387EE76ADE3AF2900BB2E5A1A140D5BC31 (U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Solana.Unity.Rpc.Models.TokenAccount,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2743104D4426DB806600433120513EC96DDFA6AC (Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<Solana.Unity.Rpc.Models.TokenAccount>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisTokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643_m60C5DD5C6EC4E5C593C3E9C9296D79A414579ABC (RuntimeObject* ___source0, Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared)(___source0, ___predicate1, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mC4AF3429EF955C4E130EB727544B37A0DDE0D74F (U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenWallet/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5EB842F0FA53BC31B36DE74B792AE4DA208E7316 (U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.Wallet.PublicKey::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PublicKey_get_Key_m79CC023D2647AF8AA202154B26514999B7E0F7B1 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet::LoadAsync(Solana.Unity.Extensions.ITokenWalletRpcProxy,Solana.Unity.Extensions.ITokenMintResolver,Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* TokenWallet_LoadAsync_m66FA284883479D3FA71872C171FB2530672309BD (RuntimeObject* ___client0, RuntimeObject* ___mintResolver1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey2, int32_t ___commitment3, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenWallet>::GetAwaiter()
inline TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970 (Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 (*) (Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenWallet>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D (TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenWallet>,Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_m869A0BFE7217EB2543211FAC85AA1975E28AE50C (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* __this, TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4* ___awaiter0, U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9*, TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4*, U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_mE18FD5DA5651606D780D556CEAB4CDBC78CF9A6D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenWallet>::GetResult()
inline TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4 (TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4* __this, const RuntimeMethod* method)
{
	return ((  TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* (*) (TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m9C3587FE2AD11DAECA18672DE5C1387BFF5C85EF (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* __this, TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9*, TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__21_MoveNext_m85702CA5813D757F453ED3CBD8E0CD322FBDBF98 (U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__21_SetStateMachine_mFF69358413C8B38BF3E90997922C7199D626717E (U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy::.ctor(Solana.Unity.Rpc.IRpcClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletRpcProxy__ctor_mA34EF6D16073CA9CCF9E4799D30E6A1FF73F5621 (TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenWallet>,Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_m7E056E02E3F8AE0D87A36C6BCEB8113C5F782821 (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* __this, TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4* ___awaiter0, U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9*, TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4*, U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_m03492A5F79C2B3C38240081BD153865EBC15DB26_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__22_MoveNext_m93CD2ADBD2012093E0C057B8570CA064A8E2B887 (U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__22_SetStateMachine_m602137964947B38C62542F20467175784C54B0E2 (U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenWallet>,Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m3D8A1725C8A753B3E725A83FA2332D1611A54FC1 (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* __this, TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4* ___awaiter0, U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9*, TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4*, U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m5C163AC897A9465314D456BBFD03D494D2D611DC_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__23_MoveNext_m907B8335A491EAE039FB50CB12A9A9D0DD9B9D5C (U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__23_SetStateMachine_mE4E2D38CF966BF583976AEDCED7F260EC9CE279D (U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenWallet::.ctor(Solana.Unity.Extensions.ITokenWalletRpcProxy,Solana.Unity.Extensions.ITokenMintResolver,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWallet__ctor_mBEEE4D25F598B07CF74BBBEBDF66C63166B70314 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, RuntimeObject* ___client0, RuntimeObject* ___mintResolver1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey2, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Boolean> Solana.Unity.Extensions.TokenWallet::RefreshAsync(Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TokenWallet_RefreshAsync_mB9689382781E071BE9C2AE656A8287F71851806D (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, int32_t ___commitment0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, const RuntimeMethod*))Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9 (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Extensions.TokenWallet>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_mA4BEC34AE8334D70BC2BC4E56D8EE0BFAB466016 (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_mEA540987878615A1D86E50310DF4BF94BE61B28C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared)(__this, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__24_MoveNext_m9FF1B50F6B5011F2B894DAF56E965D1E5ED03B39 (U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__24_SetStateMachine_mC8202D914E02CF28A1AD4F05300242E1C23F270F (U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Solana.Unity.Extensions.ITokenWalletRpcProxy Solana.Unity.Extensions.TokenWallet::get_RpcClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TokenWallet_get_RpcClient_m1420AD42AD614E4FDA38B76146155ACBD414B7E8_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>::GetAwaiter()
inline TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 Task_1_GetAwaiter_m858B8A79A1D9BEDD8237BD7051CB8A2D2B215651 (Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 (*) (Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m73E78CD498272FF708F048856F7E06736CC3DED7 (TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>,Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_m3446294B9B5D2D0BAAC6726974C0E35FFE1388AD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9* ___awaiter0, U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9*, U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_mA2F600753869C85AE39CA79B79A90C805BA907B6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>::GetResult()
inline RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* TaskAwaiter_1_GetResult_mEC6245D3C905529969065AE79EC039C09C777356 (TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9* __this, const RuntimeMethod* method)
{
	return ((  RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* (*) (TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>::GetAwaiter()
inline TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 Task_1_GetAwaiter_m2C907EACD6FBC51FC6DB62B5861C9565B5B2A151 (Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 (*) (Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m5A1C8CE07E6CCFD772FAAF407939C198772F7532 (TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>,Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_mF7AF3023A3B2B65C340511A54434D2917867E505 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324* ___awaiter0, U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324*, U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_mA2F600753869C85AE39CA79B79A90C805BA907B6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>::GetResult()
inline RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* TaskAwaiter_1_GetResult_m2B9D52C4A03B1CDBABC19ED365A2CA0C39FC37AD (TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324* __this, const RuntimeMethod* method)
{
	return ((  RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* (*) (TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>::get_WasSuccessful()
inline bool RequestResult_1_get_WasSuccessful_m4E651DCE974BC81765CB2AB4516B5DC5E614D785 (RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8*, const RuntimeMethod*))RequestResult_1_get_WasSuccessful_mA5BF47D1E4F808D3ECA23C00469FDEC73907C1F5_gshared)(__this, method);
}
// T Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>::get_Result()
inline ResponseValue_1_t0BCADF3E5348490F730192C8C7282EFED595AB57* RequestResult_1_get_Result_m7BAECB2E70159C4BA91EF9D38742F31D764E1470_inline (RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* __this, const RuntimeMethod* method)
{
	return ((  ResponseValue_1_t0BCADF3E5348490F730192C8C7282EFED595AB57* (*) (RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8*, const RuntimeMethod*))RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline)(__this, method);
}
// T Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>::get_Value()
inline uint64_t ResponseValue_1_get_Value_m6FB8CBBB37A0CD1D031E09EC1084703D7FBAA05D_inline (ResponseValue_1_t0BCADF3E5348490F730192C8C7282EFED595AB57* __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (ResponseValue_1_t0BCADF3E5348490F730192C8C7282EFED595AB57*, const RuntimeMethod*))ResponseValue_1_get_Value_m6FB8CBBB37A0CD1D031E09EC1084703D7FBAA05D_gshared_inline)(__this, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet::set_Lamports(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWallet_set_Lamports_m83A69FE8E9EFE449622D5492E3130BBA17057CAC_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenWalletException::.ctor(System.String,Solana.Unity.Rpc.Core.Http.IRequestResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletException__ctor_m7EA8597E73402E7FED02B1BC05AD0F54589F9BE7 (TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6* __this, String_t* ___message0, RuntimeObject* ___failedResult1, const RuntimeMethod* method) ;
// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>::get_WasSuccessful()
inline bool RequestResult_1_get_WasSuccessful_m6566B78C4F6941509C8682E4804934D0FD22E199 (RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA*, const RuntimeMethod*))RequestResult_1_get_WasSuccessful_mA5BF47D1E4F808D3ECA23C00469FDEC73907C1F5_gshared)(__this, method);
}
// T Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>::get_Result()
inline ResponseValue_1_tA9E11CD10D2ECAD8D2FC880998215523D5EA385C* RequestResult_1_get_Result_m778909233587BBFF9A67EE973BAFA34E3C286034_inline (RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* __this, const RuntimeMethod* method)
{
	return ((  ResponseValue_1_tA9E11CD10D2ECAD8D2FC880998215523D5EA385C* (*) (RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA*, const RuntimeMethod*))RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline)(__this, method);
}
// T Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>::get_Value()
inline List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73* ResponseValue_1_get_Value_mDE4FA4A5E7A249541D4C381297887EE275738698_inline (ResponseValue_1_tA9E11CD10D2ECAD8D2FC880998215523D5EA385C* __this, const RuntimeMethod* method)
{
	return ((  List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73* (*) (ResponseValue_1_tA9E11CD10D2ECAD8D2FC880998215523D5EA385C*, const RuntimeMethod*))ResponseValue_1_get_Value_m6C5854737B78630F19EC3D59B572C8A944FE1A18_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshAsyncU3Ed__25_MoveNext_m8F13C69DA0384E7B18A0EF2F3B706917878E79B7 (U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshAsyncU3Ed__25_SetStateMachine_mE5E627227B859887AD46648833AA707697614EC4 (U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Extensions.TokenWallet::SendAsync(Solana.Unity.Extensions.TokenWalletAccount,System.Decimal,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,System.Func`2<Solana.Unity.Rpc.Builders.TransactionBuilder,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* TokenWallet_SendAsync_m507549592DFDACF09FDD6A24930059EEEBA58701 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___source0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___amount1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___destination2, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer3, Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52* ___signTxCallback4, const RuntimeMethod* method) ;
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>,Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_m79C526D57EEDC9A7E91E08B04B6225285405D252 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* ___awaiter0, U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935*, U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_m67CC03D0243EEB35D7698EF6CECCE659E8D67D4C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
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
// System.Void Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__28_MoveNext_m4918942936EFE5411A28BE9FB03B5393E41D2AA3 (U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m1972CD1BCF2A8C2ABA99BB6576B585927327A881 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__28_SetStateMachine_mBDB7CFD1E00A081827BD45E93DDD6A294C5C9648 (U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.TokenWalletAccount::get_Owner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenWalletAccount_get_Owner_m90D07C2E6FE1CB65204DA7B0245D8004A73A78B0_inline (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Extensions.TokenWallet>,Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m936071E2AC6D1AAEBCB5BCD5E5E1222075E8BED9 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4* ___awaiter0, U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4*, U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m19940F710CC8C5BDF8E1C09A556D9F0275622AC6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>::GetAwaiter()
inline TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 Task_1_GetAwaiter_mBA03D0B38E519B0F47180DC732F22247E6CDFBA2 (Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 (*) (Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m485AF7F64784968FFBB292516F59B5246C1A5791 (TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>,Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m70310DC158811CE55E4A49FA9ED677ABDBA67858 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385* ___awaiter0, U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385*, U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m19940F710CC8C5BDF8E1C09A556D9F0275622AC6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>::GetResult()
inline RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672* TaskAwaiter_1_GetResult_mA4FDB67254A98EACB7127BECA43B2AA26F6F1893 (TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385* __this, const RuntimeMethod* method)
{
	return ((  RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672* (*) (TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void Solana.Unity.Rpc.Builders.TransactionBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionBuilder__ctor_m0B3F1BCABDCC514E09F089FADDF382793AB85906 (TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* __this, const RuntimeMethod* method) ;
// T Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>::get_Result()
inline ResponseValue_1_t47F8A210890E6A267CEE9183D62273224351A5B6* RequestResult_1_get_Result_m98EBAFB5D6691E3A96E672636A1B270E231A500D_inline (RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672* __this, const RuntimeMethod* method)
{
	return ((  ResponseValue_1_t47F8A210890E6A267CEE9183D62273224351A5B6* (*) (RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672*, const RuntimeMethod*))RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline)(__this, method);
}
// T Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>::get_Value()
inline BlockHash_t01BC23F321B989D27E8E37A68BCE97B3C47BD9A3* ResponseValue_1_get_Value_m6C9351679C717202CFC83FABDC35E2BFCDEF044E_inline (ResponseValue_1_t47F8A210890E6A267CEE9183D62273224351A5B6* __this, const RuntimeMethod* method)
{
	return ((  BlockHash_t01BC23F321B989D27E8E37A68BCE97B3C47BD9A3* (*) (ResponseValue_1_t47F8A210890E6A267CEE9183D62273224351A5B6*, const RuntimeMethod*))ResponseValue_1_get_Value_m6C5854737B78630F19EC3D59B572C8A944FE1A18_gshared_inline)(__this, method);
}
// System.String Solana.Unity.Rpc.Models.BlockHash::get_Blockhash()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BlockHash_get_Blockhash_mB1D4C6DF7405E35706409EE52969F9842884AE54_inline (BlockHash_t01BC23F321B989D27E8E37A68BCE97B3C47BD9A3* __this, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Builders.TransactionBuilder Solana.Unity.Rpc.Builders.TransactionBuilder::SetRecentBlockHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* TransactionBuilder_SetRecentBlockHash_m867442395CF50EE764EF39BF869C480246E1ECC9 (TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* __this, String_t* ___recentBlockHash0, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Builders.TransactionBuilder Solana.Unity.Rpc.Builders.TransactionBuilder::SetFeePayer(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* TransactionBuilder_SetFeePayer_m0667AA3756160B7FCF72EB4F44EEB1D59D0A5698 (TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___account0, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.TokenQuantity::get_TokenMint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenQuantity_get_TokenMint_mA08A2767983BFE76AE187AB101E0B6EA2B87FF1E_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet::JitCreateAssociatedTokenAccount(Solana.Unity.Rpc.Builders.TransactionBuilder,System.String,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* TokenWallet_JitCreateAssociatedTokenAccount_m2E3443667664133120E1D1418965DD1653692407 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* ___builder0, String_t* ___mint1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer2, const RuntimeMethod* method) ;
// System.UInt64 Solana.Unity.Extensions.Models.TokenMint.TokenDef::ConvertDecimalToUlong(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TokenDef_ConvertDecimalToUlong_m27A55D52FFD6AA2C7198B1A8EF4C839B9DE4FB3E (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.Programs.TokenProgram::Transfer(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,System.UInt64,Solana.Unity.Wallet.PublicKey,System.Collections.Generic.IEnumerable`1<Solana.Unity.Wallet.PublicKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* TokenProgram_Transfer_mA43FE836EBF72F438954E793ABEA6EC7FB1CAE07 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___source0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___destination1, uint64_t ___amount2, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___authority3, RuntimeObject* ___signers4, const RuntimeMethod* method) ;
// TResult System.Func`2<Solana.Unity.Rpc.Builders.TransactionBuilder,System.Byte[]>::Invoke(T)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Func_2_Invoke_m4A9DA7332C9E18FA18F880C9523E89993878034C_inline (Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52* __this, TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* ___arg0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52*, TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>,Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m961BD19A877E5B9C0D2752A41A80E5155DFACAD6 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* ___awaiter0, U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935*, U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m19940F710CC8C5BDF8E1C09A556D9F0275622AC6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986 (U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__29_SetStateMachine_mC6D831CE5383173BD59F1AEA7400331D5E76F4DE (U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenWalletException::set_RequestResult(Solana.Unity.Rpc.Core.Http.IRequestResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWalletException_set_RequestResult_m24ADA4116E27C73AB111C86F00EDDEF52D17C4A5_inline (TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>::Create()
inline AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95 AsyncTaskMethodBuilder_1_Create_mF6EAAE188734F76BDD8BB3E11FCC8A2E881E011A (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>::Start<Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_mCEFB46CCF0B94020033036FFE8D814DE49DAFB9A (AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95* __this, U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95*, U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_mE77E73470B7E48EF564B01970590CD36076F173D_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>::get_Task()
inline Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4* AsyncTaskMethodBuilder_1_get_Task_mA8AAA8A9BF98B81BC30E76ECA991EDF0E2389C07 (AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4* (*) (AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>::Create()
inline AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61 AsyncTaskMethodBuilder_1_Create_mAE9D4A2883BE4F7FD39E326A1D321CAF074BF958 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>::Start<Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_mCD0D2C28767ACAB92D83F5C4F59F00F1CD207A58 (AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61* __this, U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61*, U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_m310A66658B566280B65F68D8D9E6BA340FCE4DD2_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>::get_Task()
inline Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9* AsyncTaskMethodBuilder_1_get_Task_m70E46116596A4CB9C20E1F23442C092ACA8E5328 (AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9* (*) (AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>::Create()
inline AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB AsyncTaskMethodBuilder_1_Create_m9A24FCC741B6729C788256762956EDFC0A8FA802 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>::Start<Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_mDED583229BE1542F665006895443CA7F9DD5DA88 (AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB* __this, U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB*, U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_m0841F208CEC77DC08B34A4F66835309AA2C7B560_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>::get_Task()
inline Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64* AsyncTaskMethodBuilder_1_get_Task_mA8003BA84EE2C641EE57DBEE6D26916D93D6EBAB (AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64* (*) (AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::Start<Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_m96135BC2FD8E362D8F747FA51D8AC5AD8E15A250 (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_m010927B124E554742F9D743F1DFB125CBF734EDA_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>,Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_m1F0312E26EB9AB392E25D829B4EADE31DCA186E4 (AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95* __this, TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9* ___awaiter0, U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95*, TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9*, U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_m5FF5EA5524020D20561A2EC9AFD4EA7A835F1536_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mDC63A0696B4FA52DE511D9B6210400420B9D8FD8 (AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m2136AA9545E9784547AEB2C0806E2AB34C0B8C31 (AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95* __this, RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95*, RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBalanceAsyncU3Ed__2_MoveNext_m44BCD74344D02A28BAB8E28DCB1892FC09B65F82 (U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m73796A57B676B154F5B6E9AA6F3EB486D723CE4B (AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBalanceAsyncU3Ed__2_SetStateMachine_m51C351BB378D59C3B9A8AF3747099A2AED2E0186 (U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>,Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_m44EAACA4A9773A975B95C1F73BD2EC44EA1562C1 (AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61* __this, TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385* ___awaiter0, U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61*, TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385*, U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_m6AD75863DE609452F39E1A8375B9151F5FB86E81_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m021BA8202E68EBD8C5DEDB6DB3A1E43A23B8DDAA (AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m549DC4BCB161AA465764DD43CA2DA5F46D48F60D (AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61* __this, RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61*, RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRecentBlockHashAsyncU3Ed__3_MoveNext_m38053A80C37F8407AFD4B5412D0DF51DBDD0CFB2 (U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mC6D818A291824DBF11B035B899B3BD1C8B580689 (AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRecentBlockHashAsyncU3Ed__3_SetStateMachine_m30D0E18BB37D34CFD6C6F7CE2A12B435B2EB6A43 (U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>,Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_m8564CAFD4CC2B507834D32E1C57103AC577C3181 (AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB* __this, TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324* ___awaiter0, U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB*, TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324*, U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_mC54F77144AA63FDF6BA68B42ABAE89940BB0C946_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m0AA09C2CFD4AC8FA4F23E2CC9AA5B7D58548B5E6 (AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m48394B8F12345495B9527D6E4279E2420CEF9656 (AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB* __this, RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB*, RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTokenAccountsByOwnerAsyncU3Ed__4_MoveNext_mDA686A61B515F0BAE530EF233108D13C412D0A7C (U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mF53D4075F551460FF0F3E254FE697ED90C4FECF4 (AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTokenAccountsByOwnerAsyncU3Ed__4_SetStateMachine_m3EA526815ED49E55A13870E4F2128A4C1561992C (U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>>,Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_m9EC93BA4BF891225FD71CC6590C01DC98CD48EDB (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* __this, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* ___awaiter0, U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88*, TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935*, U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_mC67E9980C550401F288A4C73BBA94032AC331641_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendTransactionAsyncU3Ed__5_MoveNext_mF75B9A2FF031A5FEF9D78319C6F1CE727122B1DA (U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendTransactionAsyncU3Ed__5_SetStateMachine_m59A7554C67F6A0234F4B51AA9E82656FA13F83D4 (U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenDef>::.ctor()
inline void List_1__ctor_mDEE589CC285EACB41983B8E83CA2F2D4942C5494 (List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenDef>::Add(T)
inline void List_1_Add_mCAB8E72F24B803816C5286F764E024D810E4E6C6_inline (List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675*, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenDef>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m7211545F73A91AE8CE1FBF3EF09BF8936826034D (List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenDef>::GetEnumerator()
inline Enumerator_tC8E0EF05C012F0C94CCE1AECF59B80183950E246 List_1_GetEnumerator_mCFEBF16B3B26CE59BD19C7B2ECA62B1A71A7D9F6 (List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC8E0EF05C012F0C94CCE1AECF59B80183950E246 (*) (List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Solana.Unity.Extensions.Models.TokenMint.TokenDef>::Dispose()
inline void Enumerator_Dispose_m47F61ABEDB60E04336CFB76FF2157F532163285A (Enumerator_tC8E0EF05C012F0C94CCE1AECF59B80183950E246* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC8E0EF05C012F0C94CCE1AECF59B80183950E246*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Solana.Unity.Extensions.Models.TokenMint.TokenDef>::get_Current()
inline TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* Enumerator_get_Current_m7039604A42771F859FACFCF0EA586FE655E68618_inline (Enumerator_tC8E0EF05C012F0C94CCE1AECF59B80183950E246* __this, const RuntimeMethod* method)
{
	return ((  TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* (*) (Enumerator_tC8E0EF05C012F0C94CCE1AECF59B80183950E246*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Solana.Unity.Extensions.TokenMintResolver::Add(Solana.Unity.Extensions.Models.TokenMint.TokenDef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenMintResolver_Add_m0C754F83A31A3D878BCAFD5584E21EBC9074E84F (TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___token0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Solana.Unity.Extensions.Models.TokenMint.TokenDef>::MoveNext()
inline bool Enumerator_MoveNext_m82507BBCC84EDA18A526DA7918E9CF76775B999E (Enumerator_tC8E0EF05C012F0C94CCE1AECF59B80183950E246* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC8E0EF05C012F0C94CCE1AECF59B80183950E246*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.Extensions.TokenWalletAccount>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m9CA6560781E4F09D62EA081916D1B42F5370393B (List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mA41E16D2C779B78397BE1DBD7A5407EA45A5DBB5 (U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Solana.Unity.Extensions.TokenWalletAccount,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mECC8FDC800F14E3EA86BB6DF802A20C4CF052F71 (Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Solana.Unity.Extensions.TokenWalletAccount>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B (RuntimeObject* ___source0, Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m8788CEDF6878A5190C2E43BB8C2BDFD1F1770247 (U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m8341C586697B2B1D27713588D263E7E6A1C48693 (U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<Solana.Unity.Extensions.TokenWalletAccount>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* Enumerable_FirstOrDefault_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mE65AF05E694AD6B39C3D2A81EF243470E70B5CEA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared)(___source0, method);
}
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m6EE115CC4D37878190D0439BE0433E3FB85948D9 (U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m2875A8B44EF6886F03586309E141A6D21E40625A (U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mF3C789A7617BFB6598893DA13DA5733005802607 (U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m82481696E7D190A27B590955392E6332D184CC10 (U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9FE98BF8DD9303E8D0C1583330C26998E29ED91D (U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Predicate`1<Solana.Unity.Extensions.TokenWalletAccount>::Invoke(T)
inline bool Predicate_1_Invoke_mF091D37BEE65E344A92FC82B3FCD5C1303396E5A_inline (Predicate_1_t2B924A8D85AFBF69B001EB1CB9B49274C086ED71* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t2B924A8D85AFBF69B001EB1CB9B49274C086ED71*, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D*, const RuntimeMethod*))Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline)(__this, ___obj0, method);
}
// System.Boolean System.Decimal::op_GreaterThanOrEqual(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_GreaterThanOrEqual_m58389CF06B86290F31B8F12D204D9B8AEBF107F3 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_TokenMint(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_TokenMint_m50460A66C9137E444C38560BC4971BC4BD99B59F_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_TokenName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_TokenName_m8454998BFFA1E564770AB4C28E5150DB17FA9639_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_Symbol(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_Symbol_mD37C660F94BDB265EC37146D9A8CFD30303DBB91_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_DecimalPlaces(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_DecimalPlaces_m26E07B3B04EB9EA208520F53148601F0E27778AF_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Decimal Solana.Unity.Extensions.Models.TokenMint.TokenDef::ConvertUlongToDecimal(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F TokenDef_ConvertUlongToDecimal_m5CA83D515E01B776D85CEA8C18E5A8E584749A8B (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// Solana.Unity.Extensions.TokenQuantity Solana.Unity.Extensions.Models.TokenMint.TokenDef::CreateQuantity(System.Decimal,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* TokenDef_CreateQuantity_mA3D1FAB51834708E02FF1D994B5155946477BD8F (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___valueDecimal0, uint64_t ___valueRaw1, const RuntimeMethod* method) ;
// System.Void System.Decimal::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Multiply_mEC179A2E4BE8AD8F83991B27C0948806D9ED82BC (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Floor(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Floor_m2BE09F241A5497A80E7F92A133B45AAC73ED061D (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mB6CF7957EA867EB4B89A90EB145B152FC20F8410 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Implicit_mA78C1FC00B4E76A91931998BD4FDE3574A54B090 (uint64_t ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Divide_m9B75040DBC8AE56CD9B1F6A76DACA644B23518CC (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_CoinGeckoId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenDef_get_CoinGeckoId_m0A784665A828DBC947E7BC990877EE02339CC405_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_TokenLogoUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenDef_get_TokenLogoUrl_m2E36B5B6A8FEB3D178410BA8B20A6280D6F3035A_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_TokenProjectUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenDef_get_TokenProjectUrl_mA41F6A3B4348CEBE6F7E7CF68CA56E7D61CDFE67_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenListDoc::set_tokens(System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenListItem>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenListDoc_set_tokens_m9687DC98473EABD09B38987E2631A1FEF7C2CE66_inline (TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* __this, List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* ___value0, const RuntimeMethod* method) ;
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
// System.Void Solana.Unity.Extensions.TokenQuantity::.ctor(Solana.Unity.Extensions.Models.TokenMint.TokenDef,System.Decimal,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenQuantity__ctor_m7E4959AD5EABF35D2FD2CFE52A3D688B61ADD767 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___tokenDef0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___balanceDecimal1, uint64_t ___balanceRaw2, const RuntimeMethod* method) 
{
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* G_B2_0 = NULL;
	TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* G_B2_1 = NULL;
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* G_B1_0 = NULL;
	TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_0 = ___tokenDef0;
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFEF73C07136AED4702403F8748000DAE35A4EB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenQuantity__ctor_m7E4959AD5EABF35D2FD2CFE52A3D688B61ADD767_RuntimeMethod_var)));
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		TokenQuantity_set_TokenDef_mF933ACAE5DC9CBA40E83CD1E0933F172377F8073_inline(G_B2_1, G_B2_0, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_3 = ___tokenDef0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = TokenDef_get_Symbol_mF10C13255383D8CF7F10427121498A9FF525ECF5_inline(L_3, NULL);
		TokenQuantity_set_Symbol_m5D8A85A23668AA5BABA2E31C402C2BF23425BC21_inline(__this, L_4, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_5 = ___tokenDef0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = TokenDef_get_TokenName_m5F5C15AC4C1350DDE67D6443C577E8DBAA8D23FA_inline(L_5, NULL);
		TokenQuantity_set_TokenName_m2124BD17CAC7C0CE5B43A1A80BD08046CAF7FC86_inline(__this, L_6, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_7 = ___tokenDef0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = TokenDef_get_TokenMint_m9C11A72AE8F806C8E3AA87F16A62BACBE294A4EF_inline(L_7, NULL);
		TokenQuantity_set_TokenMint_mEFA0EE0FDBCE50A66AA3FEFCFA5E0F0A2711B2C5_inline(__this, L_8, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_9 = ___tokenDef0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TokenDef_get_DecimalPlaces_m47B7CDF205D0183783B65710019B623F0B0B22A0_inline(L_9, NULL);
		TokenQuantity_set_DecimalPlaces_mCF9D872D35D69B2597B0F86BE4A6684E90D70CE9_inline(__this, L_10, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11 = ___balanceDecimal1;
		TokenQuantity_set_QuantityDecimal_m8BCD5423FDA3A7D28110685BD3F1E261098F0D5D_inline(__this, L_11, NULL);
		uint64_t L_12 = ___balanceRaw2;
		TokenQuantity_set_QuantityRaw_mFFD6858F8A920D2614BD7DB29330A86503741077_inline(__this, L_12, NULL);
		return;
	}
}
// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.TokenQuantity::get_TokenDef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* TokenQuantity_get_TokenDef_m3E7206E9CD6FC84A06E2B5E0B349E4B06DFA9552 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_0 = __this->___U3CTokenDefU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_TokenDef(Solana.Unity.Extensions.Models.TokenMint.TokenDef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenQuantity_set_TokenDef_mF933ACAE5DC9CBA40E83CD1E0933F172377F8073 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___value0, const RuntimeMethod* method) 
{
	{
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_0 = ___value0;
		__this->___U3CTokenDefU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenDefU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Solana.Unity.Extensions.TokenQuantity::get_TokenMint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenQuantity_get_TokenMint_mA08A2767983BFE76AE187AB101E0B6EA2B87FF1E (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenMintU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_TokenMint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenQuantity_set_TokenMint_mEFA0EE0FDBCE50A66AA3FEFCFA5E0F0A2711B2C5 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenMintU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenMintU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Solana.Unity.Extensions.TokenQuantity::get_Symbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenQuantity_get_Symbol_mC48660211C14B01AD64BABD3782484FEF579FCD6 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSymbolU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_Symbol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenQuantity_set_Symbol_m5D8A85A23668AA5BABA2E31C402C2BF23425BC21 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSymbolU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSymbolU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Solana.Unity.Extensions.TokenQuantity::get_TokenName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenQuantity_get_TokenName_mF332A5FEA9CC65C10CFEB63D7F05A7E441F5E9D1 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_TokenName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenQuantity_set_TokenName_m2124BD17CAC7C0CE5B43A1A80BD08046CAF7FC86 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int32 Solana.Unity.Extensions.TokenQuantity::get_DecimalPlaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TokenQuantity_get_DecimalPlaces_m232BC8BAC6B8B566BC504C887CD4F86765217E41 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDecimalPlacesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_DecimalPlaces(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenQuantity_set_DecimalPlaces_mCF9D872D35D69B2597B0F86BE4A6684E90D70CE9 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDecimalPlacesU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Decimal Solana.Unity.Extensions.TokenQuantity::get_QuantityDecimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F TokenQuantity_get_QuantityDecimal_m13F35912C1E5B59B18608B7FAE522577E7A94EA7 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = __this->___U3CQuantityDecimalU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_QuantityDecimal(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenQuantity_set_QuantityDecimal_m8BCD5423FDA3A7D28110685BD3F1E261098F0D5D (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		__this->___U3CQuantityDecimalU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.UInt64 Solana.Unity.Extensions.TokenQuantity::get_QuantityRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TokenQuantity_get_QuantityRaw_m4568F62D6A019E2ED22B04545DCC480647AD0AB0 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CQuantityRawU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenQuantity::set_QuantityRaw(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenQuantity_set_QuantityRaw_mFFD6858F8A920D2614BD7DB29330A86503741077 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___U3CQuantityRawU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String Solana.Unity.Extensions.TokenQuantity::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenQuantity_ToString_m2AF282FAE58D4B495A4D066E985CC5E08C6103CF (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB3737E6C8BF6CC42FA8D272FE8A688B08F80555);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = TokenQuantity_get_Symbol_mC48660211C14B01AD64BABD3782484FEF579FCD6_inline(__this, NULL);
		String_t* L_1;
		L_1 = TokenQuantity_get_TokenName_mF332A5FEA9CC65C10CFEB63D7F05A7E441F5E9D1_inline(__this, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3;
		L_3 = TokenQuantity_get_QuantityDecimal_m13F35912C1E5B59B18608B7FAE522577E7A94EA7_inline(__this, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4 = L_3;
		RuntimeObject* L_5 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = TokenQuantity_get_Symbol_mC48660211C14B01AD64BABD3782484FEF579FCD6_inline(__this, NULL);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_5, L_6, NULL);
		return L_7;
	}

IL_002f:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8;
		L_8 = TokenQuantity_get_QuantityDecimal_m13F35912C1E5B59B18608B7FAE522577E7A94EA7_inline(__this, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = L_8;
		RuntimeObject* L_10 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = TokenQuantity_get_Symbol_mC48660211C14B01AD64BABD3782484FEF579FCD6_inline(__this, NULL);
		String_t* L_12;
		L_12 = TokenQuantity_get_TokenName_mF332A5FEA9CC65C10CFEB63D7F05A7E441F5E9D1_inline(__this, NULL);
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralFB3737E6C8BF6CC42FA8D272FE8A688B08F80555, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// Solana.Unity.Extensions.TokenQuantity Solana.Unity.Extensions.TokenQuantity::AddQuantity(System.Decimal,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* TokenQuantity_AddQuantity_m36FAF04C4BAD76163BA179D99770F7556D966878 (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___valueDecimal0, uint64_t ___valueRaw1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_0;
		L_0 = TokenQuantity_get_TokenDef_m3E7206E9CD6FC84A06E2B5E0B349E4B06DFA9552_inline(__this, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = TokenQuantity_get_QuantityDecimal_m13F35912C1E5B59B18608B7FAE522577E7A94EA7_inline(__this, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = ___valueDecimal0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3;
		L_3 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_1, L_2, NULL);
		uint64_t L_4;
		L_4 = TokenQuantity_get_QuantityRaw_m4568F62D6A019E2ED22B04545DCC480647AD0AB0_inline(__this, NULL);
		uint64_t L_5 = ___valueRaw1;
		TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* L_6 = (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59*)il2cpp_codegen_object_new(TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TokenQuantity__ctor_m7E4959AD5EABF35D2FD2CFE52A3D688B61ADD767(L_6, L_0, L_3, ((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)L_5)), NULL);
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
// System.String Solana.Unity.Extensions.TokenWalletAccount::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenWalletAccount_get_PublicKey_mB34F80B2E26590EFB3C70BDEFCA6055D20FBCAFA (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPublicKeyU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWalletAccount::set_PublicKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletAccount_set_PublicKey_mCB6918F4D29BB45379C6F925974C64133BA19681 (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPublicKeyU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicKeyU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.String Solana.Unity.Extensions.TokenWalletAccount::get_Owner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenWalletAccount_get_Owner_m90D07C2E6FE1CB65204DA7B0245D8004A73A78B0 (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COwnerU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWalletAccount::set_Owner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletAccount_set_Owner_mEC0ED5C5D2EE4F3FB8DA808918DF6F46872548FE (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COwnerU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COwnerU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Boolean Solana.Unity.Extensions.TokenWalletAccount::get_IsAssociatedTokenAccount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TokenWalletAccount_get_IsAssociatedTokenAccount_m075A43BE0B9EC0F1E68AF7DC54517D2358C143BF (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsAssociatedTokenAccountU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWalletAccount::set_IsAssociatedTokenAccount(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletAccount_set_IsAssociatedTokenAccount_mAB4BDDD2E9B38D6290B1F8E1D025AD6A0BCB17A8 (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsAssociatedTokenAccountU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void Solana.Unity.Extensions.TokenWalletAccount::.ctor(Solana.Unity.Extensions.Models.TokenMint.TokenDef,System.Decimal,System.UInt64,System.UInt64,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletAccount__ctor_m822DAC39B15BE63CD298B864D77147394F7BDD07 (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___tokenDef0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___balanceDecimal1, uint64_t ___balanceRaw2, uint64_t ___lamportsRaw3, String_t* ___publicKey4, String_t* ___owner5, bool ___isAta6, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* G_B1_1 = NULL;
	String_t* G_B4_0 = NULL;
	TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* G_B3_1 = NULL;
	{
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_0 = ___tokenDef0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___balanceDecimal1;
		uint64_t L_2 = ___balanceRaw2;
		uint64_t L_3 = ___lamportsRaw3;
		TokenWalletBalance__ctor_m060225BAE7A54411E53CA47D16B58BAA043FD6BB(__this, L_0, L_1, L_2, L_3, 1, NULL);
		String_t* L_4 = ___publicKey4;
		String_t* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = __this;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = __this;
			goto IL_001e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55E33AEC810D7C6A9309168416814B8AB9759431)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWalletAccount__ctor_m822DAC39B15BE63CD298B864D77147394F7BDD07_RuntimeMethod_var)));
	}

IL_001e:
	{
		NullCheck(G_B2_1);
		TokenWalletAccount_set_PublicKey_mCB6918F4D29BB45379C6F925974C64133BA19681_inline(G_B2_1, G_B2_0, NULL);
		String_t* L_7 = ___owner5;
		String_t* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = __this;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = __this;
			goto IL_0035;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC89994489E374EE60488665751DAAD6F3B411190)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWalletAccount__ctor_m822DAC39B15BE63CD298B864D77147394F7BDD07_RuntimeMethod_var)));
	}

IL_0035:
	{
		NullCheck(G_B4_1);
		TokenWalletAccount_set_Owner_mEC0ED5C5D2EE4F3FB8DA808918DF6F46872548FE_inline(G_B4_1, G_B4_0, NULL);
		bool L_10 = ___isAta6;
		TokenWalletAccount_set_IsAssociatedTokenAccount_mAB4BDDD2E9B38D6290B1F8E1D025AD6A0BCB17A8_inline(__this, L_10, NULL);
		return;
	}
}
// System.String Solana.Unity.Extensions.TokenWalletAccount::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenWalletAccount_ToString_mDC559C991C21DFE688014BEDE6529D89D26F79BF (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0080E66F278BF182EDCF76F9B45031CCFBCF5F2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		String_t* L_0;
		L_0 = TokenWalletBalance_ToString_m9DE3779320B5CB5D87F5BB40962E767DFD714028(__this, NULL);
		bool L_1;
		L_1 = TokenWalletAccount_get_IsAssociatedTokenAccount_m075A43BE0B9EC0F1E68AF7DC54517D2358C143BF_inline(__this, NULL);
		G_B1_0 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
			G_B2_1 = L_0;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001a:
	{
		G_B3_0 = _stringLiteralE0080E66F278BF182EDCF76F9B45031CCFBCF5F2;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B3_2, G_B3_1, G_B3_0, NULL);
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
// System.Void Solana.Unity.Extensions.TokenWalletBalance::.ctor(Solana.Unity.Extensions.Models.TokenMint.TokenDef,System.Decimal,System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletBalance__ctor_m060225BAE7A54411E53CA47D16B58BAA043FD6BB (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___tokenDef0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___balanceDecimal1, uint64_t ___balanceRaw2, uint64_t ___lamportsRaw3, int32_t ___accountCount4, const RuntimeMethod* method) 
{
	{
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_0 = ___tokenDef0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___balanceDecimal1;
		uint64_t L_2 = ___balanceRaw2;
		TokenQuantity__ctor_m7E4959AD5EABF35D2FD2CFE52A3D688B61ADD767(__this, L_0, L_1, L_2, NULL);
		uint64_t L_3 = ___lamportsRaw3;
		TokenWalletBalance_set_Lamports_mEF4F95ED5E9AF61878CAD680351C64BE6B10ECFE_inline(__this, L_3, NULL);
		int32_t L_4 = ___accountCount4;
		TokenWalletBalance_set_AccountCount_m7AA79B3517CE0458E4D5102E278FB4285F57F196_inline(__this, L_4, NULL);
		return;
	}
}
// System.UInt64 Solana.Unity.Extensions.TokenWalletBalance::get_Lamports()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TokenWalletBalance_get_Lamports_m80B419801AB886D7F0780D3C185DDE99328D73C1 (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CLamportsU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWalletBalance::set_Lamports(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletBalance_set_Lamports_mEF4F95ED5E9AF61878CAD680351C64BE6B10ECFE (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___U3CLamportsU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Int32 Solana.Unity.Extensions.TokenWalletBalance::get_AccountCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TokenWalletBalance_get_AccountCount_mD20C9F9157F2F20D31BC77030196BD52029E4FE0 (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CAccountCountU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWalletBalance::set_AccountCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletBalance_set_AccountCount_m7AA79B3517CE0458E4D5102E278FB4285F57F196 (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CAccountCountU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String Solana.Unity.Extensions.TokenWalletBalance::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenWalletBalance_ToString_m9DE3779320B5CB5D87F5BB40962E767DFD714028 (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB3737E6C8BF6CC42FA8D272FE8A688B08F80555);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = TokenQuantity_get_Symbol_mC48660211C14B01AD64BABD3782484FEF579FCD6_inline(__this, NULL);
		String_t* L_1;
		L_1 = TokenQuantity_get_TokenName_mF332A5FEA9CC65C10CFEB63D7F05A7E441F5E9D1_inline(__this, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3;
		L_3 = TokenQuantity_get_QuantityDecimal_m13F35912C1E5B59B18608B7FAE522577E7A94EA7_inline(__this, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4 = L_3;
		RuntimeObject* L_5 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = TokenQuantity_get_Symbol_mC48660211C14B01AD64BABD3782484FEF579FCD6_inline(__this, NULL);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_5, L_6, NULL);
		return L_7;
	}

IL_002f:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8;
		L_8 = TokenQuantity_get_QuantityDecimal_m13F35912C1E5B59B18608B7FAE522577E7A94EA7_inline(__this, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = L_8;
		RuntimeObject* L_10 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = TokenQuantity_get_Symbol_mC48660211C14B01AD64BABD3782484FEF579FCD6_inline(__this, NULL);
		String_t* L_12;
		L_12 = TokenQuantity_get_TokenName_mF332A5FEA9CC65C10CFEB63D7F05A7E441F5E9D1_inline(__this, NULL);
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralFB3737E6C8BF6CC42FA8D272FE8A688B08F80555, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// Solana.Unity.Extensions.TokenWalletBalance Solana.Unity.Extensions.TokenWalletBalance::AddAccount(System.Decimal,System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* TokenWalletBalance_AddAccount_m5F9241D43916C0DA5A99DF3D7851B8E59D3575AE (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___valueDecimal0, uint64_t ___valueRaw1, uint64_t ___lamportsRaw2, int32_t ___accountCount3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_0;
		L_0 = TokenQuantity_get_TokenDef_m3E7206E9CD6FC84A06E2B5E0B349E4B06DFA9552_inline(__this, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = TokenQuantity_get_QuantityDecimal_m13F35912C1E5B59B18608B7FAE522577E7A94EA7_inline(__this, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = ___valueDecimal0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3;
		L_3 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_1, L_2, NULL);
		uint64_t L_4;
		L_4 = TokenQuantity_get_QuantityRaw_m4568F62D6A019E2ED22B04545DCC480647AD0AB0_inline(__this, NULL);
		uint64_t L_5 = ___valueRaw1;
		uint64_t L_6;
		L_6 = TokenWalletBalance_get_Lamports_m80B419801AB886D7F0780D3C185DDE99328D73C1_inline(__this, NULL);
		uint64_t L_7 = ___lamportsRaw2;
		int32_t L_8;
		L_8 = TokenWalletBalance_get_AccountCount_mD20C9F9157F2F20D31BC77030196BD52029E4FE0_inline(__this, NULL);
		int32_t L_9 = ___accountCount3;
		TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* L_10 = (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9*)il2cpp_codegen_object_new(TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		TokenWalletBalance__ctor_m060225BAE7A54411E53CA47D16B58BAA043FD6BB(L_10, L_0, L_3, ((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)L_5)), ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)L_7)), ((int32_t)il2cpp_codegen_add(L_8, L_9)), NULL);
		return L_10;
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
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Solana.Unity.Extensions.Models.TokenMint.TokenDef> Solana.Unity.Extensions.TokenMintResolver::get_KnownTokens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenMintResolver_get_KnownTokens_mDC95932C1B7F4CA3E1162D32C5D7921B8A6CBC2A (TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818* L_0 = __this->____tokens_1;
		return L_0;
	}
}
// System.Void Solana.Unity.Extensions.TokenMintResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenMintResolver__ctor_mA5EC797F104F5C23903C6A163625B9698558D160 (TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE55DEA23551CAB765EAFC4833BB919C515ACDD4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818* L_0 = (Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818*)il2cpp_codegen_object_new(Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mE55DEA23551CAB765EAFC4833BB919C515ACDD4A(L_0, Dictionary_2__ctor_mE55DEA23551CAB765EAFC4833BB919C515ACDD4A_RuntimeMethod_var);
		__this->____tokens_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tokens_1), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.Extensions.TokenMintResolver::.ctor(Solana.Unity.Extensions.Models.TokenMint.TokenListDoc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenMintResolver__ctor_mD54312ED491E372B0B73E8AAF61FD98BCD2B7ECA (TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* __this, TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* ___tokenList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m68926877B191826DAE5B83A97FC18F0EE52530AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC38B6A8FDCEB8AAF4C164B99A600989DFA200802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFFC9D4DAF9BFE2DD742720A1FBF7FBE0123C2DDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF3E7F881643B2D0E9C2AF2CA1A242E68A0D06BA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t95B3515B0BBE9CEF864137A59519312A9AB6649D V_0;
	memset((&V_0), 0, sizeof(V_0));
	TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* V_1 = NULL;
	{
		TokenMintResolver__ctor_mA5EC797F104F5C23903C6A163625B9698558D160(__this, NULL);
		TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* L_0 = ___tokenList0;
		NullCheck(L_0);
		List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* L_1;
		L_1 = TokenListDoc_get_tokens_mBE8DCDBCD854F05A583F46581D8256A0FD5F611B_inline(L_0, NULL);
		NullCheck(L_1);
		Enumerator_t95B3515B0BBE9CEF864137A59519312A9AB6649D L_2;
		L_2 = List_1_GetEnumerator_mF3E7F881643B2D0E9C2AF2CA1A242E68A0D06BA6(L_1, List_1_GetEnumerator_mF3E7F881643B2D0E9C2AF2CA1A242E68A0D06BA6_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m68926877B191826DAE5B83A97FC18F0EE52530AF((&V_0), Enumerator_Dispose_m68926877B191826DAE5B83A97FC18F0EE52530AF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_0014_1:
			{
				TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* L_3;
				L_3 = Enumerator_get_Current_mFFC9D4DAF9BFE2DD742720A1FBF7FBE0123C2DDC_inline((&V_0), Enumerator_get_Current_mFFC9D4DAF9BFE2DD742720A1FBF7FBE0123C2DDC_RuntimeMethod_var);
				V_1 = L_3;
				TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* L_4 = V_1;
				TokenMintResolver_Add_m4E2A3FCC5A5E7E58A05E737A5CB64EE42D2347CD(__this, L_4, NULL);
			}

IL_0023_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_mC38B6A8FDCEB8AAF4C164B99A600989DFA200802((&V_0), Enumerator_MoveNext_mC38B6A8FDCEB8AAF4C164B99A600989DFA200802_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		return;
	}
}
// Solana.Unity.Extensions.TokenMintResolver Solana.Unity.Extensions.TokenMintResolver::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* TokenMintResolver_Load_m184EFF629DB95CB58A5A19489B53D0C546188781 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_mB3EB3913BF9CD6E2E0665AA3728782BE81636EB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* L_0;
		L_0 = TokenMintResolver_LoadAsync_m8689F0A73126C6FA50154A2C527DA24A16035404(NULL);
		NullCheck(L_0);
		TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* L_1;
		L_1 = Task_1_get_Result_mB3EB3913BF9CD6E2E0665AA3728782BE81636EB5(L_0, Task_1_get_Result_mB3EB3913BF9CD6E2E0665AA3728782BE81636EB5_RuntimeMethod_var);
		return L_1;
	}
}
// Solana.Unity.Extensions.TokenMintResolver Solana.Unity.Extensions.TokenMintResolver::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* TokenMintResolver_Load_mB1497B10B860EFB92FB72D127B74F3E60830F6C0 (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_mB3EB3913BF9CD6E2E0665AA3728782BE81636EB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___url0;
		Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* L_1;
		L_1 = TokenMintResolver_LoadAsync_m75460407A00A155F820E1DD4C4E7B40377DF0D9E(L_0, NULL);
		NullCheck(L_1);
		TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* L_2;
		L_2 = Task_1_get_Result_mB3EB3913BF9CD6E2E0665AA3728782BE81636EB5(L_1, Task_1_get_Result_mB3EB3913BF9CD6E2E0665AA3728782BE81636EB5_RuntimeMethod_var);
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenMintResolver> Solana.Unity.Extensions.TokenMintResolver::LoadAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* TokenMintResolver_LoadAsync_m8689F0A73126C6FA50154A2C527DA24A16035404 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mFCCDD0228A9F00EFEDE296FAF3EDF187EC34D2FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_mCE6689EAD3F37BDB64796CF5F593B940C3E108D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mAD988C0C9692580DD1EC8DE5048182355A0F9152_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mFCCDD0228A9F00EFEDE296FAF3EDF187EC34D2FD(AsyncTaskMethodBuilder_1_Create_mFCCDD0228A9F00EFEDE296FAF3EDF187EC34D2FD_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_mCE6689EAD3F37BDB64796CF5F593B940C3E108D0(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_mCE6689EAD3F37BDB64796CF5F593B940C3E108D0_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_mAD988C0C9692580DD1EC8DE5048182355A0F9152(L_2, AsyncTaskMethodBuilder_1_get_Task_mAD988C0C9692580DD1EC8DE5048182355A0F9152_RuntimeMethod_var);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenMintResolver> Solana.Unity.Extensions.TokenMintResolver::LoadAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* TokenMintResolver_LoadAsync_m75460407A00A155F820E1DD4C4E7B40377DF0D9E (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mFCCDD0228A9F00EFEDE296FAF3EDF187EC34D2FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m468AB170A93719FE94A003F1C12BAC45AA1E39A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mAD988C0C9692580DD1EC8DE5048182355A0F9152_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mFCCDD0228A9F00EFEDE296FAF3EDF187EC34D2FD(AsyncTaskMethodBuilder_1_Create_mFCCDD0228A9F00EFEDE296FAF3EDF187EC34D2FD_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___url0;
		(&V_0)->___url_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___url_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m468AB170A93719FE94A003F1C12BAC45AA1E39A4(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m468AB170A93719FE94A003F1C12BAC45AA1E39A4_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mAD988C0C9692580DD1EC8DE5048182355A0F9152(L_3, AsyncTaskMethodBuilder_1_get_Task_mAD988C0C9692580DD1EC8DE5048182355A0F9152_RuntimeMethod_var);
		return L_4;
	}
}
// Solana.Unity.Extensions.TokenMintResolver Solana.Unity.Extensions.TokenMintResolver::ParseTokenList(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* TokenMintResolver_ParseTokenList_m4D8DF9046EEB2027E6FEC7F50077E3C630A72199 (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelCaseNamingStrategy_tCD17472E129D8769696271E3785AC5FA29DE6DB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelCasePropertyNamesContractResolver_tB03DB20CC6D59C5D7C4E5959D5AA60AE22980D0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tBA46B0B91EBAF6B08DED48AF18B2916FC06B7FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisTokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F_m3EE360BFEA0B89FC24377D59685F62D5ABECAF16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenMintResolver_ParseTokenList_m4D8DF9046EEB2027E6FEC7F50077E3C630A72199_RuntimeMethod_var)));
	}

IL_000e:
	{
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_2 = (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)il2cpp_codegen_object_new(JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F(L_2, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_3 = L_2;
		CamelCasePropertyNamesContractResolver_tB03DB20CC6D59C5D7C4E5959D5AA60AE22980D0C* L_4 = (CamelCasePropertyNamesContractResolver_tB03DB20CC6D59C5D7C4E5959D5AA60AE22980D0C*)il2cpp_codegen_object_new(CamelCasePropertyNamesContractResolver_tB03DB20CC6D59C5D7C4E5959D5AA60AE22980D0C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CamelCasePropertyNamesContractResolver__ctor_m71B6E080791024F83516A378AEC9852D4BF284A7(L_4, NULL);
		NullCheck(L_3);
		JsonSerializerSettings_set_ContractResolver_m88FDD134350590ABDBD87BD2AC124B1A5C2385D5_inline(L_3, L_4, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_5 = L_3;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline(L_5, NULL);
		CamelCaseNamingStrategy_tCD17472E129D8769696271E3785AC5FA29DE6DB8* L_7 = (CamelCaseNamingStrategy_tCD17472E129D8769696271E3785AC5FA29DE6DB8*)il2cpp_codegen_object_new(CamelCaseNamingStrategy_tCD17472E129D8769696271E3785AC5FA29DE6DB8_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		CamelCaseNamingStrategy__ctor_mF8654DDF11007C1CA79C1152B59BD07B3EF088E1(L_7, NULL);
		StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184* L_8 = (StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184*)il2cpp_codegen_object_new(StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		StringEnumConverter__ctor_m178741A52494B93F2FBB671C459EFB3117DF3D66(L_8, L_7, (bool)1, NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Newtonsoft.Json.JsonConverter>::Add(T) */, ICollection_1_tBA46B0B91EBAF6B08DED48AF18B2916FC06B7FC6_il2cpp_TypeInfo_var, L_6, L_8);
		V_0 = L_5;
		String_t* L_9 = ___json0;
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* L_11;
		L_11 = JsonConvert_DeserializeObject_TisTokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F_m3EE360BFEA0B89FC24377D59685F62D5ABECAF16(L_9, L_10, JsonConvert_DeserializeObject_TisTokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F_m3EE360BFEA0B89FC24377D59685F62D5ABECAF16_RuntimeMethod_var);
		TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* L_12 = (TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6*)il2cpp_codegen_object_new(TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		TokenMintResolver__ctor_mD54312ED491E372B0B73E8AAF61FD98BCD2B7ECA(L_12, L_11, NULL);
		return L_12;
	}
}
// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.TokenMintResolver::Resolve(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* TokenMintResolver_Resolve_m1E462C672B3C61EFCE294C4FBFCE61F9635F4A19 (TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* __this, String_t* ___tokenMint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF0813250843D513DF62D3C2DA910AA6250024A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m52AEB945DA92C0520466482676ECAABE19CB83B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBA2684552979B621B05DD1D540FCBF53AF11E4EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8176DD3B2014F3E88638376F738A3C6112E3E6C2);
		s_Il2CppMethodInitialized = true;
	}
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* V_0 = NULL;
	{
		String_t* L_0 = ___tokenMint0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB552DD4A6370A6DFA2B3F60429F8737B17E798F5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenMintResolver_Resolve_m1E462C672B3C61EFCE294C4FBFCE61F9635F4A19_RuntimeMethod_var)));
	}

IL_000e:
	{
		Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818* L_2 = __this->____tokens_1;
		String_t* L_3 = ___tokenMint0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mF0813250843D513DF62D3C2DA910AA6250024A76(L_2, L_3, Dictionary_2_ContainsKey_mF0813250843D513DF62D3C2DA910AA6250024A76_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818* L_5 = __this->____tokens_1;
		String_t* L_6 = ___tokenMint0;
		NullCheck(L_5);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_7;
		L_7 = Dictionary_2_get_Item_m52AEB945DA92C0520466482676ECAABE19CB83B8(L_5, L_6, Dictionary_2_get_Item_m52AEB945DA92C0520466482676ECAABE19CB83B8_RuntimeMethod_var);
		return L_7;
	}

IL_0029:
	{
		String_t* L_8 = ___tokenMint0;
		String_t* L_9 = ___tokenMint0;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8176DD3B2014F3E88638376F738A3C6112E3E6C2, L_9, NULL);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_12 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_12, L_8, L_10, L_11, (-1), NULL);
		V_0 = L_12;
		Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818* L_13 = __this->____tokens_1;
		String_t* L_14 = ___tokenMint0;
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_15 = V_0;
		NullCheck(L_13);
		Dictionary_2_set_Item_mBA2684552979B621B05DD1D540FCBF53AF11E4EB(L_13, L_14, L_15, Dictionary_2_set_Item_mBA2684552979B621B05DD1D540FCBF53AF11E4EB_RuntimeMethod_var);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_16 = V_0;
		return L_16;
	}
}
// System.Void Solana.Unity.Extensions.TokenMintResolver::Add(Solana.Unity.Extensions.Models.TokenMint.TokenDef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenMintResolver_Add_m0C754F83A31A3D878BCAFD5584E21EBC9074E84F (TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBA2684552979B621B05DD1D540FCBF53AF11E4EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_0 = ___token0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3988471A2015D5CC894E22E1A900B66E97CD4306)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenMintResolver_Add_m0C754F83A31A3D878BCAFD5584E21EBC9074E84F_RuntimeMethod_var)));
	}

IL_000e:
	{
		Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818* L_2 = __this->____tokens_1;
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_3 = ___token0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = TokenDef_get_TokenMint_m9C11A72AE8F806C8E3AA87F16A62BACBE294A4EF_inline(L_3, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_5 = ___token0;
		NullCheck(L_2);
		Dictionary_2_set_Item_mBA2684552979B621B05DD1D540FCBF53AF11E4EB(L_2, L_4, L_5, Dictionary_2_set_Item_mBA2684552979B621B05DD1D540FCBF53AF11E4EB_RuntimeMethod_var);
		return;
	}
}
// System.Void Solana.Unity.Extensions.TokenMintResolver::Add(Solana.Unity.Extensions.Models.TokenMint.TokenListItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenMintResolver_Add_m4E2A3FCC5A5E7E58A05E737A5CB64EE42D2347CD (TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* __this, TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* ___tokenItem0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBA2684552979B621B05DD1D540FCBF53AF11E4EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E5D18E1CE2E1731257E917A43830648310DB294);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8866377C730A2C551C07074F3DC5329C45EA772);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* V_3 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* G_B4_0 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* G_B9_0 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	{
		TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* L_0 = ___tokenItem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1642399B611F4197E269924B0C6046527168604)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenMintResolver_Add_m4E2A3FCC5A5E7E58A05E737A5CB64EE42D2347CD_RuntimeMethod_var)));
	}

IL_000e:
	{
		TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* L_2 = ___tokenItem0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TokenListItem_get_LogoUri_mE5AB0562E0F1E040C665557F1CFBAE3E6BE801B5_inline(L_2, NULL);
		V_0 = L_3;
		V_1 = (String_t*)NULL;
		TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* L_4 = ___tokenItem0;
		NullCheck(L_4);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5;
		L_5 = TokenListItem_get_Extensions_m172F5431771AD9B16FD94B3DBB64FC65C59B3EFE_inline(L_4, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0024;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_002e;
	}

IL_0024:
	{
		NullCheck(G_B4_0);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(G_B4_0, _stringLiteralA8866377C730A2C551C07074F3DC5329C45EA772, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_7));
	}

IL_002e:
	{
		if (!G_B5_0)
		{
			goto IL_0046;
		}
	}
	{
		TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* L_8 = ___tokenItem0;
		NullCheck(L_8);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9;
		L_9 = TokenListItem_get_Extensions_m172F5431771AD9B16FD94B3DBB64FC65C59B3EFE_inline(L_8, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_9, _stringLiteralA8866377C730A2C551C07074F3DC5329C45EA772, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		V_1 = L_11;
	}

IL_0046:
	{
		V_2 = (String_t*)NULL;
		TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* L_12 = ___tokenItem0;
		NullCheck(L_12);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13;
		L_13 = TokenListItem_get_Extensions_m172F5431771AD9B16FD94B3DBB64FC65C59B3EFE_inline(L_12, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14 = L_13;
		G_B8_0 = L_14;
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_0055;
		}
	}
	{
		G_B10_0 = 0;
		goto IL_005f;
	}

IL_0055:
	{
		NullCheck(G_B9_0);
		bool L_15;
		L_15 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(G_B9_0, _stringLiteral7E5D18E1CE2E1731257E917A43830648310DB294, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		G_B10_0 = ((int32_t)(L_15));
	}

IL_005f:
	{
		if (!G_B10_0)
		{
			goto IL_0077;
		}
	}
	{
		TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* L_16 = ___tokenItem0;
		NullCheck(L_16);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_17;
		L_17 = TokenListItem_get_Extensions_m172F5431771AD9B16FD94B3DBB64FC65C59B3EFE_inline(L_16, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_17, _stringLiteral7E5D18E1CE2E1731257E917A43830648310DB294, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		V_2 = L_19;
	}

IL_0077:
	{
		TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* L_20 = ___tokenItem0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = TokenListItem_get_Address_m6522AB5DCCBA5F5ABDBDFE8424EA6C825E4E1305_inline(L_20, NULL);
		TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* L_22 = ___tokenItem0;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = TokenListItem_get_Name_m1C4F76B986164CCDD814CF9F6B69B0C9ACB4E743_inline(L_22, NULL);
		TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* L_24 = ___tokenItem0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = TokenListItem_get_Symbol_mEEBB90292D58DBB1FA27FCA742ADE0120BD2C218_inline(L_24, NULL);
		TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* L_26 = ___tokenItem0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = TokenListItem_get_Decimals_mDD6E4559BD6D99FB92760172150BADE13FF42A2F_inline(L_26, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_28 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_28, L_21, L_23, L_25, L_27, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_29 = L_28;
		String_t* L_30 = V_1;
		NullCheck(L_29);
		TokenDef_set_CoinGeckoId_m58DF8B5B0F558D5869E99194806347EECB3CFC01_inline(L_29, L_30, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_31 = L_29;
		String_t* L_32 = V_0;
		NullCheck(L_31);
		TokenDef_set_TokenLogoUrl_m0A96C70BE39ED0B81E7E3FB120FEF9E6040ABF8F_inline(L_31, L_32, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_33 = L_31;
		String_t* L_34 = V_2;
		NullCheck(L_33);
		TokenDef_set_TokenProjectUrl_m5A9C75C7AA4DC27730B4267F1281528485B1A941_inline(L_33, L_34, NULL);
		V_3 = L_33;
		Dictionary_2_tAB861AFF18304AC2F8CF1DB80F5242E75BAD0818* L_35 = __this->____tokens_1;
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_36 = V_3;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = TokenDef_get_TokenMint_m9C11A72AE8F806C8E3AA87F16A62BACBE294A4EF_inline(L_36, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_38 = V_3;
		NullCheck(L_35);
		Dictionary_2_set_Item_mBA2684552979B621B05DD1D540FCBF53AF11E4EB(L_35, L_37, L_38, Dictionary_2_set_Item_mBA2684552979B621B05DD1D540FCBF53AF11E4EB_RuntimeMethod_var);
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
// System.Void Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__8_MoveNext_m687F2DBDA006E25FF247AD44BFB2750AC4DAF6F9 (U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_m2EA52D365EF2DD5E2152066CDA61AE02DB3CF647_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA1C269371D112FD181DD7B6650AAB2C33946DF0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m7089CEB8607FB0DE0AD8D1CD8457F41646E80D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m5E970A292A9A0E787F2673CE972335AB08FF7AD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mF1A54DABE4F6DA9C82BFF31D977CD7A3A22E1935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01C49C594CAF9844B68FFD2EBC26B618D993E7CD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* V_1 = NULL;
	TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0043_1;
			}
		}
		{
			Task_1_t3620F8B4504D93055BF578ACF8500A1D522BF8E9* L_2;
			L_2 = TokenMintResolver_LoadAsync_m75460407A00A155F820E1DD4C4E7B40377DF0D9E(_stringLiteral01C49C594CAF9844B68FFD2EBC26B618D993E7CD, NULL);
			NullCheck(L_2);
			TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF L_3;
			L_3 = Task_1_GetAwaiter_mF1A54DABE4F6DA9C82BFF31D977CD7A3A22E1935(L_2, Task_1_GetAwaiter_mF1A54DABE4F6DA9C82BFF31D977CD7A3A22E1935_RuntimeMethod_var);
			V_2 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_1_get_IsCompleted_m5E970A292A9A0E787F2673CE972335AB08FF7AD6((&V_2), TaskAwaiter_1_get_IsCompleted_m5E970A292A9A0E787F2673CE972335AB08FF7AD6_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_005f_1;
			}
		}
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->___U3CU3E1__state_0 = L_5;
			TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF L_6 = V_2;
			__this->___U3CU3Eu__1_2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_2))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_7 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_m2EA52D365EF2DD5E2152066CDA61AE02DB3CF647(L_7, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF_TisU3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957_m2EA52D365EF2DD5E2152066CDA61AE02DB3CF647_RuntimeMethod_var);
			goto IL_0094;
		}

IL_0043_1:
		{
			TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF L_8 = __this->___U3CU3Eu__1_2;
			V_2 = L_8;
			TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF* L_9 = (&__this->___U3CU3Eu__1_2);
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_1_t131A5ADE1F719A34F5B57F47E44E4AA95D292DFF));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
		}

IL_005f_1:
		{
			TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* L_11;
			L_11 = TaskAwaiter_1_GetResult_m7089CEB8607FB0DE0AD8D1CD8457F41646E80D75((&V_2), TaskAwaiter_1_GetResult_m7089CEB8607FB0DE0AD8D1CD8457F41646E80D75_RuntimeMethod_var);
			V_1 = L_11;
			goto IL_0080;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_12 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_13 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m8B324307E27D9DDEE350A1FE88C577E7F67DA90D(L_12, L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m8B324307E27D9DDEE350A1FE88C577E7F67DA90D_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0094;
	}// end catch (depth: 1)

IL_0080:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_14 = (&__this->___U3CU3Et__builder_1);
		TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* L_15 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mA1C269371D112FD181DD7B6650AAB2C33946DF0E(L_14, L_15, AsyncTaskMethodBuilder_1_SetResult_mA1C269371D112FD181DD7B6650AAB2C33946DF0E_RuntimeMethod_var);
	}

IL_0094:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__8_MoveNext_m687F2DBDA006E25FF247AD44BFB2750AC4DAF6F9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957*>(__this + _offset);
	U3CLoadAsyncU3Ed__8_MoveNext_m687F2DBDA006E25FF247AD44BFB2750AC4DAF6F9(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__8_SetStateMachine_m333ABAF29659D95BAAF38BC24560068A17531EC8 (U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m2A624F7042C71D9EADEDF1574895757EF8493608_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m2A624F7042C71D9EADEDF1574895757EF8493608(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m2A624F7042C71D9EADEDF1574895757EF8493608_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__8_SetStateMachine_m333ABAF29659D95BAAF38BC24560068A17531EC8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__8_t852EB60D21A76CCBD6FBD979D05A12A181E5A957*>(__this + _offset);
	U3CLoadAsyncU3Ed__8_SetStateMachine_m333ABAF29659D95BAAF38BC24560068A17531EC8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__9_MoveNext_m3AF98AE64E5EFB11602F131F0B18703266D0085F (U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m11779804B327DA56AE9EC66783200EC267F3E1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m3367959D2106CA70EC44FDA33EC592EF74A45F31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA1C269371D112FD181DD7B6650AAB2C33946DF0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* V_1 = NULL;
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* V_2 = NULL;
	String_t* V_3 = NULL;
	TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0016_1;
			}
		}
		{
			HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_2 = (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42*)il2cpp_codegen_object_new(HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			HttpClient__ctor_mD64C48138600CF1398E7BB24BF33EB582ECB1AFD(L_2, NULL);
			__this->___U3CclientU3E5__2_3 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclientU3E5__2_3), (void*)L_2);
		}

IL_0016_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_013d_1:
				{// begin finally (depth: 2)
					{
						int32_t L_3 = V_0;
						if ((((int32_t)L_3) >= ((int32_t)0)))
						{
							goto IL_0154_1;
						}
					}
					{
						HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_4 = __this->___U3CclientU3E5__2_3;
						if (!L_4)
						{
							goto IL_0154_1;
						}
					}
					{
						HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_5 = __this->___U3CclientU3E5__2_3;
						NullCheck(L_5);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
					}

IL_0154_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_6 = V_0;
					if ((!(((uint32_t)L_6) > ((uint32_t)1))))
					{
						goto IL_0031_2;
					}
				}
				{
					il2cpp_codegen_runtime_class_init_inline(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
					HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_7;
					L_7 = HttpMethod_get_Get_mAD94BF07B40B20DAF42CBEEC2E910FC5CE0DA670_inline(NULL);
					String_t* L_8 = __this->___url_2;
					HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_9 = (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2*)il2cpp_codegen_object_new(HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2_il2cpp_TypeInfo_var);
					NullCheck(L_9);
					HttpRequestMessage__ctor_m56BE095A8CA0D3F611076723C36DB13949FF8F85(L_9, L_7, L_8, NULL);
					__this->___U3ChttpReqU3E5__3_4 = L_9;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChttpReqU3E5__3_4), (void*)L_9);
				}

IL_0031_2:
				{
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0125_2:
						{// begin finally (depth: 3)
							{
								int32_t L_10 = V_0;
								if ((((int32_t)L_10) >= ((int32_t)0)))
								{
									goto IL_013c_2;
								}
							}
							{
								HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_11 = __this->___U3ChttpReqU3E5__3_4;
								if (!L_11)
								{
									goto IL_013c_2;
								}
							}
							{
								HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_12 = __this->___U3ChttpReqU3E5__3_4;
								NullCheck(L_12);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
							}

IL_013c_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						{
							int32_t L_13 = V_0;
							if (!L_13)
							{
								goto IL_0081_3;
							}
						}
						{
							int32_t L_14 = V_0;
							if ((((int32_t)L_14) == ((int32_t)1)))
							{
								goto IL_00f7_3;
							}
						}
						{
							HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_15 = __this->___U3CclientU3E5__2_3;
							HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_16 = __this->___U3ChttpReqU3E5__3_4;
							Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* L_17;
							L_17 = CrossHttpClient_SendAsyncRequest_mDADF69EE9C2403B8DE074043325BEC458A4D3283(L_15, L_16, NULL);
							NullCheck(L_17);
							TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 L_18;
							L_18 = Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC(L_17, Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC_RuntimeMethod_var);
							V_4 = L_18;
							bool L_19;
							L_19 = TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE((&V_4), TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE_RuntimeMethod_var);
							if (L_19)
							{
								goto IL_009e_3;
							}
						}
						{
							int32_t L_20 = 0;
							V_0 = L_20;
							__this->___U3CU3E1__state_0 = L_20;
							TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 L_21 = V_4;
							__this->___U3CU3Eu__1_5 = L_21;
							Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
							AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_22 = (&__this->___U3CU3Et__builder_1);
							AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m3367959D2106CA70EC44FDA33EC592EF74A45F31(L_22, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m3367959D2106CA70EC44FDA33EC592EF74A45F31_RuntimeMethod_var);
							goto IL_0182;
						}

IL_0081_3:
						{
							TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 L_23 = __this->___U3CU3Eu__1_5;
							V_4 = L_23;
							TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4* L_24 = (&__this->___U3CU3Eu__1_5);
							il2cpp_codegen_initobj(L_24, sizeof(TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4));
							int32_t L_25 = (-1);
							V_0 = L_25;
							__this->___U3CU3E1__state_0 = L_25;
						}

IL_009e_3:
						{
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_26;
							L_26 = TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9((&V_4), TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9_RuntimeMethod_var);
							V_2 = L_26;
							V_3 = (String_t*)NULL;
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_27 = V_2;
							NullCheck(L_27);
							bool L_28;
							L_28 = HttpResponseMessage_get_IsSuccessStatusCode_m2B9DA5ECF8EE760D5A1A511C798FA08EAA931B9C(L_27, NULL);
							if (!L_28)
							{
								goto IL_011c_3;
							}
						}
						{
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_29 = V_2;
							NullCheck(L_29);
							HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_30;
							L_30 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_29, NULL);
							if (!L_30)
							{
								goto IL_011c_3;
							}
						}
						{
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_31 = V_2;
							NullCheck(L_31);
							HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_32;
							L_32 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_31, NULL);
							NullCheck(L_32);
							Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_33;
							L_33 = HttpContent_ReadAsStringAsync_m69166E8C01E4287FFBA3E8E41805FF068362BF2B(L_32, NULL);
							NullCheck(L_33);
							TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_34;
							L_34 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_33, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
							V_5 = L_34;
							bool L_35;
							L_35 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_5), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
							if (L_35)
							{
								goto IL_0114_3;
							}
						}
						{
							int32_t L_36 = 1;
							V_0 = L_36;
							__this->___U3CU3E1__state_0 = L_36;
							TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_37 = V_5;
							__this->___U3CU3Eu__2_6 = L_37;
							Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
							AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_38 = (&__this->___U3CU3Et__builder_1);
							AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m11779804B327DA56AE9EC66783200EC267F3E1B9(L_38, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D_m11779804B327DA56AE9EC66783200EC267F3E1B9_RuntimeMethod_var);
							goto IL_0182;
						}

IL_00f7_3:
						{
							TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_39 = __this->___U3CU3Eu__2_6;
							V_5 = L_39;
							TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_40 = (&__this->___U3CU3Eu__2_6);
							il2cpp_codegen_initobj(L_40, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
							int32_t L_41 = (-1);
							V_0 = L_41;
							__this->___U3CU3E1__state_0 = L_41;
						}

IL_0114_3:
						{
							String_t* L_42;
							L_42 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_5), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
							V_3 = L_42;
						}

IL_011c_3:
						{
							String_t* L_43 = V_3;
							TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* L_44;
							L_44 = TokenMintResolver_ParseTokenList_m4D8DF9046EEB2027E6FEC7F50077E3C630A72199(L_43, NULL);
							V_1 = L_44;
							goto IL_016e;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0155;
		}
		throw e;
	}

CATCH_0155:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_45 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_46 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m8B324307E27D9DDEE350A1FE88C577E7F67DA90D(L_45, L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m8B324307E27D9DDEE350A1FE88C577E7F67DA90D_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0182;
	}// end catch (depth: 1)

IL_016e:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_47 = (&__this->___U3CU3Et__builder_1);
		TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* L_48 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mA1C269371D112FD181DD7B6650AAB2C33946DF0E(L_47, L_48, AsyncTaskMethodBuilder_1_SetResult_mA1C269371D112FD181DD7B6650AAB2C33946DF0E_RuntimeMethod_var);
	}

IL_0182:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__9_MoveNext_m3AF98AE64E5EFB11602F131F0B18703266D0085F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D*>(__this + _offset);
	U3CLoadAsyncU3Ed__9_MoveNext_m3AF98AE64E5EFB11602F131F0B18703266D0085F(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenMintResolver/<LoadAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__9_SetStateMachine_m821BC5899073BD659DCBD0B3E8F73D41FD3EBEB2 (U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m2A624F7042C71D9EADEDF1574895757EF8493608_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t04D2DFBA751791F5E35F02ABF4E1E1C76D6E0D5A* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m2A624F7042C71D9EADEDF1574895757EF8493608(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m2A624F7042C71D9EADEDF1574895757EF8493608_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__9_SetStateMachine_m821BC5899073BD659DCBD0B3E8F73D41FD3EBEB2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__9_t5B65B0ACBCC16E86CDA98C9C136F25881DD9B73D*>(__this + _offset);
	U3CLoadAsyncU3Ed__9_SetStateMachine_m821BC5899073BD659DCBD0B3E8F73D41FD3EBEB2(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Solana.Unity.Extensions.ITokenWalletRpcProxy Solana.Unity.Extensions.TokenWallet::get_RpcClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenWallet_get_RpcClient_m1420AD42AD614E4FDA38B76146155ACBD414B7E8 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CRpcClientU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWallet::set_RpcClient(Solana.Unity.Extensions.ITokenWalletRpcProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWallet_set_RpcClient_m605D800CE4E9FACA5A759658C35AF20034D0ECDD (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRpcClientU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRpcClientU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Solana.Unity.Extensions.ITokenMintResolver Solana.Unity.Extensions.TokenWallet::get_MintResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenWallet_get_MintResolver_m789A9FEB1CBA4C99F485FC07C5CAF1C576A1E458 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMintResolverU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWallet::set_MintResolver(Solana.Unity.Extensions.ITokenMintResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWallet_set_MintResolver_m32D3836BE09065FF00E95050369A48DF91B358A8 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CMintResolverU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMintResolverU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* TokenWallet_get_PublicKey_m0AB262A3C3ABDD5672BA0D3027A99F295DE19EF7 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CPublicKeyU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.TokenWallet::set_PublicKey(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWallet_set_PublicKey_m8398D5C2F73F37F6B9E1AA2B082A43CC5CA9026A (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CPublicKeyU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicKeyU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.UInt64 Solana.Unity.Extensions.TokenWallet::get_Lamports()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TokenWallet_get_Lamports_mA898D3421D5B97424CFC871693C5310D34D6702F (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CLamportsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Solana.Unity.Extensions.TokenWallet::set_Lamports(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWallet_set_Lamports_m83A69FE8E9EFE449622D5492E3130BBA17057CAC (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___U3CLamportsU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Decimal Solana.Unity.Extensions.TokenWallet::get_Sol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F TokenWallet_get_Sol_mC7DD9C1A493E5CE60C70A6DC7EE9FA636DCEB1E5 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0;
		L_0 = TokenWallet_get_Lamports_mA898D3421D5B97424CFC871693C5310D34D6702F_inline(__this, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = SolHelper_ConvertToSol_m8476A2A0843D37F4F19EF896B8F48B8CDA8141F7(L_0, NULL);
		return L_1;
	}
}
// System.Void Solana.Unity.Extensions.TokenWallet::.ctor(Solana.Unity.Extensions.ITokenWalletRpcProxy,Solana.Unity.Extensions.ITokenMintResolver,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWallet__ctor_mBEEE4D25F598B07CF74BBBEBDF66C63166B70314 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, RuntimeObject* ___client0, RuntimeObject* ___mintResolver1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC008731FD250FAEE364BD415BEE9474CD0AF57AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWallet__ctor_mBEEE4D25F598B07CF74BBBEBDF66C63166B70314_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___mintResolver1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral854AD188B8CB26C997E496F2E25773B38557472E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWallet__ctor_mBEEE4D25F598B07CF74BBBEBDF66C63166B70314_RuntimeMethod_var)));
	}

IL_0022:
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_4 = ___publicKey2;
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55E33AEC810D7C6A9309168416814B8AB9759431)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWallet__ctor_mBEEE4D25F598B07CF74BBBEBDF66C63166B70314_RuntimeMethod_var)));
	}

IL_0030:
	{
		RuntimeObject* L_6 = ___client0;
		TokenWallet_set_RpcClient_m605D800CE4E9FACA5A759658C35AF20034D0ECDD_inline(__this, L_6, NULL);
		RuntimeObject* L_7 = ___mintResolver1;
		TokenWallet_set_MintResolver_m32D3836BE09065FF00E95050369A48DF91B358A8_inline(__this, L_7, NULL);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_8 = ___publicKey2;
		TokenWallet_set_PublicKey_m8398D5C2F73F37F6B9E1AA2B082A43CC5CA9026A_inline(__this, L_8, NULL);
		Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF* L_9 = (Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF*)il2cpp_codegen_object_new(Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Dictionary_2__ctor_mC008731FD250FAEE364BD415BEE9474CD0AF57AD(L_9, Dictionary_2__ctor_mC008731FD250FAEE364BD415BEE9474CD0AF57AD_RuntimeMethod_var);
		__this->____ataCache_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ataCache_3), (void*)L_9);
		return;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet::LoadAsync(Solana.Unity.Extensions.ITokenWalletRpcProxy,Solana.Unity.Extensions.ITokenMintResolver,System.String,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* TokenWallet_LoadAsync_m3714B2BC3A37F0F28A945B2E19A60BBF4E9D1AF5 (RuntimeObject* ___client0, RuntimeObject* ___mintResolver1, String_t* ___publicKey2, int32_t ___commitment3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_mC1566667968010D9D4A5B55467652883A95E1B1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047(AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		RuntimeObject* L_1 = ___client0;
		(&V_0)->___client_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___client_2), (void*)L_1);
		RuntimeObject* L_2 = ___mintResolver1;
		(&V_0)->___mintResolver_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___mintResolver_3), (void*)L_2);
		String_t* L_3 = ___publicKey2;
		(&V_0)->___publicKey_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___publicKey_4), (void*)L_3);
		int32_t L_4 = ___commitment3;
		(&V_0)->___commitment_5 = L_4;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_mC1566667968010D9D4A5B55467652883A95E1B1C(L_5, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_mC1566667968010D9D4A5B55467652883A95E1B1C_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* L_7;
		L_7 = AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB(L_6, AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB_RuntimeMethod_var);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet::LoadAsync(Solana.Unity.Rpc.IRpcClient,Solana.Unity.Extensions.ITokenMintResolver,System.String,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* TokenWallet_LoadAsync_m7FF880EFAC5E69543F1CB316C549CA70A59C2FFE (RuntimeObject* ___client0, RuntimeObject* ___mintResolver1, String_t* ___publicKey2, int32_t ___commitment3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_mDD54974279B92E7FE7664668A51A580B08C3A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047(AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		RuntimeObject* L_1 = ___client0;
		(&V_0)->___client_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___client_2), (void*)L_1);
		RuntimeObject* L_2 = ___mintResolver1;
		(&V_0)->___mintResolver_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___mintResolver_3), (void*)L_2);
		String_t* L_3 = ___publicKey2;
		(&V_0)->___publicKey_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___publicKey_4), (void*)L_3);
		int32_t L_4 = ___commitment3;
		(&V_0)->___commitment_5 = L_4;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_mDD54974279B92E7FE7664668A51A580B08C3A3D2(L_5, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_mDD54974279B92E7FE7664668A51A580B08C3A3D2_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* L_7;
		L_7 = AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB(L_6, AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB_RuntimeMethod_var);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet::LoadAsync(Solana.Unity.Rpc.IRpcClient,Solana.Unity.Extensions.ITokenMintResolver,Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* TokenWallet_LoadAsync_mD843F6895AD26042DFC11D3729B673E7081179F8 (RuntimeObject* ___client0, RuntimeObject* ___mintResolver1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey2, int32_t ___commitment3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m7A6CD1BF4A04C24D4D38107BD87B1C715926DB64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047(AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		RuntimeObject* L_1 = ___client0;
		(&V_0)->___client_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___client_2), (void*)L_1);
		RuntimeObject* L_2 = ___mintResolver1;
		(&V_0)->___mintResolver_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___mintResolver_3), (void*)L_2);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_3 = ___publicKey2;
		(&V_0)->___publicKey_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___publicKey_4), (void*)L_3);
		int32_t L_4 = ___commitment3;
		(&V_0)->___commitment_5 = L_4;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m7A6CD1BF4A04C24D4D38107BD87B1C715926DB64(L_5, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m7A6CD1BF4A04C24D4D38107BD87B1C715926DB64_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* L_7;
		L_7 = AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB(L_6, AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB_RuntimeMethod_var);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Extensions.TokenWallet> Solana.Unity.Extensions.TokenWallet::LoadAsync(Solana.Unity.Extensions.ITokenWalletRpcProxy,Solana.Unity.Extensions.ITokenMintResolver,Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* TokenWallet_LoadAsync_m66FA284883479D3FA71872C171FB2530672309BD (RuntimeObject* ___client0, RuntimeObject* ___mintResolver1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey2, int32_t ___commitment3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_mF3D649AE932C26B43C880826EAC814F42A070BDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047(AsyncTaskMethodBuilder_1_Create_mC486B54C7BDC9D42D9A3ABC2700FB94F61F74047_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		RuntimeObject* L_1 = ___client0;
		(&V_0)->___client_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___client_2), (void*)L_1);
		RuntimeObject* L_2 = ___mintResolver1;
		(&V_0)->___mintResolver_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___mintResolver_3), (void*)L_2);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_3 = ___publicKey2;
		(&V_0)->___publicKey_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___publicKey_4), (void*)L_3);
		int32_t L_4 = ___commitment3;
		(&V_0)->___commitment_5 = L_4;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_mF3D649AE932C26B43C880826EAC814F42A070BDB(L_5, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_mF3D649AE932C26B43C880826EAC814F42A070BDB_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* L_7;
		L_7 = AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB(L_6, AsyncTaskMethodBuilder_1_get_Task_m519E71768B63CFA1D33B5CEEC9029ECBD91816AB_RuntimeMethod_var);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> Solana.Unity.Extensions.TokenWallet::RefreshAsync(Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TokenWallet_RefreshAsync_mB9689382781E071BE9C2AE656A8287F71851806D (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, int32_t ___commitment0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_m9162F6C5093AEF55E762A9384C576EE1DC59BDDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D(AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
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
		int32_t L_1 = ___commitment0;
		(&V_0)->___commitment_3 = L_1;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_m9162F6C5093AEF55E762A9384C576EE1DC59BDDD(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_m9162F6C5093AEF55E762A9384C576EE1DC59BDDD_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_3, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		return L_4;
	}
}
// Solana.Unity.Extensions.TokenWalletBalance[] Solana.Unity.Extensions.TokenWallet::Balances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletBalanceU5BU5D_tD464B6024B54154141CA4D2AB4EC92CE07DB1F3B* TokenWallet_Balances_m3AFB2DFFA5A692673476E0D2EA98694A5B27347D (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7845D8DC84BC05B205A9480B26CF0B4BD299C9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4698BE108CAC5C7B84751D82633883D8DCE45AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8FF89C82047794810B021D0062035F1FEA6D5410_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m58A5818EBC052EBADB7D7E2DDB2F7232C63961A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m21138BA2F5632A4C5F094F2FDEF06DDC619BD5CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisTokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_TisString_t_m580BE76A3C34271853ACB2B0C4BA3265B28D9821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisTokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_mFAFD8C11D029EA5B468AFD7FBE5B5503CC0DE9DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2A2BF37044EEB6CFE09E6651A274ECEC1CDB4048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m77CAB1FB0A9202CAE7D6330A2470A0039DAC4EEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m59EC364FBCF20B9D08102DA709EC31F5AB8CB833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenMintResolver_tD4AC0E8E0E0873DB93173BE6B73AB7BFECC5FDBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD44A69F58F1F1E4DE020F64C60F8A6476530AD06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBalancesU3Eb__26_0_mEA8CF0ABEECD939376C0229E9C392E3A9833BA5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* V_0 = NULL;
	Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* V_2 = NULL;
	String_t* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_6;
	memset((&V_6), 0, sizeof(V_6));
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* V_7 = NULL;
	int32_t V_8 = 0;
	Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F* G_B13_0 = NULL;
	ValueCollection_t479C6184D9CB8F88145D04970A0A33A4243AFD1F* G_B13_1 = NULL;
	Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F* G_B12_0 = NULL;
	ValueCollection_t479C6184D9CB8F88145D04970A0A33A4243AFD1F* G_B12_1 = NULL;
	{
		Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* L_0 = (Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4*)il2cpp_codegen_object_new(Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m4698BE108CAC5C7B84751D82633883D8DCE45AAB(L_0, Dictionary_2__ctor_m4698BE108CAC5C7B84751D82633883D8DCE45AAB_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73* L_1 = __this->____tokenAccounts_5;
		NullCheck(L_1);
		Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81 L_2;
		L_2 = List_1_GetEnumerator_mD44A69F58F1F1E4DE020F64C60F8A6476530AD06(L_1, List_1_GetEnumerator_mD44A69F58F1F1E4DE020F64C60F8A6476530AD06_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2A2BF37044EEB6CFE09E6651A274ECEC1CDB4048((&V_1), Enumerator_Dispose_m2A2BF37044EEB6CFE09E6651A274ECEC1CDB4048_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_010c_1;
			}

IL_0017_1:
			{
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_3;
				L_3 = Enumerator_get_Current_m59EC364FBCF20B9D08102DA709EC31F5AB8CB833_inline((&V_1), Enumerator_get_Current_m59EC364FBCF20B9D08102DA709EC31F5AB8CB833_RuntimeMethod_var);
				V_2 = L_3;
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_4 = V_2;
				NullCheck(L_4);
				TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* L_5;
				L_5 = TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline(L_4, NULL);
				NullCheck(L_5);
				TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* L_6;
				L_6 = TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9_inline(L_5, NULL);
				NullCheck(L_6);
				ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* L_7;
				L_7 = TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB_inline(L_6, NULL);
				NullCheck(L_7);
				TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* L_8;
				L_8 = ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED_inline(L_7, NULL);
				NullCheck(L_8);
				String_t* L_9;
				L_9 = TokenAccountInfoDetails_get_Mint_m3335A83447115280C56F2061713666864A65C03C_inline(L_8, NULL);
				V_3 = L_9;
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_10 = V_2;
				NullCheck(L_10);
				TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* L_11;
				L_11 = TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline(L_10, NULL);
				NullCheck(L_11);
				uint64_t L_12;
				L_12 = AccountInfoBase_get_Lamports_m7A93911FFB8740125E0A8162776621CED052546D_inline(L_11, NULL);
				V_4 = L_12;
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_13 = V_2;
				NullCheck(L_13);
				TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* L_14;
				L_14 = TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline(L_13, NULL);
				NullCheck(L_14);
				TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* L_15;
				L_15 = TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9_inline(L_14, NULL);
				NullCheck(L_15);
				ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* L_16;
				L_16 = TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB_inline(L_15, NULL);
				NullCheck(L_16);
				TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* L_17;
				L_17 = ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED_inline(L_16, NULL);
				NullCheck(L_17);
				TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* L_18;
				L_18 = TokenAccountInfoDetails_get_TokenAmount_mCD5AFD1463727A6A85E257470E62C2451F791646_inline(L_17, NULL);
				NullCheck(L_18);
				uint64_t L_19;
				L_19 = TokenBalance_get_AmountUlong_mE18DA694712240D74636A085D6210983E2377CDF(L_18, NULL);
				V_5 = L_19;
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_20 = V_2;
				NullCheck(L_20);
				TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* L_21;
				L_21 = TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline(L_20, NULL);
				NullCheck(L_21);
				TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* L_22;
				L_22 = TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9_inline(L_21, NULL);
				NullCheck(L_22);
				ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* L_23;
				L_23 = TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB_inline(L_22, NULL);
				NullCheck(L_23);
				TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* L_24;
				L_24 = ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED_inline(L_23, NULL);
				NullCheck(L_24);
				TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* L_25;
				L_25 = TokenAccountInfoDetails_get_TokenAmount_mCD5AFD1463727A6A85E257470E62C2451F791646_inline(L_24, NULL);
				NullCheck(L_25);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_26;
				L_26 = TokenBalance_get_AmountDecimal_m35DD24905951567450E582DC78779D0868DB705F(L_25, NULL);
				V_6 = L_26;
				Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* L_27 = V_0;
				String_t* L_28 = V_3;
				NullCheck(L_27);
				bool L_29;
				L_29 = Dictionary_2_ContainsKey_mD7845D8DC84BC05B205A9480B26CF0B4BD299C9F(L_27, L_28, Dictionary_2_ContainsKey_mD7845D8DC84BC05B205A9480B26CF0B4BD299C9F_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00f2_1;
				}
			}
			{
				RuntimeObject* L_30;
				L_30 = TokenWallet_get_MintResolver_m789A9FEB1CBA4C99F485FC07C5CAF1C576A1E458_inline(__this, NULL);
				String_t* L_31 = V_3;
				NullCheck(L_30);
				TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_32;
				L_32 = InterfaceFuncInvoker1< TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*, String_t* >::Invoke(0 /* Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.ITokenMintResolver::Resolve(System.String) */, ITokenMintResolver_tD4AC0E8E0E0873DB93173BE6B73AB7BFECC5FDBA_il2cpp_TypeInfo_var, L_30, L_31);
				V_7 = L_32;
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_33 = V_2;
				NullCheck(L_33);
				TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* L_34;
				L_34 = TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline(L_33, NULL);
				NullCheck(L_34);
				TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* L_35;
				L_35 = TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9_inline(L_34, NULL);
				NullCheck(L_35);
				ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* L_36;
				L_36 = TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB_inline(L_35, NULL);
				NullCheck(L_36);
				TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* L_37;
				L_37 = ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED_inline(L_36, NULL);
				NullCheck(L_37);
				TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* L_38;
				L_38 = TokenAccountInfoDetails_get_TokenAmount_mCD5AFD1463727A6A85E257470E62C2451F791646_inline(L_37, NULL);
				NullCheck(L_38);
				int32_t L_39;
				L_39 = TokenBalance_get_Decimals_m256A81CD453B7FE928625C52A92840FF4F2C1616_inline(L_38, NULL);
				V_8 = L_39;
				TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_40 = V_7;
				NullCheck(L_40);
				int32_t L_41;
				L_41 = TokenDef_get_DecimalPlaces_m47B7CDF205D0183783B65710019B623F0B0B22A0_inline(L_40, NULL);
				if ((!(((uint32_t)L_41) == ((uint32_t)(-1)))))
				{
					goto IL_00db_1;
				}
			}
			{
				int32_t L_42 = V_8;
				if ((((int32_t)L_42) < ((int32_t)0)))
				{
					goto IL_00db_1;
				}
			}
			{
				TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_43 = V_7;
				int32_t L_44 = V_8;
				NullCheck(L_43);
				TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_45;
				L_45 = TokenDef_CloneWithKnownDecimals_m08ED941099F660B0E21FF112DE380D61ACC060FD(L_43, L_44, NULL);
				V_7 = L_45;
			}

IL_00db_1:
			{
				Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* L_46 = V_0;
				String_t* L_47 = V_3;
				TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_48 = V_7;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_49 = V_6;
				uint64_t L_50 = V_5;
				uint64_t L_51 = V_4;
				TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* L_52 = (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9*)il2cpp_codegen_object_new(TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_il2cpp_TypeInfo_var);
				NullCheck(L_52);
				TokenWalletBalance__ctor_m060225BAE7A54411E53CA47D16B58BAA043FD6BB(L_52, L_48, L_49, L_50, L_51, 1, NULL);
				NullCheck(L_46);
				Dictionary_2_set_Item_m21138BA2F5632A4C5F094F2FDEF06DDC619BD5CA(L_46, L_47, L_52, Dictionary_2_set_Item_m21138BA2F5632A4C5F094F2FDEF06DDC619BD5CA_RuntimeMethod_var);
				goto IL_010c_1;
			}

IL_00f2_1:
			{
				Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* L_53 = V_0;
				String_t* L_54 = V_3;
				Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* L_55 = V_0;
				String_t* L_56 = V_3;
				NullCheck(L_55);
				TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* L_57;
				L_57 = Dictionary_2_get_Item_m8FF89C82047794810B021D0062035F1FEA6D5410(L_55, L_56, Dictionary_2_get_Item_m8FF89C82047794810B021D0062035F1FEA6D5410_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_58 = V_6;
				uint64_t L_59 = V_5;
				uint64_t L_60 = V_4;
				NullCheck(L_57);
				TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* L_61;
				L_61 = TokenWalletBalance_AddAccount_m5F9241D43916C0DA5A99DF3D7851B8E59D3575AE(L_57, L_58, L_59, L_60, 1, NULL);
				NullCheck(L_53);
				Dictionary_2_set_Item_m21138BA2F5632A4C5F094F2FDEF06DDC619BD5CA(L_53, L_54, L_61, Dictionary_2_set_Item_m21138BA2F5632A4C5F094F2FDEF06DDC619BD5CA_RuntimeMethod_var);
			}

IL_010c_1:
			{
				bool L_62;
				L_62 = Enumerator_MoveNext_m77CAB1FB0A9202CAE7D6330A2470A0039DAC4EEE((&V_1), Enumerator_MoveNext_m77CAB1FB0A9202CAE7D6330A2470A0039DAC4EEE_RuntimeMethod_var);
				if (L_62)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0128;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0128:
	{
		Dictionary_2_tA975B7E69BB244CBC9848ECD7684A47EF24423F4* L_63 = V_0;
		NullCheck(L_63);
		ValueCollection_t479C6184D9CB8F88145D04970A0A33A4243AFD1F* L_64;
		L_64 = Dictionary_2_get_Values_m58A5818EBC052EBADB7D7E2DDB2F7232C63961A9(L_63, Dictionary_2_get_Values_m58A5818EBC052EBADB7D7E2DDB2F7232C63961A9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var);
		Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F* L_65 = ((U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var))->___U3CU3E9__26_0_1;
		Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F* L_66 = L_65;
		G_B12_0 = L_66;
		G_B12_1 = L_64;
		if (L_66)
		{
			G_B13_0 = L_66;
			G_B13_1 = L_64;
			goto IL_014d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var);
		U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0* L_67 = ((U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F* L_68 = (Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F*)il2cpp_codegen_object_new(Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		Func_2__ctor_mDAB667D4A7FFC79CC28EE5B91B3E4F29A5976606(L_68, L_67, (intptr_t)((void*)U3CU3Ec_U3CBalancesU3Eb__26_0_mEA8CF0ABEECD939376C0229E9C392E3A9833BA5C_RuntimeMethod_var), NULL);
		Func_2_tC3759C353C744CA6D45DB94BBE7F341AF093643F* L_69 = L_68;
		((U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var))->___U3CU3E9__26_0_1 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var))->___U3CU3E9__26_0_1), (void*)L_69);
		G_B13_0 = L_69;
		G_B13_1 = G_B12_1;
	}

IL_014d:
	{
		RuntimeObject* L_70;
		L_70 = Enumerable_OrderBy_TisTokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_TisString_t_m580BE76A3C34271853ACB2B0C4BA3265B28D9821(G_B13_1, G_B13_0, Enumerable_OrderBy_TisTokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_TisString_t_m580BE76A3C34271853ACB2B0C4BA3265B28D9821_RuntimeMethod_var);
		TokenWalletBalanceU5BU5D_tD464B6024B54154141CA4D2AB4EC92CE07DB1F3B* L_71;
		L_71 = Enumerable_ToArray_TisTokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_mFAFD8C11D029EA5B468AFD7FBE5B5503CC0DE9DD(L_70, Enumerable_ToArray_TisTokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9_mFAFD8C11D029EA5B468AFD7FBE5B5503CC0DE9DD_RuntimeMethod_var);
		return L_71;
	}
}
// Solana.Unity.Extensions.Models.TokenWalletFilterList Solana.Unity.Extensions.TokenWallet::TokenAccounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* TokenWallet_TokenAccounts_mE85FB0EEF55C059D0C36D06CEA2276AC441CB527 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_TisString_t_mA3E7F7D5B673888B175FD0F04DDCCA9D89661FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2A2BF37044EEB6CFE09E6651A274ECEC1CDB4048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m77CAB1FB0A9202CAE7D6330A2470A0039DAC4EEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m59EC364FBCF20B9D08102DA709EC31F5AB8CB833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenMintResolver_tD4AC0E8E0E0873DB93173BE6B73AB7BFECC5FDBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6DE9140C07494601787A888ABD6696E5E9E0EFA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD44A69F58F1F1E4DE020F64C60F8A6476530AD06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m54C0827B5D4FF4CE92484CDA800543288B3910E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTokenAccountsU3Eb__27_0_m699E4B4B3A9DE97A026D8769A4EE5CAC2F44776E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E* V_0 = NULL;
	Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	uint64_t V_5 = 0;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_9;
	memset((&V_9), 0, sizeof(V_9));
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* V_10 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173* G_B13_0 = NULL;
	List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E* G_B13_1 = NULL;
	Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173* G_B12_0 = NULL;
	List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E* G_B12_1 = NULL;
	{
		List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E* L_0 = (List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E*)il2cpp_codegen_object_new(List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m54C0827B5D4FF4CE92484CDA800543288B3910E4(L_0, List_1__ctor_m54C0827B5D4FF4CE92484CDA800543288B3910E4_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73* L_1 = __this->____tokenAccounts_5;
		NullCheck(L_1);
		Enumerator_t1BC16D3E7AC6AAF15E8C7B77496C0C41B3CDDC81 L_2;
		L_2 = List_1_GetEnumerator_mD44A69F58F1F1E4DE020F64C60F8A6476530AD06(L_1, List_1_GetEnumerator_mD44A69F58F1F1E4DE020F64C60F8A6476530AD06_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0141:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2A2BF37044EEB6CFE09E6651A274ECEC1CDB4048((&V_1), Enumerator_Dispose_m2A2BF37044EEB6CFE09E6651A274ECEC1CDB4048_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0133_1;
			}

IL_0017_1:
			{
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_3;
				L_3 = Enumerator_get_Current_m59EC364FBCF20B9D08102DA709EC31F5AB8CB833_inline((&V_1), Enumerator_get_Current_m59EC364FBCF20B9D08102DA709EC31F5AB8CB833_RuntimeMethod_var);
				V_2 = L_3;
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_4 = V_2;
				NullCheck(L_4);
				TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* L_5;
				L_5 = TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline(L_4, NULL);
				NullCheck(L_5);
				TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* L_6;
				L_6 = TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9_inline(L_5, NULL);
				NullCheck(L_6);
				ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* L_7;
				L_7 = TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB_inline(L_6, NULL);
				NullCheck(L_7);
				TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* L_8;
				L_8 = ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED_inline(L_7, NULL);
				NullCheck(L_8);
				String_t* L_9;
				L_9 = TokenAccountInfoDetails_get_Mint_m3335A83447115280C56F2061713666864A65C03C_inline(L_8, NULL);
				V_3 = L_9;
				String_t* L_10 = V_3;
				PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_11;
				L_11 = TokenWallet_GetAssociatedTokenAddressForMint_mC67728532F60F137C2BA85EF269A6DD66457FF2C(__this, L_10, NULL);
				NullCheck(L_11);
				String_t* L_12;
				L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = TokenAccount_get_PublicKey_mA307152D18933F83868F1AB250842C4F1094906A_inline(L_13, NULL);
				bool L_15;
				L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, L_14, NULL);
				V_4 = L_15;
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_16 = V_2;
				NullCheck(L_16);
				TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* L_17;
				L_17 = TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline(L_16, NULL);
				NullCheck(L_17);
				uint64_t L_18;
				L_18 = AccountInfoBase_get_Lamports_m7A93911FFB8740125E0A8162776621CED052546D_inline(L_17, NULL);
				V_5 = L_18;
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_19 = V_2;
				NullCheck(L_19);
				TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* L_20;
				L_20 = TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline(L_19, NULL);
				NullCheck(L_20);
				TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* L_21;
				L_21 = TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9_inline(L_20, NULL);
				NullCheck(L_21);
				ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* L_22;
				L_22 = TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB_inline(L_21, NULL);
				NullCheck(L_22);
				TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* L_23;
				L_23 = ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED_inline(L_22, NULL);
				NullCheck(L_23);
				String_t* L_24;
				L_24 = TokenAccountInfoDetails_get_Owner_m98E4D9B72749240E19C29D47868EE59A7230C258_inline(L_23, NULL);
				String_t* L_25 = L_24;
				G_B3_0 = L_25;
				if (L_25)
				{
					G_B4_0 = L_25;
					goto IL_0089_1;
				}
			}
			{
				PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_26;
				L_26 = TokenWallet_get_PublicKey_m0AB262A3C3ABDD5672BA0D3027A99F295DE19EF7_inline(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
				String_t* L_27;
				L_27 = PublicKey_op_Implicit_m384B7ABBC96BB94E492A1F7EDD3EA30EFCB38921(L_26, NULL);
				G_B4_0 = L_27;
			}

IL_0089_1:
			{
				V_6 = G_B4_0;
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_28 = V_2;
				NullCheck(L_28);
				TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* L_29;
				L_29 = TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline(L_28, NULL);
				NullCheck(L_29);
				TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* L_30;
				L_30 = TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9_inline(L_29, NULL);
				NullCheck(L_30);
				ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* L_31;
				L_31 = TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB_inline(L_30, NULL);
				NullCheck(L_31);
				TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* L_32;
				L_32 = ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED_inline(L_31, NULL);
				NullCheck(L_32);
				TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* L_33;
				L_33 = TokenAccountInfoDetails_get_TokenAmount_mCD5AFD1463727A6A85E257470E62C2451F791646_inline(L_32, NULL);
				NullCheck(L_33);
				int32_t L_34;
				L_34 = TokenBalance_get_Decimals_m256A81CD453B7FE928625C52A92840FF4F2C1616_inline(L_33, NULL);
				V_7 = L_34;
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_35 = V_2;
				NullCheck(L_35);
				TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* L_36;
				L_36 = TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline(L_35, NULL);
				NullCheck(L_36);
				TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* L_37;
				L_37 = TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9_inline(L_36, NULL);
				NullCheck(L_37);
				ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* L_38;
				L_38 = TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB_inline(L_37, NULL);
				NullCheck(L_38);
				TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* L_39;
				L_39 = ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED_inline(L_38, NULL);
				NullCheck(L_39);
				TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* L_40;
				L_40 = TokenAccountInfoDetails_get_TokenAmount_mCD5AFD1463727A6A85E257470E62C2451F791646_inline(L_39, NULL);
				NullCheck(L_40);
				uint64_t L_41;
				L_41 = TokenBalance_get_AmountUlong_mE18DA694712240D74636A085D6210983E2377CDF(L_40, NULL);
				V_8 = L_41;
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_42 = V_2;
				NullCheck(L_42);
				TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* L_43;
				L_43 = TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline(L_42, NULL);
				NullCheck(L_43);
				TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* L_44;
				L_44 = TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9_inline(L_43, NULL);
				NullCheck(L_44);
				ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* L_45;
				L_45 = TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB_inline(L_44, NULL);
				NullCheck(L_45);
				TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* L_46;
				L_46 = ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED_inline(L_45, NULL);
				NullCheck(L_46);
				TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* L_47;
				L_47 = TokenAccountInfoDetails_get_TokenAmount_mCD5AFD1463727A6A85E257470E62C2451F791646_inline(L_46, NULL);
				NullCheck(L_47);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_48;
				L_48 = TokenBalance_get_AmountDecimal_m35DD24905951567450E582DC78779D0868DB705F(L_47, NULL);
				V_9 = L_48;
				RuntimeObject* L_49;
				L_49 = TokenWallet_get_MintResolver_m789A9FEB1CBA4C99F485FC07C5CAF1C576A1E458_inline(__this, NULL);
				String_t* L_50 = V_3;
				NullCheck(L_49);
				TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_51;
				L_51 = InterfaceFuncInvoker1< TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*, String_t* >::Invoke(0 /* Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.ITokenMintResolver::Resolve(System.String) */, ITokenMintResolver_tD4AC0E8E0E0873DB93173BE6B73AB7BFECC5FDBA_il2cpp_TypeInfo_var, L_49, L_50);
				V_10 = L_51;
				TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_52 = V_10;
				NullCheck(L_52);
				int32_t L_53;
				L_53 = TokenDef_get_DecimalPlaces_m47B7CDF205D0183783B65710019B623F0B0B22A0_inline(L_52, NULL);
				if ((!(((uint32_t)L_53) == ((uint32_t)(-1)))))
				{
					goto IL_0116_1;
				}
			}
			{
				int32_t L_54 = V_7;
				if ((((int32_t)L_54) < ((int32_t)0)))
				{
					goto IL_0116_1;
				}
			}
			{
				TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_55 = V_10;
				int32_t L_56 = V_7;
				NullCheck(L_55);
				TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_57;
				L_57 = TokenDef_CloneWithKnownDecimals_m08ED941099F660B0E21FF112DE380D61ACC060FD(L_55, L_56, NULL);
				V_10 = L_57;
			}

IL_0116_1:
			{
				List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E* L_58 = V_0;
				TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_59 = V_10;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_60 = V_9;
				uint64_t L_61 = V_8;
				uint64_t L_62 = V_5;
				TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_63 = V_2;
				NullCheck(L_63);
				String_t* L_64;
				L_64 = TokenAccount_get_PublicKey_mA307152D18933F83868F1AB250842C4F1094906A_inline(L_63, NULL);
				String_t* L_65 = V_6;
				bool L_66 = V_4;
				TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_67 = (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D*)il2cpp_codegen_object_new(TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_il2cpp_TypeInfo_var);
				NullCheck(L_67);
				TokenWalletAccount__ctor_m822DAC39B15BE63CD298B864D77147394F7BDD07(L_67, L_59, L_60, L_61, L_62, L_64, L_65, L_66, NULL);
				NullCheck(L_58);
				List_1_Add_m6DE9140C07494601787A888ABD6696E5E9E0EFA5_inline(L_58, L_67, List_1_Add_m6DE9140C07494601787A888ABD6696E5E9E0EFA5_RuntimeMethod_var);
			}

IL_0133_1:
			{
				bool L_68;
				L_68 = Enumerator_MoveNext_m77CAB1FB0A9202CAE7D6330A2470A0039DAC4EEE((&V_1), Enumerator_MoveNext_m77CAB1FB0A9202CAE7D6330A2470A0039DAC4EEE_RuntimeMethod_var);
				if (L_68)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_014f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014f:
	{
		List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E* L_69 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var);
		Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173* L_70 = ((U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_2;
		Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173* L_71 = L_70;
		G_B12_0 = L_71;
		G_B12_1 = L_69;
		if (L_71)
		{
			G_B13_0 = L_71;
			G_B13_1 = L_69;
			goto IL_016f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var);
		U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0* L_72 = ((U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173* L_73 = (Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173*)il2cpp_codegen_object_new(Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		Func_2__ctor_m727AC67E07D4547D726F3016D60C86DEA846DB16(L_73, L_72, (intptr_t)((void*)U3CU3Ec_U3CTokenAccountsU3Eb__27_0_m699E4B4B3A9DE97A026D8769A4EE5CAC2F44776E_RuntimeMethod_var), NULL);
		Func_2_t0B08282D93447F09A33094590DCBBB9CD314E173* L_74 = L_73;
		((U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_2 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_2), (void*)L_74);
		G_B13_0 = L_74;
		G_B13_1 = G_B12_1;
	}

IL_016f:
	{
		RuntimeObject* L_75;
		L_75 = Enumerable_OrderBy_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_TisString_t_mA3E7F7D5B673888B175FD0F04DDCCA9D89661FDA(G_B13_1, G_B13_0, Enumerable_OrderBy_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_TisString_t_mA3E7F7D5B673888B175FD0F04DDCCA9D89661FDA_RuntimeMethod_var);
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_76 = (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D*)il2cpp_codegen_object_new(TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C(L_76, L_75, NULL);
		return L_76;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Extensions.TokenWallet::SendAsync(Solana.Unity.Extensions.TokenWalletAccount,System.Decimal,System.String,Solana.Unity.Wallet.PublicKey,System.Func`2<Solana.Unity.Rpc.Builders.TransactionBuilder,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* TokenWallet_SendAsync_mB503773E247B557BCAF159AC0F7CD62C9CF07B6F (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___source0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___amount1, String_t* ___destination2, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer3, Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52* ___signTxCallback4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_mC39836A1114F0CFE4C3B6F6E5FD13249FB247842_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636 V_0;
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
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_1 = ___source0;
		(&V_0)->___source_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___source_3), (void*)L_1);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = ___amount1;
		(&V_0)->___amount_4 = L_2;
		String_t* L_3 = ___destination2;
		(&V_0)->___destination_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___destination_5), (void*)L_3);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_4 = ___feePayer3;
		(&V_0)->___feePayer_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___feePayer_6), (void*)L_4);
		Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52* L_5 = ___signTxCallback4;
		(&V_0)->___signTxCallback_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___signTxCallback_7), (void*)L_5);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_mC39836A1114F0CFE4C3B6F6E5FD13249FB247842(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_mC39836A1114F0CFE4C3B6F6E5FD13249FB247842_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_7 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_8;
		L_8 = AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E(L_7, AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Extensions.TokenWallet::SendAsync(Solana.Unity.Extensions.TokenWalletAccount,System.Decimal,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,System.Func`2<Solana.Unity.Rpc.Builders.TransactionBuilder,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* TokenWallet_SendAsync_m507549592DFDACF09FDD6A24930059EEEBA58701 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___source0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___amount1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___destination2, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer3, Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52* ___signTxCallback4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_mC1B8FCD72B29DDCF077B2146DBF1926F8A8AEF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB V_0;
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
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_1 = ___source0;
		(&V_0)->___source_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___source_2), (void*)L_1);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = ___amount1;
		(&V_0)->___amount_7 = L_2;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_3 = ___destination2;
		(&V_0)->___destination_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___destination_3), (void*)L_3);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_4 = ___feePayer3;
		(&V_0)->___feePayer_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___feePayer_4), (void*)L_4);
		Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52* L_5 = ___signTxCallback4;
		(&V_0)->___signTxCallback_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___signTxCallback_5), (void*)L_5);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_mC1B8FCD72B29DDCF077B2146DBF1926F8A8AEF65(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_mC1B8FCD72B29DDCF077B2146DBF1926F8A8AEF65_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_7 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_8;
		L_8 = AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E(L_7, AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		return L_8;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet::JitCreateAssociatedTokenAccount(Solana.Unity.Rpc.Builders.TransactionBuilder,System.String,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* TokenWallet_JitCreateAssociatedTokenAccount_m2E3443667664133120E1D1418965DD1653692407 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* ___builder0, String_t* ___mint1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___feePayer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssociatedTokenAccountProgram_tFC3624824F991B8AEA618DEE565CB16C25BCBC22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mB26E6487168FD7282C2D658AECF9AD1CB2DCC855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mA08E426415C9FBB5FC1A303C4BECDB0AC40A2DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* V_0 = NULL;
	{
		TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* L_0 = ___builder0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3274DA16C9ECBC2C163F56693A2AEEE654A7780F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWallet_JitCreateAssociatedTokenAccount_m2E3443667664133120E1D1418965DD1653692407_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___mint1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE6A0DE909ED9D1DC050D44EA5FC852CF0615412)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWallet_JitCreateAssociatedTokenAccount_m2E3443667664133120E1D1418965DD1653692407_RuntimeMethod_var)));
	}

IL_001c:
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_4 = ___feePayer2;
		il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = PublicKey_op_Equality_m0AA9C9DFE5518A02C138793CDC1394B872C92CF9(L_4, (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4D9B9FBB2F76DB2392E4A041FB58F23E00288A3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWallet_JitCreateAssociatedTokenAccount_m2E3443667664133120E1D1418965DD1653692407_RuntimeMethod_var)));
	}

IL_0030:
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_7 = ___feePayer2;
		NullCheck(L_7);
		bool L_8;
		L_8 = PublicKey_IsOnCurve_mBF12BA49AEF38386A854D99A2E7893FD06496E5A(L_7, NULL);
		if (L_8)
		{
			goto IL_0053;
		}
	}
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_9 = ___feePayer2;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DCC3FBCEF7946127620E5F35DA4B0133CD6C169)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4D7D11D649D29CC5B3AE0F2EB6A9329A98B31C0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWallet_JitCreateAssociatedTokenAccount_m2E3443667664133120E1D1418965DD1653692407_RuntimeMethod_var)));
	}

IL_0053:
	{
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_13;
		L_13 = TokenWallet_TokenAccounts_mE85FB0EEF55C059D0C36D06CEA2276AC441CB527(__this, NULL);
		String_t* L_14 = ___mint1;
		NullCheck(L_13);
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_15;
		L_15 = TokenWalletFilterList_WithMint_mECC22CF8AEA5474E3EFAFDC1FB713F2A602A5E8A(L_13, L_14, NULL);
		NullCheck(L_15);
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_16;
		L_16 = TokenWalletFilterList_WhichAreAssociatedTokenAccounts_m1855DDC6D9F0DEC09AC4CB078A9A1A564CE92669(L_15, NULL);
		V_0 = L_16;
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_17 = V_0;
		int32_t L_18;
		L_18 = Enumerable_Count_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mB26E6487168FD7282C2D658AECF9AD1CB2DCC855(L_17, Enumerable_Count_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mB26E6487168FD7282C2D658AECF9AD1CB2DCC855_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_19 = ___mint1;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_20;
		L_20 = TokenWallet_GetAssociatedTokenAddressForMint_mC67728532F60F137C2BA85EF269A6DD66457FF2C(__this, L_19, NULL);
		TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* L_21 = ___builder0;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_22 = ___feePayer2;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_23;
		L_23 = TokenWallet_get_PublicKey_m0AB262A3C3ABDD5672BA0D3027A99F295DE19EF7_inline(__this, NULL);
		String_t* L_24 = ___mint1;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_25 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_25, L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(AssociatedTokenAccountProgram_tFC3624824F991B8AEA618DEE565CB16C25BCBC22_il2cpp_TypeInfo_var);
		TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_26;
		L_26 = AssociatedTokenAccountProgram_CreateAssociatedTokenAccount_m9A2226857DA069073EA2E4BD7A24B8B5B3CCCE6C(L_22, L_23, L_25, (bool)0, NULL);
		NullCheck(L_21);
		TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* L_27;
		L_27 = TransactionBuilder_AddInstruction_m47204C5F74C6203BCF68D1965D8BB186CA148B3A(L_21, L_26, NULL);
		return L_20;
	}

IL_008f:
	{
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_28 = V_0;
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_29;
		L_29 = Enumerable_First_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mA08E426415C9FBB5FC1A303C4BECDB0AC40A2DD4(L_28, Enumerable_First_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mA08E426415C9FBB5FC1A303C4BECDB0AC40A2DD4_RuntimeMethod_var);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = TokenWalletAccount_get_PublicKey_mB34F80B2E26590EFB3C70BDEFCA6055D20FBCAFA_inline(L_29, NULL);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_31 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_31, L_30, NULL);
		return L_31;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Extensions.TokenWallet::GetAssociatedTokenAddressForMint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* TokenWallet_GetAssociatedTokenAddressForMint_mC67728532F60F137C2BA85EF269A6DD66457FF2C (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, String_t* ___mint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssociatedTokenAccountProgram_tFC3624824F991B8AEA618DEE565CB16C25BCBC22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD75F0079EF503B5FA80A9E25D7CC50BF10C2D7A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7C42E426FED0A9522AF4E0E16B0C96EFB5BC3E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m245629A6A6F08F2BF9C70EF0CFBE61D4623D2B18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* V_0 = NULL;
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* V_1 = NULL;
	{
		String_t* L_0 = ___mint0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE6A0DE909ED9D1DC050D44EA5FC852CF0615412)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWallet_GetAssociatedTokenAddressForMint_mC67728532F60F137C2BA85EF269A6DD66457FF2C_RuntimeMethod_var)));
	}

IL_000e:
	{
		Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF* L_2 = __this->____ataCache_3;
		String_t* L_3 = ___mint0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mD75F0079EF503B5FA80A9E25D7CC50BF10C2D7A0(L_2, L_3, Dictionary_2_ContainsKey_mD75F0079EF503B5FA80A9E25D7CC50BF10C2D7A0_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF* L_5 = __this->____ataCache_3;
		String_t* L_6 = ___mint0;
		NullCheck(L_5);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_7;
		L_7 = Dictionary_2_get_Item_m7C42E426FED0A9522AF4E0E16B0C96EFB5BC3E7A(L_5, L_6, Dictionary_2_get_Item_m7C42E426FED0A9522AF4E0E16B0C96EFB5BC3E7A_RuntimeMethod_var);
		return L_7;
	}

IL_0029:
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_8;
		L_8 = TokenWallet_get_PublicKey_m0AB262A3C3ABDD5672BA0D3027A99F295DE19EF7_inline(__this, NULL);
		String_t* L_9 = ___mint0;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_10 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_10, L_9, NULL);
		V_0 = L_10;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AssociatedTokenAccountProgram_tFC3624824F991B8AEA618DEE565CB16C25BCBC22_il2cpp_TypeInfo_var);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_12;
		L_12 = AssociatedTokenAccountProgram_DeriveAssociatedTokenAccount_m1F121F2AB02376A948F92BE49A09E48F239C91B4(L_8, L_11, NULL);
		V_1 = L_12;
		Dictionary_2_t7AD23DA39D168711361C8CCFBDDF40E6034E05BF* L_13 = __this->____ataCache_3;
		String_t* L_14 = ___mint0;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_15 = V_1;
		NullCheck(L_13);
		Dictionary_2_set_Item_m245629A6A6F08F2BF9C70EF0CFBE61D4623D2B18(L_13, L_14, L_15, Dictionary_2_set_Item_m245629A6A6F08F2BF9C70EF0CFBE61D4623D2B18_RuntimeMethod_var);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_16 = V_1;
		return L_16;
	}
}
// System.Boolean Solana.Unity.Extensions.TokenWallet::IsSubAccount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TokenWallet_IsSubAccount_m2F81F4ACBEDB538D447F77B0A8D1C9237FC29A11 (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, String_t* ___pubkey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisTokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643_m60C5DD5C6EC4E5C593C3E9C9296D79A414579ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_U3CIsSubAccountU3Eb__0_m0A67FAE8E7E1F9D7AAF5B85FB7858B852C6778C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75* L_0 = (U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass32_0__ctor_mB02D5B387EE76ADE3AF2900BB2E5A1A140D5BC31(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75* L_1 = V_0;
		String_t* L_2 = ___pubkey0;
		NullCheck(L_1);
		L_1->___pubkey_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___pubkey_0), (void*)L_2);
		U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___pubkey_0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ABB213B01DF8C822F02D77AD95E59A4C797765C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWallet_IsSubAccount_m2F81F4ACBEDB538D447F77B0A8D1C9237FC29A11_RuntimeMethod_var)));
	}

IL_0020:
	{
		List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73* L_6 = __this->____tokenAccounts_5;
		U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75* L_7 = V_0;
		Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30* L_8 = (Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30*)il2cpp_codegen_object_new(Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_2__ctor_m2743104D4426DB806600433120513EC96DDFA6AC(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass32_0_U3CIsSubAccountU3Eb__0_m0A67FAE8E7E1F9D7AAF5B85FB7858B852C6778C9_RuntimeMethod_var), NULL);
		bool L_9;
		L_9 = Enumerable_Any_TisTokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643_m60C5DD5C6EC4E5C593C3E9C9296D79A414579ABC(L_6, L_8, Enumerable_Any_TisTokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643_m60C5DD5C6EC4E5C593C3E9C9296D79A414579ABC_RuntimeMethod_var);
		return L_9;
	}
}
// System.Boolean Solana.Unity.Extensions.TokenWallet::IsSubAccount(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TokenWallet_IsSubAccount_mEB8AE918E0BFC2790207D0AD7E23B5FD09A0227F (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___pubkey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisTokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643_m60C5DD5C6EC4E5C593C3E9C9296D79A414579ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_U3CIsSubAccountU3Eb__0_m3F54E129D7FEFC92F83BDD79ACBB5540406C7854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9* L_0 = (U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass33_0__ctor_mC4AF3429EF955C4E130EB727544B37A0DDE0D74F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9* L_1 = V_0;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_2 = ___pubkey0;
		NullCheck(L_1);
		L_1->___pubkey_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___pubkey_0), (void*)L_2);
		U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9* L_3 = V_0;
		NullCheck(L_3);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_4 = L_3->___pubkey_0;
		il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = PublicKey_op_Equality_m0AA9C9DFE5518A02C138793CDC1394B872C92CF9(L_4, (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ABB213B01DF8C822F02D77AD95E59A4C797765C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWallet_IsSubAccount_mEB8AE918E0BFC2790207D0AD7E23B5FD09A0227F_RuntimeMethod_var)));
	}

IL_0026:
	{
		List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73* L_7 = __this->____tokenAccounts_5;
		U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9* L_8 = V_0;
		Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30* L_9 = (Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30*)il2cpp_codegen_object_new(Func_2_t3B153CDD74161885D9BFB0CC17BFB9B4F11A8D30_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m2743104D4426DB806600433120513EC96DDFA6AC(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass33_0_U3CIsSubAccountU3Eb__0_m3F54E129D7FEFC92F83BDD79ACBB5540406C7854_RuntimeMethod_var), NULL);
		bool L_10;
		L_10 = Enumerable_Any_TisTokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643_m60C5DD5C6EC4E5C593C3E9C9296D79A414579ABC(L_7, L_9, Enumerable_Any_TisTokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643_m60C5DD5C6EC4E5C593C3E9C9296D79A414579ABC_RuntimeMethod_var);
		return L_10;
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
// System.Void Solana.Unity.Extensions.TokenWallet/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF498A1E8969EC19546BA195F2B4A07FDDEA440EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0* L_0 = (U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0*)il2cpp_codegen_object_new(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5EB842F0FA53BC31B36DE74B792AE4DA208E7316(L_0, NULL);
		((U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.Extensions.TokenWallet/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5EB842F0FA53BC31B36DE74B792AE4DA208E7316 (U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Solana.Unity.Extensions.TokenWallet/<>c::<Balances>b__26_0(Solana.Unity.Extensions.TokenWalletBalance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CBalancesU3Eb__26_0_mEA8CF0ABEECD939376C0229E9C392E3A9833BA5C (U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0* __this, TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* ___x0, const RuntimeMethod* method) 
{
	{
		TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TokenQuantity_get_TokenName_mF332A5FEA9CC65C10CFEB63D7F05A7E441F5E9D1_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Solana.Unity.Extensions.TokenWallet/<>c::<TokenAccounts>b__27_0(Solana.Unity.Extensions.TokenWalletAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CTokenAccountsU3Eb__27_0_m699E4B4B3A9DE97A026D8769A4EE5CAC2F44776E (U3CU3Ec_t847FD5FBF9FAA91B2E1427A0331C51B4B07F4FB0* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___x0, const RuntimeMethod* method) 
{
	{
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TokenQuantity_get_TokenName_mF332A5FEA9CC65C10CFEB63D7F05A7E441F5E9D1_inline(L_0, NULL);
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
// System.Void Solana.Unity.Extensions.TokenWallet/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mB02D5B387EE76ADE3AF2900BB2E5A1A140D5BC31 (U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Solana.Unity.Extensions.TokenWallet/<>c__DisplayClass32_0::<IsSubAccount>b__0(Solana.Unity.Rpc.Models.TokenAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass32_0_U3CIsSubAccountU3Eb__0_m0A67FAE8E7E1F9D7AAF5B85FB7858B852C6778C9 (U3CU3Ec__DisplayClass32_0_t684AAA811A8DF3F3FBB721289558291E2C56DF75* __this, TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* ___x0, const RuntimeMethod* method) 
{
	{
		TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TokenAccount_get_PublicKey_mA307152D18933F83868F1AB250842C4F1094906A_inline(L_0, NULL);
		String_t* L_2 = __this->___pubkey_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Void Solana.Unity.Extensions.TokenWallet/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mC4AF3429EF955C4E130EB727544B37A0DDE0D74F (U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Solana.Unity.Extensions.TokenWallet/<>c__DisplayClass33_0::<IsSubAccount>b__0(Solana.Unity.Rpc.Models.TokenAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass33_0_U3CIsSubAccountU3Eb__0_m3F54E129D7FEFC92F83BDD79ACBB5540406C7854 (U3CU3Ec__DisplayClass33_0_tF614D5DFAC30BD96DDE5A4E09616D4911A4B4ED9* __this, TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* ___x0, const RuntimeMethod* method) 
{
	{
		TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TokenAccount_get_PublicKey_mA307152D18933F83868F1AB250842C4F1094906A_inline(L_0, NULL);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_2 = __this->___pubkey_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = PublicKey_get_Key_m79CC023D2647AF8AA202154B26514999B7E0F7B1(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_3, NULL);
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
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__21_MoveNext_m85702CA5813D757F453ED3CBD8E0CD322FBDBF98 (U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_m869A0BFE7217EB2543211FAC85AA1975E28AE50C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* V_1 = NULL;
	TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_005b_1;
			}
		}
		{
			RuntimeObject* L_2 = __this->___client_2;
			RuntimeObject* L_3 = __this->___mintResolver_3;
			String_t* L_4 = __this->___publicKey_4;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_5 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_5, L_4, NULL);
			int32_t L_6 = __this->___commitment_5;
			Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* L_7;
			L_7 = TokenWallet_LoadAsync_m66FA284883479D3FA71872C171FB2530672309BD(L_2, L_3, L_5, L_6, NULL);
			NullCheck(L_7);
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 L_8;
			L_8 = Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970(L_7, Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970_RuntimeMethod_var);
			V_2 = L_8;
			bool L_9;
			L_9 = TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D((&V_2), TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0077_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 L_11 = V_2;
			__this->___U3CU3Eu__1_6 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_12 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_m869A0BFE7217EB2543211FAC85AA1975E28AE50C(L_12, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3_m869A0BFE7217EB2543211FAC85AA1975E28AE50C_RuntimeMethod_var);
			goto IL_00ac;
		}

IL_005b_1:
		{
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 L_13 = __this->___U3CU3Eu__1_6;
			V_2 = L_13;
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4* L_14 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_0077_1:
		{
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_16;
			L_16 = TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4((&V_2), TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4_RuntimeMethod_var);
			V_1 = L_16;
			goto IL_0098;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0081;
		}
		throw e;
	}

CATCH_0081:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_17 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_18 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m9C3587FE2AD11DAECA18672DE5C1387BFF5C85EF(L_17, L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m9C3587FE2AD11DAECA18672DE5C1387BFF5C85EF_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ac;
	}// end catch (depth: 1)

IL_0098:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_19 = (&__this->___U3CU3Et__builder_1);
		TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_20 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A(L_19, L_20, AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A_RuntimeMethod_var);
	}

IL_00ac:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__21_MoveNext_m85702CA5813D757F453ED3CBD8E0CD322FBDBF98_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3*>(__this + _offset);
	U3CLoadAsyncU3Ed__21_MoveNext_m85702CA5813D757F453ED3CBD8E0CD322FBDBF98(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__21_SetStateMachine_mFF69358413C8B38BF3E90997922C7199D626717E (U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__21_SetStateMachine_mFF69358413C8B38BF3E90997922C7199D626717E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__21_tC609DBE0B30D3BE2CC2CC7E0DEB520EFF93FCBC3*>(__this + _offset);
	U3CLoadAsyncU3Ed__21_SetStateMachine_mFF69358413C8B38BF3E90997922C7199D626717E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__22_MoveNext_m93CD2ADBD2012093E0C057B8570CA064A8E2B887 (U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_m7E056E02E3F8AE0D87A36C6BCEB8113C5F782821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* V_1 = NULL;
	TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0060_1;
			}
		}
		{
			RuntimeObject* L_2 = __this->___client_2;
			TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* L_3 = (TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4*)il2cpp_codegen_object_new(TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			TokenWalletRpcProxy__ctor_mA34EF6D16073CA9CCF9E4799D30E6A1FF73F5621(L_3, L_2, NULL);
			RuntimeObject* L_4 = __this->___mintResolver_3;
			String_t* L_5 = __this->___publicKey_4;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_6 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_6, L_5, NULL);
			int32_t L_7 = __this->___commitment_5;
			Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* L_8;
			L_8 = TokenWallet_LoadAsync_m66FA284883479D3FA71872C171FB2530672309BD(L_3, L_4, L_6, L_7, NULL);
			NullCheck(L_8);
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 L_9;
			L_9 = Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970(L_8, Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970_RuntimeMethod_var);
			V_2 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D((&V_2), TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 L_12 = V_2;
			__this->___U3CU3Eu__1_6 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_m7E056E02E3F8AE0D87A36C6BCEB8113C5F782821(L_13, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81_m7E056E02E3F8AE0D87A36C6BCEB8113C5F782821_RuntimeMethod_var);
			goto IL_00b1;
		}

IL_0060_1:
		{
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 L_14 = __this->___U3CU3Eu__1_6;
			V_2 = L_14;
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4* L_15 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_007c_1:
		{
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_17;
			L_17 = TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4((&V_2), TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4_RuntimeMethod_var);
			V_1 = L_17;
			goto IL_009d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		throw e;
	}

CATCH_0086:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_18 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m9C3587FE2AD11DAECA18672DE5C1387BFF5C85EF(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m9C3587FE2AD11DAECA18672DE5C1387BFF5C85EF_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	}// end catch (depth: 1)

IL_009d:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_20 = (&__this->___U3CU3Et__builder_1);
		TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_21 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A(L_20, L_21, AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A_RuntimeMethod_var);
	}

IL_00b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__22_MoveNext_m93CD2ADBD2012093E0C057B8570CA064A8E2B887_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81*>(__this + _offset);
	U3CLoadAsyncU3Ed__22_MoveNext_m93CD2ADBD2012093E0C057B8570CA064A8E2B887(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__22_SetStateMachine_m602137964947B38C62542F20467175784C54B0E2 (U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__22_SetStateMachine_m602137964947B38C62542F20467175784C54B0E2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__22_t5A7B5B77CF1A5EB3455DF4389CC5F0FCF0E89B81*>(__this + _offset);
	U3CLoadAsyncU3Ed__22_SetStateMachine_m602137964947B38C62542F20467175784C54B0E2(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__23_MoveNext_m907B8335A491EAE039FB50CB12A9A9D0DD9B9D5C (U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m3D8A1725C8A753B3E725A83FA2332D1611A54FC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* V_1 = NULL;
	TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_005b_1;
			}
		}
		{
			RuntimeObject* L_2 = __this->___client_2;
			TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* L_3 = (TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4*)il2cpp_codegen_object_new(TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			TokenWalletRpcProxy__ctor_mA34EF6D16073CA9CCF9E4799D30E6A1FF73F5621(L_3, L_2, NULL);
			RuntimeObject* L_4 = __this->___mintResolver_3;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_5 = __this->___publicKey_4;
			int32_t L_6 = __this->___commitment_5;
			Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* L_7;
			L_7 = TokenWallet_LoadAsync_m66FA284883479D3FA71872C171FB2530672309BD(L_3, L_4, L_5, L_6, NULL);
			NullCheck(L_7);
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 L_8;
			L_8 = Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970(L_7, Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970_RuntimeMethod_var);
			V_2 = L_8;
			bool L_9;
			L_9 = TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D((&V_2), TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0077_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 L_11 = V_2;
			__this->___U3CU3Eu__1_6 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_12 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m3D8A1725C8A753B3E725A83FA2332D1611A54FC1(L_12, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A_m3D8A1725C8A753B3E725A83FA2332D1611A54FC1_RuntimeMethod_var);
			goto IL_00ac;
		}

IL_005b_1:
		{
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 L_13 = __this->___U3CU3Eu__1_6;
			V_2 = L_13;
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4* L_14 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_0077_1:
		{
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_16;
			L_16 = TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4((&V_2), TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4_RuntimeMethod_var);
			V_1 = L_16;
			goto IL_0098;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0081;
		}
		throw e;
	}

CATCH_0081:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_17 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_18 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m9C3587FE2AD11DAECA18672DE5C1387BFF5C85EF(L_17, L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m9C3587FE2AD11DAECA18672DE5C1387BFF5C85EF_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ac;
	}// end catch (depth: 1)

IL_0098:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_19 = (&__this->___U3CU3Et__builder_1);
		TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_20 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A(L_19, L_20, AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A_RuntimeMethod_var);
	}

IL_00ac:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__23_MoveNext_m907B8335A491EAE039FB50CB12A9A9D0DD9B9D5C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A*>(__this + _offset);
	U3CLoadAsyncU3Ed__23_MoveNext_m907B8335A491EAE039FB50CB12A9A9D0DD9B9D5C(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__23_SetStateMachine_mE4E2D38CF966BF583976AEDCED7F260EC9CE279D (U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__23_SetStateMachine_mE4E2D38CF966BF583976AEDCED7F260EC9CE279D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__23_tEC4A5A3CFDBD4475B82F93E18CD8BA18457B998A*>(__this + _offset);
	U3CLoadAsyncU3Ed__23_SetStateMachine_mE4E2D38CF966BF583976AEDCED7F260EC9CE279D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__24_MoveNext_m9FF1B50F6B5011F2B894DAF56E965D1E5ED03B39 (U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_mA4BEC34AE8334D70BC2BC4E56D8EE0BFAB466016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00c1_1;
			}
		}
		{
			RuntimeObject* L_2 = __this->___client_2;
			if (L_2)
			{
				goto IL_0020_1;
			}
		}
		{
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			NullCheck(L_3);
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsyncU3Ed__24_MoveNext_m9FF1B50F6B5011F2B894DAF56E965D1E5ED03B39_RuntimeMethod_var)));
		}

IL_0020_1:
		{
			RuntimeObject* L_4 = __this->___mintResolver_3;
			if (L_4)
			{
				goto IL_0033_1;
			}
		}
		{
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			NullCheck(L_5);
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral854AD188B8CB26C997E496F2E25773B38557472E)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsyncU3Ed__24_MoveNext_m9FF1B50F6B5011F2B894DAF56E965D1E5ED03B39_RuntimeMethod_var)));
		}

IL_0033_1:
		{
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_6 = __this->___publicKey_4;
			il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			bool L_7;
			L_7 = PublicKey_op_Equality_m0AA9C9DFE5518A02C138793CDC1394B872C92CF9(L_6, (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)NULL, NULL);
			if (!L_7)
			{
				goto IL_004c_1;
			}
		}
		{
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_8 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			NullCheck(L_8);
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55E33AEC810D7C6A9309168416814B8AB9759431)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsyncU3Ed__24_MoveNext_m9FF1B50F6B5011F2B894DAF56E965D1E5ED03B39_RuntimeMethod_var)));
		}

IL_004c_1:
		{
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_9 = __this->___publicKey_4;
			NullCheck(L_9);
			bool L_10;
			L_10 = PublicKey_IsOnCurve_mBF12BA49AEF38386A854D99A2E7893FD06496E5A(L_9, NULL);
			if (L_10)
			{
				goto IL_0064_1;
			}
		}
		{
			ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
			NullCheck(L_11);
			ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CFDCF6804A75071AE7AEFDDDC03F87387C8A5F2)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsyncU3Ed__24_MoveNext_m9FF1B50F6B5011F2B894DAF56E965D1E5ED03B39_RuntimeMethod_var)));
		}

IL_0064_1:
		{
			RuntimeObject* L_12 = __this->___client_2;
			RuntimeObject* L_13 = __this->___mintResolver_3;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_14 = __this->___publicKey_4;
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_15 = (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F*)il2cpp_codegen_object_new(TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F_il2cpp_TypeInfo_var);
			NullCheck(L_15);
			TokenWallet__ctor_mBEEE4D25F598B07CF74BBBEBDF66C63166B70314(L_15, L_12, L_13, L_14, NULL);
			__this->___U3CoutputU3E5__2_6 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutputU3E5__2_6), (void*)L_15);
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_16 = __this->___U3CoutputU3E5__2_6;
			int32_t L_17 = __this->___commitment_5;
			NullCheck(L_16);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_18;
			L_18 = TokenWallet_RefreshAsync_mB9689382781E071BE9C2AE656A8287F71851806D(L_16, L_17, NULL);
			NullCheck(L_18);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_19;
			L_19 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_18, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_19;
			bool L_20;
			L_20 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_00dd_1;
			}
		}
		{
			int32_t L_21 = 0;
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_22 = V_2;
			__this->___U3CU3Eu__1_7 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_23 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_mA4BEC34AE8334D70BC2BC4E56D8EE0BFAB466016(L_23, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA_mA4BEC34AE8334D70BC2BC4E56D8EE0BFAB466016_RuntimeMethod_var);
			goto IL_0127;
		}

IL_00c1_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_24 = __this->___U3CU3Eu__1_7;
			V_2 = L_24;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_25 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
		}

IL_00dd_1:
		{
			bool L_27;
			L_27 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_28 = __this->___U3CoutputU3E5__2_6;
			V_1 = L_28;
			goto IL_010c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ee;
		}
		throw e;
	}

CATCH_00ee:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CoutputU3E5__2_6 = (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutputU3E5__2_6), (void*)(TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F*)NULL);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_29 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_30 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m9C3587FE2AD11DAECA18672DE5C1387BFF5C85EF(L_29, L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m9C3587FE2AD11DAECA18672DE5C1387BFF5C85EF_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0127;
	}// end catch (depth: 1)

IL_010c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CoutputU3E5__2_6 = (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutputU3E5__2_6), (void*)(TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F*)NULL);
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_31 = (&__this->___U3CU3Et__builder_1);
		TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_32 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A(L_31, L_32, AsyncTaskMethodBuilder_1_SetResult_m27AD99FDE4FAADC0A27DAA97C7BDBBC51BD5288A_RuntimeMethod_var);
	}

IL_0127:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__24_MoveNext_m9FF1B50F6B5011F2B894DAF56E965D1E5ED03B39_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA*>(__this + _offset);
	U3CLoadAsyncU3Ed__24_MoveNext_m9FF1B50F6B5011F2B894DAF56E965D1E5ED03B39(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<LoadAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__24_SetStateMachine_mC8202D914E02CF28A1AD4F05300242E1C23F270F (U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tD85C023F4F81C18A05881CE98FA9EEE5CF4C00A9* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m09EF92B8F88086E78E5942CAD67DF91F5074769E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__24_SetStateMachine_mC8202D914E02CF28A1AD4F05300242E1C23F270F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__24_tD59D51304F1C92A1D0AD99AD5705A6634810D2FA*>(__this + _offset);
	U3CLoadAsyncU3Ed__24_SetStateMachine_mC8202D914E02CF28A1AD4F05300242E1C23F270F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshAsyncU3Ed__25_MoveNext_m8F13C69DA0384E7B18A0EF2F3B706917878E79B7 (U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_m3446294B9B5D2D0BAAC6726974C0E35FFE1388AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_mF7AF3023A3B2B65C340511A54434D2917867E505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenWalletRpcProxy_t666D02A5DF7DD0D88A08DCC64606A1ABCCD82C2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_Result_m778909233587BBFF9A67EE973BAFA34E3C286034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_Result_m7BAECB2E70159C4BA91EF9D38742F31D764E1470_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_WasSuccessful_m4E651DCE974BC81765CB2AB4516B5DC5E614D785_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_WasSuccessful_m6566B78C4F6941509C8682E4804934D0FD22E199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseValue_1_get_Value_m6FB8CBBB37A0CD1D031E09EC1084703D7FBAA05D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseValue_1_get_Value_mDE4FA4A5E7A249541D4C381297887EE275738698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m2B9D52C4A03B1CDBABC19ED365A2CA0C39FC37AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mEC6245D3C905529969065AE79EC039C09C777356_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m5A1C8CE07E6CCFD772FAAF407939C198772F7532_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m73E78CD498272FF708F048856F7E06736CC3DED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2C907EACD6FBC51FC6DB62B5861C9565B5B2A151_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m858B8A79A1D9BEDD8237BD7051CB8A2D2B215651_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenProgram_tAC7AD56BE92E3D7F5BB55E7C8F018DB308607424_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* V_1 = NULL;
	bool V_2 = false;
	RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* V_3 = NULL;
	RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* V_4 = NULL;
	TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 V_5;
	memset((&V_5), 0, sizeof(V_5));
	TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_1 = __this->___U3CU3E4__this_2;
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
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00f1_1;
			}
		}
		{
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = TokenWallet_get_RpcClient_m1420AD42AD614E4FDA38B76146155ACBD414B7E8_inline(L_4, NULL);
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_6 = V_1;
			NullCheck(L_6);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_7;
			L_7 = TokenWallet_get_PublicKey_m0AB262A3C3ABDD5672BA0D3027A99F295DE19EF7_inline(L_6, NULL);
			NullCheck(L_7);
			String_t* L_8;
			L_8 = PublicKey_get_Key_m79CC023D2647AF8AA202154B26514999B7E0F7B1(L_7, NULL);
			int32_t L_9 = __this->___commitment_3;
			NullCheck(L_5);
			Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4* L_10;
			L_10 = InterfaceFuncInvoker2< Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4*, String_t*, int32_t >::Invoke(0 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>> Solana.Unity.Extensions.ITokenWalletRpcProxy::GetBalanceAsync(System.String,Solana.Unity.Rpc.Types.Commitment) */, ITokenWalletRpcProxy_t666D02A5DF7DD0D88A08DCC64606A1ABCCD82C2B_il2cpp_TypeInfo_var, L_5, L_8, L_9);
			NullCheck(L_10);
			TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 L_11;
			L_11 = Task_1_GetAwaiter_m858B8A79A1D9BEDD8237BD7051CB8A2D2B215651(L_10, Task_1_GetAwaiter_m858B8A79A1D9BEDD8237BD7051CB8A2D2B215651_RuntimeMethod_var);
			V_5 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_1_get_IsCompleted_m73E78CD498272FF708F048856F7E06736CC3DED7((&V_5), TaskAwaiter_1_get_IsCompleted_m73E78CD498272FF708F048856F7E06736CC3DED7_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0085_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 L_14 = V_5;
			__this->___U3CU3Eu__1_5 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_m3446294B9B5D2D0BAAC6726974C0E35FFE1388AD(L_15, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_m3446294B9B5D2D0BAAC6726974C0E35FFE1388AD_RuntimeMethod_var);
			goto IL_01c8;
		}

IL_0068_1:
		{
			TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 L_16 = __this->___U3CU3Eu__1_5;
			V_5 = L_16;
			TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9* L_17 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0085_1:
		{
			RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* L_19;
			L_19 = TaskAwaiter_1_GetResult_mEC6245D3C905529969065AE79EC039C09C777356((&V_5), TaskAwaiter_1_GetResult_mEC6245D3C905529969065AE79EC039C09C777356_RuntimeMethod_var);
			V_4 = L_19;
			RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* L_20 = V_4;
			__this->___U3CbalanceU3E5__2_4 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbalanceU3E5__2_4), (void*)L_20);
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_21 = V_1;
			NullCheck(L_21);
			RuntimeObject* L_22;
			L_22 = TokenWallet_get_RpcClient_m1420AD42AD614E4FDA38B76146155ACBD414B7E8_inline(L_21, NULL);
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_23 = V_1;
			NullCheck(L_23);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_24;
			L_24 = TokenWallet_get_PublicKey_m0AB262A3C3ABDD5672BA0D3027A99F295DE19EF7_inline(L_23, NULL);
			NullCheck(L_24);
			String_t* L_25;
			L_25 = PublicKey_get_Key_m79CC023D2647AF8AA202154B26514999B7E0F7B1(L_24, NULL);
			il2cpp_codegen_runtime_class_init_inline(TokenProgram_tAC7AD56BE92E3D7F5BB55E7C8F018DB308607424_il2cpp_TypeInfo_var);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_26 = ((TokenProgram_tAC7AD56BE92E3D7F5BB55E7C8F018DB308607424_StaticFields*)il2cpp_codegen_static_fields_for(TokenProgram_tAC7AD56BE92E3D7F5BB55E7C8F018DB308607424_il2cpp_TypeInfo_var))->___ProgramIdKey_0;
			il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			String_t* L_27;
			L_27 = PublicKey_op_Implicit_m384B7ABBC96BB94E492A1F7EDD3EA30EFCB38921(L_26, NULL);
			int32_t L_28 = __this->___commitment_3;
			NullCheck(L_22);
			Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64* L_29;
			L_29 = InterfaceFuncInvoker4< Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64*, String_t*, String_t*, String_t*, int32_t >::Invoke(1 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>> Solana.Unity.Extensions.ITokenWalletRpcProxy::GetTokenAccountsByOwnerAsync(System.String,System.String,System.String,Solana.Unity.Rpc.Types.Commitment) */, ITokenWalletRpcProxy_t666D02A5DF7DD0D88A08DCC64606A1ABCCD82C2B_il2cpp_TypeInfo_var, L_22, L_25, (String_t*)NULL, L_27, L_28);
			NullCheck(L_29);
			TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 L_30;
			L_30 = Task_1_GetAwaiter_m2C907EACD6FBC51FC6DB62B5861C9565B5B2A151(L_29, Task_1_GetAwaiter_m2C907EACD6FBC51FC6DB62B5861C9565B5B2A151_RuntimeMethod_var);
			V_6 = L_30;
			bool L_31;
			L_31 = TaskAwaiter_1_get_IsCompleted_m5A1C8CE07E6CCFD772FAAF407939C198772F7532((&V_6), TaskAwaiter_1_get_IsCompleted_m5A1C8CE07E6CCFD772FAAF407939C198772F7532_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_010e_1;
			}
		}
		{
			int32_t L_32 = 1;
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
			TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 L_33 = V_6;
			__this->___U3CU3Eu__2_6 = L_33;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_34 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_mF7AF3023A3B2B65C340511A54434D2917867E505(L_34, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324_TisU3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938_mF7AF3023A3B2B65C340511A54434D2917867E505_RuntimeMethod_var);
			goto IL_01c8;
		}

IL_00f1_1:
		{
			TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 L_35 = __this->___U3CU3Eu__2_6;
			V_6 = L_35;
			TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324* L_36 = (&__this->___U3CU3Eu__2_6);
			il2cpp_codegen_initobj(L_36, sizeof(TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324));
			int32_t L_37 = (-1);
			V_0 = L_37;
			__this->___U3CU3E1__state_0 = L_37;
		}

IL_010e_1:
		{
			RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* L_38;
			L_38 = TaskAwaiter_1_GetResult_m2B9D52C4A03B1CDBABC19ED365A2CA0C39FC37AD((&V_6), TaskAwaiter_1_GetResult_m2B9D52C4A03B1CDBABC19ED365A2CA0C39FC37AD_RuntimeMethod_var);
			V_3 = L_38;
			RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* L_39 = __this->___U3CbalanceU3E5__2_4;
			NullCheck(L_39);
			bool L_40;
			L_40 = RequestResult_1_get_WasSuccessful_m4E651DCE974BC81765CB2AB4516B5DC5E614D785(L_39, RequestResult_1_get_WasSuccessful_m4E651DCE974BC81765CB2AB4516B5DC5E614D785_RuntimeMethod_var);
			if (!L_40)
			{
				goto IL_013b_1;
			}
		}
		{
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_41 = V_1;
			RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* L_42 = __this->___U3CbalanceU3E5__2_4;
			NullCheck(L_42);
			ResponseValue_1_t0BCADF3E5348490F730192C8C7282EFED595AB57* L_43;
			L_43 = RequestResult_1_get_Result_m7BAECB2E70159C4BA91EF9D38742F31D764E1470_inline(L_42, RequestResult_1_get_Result_m7BAECB2E70159C4BA91EF9D38742F31D764E1470_RuntimeMethod_var);
			NullCheck(L_43);
			uint64_t L_44;
			L_44 = ResponseValue_1_get_Value_m6FB8CBBB37A0CD1D031E09EC1084703D7FBAA05D_inline(L_43, ResponseValue_1_get_Value_m6FB8CBBB37A0CD1D031E09EC1084703D7FBAA05D_RuntimeMethod_var);
			NullCheck(L_41);
			TokenWallet_set_Lamports_m83A69FE8E9EFE449622D5492E3130BBA17057CAC_inline(L_41, L_44, NULL);
			goto IL_0157_1;
		}

IL_013b_1:
		{
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_45 = V_1;
			NullCheck(L_45);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_46;
			L_46 = TokenWallet_get_PublicKey_m0AB262A3C3ABDD5672BA0D3027A99F295DE19EF7_inline(L_45, NULL);
			String_t* L_47;
			L_47 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7EB46C626C10B81C0CE6C68B439A6EEA26086E9)), L_46, NULL);
			RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* L_48 = __this->___U3CbalanceU3E5__2_4;
			TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6* L_49 = (TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6_il2cpp_TypeInfo_var)));
			NullCheck(L_49);
			TokenWalletException__ctor_m7EA8597E73402E7FED02B1BC05AD0F54589F9BE7(L_49, L_47, L_48, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRefreshAsyncU3Ed__25_MoveNext_m8F13C69DA0384E7B18A0EF2F3B706917878E79B7_RuntimeMethod_var)));
		}

IL_0157_1:
		{
			RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* L_50 = V_3;
			NullCheck(L_50);
			bool L_51;
			L_51 = RequestResult_1_get_WasSuccessful_m6566B78C4F6941509C8682E4804934D0FD22E199(L_50, RequestResult_1_get_WasSuccessful_m6566B78C4F6941509C8682E4804934D0FD22E199_RuntimeMethod_var);
			if (!L_51)
			{
				goto IL_0172_1;
			}
		}
		{
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_52 = V_1;
			RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* L_53 = V_3;
			NullCheck(L_53);
			ResponseValue_1_tA9E11CD10D2ECAD8D2FC880998215523D5EA385C* L_54;
			L_54 = RequestResult_1_get_Result_m778909233587BBFF9A67EE973BAFA34E3C286034_inline(L_53, RequestResult_1_get_Result_m778909233587BBFF9A67EE973BAFA34E3C286034_RuntimeMethod_var);
			NullCheck(L_54);
			List_1_t2E70D0A7BDF7A3087A90BB599FA9AA13BFB27C73* L_55;
			L_55 = ResponseValue_1_get_Value_mDE4FA4A5E7A249541D4C381297887EE275738698_inline(L_54, ResponseValue_1_get_Value_mDE4FA4A5E7A249541D4C381297887EE275738698_RuntimeMethod_var);
			NullCheck(L_52);
			L_52->____tokenAccounts_5 = L_55;
			Il2CppCodeGenWriteBarrier((void**)(&L_52->____tokenAccounts_5), (void*)L_55);
			goto IL_0189_1;
		}

IL_0172_1:
		{
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_56 = V_1;
			NullCheck(L_56);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_57;
			L_57 = TokenWallet_get_PublicKey_m0AB262A3C3ABDD5672BA0D3027A99F295DE19EF7_inline(L_56, NULL);
			String_t* L_58;
			L_58 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4497D5B032416AF0F9973056CD13F2030ACA599D)), L_57, NULL);
			RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* L_59 = V_3;
			TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6* L_60 = (TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6_il2cpp_TypeInfo_var)));
			NullCheck(L_60);
			TokenWalletException__ctor_m7EA8597E73402E7FED02B1BC05AD0F54589F9BE7(L_60, L_58, L_59, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRefreshAsyncU3Ed__25_MoveNext_m8F13C69DA0384E7B18A0EF2F3B706917878E79B7_RuntimeMethod_var)));
		}

IL_0189_1:
		{
			V_2 = (bool)1;
			goto IL_01ad;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_018d;
		}
		throw e;
	}

CATCH_018d:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CbalanceU3E5__2_4 = (RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbalanceU3E5__2_4), (void*)(RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_61 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_62 = V_7;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_61, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01c8;
	}// end catch (depth: 1)

IL_01ad:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CbalanceU3E5__2_4 = (RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbalanceU3E5__2_4), (void*)(RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_63 = (&__this->___U3CU3Et__builder_1);
		bool L_64 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_63, L_64, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_01c8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRefreshAsyncU3Ed__25_MoveNext_m8F13C69DA0384E7B18A0EF2F3B706917878E79B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938*>(__this + _offset);
	U3CRefreshAsyncU3Ed__25_MoveNext_m8F13C69DA0384E7B18A0EF2F3B706917878E79B7(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<RefreshAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshAsyncU3Ed__25_SetStateMachine_mE5E627227B859887AD46648833AA707697614EC4 (U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRefreshAsyncU3Ed__25_SetStateMachine_mE5E627227B859887AD46648833AA707697614EC4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRefreshAsyncU3Ed__25_t4FACD7EB29FC606A7C087D16EEE69C0A49F3C938*>(__this + _offset);
	U3CRefreshAsyncU3Ed__25_SetStateMachine_mE5E627227B859887AD46648833AA707697614EC4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__28_MoveNext_m4918942936EFE5411A28BE9FB03B5393E41D2AA3 (U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_m79C526D57EEDC9A7E91E08B04B6225285405D252_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* V_1 = NULL;
	RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* V_2 = NULL;
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0069_1;
			}
		}
		{
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_3 = V_1;
			TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_4 = __this->___source_3;
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = __this->___amount_4;
			String_t* L_6 = __this->___destination_5;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_7 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_7, L_6, NULL);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_8 = __this->___feePayer_6;
			Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52* L_9 = __this->___signTxCallback_7;
			NullCheck(L_3);
			Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_10;
			L_10 = TokenWallet_SendAsync_m507549592DFDACF09FDD6A24930059EEEBA58701(L_3, L_4, L_5, L_7, L_8, L_9, NULL);
			NullCheck(L_10);
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_11;
			L_11 = Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988(L_10, Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var);
			V_3 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C((&V_3), TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0085_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_14 = V_3;
			__this->___U3CU3Eu__1_8 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_m79C526D57EEDC9A7E91E08B04B6225285405D252(L_15, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636_m79C526D57EEDC9A7E91E08B04B6225285405D252_RuntimeMethod_var);
			goto IL_00bc;
		}

IL_0069_1:
		{
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_16 = __this->___U3CU3Eu__1_8;
			V_3 = L_16;
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* L_17 = (&__this->___U3CU3Eu__1_8);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0085_1:
		{
			RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* L_19;
			L_19 = TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919((&V_3), TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var);
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
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_4;
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
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__28_MoveNext_m4918942936EFE5411A28BE9FB03B5393E41D2AA3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636*>(__this + _offset);
	U3CSendAsyncU3Ed__28_MoveNext_m4918942936EFE5411A28BE9FB03B5393E41D2AA3(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<SendAsync>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__28_SetStateMachine_mBDB7CFD1E00A081827BD45E93DDD6A294C5C9648 (U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__28_SetStateMachine_mBDB7CFD1E00A081827BD45E93DDD6A294C5C9648_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__28_t60F93475E1FF0C9DE6AB6FD0EAFEB0836F2E6636*>(__this + _offset);
	U3CSendAsyncU3Ed__28_SetStateMachine_mBDB7CFD1E00A081827BD45E93DDD6A294C5C9648(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986 (U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m961BD19A877E5B9C0D2752A41A80E5155DFACAD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m70310DC158811CE55E4A49FA9ED677ABDBA67858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m936071E2AC6D1AAEBCB5BCD5E5E1222075E8BED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenMintResolver_tD4AC0E8E0E0873DB93173BE6B73AB7BFECC5FDBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenWalletRpcProxy_t666D02A5DF7DD0D88A08DCC64606A1ABCCD82C2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_Result_m98EBAFB5D6691E3A96E672636A1B270E231A500D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseValue_1_get_Value_m6C9351679C717202CFC83FABDC35E2BFCDEF044E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA4FDB67254A98EACB7127BECA43B2AA26F6F1893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m485AF7F64784968FFBB292516F59B5246C1A5791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mBA03D0B38E519B0F47180DC732F22247E6CDFBA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenProgram_tAC7AD56BE92E3D7F5BB55E7C8F018DB308607424_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* V_1 = NULL;
	RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* V_2 = NULL;
	RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672* V_3 = NULL;
	TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* V_4 = NULL;
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* V_5 = NULL;
	uint64_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* V_8 = NULL;
	TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 V_9;
	memset((&V_9), 0, sizeof(V_9));
	TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 V_10;
	memset((&V_10), 0, sizeof(V_10));
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_1 = __this->___U3CU3E4__this_6;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0146_1;
				}
				case 1:
				{
					goto IL_01b4_1;
				}
				case 2:
				{
					goto IL_02da_1;
				}
			}
		}
		{
			TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_3 = __this->___source_2;
			if (L_3)
			{
				goto IL_0033_1;
			}
		}
		{
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			NullCheck(L_4);
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986_RuntimeMethod_var)));
		}

IL_0033_1:
		{
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_5 = __this->___destination_3;
			il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = PublicKey_op_Equality_m0AA9C9DFE5518A02C138793CDC1394B872C92CF9(L_5, (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)NULL, NULL);
			if (!L_6)
			{
				goto IL_004c_1;
			}
		}
		{
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			NullCheck(L_7);
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986_RuntimeMethod_var)));
		}

IL_004c_1:
		{
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_8 = __this->___feePayer_4;
			il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			bool L_9;
			L_9 = PublicKey_op_Equality_m0AA9C9DFE5518A02C138793CDC1394B872C92CF9(L_8, (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)NULL, NULL);
			if (!L_9)
			{
				goto IL_0065_1;
			}
		}
		{
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_10 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			NullCheck(L_10);
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4D9B9FBB2F76DB2392E4A041FB58F23E00288A3)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986_RuntimeMethod_var)));
		}

IL_0065_1:
		{
			Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52* L_11 = __this->___signTxCallback_5;
			if (L_11)
			{
				goto IL_0078_1;
			}
		}
		{
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_12 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			NullCheck(L_12);
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A00D9F3CB2E5AA005A039F73FB608EB87D3C93)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986_RuntimeMethod_var)));
		}

IL_0078_1:
		{
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_13 = __this->___destination_3;
			NullCheck(L_13);
			bool L_14;
			L_14 = PublicKey_IsOnCurve_mBF12BA49AEF38386A854D99A2E7893FD06496E5A(L_13, NULL);
			if (L_14)
			{
				goto IL_00a5_1;
			}
		}
		{
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_15 = __this->___destination_3;
			NullCheck(L_15);
			String_t* L_16;
			L_16 = PublicKey_get_Key_m79CC023D2647AF8AA202154B26514999B7E0F7B1(L_15, NULL);
			String_t* L_17;
			L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral024A46E3FEBCDB951A077E7169AB10F7B499AA5B)), L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4D7D11D649D29CC5B3AE0F2EB6A9329A98B31C0)), NULL);
			ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
			NullCheck(L_18);
			ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986_RuntimeMethod_var)));
		}

IL_00a5_1:
		{
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_19 = __this->___feePayer_4;
			NullCheck(L_19);
			bool L_20;
			L_20 = PublicKey_IsOnCurve_mBF12BA49AEF38386A854D99A2E7893FD06496E5A(L_19, NULL);
			if (L_20)
			{
				goto IL_00d2_1;
			}
		}
		{
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_21 = __this->___feePayer_4;
			NullCheck(L_21);
			String_t* L_22;
			L_22 = PublicKey_get_Key_m79CC023D2647AF8AA202154B26514999B7E0F7B1(L_21, NULL);
			String_t* L_23;
			L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DCC3FBCEF7946127620E5F35DA4B0133CD6C169)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4D7D11D649D29CC5B3AE0F2EB6A9329A98B31C0)), NULL);
			ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_24 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
			NullCheck(L_24);
			ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_24, L_23, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986_RuntimeMethod_var)));
		}

IL_00d2_1:
		{
			TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_25 = __this->___source_2;
			NullCheck(L_25);
			String_t* L_26;
			L_26 = TokenWalletAccount_get_Owner_m90D07C2E6FE1CB65204DA7B0245D8004A73A78B0_inline(L_25, NULL);
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_27 = V_1;
			NullCheck(L_27);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_28;
			L_28 = TokenWallet_get_PublicKey_m0AB262A3C3ABDD5672BA0D3027A99F295DE19EF7_inline(L_27, NULL);
			il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			String_t* L_29;
			L_29 = PublicKey_op_Implicit_m384B7ABBC96BB94E492A1F7EDD3EA30EFCB38921(L_28, NULL);
			bool L_30;
			L_30 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_26, L_29, NULL);
			if (!L_30)
			{
				goto IL_00fa_1;
			}
		}
		{
			ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_31 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
			NullCheck(L_31);
			ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62AA8ACC3DF0550D8FE15D5AACAC775AC45B8D81)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986_RuntimeMethod_var)));
		}

IL_00fa_1:
		{
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_32 = V_1;
			NullCheck(L_32);
			RuntimeObject* L_33;
			L_33 = TokenWallet_get_RpcClient_m1420AD42AD614E4FDA38B76146155ACBD414B7E8_inline(L_32, NULL);
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_34 = V_1;
			NullCheck(L_34);
			RuntimeObject* L_35;
			L_35 = TokenWallet_get_MintResolver_m789A9FEB1CBA4C99F485FC07C5CAF1C576A1E458_inline(L_34, NULL);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_36 = __this->___destination_3;
			Task_1_t1F566A3EC1374893A55623DB5CEE27E9C82D5F5E* L_37;
			L_37 = TokenWallet_LoadAsync_m66FA284883479D3FA71872C171FB2530672309BD(L_33, L_35, L_36, 0, NULL);
			NullCheck(L_37);
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 L_38;
			L_38 = Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970(L_37, Task_1_GetAwaiter_mBF7C77D80F06DF17983A1D387B46A34855120970_RuntimeMethod_var);
			V_9 = L_38;
			bool L_39;
			L_39 = TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D((&V_9), TaskAwaiter_1_get_IsCompleted_m593EB64A6AB1A3B8CAA29F35A49C7405C9D39A9D_RuntimeMethod_var);
			if (L_39)
			{
				goto IL_0163_1;
			}
		}
		{
			int32_t L_40 = 0;
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 L_41 = V_9;
			__this->___U3CU3Eu__1_9 = L_41;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_42 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m936071E2AC6D1AAEBCB5BCD5E5E1222075E8BED9(L_42, (&V_9), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m936071E2AC6D1AAEBCB5BCD5E5E1222075E8BED9_RuntimeMethod_var);
			goto IL_033c;
		}

IL_0146_1:
		{
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4 L_43 = __this->___U3CU3Eu__1_9;
			V_9 = L_43;
			TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4* L_44 = (&__this->___U3CU3Eu__1_9);
			il2cpp_codegen_initobj(L_44, sizeof(TaskAwaiter_1_t7EF1C5083199B432311B45209227C6A6870794C4));
			int32_t L_45 = (-1);
			V_0 = L_45;
			__this->___U3CU3E1__state_0 = L_45;
		}

IL_0163_1:
		{
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_46;
			L_46 = TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4((&V_9), TaskAwaiter_1_GetResult_m26FD274549AFB26063607C8412C7568DB02172A4_RuntimeMethod_var);
			V_8 = L_46;
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_47 = V_8;
			__this->___U3CdestWalletU3E5__2_8 = L_47;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestWalletU3E5__2_8), (void*)L_47);
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_48 = V_1;
			NullCheck(L_48);
			RuntimeObject* L_49;
			L_49 = TokenWallet_get_RpcClient_m1420AD42AD614E4FDA38B76146155ACBD414B7E8_inline(L_48, NULL);
			NullCheck(L_49);
			Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9* L_50;
			L_50 = InterfaceFuncInvoker1< Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9*, int32_t >::Invoke(2 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>> Solana.Unity.Extensions.ITokenWalletRpcProxy::GetRecentBlockHashAsync(Solana.Unity.Rpc.Types.Commitment) */, ITokenWalletRpcProxy_t666D02A5DF7DD0D88A08DCC64606A1ABCCD82C2B_il2cpp_TypeInfo_var, L_49, 0);
			NullCheck(L_50);
			TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 L_51;
			L_51 = Task_1_GetAwaiter_mBA03D0B38E519B0F47180DC732F22247E6CDFBA2(L_50, Task_1_GetAwaiter_mBA03D0B38E519B0F47180DC732F22247E6CDFBA2_RuntimeMethod_var);
			V_10 = L_51;
			bool L_52;
			L_52 = TaskAwaiter_1_get_IsCompleted_m485AF7F64784968FFBB292516F59B5246C1A5791((&V_10), TaskAwaiter_1_get_IsCompleted_m485AF7F64784968FFBB292516F59B5246C1A5791_RuntimeMethod_var);
			if (L_52)
			{
				goto IL_01d1_1;
			}
		}
		{
			int32_t L_53 = 1;
			V_0 = L_53;
			__this->___U3CU3E1__state_0 = L_53;
			TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 L_54 = V_10;
			__this->___U3CU3Eu__2_10 = L_54;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_10))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_55 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m70310DC158811CE55E4A49FA9ED677ABDBA67858(L_55, (&V_10), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m70310DC158811CE55E4A49FA9ED677ABDBA67858_RuntimeMethod_var);
			goto IL_033c;
		}

IL_01b4_1:
		{
			TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 L_56 = __this->___U3CU3Eu__2_10;
			V_10 = L_56;
			TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385* L_57 = (&__this->___U3CU3Eu__2_10);
			il2cpp_codegen_initobj(L_57, sizeof(TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385));
			int32_t L_58 = (-1);
			V_0 = L_58;
			__this->___U3CU3E1__state_0 = L_58;
		}

IL_01d1_1:
		{
			RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672* L_59;
			L_59 = TaskAwaiter_1_GetResult_mA4FDB67254A98EACB7127BECA43B2AA26F6F1893((&V_10), TaskAwaiter_1_GetResult_mA4FDB67254A98EACB7127BECA43B2AA26F6F1893_RuntimeMethod_var);
			V_3 = L_59;
			TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* L_60 = (TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4*)il2cpp_codegen_object_new(TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4_il2cpp_TypeInfo_var);
			NullCheck(L_60);
			TransactionBuilder__ctor_m0B3F1BCABDCC514E09F089FADDF382793AB85906(L_60, NULL);
			V_4 = L_60;
			TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* L_61 = V_4;
			RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672* L_62 = V_3;
			NullCheck(L_62);
			ResponseValue_1_t47F8A210890E6A267CEE9183D62273224351A5B6* L_63;
			L_63 = RequestResult_1_get_Result_m98EBAFB5D6691E3A96E672636A1B270E231A500D_inline(L_62, RequestResult_1_get_Result_m98EBAFB5D6691E3A96E672636A1B270E231A500D_RuntimeMethod_var);
			NullCheck(L_63);
			BlockHash_t01BC23F321B989D27E8E37A68BCE97B3C47BD9A3* L_64;
			L_64 = ResponseValue_1_get_Value_m6C9351679C717202CFC83FABDC35E2BFCDEF044E_inline(L_63, ResponseValue_1_get_Value_m6C9351679C717202CFC83FABDC35E2BFCDEF044E_RuntimeMethod_var);
			NullCheck(L_64);
			String_t* L_65;
			L_65 = BlockHash_get_Blockhash_mB1D4C6DF7405E35706409EE52969F9842884AE54_inline(L_64, NULL);
			NullCheck(L_61);
			TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* L_66;
			L_66 = TransactionBuilder_SetRecentBlockHash_m867442395CF50EE764EF39BF869C480246E1ECC9(L_61, L_65, NULL);
			TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* L_67 = V_4;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_68 = __this->___feePayer_4;
			NullCheck(L_67);
			TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* L_69;
			L_69 = TransactionBuilder_SetFeePayer_m0667AA3756160B7FCF72EB4F44EEB1D59D0A5698(L_67, L_68, NULL);
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_70 = __this->___U3CdestWalletU3E5__2_8;
			TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* L_71 = V_4;
			TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_72 = __this->___source_2;
			NullCheck(L_72);
			String_t* L_73;
			L_73 = TokenQuantity_get_TokenMint_mA08A2767983BFE76AE187AB101E0B6EA2B87FF1E_inline(L_72, NULL);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_74 = __this->___feePayer_4;
			NullCheck(L_70);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_75;
			L_75 = TokenWallet_JitCreateAssociatedTokenAccount_m2E3443667664133120E1D1418965DD1653692407(L_70, L_71, L_73, L_74, NULL);
			V_5 = L_75;
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_76 = V_1;
			NullCheck(L_76);
			RuntimeObject* L_77;
			L_77 = TokenWallet_get_MintResolver_m789A9FEB1CBA4C99F485FC07C5CAF1C576A1E458_inline(L_76, NULL);
			TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_78 = __this->___source_2;
			NullCheck(L_78);
			String_t* L_79;
			L_79 = TokenQuantity_get_TokenMint_mA08A2767983BFE76AE187AB101E0B6EA2B87FF1E_inline(L_78, NULL);
			NullCheck(L_77);
			TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_80;
			L_80 = InterfaceFuncInvoker1< TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*, String_t* >::Invoke(0 /* Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.ITokenMintResolver::Resolve(System.String) */, ITokenMintResolver_tD4AC0E8E0E0873DB93173BE6B73AB7BFECC5FDBA_il2cpp_TypeInfo_var, L_77, L_79);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81 = __this->___amount_7;
			NullCheck(L_80);
			uint64_t L_82;
			L_82 = TokenDef_ConvertDecimalToUlong_m27A55D52FFD6AA2C7198B1A8EF4C839B9DE4FB3E(L_80, L_81, NULL);
			V_6 = L_82;
			TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* L_83 = V_4;
			TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_84 = __this->___source_2;
			NullCheck(L_84);
			String_t* L_85;
			L_85 = TokenWalletAccount_get_PublicKey_mB34F80B2E26590EFB3C70BDEFCA6055D20FBCAFA_inline(L_84, NULL);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_86 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			NullCheck(L_86);
			PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_86, L_85, NULL);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_87 = V_5;
			uint64_t L_88 = V_6;
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_89 = V_1;
			NullCheck(L_89);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_90;
			L_90 = TokenWallet_get_PublicKey_m0AB262A3C3ABDD5672BA0D3027A99F295DE19EF7_inline(L_89, NULL);
			il2cpp_codegen_runtime_class_init_inline(TokenProgram_tAC7AD56BE92E3D7F5BB55E7C8F018DB308607424_il2cpp_TypeInfo_var);
			TransactionInstruction_tB22FB70486FEC8B6AE0EFEA4DB7806A80DA4625B* L_91;
			L_91 = TokenProgram_Transfer_mA43FE836EBF72F438954E793ABEA6EC7FB1CAE07(L_86, L_87, L_88, L_90, (RuntimeObject*)NULL, NULL);
			NullCheck(L_83);
			TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* L_92;
			L_92 = TransactionBuilder_AddInstruction_m47204C5F74C6203BCF68D1965D8BB186CA148B3A(L_83, L_91, NULL);
			Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52* L_93 = __this->___signTxCallback_5;
			TransactionBuilder_t330AC2AE6F5CC5B7061C3F234AD2A438068B0AE4* L_94 = V_4;
			NullCheck(L_93);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95;
			L_95 = Func_2_Invoke_m4A9DA7332C9E18FA18F880C9523E89993878034C_inline(L_93, L_94, NULL);
			V_7 = L_95;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_7;
			if (L_96)
			{
				goto IL_029a_1;
			}
		}
		{
			Func_2_tEBECD49C51C04AC26E0F2B0C14E659E97CDBCF52* L_97 = __this->___signTxCallback_5;
			String_t* L_98;
			L_98 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBE4EDB2F1C7AD57CC7A1AB4F2C573B7B16A348B)), L_97, NULL);
			ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_99 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
			NullCheck(L_99);
			ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_99, L_98, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_99, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986_RuntimeMethod_var)));
		}

IL_029a_1:
		{
			TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* L_100 = V_1;
			NullCheck(L_100);
			RuntimeObject* L_101;
			L_101 = TokenWallet_get_RpcClient_m1420AD42AD614E4FDA38B76146155ACBD414B7E8_inline(L_100, NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = V_7;
			NullCheck(L_101);
			Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_103;
			L_103 = InterfaceFuncInvoker3< Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool, int32_t >::Invoke(3 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Extensions.ITokenWalletRpcProxy::SendTransactionAsync(System.Byte[],System.Boolean,Solana.Unity.Rpc.Types.Commitment) */, ITokenWalletRpcProxy_t666D02A5DF7DD0D88A08DCC64606A1ABCCD82C2B_il2cpp_TypeInfo_var, L_101, L_102, (bool)0, 0);
			NullCheck(L_103);
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_104;
			L_104 = Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988(L_103, Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var);
			V_11 = L_104;
			bool L_105;
			L_105 = TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C((&V_11), TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var);
			if (L_105)
			{
				goto IL_02f7_1;
			}
		}
		{
			int32_t L_106 = 2;
			V_0 = L_106;
			__this->___U3CU3E1__state_0 = L_106;
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_107 = V_11;
			__this->___U3CU3Eu__3_11 = L_107;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__3_11))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_108 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m961BD19A877E5B9C0D2752A41A80E5155DFACAD6(L_108, (&V_11), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB_m961BD19A877E5B9C0D2752A41A80E5155DFACAD6_RuntimeMethod_var);
			goto IL_033c;
		}

IL_02da_1:
		{
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_109 = __this->___U3CU3Eu__3_11;
			V_11 = L_109;
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* L_110 = (&__this->___U3CU3Eu__3_11);
			il2cpp_codegen_initobj(L_110, sizeof(TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935));
			int32_t L_111 = (-1);
			V_0 = L_111;
			__this->___U3CU3E1__state_0 = L_111;
		}

IL_02f7_1:
		{
			RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* L_112;
			L_112 = TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919((&V_11), TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var);
			V_2 = L_112;
			goto IL_0321;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0301;
		}
		throw e;
	}

CATCH_0301:
	{// begin catch(System.Exception)
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdestWalletU3E5__2_8 = (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestWalletU3E5__2_8), (void*)(TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F*)NULL);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_113 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_114 = V_12;
		AsyncTaskMethodBuilder_1_SetException_m354526EADBE537610A7DD820B84C0E11BEBDC348(L_113, L_114, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m354526EADBE537610A7DD820B84C0E11BEBDC348_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_033c;
	}// end catch (depth: 1)

IL_0321:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdestWalletU3E5__2_8 = (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestWalletU3E5__2_8), (void*)(TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F*)NULL);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_115 = (&__this->___U3CU3Et__builder_1);
		RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* L_116 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9(L_115, L_116, AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var);
	}

IL_033c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB*>(__this + _offset);
	U3CSendAsyncU3Ed__29_MoveNext_mB112D024742DBF60409E60A136C945E09E146986(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenWallet/<SendAsync>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__29_SetStateMachine_mC6D831CE5383173BD59F1AEA7400331D5E76F4DE (U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__29_SetStateMachine_mC6D831CE5383173BD59F1AEA7400331D5E76F4DE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__29_t4B574241E2819E80B2B962EF70E4B47BD66ADBAB*>(__this + _offset);
	U3CSendAsyncU3Ed__29_SetStateMachine_mC6D831CE5383173BD59F1AEA7400331D5E76F4DE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Solana.Unity.Rpc.Core.Http.IRequestResult Solana.Unity.Extensions.TokenWalletException::get_RequestResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenWalletException_get_RequestResult_m857E665643728732D085D963908DBEC3E5543E88 (TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CRequestResultU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Solana.Unity.Extensions.TokenWalletException::set_RequestResult(Solana.Unity.Rpc.Core.Http.IRequestResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletException_set_RequestResult_m24ADA4116E27C73AB111C86F00EDDEF52D17C4A5 (TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRequestResultU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestResultU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.Extensions.TokenWalletException::.ctor(System.String,Solana.Unity.Rpc.Core.Http.IRequestResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletException__ctor_m7EA8597E73402E7FED02B1BC05AD0F54589F9BE7 (TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6* __this, String_t* ___message0, RuntimeObject* ___failedResult1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(__this, L_0, NULL);
		RuntimeObject* L_1 = ___failedResult1;
		TokenWalletException_set_RequestResult_m24ADA4116E27C73AB111C86F00EDDEF52D17C4A5_inline(__this, L_1, NULL);
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
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy::.ctor(Solana.Unity.Rpc.IRpcClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletRpcProxy__ctor_mA34EF6D16073CA9CCF9E4799D30E6A1FF73F5621 (TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWalletRpcProxy__ctor_mA34EF6D16073CA9CCF9E4799D30E6A1FF73F5621_RuntimeMethod_var)));
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->____client_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____client_0), (void*)G_B2_0);
		return;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>> Solana.Unity.Extensions.TokenWalletRpcProxy::GetBalanceAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4* TokenWalletRpcProxy_GetBalanceAsync_mC1E4F0915652686A5F861CE8E80DA4F8E6F3849B (TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* __this, String_t* ___pubKey0, int32_t ___commitment1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mF6EAAE188734F76BDD8BB3E11FCC8A2E881E011A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_mCEFB46CCF0B94020033036FFE8D814DE49DAFB9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mA8AAA8A9BF98B81BC30E76ECA991EDF0E2389C07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mF6EAAE188734F76BDD8BB3E11FCC8A2E881E011A(AsyncTaskMethodBuilder_1_Create_mF6EAAE188734F76BDD8BB3E11FCC8A2E881E011A_RuntimeMethod_var);
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
		String_t* L_1 = ___pubKey0;
		(&V_0)->___pubKey_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___pubKey_3), (void*)L_1);
		int32_t L_2 = ___commitment1;
		(&V_0)->___commitment_4 = L_2;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_mCEFB46CCF0B94020033036FFE8D814DE49DAFB9A(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_mCEFB46CCF0B94020033036FFE8D814DE49DAFB9A_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mA8AAA8A9BF98B81BC30E76ECA991EDF0E2389C07(L_4, AsyncTaskMethodBuilder_1_get_Task_mA8AAA8A9BF98B81BC30E76ECA991EDF0E2389C07_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>> Solana.Unity.Extensions.TokenWalletRpcProxy::GetRecentBlockHashAsync(Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9* TokenWalletRpcProxy_GetRecentBlockHashAsync_m0CA866D3998E2C2083476D2F3B0E8B503A51F745 (TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* __this, int32_t ___commitment0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mAE9D4A2883BE4F7FD39E326A1D321CAF074BF958_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_mCD0D2C28767ACAB92D83F5C4F59F00F1CD207A58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m70E46116596A4CB9C20E1F23442C092ACA8E5328_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mAE9D4A2883BE4F7FD39E326A1D321CAF074BF958(AsyncTaskMethodBuilder_1_Create_mAE9D4A2883BE4F7FD39E326A1D321CAF074BF958_RuntimeMethod_var);
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
		int32_t L_1 = ___commitment0;
		(&V_0)->___commitment_3 = L_1;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_mCD0D2C28767ACAB92D83F5C4F59F00F1CD207A58(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_mCD0D2C28767ACAB92D83F5C4F59F00F1CD207A58_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m70E46116596A4CB9C20E1F23442C092ACA8E5328(L_3, AsyncTaskMethodBuilder_1_get_Task_m70E46116596A4CB9C20E1F23442C092ACA8E5328_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>> Solana.Unity.Extensions.TokenWalletRpcProxy::GetTokenAccountsByOwnerAsync(System.String,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64* TokenWalletRpcProxy_GetTokenAccountsByOwnerAsync_mA3ED2A5E1ACEB09F36BCCA07600CB1AA264C4B42 (TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* __this, String_t* ___ownerPubKey0, String_t* ___tokenMintPubKey1, String_t* ___tokenProgramId2, int32_t ___commitment3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m9A24FCC741B6729C788256762956EDFC0A8FA802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_mDED583229BE1542F665006895443CA7F9DD5DA88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mA8003BA84EE2C641EE57DBEE6D26916D93D6EBAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m9A24FCC741B6729C788256762956EDFC0A8FA802(AsyncTaskMethodBuilder_1_Create_m9A24FCC741B6729C788256762956EDFC0A8FA802_RuntimeMethod_var);
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
		String_t* L_1 = ___ownerPubKey0;
		(&V_0)->___ownerPubKey_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___ownerPubKey_3), (void*)L_1);
		String_t* L_2 = ___tokenMintPubKey1;
		(&V_0)->___tokenMintPubKey_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___tokenMintPubKey_4), (void*)L_2);
		String_t* L_3 = ___tokenProgramId2;
		(&V_0)->___tokenProgramId_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___tokenProgramId_5), (void*)L_3);
		int32_t L_4 = ___commitment3;
		(&V_0)->___commitment_6 = L_4;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_mDED583229BE1542F665006895443CA7F9DD5DA88(L_5, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_mDED583229BE1542F665006895443CA7F9DD5DA88_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64* L_7;
		L_7 = AsyncTaskMethodBuilder_1_get_Task_mA8003BA84EE2C641EE57DBEE6D26916D93D6EBAB(L_6, AsyncTaskMethodBuilder_1_get_Task_mA8003BA84EE2C641EE57DBEE6D26916D93D6EBAB_RuntimeMethod_var);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Extensions.TokenWalletRpcProxy::SendTransactionAsync(System.Byte[],System.Boolean,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* TokenWalletRpcProxy_SendTransactionAsync_m1F11FDD6C413CB9CA5C4EF33B5ED25D03AE317A6 (TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___transaction0, bool ___skipPreflight1, int32_t ___commitment2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mE15A8C00B8899519CAED0A959654CBAD6515424D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_m96135BC2FD8E362D8F747FA51D8AC5AD8E15A250_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44 V_0;
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
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___transaction0;
		(&V_0)->___transaction_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___transaction_3), (void*)L_1);
		bool L_2 = ___skipPreflight1;
		(&V_0)->___skipPreflight_4 = L_2;
		int32_t L_3 = ___commitment2;
		(&V_0)->___commitment_5 = L_3;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_m96135BC2FD8E362D8F747FA51D8AC5AD8E15A250(L_4, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_m96135BC2FD8E362D8F747FA51D8AC5AD8E15A250_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_6;
		L_6 = AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E(L_5, AsyncTaskMethodBuilder_1_get_Task_m466CA77966A09435F52233912BFF0D830C19FD7E_RuntimeMethod_var);
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
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBalanceAsyncU3Ed__2_MoveNext_m44BCD74344D02A28BAB8E28DCB1892FC09B65F82 (U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_m1F0312E26EB9AB392E25D829B4EADE31DCA186E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m2136AA9545E9784547AEB2C0806E2AB34C0B8C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mEC6245D3C905529969065AE79EC039C09C777356_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m73E78CD498272FF708F048856F7E06736CC3DED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m858B8A79A1D9BEDD8237BD7051CB8A2D2B215651_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* V_1 = NULL;
	RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* V_2 = NULL;
	TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0057_1;
			}
		}
		{
			TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->____client_0;
			String_t* L_5 = __this->___pubKey_3;
			int32_t L_6 = __this->___commitment_4;
			NullCheck(L_4);
			Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4* L_7;
			L_7 = InterfaceFuncInvoker2< Task_1_tA9839B9C0279E81C530C09F451261352202ED9E4*, String_t*, int32_t >::Invoke(4 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>> Solana.Unity.Rpc.IRpcClient::GetBalanceAsync(System.String,Solana.Unity.Rpc.Types.Commitment) */, IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var, L_4, L_5, L_6);
			NullCheck(L_7);
			TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 L_8;
			L_8 = Task_1_GetAwaiter_m858B8A79A1D9BEDD8237BD7051CB8A2D2B215651(L_7, Task_1_GetAwaiter_m858B8A79A1D9BEDD8237BD7051CB8A2D2B215651_RuntimeMethod_var);
			V_3 = L_8;
			bool L_9;
			L_9 = TaskAwaiter_1_get_IsCompleted_m73E78CD498272FF708F048856F7E06736CC3DED7((&V_3), TaskAwaiter_1_get_IsCompleted_m73E78CD498272FF708F048856F7E06736CC3DED7_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0073_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 L_11 = V_3;
			__this->___U3CU3Eu__1_5 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95* L_12 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_m1F0312E26EB9AB392E25D829B4EADE31DCA186E4(L_12, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9_TisU3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44_m1F0312E26EB9AB392E25D829B4EADE31DCA186E4_RuntimeMethod_var);
			goto IL_00aa;
		}

IL_0057_1:
		{
			TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9 L_13 = __this->___U3CU3Eu__1_5;
			V_3 = L_13;
			TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9* L_14 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_1_t34370C6E9795EF6A69DD951CA40B0E43B8919EC9));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_0073_1:
		{
			RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* L_16;
			L_16 = TaskAwaiter_1_GetResult_mEC6245D3C905529969065AE79EC039C09C777356((&V_3), TaskAwaiter_1_GetResult_mEC6245D3C905529969065AE79EC039C09C777356_RuntimeMethod_var);
			V_2 = L_16;
			goto IL_0096;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007d;
		}
		throw e;
	}

CATCH_007d:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95* L_17 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_18 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mDC63A0696B4FA52DE511D9B6210400420B9D8FD8(L_17, L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mDC63A0696B4FA52DE511D9B6210400420B9D8FD8_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00aa;
	}// end catch (depth: 1)

IL_0096:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95* L_19 = (&__this->___U3CU3Et__builder_1);
		RequestResult_1_tC49B6088781BE198317BAD9D1C49627CA17497A8* L_20 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m2136AA9545E9784547AEB2C0806E2AB34C0B8C31(L_19, L_20, AsyncTaskMethodBuilder_1_SetResult_m2136AA9545E9784547AEB2C0806E2AB34C0B8C31_RuntimeMethod_var);
	}

IL_00aa:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetBalanceAsyncU3Ed__2_MoveNext_m44BCD74344D02A28BAB8E28DCB1892FC09B65F82_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44*>(__this + _offset);
	U3CGetBalanceAsyncU3Ed__2_MoveNext_m44BCD74344D02A28BAB8E28DCB1892FC09B65F82(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<GetBalanceAsync>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBalanceAsyncU3Ed__2_SetStateMachine_m51C351BB378D59C3B9A8AF3747099A2AED2E0186 (U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m73796A57B676B154F5B6E9AA6F3EB486D723CE4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t3AD0BAD7646B55D00CB0BD3D6546E0F42CA2CA95* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m73796A57B676B154F5B6E9AA6F3EB486D723CE4B(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m73796A57B676B154F5B6E9AA6F3EB486D723CE4B_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetBalanceAsyncU3Ed__2_SetStateMachine_m51C351BB378D59C3B9A8AF3747099A2AED2E0186_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetBalanceAsyncU3Ed__2_t0B12CEA628C068CDC5025F6AD2BEA220D8A57B44*>(__this + _offset);
	U3CGetBalanceAsyncU3Ed__2_SetStateMachine_m51C351BB378D59C3B9A8AF3747099A2AED2E0186(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRecentBlockHashAsyncU3Ed__3_MoveNext_m38053A80C37F8407AFD4B5412D0DF51DBDD0CFB2 (U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_m44EAACA4A9773A975B95C1F73BD2EC44EA1562C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m549DC4BCB161AA465764DD43CA2DA5F46D48F60D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA4FDB67254A98EACB7127BECA43B2AA26F6F1893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m485AF7F64784968FFBB292516F59B5246C1A5791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mBA03D0B38E519B0F47180DC732F22247E6CDFBA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* V_1 = NULL;
	RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672* V_2 = NULL;
	TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0051_1;
			}
		}
		{
			TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->____client_0;
			int32_t L_5 = __this->___commitment_3;
			NullCheck(L_4);
			Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9* L_6;
			L_6 = InterfaceFuncInvoker1< Task_1_t2AF27FE1CBA89B5379E36A267A9B496E920700E9*, int32_t >::Invoke(37 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>> Solana.Unity.Rpc.IRpcClient::GetRecentBlockHashAsync(Solana.Unity.Rpc.Types.Commitment) */, IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var, L_4, L_5);
			NullCheck(L_6);
			TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 L_7;
			L_7 = Task_1_GetAwaiter_mBA03D0B38E519B0F47180DC732F22247E6CDFBA2(L_6, Task_1_GetAwaiter_mBA03D0B38E519B0F47180DC732F22247E6CDFBA2_RuntimeMethod_var);
			V_3 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_1_get_IsCompleted_m485AF7F64784968FFBB292516F59B5246C1A5791((&V_3), TaskAwaiter_1_get_IsCompleted_m485AF7F64784968FFBB292516F59B5246C1A5791_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_006d_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 L_10 = V_3;
			__this->___U3CU3Eu__1_4 = L_10;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_m44EAACA4A9773A975B95C1F73BD2EC44EA1562C1(L_11, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385_TisU3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC_m44EAACA4A9773A975B95C1F73BD2EC44EA1562C1_RuntimeMethod_var);
			goto IL_00a4;
		}

IL_0051_1:
		{
			TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385 L_12 = __this->___U3CU3Eu__1_4;
			V_3 = L_12;
			TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385* L_13 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t404233974003AD96F5C90C981C49818B0D9F0385));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_006d_1:
		{
			RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672* L_15;
			L_15 = TaskAwaiter_1_GetResult_mA4FDB67254A98EACB7127BECA43B2AA26F6F1893((&V_3), TaskAwaiter_1_GetResult_mA4FDB67254A98EACB7127BECA43B2AA26F6F1893_RuntimeMethod_var);
			V_2 = L_15;
			goto IL_0090;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m021BA8202E68EBD8C5DEDB6DB3A1E43A23B8DDAA(L_16, L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m021BA8202E68EBD8C5DEDB6DB3A1E43A23B8DDAA_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a4;
	}// end catch (depth: 1)

IL_0090:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61* L_18 = (&__this->___U3CU3Et__builder_1);
		RequestResult_1_t61CCB3CDE01AC554CE2DCB5C2648B73A963DD672* L_19 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m549DC4BCB161AA465764DD43CA2DA5F46D48F60D(L_18, L_19, AsyncTaskMethodBuilder_1_SetResult_m549DC4BCB161AA465764DD43CA2DA5F46D48F60D_RuntimeMethod_var);
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetRecentBlockHashAsyncU3Ed__3_MoveNext_m38053A80C37F8407AFD4B5412D0DF51DBDD0CFB2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC*>(__this + _offset);
	U3CGetRecentBlockHashAsyncU3Ed__3_MoveNext_m38053A80C37F8407AFD4B5412D0DF51DBDD0CFB2(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<GetRecentBlockHashAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRecentBlockHashAsyncU3Ed__3_SetStateMachine_m30D0E18BB37D34CFD6C6F7CE2A12B435B2EB6A43 (U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mC6D818A291824DBF11B035B899B3BD1C8B580689_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t3926BCA34F5180EB429ECD465DB8CFB0FE019C61* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mC6D818A291824DBF11B035B899B3BD1C8B580689(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mC6D818A291824DBF11B035B899B3BD1C8B580689_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetRecentBlockHashAsyncU3Ed__3_SetStateMachine_m30D0E18BB37D34CFD6C6F7CE2A12B435B2EB6A43_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetRecentBlockHashAsyncU3Ed__3_t7C9F49097CF1ECD34444E5BAC6275F187C4048FC*>(__this + _offset);
	U3CGetRecentBlockHashAsyncU3Ed__3_SetStateMachine_m30D0E18BB37D34CFD6C6F7CE2A12B435B2EB6A43(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTokenAccountsByOwnerAsyncU3Ed__4_MoveNext_mDA686A61B515F0BAE530EF233108D13C412D0A7C (U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_m8564CAFD4CC2B507834D32E1C57103AC577C3181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m48394B8F12345495B9527D6E4279E2420CEF9656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m2B9D52C4A03B1CDBABC19ED365A2CA0C39FC37AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m5A1C8CE07E6CCFD772FAAF407939C198772F7532_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2C907EACD6FBC51FC6DB62B5861C9565B5B2A151_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* V_1 = NULL;
	RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* V_2 = NULL;
	TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0063_1;
			}
		}
		{
			TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->____client_0;
			String_t* L_5 = __this->___ownerPubKey_3;
			String_t* L_6 = __this->___tokenMintPubKey_4;
			String_t* L_7 = __this->___tokenProgramId_5;
			int32_t L_8 = __this->___commitment_6;
			NullCheck(L_4);
			Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64* L_9;
			L_9 = InterfaceFuncInvoker4< Task_1_tAE8E207AF8FF572F72C863900FB0B05A89902D64*, String_t*, String_t*, String_t*, int32_t >::Invoke(52 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>> Solana.Unity.Rpc.IRpcClient::GetTokenAccountsByOwnerAsync(System.String,System.String,System.String,Solana.Unity.Rpc.Types.Commitment) */, IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7, L_8);
			NullCheck(L_9);
			TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 L_10;
			L_10 = Task_1_GetAwaiter_m2C907EACD6FBC51FC6DB62B5861C9565B5B2A151(L_9, Task_1_GetAwaiter_m2C907EACD6FBC51FC6DB62B5861C9565B5B2A151_RuntimeMethod_var);
			V_3 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_1_get_IsCompleted_m5A1C8CE07E6CCFD772FAAF407939C198772F7532((&V_3), TaskAwaiter_1_get_IsCompleted_m5A1C8CE07E6CCFD772FAAF407939C198772F7532_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_007f_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 L_13 = V_3;
			__this->___U3CU3Eu__1_7 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_m8564CAFD4CC2B507834D32E1C57103AC577C3181(L_14, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324_TisU3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23_m8564CAFD4CC2B507834D32E1C57103AC577C3181_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0063_1:
		{
			TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324 L_15 = __this->___U3CU3Eu__1_7;
			V_3 = L_15;
			TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324* L_16 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_tFDD991C4C002734DAD57231BC72F861ACFE0C324));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_007f_1:
		{
			RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* L_18;
			L_18 = TaskAwaiter_1_GetResult_m2B9D52C4A03B1CDBABC19ED365A2CA0C39FC37AD((&V_3), TaskAwaiter_1_GetResult_m2B9D52C4A03B1CDBABC19ED365A2CA0C39FC37AD_RuntimeMethod_var);
			V_2 = L_18;
			goto IL_00a2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0089;
		}
		throw e;
	}

CATCH_0089:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m0AA09C2CFD4AC8FA4F23E2CC9AA5B7D58548B5E6(L_19, L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m0AA09C2CFD4AC8FA4F23E2CC9AA5B7D58548B5E6_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	}// end catch (depth: 1)

IL_00a2:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB* L_21 = (&__this->___U3CU3Et__builder_1);
		RequestResult_1_tEDEF618442DFA135151308C47B3C95C571C020BA* L_22 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m48394B8F12345495B9527D6E4279E2420CEF9656(L_21, L_22, AsyncTaskMethodBuilder_1_SetResult_m48394B8F12345495B9527D6E4279E2420CEF9656_RuntimeMethod_var);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetTokenAccountsByOwnerAsyncU3Ed__4_MoveNext_mDA686A61B515F0BAE530EF233108D13C412D0A7C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23*>(__this + _offset);
	U3CGetTokenAccountsByOwnerAsyncU3Ed__4_MoveNext_mDA686A61B515F0BAE530EF233108D13C412D0A7C(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<GetTokenAccountsByOwnerAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTokenAccountsByOwnerAsyncU3Ed__4_SetStateMachine_m3EA526815ED49E55A13870E4F2128A4C1561992C (U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mF53D4075F551460FF0F3E254FE697ED90C4FECF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tE27CC87508A16A74D6BD6A2DC257AD7437C6A3EB* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mF53D4075F551460FF0F3E254FE697ED90C4FECF4(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mF53D4075F551460FF0F3E254FE697ED90C4FECF4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetTokenAccountsByOwnerAsyncU3Ed__4_SetStateMachine_m3EA526815ED49E55A13870E4F2128A4C1561992C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetTokenAccountsByOwnerAsyncU3Ed__4_tD22038DD5C2B14949BDAA1092B2D2ED5CD073B23*>(__this + _offset);
	U3CGetTokenAccountsByOwnerAsyncU3Ed__4_SetStateMachine_m3EA526815ED49E55A13870E4F2128A4C1561992C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendTransactionAsyncU3Ed__5_MoveNext_mF75B9A2FF031A5FEF9D78319C6F1CE727122B1DA (U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_m9EC93BA4BF891225FD71CC6590C01DC98CD48EDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* V_1 = NULL;
	RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* V_2 = NULL;
	TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* L_1 = __this->___U3CU3E4__this_2;
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
			TokenWalletRpcProxy_tA1A2667102A0A6EA27C0F509C2DC2C7978AD8EA4* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->____client_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___transaction_3;
			bool L_6 = __this->___skipPreflight_4;
			int32_t L_7 = __this->___commitment_5;
			NullCheck(L_4);
			Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6* L_8;
			L_8 = InterfaceFuncInvoker3< Task_1_t407274F67F6A8DBD24C694CB37E91EED6424A3D6*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool, int32_t >::Invoke(62 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.IRpcClient::SendTransactionAsync(System.Byte[],System.Boolean,Solana.Unity.Rpc.Types.Commitment) */, IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
			NullCheck(L_8);
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_9;
			L_9 = Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988(L_8, Task_1_GetAwaiter_m217C2221A7CC682CB8BF46E42B44869F62833988_RuntimeMethod_var);
			V_3 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C((&V_3), TaskAwaiter_1_get_IsCompleted_m685471B67B30A781836E35A314B48D3BFC81134C_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0079_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_12 = V_3;
			__this->___U3CU3Eu__1_6 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_m9EC93BA4BF891225FD71CC6590C01DC98CD48EDB(L_13, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935_TisU3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44_m9EC93BA4BF891225FD71CC6590C01DC98CD48EDB_RuntimeMethod_var);
			goto IL_00b0;
		}

IL_005d_1:
		{
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935 L_14 = __this->___U3CU3Eu__1_6;
			V_3 = L_14;
			TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935* L_15 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_t2D57666CF9009F20A42CFED1F306028D26E9F935));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_0079_1:
		{
			RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* L_17;
			L_17 = TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919((&V_3), TaskAwaiter_1_GetResult_m5A0448347F8D6CCE76CE3A161937C925A6103919_RuntimeMethod_var);
			V_2 = L_17;
			goto IL_009c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0083;
		}
		throw e;
	}

CATCH_0083:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_18 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m354526EADBE537610A7DD820B84C0E11BEBDC348(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m354526EADBE537610A7DD820B84C0E11BEBDC348_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b0;
	}// end catch (depth: 1)

IL_009c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t7C3D909ADFE9E719AAB1B78110E747F8A392FA88* L_20 = (&__this->___U3CU3Et__builder_1);
		RequestResult_1_tE6E5810F227563C57A60E9A0FC27EC0C855521A2* L_21 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9(L_20, L_21, AsyncTaskMethodBuilder_1_SetResult_mE34250BCFC005CC385ABE6F5E6590E5BF2F0A3A9_RuntimeMethod_var);
	}

IL_00b0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendTransactionAsyncU3Ed__5_MoveNext_mF75B9A2FF031A5FEF9D78319C6F1CE727122B1DA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44*>(__this + _offset);
	U3CSendTransactionAsyncU3Ed__5_MoveNext_mF75B9A2FF031A5FEF9D78319C6F1CE727122B1DA(_thisAdjusted, method);
}
// System.Void Solana.Unity.Extensions.TokenWalletRpcProxy/<SendTransactionAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendTransactionAsyncU3Ed__5_SetStateMachine_m59A7554C67F6A0234F4B51AA9E82656FA13F83D4 (U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void U3CSendTransactionAsyncU3Ed__5_SetStateMachine_m59A7554C67F6A0234F4B51AA9E82656FA13F83D4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendTransactionAsyncU3Ed__5_tB8BEA145F386ACD500DBD3E2DB269B9EC76DDB44*>(__this + _offset);
	U3CSendTransactionAsyncU3Ed__5_SetStateMachine_m59A7554C67F6A0234F4B51AA9E82656FA13F83D4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Extensions.WellKnownTokens::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WellKnownTokens__cctor_m6651834C90A4F41ED67B845DEFC8BF79A452D139 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCAB8E72F24B803816C5286F764E024D810E4E6C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDEE589CC285EACB41983B8E83CA2F2D4942C5494_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00BE36C63F27ED6F72FB26584B5F509DFF4BA46F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D10863ED4DC715EC1023B9D9A9C00C811DC0EF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FD052877C9864234FB786B3B92C4106C8F18A55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22156D18812AD53B55CF15C634577C4C5AD1A0E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409FA1FB48FCAFE0359BF3A7E0D2D5142610764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral281F1336E8014A7EDDC28A187E4E6489D2F565DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3287D1C3089591C12517EFD1E8FE23AA84BCB74C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38AEDFD3C6BA3CA0B51C929B99CCF80486B4545A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3905566959D411246460F7BD4671847860431EC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402388F9B757B2883D1D68662F8E7FA6BC587CB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424D6DB2974268B77106E052C997C34EF58685AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4366E4715E79DB263BDA331ED3D7E40DF8D6A7A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4414789E0C56F453460AB12B7BC0AF5469A88944);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46033C4AC994646BFDD12E66C1895928700D7657);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral464DAF3D4E86DF2B65C8B8BE784A487AF6C17A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48C6E419154509C139FB700BA6DE57467A32375E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A6F224D73185375CDB19D92D1734E62466F4CB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9D19F93374071B759BC0E11C49C7FC23830C91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53BDFE9554561CC208A0A6E9F42F4045C0E7FE44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral574961B4CC42717A4EEE54FCCEA8C426A9ACCB48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral586BDC5C6778BF8FF69C7AF8C6E63403447F1631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral589AA47E41353AFF7D034EC4C7687518B3A11034);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58F731E7EB208B855437DDB54E37A28C65A896F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59B38EF506C8235146581F6DBE40D5D557A5698B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB33A02CD098BC922B025A1A60CAF37401341D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D62EFD0557DBB570574E826B910E4ECA33137FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62CE8F5D963A0AC7966F11B20743F4E68F0E8038);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63E2C2AAE85341B6890CF2B1A43E572B573FCA5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B7DE7F3DD33F05E643572EA4FD0ACCED36AA71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B168350301D800FA58E5E32CF84E662EDF92110);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EC2672932158AC68FF0D15F1E0D30BE47F285D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral745CD92AF16DFE2F7B9B8CBC289B43963BA78463);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79EB288E9CE4DD60C7BE551F0693785F2D5DEF97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84599DCBF1902CF3C8992EEF5CBD559B720562FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84CF58A87B7CAAAC388E700181FA2F086384BF4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral868881D7B043EC02238167F923A71ECDE42595D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F32691F4B97240AA4139CD0BEEA4C59FAF96EE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9584A636B2153EFE760CE0D5B3C6238641301506);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9657D9D14EEB5FF064C60DBDDEDAB601A082251E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02045EA247E784599834F152FECBB16CE49E551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1F613FC956017179FBCC99574B7118D53154F70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA607283D5330AC137E18BD5CD0F4907236F1FC86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8420F2866C2A6A424AF142AB7E16B9404A02A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA90A6C3F8AF2040BB342A9E9B41CC54966F1452B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABBC3036D294E929671B0BA190A73D9D4D54AA61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB14576EB8C296833FEA6801D7B3EB1398C260902);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3404129078A0013AC74B07C39E1301B36B3886F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB53B17787EA102AED259CCF48EAC835DF731598C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8CF1883E7F924AE4F7410C926EB0DD0D967F7F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF4ACBEBD200046FBD7AB24AE66E09647724E6EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFED256FAD24DFB918C3171760B73C3949AF3AF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA5C7CB71E39011715F43F521A4821DC146AED51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCED0C8C85E3D382C8ED9C923EFE1AAC5FD96EEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2C65D36F339CB37AE22324E018B4D54335A20CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4440AFF7DE2F1708927839914FAF97C372E7616);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA2D97B2F7B55E79AA5FA122265795CBC45022B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC648322218F0982D0260CE79C3072F796B816B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC8BFBFDF43105DB471CBD4F2F73BDE1ECBF667);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC368E12A459EB0AE60F982EC4BDA704F3B00314);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED3FEEB0C3B221F5B07815EE43940E711ACBB067);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0F9268C5A65A883765CEB3C34C927FB7BE03D88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF173BBB462D9C35895D9EE802901FE0DE67E8A57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23290496A911CF6508FBCC592553A8BF7061E76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6E39914BF9A5C3C3263F09D1AC43AD6BF3FB8DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6F579AAFA7693712FEBE6A98B1C0663E340DB0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7D14D484B9743D72CE9F2F31CF9A99EB6E18F39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7EBB6ED5ACB225AF9CB005C84DE7A94F735D07E);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* V_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_1 = NULL;
	int32_t V_2 = 0;
	FieldInfo_t* V_3 = NULL;
	{
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_0 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_0, _stringLiteralF6E39914BF9A5C3C3263F09D1AC43AD6BF3FB8DD, _stringLiteral9657D9D14EEB5FF064C60DBDDEDAB601A082251E, _stringLiteralA90A6C3F8AF2040BB342A9E9B41CC54966F1452B, ((int32_t)9), NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___WrappedSOL_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___WrappedSOL_1), (void*)L_0);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_1 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_1, _stringLiteralF0F9268C5A65A883765CEB3C34C927FB7BE03D88, _stringLiteralBF4ACBEBD200046FBD7AB24AE66E09647724E6EA, _stringLiteral402388F9B757B2883D1D68662F8E7FA6BC587CB1, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___USDC_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___USDC_2), (void*)L_1);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_2 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_2, _stringLiteral4366E4715E79DB263BDA331ED3D7E40DF8D6A7A5, _stringLiteral58F731E7EB208B855437DDB54E37A28C65A896F6, _stringLiteral58F731E7EB208B855437DDB54E37A28C65A896F6, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___USDT_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___USDT_3), (void*)L_2);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_3 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_3, _stringLiteral59B38EF506C8235146581F6DBE40D5D557A5698B, _stringLiteral38AEDFD3C6BA3CA0B51C929B99CCF80486B4545A, _stringLiteral281F1336E8014A7EDDC28A187E4E6489D2F565DA, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Serum_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Serum_4), (void*)L_3);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_4 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_4, _stringLiteral5BB33A02CD098BC922B025A1A60CAF37401341D1, _stringLiteralDC648322218F0982D0260CE79C3072F796B816B4, _stringLiteral84CF58A87B7CAAAC388E700181FA2F086384BF4C, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Raydium_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Raydium_5), (void*)L_4);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_5 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_5, _stringLiteralD2C65D36F339CB37AE22324E018B4D54335A20CA, _stringLiteral2409FA1FB48FCAFE0359BF3A7E0D2D5142610764, _stringLiteralF173BBB462D9C35895D9EE802901FE0DE67E8A57, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Bonfida_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Bonfida_6), (void*)L_5);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_6 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_6, _stringLiteralB8CF1883E7F924AE4F7410C926EB0DD0D967F7F4, _stringLiteralF7D14D484B9743D72CE9F2F31CF9A99EB6E18F39, _stringLiteralF7EBB6ED5ACB225AF9CB005C84DE7A94F735D07E, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Cope_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Cope_7), (void*)L_6);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_7 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_7, _stringLiteral79EB288E9CE4DD60C7BE551F0693785F2D5DEF97, _stringLiteralA1F613FC956017179FBCC99574B7118D53154F70, _stringLiteralA1F613FC956017179FBCC99574B7118D53154F70, ((int32_t)9), NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Kin_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Kin_8), (void*)L_7);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_8 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_8, _stringLiteralF23290496A911CF6508FBCC592553A8BF7061E76, _stringLiteral3287D1C3089591C12517EFD1E8FE23AA84BCB74C, _stringLiteral586BDC5C6778BF8FF69C7AF8C6E63403447F1631, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Tulip_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Tulip_9), (void*)L_8);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_9 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_9, _stringLiteral1FD052877C9864234FB786B3B92C4106C8F18A55, _stringLiteral3905566959D411246460F7BD4671847860431EC9, _stringLiteralD4440AFF7DE2F1708927839914FAF97C372E7616, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Orca_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Orca_10), (void*)L_9);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_10 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_10, _stringLiteral745CD92AF16DFE2F7B9B8CBC289B43963BA78463, _stringLiteral5D62EFD0557DBB570574E826B910E4ECA33137FD, _stringLiteral8F32691F4B97240AA4139CD0BEEA4C59FAF96EE7, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Mango_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Mango_11), (void*)L_10);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_11 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_11, _stringLiteral464DAF3D4E86DF2B65C8B8BE784A487AF6C17A28, _stringLiteral4A6F224D73185375CDB19D92D1734E62466F4CB6, _stringLiteralB53B17787EA102AED259CCF48EAC835DF731598C, ((int32_t)9), NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Samoyed_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Samoyed_12), (void*)L_11);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_12 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_12, _stringLiteral00BE36C63F27ED6F72FB26584B5F509DFF4BA46F, _stringLiteral53BDFE9554561CC208A0A6E9F42F4045C0E7FE44, _stringLiteral48C6E419154509C139FB700BA6DE57467A32375E, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Saber_13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Saber_13), (void*)L_12);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_13 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_13, _stringLiteralA02045EA247E784599834F152FECBB16CE49E551, _stringLiteral84599DCBF1902CF3C8992EEF5CBD559B720562FB, _stringLiteral65B7DE7F3DD33F05E643572EA4FD0ACCED36AA71, ((int32_t)9), NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Fabric_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Fabric_14), (void*)L_13);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_14 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_14, _stringLiteralED3FEEB0C3B221F5B07815EE43940E711ACBB067, _stringLiteralB3404129078A0013AC74B07C39E1301B36B3886F, _stringLiteralCA5C7CB71E39011715F43F521A4821DC146AED51, ((int32_t)9), NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Boring_15 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Boring_15), (void*)L_14);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_15 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_15, _stringLiteralA8420F2866C2A6A424AF142AB7E16B9404A02A0A, _stringLiteralB14576EB8C296833FEA6801D7B3EB1398C260902, _stringLiteral4414789E0C56F453460AB12B7BC0AF5469A88944, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Liquid_16 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Liquid_16), (void*)L_15);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_16 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_16, _stringLiteral9584A636B2153EFE760CE0D5B3C6238641301506, _stringLiteralF6F579AAFA7693712FEBE6A98B1C0663E340DB0B, _stringLiteral46033C4AC994646BFDD12E66C1895928700D7657, ((int32_t)9), NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Step_17 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Step_17), (void*)L_16);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_17 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_17, _stringLiteral0D10863ED4DC715EC1023B9D9A9C00C811DC0EF1, _stringLiteralDA2D97B2F7B55E79AA5FA122265795CBC45022B4, _stringLiteral4C9D19F93374071B759BC0E11C49C7FC23830C91, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Solrise_18 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Solrise_18), (void*)L_17);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_18 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_18, _stringLiteralA607283D5330AC137E18BD5CD0F4907236F1FC86, _stringLiteral63E2C2AAE85341B6890CF2B1A43E572B573FCA5B, _stringLiteralABBC3036D294E929671B0BA190A73D9D4D54AA61, ((int32_t)9), NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Only1_19 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Only1_19), (void*)L_18);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_19 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_19, _stringLiteral589AA47E41353AFF7D034EC4C7687518B3A11034, _stringLiteralEBC8BFBFDF43105DB471CBD4F2F73BDE1ECBF667, _stringLiteral868881D7B043EC02238167F923A71ECDE42595D1, 8, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___StarAtlas_20 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___StarAtlas_20), (void*)L_19);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_20 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_20, _stringLiteralBFED256FAD24DFB918C3171760B73C3949AF3AF0, _stringLiteral6B168350301D800FA58E5E32CF84E662EDF92110, _stringLiteralCCED0C8C85E3D382C8ED9C923EFE1AAC5FD96EEB, 8, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___StarAtlasDao_21 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___StarAtlasDao_21), (void*)L_20);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_21 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_21, _stringLiteralEC368E12A459EB0AE60F982EC4BDA704F3B00314, _stringLiteral574961B4CC42717A4EEE54FCCEA8C426A9ACCB48, _stringLiteral6EC2672932158AC68FF0D15F1E0D30BE47F285D7, 6, NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Woof_22 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___Woof_22), (void*)L_21);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_22 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_22, _stringLiteral22156D18812AD53B55CF15C634577C4C5AD1A0E7, _stringLiteral62CE8F5D963A0AC7966F11B20743F4E68F0E8038, _stringLiteral424D6DB2974268B77106E052C997C34EF58685AA, ((int32_t)9), NULL);
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___ShadowToken_23 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->___ShadowToken_23), (void*)L_22);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* L_25 = (List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675*)il2cpp_codegen_object_new(List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		List_1__ctor_mDEE589CC285EACB41983B8E83CA2F2D4942C5494(L_25, List_1__ctor_mDEE589CC285EACB41983B8E83CA2F2D4942C5494_RuntimeMethod_var);
		V_0 = L_25;
		NullCheck(L_24);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_26;
		L_26 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(89 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_24, ((int32_t)24));
		V_1 = L_26;
		V_2 = 0;
		goto IL_0294;
	}

IL_027a:
	{
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_27 = V_1;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		FieldInfo_t* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_3 = L_30;
		List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* L_31 = V_0;
		FieldInfo_t* L_32 = V_3;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(26 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_32, NULL);
		NullCheck(L_31);
		List_1_Add_mCAB8E72F24B803816C5286F764E024D810E4E6C6_inline(L_31, ((TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)CastclassClass((RuntimeObject*)L_33, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var)), List_1_Add_mCAB8E72F24B803816C5286F764E024D810E4E6C6_RuntimeMethod_var);
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0294:
	{
		int32_t L_35 = V_2;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_36 = V_1;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_027a;
		}
	}
	{
		List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* L_37 = V_0;
		((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->____tokens_0 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->____tokens_0), (void*)L_37);
		return;
	}
}
// System.Collections.Generic.IList`1<Solana.Unity.Extensions.Models.TokenMint.TokenDef> Solana.Unity.Extensions.WellKnownTokens::All()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WellKnownTokens_All_mF5F25258826BDFF5BB171D85E90C36A228D19F77 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7211545F73A91AE8CE1FBF3EF09BF8936826034D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var);
		List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* L_0 = ((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->____tokens_0;
		List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* L_1 = (List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675*)il2cpp_codegen_object_new(List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7211545F73A91AE8CE1FBF3EF09BF8936826034D(L_1, L_0, List_1__ctor_m7211545F73A91AE8CE1FBF3EF09BF8936826034D_RuntimeMethod_var);
		return L_1;
	}
}
// Solana.Unity.Extensions.TokenMintResolver Solana.Unity.Extensions.WellKnownTokens::CreateTokenMintResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* WellKnownTokens_CreateTokenMintResolver_m71A04C659F46FC994846699FFA26B35286CD949C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m47F61ABEDB60E04336CFB76FF2157F532163285A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m82507BBCC84EDA18A526DA7918E9CF76775B999E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7039604A42771F859FACFCF0EA586FE655E68618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCFEBF16B3B26CE59BD19C7B2ECA62B1A71A7D9F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* V_0 = NULL;
	Enumerator_tC8E0EF05C012F0C94CCE1AECF59B80183950E246 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* V_2 = NULL;
	{
		TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* L_0 = (TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6*)il2cpp_codegen_object_new(TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TokenMintResolver__ctor_mA5EC797F104F5C23903C6A163625B9698558D160(L_0, NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var);
		List_1_tD3BE5D90F546E41BDC322EB35AF658E2A32DF675* L_1 = ((WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_StaticFields*)il2cpp_codegen_static_fields_for(WellKnownTokens_tD67B3714933420BB94ADB2D8AF4309879A83C5B0_il2cpp_TypeInfo_var))->____tokens_0;
		NullCheck(L_1);
		Enumerator_tC8E0EF05C012F0C94CCE1AECF59B80183950E246 L_2;
		L_2 = List_1_GetEnumerator_mCFEBF16B3B26CE59BD19C7B2ECA62B1A71A7D9F6(L_1, List_1_GetEnumerator_mCFEBF16B3B26CE59BD19C7B2ECA62B1A71A7D9F6_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m47F61ABEDB60E04336CFB76FF2157F532163285A((&V_1), Enumerator_Dispose_m47F61ABEDB60E04336CFB76FF2157F532163285A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_0013_1:
			{
				TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_3;
				L_3 = Enumerator_get_Current_m7039604A42771F859FACFCF0EA586FE655E68618_inline((&V_1), Enumerator_get_Current_m7039604A42771F859FACFCF0EA586FE655E68618_RuntimeMethod_var);
				V_2 = L_3;
				TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* L_4 = V_0;
				TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_5 = V_2;
				NullCheck(L_4);
				TokenMintResolver_Add_m0C754F83A31A3D878BCAFD5584E21EBC9074E84F(L_4, L_5, NULL);
			}

IL_0022_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_m82507BBCC84EDA18A526DA7918E9CF76775B999E((&V_1), Enumerator_MoveNext_m82507BBCC84EDA18A526DA7918E9CF76775B999E_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		TokenMintResolver_t8C186DEECEB40CE087C51406536C7F1BAE2A01D6* L_7 = V_0;
		return L_7;
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
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList::.ctor(System.Collections.Generic.IEnumerable`1<Solana.Unity.Extensions.TokenWalletAccount>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, RuntimeObject* ___accounts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9CA6560781E4F09D62EA081916D1B42F5370393B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___accounts0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE571C9AFC6FEADD447A633583A2852DB10BC8CFD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C_RuntimeMethod_var)));
	}

IL_0017:
	{
		List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E* L_3 = (List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E*)il2cpp_codegen_object_new(List_1_t858E5D23CB13F70EF61E200B5805B9B0F21FBC3E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m9CA6560781E4F09D62EA081916D1B42F5370393B(L_3, G_B2_0, List_1__ctor_m9CA6560781E4F09D62EA081916D1B42F5370393B_RuntimeMethod_var);
		NullCheck(G_B2_1);
		G_B2_1->____list_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____list_0), (void*)L_3);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<Solana.Unity.Extensions.TokenWalletAccount> Solana.Unity.Extensions.Models.TokenWalletFilterList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenWalletFilterList_GetEnumerator_m623881DD52FFE534188CA40AD9A4B43921E2AF64 (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3E11F6E448DB9A84526E610784611B2A3096CA58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Solana.Unity.Extensions.TokenWalletAccount>::GetEnumerator() */, IEnumerable_1_t3E11F6E448DB9A84526E610784611B2A3096CA58_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Solana.Unity.Extensions.Models.TokenWalletFilterList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenWalletFilterList_System_Collections_IEnumerable_GetEnumerator_mAF70F4E5137886ADB7EE7664156E159F89FEB916 (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3E11F6E448DB9A84526E610784611B2A3096CA58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Solana.Unity.Extensions.TokenWalletAccount>::GetEnumerator() */, IEnumerable_1_t3E11F6E448DB9A84526E610784611B2A3096CA58_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Solana.Unity.Extensions.Models.TokenWalletFilterList Solana.Unity.Extensions.Models.TokenWalletFilterList::ForToken(Solana.Unity.Extensions.Models.TokenMint.TokenDef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* TokenWalletFilterList_ForToken_m4BE948CA1784BAA77F1985FD33B99E26117B2CC8 (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CForTokenU3Eb__0_m11AE38D49AAEE925F9A084470485D492DA6F715A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE* L_0 = (U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mA41E16D2C779B78397BE1DBD7A5407EA45A5DBB5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE* L_1 = V_0;
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_2 = ___token0;
		NullCheck(L_1);
		L_1->___token_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___token_0), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE* L_3 = V_0;
		NullCheck(L_3);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_4 = L_3->___token_0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3988471A2015D5CC894E22E1A900B66E97CD4306)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWalletFilterList_ForToken_m4BE948CA1784BAA77F1985FD33B99E26117B2CC8_RuntimeMethod_var)));
	}

IL_0020:
	{
		RuntimeObject* L_6 = __this->____list_0;
		U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE* L_7 = V_0;
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_8 = (Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600*)il2cpp_codegen_object_new(Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_2__ctor_mECC8FDC800F14E3EA86BB6DF802A20C4CF052F71(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CForTokenU3Eb__0_m11AE38D49AAEE925F9A084470485D492DA6F715A_RuntimeMethod_var), NULL);
		RuntimeObject* L_9;
		L_9 = Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B(L_6, L_8, Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_10 = (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D*)il2cpp_codegen_object_new(TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C(L_10, L_9, NULL);
		return L_10;
	}
}
// Solana.Unity.Extensions.Models.TokenWalletFilterList Solana.Unity.Extensions.Models.TokenWalletFilterList::WithSymbol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* TokenWalletFilterList_WithSymbol_mEFA64AA481954B88929F73579D9CC3449827B2B0 (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, String_t* ___symbol0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CWithSymbolU3Eb__0_m502B1EAFBE37726C82D869F30DC70B575E0423FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92* L_0 = (U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m8788CEDF6878A5190C2E43BB8C2BDFD1F1770247(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92* L_1 = V_0;
		String_t* L_2 = ___symbol0;
		NullCheck(L_1);
		L_1->___symbol_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___symbol_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___symbol_0;
		bool L_5;
		L_5 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_4, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2E80D292EF114389BA7BA391D7EA63456D3073D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWalletFilterList_WithSymbol_mEFA64AA481954B88929F73579D9CC3449827B2B0_RuntimeMethod_var)));
	}

IL_0025:
	{
		RuntimeObject* L_7 = __this->____list_0;
		U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92* L_8 = V_0;
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_9 = (Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600*)il2cpp_codegen_object_new(Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_mECC8FDC800F14E3EA86BB6DF802A20C4CF052F71(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CWithSymbolU3Eb__0_m502B1EAFBE37726C82D869F30DC70B575E0423FF_RuntimeMethod_var), NULL);
		RuntimeObject* L_10;
		L_10 = Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B(L_7, L_9, Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_11 = (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D*)il2cpp_codegen_object_new(TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C(L_11, L_10, NULL);
		return L_11;
	}
}
// Solana.Unity.Extensions.TokenWalletAccount Solana.Unity.Extensions.Models.TokenWalletFilterList::WithPublicKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* TokenWalletFilterList_WithPublicKey_m1CBE91C7ACE700D0137B24EF85599D5B31F1BF44 (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, String_t* ___publicKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mE65AF05E694AD6B39C3D2A81EF243470E70B5CEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CWithPublicKeyU3Eb__0_m0E9822D5A2B622CF1EA9C439CFE0EDAFF549955F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259* L_0 = (U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_m8341C586697B2B1D27713588D263E7E6A1C48693(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259* L_1 = V_0;
		String_t* L_2 = ___publicKey0;
		NullCheck(L_1);
		L_1->___publicKey_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___publicKey_0), (void*)L_2);
		U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___publicKey_0;
		bool L_5;
		L_5 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_4, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55E33AEC810D7C6A9309168416814B8AB9759431)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWalletFilterList_WithPublicKey_m1CBE91C7ACE700D0137B24EF85599D5B31F1BF44_RuntimeMethod_var)));
	}

IL_0025:
	{
		RuntimeObject* L_7 = __this->____list_0;
		U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259* L_8 = V_0;
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_9 = (Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600*)il2cpp_codegen_object_new(Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_mECC8FDC800F14E3EA86BB6DF802A20C4CF052F71(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CWithPublicKeyU3Eb__0_m0E9822D5A2B622CF1EA9C439CFE0EDAFF549955F_RuntimeMethod_var), NULL);
		RuntimeObject* L_10;
		L_10 = Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B(L_7, L_9, Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_11 = (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D*)il2cpp_codegen_object_new(TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C(L_11, L_10, NULL);
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_12;
		L_12 = Enumerable_FirstOrDefault_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mE65AF05E694AD6B39C3D2A81EF243470E70B5CEA(L_11, Enumerable_FirstOrDefault_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mE65AF05E694AD6B39C3D2A81EF243470E70B5CEA_RuntimeMethod_var);
		return L_12;
	}
}
// Solana.Unity.Extensions.Models.TokenWalletFilterList Solana.Unity.Extensions.Models.TokenWalletFilterList::WithMint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* TokenWalletFilterList_WithMint_mECC22CF8AEA5474E3EFAFDC1FB713F2A602A5E8A (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, String_t* ___mint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CWithMintU3Eb__0_m27D19D23B3AB0AB4CD41DD3F4D99C854EB1F6721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E* L_0 = (U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m6EE115CC4D37878190D0439BE0433E3FB85948D9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E* L_1 = V_0;
		String_t* L_2 = ___mint0;
		NullCheck(L_1);
		L_1->___mint_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___mint_0), (void*)L_2);
		RuntimeObject* L_3 = __this->____list_0;
		U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E* L_4 = V_0;
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_5 = (Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600*)il2cpp_codegen_object_new(Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mECC8FDC800F14E3EA86BB6DF802A20C4CF052F71(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CWithMintU3Eb__0_m27D19D23B3AB0AB4CD41DD3F4D99C854EB1F6721_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B(L_3, L_5, Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_7 = (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D*)il2cpp_codegen_object_new(TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C(L_7, L_6, NULL);
		return L_7;
	}
}
// Solana.Unity.Extensions.Models.TokenWalletFilterList Solana.Unity.Extensions.Models.TokenWalletFilterList::WithAtLeast(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* TokenWalletFilterList_WithAtLeast_m8141942F059B328B94DD4933993D594CC1BBFC1B (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___minimumBalance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CWithAtLeastU3Eb__0_mE2510613CE68884E7E572770C590EE1E06287F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118* L_0 = (U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m2875A8B44EF6886F03586309E141A6D21E40625A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118* L_1 = V_0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = ___minimumBalance0;
		NullCheck(L_1);
		L_1->___minimumBalance_0 = L_2;
		RuntimeObject* L_3 = __this->____list_0;
		U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118* L_4 = V_0;
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_5 = (Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600*)il2cpp_codegen_object_new(Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mECC8FDC800F14E3EA86BB6DF802A20C4CF052F71(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CWithAtLeastU3Eb__0_mE2510613CE68884E7E572770C590EE1E06287F74_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B(L_3, L_5, Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_7 = (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D*)il2cpp_codegen_object_new(TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C(L_7, L_6, NULL);
		return L_7;
	}
}
// Solana.Unity.Extensions.Models.TokenWalletFilterList Solana.Unity.Extensions.Models.TokenWalletFilterList::WithAtLeast(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* TokenWalletFilterList_WithAtLeast_m074B9BCB6BFB569CCD88DDEE33929BBE299BEA5D (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, uint64_t ___minimumBalance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CWithAtLeastU3Eb__0_m55196783AC44E9CB236A12C063A182AC7C18A88C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C* L_0 = (U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_mF3C789A7617BFB6598893DA13DA5733005802607(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C* L_1 = V_0;
		uint64_t L_2 = ___minimumBalance0;
		NullCheck(L_1);
		L_1->___minimumBalance_0 = L_2;
		RuntimeObject* L_3 = __this->____list_0;
		U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C* L_4 = V_0;
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_5 = (Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600*)il2cpp_codegen_object_new(Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mECC8FDC800F14E3EA86BB6DF802A20C4CF052F71(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CWithAtLeastU3Eb__0_m55196783AC44E9CB236A12C063A182AC7C18A88C_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B(L_3, L_5, Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_7 = (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D*)il2cpp_codegen_object_new(TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C(L_7, L_6, NULL);
		return L_7;
	}
}
// Solana.Unity.Extensions.Models.TokenWalletFilterList Solana.Unity.Extensions.Models.TokenWalletFilterList::WithNonZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* TokenWalletFilterList_WithNonZero_m9FFCAF9091AAC0A6CED7CC60F0E418B69C0CB65B (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CWithNonZeroU3Eb__10_0_m2E46E2D95D0A9711F6BB8711B8C469E7573D09EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____list_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var);
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_1 = ((U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1;
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var);
		U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4* L_3 = ((U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_4 = (Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600*)il2cpp_codegen_object_new(Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mECC8FDC800F14E3EA86BB6DF802A20C4CF052F71(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CWithNonZeroU3Eb__10_0_m2E46E2D95D0A9711F6BB8711B8C469E7573D09EC_RuntimeMethod_var), NULL);
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_5 = L_4;
		((U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B(G_B2_1, G_B2_0, Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_7 = (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D*)il2cpp_codegen_object_new(TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C(L_7, L_6, NULL);
		return L_7;
	}
}
// Solana.Unity.Extensions.Models.TokenWalletFilterList Solana.Unity.Extensions.Models.TokenWalletFilterList::WhichAreAssociatedTokenAccounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* TokenWalletFilterList_WhichAreAssociatedTokenAccounts_m1855DDC6D9F0DEC09AC4CB078A9A1A564CE92669 (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CWhichAreAssociatedTokenAccountsU3Eb__11_0_m5BCBE032F661C863725356B0E95AD12196039FD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____list_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var);
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_1 = ((U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_2;
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var);
		U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4* L_3 = ((U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_4 = (Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600*)il2cpp_codegen_object_new(Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mECC8FDC800F14E3EA86BB6DF802A20C4CF052F71(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CWhichAreAssociatedTokenAccountsU3Eb__11_0_m5BCBE032F661C863725356B0E95AD12196039FD6_RuntimeMethod_var), NULL);
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_5 = L_4;
		((U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B(G_B2_1, G_B2_0, Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_7 = (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D*)il2cpp_codegen_object_new(TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C(L_7, L_6, NULL);
		return L_7;
	}
}
// Solana.Unity.Extensions.TokenWalletAccount Solana.Unity.Extensions.Models.TokenWalletFilterList::AssociatedTokenAccount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* TokenWalletFilterList_AssociatedTokenAccount_m251D00C77A5E2B88AA06406B1AB4D30D2F989ADD (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mB26E6487168FD7282C2D658AECF9AD1CB2DCC855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mA08E426415C9FBB5FC1A303C4BECDB0AC40A2DD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* V_0 = NULL;
	{
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_0;
		L_0 = TokenWalletFilterList_WhichAreAssociatedTokenAccounts_m1855DDC6D9F0DEC09AC4CB078A9A1A564CE92669(__this, NULL);
		V_0 = L_0;
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_1 = V_0;
		int32_t L_2;
		L_2 = Enumerable_Count_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mB26E6487168FD7282C2D658AECF9AD1CB2DCC855(L_1, Enumerable_Count_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mB26E6487168FD7282C2D658AECF9AD1CB2DCC855_RuntimeMethod_var);
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_3 = V_0;
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_4;
		L_4 = Enumerable_First_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mA08E426415C9FBB5FC1A303C4BECDB0AC40A2DD4(L_3, Enumerable_First_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_mA08E426415C9FBB5FC1A303C4BECDB0AC40A2DD4_RuntimeMethod_var);
		return L_4;
	}

IL_0017:
	{
		return (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D*)NULL;
	}
}
// Solana.Unity.Extensions.Models.TokenWalletFilterList Solana.Unity.Extensions.Models.TokenWalletFilterList::WithCustomFilter(System.Predicate`1<Solana.Unity.Extensions.TokenWalletAccount>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* TokenWalletFilterList_WithCustomFilter_m0E69163928C20EC84E32981BACB91F2BD814B6E9 (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* __this, Predicate_1_t2B924A8D85AFBF69B001EB1CB9B49274C086ED71* ___filter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CWithCustomFilterU3Eb__0_m6F7F38AD73B1B62B9C053351E843F3DBD85D8100_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06* L_0 = (U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m82481696E7D190A27B590955392E6332D184CC10(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06* L_1 = V_0;
		Predicate_1_t2B924A8D85AFBF69B001EB1CB9B49274C086ED71* L_2 = ___filter0;
		NullCheck(L_1);
		L_1->___filter_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___filter_0), (void*)L_2);
		U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06* L_3 = V_0;
		NullCheck(L_3);
		Predicate_1_t2B924A8D85AFBF69B001EB1CB9B49274C086ED71* L_4 = L_3->___filter_0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenWalletFilterList_WithCustomFilter_m0E69163928C20EC84E32981BACB91F2BD814B6E9_RuntimeMethod_var)));
	}

IL_0020:
	{
		RuntimeObject* L_6 = __this->____list_0;
		U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06* L_7 = V_0;
		Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600* L_8 = (Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600*)il2cpp_codegen_object_new(Func_2_t484AB0A5A2EB61FF0B263001FAEE48FD2E9DC600_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_2__ctor_mECC8FDC800F14E3EA86BB6DF802A20C4CF052F71(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CWithCustomFilterU3Eb__0_m6F7F38AD73B1B62B9C053351E843F3DBD85D8100_RuntimeMethod_var), NULL);
		RuntimeObject* L_9;
		L_9 = Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B(L_6, L_8, Enumerable_Where_TisTokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D_m3B8AD021A02CE9348A836A8CDBA96825E30F499B_RuntimeMethod_var);
		TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D* L_10 = (TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D*)il2cpp_codegen_object_new(TokenWalletFilterList_t84F55377A0F50CBDA14A7D7D663D7D41AF9D8C5D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		TokenWalletFilterList__ctor_m6DAAAE0CE6CBC82F465C3B258C12CBB1AC30E82C(L_10, L_9, NULL);
		return L_10;
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
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC0C0129B075691F50D62C3976284B495641E2ABB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4* L_0 = (U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4*)il2cpp_codegen_object_new(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9FE98BF8DD9303E8D0C1583330C26998E29ED91D(L_0, NULL);
		((U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9FE98BF8DD9303E8D0C1583330C26998E29ED91D (U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c::<WithNonZero>b__10_0(Solana.Unity.Extensions.TokenWalletAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CWithNonZeroU3Eb__10_0_m2E46E2D95D0A9711F6BB8711B8C469E7573D09EC (U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___x0, const RuntimeMethod* method) 
{
	{
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_0 = ___x0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = TokenQuantity_get_QuantityRaw_m4568F62D6A019E2ED22B04545DCC480647AD0AB0_inline(L_0, NULL);
		return (bool)((!(((uint64_t)L_1) <= ((uint64_t)((int64_t)0))))? 1 : 0);
	}
}
// System.Boolean Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c::<WhichAreAssociatedTokenAccounts>b__11_0(Solana.Unity.Extensions.TokenWalletAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CWhichAreAssociatedTokenAccountsU3Eb__11_0_m5BCBE032F661C863725356B0E95AD12196039FD6 (U3CU3Ec_tF57E3DBC4AEE0BD97B19F275E877E534F98612B4* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___x0, const RuntimeMethod* method) 
{
	{
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = TokenWalletAccount_get_IsAssociatedTokenAccount_m075A43BE0B9EC0F1E68AF7DC54517D2358C143BF_inline(L_0, NULL);
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
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m82481696E7D190A27B590955392E6332D184CC10 (U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass13_0::<WithCustomFilter>b__0(Solana.Unity.Extensions.TokenWalletAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CWithCustomFilterU3Eb__0_m6F7F38AD73B1B62B9C053351E843F3DBD85D8100 (U3CU3Ec__DisplayClass13_0_tA305D9F7ADCFCFAEE46516C4471415994907AF06* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___x0, const RuntimeMethod* method) 
{
	{
		Predicate_1_t2B924A8D85AFBF69B001EB1CB9B49274C086ED71* L_0 = __this->___filter_0;
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_1 = ___x0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Predicate_1_Invoke_mF091D37BEE65E344A92FC82B3FCD5C1303396E5A_inline(L_0, L_1, NULL);
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
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mA41E16D2C779B78397BE1DBD7A5407EA45A5DBB5 (U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass4_0::<ForToken>b__0(Solana.Unity.Extensions.TokenWalletAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CForTokenU3Eb__0_m11AE38D49AAEE925F9A084470485D492DA6F715A (U3CU3Ec__DisplayClass4_0_tEFE6CD744BAA446A9C9AEE12BAA45556F2C288AE* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___x0, const RuntimeMethod* method) 
{
	{
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TokenQuantity_get_TokenMint_mA08A2767983BFE76AE187AB101E0B6EA2B87FF1E_inline(L_0, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_2 = __this->___token_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TokenDef_get_TokenMint_m9C11A72AE8F806C8E3AA87F16A62BACBE294A4EF_inline(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_3, NULL);
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
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m8788CEDF6878A5190C2E43BB8C2BDFD1F1770247 (U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass5_0::<WithSymbol>b__0(Solana.Unity.Extensions.TokenWalletAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CWithSymbolU3Eb__0_m502B1EAFBE37726C82D869F30DC70B575E0423FF (U3CU3Ec__DisplayClass5_0_t26C8DCED7D4E80D1DF9DA5AED9640142D6EA1E92* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___x0, const RuntimeMethod* method) 
{
	{
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TokenQuantity_get_Symbol_mC48660211C14B01AD64BABD3782484FEF579FCD6_inline(L_0, NULL);
		String_t* L_2 = __this->___symbol_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m8341C586697B2B1D27713588D263E7E6A1C48693 (U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass6_0::<WithPublicKey>b__0(Solana.Unity.Extensions.TokenWalletAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CWithPublicKeyU3Eb__0_m0E9822D5A2B622CF1EA9C439CFE0EDAFF549955F (U3CU3Ec__DisplayClass6_0_t08FF201D60DFC34EDACFE5AF96B752EF8E081259* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___x0, const RuntimeMethod* method) 
{
	{
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TokenWalletAccount_get_PublicKey_mB34F80B2E26590EFB3C70BDEFCA6055D20FBCAFA_inline(L_0, NULL);
		String_t* L_2 = __this->___publicKey_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m6EE115CC4D37878190D0439BE0433E3FB85948D9 (U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass7_0::<WithMint>b__0(Solana.Unity.Extensions.TokenWalletAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3CWithMintU3Eb__0_m27D19D23B3AB0AB4CD41DD3F4D99C854EB1F6721 (U3CU3Ec__DisplayClass7_0_t720845CA73727648730B98BAE0E700C689FC859E* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___x0, const RuntimeMethod* method) 
{
	{
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TokenQuantity_get_TokenMint_mA08A2767983BFE76AE187AB101E0B6EA2B87FF1E_inline(L_0, NULL);
		String_t* L_2 = __this->___mint_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m2875A8B44EF6886F03586309E141A6D21E40625A (U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass8_0::<WithAtLeast>b__0(Solana.Unity.Extensions.TokenWalletAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CWithAtLeastU3Eb__0_mE2510613CE68884E7E572770C590EE1E06287F74 (U3CU3Ec__DisplayClass8_0_t8E78C0F7ACA45C60DFB827EF7B1A7BB2838ED118* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_0 = ___x0;
		NullCheck(L_0);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = TokenQuantity_get_QuantityDecimal_m13F35912C1E5B59B18608B7FAE522577E7A94EA7_inline(L_0, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = __this->___minimumBalance_0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Decimal_op_GreaterThanOrEqual_m58389CF06B86290F31B8F12D204D9B8AEBF107F3(L_1, L_2, NULL);
		return L_3;
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
// System.Void Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mF3C789A7617BFB6598893DA13DA5733005802607 (U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Solana.Unity.Extensions.Models.TokenWalletFilterList/<>c__DisplayClass9_0::<WithAtLeast>b__0(Solana.Unity.Extensions.TokenWalletAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CWithAtLeastU3Eb__0_m55196783AC44E9CB236A12C063A182AC7C18A88C (U3CU3Ec__DisplayClass9_0_t6A852F29B3DA095EBE59000CDFB97C9C94B4896C* __this, TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* ___x0, const RuntimeMethod* method) 
{
	{
		TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* L_0 = ___x0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = TokenQuantity_get_QuantityRaw_m4568F62D6A019E2ED22B04545DCC480647AD0AB0_inline(L_0, NULL);
		uint64_t L_2 = __this->___minimumBalance_0;
		return (bool)((((int64_t)L_1) == ((int64_t)L_2))? 1 : 0);
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
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenDef::.ctor(System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___mint0, String_t* ___name1, String_t* ___symbol2, int32_t ___decimalPlaces3, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* G_B1_1 = NULL;
	String_t* G_B4_0 = NULL;
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* G_B3_1 = NULL;
	String_t* G_B6_0 = NULL;
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* G_B5_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___mint0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE6A0DE909ED9D1DC050D44EA5FC852CF0615412)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE_RuntimeMethod_var)));
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		TokenDef_set_TokenMint_m50460A66C9137E444C38560BC4971BC4BD99B59F_inline(G_B2_1, G_B2_0, NULL);
		String_t* L_3 = ___name1;
		String_t* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_002d;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE_RuntimeMethod_var)));
	}

IL_002d:
	{
		NullCheck(G_B4_1);
		TokenDef_set_TokenName_m8454998BFFA1E564770AB4C28E5150DB17FA9639_inline(G_B4_1, G_B4_0, NULL);
		String_t* L_6 = ___symbol2;
		String_t* L_7 = L_6;
		G_B5_0 = L_7;
		G_B5_1 = __this;
		if (L_7)
		{
			G_B6_0 = L_7;
			G_B6_1 = __this;
			goto IL_0043;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_8 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2E80D292EF114389BA7BA391D7EA63456D3073D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE_RuntimeMethod_var)));
	}

IL_0043:
	{
		NullCheck(G_B6_1);
		TokenDef_set_Symbol_mD37C660F94BDB265EC37146D9A8CFD30303DBB91_inline(G_B6_1, G_B6_0, NULL);
		int32_t L_9 = ___decimalPlaces3;
		TokenDef_set_DecimalPlaces_m26E07B3B04EB9EA208520F53148601F0E27778AF_inline(__this, L_9, NULL);
		return;
	}
}
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_TokenMint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenDef_get_TokenMint_m9C11A72AE8F806C8E3AA87F16A62BACBE294A4EF (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenMintU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_TokenMint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenDef_set_TokenMint_m50460A66C9137E444C38560BC4971BC4BD99B59F (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenMintU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenMintU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_TokenName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenDef_get_TokenName_m5F5C15AC4C1350DDE67D6443C577E8DBAA8D23FA (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_TokenName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenDef_set_TokenName_m8454998BFFA1E564770AB4C28E5150DB17FA9639 (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_Symbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenDef_get_Symbol_mF10C13255383D8CF7F10427121498A9FF525ECF5 (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSymbolU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_Symbol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenDef_set_Symbol_mD37C660F94BDB265EC37146D9A8CFD30303DBB91 (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSymbolU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSymbolU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Int32 Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_DecimalPlaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TokenDef_get_DecimalPlaces_m47B7CDF205D0183783B65710019B623F0B0B22A0 (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDecimalPlacesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_DecimalPlaces(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenDef_set_DecimalPlaces_m26E07B3B04EB9EA208520F53148601F0E27778AF (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDecimalPlacesU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_CoinGeckoId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenDef_get_CoinGeckoId_m0A784665A828DBC947E7BC990877EE02339CC405 (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCoinGeckoIdU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_CoinGeckoId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenDef_set_CoinGeckoId_m58DF8B5B0F558D5869E99194806347EECB3CFC01 (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCoinGeckoIdU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCoinGeckoIdU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_TokenProjectUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenDef_get_TokenProjectUrl_mA41F6A3B4348CEBE6F7E7CF68CA56E7D61CDFE67 (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenProjectUrlU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_TokenProjectUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenDef_set_TokenProjectUrl_m5A9C75C7AA4DC27730B4267F1281528485B1A941 (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenProjectUrlU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenProjectUrlU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenDef::get_TokenLogoUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenDef_get_TokenLogoUrl_m2E36B5B6A8FEB3D178410BA8B20A6280D6F3035A (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenLogoUrlU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Extensions.Models.TokenMint.TokenDef::set_TokenLogoUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenDef_set_TokenLogoUrl_m0A96C70BE39ED0B81E7E3FB120FEF9E6040ABF8F (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenLogoUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenLogoUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// Solana.Unity.Extensions.TokenQuantity Solana.Unity.Extensions.Models.TokenMint.TokenDef::CreateQuantity(System.Decimal,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* TokenDef_CreateQuantity_mA3D1FAB51834708E02FF1D994B5155946477BD8F (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___valueDecimal0, uint64_t ___valueRaw1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___valueDecimal0;
		uint64_t L_1 = ___valueRaw1;
		TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* L_2 = (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59*)il2cpp_codegen_object_new(TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TokenQuantity__ctor_m7E4959AD5EABF35D2FD2CFE52A3D688B61ADD767(L_2, __this, L_0, L_1, NULL);
		return L_2;
	}
}
// Solana.Unity.Extensions.TokenQuantity Solana.Unity.Extensions.Models.TokenMint.TokenDef::CreateQuantityWithRaw(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* TokenDef_CreateQuantityWithRaw_mCE25EB812CFA6B8CC2048DCFF91CCFDFA28D0C59 (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = TokenDef_ConvertUlongToDecimal_m5CA83D515E01B776D85CEA8C18E5A8E584749A8B(__this, L_0, NULL);
		uint64_t L_2 = ___value0;
		TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* L_3;
		L_3 = TokenDef_CreateQuantity_mA3D1FAB51834708E02FF1D994B5155946477BD8F(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// Solana.Unity.Extensions.TokenQuantity Solana.Unity.Extensions.Models.TokenMint.TokenDef::CreateQuantityWithDecimal(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* TokenDef_CreateQuantityWithDecimal_mCD0BB1F6ECF403769B96131AD3E466E497B3EBB8 (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___value0;
		uint64_t L_2;
		L_2 = TokenDef_ConvertDecimalToUlong_m27A55D52FFD6AA2C7198B1A8EF4C839B9DE4FB3E(__this, L_1, NULL);
		TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* L_3;
		L_3 = TokenDef_CreateQuantity_mA3D1FAB51834708E02FF1D994B5155946477BD8F(__this, L_0, L_2, NULL);
		return L_3;
	}
}
// System.UInt64 Solana.Unity.Extensions.Models.TokenMint.TokenDef::ConvertDecimalToUlong(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TokenDef_ConvertDecimalToUlong_m27A55D52FFD6AA2C7198B1A8EF4C839B9DE4FB3E (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = TokenDef_get_DecimalPlaces_m47B7CDF205D0183783B65710019B623F0B0B22A0_inline(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_1;
		L_1 = TokenDef_get_TokenMint_m9C11A72AE8F806C8E3AA87F16A62BACBE294A4EF_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27ABE71F1CEC5AC21624FF97DAB57C7949B71E48)), L_1, NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_3 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenDef_ConvertDecimalToUlong_m27A55D52FFD6AA2C7198B1A8EF4C839B9DE4FB3E_RuntimeMethod_var)));
	}

IL_001f:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4 = ___value0;
		V_0 = L_4;
		V_1 = 0;
		goto IL_0037;
	}

IL_0025:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = V_0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_6), ((int32_t)10), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7;
		L_7 = Decimal_Multiply_mEC179A2E4BE8AD8F83991B27C0948806D9ED82BC(L_5, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0037:
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = TokenDef_get_DecimalPlaces_m47B7CDF205D0183783B65710019B623F0B0B22A0_inline(__this, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0025;
		}
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12;
		L_12 = Decimal_Floor_m2BE09F241A5497A80E7F92A133B45AAC73ED061D(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_13;
		L_13 = Convert_ToUInt64_mB6CF7957EA867EB4B89A90EB145B152FC20F8410(L_12, NULL);
		return L_13;
	}
}
// System.Decimal Solana.Unity.Extensions.Models.TokenMint.TokenDef::ConvertUlongToDecimal(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F TokenDef_ConvertUlongToDecimal_m5CA83D515E01B776D85CEA8C18E5A8E584749A8B (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = TokenDef_get_DecimalPlaces_m47B7CDF205D0183783B65710019B623F0B0B22A0_inline(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_1;
		L_1 = TokenDef_get_TokenMint_m9C11A72AE8F806C8E3AA87F16A62BACBE294A4EF_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27ABE71F1CEC5AC21624FF97DAB57C7949B71E48)), L_1, NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_3 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenDef_ConvertUlongToDecimal_m5CA83D515E01B776D85CEA8C18E5A8E584749A8B_RuntimeMethod_var)));
	}

IL_001f:
	{
		uint64_t L_4 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5;
		L_5 = Decimal_op_Implicit_mA78C1FC00B4E76A91931998BD4FDE3574A54B090(L_4, NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_003c;
	}

IL_002a:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6 = V_0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_7), ((int32_t)10), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8;
		L_8 = Decimal_Divide_m9B75040DBC8AE56CD9B1F6A76DACA644B23518CC(L_6, L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003c:
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = TokenDef_get_DecimalPlaces_m47B7CDF205D0183783B65710019B623F0B0B22A0_inline(__this, NULL);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_002a;
		}
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = V_0;
		return L_12;
	}
}
// Solana.Unity.Extensions.Models.TokenMint.TokenDef Solana.Unity.Extensions.Models.TokenMint.TokenDef::CloneWithKnownDecimals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* TokenDef_CloneWithKnownDecimals_m08ED941099F660B0E21FF112DE380D61ACC060FD (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, int32_t ___decimalPlaces0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___decimalPlaces0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82A1BA10F869975F64777D136D1C83BB93F8A58C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TokenDef_CloneWithKnownDecimals_m08ED941099F660B0E21FF112DE380D61ACC060FD_RuntimeMethod_var)));
	}

IL_000f:
	{
		String_t* L_2;
		L_2 = TokenDef_get_TokenMint_m9C11A72AE8F806C8E3AA87F16A62BACBE294A4EF_inline(__this, NULL);
		String_t* L_3;
		L_3 = TokenDef_get_TokenName_m5F5C15AC4C1350DDE67D6443C577E8DBAA8D23FA_inline(__this, NULL);
		String_t* L_4;
		L_4 = TokenDef_get_Symbol_mF10C13255383D8CF7F10427121498A9FF525ECF5_inline(__this, NULL);
		int32_t L_5 = ___decimalPlaces0;
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_6 = (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32*)il2cpp_codegen_object_new(TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TokenDef__ctor_mEEB480331D6AE6A4290637C1F3F0CB67FDDAE9EE(L_6, L_2, L_3, L_4, L_5, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_7 = L_6;
		String_t* L_8;
		L_8 = TokenDef_get_CoinGeckoId_m0A784665A828DBC947E7BC990877EE02339CC405_inline(__this, NULL);
		NullCheck(L_7);
		TokenDef_set_CoinGeckoId_m58DF8B5B0F558D5869E99194806347EECB3CFC01_inline(L_7, L_8, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_9 = L_7;
		String_t* L_10;
		L_10 = TokenDef_get_TokenLogoUrl_m2E36B5B6A8FEB3D178410BA8B20A6280D6F3035A_inline(__this, NULL);
		NullCheck(L_9);
		TokenDef_set_TokenLogoUrl_m0A96C70BE39ED0B81E7E3FB120FEF9E6040ABF8F_inline(L_9, L_10, NULL);
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_11 = L_9;
		String_t* L_12;
		L_12 = TokenDef_get_TokenProjectUrl_mA41F6A3B4348CEBE6F7E7CF68CA56E7D61CDFE67_inline(__this, NULL);
		NullCheck(L_11);
		TokenDef_set_TokenProjectUrl_m5A9C75C7AA4DC27730B4267F1281528485B1A941_inline(L_11, L_12, NULL);
		return L_11;
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
// System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenListItem> Solana.Unity.Extensions.Models.TokenMint.TokenListDoc::get_tokens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* TokenListDoc_get_tokens_mBE8DCDBCD854F05A583F46581D8256A0FD5F611B (TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* L_0 = __this->___U3CtokensU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenListDoc::set_tokens(System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenListItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListDoc_set_tokens_m9687DC98473EABD09B38987E2631A1FEF7C2CE66 (TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* __this, List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* L_0 = ___value0;
		__this->___U3CtokensU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtokensU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenListDoc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListDoc__ctor_m00F107588F7B0D65ED4F3A1E66CA610241F00442 (TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenListDoc::.ctor(System.Collections.Generic.List`1<Solana.Unity.Extensions.Models.TokenMint.TokenListItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListDoc__ctor_mBBCE2F73847C255B38A05B2C23E0AE75AA25B121 (TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* __this, List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* ___tokens0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* L_0 = ___tokens0;
		TokenListDoc_set_tokens_m9687DC98473EABD09B38987E2631A1FEF7C2CE66_inline(__this, L_0, NULL);
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
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenListItem::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenListItem_get_Address_m6522AB5DCCBA5F5ABDBDFE8424EA6C825E4E1305 (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenListItem::set_Address(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListItem_set_Address_mD19EBCADFC04320831AAB44E7EF920A786A0CA12 (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAddressU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenListItem::get_Symbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenListItem_get_Symbol_mEEBB90292D58DBB1FA27FCA742ADE0120BD2C218 (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSymbolU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenListItem::set_Symbol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListItem_set_Symbol_mD10BC78451339336A6EDF83FE110841D1ED1AB7D (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSymbolU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSymbolU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenListItem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenListItem_get_Name_m1C4F76B986164CCDD814CF9F6B69B0C9ACB4E743 (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenListItem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListItem_set_Name_m66A3603D769E4551155CF53004C9DA4FA43BEDCB (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Int32 Solana.Unity.Extensions.Models.TokenMint.TokenListItem::get_Decimals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TokenListItem_get_Decimals_mDD6E4559BD6D99FB92760172150BADE13FF42A2F (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDecimalsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenListItem::set_Decimals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListItem_set_Decimals_m051CA2F24C19AB7EA59CD657ADE570942387A60A (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDecimalsU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.String Solana.Unity.Extensions.Models.TokenMint.TokenListItem::get_LogoUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenListItem_get_LogoUri_mE5AB0562E0F1E040C665557F1CFBAE3E6BE801B5 (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLogoUriU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenListItem::set_LogoUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListItem_set_LogoUri_mE922EA645E90A53AF0698C7FEADA3F626E4C40AC (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLogoUriU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLogoUriU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Solana.Unity.Extensions.Models.TokenMint.TokenListItem::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* TokenListItem_get_Extensions_m172F5431771AD9B16FD94B3DBB64FC65C59B3EFE (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CExtensionsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenListItem::set_Extensions(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListItem_set_Extensions_mF2993C021831D14CDD8D57E3BD8B2636D4180504 (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CExtensionsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExtensionsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.Extensions.Models.TokenMint.TokenListItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListItem__ctor_mF902E9DF0EB53C02DE7146FEA631A19DE5ED4B6F (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_TokenDef_mF933ACAE5DC9CBA40E83CD1E0933F172377F8073_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* ___value0, const RuntimeMethod* method) 
{
	{
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_0 = ___value0;
		__this->___U3CTokenDefU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenDefU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenDef_get_Symbol_mF10C13255383D8CF7F10427121498A9FF525ECF5_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSymbolU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_Symbol_m5D8A85A23668AA5BABA2E31C402C2BF23425BC21_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSymbolU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSymbolU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenDef_get_TokenName_m5F5C15AC4C1350DDE67D6443C577E8DBAA8D23FA_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_TokenName_m2124BD17CAC7C0CE5B43A1A80BD08046CAF7FC86_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenDef_get_TokenMint_m9C11A72AE8F806C8E3AA87F16A62BACBE294A4EF_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenMintU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_TokenMint_mEFA0EE0FDBCE50A66AA3FEFCFA5E0F0A2711B2C5_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenMintU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenMintU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TokenDef_get_DecimalPlaces_m47B7CDF205D0183783B65710019B623F0B0B22A0_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDecimalPlacesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_DecimalPlaces_mCF9D872D35D69B2597B0F86BE4A6684E90D70CE9_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDecimalPlacesU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_QuantityDecimal_m8BCD5423FDA3A7D28110685BD3F1E261098F0D5D_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		__this->___U3CQuantityDecimalU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenQuantity_set_QuantityRaw_mFFD6858F8A920D2614BD7DB29330A86503741077_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___U3CQuantityRawU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenQuantity_get_Symbol_mC48660211C14B01AD64BABD3782484FEF579FCD6_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSymbolU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenQuantity_get_TokenName_mF332A5FEA9CC65C10CFEB63D7F05A7E441F5E9D1_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenNameU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F TokenQuantity_get_QuantityDecimal_m13F35912C1E5B59B18608B7FAE522577E7A94EA7_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = __this->___U3CQuantityDecimalU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* TokenQuantity_get_TokenDef_m3E7206E9CD6FC84A06E2B5E0B349E4B06DFA9552_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* L_0 = __this->___U3CTokenDefU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TokenQuantity_get_QuantityRaw_m4568F62D6A019E2ED22B04545DCC480647AD0AB0_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CQuantityRawU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWalletAccount_set_PublicKey_mCB6918F4D29BB45379C6F925974C64133BA19681_inline (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPublicKeyU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicKeyU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWalletAccount_set_Owner_mEC0ED5C5D2EE4F3FB8DA808918DF6F46872548FE_inline (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COwnerU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COwnerU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWalletAccount_set_IsAssociatedTokenAccount_mAB4BDDD2E9B38D6290B1F8E1D025AD6A0BCB17A8_inline (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsAssociatedTokenAccountU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TokenWalletAccount_get_IsAssociatedTokenAccount_m075A43BE0B9EC0F1E68AF7DC54517D2358C143BF_inline (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsAssociatedTokenAccountU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWalletBalance_set_Lamports_mEF4F95ED5E9AF61878CAD680351C64BE6B10ECFE_inline (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___U3CLamportsU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWalletBalance_set_AccountCount_m7AA79B3517CE0458E4D5102E278FB4285F57F196_inline (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CAccountCountU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TokenWalletBalance_get_Lamports_m80B419801AB886D7F0780D3C185DDE99328D73C1_inline (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CLamportsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TokenWalletBalance_get_AccountCount_mD20C9F9157F2F20D31BC77030196BD52029E4FE0_inline (TokenWalletBalance_t7601054677F794BB0B20B79E185379B0BC0D75F9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CAccountCountU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* TokenListDoc_get_tokens_mBE8DCDBCD854F05A583F46581D8256A0FD5F611B_inline (TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* L_0 = __this->___U3CtokensU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_ContractResolver_m88FDD134350590ABDBD87BD2AC124B1A5C2385D5_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CContractResolverU3Ek__BackingField_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContractResolverU3Ek__BackingField_47), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CConvertersU3Ek__BackingField_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenListItem_get_LogoUri_mE5AB0562E0F1E040C665557F1CFBAE3E6BE801B5_inline (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLogoUriU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* TokenListItem_get_Extensions_m172F5431771AD9B16FD94B3DBB64FC65C59B3EFE_inline (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CExtensionsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenListItem_get_Address_m6522AB5DCCBA5F5ABDBDFE8424EA6C825E4E1305_inline (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenListItem_get_Name_m1C4F76B986164CCDD814CF9F6B69B0C9ACB4E743_inline (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenListItem_get_Symbol_mEEBB90292D58DBB1FA27FCA742ADE0120BD2C218_inline (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSymbolU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TokenListItem_get_Decimals_mDD6E4559BD6D99FB92760172150BADE13FF42A2F_inline (TokenListItem_t1DD2E154C9168D0D0DF932AC028F6DC93D858F26* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDecimalsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_CoinGeckoId_m58DF8B5B0F558D5869E99194806347EECB3CFC01_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCoinGeckoIdU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCoinGeckoIdU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_TokenLogoUrl_m0A96C70BE39ED0B81E7E3FB120FEF9E6040ABF8F_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenLogoUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenLogoUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_TokenProjectUrl_m5A9C75C7AA4DC27730B4267F1281528485B1A941_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenProjectUrlU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenProjectUrlU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* HttpMethod_get_Get_mAD94BF07B40B20DAF42CBEEC2E910FC5CE0DA670_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_0 = ((HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_StaticFields*)il2cpp_codegen_static_fields_for(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var))->___get_method_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) 
{
	{
		HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_0 = __this->___U3CContentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TokenWallet_get_Lamports_mA898D3421D5B97424CFC871693C5310D34D6702F_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CLamportsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWallet_set_RpcClient_m605D800CE4E9FACA5A759658C35AF20034D0ECDD_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRpcClientU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRpcClientU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWallet_set_MintResolver_m32D3836BE09065FF00E95050369A48DF91B358A8_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CMintResolverU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMintResolverU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWallet_set_PublicKey_m8398D5C2F73F37F6B9E1AA2B082A43CC5CA9026A_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CPublicKeyU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicKeyU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76_inline (TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* __this, const RuntimeMethod* method) 
{
	{
		TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* L_0 = __this->___U3CAccountU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9_inline (TokenAccountInfo_tB70D1E4AF6D0AE71ABD3745E8C71638541DB25AF* __this, const RuntimeMethod* method) 
{
	{
		TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB_inline (TokenAccountData_tF8A045E9AB646E325582F89E08B34600F54C1A66* __this, const RuntimeMethod* method) 
{
	{
		ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* L_0 = __this->___U3CParsedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED_inline (ParsedTokenAccountData_t34CF7EB41B7DEA0CA7FACC25DA5A2C5E00A8E442* __this, const RuntimeMethod* method) 
{
	{
		TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* L_0 = __this->___U3CInfoU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenAccountInfoDetails_get_Mint_m3335A83447115280C56F2061713666864A65C03C_inline (TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMintU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t AccountInfoBase_get_Lamports_m7A93911FFB8740125E0A8162776621CED052546D_inline (AccountInfoBase_t1D3349589317F053FAC79A6C7FFDEB72B347210B* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CLamportsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* TokenAccountInfoDetails_get_TokenAmount_mCD5AFD1463727A6A85E257470E62C2451F791646_inline (TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* __this, const RuntimeMethod* method) 
{
	{
		TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* L_0 = __this->___U3CTokenAmountU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TokenWallet_get_MintResolver_m789A9FEB1CBA4C99F485FC07C5CAF1C576A1E458_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMintResolverU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TokenBalance_get_Decimals_m256A81CD453B7FE928625C52A92840FF4F2C1616_inline (TokenBalance_t1CA69957CE03D72E204FD4B2415CC252271F1CFE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDecimalsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenAccount_get_PublicKey_mA307152D18933F83868F1AB250842C4F1094906A_inline (TokenAccount_t825A94D86F31DC6DFB39AD69A6201BFA18B17643* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPublicKeyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenAccountInfoDetails_get_Owner_m98E4D9B72749240E19C29D47868EE59A7230C258_inline (TokenAccountInfoDetails_tB9840395A15741A75CA2698FA2E5087F4B1CC1FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COwnerU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* TokenWallet_get_PublicKey_m0AB262A3C3ABDD5672BA0D3027A99F295DE19EF7_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CPublicKeyU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenWalletAccount_get_PublicKey_mB34F80B2E26590EFB3C70BDEFCA6055D20FBCAFA_inline (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPublicKeyU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TokenWallet_get_RpcClient_m1420AD42AD614E4FDA38B76146155ACBD414B7E8_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CRpcClientU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWallet_set_Lamports_m83A69FE8E9EFE449622D5492E3130BBA17057CAC_inline (TokenWallet_t91C549DEA51C0C248CB28E4FB24D15302325F85F* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___U3CLamportsU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenWalletAccount_get_Owner_m90D07C2E6FE1CB65204DA7B0245D8004A73A78B0_inline (TokenWalletAccount_t6A0D2D71EE116BBB4FBA3531724999B686B2EB5D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COwnerU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BlockHash_get_Blockhash_mB1D4C6DF7405E35706409EE52969F9842884AE54_inline (BlockHash_t01BC23F321B989D27E8E37A68BCE97B3C47BD9A3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CBlockhashU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenQuantity_get_TokenMint_mA08A2767983BFE76AE187AB101E0B6EA2B87FF1E_inline (TokenQuantity_tF2C7C12D94695AF19D8D342DD15BD6E517929D59* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenMintU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenWalletException_set_RequestResult_m24ADA4116E27C73AB111C86F00EDDEF52D17C4A5_inline (TokenWalletException_tF00A2CA005AFA420154A220D833F511B6C3F2DE6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRequestResultU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestResultU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_TokenMint_m50460A66C9137E444C38560BC4971BC4BD99B59F_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenMintU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenMintU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_TokenName_m8454998BFFA1E564770AB4C28E5150DB17FA9639_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_Symbol_mD37C660F94BDB265EC37146D9A8CFD30303DBB91_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSymbolU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSymbolU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenDef_set_DecimalPlaces_m26E07B3B04EB9EA208520F53148601F0E27778AF_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDecimalPlacesU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenDef_get_CoinGeckoId_m0A784665A828DBC947E7BC990877EE02339CC405_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCoinGeckoIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenDef_get_TokenLogoUrl_m2E36B5B6A8FEB3D178410BA8B20A6280D6F3035A_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenLogoUrlU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TokenDef_get_TokenProjectUrl_mA41F6A3B4348CEBE6F7E7CF68CA56E7D61CDFE67_inline (TokenDef_t5212F810D13222563B34CAAFDD5A8550DC58DA32* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenProjectUrlU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenListDoc_set_tokens_m9687DC98473EABD09B38987E2631A1FEF7C2CE66_inline (TokenListDoc_t05FBE75344B6DB08E8432811539E8F25AE48706F* __this, List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_tFAD6DC02F0EF8500C18ECDAAB32CED05DA2E972D* L_0 = ___value0;
		__this->___U3CtokensU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtokensU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline (RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CResultU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ResponseValue_1_get_Value_m6FB8CBBB37A0CD1D031E09EC1084703D7FBAA05D_gshared_inline (ResponseValue_1_t0BCADF3E5348490F730192C8C7282EFED595AB57* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = (uint64_t)__this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ResponseValue_1_get_Value_m6C5854737B78630F19EC3D59B572C8A944FE1A18_gshared_inline (ResponseValue_1_t8663D687999D2DEE6072DDA9FD2059BBDE351512* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
