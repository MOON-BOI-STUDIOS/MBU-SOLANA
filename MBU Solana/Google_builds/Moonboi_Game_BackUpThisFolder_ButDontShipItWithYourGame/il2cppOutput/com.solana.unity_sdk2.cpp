#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IList`1<Solana.Unity.Metaplex.NFT.Library.Creator>
struct IList_1_tB05B95847DE28E30CBCAA5A612D667A497FCF935;
// Newtonsoft.Json.JsonConverter`1<Solana.Unity.Metaplex.NFT.Library.Collection>
struct JsonConverter_1_tB6B7225353054F875FA38B7934BE5235CE766AF4;
// Newtonsoft.Json.JsonConverter`1<Solana.Unity.Metaplex.NFT.Library.Creator>
struct JsonConverter_1_t38F8D21E3AC967D2FE023EF1674B82783BD5D335;
// Newtonsoft.Json.JsonConverter`1<System.Object>
struct JsonConverter_1_t452C90AD6A15526CD218C72899E572B0393B5F31;
// Newtonsoft.Json.JsonConverter`1<Solana.Unity.Wallet.PublicKey>
struct JsonConverter_1_t9BC6CD836BC6C8CE406D462D02C836A428DBAB30;
// System.Collections.Generic.List`1<Solana.Unity.Metaplex.Utilities.Json.Attribute>
struct List_1_tAB7180741C6C774B2CDC9EF7D7E02B56836B26AA;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Metaplex.NFT.Library.MetadataAccount>
struct TaskFactory_1_t1BAB1DD150543F0B5649ACE9277A73A84413FACC;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.SDK.Nft.Nft>
struct TaskFactory_1_tC39EEBBCAF1FC1A089FC96D7DE3D186A3135563D;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Texture2D>
struct TaskFactory_1_tA02CD66EEE1C447BE2C3BDAF4821F919418AE5FF;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<Solana.Unity.Metaplex.NFT.Library.MetadataAccount>
struct Task_1_t6EAD20B5A3A44575D9A8067DBF57C0FB36A453DA;
// System.Threading.Tasks.Task`1<Solana.Unity.SDK.Nft.Nft>
struct Task_1_t56AF99E9787DBB0970871E96442BC816D9B88BAA;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// Solana.Unity.SDK.Nft.iNftFile`1<UnityEngine.Texture2D>
struct iNftFile_1_t34D520A6CC3B3DF35FEB3C67370D70D748CEFC92;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// Solana.Unity.SDK.Nft.Attributes[]
struct AttributesU5BU5D_t673490871CE21CEFD574A90C94A5AE1422838967;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// Solana.Unity.SDK.Nft.CreatorData[]
struct CreatorDataU5BU5D_tE50F5E4A6A050F81DE177BA85BC603BC580B4FDC;
// Solana.Unity.SDK.Nft.File[]
struct FileU5BU5D_t6F05D7044E8C9B7DD8FDEC4153A6D99D1CB7B245;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Solana.Unity.Rpc.Models.AccountInfo
struct AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Solana.Unity.SDK.Nft.Attributes
struct Attributes_t42915D121F8913EAA4A590E3675A06DA6DEEEC34;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Solana.Unity.Metaplex.NFT.Library.Collection
struct Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993;
// Solana.Unity.Metaplex.Utilities.Json.Collection
struct Collection_tD231FB729DC2ED75269A636DE5628A2EA92996FE;
// Solana.Unity.SDK.Utility.CollectionJsonConverter
struct CollectionJsonConverter_t049D84737C3206ADCB38B52B4F10CA837C5FD172;
// Solana.Unity.SDK.CompiledInstruction
struct CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Solana.Unity.Metaplex.NFT.Library.Creator
struct Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC;
// Solana.Unity.SDK.Nft.CreatorData
struct CreatorData_t5E41875F2A84FA801C05956443D9A3844E5E179A;
// Solana.Unity.SDK.Utility.CreatorJsonConverter
struct CreatorJsonConverter_t47B1911D48395F9718158D921C6EBBE7EDB1B56E;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// Solana.Unity.SDK.Nft.File
struct File_t1B581E593FAE35BE02F82A19923E64AC64574E45;
// ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader
struct GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F;
// ThreeDISevenZeroR.UnityGifDecoder.GifCanvas
struct GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3;
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage
struct GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948;
// ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary
struct GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791;
// ThreeDISevenZeroR.UnityGifDecoder.GifStream
struct GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t29B0AEAFB8A7BF2EE446320DE590343B21EA69A3;
// Solana.Unity.Rpc.IRpcClient
struct IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// Solana.Unity.Metaplex.NFT.Library.MetadataAccount
struct MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51;
// Solana.Unity.SDK.Nft.Metaplex
struct Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A;
// Solana.Unity.SDK.Nft.MetaplexData
struct MetaplexData_tC37F1D8BEEC3B67D72F3C047E6704BB9811B1254;
// Solana.Unity.SDK.Nft.MetaplexJsonData
struct MetaplexJsonData_t8BFED7ECD7C8B9537758CC3B0C317FF915437678;
// Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard
struct MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5;
// Solana.Unity.SDK.Nft.NFTProData
struct NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF;
// Solana.Unity.SDK.Nft.Nft
struct Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E;
// Solana.Unity.SDK.Nft.NftImage
struct NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Solana.Unity.Metaplex.NFT.Library.OnChainData
struct OnChainData_tDE37880ED87AB6DC2E17563E8A15904F4457F09C;
// Solana.Unity.Metaplex.NFT.Library.ProgrammableConfig
struct ProgrammableConfig_t940E8A7584F57DC616E148E2147D1F3CABCDB4B2;
// Solana.Unity.Metaplex.Utilities.Json.Properties
struct Properties_tF8BC75EA7C06853B3158EF3430BFDAAA81889A6B;
// Solana.Unity.SDK.Nft.Properties
struct Properties_t35B1027239852E24EAC0F2B5A83695B84DDD31D5;
// Solana.Unity.Wallet.PublicKey
struct PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751;
// Solana.Unity.SDK.Utility.PublicKeyJsonConverter
struct PublicKeyJsonConverter_tE5E3DD374EEABD15952F35C5CF2CD7613593355F;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// Solana.Unity.Metaplex.NFT.Library.Uses
struct Uses_tA33DAA1C1E73A092D0E53F30D1F7630FD5885714;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iNftFile_1_t34D520A6CC3B3DF35FEB3C67370D70D748CEFC92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742;
IL2CPP_EXTERN_C String_t* _stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral683E9AEDEA0A637BF28D65D46A3996D097F4DFF6;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mFA3308FD473A79D0A3AF021D94629C33D8E276D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mA5F7719DD296C516D447134B5352D83BB8CE35A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m5FF2C09F29073DCAC073D42B2C03F7D286D69645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m75725988E2733A64B19D8B9271CCDDDD05B7F5A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m042A9DFC699DD914C49DD5B25561DB97403AF3B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m611FCFDB5FE2F9D9DB4B97F721F099F02C6171CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_m1CA6E3479FF4EAA03F90DE766249C53F978609FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mFAE22BF22742386E2EB689B5B32BEDCFC82C2A9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_mD6738CAD485051F94AA5CEB97F9B30CC31DB607A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_m3974670026A667EC10D97325143B868330D41076_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileLoader_LoadFileFromLocalPath_TisMetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51_m3C52711C22108678C731A7B179D739AA707BFC09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileLoader_LoadFileFromLocalPath_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m016C359B5BB9BE795CD536FA49FE4A0DFEB5998F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileLoader_LoadFile_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m80E0333559E547473442D0D3AA22C040938B7714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileLoader_SaveToPersistentDataPath_TisMetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51_mCBFD7B61780A7B74B3E5EF16DC7FD097CC7F4B34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileLoader_SaveToPersistentDataPath_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mB85A1EECDCFFC9DD8BD906A6DE24ED636334B8B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m3B6C47C92595BD95DBF05F2CEBC1BFE8CE325479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m541441E31D54ED84A4583C604CEAEBF5750A5359_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m79AA360831931DC4959A11EBF86A80FCA020F73F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_mF0E47C95681EA0782E429C87951296E5C733589D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_m147DB119A2E94ABE23A512C032E29A1498B0FF8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A4B2A438721CBE6D9BB37486616D975F8BAF28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m7380958BCD673BEF6D478E07F22B7EA94896C6EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m123CA477CD77203FA7F82D9119B581658958A73F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t01512FBFEA2382FE55100FCF25D18B697B7F4FED  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t01512FBFEA2382FE55100FCF25D18B697B7F4FED_StaticFields
{
	// System.Int64 <PrivateImplementationDetails>::03D8320F1DB13B3D278C3CBED73513BB795974E7BF68BA926FCD330C45371E9A
	int64_t ___03D8320F1DB13B3D278C3CBED73513BB795974E7BF68BA926FCD330C45371E9A_0;
	// System.Int64 <PrivateImplementationDetails>::F062AE19F55B6602B9D2B1AB69E257247C2A8FF682F31E20D3E67CA3735C00DD
	int64_t ___F062AE19F55B6602B9D2B1AB69E257247C2A8FF682F31E20D3E67CA3735C00DD_1;
};
struct Il2CppArrayBounds;

// Solana.Unity.SDK.Nft.Attributes
struct Attributes_t42915D121F8913EAA4A590E3675A06DA6DEEEC34  : public RuntimeObject
{
	// System.String Solana.Unity.SDK.Nft.Attributes::trait_type
	String_t* ___trait_type_0;
	// System.String Solana.Unity.SDK.Nft.Attributes::value
	String_t* ___value_1;
};

// Solana.Unity.Metaplex.NFT.Library.Collection
struct Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Metaplex.NFT.Library.Collection::key
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___key_0;
	// System.Boolean Solana.Unity.Metaplex.NFT.Library.Collection::verified
	bool ___verified_1;
};

struct Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993_StaticFields
{
	// System.Int32 Solana.Unity.Metaplex.NFT.Library.Collection::length
	int32_t ___length_2;
};

// Solana.Unity.SDK.CompiledInstruction
struct CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C  : public RuntimeObject
{
	// System.Int32 Solana.Unity.SDK.CompiledInstruction::programIdIndex
	int32_t ___programIdIndex_0;
	// System.Byte[] Solana.Unity.SDK.CompiledInstruction::accounts
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___accounts_1;
	// System.Byte[] Solana.Unity.SDK.CompiledInstruction::keyIndicesCount
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyIndicesCount_2;
	// System.Byte[] Solana.Unity.SDK.CompiledInstruction::keyIndices
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyIndices_3;
	// System.Byte[] Solana.Unity.SDK.CompiledInstruction::dataLength
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataLength_4;
	// System.String Solana.Unity.SDK.CompiledInstruction::data
	String_t* ___data_5;
};

// Solana.Unity.Metaplex.NFT.Library.Creator
struct Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Metaplex.NFT.Library.Creator::key
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___key_0;
	// System.Boolean Solana.Unity.Metaplex.NFT.Library.Creator::verified
	bool ___verified_1;
	// System.Byte Solana.Unity.Metaplex.NFT.Library.Creator::share
	uint8_t ___share_2;
};

struct Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC_StaticFields
{
	// System.Int32 Solana.Unity.Metaplex.NFT.Library.Creator::length
	int32_t ___length_3;
};

// Solana.Unity.SDK.Nft.CreatorData
struct CreatorData_t5E41875F2A84FA801C05956443D9A3844E5E179A  : public RuntimeObject
{
	// System.String Solana.Unity.SDK.Nft.CreatorData::address
	String_t* ___address_0;
	// System.Boolean Solana.Unity.SDK.Nft.CreatorData::verified
	bool ___verified_1;
	// System.Int32 Solana.Unity.SDK.Nft.CreatorData::share
	int32_t ___share_2;
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

// Solana.Unity.SDK.Nft.File
struct File_t1B581E593FAE35BE02F82A19923E64AC64574E45  : public RuntimeObject
{
	// System.String Solana.Unity.SDK.Nft.File::uri
	String_t* ___uri_0;
	// System.String Solana.Unity.SDK.Nft.File::type
	String_t* ___type_1;
};

// Solana.Unity.SDK.Utility.FileLoader
struct FileLoader_tB5CB79FBCE5873F926EEA79DE2588CF8E170E814  : public RuntimeObject
{
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage
struct GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948  : public RuntimeObject
{
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::userInput
	bool ___userInput_0;
	// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::colors
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors_1;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::delay
	int32_t ___delay_2;
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Solana.Unity.Metaplex.NFT.Library.MetadataAccount
struct MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Metaplex.NFT.Library.MetadataAccount::metadataKey
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___metadataKey_0;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Metaplex.NFT.Library.MetadataAccount::updateAuthority
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___updateAuthority_1;
	// System.String Solana.Unity.Metaplex.NFT.Library.MetadataAccount::mint
	String_t* ___mint_2;
	// Solana.Unity.Metaplex.NFT.Library.OnChainData Solana.Unity.Metaplex.NFT.Library.MetadataAccount::metadata
	OnChainData_tDE37880ED87AB6DC2E17563E8A15904F4457F09C* ___metadata_3;
	// Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard Solana.Unity.Metaplex.NFT.Library.MetadataAccount::offchainData
	MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* ___offchainData_4;
	// Solana.Unity.Rpc.Models.AccountInfo Solana.Unity.Metaplex.NFT.Library.MetadataAccount::accInfo
	AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* ___accInfo_5;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Metaplex.NFT.Library.MetadataAccount::owner
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___owner_6;
};

// Solana.Unity.SDK.Nft.Metaplex
struct Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A  : public RuntimeObject
{
	// Solana.Unity.SDK.Nft.iNftFile`1<UnityEngine.Texture2D> Solana.Unity.SDK.Nft.Metaplex::nftImage
	RuntimeObject* ___nftImage_0;
	// Solana.Unity.Metaplex.NFT.Library.MetadataAccount Solana.Unity.SDK.Nft.Metaplex::data
	MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* ___data_1;
};

// Solana.Unity.SDK.Nft.MetaplexData
struct MetaplexData_tC37F1D8BEEC3B67D72F3C047E6704BB9811B1254  : public RuntimeObject
{
	// System.String Solana.Unity.SDK.Nft.MetaplexData::name
	String_t* ___name_0;
	// System.String Solana.Unity.SDK.Nft.MetaplexData::symbol
	String_t* ___symbol_1;
	// System.String Solana.Unity.SDK.Nft.MetaplexData::url
	String_t* ___url_2;
	// System.Int32 Solana.Unity.SDK.Nft.MetaplexData::seller_fee_basis_points
	int32_t ___seller_fee_basis_points_3;
	// Solana.Unity.SDK.Nft.CreatorData[] Solana.Unity.SDK.Nft.MetaplexData::creators
	CreatorDataU5BU5D_tE50F5E4A6A050F81DE177BA85BC603BC580B4FDC* ___creators_4;
	// Solana.Unity.SDK.Nft.MetaplexJsonData Solana.Unity.SDK.Nft.MetaplexData::json
	MetaplexJsonData_t8BFED7ECD7C8B9537758CC3B0C317FF915437678* ___json_5;
};

// Solana.Unity.SDK.Nft.MetaplexJsonData
struct MetaplexJsonData_t8BFED7ECD7C8B9537758CC3B0C317FF915437678  : public RuntimeObject
{
	// System.String Solana.Unity.SDK.Nft.MetaplexJsonData::name
	String_t* ___name_0;
	// System.String Solana.Unity.SDK.Nft.MetaplexJsonData::description
	String_t* ___description_1;
	// System.String Solana.Unity.SDK.Nft.MetaplexJsonData::previewUrl
	String_t* ___previewUrl_2;
	// System.String Solana.Unity.SDK.Nft.MetaplexJsonData::animation_url
	String_t* ___animation_url_3;
	// System.String Solana.Unity.SDK.Nft.MetaplexJsonData::image
	String_t* ___image_4;
	// Solana.Unity.SDK.Nft.Attributes[] Solana.Unity.SDK.Nft.MetaplexJsonData::attributes
	AttributesU5BU5D_t673490871CE21CEFD574A90C94A5AE1422838967* ___attributes_5;
	// Solana.Unity.SDK.Nft.Properties Solana.Unity.SDK.Nft.MetaplexJsonData::properties
	Properties_t35B1027239852E24EAC0F2B5A83695B84DDD31D5* ___properties_6;
};

// Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard
struct MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5  : public RuntimeObject
{
	// System.String Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard::<symbol>k__BackingField
	String_t* ___U3CsymbolU3Ek__BackingField_1;
	// System.String Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_2;
	// System.Int32 Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard::<seller_fee_basis_points>k__BackingField
	int32_t ___U3Cseller_fee_basis_pointsU3Ek__BackingField_3;
	// System.String Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard::<default_image>k__BackingField
	String_t* ___U3Cdefault_imageU3Ek__BackingField_4;
	// System.String Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard::<animation_url>k__BackingField
	String_t* ___U3Canimation_urlU3Ek__BackingField_5;
	// System.String Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard::<external_url>k__BackingField
	String_t* ___U3Cexternal_urlU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<Solana.Unity.Metaplex.Utilities.Json.Attribute> Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard::<attributes>k__BackingField
	List_1_tAB7180741C6C774B2CDC9EF7D7E02B56836B26AA* ___U3CattributesU3Ek__BackingField_7;
	// Solana.Unity.Metaplex.Utilities.Json.Collection Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard::<collection>k__BackingField
	Collection_tD231FB729DC2ED75269A636DE5628A2EA92996FE* ___U3CcollectionU3Ek__BackingField_8;
	// Solana.Unity.Metaplex.Utilities.Json.Properties Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard::<properties>k__BackingField
	Properties_tF8BC75EA7C06853B3158EF3430BFDAAA81889A6B* ___U3CpropertiesU3Ek__BackingField_9;
};

// Solana.Unity.SDK.Nft.NFTProData
struct NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF  : public RuntimeObject
{
	// System.String Solana.Unity.SDK.Nft.NFTProData::type
	String_t* ___type_0;
	// System.UInt32 Solana.Unity.SDK.Nft.NFTProData::version
	uint32_t ___version_1;
	// System.String Solana.Unity.SDK.Nft.NFTProData::mint
	String_t* ___mint_2;
	// System.String Solana.Unity.SDK.Nft.NFTProData::metadata
	String_t* ___metadata_3;
	// System.String Solana.Unity.SDK.Nft.NFTProData::title
	String_t* ___title_4;
	// System.String Solana.Unity.SDK.Nft.NFTProData::description
	String_t* ___description_5;
	// System.String Solana.Unity.SDK.Nft.NFTProData::creator
	String_t* ___creator_6;
	// System.String Solana.Unity.SDK.Nft.NFTProData::collection
	String_t* ___collection_7;
	// System.String Solana.Unity.SDK.Nft.NFTProData::licence
	String_t* ___licence_8;
	// System.String Solana.Unity.SDK.Nft.NFTProData::licence_title
	String_t* ___licence_title_9;
	// System.Boolean Solana.Unity.SDK.Nft.NFTProData::nsfw
	bool ___nsfw_10;
	// System.String[] Solana.Unity.SDK.Nft.NFTProData::tags
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tags_11;
};

// Solana.Unity.SDK.Nft.Nft
struct Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E  : public RuntimeObject
{
	// Solana.Unity.SDK.Nft.Metaplex Solana.Unity.SDK.Nft.Nft::metaplexData
	Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* ___metaplexData_0;
};

// Solana.Unity.SDK.Nft.NftImage
struct NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20  : public RuntimeObject
{
	// System.String Solana.Unity.SDK.Nft.NftImage::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String Solana.Unity.SDK.Nft.NftImage::<extension>k__BackingField
	String_t* ___U3CextensionU3Ek__BackingField_1;
	// System.String Solana.Unity.SDK.Nft.NftImage::<externalUrl>k__BackingField
	String_t* ___U3CexternalUrlU3Ek__BackingField_2;
	// UnityEngine.Texture2D Solana.Unity.SDK.Nft.NftImage::<file>k__BackingField
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CfileU3Ek__BackingField_3;
};

// Solana.Unity.SDK.Utility.ObjectToByte
struct ObjectToByte_t4E33819F1EA915E980659302E896AADCDB1AD628  : public RuntimeObject
{
};

// Solana.Unity.Metaplex.NFT.Library.OnChainData
struct OnChainData_tDE37880ED87AB6DC2E17563E8A15904F4457F09C  : public RuntimeObject
{
	// Solana.Unity.Metaplex.NFT.Library.MetadataVersion Solana.Unity.Metaplex.NFT.Library.OnChainData::version
	int32_t ___version_0;
	// System.String Solana.Unity.Metaplex.NFT.Library.OnChainData::name
	String_t* ___name_1;
	// System.String Solana.Unity.Metaplex.NFT.Library.OnChainData::symbol
	String_t* ___symbol_2;
	// System.String Solana.Unity.Metaplex.NFT.Library.OnChainData::uri
	String_t* ___uri_3;
	// System.UInt32 Solana.Unity.Metaplex.NFT.Library.OnChainData::sellerFeeBasisPoints
	uint32_t ___sellerFeeBasisPoints_4;
	// System.Boolean Solana.Unity.Metaplex.NFT.Library.OnChainData::hasCreators
	bool ___hasCreators_5;
	// System.Collections.Generic.IList`1<Solana.Unity.Metaplex.NFT.Library.Creator> Solana.Unity.Metaplex.NFT.Library.OnChainData::<creators>k__BackingField
	RuntimeObject* ___U3CcreatorsU3Ek__BackingField_6;
	// Solana.Unity.Metaplex.NFT.Library.Collection Solana.Unity.Metaplex.NFT.Library.OnChainData::<collectionLink>k__BackingField
	Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993* ___U3CcollectionLinkU3Ek__BackingField_7;
	// Solana.Unity.Metaplex.NFT.Library.Uses Solana.Unity.Metaplex.NFT.Library.OnChainData::<uses>k__BackingField
	Uses_tA33DAA1C1E73A092D0E53F30D1F7630FD5885714* ___U3CusesU3Ek__BackingField_8;
	// Solana.Unity.Metaplex.NFT.Library.ProgrammableConfig Solana.Unity.Metaplex.NFT.Library.OnChainData::<programmableConfig>k__BackingField
	ProgrammableConfig_t940E8A7584F57DC616E148E2147D1F3CABCDB4B2* ___U3CprogrammableConfigU3Ek__BackingField_9;
	// System.Boolean Solana.Unity.Metaplex.NFT.Library.OnChainData::isMutable
	bool ___isMutable_10;
	// System.Int32 Solana.Unity.Metaplex.NFT.Library.OnChainData::editionNonce
	int32_t ___editionNonce_11;
	// System.Int32 Solana.Unity.Metaplex.NFT.Library.OnChainData::tokenStandard
	int32_t ___tokenStandard_12;
	// System.String Solana.Unity.Metaplex.NFT.Library.OnChainData::metadata
	String_t* ___metadata_13;
};

// Solana.Unity.SDK.Nft.Properties
struct Properties_t35B1027239852E24EAC0F2B5A83695B84DDD31D5  : public RuntimeObject
{
	// Solana.Unity.SDK.Nft.File[] Solana.Unity.SDK.Nft.Properties::files
	FileU5BU5D_t6F05D7044E8C9B7DD8FDEC4153A6D99D1CB7B245* ___files_0;
	// System.String Solana.Unity.SDK.Nft.Properties::category
	String_t* ___category_1;
	// Solana.Unity.SDK.Nft.CreatorData[] Solana.Unity.SDK.Nft.Properties::creators
	CreatorDataU5BU5D_tE50F5E4A6A050F81DE177BA85BC603BC580B4FDC* ___creators_2;
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

// Newtonsoft.Json.JsonConverter`1<Solana.Unity.Metaplex.NFT.Library.Collection>
struct JsonConverter_1_tB6B7225353054F875FA38B7934BE5235CE766AF4  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// Newtonsoft.Json.JsonConverter`1<Solana.Unity.Metaplex.NFT.Library.Creator>
struct JsonConverter_1_t38F8D21E3AC967D2FE023EF1674B82783BD5D335  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// Newtonsoft.Json.JsonConverter`1<Solana.Unity.Wallet.PublicKey>
struct JsonConverter_1_t9BC6CD836BC6C8CE406D462D02C836A428DBAB30  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
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

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Metaplex.NFT.Library.MetadataAccount>
struct TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t6EAD20B5A3A44575D9A8067DBF57C0FB36A453DA* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>
struct TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Metaplex.NFT.Library.MetadataAccount>
struct Task_1_t6EAD20B5A3A44575D9A8067DBF57C0FB36A453DA  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* ___m_result_38;
};

struct Task_1_t6EAD20B5A3A44575D9A8067DBF57C0FB36A453DA_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t1BAB1DD150543F0B5649ACE9277A73A84413FACC* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.SDK.Nft.Nft>
struct Task_1_t56AF99E9787DBB0970871E96442BC816D9B88BAA  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* ___m_result_38;
};

struct Task_1_t56AF99E9787DBB0970871E96442BC816D9B88BAA_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tC39EEBBCAF1FC1A089FC96D7DE3D186A3135563D* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_result_38;
};

struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA02CD66EEE1C447BE2C3BDAF4821F919418AE5FF* ___s_defaultFactory_39;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl
struct GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 
{
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl::userInput
	bool ___userInput_0;
	// ThreeDISevenZeroR.UnityGifDecoder.Model.GifDisposalMethod ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl::disposalMethod
	int32_t ___disposalMethod_1;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl::delayTime
	int32_t ___delayTime_2;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl::hasTransparency
	bool ___hasTransparency_3;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl::transparentColorIndex
	int32_t ___transparentColorIndex_4;
};
// Native definition for P/Invoke marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl
struct GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke
{
	int32_t ___userInput_0;
	int32_t ___disposalMethod_1;
	int32_t ___delayTime_2;
	int32_t ___hasTransparency_3;
	int32_t ___transparentColorIndex_4;
};
// Native definition for COM marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl
struct GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com
{
	int32_t ___userInput_0;
	int32_t ___disposalMethod_1;
	int32_t ___delayTime_2;
	int32_t ___hasTransparency_3;
	int32_t ___transparentColorIndex_4;
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader
struct GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 
{
	// ThreeDISevenZeroR.UnityGifDecoder.Model.GifVersion ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::version
	int32_t ___version_0;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::width
	int32_t ___width_1;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::height
	int32_t ___height_2;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::hasGlobalColorTable
	bool ___hasGlobalColorTable_3;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::globalColorTableSize
	int32_t ___globalColorTableSize_4;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::transparentColorIndex
	int32_t ___transparentColorIndex_5;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::sortColors
	bool ___sortColors_6;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::colorResolution
	int32_t ___colorResolution_7;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::pixelAspectRatio
	int32_t ___pixelAspectRatio_8;
};
// Native definition for P/Invoke marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader
struct GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke
{
	int32_t ___version_0;
	int32_t ___width_1;
	int32_t ___height_2;
	int32_t ___hasGlobalColorTable_3;
	int32_t ___globalColorTableSize_4;
	int32_t ___transparentColorIndex_5;
	int32_t ___sortColors_6;
	int32_t ___colorResolution_7;
	int32_t ___pixelAspectRatio_8;
};
// Native definition for COM marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader
struct GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com
{
	int32_t ___version_0;
	int32_t ___width_1;
	int32_t ___height_2;
	int32_t ___hasGlobalColorTable_3;
	int32_t ___globalColorTableSize_4;
	int32_t ___transparentColorIndex_5;
	int32_t ___sortColors_6;
	int32_t ___colorResolution_7;
	int32_t ___pixelAspectRatio_8;
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor
struct GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 
{
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::left
	int32_t ___left_0;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::top
	int32_t ___top_1;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::width
	int32_t ___width_2;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::height
	int32_t ___height_3;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::isInterlaced
	bool ___isInterlaced_4;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::hasLocalColorTable
	bool ___hasLocalColorTable_5;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::localColorTableSize
	int32_t ___localColorTableSize_6;
};
// Native definition for P/Invoke marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor
struct GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke
{
	int32_t ___left_0;
	int32_t ___top_1;
	int32_t ___width_2;
	int32_t ___height_3;
	int32_t ___isInterlaced_4;
	int32_t ___hasLocalColorTable_5;
	int32_t ___localColorTableSize_6;
};
// Native definition for COM marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor
struct GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com
{
	int32_t ___left_0;
	int32_t ___top_1;
	int32_t ___width_2;
	int32_t ___height_3;
	int32_t ___isInterlaced_4;
	int32_t ___hasLocalColorTable_5;
	int32_t ___localColorTableSize_6;
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

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};

struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_StaticFields
{
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SpecialCharacters_0;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
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

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.SDK.Nft.Nft>
struct AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t56AF99E9787DBB0970871E96442BC816D9B88BAA* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t56AF99E9787DBB0970871E96442BC816D9B88BAA* ___s_defaultResultTask_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F  : public RuntimeObject
{
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_crossAppDomainArray_6;
};

struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8* ___typeNameCache_7;
};

// Solana.Unity.SDK.Utility.CollectionJsonConverter
struct CollectionJsonConverter_t049D84737C3206ADCB38B52B4F10CA837C5FD172  : public JsonConverter_1_tB6B7225353054F875FA38B7934BE5235CE766AF4
{
};

// Solana.Unity.SDK.Utility.CreatorJsonConverter
struct CreatorJsonConverter_t47B1911D48395F9718158D921C6EBBE7EDB1B56E  : public JsonConverter_1_t38F8D21E3AC967D2FE023EF1674B82783BD5D335
{
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

// ThreeDISevenZeroR.UnityGifDecoder.GifStream
struct GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD  : public RuntimeObject
{
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifStream::<DrawPlainTextBackground>k__BackingField
	bool ___U3CDrawPlainTextBackgroundU3Ek__BackingField_0;
	// ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token ThreeDISevenZeroR.UnityGifDecoder.GifStream::<CurrentToken>k__BackingField
	int32_t ___U3CCurrentTokenU3Ek__BackingField_1;
	// System.IO.Stream ThreeDISevenZeroR.UnityGifDecoder.GifStream::currentStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___currentStream_2;
	// System.Int64 ThreeDISevenZeroR.UnityGifDecoder.GifStream::headerStartPosition
	int64_t ___headerStartPosition_3;
	// System.Int64 ThreeDISevenZeroR.UnityGifDecoder.GifStream::firstFrameStartPosition
	int64_t ___firstFrameStartPosition_4;
	// ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader ThreeDISevenZeroR.UnityGifDecoder.GifStream::header
	GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 ___header_5;
	// ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl ThreeDISevenZeroR.UnityGifDecoder.GifStream::graphicControl
	GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 ___graphicControl_6;
	// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor ThreeDISevenZeroR.UnityGifDecoder.GifStream::imageDescriptor
	GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 ___imageDescriptor_7;
	// ThreeDISevenZeroR.UnityGifDecoder.GifCanvas ThreeDISevenZeroR.UnityGifDecoder.GifStream::canvas
	GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___canvas_8;
	// ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary ThreeDISevenZeroR.UnityGifDecoder.GifStream::lzwDictionary
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* ___lzwDictionary_9;
	// ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader ThreeDISevenZeroR.UnityGifDecoder.GifStream::blockReader
	GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* ___blockReader_10;
	// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.GifStream::globalColorTable
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___globalColorTable_11;
	// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.GifStream::localColorTable
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___localColorTable_12;
	// System.Byte[] ThreeDISevenZeroR.UnityGifDecoder.GifStream::headerBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___headerBuffer_13;
	// System.Byte[] ThreeDISevenZeroR.UnityGifDecoder.GifStream::colorTableBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___colorTableBuffer_14;
	// System.Byte[] ThreeDISevenZeroR.UnityGifDecoder.GifStream::extensionApplicationBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extensionApplicationBuffer_15;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifStream::nextPaletteIsGlobal
	bool ___nextPaletteIsGlobal_16;
};

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59  : public RuntimeObject
{
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// Newtonsoft.Json.TypeNameAssemblyFormatHandling Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormatHandling
	int32_t ____typeNameAssemblyFormatHandling_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89* ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializer::_serializationBinder
	RuntimeObject* ____serializationBinder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___Error_30;
};

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_13;
};

struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTemplate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTemplate_1;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
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

// Solana.Unity.SDK.Utility.PublicKeyJsonConverter
struct PublicKeyJsonConverter_tE5E3DD374EEABD15952F35C5CF2CD7613593355F  : public JsonConverter_1_t9BC6CD836BC6C8CE406D462D02C836A428DBAB30
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3
struct U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048 
{
	// System.Int32 Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.SDK.Nft.Nft> Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841 ___U3CU3Et__builder_1;
	// System.Boolean Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::tryUseLocalContent
	bool ___tryUseLocalContent_2;
	// System.String Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::mint
	String_t* ___mint_3;
	// System.Boolean Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::loadTexture
	bool ___loadTexture_4;
	// Solana.Unity.Rpc.IRpcClient Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::connection
	RuntimeObject* ___connection_5;
	// Solana.Unity.Rpc.Types.Commitment Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::commitment
	int32_t ___commitment_6;
	// System.Int32 Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::imageHeightAndWidth
	int32_t ___imageHeightAndWidth_7;
	// Solana.Unity.SDK.Nft.Nft Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::<newNft>5__2
	Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* ___U3CnewNftU3E5__2_8;
	// Solana.Unity.SDK.Nft.Nft Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::<nft>5__3
	Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* ___U3CnftU3E5__3_9;
	// System.Runtime.CompilerServices.TaskAwaiter Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_10;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Metaplex.NFT.Library.MetadataAccount> Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::<>u__2
	TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258 ___U3CU3Eu__2_11;
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5
struct U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637 
{
	// System.Int32 Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Solana.Unity.SDK.Nft.Nft Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::<>4__this
	Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* ___U3CU3E4__this_2;
	// System.Int32 Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::imageHeightAndWidth
	int32_t ___imageHeightAndWidth_3;
	// Solana.Unity.SDK.Nft.NftImage Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::<nftImage>5__2
	NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* ___U3CnftImageU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D> Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::<>u__1
	TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B ___U3CU3Eu__1_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// T Newtonsoft.Json.JsonSerializer::Deserialize<System.Object>(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializer_Deserialize_TisRuntimeObject_m887812E4D7F06E92950AB4CA73CA8F31EDB09BFC_gshared (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonConverter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m7CBCC3CD570C2E506EC9ACCDFF010F6BEF0E902F_gshared (JsonConverter_1_t452C90AD6A15526CD218C72899E572B0393B5F31* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisRuntimeObject_mDDE88E9CC2547882C059F24CE93F993AE9123EA9_gshared (RuntimeObject* ___structure0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<System.Object>(T,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisRuntimeObject_m85ECE039641C278A93C1CED59482821C3F44DF79_gshared (RuntimeObject* ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_m67828312A502CE3ADE471AAFF4AE57A984FB43D7_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// T Solana.Unity.SDK.Utility.FileLoader::LoadFileFromLocalPath<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileLoader_LoadFileFromLocalPath_TisRuntimeObject_mFC0C9D77360E50273C50F696B77D87EB327AC761_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_m3974670026A667EC10D97325143B868330D41076_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_m64F00AFC43B368F0B6CFDD941529B6102315171C_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048* ___stateMachine1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mCC380285248DC96C474000B9B1930BA7CAA619A2_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Utility.FileLoader::SaveToPersistentDataPath<System.Object>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileLoader_SaveToPersistentDataPath_TisRuntimeObject_m7CDE6001F1B69646CEE5650C02CDE0C42C042C4D_gshared (String_t* ___path0, RuntimeObject* ___data1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<T> Solana.Unity.SDK.Utility.FileLoader::LoadFile<System.Object>(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* FileLoader_LoadFile_TisRuntimeObject_mA78E7EC8879F8476AC2FF67FD85C8EE5752A8C39_gshared (String_t* ___path0, String_t* ___optionalName1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_m985FC300E5B7B269DEA0D012F1C45E771183BCDD_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637* ___stateMachine1, const RuntimeMethod* method) ;

// T Newtonsoft.Json.JsonSerializer::Deserialize<System.String>(Newtonsoft.Json.JsonReader)
inline String_t* JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59*, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*, const RuntimeMethod*))JsonSerializer_Deserialize_TisRuntimeObject_m887812E4D7F06E92950AB4CA73CA8F31EDB09BFC_gshared)(__this, ___reader0, method);
}
// System.Void Solana.Unity.Wallet.PublicKey::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* __this, String_t* ___key0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonConverter`1<Solana.Unity.Wallet.PublicKey>::.ctor()
inline void JsonConverter_1__ctor_m79AA360831931DC4959A11EBF86A80FCA020F73F (JsonConverter_1_t9BC6CD836BC6C8CE406D462D02C836A428DBAB30* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t9BC6CD836BC6C8CE406D462D02C836A428DBAB30*, const RuntimeMethod*))JsonConverter_1__ctor_m7CBCC3CD570C2E506EC9ACCDFF010F6BEF0E902F_gshared)(__this, method);
}
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB (String_t* __this, String_t* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Metaplex.NFT.Library.Creator::.ctor(Solana.Unity.Wallet.PublicKey,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Creator__ctor_m380E61AF058B108F8181244B0952624EE2A84030 (Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___key0, uint8_t ___share1, bool ___verified2, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonConverter`1<Solana.Unity.Metaplex.NFT.Library.Creator>::.ctor()
inline void JsonConverter_1__ctor_m541441E31D54ED84A4583C604CEAEBF5750A5359 (JsonConverter_1_t38F8D21E3AC967D2FE023EF1674B82783BD5D335* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t38F8D21E3AC967D2FE023EF1674B82783BD5D335*, const RuntimeMethod*))JsonConverter_1__ctor_m7CBCC3CD570C2E506EC9ACCDFF010F6BEF0E902F_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Metaplex.NFT.Library.Collection::.ctor(Solana.Unity.Wallet.PublicKey,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection__ctor_m372559353C3B94D30EF22281D97947BEB7597D4A (Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___key0, bool ___verified1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonConverter`1<Solana.Unity.Metaplex.NFT.Library.Collection>::.ctor()
inline void JsonConverter_1__ctor_m3B6C47C92595BD95DBF05F2CEBC1BFE8CE325479 (JsonConverter_1_tB6B7225353054F875FA38B7934BE5235CE766AF4* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_tB6B7225353054F875FA38B7934BE5235CE766AF4*, const RuntimeMethod*))JsonConverter_1__ctor_m7CBCC3CD570C2E506EC9ACCDFF010F6BEF0E902F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_mBBB6FB8A4D2C329249BDDBEA98F190D6EE61140A (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gifBytes0, const RuntimeMethod* method) ;
// ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token ThreeDISevenZeroR.UnityGifDecoder.GifStream::get_CurrentToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader ThreeDISevenZeroR.UnityGifDecoder.GifStream::get_Header()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 GifStream_get_Header_m7276A6A6F32364A1B54AFB6EBA1E54FDCB62D19B_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m169F9873A21FB8DECA24DC1B8F06FB23D13BEE2A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Single ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::get_SafeDelaySeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GifImage_get_SafeDelaySeconds_m1469D5E57209B454175D5EB4E2AB8A4ACC1404A8 (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___item0, method);
}
// System.String ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GifStream_ReadComment_mCA8259E47882D1CEB1F57ACFBF876E110ADFEEB1 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SkipToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipToken_mEE39D7CD3B0F42091186BB2F2AEDCA64F65F6A31 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifStream::get_HasMoreData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GifStream_get_HasMoreData_mDE4AECF1D3480208FA4A5B1B279F0FE5F583C658 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Utility.FileLoader::DestroyTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileLoader_DestroyTexture_mEF1E99FD49EEB7970B1A41AC588914EDD466B33B (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705 (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, RuntimeObject* ___graph1, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<Solana.Unity.SDK.CompiledInstruction>(T)
inline int32_t Marshal_SizeOf_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_mF0E47C95681EA0782E429C87951296E5C733589D (CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C* ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C*, const RuntimeMethod*))Marshal_SizeOf_TisRuntimeObject_mDDE88E9CC2547882C059F24CE93F993AE9123EA9_gshared)(___structure0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___cb0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<Solana.Unity.SDK.CompiledInstruction>(T,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_m147DB119A2E94ABE23A512C032E29A1498B0FF8E (CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C* ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C*, intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisRuntimeObject_m85ECE039641C278A93C1CED59482821C3F44DF79_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___hglobal0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.CompiledInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompiledInstruction__ctor_m959EE4AFB503850E97EA4AEEC78C819CF6EB321F (CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3 (intptr_t ___ptr0, Type_t* ___structureType1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0 (RuntimeArray* ___sourceArray0, int64_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int64_t ___destinationIndex3, int64_t ___length4, const RuntimeMethod* method) ;
// System.String Merkator.BitCoin.Base58Encoding::Encode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Base58Encoding_Encode_m5C58E4749FE9E801743DB17A520E975BE8876578 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitConverter_ToUInt64_mE7ED21EC4F2485A3AD117BA6DC44E1B6ED16DF23 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Nft.NFTProData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NFTProData__ctor_m6D6E773454EE51C70B1B56D7FB4F472008AC2A62 (NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeUTF8StringFromByte(System.Byte[],System.Int32,System.Int32,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___length2, String_t** ___decodedData3, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeUIntFromByte(System.Byte[],System.Int32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectToByte_DecodeUIntFromByte_mB43A80B57C31A2FF925805DFF3E5D46002B325A3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, uint32_t* ___decodedData2, const RuntimeMethod* method) ;
// System.Boolean System.BitConverter::ToBoolean(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitConverter_ToBoolean_mBDA6F9734B907F7BA1135819940F5D6C3E5085FB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeBase58StringFromByte(System.Byte[],System.Int32,System.Int32,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectToByte_DecodeBase58StringFromByte_mC6CBEFFAA6B15AA40EA4BD9426CE3C58A9485BD6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___length2, String_t** ___decodedData3, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.SDK.Nft.Nft>::Create()
inline AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841 AsyncTaskMethodBuilder_1_Create_m5FF2C09F29073DCAC073D42B2C03F7D286D69645 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.SDK.Nft.Nft>::Start<Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_m1CA6E3479FF4EAA03F90DE766249C53F978609FF (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* __this, U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841*, U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_m67828312A502CE3ADE471AAFF4AE57A984FB43D7_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.SDK.Nft.Nft>::get_Task()
inline Task_1_t56AF99E9787DBB0970871E96442BC816D9B88BAA* AsyncTaskMethodBuilder_1_get_Task_mFAE22BF22742386E2EB689B5B32BEDCFC82C2A9D (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t56AF99E9787DBB0970871E96442BC816D9B88BAA* (*) (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T Solana.Unity.SDK.Utility.FileLoader::LoadFileFromLocalPath<Solana.Unity.Metaplex.NFT.Library.MetadataAccount>(System.String)
inline MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* FileLoader_LoadFileFromLocalPath_TisMetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51_m3C52711C22108678C731A7B179D739AA707BFC09 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* (*) (String_t*, const RuntimeMethod*))FileLoader_LoadFileFromLocalPath_TisRuntimeObject_mFC0C9D77360E50273C50F696B77D87EB327AC761_gshared)(___path0, method);
}
// System.Void Solana.Unity.SDK.Nft.Metaplex::.ctor(Solana.Unity.Metaplex.NFT.Library.MetadataAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metaplex__ctor_m301DD08FF78DBFE60FB196F060B64D5B1082A29C (Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* __this, MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* ___metadataAccount0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Nft.Nft::.ctor(Solana.Unity.SDK.Nft.Metaplex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nft__ctor_m87A95EEFFB10B250CA7E350677DB735AD03F6D9C (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* __this, Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* ___metaplexData0, const RuntimeMethod* method) ;
// T Solana.Unity.SDK.Utility.FileLoader::LoadFileFromLocalPath<UnityEngine.Texture2D>(System.String)
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FileLoader_LoadFileFromLocalPath_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m016C359B5BB9BE795CD536FA49FE4A0DFEB5998F (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (String_t*, const RuntimeMethod*))FileLoader_LoadFileFromLocalPath_TisRuntimeObject_mFC0C9D77360E50273C50F696B77D87EB327AC761_gshared)(___path0, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Nft.NftImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NftImage__ctor_m67A1777D7E2D8D968815C6E7803EF2D219E5B3CC (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_m3974670026A667EC10D97325143B868330D41076 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_m3974670026A667EC10D97325143B868330D41076_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// Solana.Unity.SDK.Nft.Nft Solana.Unity.SDK.Nft.Nft::TryLoadNftFromLocal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* Nft_TryLoadNftFromLocal_m847ED85635E5620F2FB57EA13E811C20490A07A7 (String_t* ___mint0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Solana.Unity.SDK.Nft.Nft::LoadTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Nft_LoadTexture_mDFB1A673C4F3B46C7CD2344EBD8976AA9A9EAE56 (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* __this, int32_t ___imageHeightAndWidth0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.SDK.Nft.Nft>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mA5F7719DD296C516D447134B5352D83BB8CE35A0 (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_m64F00AFC43B368F0B6CFDD941529B6102315171C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Solana.Unity.Metaplex.NFT.Library.MetadataAccount> Solana.Unity.Metaplex.NFT.Library.MetadataAccount::GetAccount(Solana.Unity.Rpc.IRpcClient,Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6EAD20B5A3A44575D9A8067DBF57C0FB36A453DA* MetadataAccount_GetAccount_m694CF57B71848F15B526AD7BF3ABDB168A8D4FE1 (RuntimeObject* ___client0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___tokenAddress1, int32_t ___commitment2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Metaplex.NFT.Library.MetadataAccount>::GetAwaiter()
inline TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258 Task_1_GetAwaiter_m123CA477CD77203FA7F82D9119B581658958A73F (Task_1_t6EAD20B5A3A44575D9A8067DBF57C0FB36A453DA* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258 (*) (Task_1_t6EAD20B5A3A44575D9A8067DBF57C0FB36A453DA*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Metaplex.NFT.Library.MetadataAccount>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m7380958BCD673BEF6D478E07F22B7EA94896C6EB (TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.SDK.Nft.Nft>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Metaplex.NFT.Library.MetadataAccount>,Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mFA3308FD473A79D0A3AF021D94629C33D8E276D2 (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* __this, TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258* ___awaiter0, U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841*, TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258*, U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mCC380285248DC96C474000B9B1930BA7CAA619A2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Metaplex.NFT.Library.MetadataAccount>::GetResult()
inline MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* TaskAwaiter_1_GetResult_m82A4B2A438721CBE6D9BB37486616D975F8BAF28 (TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258* __this, const RuntimeMethod* method)
{
	return ((  MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* (*) (TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void Solana.Unity.SDK.Utility.FileLoader::SaveToPersistentDataPath<Solana.Unity.Metaplex.NFT.Library.MetadataAccount>(System.String,T)
inline void FileLoader_SaveToPersistentDataPath_TisMetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51_mCBFD7B61780A7B74B3E5EF16DC7FD097CC7F4B34 (String_t* ___path0, MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* ___data1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51*, const RuntimeMethod*))FileLoader_SaveToPersistentDataPath_TisRuntimeObject_m7CDE6001F1B69646CEE5650C02CDE0C42C042C4D_gshared)(___path0, ___data1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.SDK.Nft.Nft>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m75725988E2733A64B19D8B9271CCDDDD05B7F5A7 (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.SDK.Nft.Nft>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m042A9DFC699DD914C49DD5B25561DB97403AF3B2 (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* __this, Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841*, Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGetNftDataU3Ed__3_MoveNext_m58C0867108B5FFE2CD4C4B51BF5948194AF79581 (U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.SDK.Nft.Nft>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m611FCFDB5FE2F9D9DB4B97F721F099F02C6171CA (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGetNftDataU3Ed__3_SetStateMachine_m0DF8A2A110E9187D23E731F7A7605B3C6869F516 (U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.String Solana.Unity.Metaplex.Utilities.Json.MetaplexTokenStandard::get_default_image()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaplexTokenStandard_get_default_image_m54B60D3D52B9B0DA969BECF63DFB63499FA916ED_inline (MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<T> Solana.Unity.SDK.Utility.FileLoader::LoadFile<UnityEngine.Texture2D>(System.String,System.String)
inline Task_1_t95921EB64E237ACD28589D64B693C652268F225E* FileLoader_LoadFile_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m80E0333559E547473442D0D3AA22C040938B7714 (String_t* ___path0, String_t* ___optionalName1, const RuntimeMethod* method)
{
	return ((  Task_1_t95921EB64E237ACD28589D64B693C652268F225E* (*) (String_t*, String_t*, const RuntimeMethod*))FileLoader_LoadFile_TisRuntimeObject_mA78E7EC8879F8476AC2FF67FD85C8EE5752A8C39_gshared)(___path0, ___optionalName1, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.Texture2D>::GetAwaiter()
inline TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C (Task_1_t95921EB64E237ACD28589D64B693C652268F225E* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B (*) (Task_1_t95921EB64E237ACD28589D64B693C652268F225E*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911 (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>,Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_mD6738CAD485051F94AA5CEB97F9B30CC31DB607A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* ___awaiter0, U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_m985FC300E5B7B269DEA0D012F1C45E771183BCDD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>::GetResult()
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* __this, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Solana.Unity.SDK.Utility.FileLoader::Resize(UnityEngine.Texture,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FileLoader_Resize_m9CEA433A8CE82F3C2D109EEB0E105DB8DBE09000 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture2D0, int32_t ___targetX1, int32_t ___targetY2, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Nft.NftImage::set_externalUrl(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NftImage_set_externalUrl_m82EAF4A55FBB51F7A775758786A5410906B85AF7_inline (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Nft.NftImage::set_file(UnityEngine.Texture2D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NftImage_set_file_mA0E407437B4D29D0B68645934C4613FEF61B7B23_inline (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Utility.FileLoader::SaveToPersistentDataPath<UnityEngine.Texture2D>(System.String,T)
inline void FileLoader_SaveToPersistentDataPath_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mB85A1EECDCFFC9DD8BD906A6DE24ED636334B8B8 (String_t* ___path0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___data1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))FileLoader_SaveToPersistentDataPath_TisRuntimeObject_m7CDE6001F1B69646CEE5650C02CDE0C42C042C4D_gshared)(___path0, ___data1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureU3Ed__5_MoveNext_mC655A2A6DAE3DDA587484EAA064FA24C4E715217 (U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureU3Ed__5_SetStateMachine_m416574BBE0B82DCB9C76C15F9D7A47FEAA340017 (U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.SDK.Utility.PublicKeyJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,Solana.Unity.Wallet.PublicKey,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicKeyJsonConverter_WriteJson_m76453B0ED42C18F5B9DFF03579356F9D76B8E1CA (PublicKeyJsonConverter_tE5E3DD374EEABD15952F35C5CF2CD7613593355F* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	{
		// writer.WriteValue(value.ToString());
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_0 = ___writer0;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_1 = ___value1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Utility.PublicKeyJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Solana.Unity.Wallet.PublicKey,System.Boolean,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* PublicKeyJsonConverter_ReadJson_m8CF91A986CB3C1160BC2E5BD2B25E2357B3D10BC (PublicKeyJsonConverter_tE5E3DD374EEABD15952F35C5CF2CD7613593355F* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___existingValue2, bool ___hasExistingValue3, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var pk = serializer.Deserialize<string>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___serializer4;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___reader0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE(L_0, L_1, JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var);
		V_0 = L_2;
		// if (pk == null) return null;
		String_t* L_3 = V_0;
		if (L_3)
		{
			goto IL_000e;
		}
	}
	{
		// if (pk == null) return null;
		return (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)NULL;
	}

IL_000e:
	{
		// return new PublicKey(pk);
		String_t* L_4 = V_0;
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_5 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_5, L_4, NULL);
		return L_5;
	}
}
// System.Void Solana.Unity.SDK.Utility.PublicKeyJsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicKeyJsonConverter__ctor_m63E085B9BF14733C7703233E1A97EA6497474618 (PublicKeyJsonConverter_tE5E3DD374EEABD15952F35C5CF2CD7613593355F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m79AA360831931DC4959A11EBF86A80FCA020F73F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m79AA360831931DC4959A11EBF86A80FCA020F73F(__this, JsonConverter_1__ctor_m79AA360831931DC4959A11EBF86A80FCA020F73F_RuntimeMethod_var);
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
// System.Void Solana.Unity.SDK.Utility.CreatorJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,Solana.Unity.Metaplex.NFT.Library.Creator,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatorJsonConverter_WriteJson_m1C019BDDA2CE7F526CD6A663DCEB3C9D2DA10BEC (CreatorJsonConverter_t47B1911D48395F9718158D921C6EBBE7EDB1B56E* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteValue(value.key.ToString() + "-" + value.share + "-" + value.verified);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_0 = ___writer0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC* L_3 = ___value1;
		NullCheck(L_3);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_4 = L_3->___key_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC* L_8 = ___value1;
		NullCheck(L_8);
		uint8_t* L_9 = (&L_8->___share_2);
		String_t* L_10;
		L_10 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4(L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC* L_13 = ___value1;
		NullCheck(L_13);
		bool* L_14 = (&L_13->___verified_1);
		String_t* L_15;
		L_15 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_14, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_15);
		String_t* L_16;
		L_16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_12, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_0, L_16);
		// }
		return;
	}
}
// Solana.Unity.Metaplex.NFT.Library.Creator Solana.Unity.SDK.Utility.CreatorJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Solana.Unity.Metaplex.NFT.Library.Creator,System.Boolean,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC* CreatorJsonConverter_ReadJson_m797A058B9688BB0DEF93A7657EAA28089DDCA726 (CreatorJsonConverter_t47B1911D48395F9718158D921C6EBBE7EDB1B56E* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC* ___existingValue2, bool ___hasExistingValue3, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_0 = NULL;
	{
		// var parse = serializer.Deserialize<string>(reader)?.Split("-");
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___serializer4;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___reader0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE(L_0, L_1, JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_000f;
		}
	}
	{
		G_B3_0 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(NULL));
		goto IL_001a;
	}

IL_000f:
	{
		NullCheck(G_B2_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(G_B2_0, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, 0, NULL);
		G_B3_0 = L_4;
	}

IL_001a:
	{
		V_0 = G_B3_0;
		// if (parse is not { Length: 3 })
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck((RuntimeArray*)L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_6, NULL);
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0029;
		}
	}

IL_0027:
	{
		// return null;
		return (Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC*)NULL;
	}

IL_0029:
	{
		// return new Creator(new PublicKey(parse[0]), (byte)int.Parse(parse[1]), bool.Parse(parse[2]));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_11 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_11, L_10, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15;
		L_15 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_14, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 2;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D(L_18, NULL);
		Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC* L_20 = (Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC*)il2cpp_codegen_object_new(Creator_tB49F24B873F9096F9B29196A527A7059CF44F3CC_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Creator__ctor_m380E61AF058B108F8181244B0952624EE2A84030(L_20, L_11, (uint8_t)((int32_t)(uint8_t)L_15), L_19, NULL);
		return L_20;
	}
}
// System.Void Solana.Unity.SDK.Utility.CreatorJsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatorJsonConverter__ctor_mF962DCDC5F3141BE9F7E6338AF57A6427F479AF6 (CreatorJsonConverter_t47B1911D48395F9718158D921C6EBBE7EDB1B56E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m541441E31D54ED84A4583C604CEAEBF5750A5359_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m541441E31D54ED84A4583C604CEAEBF5750A5359(__this, JsonConverter_1__ctor_m541441E31D54ED84A4583C604CEAEBF5750A5359_RuntimeMethod_var);
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
// System.Void Solana.Unity.SDK.Utility.CollectionJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,Solana.Unity.Metaplex.NFT.Library.Collection,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionJsonConverter_WriteJson_m5EE49D46A9ABF9B01CE6B633C1A6E5780B6A68DF (CollectionJsonConverter_t049D84737C3206ADCB38B52B4F10CA837C5FD172* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.WriteValue(value.key.ToString() + "-" + value.verified);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_0 = ___writer0;
		Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993* L_1 = ___value1;
		NullCheck(L_1);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_2 = L_1->___key_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993* L_4 = ___value1;
		NullCheck(L_4);
		bool* L_5 = (&L_4->___verified_1);
		String_t* L_6;
		L_6 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_6, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_0, L_7);
		// }
		return;
	}
}
// Solana.Unity.Metaplex.NFT.Library.Collection Solana.Unity.SDK.Utility.CollectionJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Solana.Unity.Metaplex.NFT.Library.Collection,System.Boolean,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993* CollectionJsonConverter_ReadJson_mFF0963DB3D5A8FBCFF875B96585CF58FAC3C064A (CollectionJsonConverter_t049D84737C3206ADCB38B52B4F10CA837C5FD172* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993* ___existingValue2, bool ___hasExistingValue3, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_0 = NULL;
	{
		// var parse = serializer.Deserialize<string>(reader)?.Split("-");
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___serializer4;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___reader0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE(L_0, L_1, JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_000f;
		}
	}
	{
		G_B3_0 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(NULL));
		goto IL_001a;
	}

IL_000f:
	{
		NullCheck(G_B2_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(G_B2_0, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, 0, NULL);
		G_B3_0 = L_4;
	}

IL_001a:
	{
		V_0 = G_B3_0;
		// if (parse is not { Length: 2 })
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck((RuntimeArray*)L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_6, NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0029;
		}
	}

IL_0027:
	{
		// return null;
		return (Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993*)NULL;
	}

IL_0029:
	{
		// return new Collection(new PublicKey(parse[0]),  bool.Parse(parse[1]));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_11 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_11, L_10, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D(L_14, NULL);
		Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993* L_16 = (Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993*)il2cpp_codegen_object_new(Collection_tDE0355DB6E57EC9B283E9847E3DFBC01C2296993_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Collection__ctor_m372559353C3B94D30EF22281D97947BEB7597D4A(L_16, L_11, L_15, NULL);
		return L_16;
	}
}
// System.Void Solana.Unity.SDK.Utility.CollectionJsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionJsonConverter__ctor_m84A462A762A2D3DDAA54743C699D7C721975CA2A (CollectionJsonConverter_t049D84737C3206ADCB38B52B4F10CA837C5FD172* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m3B6C47C92595BD95DBF05F2CEBC1BFE8CE325479_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m3B6C47C92595BD95DBF05F2CEBC1BFE8CE325479(__this, JsonConverter_1__ctor_m3B6C47C92595BD95DBF05F2CEBC1BFE8CE325479_RuntimeMethod_var);
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
// UnityEngine.Texture2D Solana.Unity.SDK.Utility.FileLoader::GetTextureFromGifByteStream(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FileLoader_GetTextureFromGifByteStream_mD606B61F26264099CB8E2F4561D7FFEA208D2185 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* V_0 = NULL;
	GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* V_1 = NULL;
	GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* V_2 = NULL;
	int32_t V_3 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_4 = NULL;
	{
		// var frameDelays = new List<float>();
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_0, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		V_0 = L_0;
		// using (var gifStream = new GifStream(bytes))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* L_2 = (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD*)il2cpp_codegen_object_new(GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GifStream__ctor_mBBB6FB8A4D2C329249BDDBEA98F190D6EE61140A(L_2, L_1, NULL);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				{
					GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* L_3 = V_1;
					if (!L_3)
					{
						goto IL_008c;
					}
				}
				{
					GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_008c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0079_1;
			}

IL_000f_1:
			{
				// switch (gifStream.CurrentToken)
				GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* L_5 = V_1;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(L_5, NULL);
				V_3 = L_6;
				int32_t L_7 = V_3;
				if ((((int32_t)L_7) == ((int32_t)4)))
				{
					goto IL_0020_1;
				}
			}
			{
				int32_t L_8 = V_3;
				if ((((int32_t)L_8) == ((int32_t)5)))
				{
					goto IL_0066_1;
				}
			}
			{
				goto IL_0073_1;
			}

IL_0020_1:
			{
				// GifImage image = gifStream.ReadImage();
				GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* L_9 = V_1;
				NullCheck(L_9);
				GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_10;
				L_10 = GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053(L_9, NULL);
				V_2 = L_10;
				// var frame = new Texture2D(
				//     gifStream.Header.width,
				//     gifStream.Header.height,
				//     TextureFormat.ARGB32, false);
				GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* L_11 = V_1;
				NullCheck(L_11);
				GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_12;
				L_12 = GifStream_get_Header_m7276A6A6F32364A1B54AFB6EBA1E54FDCB62D19B_inline(L_11, NULL);
				int32_t L_13 = L_12.___width_1;
				GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* L_14 = V_1;
				NullCheck(L_14);
				GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_15;
				L_15 = GifStream_get_Header_m7276A6A6F32364A1B54AFB6EBA1E54FDCB62D19B_inline(L_14, NULL);
				int32_t L_16 = L_15.___height_2;
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_17, L_13, L_16, 5, (bool)0, NULL);
				// frame.SetPixels32(image.colors);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = L_17;
				GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_19 = V_2;
				NullCheck(L_19);
				Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_20 = L_19->___colors_1;
				NullCheck(L_18);
				Texture2D_SetPixels32_m169F9873A21FB8DECA24DC1B8F06FB23D13BEE2A(L_18, L_20, NULL);
				// frame.Apply();
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = L_18;
				NullCheck(L_21);
				Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_21, NULL);
				// frameDelays.Add(image.SafeDelaySeconds);
				List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_22 = V_0;
				GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_23 = V_2;
				NullCheck(L_23);
				float L_24;
				L_24 = GifImage_get_SafeDelaySeconds_m1469D5E57209B454175D5EB4E2AB8A4ACC1404A8(L_23, NULL);
				NullCheck(L_22);
				List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_22, L_24, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
				// return frame;
				V_4 = L_21;
				goto IL_008f;
			}

IL_0066_1:
			{
				// var commentText = gifStream.ReadComment();
				GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* L_25 = V_1;
				NullCheck(L_25);
				String_t* L_26;
				L_26 = GifStream_ReadComment_mCA8259E47882D1CEB1F57ACFBF876E110ADFEEB1(L_25, NULL);
				// Debug.Log(commentText);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_26, NULL);
				// break;
				goto IL_0079_1;
			}

IL_0073_1:
			{
				// gifStream.SkipToken(); // Other tokens
				GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* L_27 = V_1;
				NullCheck(L_27);
				GifStream_SkipToken_mEE39D7CD3B0F42091186BB2F2AEDCA64F65F6A31(L_27, NULL);
			}

IL_0079_1:
			{
				// while (gifStream.HasMoreData)
				GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* L_28 = V_1;
				NullCheck(L_28);
				bool L_29;
				L_29 = GifStream_get_HasMoreData_mDE4AECF1D3480208FA4A5B1B279F0FE5F583C658(L_28, NULL);
				if (L_29)
				{
					goto IL_000f_1;
				}
			}
			{
				// }
				goto IL_008d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008d:
	{
		// return null;
		return (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
	}

IL_008f:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = V_4;
		return L_30;
	}
}
// UnityEngine.Texture2D Solana.Unity.SDK.Utility.FileLoader::Resize(UnityEngine.Texture,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FileLoader_Resize_m9CEA433A8CE82F3C2D109EEB0E105DB8DBE09000 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture2D0, int32_t ___targetX1, int32_t ___targetY2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	{
		// RenderTexture rt = new RenderTexture(targetX, targetY, 24);
		int32_t L_0 = ___targetX1;
		int32_t L_1 = ___targetY2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_2, L_0, L_1, ((int32_t)24), NULL);
		V_0 = L_2;
		// RenderTexture.active = rt;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = V_0;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_3, NULL);
		// Graphics.Blit(texture2D, rt);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___texture2D0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_4, L_5, NULL);
		// Texture2D result = new Texture2D(targetX, targetY);
		int32_t L_6 = ___targetX1;
		int32_t L_7 = ___targetY2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_8, L_6, L_7, NULL);
		// result.ReadPixels(new Rect(0, 0, targetX, targetY), 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = L_8;
		int32_t L_10 = ___targetX1;
		int32_t L_11 = ___targetY2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), (0.0f), (0.0f), ((float)L_10), ((float)L_11), /*hidden argument*/NULL);
		NullCheck(L_9);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_9, L_12, 0, 0, NULL);
		// result.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = L_9;
		NullCheck(L_13);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_13, NULL);
		// DestroyTexture(texture2D);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_14 = ___texture2D0;
		FileLoader_DestroyTexture_mEF1E99FD49EEB7970B1A41AC588914EDD466B33B(L_14, NULL);
		// return result;
		return L_13;
	}
}
// System.Void Solana.Unity.SDK.Utility.FileLoader::DestroyTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileLoader_DestroyTexture_mEF1E99FD49EEB7970B1A41AC588914EDD466B33B (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Object.Destroy(texture);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = ___texture0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		return;
	}

IL_000e:
	{
		// Object.DestroyImmediate(texture);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___texture0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
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
// System.Byte[] Solana.Unity.SDK.Utility.ObjectToByte::ObjectToByteArray(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ObjectToByte_ObjectToByteArray_m0969DAC0E1F59DDD71611AB8273327D43A273D00 (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* V_0 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// var bf = new BinaryFormatter();
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_0 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_0, NULL);
		V_0 = L_0;
		// using var ms = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_1, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_1;
					if (!L_2)
					{
						goto IL_0026;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_1;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0026:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// bf.Serialize(ms, obj);
			BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_4 = V_0;
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_1;
			RuntimeObject* L_6 = ___obj0;
			NullCheck(L_4);
			BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E(L_4, L_5, L_6, NULL);
			// return ms.ToArray();
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_1;
			NullCheck(L_7);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(43 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_7);
			V_2 = L_8;
			goto IL_0027;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0027:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		return L_9;
	}
}
// System.Object Solana.Unity.SDK.Utility.ObjectToByte::ByteArrayToObject(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectToByte_ByteArrayToObject_m318C1EC6699063FE6EC72CA4465A7FB187C7CBB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___arrBytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// using var memStream = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0032;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0032:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var binForm = new BinaryFormatter();
			BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_3 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_3, NULL);
			// memStream.Write(arrBytes, 0, arrBytes.Length);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___arrBytes0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___arrBytes0;
			NullCheck(L_6);
			NullCheck(L_4);
			VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)));
			// memStream.Seek(0, SeekOrigin.Begin);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_0;
			NullCheck(L_7);
			int64_t L_8;
			L_8 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_7, ((int64_t)0), 0);
			// var obj = binForm.Deserialize(memStream);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = V_0;
			NullCheck(L_3);
			RuntimeObject* L_10;
			L_10 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_3, L_9, NULL);
			// return obj;
			V_1 = L_10;
			goto IL_0033;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		RuntimeObject* L_11 = V_1;
		return L_11;
	}
}
// System.Byte[] Solana.Unity.SDK.Utility.ObjectToByte::getBytes(Solana.Unity.SDK.CompiledInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ObjectToByte_getBytes_mA49C2855AE0AA982667DE0C7383EF0D53F1AE0B6 (CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_mF0E47C95681EA0782E429C87951296E5C733589D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_m147DB119A2E94ABE23A512C032E29A1498B0FF8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var size = Marshal.SizeOf(str);
		CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C* L_0 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Marshal_SizeOf_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_mF0E47C95681EA0782E429C87951296E5C733589D(L_0, Marshal_SizeOf_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_mF0E47C95681EA0782E429C87951296E5C733589D_RuntimeMethod_var);
		V_0 = L_1;
		// var arr = new byte[size];
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		// var ptr = Marshal.AllocHGlobal(size);
		int32_t L_4 = V_0;
		intptr_t L_5;
		L_5 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_4, NULL);
		V_2 = L_5;
		// Marshal.StructureToPtr(str, ptr, true);
		CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C* L_6 = ___str0;
		intptr_t L_7 = V_2;
		Marshal_StructureToPtr_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_m147DB119A2E94ABE23A512C032E29A1498B0FF8E(L_6, L_7, (bool)1, Marshal_StructureToPtr_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_m147DB119A2E94ABE23A512C032E29A1498B0FF8E_RuntimeMethod_var);
		// Marshal.Copy(ptr, arr, 0, size);
		intptr_t L_8 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		int32_t L_10 = V_0;
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_8, L_9, 0, L_10, NULL);
		// Marshal.FreeHGlobal(ptr);
		intptr_t L_11 = V_2;
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_11, NULL);
		// return arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		return L_12;
	}
}
// Solana.Unity.SDK.CompiledInstruction Solana.Unity.SDK.Utility.ObjectToByte::fromBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C* ObjectToByte_fromBytes_mF250A7DF4C8A80BCC10E7123D71C64B9746355B8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___arr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_mF0E47C95681EA0782E429C87951296E5C733589D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C* V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var str = new CompiledInstruction();
		CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C* L_0 = (CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C*)il2cpp_codegen_object_new(CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CompiledInstruction__ctor_m959EE4AFB503850E97EA4AEEC78C819CF6EB321F(L_0, NULL);
		V_0 = L_0;
		// var size = Marshal.SizeOf(str);
		CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_mF0E47C95681EA0782E429C87951296E5C733589D(L_1, Marshal_SizeOf_TisCompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_mF0E47C95681EA0782E429C87951296E5C733589D_RuntimeMethod_var);
		V_1 = L_2;
		// var ptr = Marshal.AllocHGlobal(size);
		int32_t L_3 = V_1;
		intptr_t L_4;
		L_4 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_3, NULL);
		V_2 = L_4;
		// Marshal.Copy(arr, 0, ptr, size);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___arr0;
		intptr_t L_6 = V_2;
		int32_t L_7 = V_1;
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_5, 0, L_6, L_7, NULL);
		// str = (CompiledInstruction)Marshal.PtrToStructure(ptr, str.GetType());
		intptr_t L_8 = V_2;
		CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C* L_9 = V_0;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		RuntimeObject* L_11;
		L_11 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_8, L_10, NULL);
		V_0 = ((CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C*)CastclassClass((RuntimeObject*)L_11, CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C_il2cpp_TypeInfo_var));
		// Marshal.FreeHGlobal(ptr);
		intptr_t L_12 = V_2;
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_12, NULL);
		// return str;
		CompiledInstruction_t6F00E2EF6246DAB0A87B9A345E37EEBBD1D3265C* L_13 = V_0;
		return L_13;
	}
}
// System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeBase58StringFromByte(System.Byte[],System.Int32,System.Int32,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectToByte_DecodeBase58StringFromByte_mC6CBEFFAA6B15AA40EA4BD9426CE3C58A9485BD6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___length2, String_t** ___decodedData3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// decodedData = "";
		String_t** L_0 = ___decodedData3;
		*((RuntimeObject**)L_0) = (RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// var dataCopy = new byte[length];
		int32_t L_1 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// Array.Copy(data, (long)offset, dataCopy, 0, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___data0;
		int32_t L_4 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = ___length2;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_3, ((int64_t)L_4), (RuntimeArray*)L_5, ((int64_t)0), ((int64_t)L_6), NULL);
		// decodedData = Base58Encoding.Encode(dataCopy);
		String_t** L_7 = ___decodedData3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		String_t* L_9;
		L_9 = Base58Encoding_Encode_m5C58E4749FE9E801743DB17A520E975BE8876578(L_8, NULL);
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_9);
		// }
		return;
	}
}
// System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeUTF8StringFromByte(System.Byte[],System.Int32,System.Int32,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___length2, String_t** ___decodedData3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// decodedData = "";
		String_t** L_0 = ___decodedData3;
		*((RuntimeObject**)L_0) = (RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// var dataCopy = new byte[length];
		int32_t L_1 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// Array.Copy(data, (long)offset, dataCopy, 0, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___data0;
		int32_t L_4 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = ___length2;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_3, ((int64_t)L_4), (RuntimeArray*)L_5, ((int64_t)0), ((int64_t)L_6), NULL);
		// decodedData = Encoding.UTF8.GetString(dataCopy).Replace("\u0000", "");
		String_t** L_7 = ___decodedData3;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_8, L_9);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_10, _stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_11);
		// }
		return;
	}
}
// System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeUlongFromByte(System.Byte[],System.Int32,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectToByte_DecodeUlongFromByte_m1405595B586601DB9FD31401D582BD57144B45E7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, uint64_t* ___decodedData2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// decodedData = 0;
		uint64_t* L_0 = ___decodedData2;
		*((int64_t*)L_0) = (int64_t)((int64_t)0);
		// var dataCopy = new byte[8];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_1;
		// Array.Copy(data, (long)offset, dataCopy, 0, 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		int32_t L_3 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_2, ((int64_t)L_3), (RuntimeArray*)L_4, ((int64_t)0), ((int64_t)8), NULL);
		// decodedData = BitConverter.ToUInt64(dataCopy, 0);
		uint64_t* L_5 = ___decodedData2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint64_t L_7;
		L_7 = BitConverter_ToUInt64_mE7ED21EC4F2485A3AD117BA6DC44E1B6ED16DF23(L_6, 0, NULL);
		*((int64_t*)L_5) = (int64_t)L_7;
		// }
		return;
	}
}
// System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeUIntFromByte(System.Byte[],System.Int32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectToByte_DecodeUIntFromByte_mB43A80B57C31A2FF925805DFF3E5D46002B325A3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, uint32_t* ___decodedData2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// decodedData = 0;
		uint32_t* L_0 = ___decodedData2;
		*((int32_t*)L_0) = (int32_t)0;
		// var dataCopy = new byte[4];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_1;
		// Array.Copy(data, (long)offset, dataCopy, 0, 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		int32_t L_3 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_2, ((int64_t)L_3), (RuntimeArray*)L_4, ((int64_t)0), ((int64_t)4), NULL);
		// decodedData = BitConverter.ToUInt32(dataCopy, 0);
		uint32_t* L_5 = ___decodedData2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint32_t L_7;
		L_7 = BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177(L_6, 0, NULL);
		*((int32_t*)L_5) = (int32_t)L_7;
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
// System.Void Solana.Unity.SDK.Nft.Attributes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attributes__ctor_mE823C4A7CEB5D6A5D6C761A8AD42548F2AEA0199 (Attributes_t42915D121F8913EAA4A590E3675A06DA6DEEEC34* __this, const RuntimeMethod* method) 
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
// System.Void Solana.Unity.SDK.Nft.MetaplexJsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaplexJsonData__ctor_mF1CE93E88CD9BA674FD69D75D54268726E30643A (MetaplexJsonData_t8BFED7ECD7C8B9537758CC3B0C317FF915437678* __this, const RuntimeMethod* method) 
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
// System.Void Solana.Unity.SDK.Nft.MetaplexData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaplexData__ctor_m8C7AB1EA3C51A48260FB0D9A4DE01081AD1857FB (MetaplexData_tC37F1D8BEEC3B67D72F3C047E6704BB9811B1254* __this, const RuntimeMethod* method) 
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
// System.Void Solana.Unity.SDK.Nft.CreatorData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatorData__ctor_mA17A1B2AA158D11B1AEA9A77EEE06FA000BE6EFC (CreatorData_t5E41875F2A84FA801C05956443D9A3844E5E179A* __this, const RuntimeMethod* method) 
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
// System.Void Solana.Unity.SDK.Nft.File::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File__ctor_m715CBF3E44330435DF65991787BDD0AFC5550228 (File_t1B581E593FAE35BE02F82A19923E64AC64574E45* __this, const RuntimeMethod* method) 
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
// System.Void Solana.Unity.SDK.Nft.Properties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Properties__ctor_m78944B6ABFC5BCD5ACC11B55E4EAA1CD0E97553A (Properties_t35B1027239852E24EAC0F2B5A83695B84DDD31D5* __this, const RuntimeMethod* method) 
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
// System.Void Solana.Unity.SDK.Nft.Metaplex::.ctor(Solana.Unity.Metaplex.NFT.Library.MetadataAccount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metaplex__ctor_m301DD08FF78DBFE60FB196F060B64D5B1082A29C (Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* __this, MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* ___metadataAccount0, const RuntimeMethod* method) 
{
	{
		// public Metaplex(MetadataAccount metadataAccount)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// data = metadataAccount;
		MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_0 = ___metadataAccount0;
		__this->___data_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_0);
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
// Solana.Unity.SDK.Nft.NFTProData Solana.Unity.SDK.Nft.NFTProData::DeserializeNFTProData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* NFTProData_DeserializeNFTProData_m1B56B9DFBC2FF15965779F8E8019E7A6E113BE03 (String_t* ___base640, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		// byte[] data = Convert.FromBase64String(base64);
		String_t* L_0 = ___base640;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_0, NULL);
		V_0 = L_1;
		// NFTProData swapData = new NFTProData();
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_2 = (NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF*)il2cpp_codegen_object_new(NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NFTProData__ctor_m6D6E773454EE51C70B1B56D7FB4F472008AC2A62(L_2, NULL);
		V_1 = L_2;
		// int index = 0;
		V_2 = 0;
		// ObjectToByte.DecodeUTF8StringFromByte(data, 0, 4, out swapData.type);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_4 = V_1;
		NullCheck(L_4);
		String_t** L_5 = (&L_4->___type_0);
		ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD(L_3, 0, 4, L_5, NULL);
		// index+= 4;
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 4));
		// ObjectToByte.DecodeUIntFromByte(data, index, out swapData.version);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_2;
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_9 = V_1;
		NullCheck(L_9);
		uint32_t* L_10 = (&L_9->___version_1);
		ObjectToByte_DecodeUIntFromByte_mB43A80B57C31A2FF925805DFF3E5D46002B325A3(L_7, L_8, L_10, NULL);
		// index += 4;
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 4));
		// ObjectToByte.DecodeUTF8StringFromByte(data, index, 32, out swapData.mint);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		int32_t L_13 = V_2;
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_14 = V_1;
		NullCheck(L_14);
		String_t** L_15 = (&L_14->___mint_2);
		ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD(L_12, L_13, ((int32_t)32), L_15, NULL);
		// index += 32;
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)32)));
		// ObjectToByte.DecodeUTF8StringFromByte(data, index, 32, out swapData.metadata);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		int32_t L_18 = V_2;
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_19 = V_1;
		NullCheck(L_19);
		String_t** L_20 = (&L_19->___metadata_3);
		ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD(L_17, L_18, ((int32_t)32), L_20, NULL);
		// index += 32;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)32)));
		// ObjectToByte.DecodeUTF8StringFromByte(data, index, 20, out swapData.title);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		int32_t L_23 = V_2;
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_24 = V_1;
		NullCheck(L_24);
		String_t** L_25 = (&L_24->___title_4);
		ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD(L_22, L_23, ((int32_t)20), L_25, NULL);
		// index += 20;
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)20)));
		// ObjectToByte.DecodeUTF8StringFromByte(data, index, 64, out swapData.description);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_0;
		int32_t L_28 = V_2;
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_29 = V_1;
		NullCheck(L_29);
		String_t** L_30 = (&L_29->___description_5);
		ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD(L_27, L_28, ((int32_t)64), L_30, NULL);
		// index += 64;
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, ((int32_t)64)));
		// ObjectToByte.DecodeUTF8StringFromByte(data, index, 64, out swapData.creator);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		int32_t L_33 = V_2;
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_34 = V_1;
		NullCheck(L_34);
		String_t** L_35 = (&L_34->___creator_6);
		ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD(L_32, L_33, ((int32_t)64), L_35, NULL);
		// index += 64;
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_36, ((int32_t)64)));
		// ObjectToByte.DecodeUTF8StringFromByte(data, index, 100, out swapData.licence);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_0;
		int32_t L_38 = V_2;
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_39 = V_1;
		NullCheck(L_39);
		String_t** L_40 = (&L_39->___licence_8);
		ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD(L_37, L_38, ((int32_t)100), L_40, NULL);
		// index += 100;
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, ((int32_t)100)));
		// ObjectToByte.DecodeUTF8StringFromByte(data, index, 20, out swapData.licence_title);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		int32_t L_43 = V_2;
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_44 = V_1;
		NullCheck(L_44);
		String_t** L_45 = (&L_44->___licence_title_9);
		ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD(L_42, L_43, ((int32_t)20), L_45, NULL);
		// index += 20;
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, ((int32_t)20)));
		// swapData.nsfw = BitConverter.ToBoolean(data, index);
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_47 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		int32_t L_49 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = BitConverter_ToBoolean_mBDA6F9734B907F7BA1135819940F5D6C3E5085FB(L_48, L_49, NULL);
		NullCheck(L_47);
		L_47->___nsfw_10 = L_50;
		// index++;
		int32_t L_51 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		// swapData.tags = new string[10];
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_52 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		NullCheck(L_52);
		L_52->___tags_11 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&L_52->___tags_11), (void*)L_53);
		// for (int i = index, ind = 0; i < 10 * 15 + index; i += 15, ind++)
		int32_t L_54 = V_2;
		V_3 = L_54;
		// for (int i = index, ind = 0; i < 10 * 15 + index; i += 15, ind++)
		V_4 = 0;
		goto IL_0104;
	}

IL_00e3:
	{
		// ObjectToByte.DecodeBase58StringFromByte(data, i, 32, out string key);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_0;
		int32_t L_56 = V_3;
		ObjectToByte_DecodeBase58StringFromByte_mC6CBEFFAA6B15AA40EA4BD9426CE3C58A9485BD6(L_55, L_56, ((int32_t)32), (&V_5), NULL);
		// swapData.tags[ind] = key;
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_57 = V_1;
		NullCheck(L_57);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_57->___tags_11;
		int32_t L_59 = V_4;
		String_t* L_60 = V_5;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_60);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (String_t*)L_60);
		// for (int i = index, ind = 0; i < 10 * 15 + index; i += 15, ind++)
		int32_t L_61 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_61, ((int32_t)15)));
		// for (int i = index, ind = 0; i < 10 * 15 + index; i += 15, ind++)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0104:
	{
		// for (int i = index, ind = 0; i < 10 * 15 + index; i += 15, ind++)
		int32_t L_63 = V_3;
		int32_t L_64 = V_2;
		if ((((int32_t)L_63) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)150), L_64)))))
		{
			goto IL_00e3;
		}
	}
	{
		// return swapData;
		NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* L_65 = V_1;
		return L_65;
	}
}
// System.Void Solana.Unity.SDK.Nft.NFTProData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NFTProData__ctor_m6D6E773454EE51C70B1B56D7FB4F472008AC2A62 (NFTProData_t50A0143696132B692FA63C13CCEE4A5058FCBEDF* __this, const RuntimeMethod* method) 
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
// System.String Solana.Unity.SDK.Nft.NftImage::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NftImage_get_name_m31A02C1BBDC36B30D4A2061B2A6D7F2727F05620 (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Solana.Unity.SDK.Nft.NftImage::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NftImage_set_name_m595DD99548F5EF12D840D8316EB45816919E46F6 (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Solana.Unity.SDK.Nft.NftImage::get_extension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NftImage_get_extension_m8EC747E41953C61A5BE39943D6876D92A4246D11 (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, const RuntimeMethod* method) 
{
	{
		// public string extension { get; set; }
		String_t* L_0 = __this->___U3CextensionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Solana.Unity.SDK.Nft.NftImage::set_extension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NftImage_set_extension_m570CD3BB0C9FF797E8FDA2EB61ED406DC28486E8 (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string extension { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CextensionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CextensionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Solana.Unity.SDK.Nft.NftImage::get_externalUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NftImage_get_externalUrl_m809C6DC78D290A0FF51CC08ADC4AB145A66EA806 (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, const RuntimeMethod* method) 
{
	{
		// public string externalUrl { get; set; }
		String_t* L_0 = __this->___U3CexternalUrlU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Solana.Unity.SDK.Nft.NftImage::set_externalUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NftImage_set_externalUrl_m82EAF4A55FBB51F7A775758786A5410906B85AF7 (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string externalUrl { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CexternalUrlU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexternalUrlU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// UnityEngine.Texture2D Solana.Unity.SDK.Nft.NftImage::get_file()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NftImage_get_file_mF87C00E458B7385A20656B4FAAC930473B3CDFD6 (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, const RuntimeMethod* method) 
{
	{
		// public Texture2D file { get; set; }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___U3CfileU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Solana.Unity.SDK.Nft.NftImage::set_file(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NftImage_set_file_mA0E407437B4D29D0B68645934C4613FEF61B7B23 (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) 
{
	{
		// public Texture2D file { get; set; }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___value0;
		__this->___U3CfileU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CfileU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.SDK.Nft.NftImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NftImage__ctor_m67A1777D7E2D8D968815C6E7803EF2D219E5B3CC (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, const RuntimeMethod* method) 
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
// System.Void Solana.Unity.SDK.Nft.Nft::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nft__ctor_mE6D1F715EEA47AEAA6F8C9F6A8A7D7C815B997AB (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* __this, const RuntimeMethod* method) 
{
	{
		// public Nft() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public Nft() { }
		return;
	}
}
// System.Void Solana.Unity.SDK.Nft.Nft::.ctor(Solana.Unity.SDK.Nft.Metaplex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nft__ctor_m87A95EEFFB10B250CA7E350677DB735AD03F6D9C (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* __this, Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* ___metaplexData0, const RuntimeMethod* method) 
{
	{
		// public Nft(Metaplex metaplexData)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.metaplexData = metaplexData;
		Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_0 = ___metaplexData0;
		__this->___metaplexData_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___metaplexData_0), (void*)L_0);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Solana.Unity.SDK.Nft.Nft> Solana.Unity.SDK.Nft.Nft::TryGetNftData(System.String,Solana.Unity.Rpc.IRpcClient,System.Boolean,System.Int32,System.Boolean,Solana.Unity.Rpc.Types.Commitment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t56AF99E9787DBB0970871E96442BC816D9B88BAA* Nft_TryGetNftData_m5AAF4EADA0D4058E07FFBB49D27AC368E458D5A2 (String_t* ___mint0, RuntimeObject* ___connection1, bool ___loadTexture2, int32_t ___imageHeightAndWidth3, bool ___tryUseLocalContent4, int32_t ___commitment5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m5FF2C09F29073DCAC073D42B2C03F7D286D69645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_m1CA6E3479FF4EAA03F90DE766249C53F978609FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mFAE22BF22742386E2EB689B5B32BEDCFC82C2A9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m5FF2C09F29073DCAC073D42B2C03F7D286D69645(AsyncTaskMethodBuilder_1_Create_m5FF2C09F29073DCAC073D42B2C03F7D286D69645_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___mint0;
		(&V_0)->___mint_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___mint_3), (void*)L_1);
		RuntimeObject* L_2 = ___connection1;
		(&V_0)->___connection_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___connection_5), (void*)L_2);
		bool L_3 = ___loadTexture2;
		(&V_0)->___loadTexture_4 = L_3;
		int32_t L_4 = ___imageHeightAndWidth3;
		(&V_0)->___imageHeightAndWidth_7 = L_4;
		bool L_5 = ___tryUseLocalContent4;
		(&V_0)->___tryUseLocalContent_2 = L_5;
		int32_t L_6 = ___commitment5;
		(&V_0)->___commitment_6 = L_6;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* L_7 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_m1CA6E3479FF4EAA03F90DE766249C53F978609FF(L_7, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_m1CA6E3479FF4EAA03F90DE766249C53F978609FF_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* L_8 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t56AF99E9787DBB0970871E96442BC816D9B88BAA* L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_mFAE22BF22742386E2EB689B5B32BEDCFC82C2A9D(L_8, AsyncTaskMethodBuilder_1_get_Task_mFAE22BF22742386E2EB689B5B32BEDCFC82C2A9D_RuntimeMethod_var);
		return L_9;
	}
}
// Solana.Unity.SDK.Nft.Nft Solana.Unity.SDK.Nft.Nft::TryLoadNftFromLocal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* Nft_TryLoadNftFromLocal_m847ED85635E5620F2FB57EA13E811C20490A07A7 (String_t* ___mint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileLoader_LoadFileFromLocalPath_TisMetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51_m3C52711C22108678C731A7B179D739AA707BFC09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileLoader_LoadFileFromLocalPath_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m016C359B5BB9BE795CD536FA49FE4A0DFEB5998F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iNftFile_1_t34D520A6CC3B3DF35FEB3C67370D70D748CEFC92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* V_0 = NULL;
	Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* V_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_2 = NULL;
	{
		// var metadataAccount = FileLoader.LoadFileFromLocalPath<MetadataAccount>($"{Path.Combine(Application.persistentDataPath, mint)}.json");
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1 = ___mint0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742, NULL);
		MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_4;
		L_4 = FileLoader_LoadFileFromLocalPath_TisMetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51_m3C52711C22108678C731A7B179D739AA707BFC09(L_3, FileLoader_LoadFileFromLocalPath_TisMetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51_m3C52711C22108678C731A7B179D739AA707BFC09_RuntimeMethod_var);
		V_0 = L_4;
		// if (metadataAccount == null) return null;
		MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_5 = V_0;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (metadataAccount == null) return null;
		return (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*)NULL;
	}

IL_0020:
	{
		// var local = new Nft(new Metaplex(metadataAccount));
		MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_6 = V_0;
		Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_7 = (Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A*)il2cpp_codegen_object_new(Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Metaplex__ctor_m301DD08FF78DBFE60FB196F060B64D5B1082A29C(L_7, L_6, NULL);
		Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_8 = (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*)il2cpp_codegen_object_new(Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Nft__ctor_m87A95EEFFB10B250CA7E350677DB735AD03F6D9C(L_8, L_7, NULL);
		V_1 = L_8;
		// var tex = FileLoader.LoadFileFromLocalPath<Texture2D>($"{Path.Combine(Application.persistentDataPath, mint)}.png");
		String_t* L_9;
		L_9 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_10 = ___mint0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_9, L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13;
		L_13 = FileLoader_LoadFileFromLocalPath_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m016C359B5BB9BE795CD536FA49FE4A0DFEB5998F(L_12, FileLoader_LoadFileFromLocalPath_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m016C359B5BB9BE795CD536FA49FE4A0DFEB5998F_RuntimeMethod_var);
		V_2 = L_13;
		// if (tex)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
		if (!L_15)
		{
			goto IL_0072;
		}
	}
	{
		// local.metaplexData.nftImage = new NftImage();
		Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_16 = V_1;
		NullCheck(L_16);
		Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_17 = L_16->___metaplexData_0;
		NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* L_18 = (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20*)il2cpp_codegen_object_new(NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		NftImage__ctor_m67A1777D7E2D8D968815C6E7803EF2D219E5B3CC(L_18, NULL);
		NullCheck(L_17);
		L_17->___nftImage_0 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___nftImage_0), (void*)L_18);
		// local.metaplexData.nftImage.file = tex;
		Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_19 = V_1;
		NullCheck(L_19);
		Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_20 = L_19->___metaplexData_0;
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->___nftImage_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22 = V_2;
		NullCheck(L_21);
		InterfaceActionInvoker1< Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* >::Invoke(7 /* System.Void Solana.Unity.SDK.Nft.iNftFile`1<UnityEngine.Texture2D>::set_file(T) */, iNftFile_1_t34D520A6CC3B3DF35FEB3C67370D70D748CEFC92_il2cpp_TypeInfo_var, L_21, L_22);
		goto IL_0074;
	}

IL_0072:
	{
		// return null;
		return (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*)NULL;
	}

IL_0074:
	{
		// return local;
		Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_23 = V_1;
		return L_23;
	}
}
// System.Threading.Tasks.Task Solana.Unity.SDK.Nft.Nft::LoadTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Nft_LoadTexture_mDFB1A673C4F3B46C7CD2344EBD8976AA9A9EAE56 (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* __this, int32_t ___imageHeightAndWidth0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_m3974670026A667EC10D97325143B868330D41076_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		int32_t L_1 = ___imageHeightAndWidth0;
		(&V_0)->___imageHeightAndWidth_3 = L_1;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_m3974670026A667EC10D97325143B868330D41076(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_m3974670026A667EC10D97325143B868330D41076_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
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
// System.Void Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGetNftDataU3Ed__3_MoveNext_m58C0867108B5FFE2CD4C4B51BF5948194AF79581 (U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mFA3308FD473A79D0A3AF021D94629C33D8E276D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mA5F7719DD296C516D447134B5352D83BB8CE35A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m042A9DFC699DD914C49DD5B25561DB97403AF3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileLoader_SaveToPersistentDataPath_TisMetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51_mCBFD7B61780A7B74B3E5EF16DC7FD097CC7F4B34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A4B2A438721CBE6D9BB37486616D975F8BAF28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m7380958BCD673BEF6D478E07F22B7EA94896C6EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m123CA477CD77203FA7F82D9119B581658958A73F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* V_1 = NULL;
	MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* V_2 = NULL;
	Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* V_3 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	OnChainData_tDE37880ED87AB6DC2E17563E8A15904F4457F09C* G_B17_0 = NULL;
	MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* G_B21_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_008b_1;
				}
				case 1:
				{
					goto IL_011a_1;
				}
				case 2:
				{
					goto IL_01c2_1;
				}
			}
		}
		{
			// if (tryUseLocalContent)
			bool L_2 = __this->___tryUseLocalContent_2;
			if (!L_2)
			{
				goto IL_00ca_1;
			}
		}
		{
			// var nft = TryLoadNftFromLocal(mint);
			String_t* L_3 = __this->___mint_3;
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_4;
			L_4 = Nft_TryLoadNftFromLocal_m847ED85635E5620F2FB57EA13E811C20490A07A7(L_3, NULL);
			__this->___U3CnftU3E5__3_9 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnftU3E5__3_9), (void*)L_4);
			// if(nft != null && loadTexture) await nft.LoadTexture();
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_5 = __this->___U3CnftU3E5__3_9;
			bool L_6 = __this->___loadTexture_4;
			if (!((int32_t)(((!(((RuntimeObject*)(Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)&(int32_t)L_6)))
			{
				goto IL_00af_1;
			}
		}
		{
			// if(nft != null && loadTexture) await nft.LoadTexture();
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_7 = __this->___U3CnftU3E5__3_9;
			NullCheck(L_7);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
			L_8 = Nft_LoadTexture_mDFB1A673C4F3B46C7CD2344EBD8976AA9A9EAE56(L_7, ((int32_t)256), NULL);
			NullCheck(L_8);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9;
			L_9 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_8, NULL);
			V_4 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_4), NULL);
			if (L_10)
			{
				goto IL_00a8_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = V_4;
			__this->___U3CU3Eu__1_10 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_10))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mA5F7719DD296C516D447134B5352D83BB8CE35A0(L_13, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mA5F7719DD296C516D447134B5352D83BB8CE35A0_RuntimeMethod_var);
			goto IL_0259;
		}

IL_008b_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = __this->___U3CU3Eu__1_10;
			V_4 = L_14;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_15 = (&__this->___U3CU3Eu__1_10);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_00a8_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_4), NULL);
		}

IL_00af_1:
		{
			// if (nft != null) return nft;
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_17 = __this->___U3CnftU3E5__3_9;
			if (!L_17)
			{
				goto IL_00c3_1;
			}
		}
		{
			// if (nft != null) return nft;
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_18 = __this->___U3CnftU3E5__3_9;
			V_1 = L_18;
			goto IL_023e;
		}

IL_00c3_1:
		{
			// }
			__this->___U3CnftU3E5__3_9 = (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnftU3E5__3_9), (void*)(Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*)NULL);
		}

IL_00ca_1:
		{
			// var newData = await MetadataAccount.GetAccount( connection, new PublicKey(mint), commitment);
			RuntimeObject* L_19 = __this->___connection_5;
			String_t* L_20 = __this->___mint_3;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_21 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			NullCheck(L_21);
			PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_21, L_20, NULL);
			int32_t L_22 = __this->___commitment_6;
			Task_1_t6EAD20B5A3A44575D9A8067DBF57C0FB36A453DA* L_23;
			L_23 = MetadataAccount_GetAccount_m694CF57B71848F15B526AD7BF3ABDB168A8D4FE1(L_19, L_21, L_22, NULL);
			NullCheck(L_23);
			TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258 L_24;
			L_24 = Task_1_GetAwaiter_m123CA477CD77203FA7F82D9119B581658958A73F(L_23, Task_1_GetAwaiter_m123CA477CD77203FA7F82D9119B581658958A73F_RuntimeMethod_var);
			V_5 = L_24;
			bool L_25;
			L_25 = TaskAwaiter_1_get_IsCompleted_m7380958BCD673BEF6D478E07F22B7EA94896C6EB((&V_5), TaskAwaiter_1_get_IsCompleted_m7380958BCD673BEF6D478E07F22B7EA94896C6EB_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_0137_1;
			}
		}
		{
			int32_t L_26 = 1;
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
			TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258 L_27 = V_5;
			__this->___U3CU3Eu__2_11 = L_27;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_11))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* L_28 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mFA3308FD473A79D0A3AF021D94629C33D8E276D2(L_28, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mFA3308FD473A79D0A3AF021D94629C33D8E276D2_RuntimeMethod_var);
			goto IL_0259;
		}

IL_011a_1:
		{
			TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258 L_29 = __this->___U3CU3Eu__2_11;
			V_5 = L_29;
			TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258* L_30 = (&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_1_tE9E6BC42C54381D8CF354FAE44690A8E8FCF1258));
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->___U3CU3E1__state_0 = L_31;
		}

IL_0137_1:
		{
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_32;
			L_32 = TaskAwaiter_1_GetResult_m82A4B2A438721CBE6D9BB37486616D975F8BAF28((&V_5), TaskAwaiter_1_GetResult_m82A4B2A438721CBE6D9BB37486616D975F8BAF28_RuntimeMethod_var);
			V_2 = L_32;
			// if (newData?.metadata == null || newData?.offchainData == null) return null;
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_33 = V_2;
			if (L_33)
			{
				goto IL_0145_1;
			}
		}
		{
			G_B17_0 = ((OnChainData_tDE37880ED87AB6DC2E17563E8A15904F4457F09C*)(NULL));
			goto IL_014b_1;
		}

IL_0145_1:
		{
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_34 = V_2;
			NullCheck(L_34);
			OnChainData_tDE37880ED87AB6DC2E17563E8A15904F4457F09C* L_35 = L_34->___metadata_3;
			G_B17_0 = L_35;
		}

IL_014b_1:
		{
			if (!G_B17_0)
			{
				goto IL_015b_1;
			}
		}
		{
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_36 = V_2;
			if (L_36)
			{
				goto IL_0153_1;
			}
		}
		{
			G_B21_0 = ((MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5*)(NULL));
			goto IL_0159_1;
		}

IL_0153_1:
		{
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_37 = V_2;
			NullCheck(L_37);
			MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* L_38 = L_37->___offchainData_4;
			G_B21_0 = L_38;
		}

IL_0159_1:
		{
			if (G_B21_0)
			{
				goto IL_0162_1;
			}
		}

IL_015b_1:
		{
			// if (newData?.metadata == null || newData?.offchainData == null) return null;
			V_1 = (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*)NULL;
			goto IL_023e;
		}

IL_0162_1:
		{
			// var met = new Metaplex(newData);
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_39 = V_2;
			Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_40 = (Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A*)il2cpp_codegen_object_new(Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A_il2cpp_TypeInfo_var);
			NullCheck(L_40);
			Metaplex__ctor_m301DD08FF78DBFE60FB196F060B64D5B1082A29C(L_40, L_39, NULL);
			V_3 = L_40;
			// var newNft = new Nft(met);
			Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_41 = V_3;
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_42 = (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*)il2cpp_codegen_object_new(Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E_il2cpp_TypeInfo_var);
			NullCheck(L_42);
			Nft__ctor_m87A95EEFFB10B250CA7E350677DB735AD03F6D9C(L_42, L_41, NULL);
			__this->___U3CnewNftU3E5__2_8 = L_42;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewNftU3E5__2_8), (void*)L_42);
			// if (loadTexture) await newNft.LoadTexture(imageHeightAndWidth);
			bool L_43 = __this->___loadTexture_4;
			if (!L_43)
			{
				goto IL_01e6_1;
			}
		}
		{
			// if (loadTexture) await newNft.LoadTexture(imageHeightAndWidth);
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_44 = __this->___U3CnewNftU3E5__2_8;
			int32_t L_45 = __this->___imageHeightAndWidth_7;
			NullCheck(L_44);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_46;
			L_46 = Nft_LoadTexture_mDFB1A673C4F3B46C7CD2344EBD8976AA9A9EAE56(L_44, L_45, NULL);
			NullCheck(L_46);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_47;
			L_47 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_46, NULL);
			V_4 = L_47;
			bool L_48;
			L_48 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_4), NULL);
			if (L_48)
			{
				goto IL_01df_1;
			}
		}
		{
			int32_t L_49 = 2;
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_50 = V_4;
			__this->___U3CU3Eu__1_10 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_10))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* L_51 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mA5F7719DD296C516D447134B5352D83BB8CE35A0(L_51, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048_mA5F7719DD296C516D447134B5352D83BB8CE35A0_RuntimeMethod_var);
			goto IL_0259;
		}

IL_01c2_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_52 = __this->___U3CU3Eu__1_10;
			V_4 = L_52;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_53 = (&__this->___U3CU3Eu__1_10);
			il2cpp_codegen_initobj(L_53, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state_0 = L_54;
		}

IL_01df_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_4), NULL);
		}

IL_01e6_1:
		{
			// FileLoader.SaveToPersistentDataPath(Path.Combine(Application.persistentDataPath, $"{mint}.json"), newNft.metaplexData.data);
			String_t* L_55;
			L_55 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
			String_t* L_56 = __this->___mint_3;
			String_t* L_57;
			L_57 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_56, _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742, NULL);
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_58;
			L_58 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_55, L_57, NULL);
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_59 = __this->___U3CnewNftU3E5__2_8;
			NullCheck(L_59);
			Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_60 = L_59->___metaplexData_0;
			NullCheck(L_60);
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_61 = L_60->___data_1;
			FileLoader_SaveToPersistentDataPath_TisMetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51_mCBFD7B61780A7B74B3E5EF16DC7FD097CC7F4B34(L_58, L_61, FileLoader_SaveToPersistentDataPath_TisMetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51_mCBFD7B61780A7B74B3E5EF16DC7FD097CC7F4B34_RuntimeMethod_var);
			// return newNft;
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_62 = __this->___U3CnewNftU3E5__2_8;
			V_1 = L_62;
			goto IL_023e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_021e;
		}
		throw e;
	}

CATCH_021e:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CnewNftU3E5__2_8 = (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewNftU3E5__2_8), (void*)(Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*)NULL);
		AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* L_63 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_64 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m75725988E2733A64B19D8B9271CCDDDD05B7F5A7(L_63, L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m75725988E2733A64B19D8B9271CCDDDD05B7F5A7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0259;
	}// end catch (depth: 1)

IL_023e:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CnewNftU3E5__2_8 = (Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewNftU3E5__2_8), (void*)(Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E*)NULL);
		AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* L_65 = (&__this->___U3CU3Et__builder_1);
		Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_66 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m042A9DFC699DD914C49DD5B25561DB97403AF3B2(L_65, L_66, AsyncTaskMethodBuilder_1_SetResult_m042A9DFC699DD914C49DD5B25561DB97403AF3B2_RuntimeMethod_var);
	}

IL_0259:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTryGetNftDataU3Ed__3_MoveNext_m58C0867108B5FFE2CD4C4B51BF5948194AF79581_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048*>(__this + _offset);
	U3CTryGetNftDataU3Ed__3_MoveNext_m58C0867108B5FFE2CD4C4B51BF5948194AF79581(_thisAdjusted, method);
}
// System.Void Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGetNftDataU3Ed__3_SetStateMachine_m0DF8A2A110E9187D23E731F7A7605B3C6869F516 (U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m611FCFDB5FE2F9D9DB4B97F721F099F02C6171CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t0E2B75B305B2AD2D437C4DEC6549537350C7C841* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m611FCFDB5FE2F9D9DB4B97F721F099F02C6171CA(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m611FCFDB5FE2F9D9DB4B97F721F099F02C6171CA_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTryGetNftDataU3Ed__3_SetStateMachine_m0DF8A2A110E9187D23E731F7A7605B3C6869F516_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTryGetNftDataU3Ed__3_t4280079FEFE6E2998EDA0F10C1DF3613734A4048*>(__this + _offset);
	U3CTryGetNftDataU3Ed__3_SetStateMachine_m0DF8A2A110E9187D23E731F7A7605B3C6869F516(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureU3Ed__5_MoveNext_mC655A2A6DAE3DDA587484EAA064FA24C4E715217 (U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_mD6738CAD485051F94AA5CEB97F9B30CC31DB607A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileLoader_LoadFile_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m80E0333559E547473442D0D3AA22C040938B7714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileLoader_SaveToPersistentDataPath_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mB85A1EECDCFFC9DD8BD906A6DE24ED636334B8B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral683E9AEDEA0A637BF28D65D46A3996D097F4DFF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* V_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_2 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_009b_1;
			}
		}
		{
			// if (metaplexData.data.offchainData == null) return;
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_3 = V_1;
			NullCheck(L_3);
			Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_4 = L_3->___metaplexData_0;
			NullCheck(L_4);
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_5 = L_4->___data_1;
			NullCheck(L_5);
			MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* L_6 = L_5->___offchainData_4;
			if (L_6)
			{
				goto IL_002b_1;
			}
		}
		{
			// if (metaplexData.data.offchainData == null) return;
			goto IL_01cb;
		}

IL_002b_1:
		{
			// if (metaplexData.nftImage != null) return;
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_7 = V_1;
			NullCheck(L_7);
			Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_8 = L_7->___metaplexData_0;
			NullCheck(L_8);
			RuntimeObject* L_9 = L_8->___nftImage_0;
			if (!L_9)
			{
				goto IL_003d_1;
			}
		}
		{
			// if (metaplexData.nftImage != null) return;
			goto IL_01cb;
		}

IL_003d_1:
		{
			// var nftImage = new NftImage();
			NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* L_10 = (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20*)il2cpp_codegen_object_new(NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20_il2cpp_TypeInfo_var);
			NullCheck(L_10);
			NftImage__ctor_m67A1777D7E2D8D968815C6E7803EF2D219E5B3CC(L_10, NULL);
			__this->___U3CnftImageU3E5__2_4 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnftImageU3E5__2_4), (void*)L_10);
			// var texture = await FileLoader.LoadFile<Texture2D>(metaplexData.data.offchainData.default_image);
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_11 = V_1;
			NullCheck(L_11);
			Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_12 = L_11->___metaplexData_0;
			NullCheck(L_12);
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_13 = L_12->___data_1;
			NullCheck(L_13);
			MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* L_14 = L_13->___offchainData_4;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = MetaplexTokenStandard_get_default_image_m54B60D3D52B9B0DA969BECF63DFB63499FA916ED_inline(L_14, NULL);
			Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_16;
			L_16 = FileLoader_LoadFile_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m80E0333559E547473442D0D3AA22C040938B7714(L_15, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, FileLoader_LoadFile_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m80E0333559E547473442D0D3AA22C040938B7714_RuntimeMethod_var);
			NullCheck(L_16);
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_17;
			L_17 = Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C(L_16, Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
			V_4 = L_17;
			bool L_18;
			L_18 = TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911((&V_4), TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_00b8_1;
			}
		}
		{
			int32_t L_19 = 0;
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_20 = V_4;
			__this->___U3CU3Eu__1_5 = L_20;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_21 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_mD6738CAD485051F94AA5CEB97F9B30CC31DB607A(L_21, (&V_4), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637_mD6738CAD485051F94AA5CEB97F9B30CC31DB607A_RuntimeMethod_var);
			goto IL_01e5;
		}

IL_009b_1:
		{
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_22 = __this->___U3CU3Eu__1_5;
			V_4 = L_22;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* L_23 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_23, sizeof(TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B));
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_00b8_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25;
			L_25 = TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C((&V_4), TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
			V_2 = L_25;
			// if (texture == null)
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = V_2;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_27;
			L_27 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_27)
			{
				goto IL_0107_1;
			}
		}
		{
			// Debug.LogWarning($"Unable to load: {metaplexData?.data?.offchainData?.default_image}");
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_28 = V_1;
			NullCheck(L_28);
			Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_29 = L_28->___metaplexData_0;
			Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_30 = L_29;
			G_B11_0 = L_30;
			G_B11_1 = _stringLiteral683E9AEDEA0A637BF28D65D46A3996D097F4DFF6;
			if (L_30)
			{
				G_B12_0 = L_30;
				G_B12_1 = _stringLiteral683E9AEDEA0A637BF28D65D46A3996D097F4DFF6;
				goto IL_00db_1;
			}
		}
		{
			G_B17_0 = ((String_t*)(NULL));
			G_B17_1 = G_B11_1;
			goto IL_00f8_1;
		}

IL_00db_1:
		{
			NullCheck(G_B12_0);
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_31 = G_B12_0->___data_1;
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_32 = L_31;
			G_B13_0 = L_32;
			G_B13_1 = G_B12_1;
			if (L_32)
			{
				G_B14_0 = L_32;
				G_B14_1 = G_B12_1;
				goto IL_00e7_1;
			}
		}
		{
			G_B17_0 = ((String_t*)(NULL));
			G_B17_1 = G_B13_1;
			goto IL_00f8_1;
		}

IL_00e7_1:
		{
			NullCheck(G_B14_0);
			MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* L_33 = G_B14_0->___offchainData_4;
			MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* L_34 = L_33;
			G_B15_0 = L_34;
			G_B15_1 = G_B14_1;
			if (L_34)
			{
				G_B16_0 = L_34;
				G_B16_1 = G_B14_1;
				goto IL_00f3_1;
			}
		}
		{
			G_B17_0 = ((String_t*)(NULL));
			G_B17_1 = G_B15_1;
			goto IL_00f8_1;
		}

IL_00f3_1:
		{
			NullCheck(G_B16_0);
			String_t* L_35;
			L_35 = MetaplexTokenStandard_get_default_image_m54B60D3D52B9B0DA969BECF63DFB63499FA916ED_inline(G_B16_0, NULL);
			G_B17_0 = L_35;
			G_B17_1 = G_B16_1;
		}

IL_00f8_1:
		{
			String_t* L_36;
			L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B17_1, G_B17_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_36, NULL);
			// return;
			goto IL_01cb;
		}

IL_0107_1:
		{
			// var compressedTexture = FileLoader.Resize(texture, imageHeightAndWidth, imageHeightAndWidth);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = V_2;
			int32_t L_38 = __this->___imageHeightAndWidth_3;
			int32_t L_39 = __this->___imageHeightAndWidth_3;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_40;
			L_40 = FileLoader_Resize_m9CEA433A8CE82F3C2D109EEB0E105DB8DBE09000(L_37, L_38, L_39, NULL);
			V_3 = L_40;
			// if (compressedTexture)
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = V_3;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_42;
			L_42 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_41, NULL);
			if (!L_42)
			{
				goto IL_017f_1;
			}
		}
		{
			// nftImage.externalUrl = metaplexData.data.offchainData.default_image;
			NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* L_43 = __this->___U3CnftImageU3E5__2_4;
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_44 = V_1;
			NullCheck(L_44);
			Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_45 = L_44->___metaplexData_0;
			NullCheck(L_45);
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_46 = L_45->___data_1;
			NullCheck(L_46);
			MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* L_47 = L_46->___offchainData_4;
			NullCheck(L_47);
			String_t* L_48;
			L_48 = MetaplexTokenStandard_get_default_image_m54B60D3D52B9B0DA969BECF63DFB63499FA916ED_inline(L_47, NULL);
			NullCheck(L_43);
			NftImage_set_externalUrl_m82EAF4A55FBB51F7A775758786A5410906B85AF7_inline(L_43, L_48, NULL);
			// nftImage.file = compressedTexture;
			NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* L_49 = __this->___U3CnftImageU3E5__2_4;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_50 = V_3;
			NullCheck(L_49);
			NftImage_set_file_mA0E407437B4D29D0B68645934C4613FEF61B7B23_inline(L_49, L_50, NULL);
			// metaplexData.nftImage = nftImage;
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_51 = V_1;
			NullCheck(L_51);
			Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_52 = L_51->___metaplexData_0;
			NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* L_53 = __this->___U3CnftImageU3E5__2_4;
			NullCheck(L_52);
			L_52->___nftImage_0 = L_53;
			Il2CppCodeGenWriteBarrier((void**)(&L_52->___nftImage_0), (void*)L_53);
			// nftImage.externalUrl = metaplexData.data.offchainData.default_image;
			NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* L_54 = __this->___U3CnftImageU3E5__2_4;
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_55 = V_1;
			NullCheck(L_55);
			Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_56 = L_55->___metaplexData_0;
			NullCheck(L_56);
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_57 = L_56->___data_1;
			NullCheck(L_57);
			MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* L_58 = L_57->___offchainData_4;
			NullCheck(L_58);
			String_t* L_59;
			L_59 = MetaplexTokenStandard_get_default_image_m54B60D3D52B9B0DA969BECF63DFB63499FA916ED_inline(L_58, NULL);
			NullCheck(L_54);
			NftImage_set_externalUrl_m82EAF4A55FBB51F7A775758786A5410906B85AF7_inline(L_54, L_59, NULL);
		}

IL_017f_1:
		{
			// FileLoader.SaveToPersistentDataPath(Path.Combine(Application.persistentDataPath, $"{metaplexData.data.mint}.png"), compressedTexture);
			String_t* L_60;
			L_60 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
			Nft_t2BFB342353D6048B569ED6D974FD8873C4287D9E* L_61 = V_1;
			NullCheck(L_61);
			Metaplex_tD2818B8E47352D593B257148AA853006A4F7ED1A* L_62 = L_61->___metaplexData_0;
			NullCheck(L_62);
			MetadataAccount_t017FA063B7C70E9E1BE2258A35F1F5D8ABBF6E51* L_63 = L_62->___data_1;
			NullCheck(L_63);
			String_t* L_64 = L_63->___mint_2;
			String_t* L_65;
			L_65 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_64, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_66;
			L_66 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_60, L_65, NULL);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_67 = V_3;
			FileLoader_SaveToPersistentDataPath_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mB85A1EECDCFFC9DD8BD906A6DE24ED636334B8B8(L_66, L_67, FileLoader_SaveToPersistentDataPath_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mB85A1EECDCFFC9DD8BD906A6DE24ED636334B8B8_RuntimeMethod_var);
			goto IL_01cb;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ab;
		}
		throw e;
	}

CATCH_01ab:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CnftImageU3E5__2_4 = (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnftImageU3E5__2_4), (void*)(NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_68 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_69 = V_5;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_68, L_69, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e5;
	}// end catch (depth: 1)

IL_01cb:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CnftImageU3E5__2_4 = (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnftImageU3E5__2_4), (void*)(NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_70 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_70, NULL);
	}

IL_01e5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadTextureU3Ed__5_MoveNext_mC655A2A6DAE3DDA587484EAA064FA24C4E715217_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637*>(__this + _offset);
	U3CLoadTextureU3Ed__5_MoveNext_mC655A2A6DAE3DDA587484EAA064FA24C4E715217(_thisAdjusted, method);
}
// System.Void Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureU3Ed__5_SetStateMachine_m416574BBE0B82DCB9C76C15F9D7A47FEAA340017 (U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadTextureU3Ed__5_SetStateMachine_m416574BBE0B82DCB9C76C15F9D7A47FEAA340017_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadTextureU3Ed__5_t714A4B8C338A88FF5EE213C7C0F04BE6B4C04637*>(__this + _offset);
	U3CLoadTextureU3Ed__5_SetStateMachine_m416574BBE0B82DCB9C76C15F9D7A47FEAA340017(_thisAdjusted, ___stateMachine0, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// public Token CurrentToken { get; private set; }
		int32_t L_0 = __this->___U3CCurrentTokenU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 GifStream_get_Header_m7276A6A6F32364A1B54AFB6EBA1E54FDCB62D19B_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// public GifHeader Header => header;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_0 = __this->___header_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaplexTokenStandard_get_default_image_m54B60D3D52B9B0DA969BECF63DFB63499FA916ED_inline (MetaplexTokenStandard_tBF036F9C7CD39436BC9C6E0D6C0DEAA30295F2E5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3Cdefault_imageU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NftImage_set_externalUrl_m82EAF4A55FBB51F7A775758786A5410906B85AF7_inline (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string externalUrl { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CexternalUrlU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexternalUrlU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NftImage_set_file_mA0E407437B4D29D0B68645934C4613FEF61B7B23_inline (NftImage_tE2FB056991499DA7A3E96086D29DA07753744E20* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) 
{
	{
		// public Texture2D file { get; set; }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___value0;
		__this->___U3CfileU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CfileU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___item0;
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
