#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* PhantomWebGL_OnMessageSigned_mF0225CDC896BF4CC36AFB7CB95790977581F831D_RuntimeMethod_var;
extern const RuntimeMethod* PhantomWebGL_OnPhantomConnected_m59FBF77E81DEABD19973FF25004B7535ABA04AE2_RuntimeMethod_var;
extern const RuntimeMethod* PhantomWebGL_OnTransactionSigned_m165CABBA8446863ACBD0ECC56D915F06E78A90FF_RuntimeMethod_var;
extern const RuntimeMethod* SolanaWalletAdapterWebGL_OnAllTransactionsSigned_m68547D32562C807BDCFE6E4A2E63BF41A26C4DBB_RuntimeMethod_var;
extern const RuntimeMethod* SolanaWalletAdapterWebGL_OnMessageSigned_m3246741C9145ACEC7E8EBF1F9A534CF7FD6BBED8_RuntimeMethod_var;
extern const RuntimeMethod* SolanaWalletAdapterWebGL_OnTransactionSigned_m0E6658F8F7D1DEEDA59BF5C872E966D1A6D38F57_RuntimeMethod_var;
extern const RuntimeMethod* SolanaWalletAdapterWebGL_OnWalletConnected_m52F659CC00A73A916A6AE1F7149EDC74C206E3F8_RuntimeMethod_var;
extern const RuntimeMethod* SolanaWalletAdapterWebGL_OnWalletsInitialized_mAC15BBFC4E311A68D0ED2E36D2D4125CCF527A1D_RuntimeMethod_var;
extern const RuntimeMethod* SolanaWalletAdapterWebGL_OnWalletsLoaded_m45CA61922BE84B2F28BB77715AD43D5DBF0E3B02_RuntimeMethod_var;
extern const RuntimeMethod* WebGLInputMobile_OnFocusOut_m738467287A0F65FB47CBCD9E0A89DA7E9F47C47F_RuntimeMethod_var;
extern const RuntimeMethod* WebGLInputMobile_OnTouchEnd_mA93BC33B84197B228324BF845083BD9773C98FE7_RuntimeMethod_var;
extern const RuntimeMethod* WebGLInput_OnBlur_m056127CBA134428CD5D30B5D0D567BBAD4244400_RuntimeMethod_var;
extern const RuntimeMethod* WebGLInput_OnEditEnd_mD1ADCC675C43BF48128C84734354BB25DCCB6EDB_RuntimeMethod_var;
extern const RuntimeMethod* WebGLInput_OnFocus_mEAFF02CB2715232B724DBF02517417F85CCF66B4_RuntimeMethod_var;
extern const RuntimeMethod* WebGLInput_OnTab_m9D1182F054C00912D28B631BA1F798B1BD3D2788_RuntimeMethod_var;
extern const RuntimeMethod* WebGLInput_OnValueChange_m8FC2093C4282D531764042FF66ADBB6526218B39_RuntimeMethod_var;
extern const RuntimeMethod* WebGLWindow_OnWindowBlur_m0CF09BA6693BCDA3D073A368AB81A46122449FF4_RuntimeMethod_var;
extern const RuntimeMethod* WebGLWindow_OnWindowFocus_m175353D303C2E8EB07A2679015D269E0F3623C3D_RuntimeMethod_var;
extern const RuntimeMethod* WebGLWindow_OnWindowResize_m386294E41E1A89D8BB052E42ED30972194B8356C_RuntimeMethod_var;



// 0x00000001 System.Byte[] EcdsaSignatures::EncodeP256PublicKey(Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters)
extern void EcdsaSignatures_EncodeP256PublicKey_m968BE495996F8D7C84468D0AA9B47179CB5EB9A1 (void);
// 0x00000002 System.Byte[] EcdsaSignatures::ConvertEcp256SignatureDeRtoP1363(System.Byte[],System.Int32)
extern void EcdsaSignatures_ConvertEcp256SignatureDeRtoP1363_mE13BF5BC7716C2F3CF7D181C681FC51794127383 (void);
// 0x00000003 System.Byte[] EcdsaSignatures::ConvertEcp256SignatureP1363ToDer(System.Byte[],System.Int32)
extern void EcdsaSignatures_ConvertEcp256SignatureP1363ToDer_mE1B0575DB32276146A5EA714216C7844CE01C4A0 (void);
// 0x00000004 System.Int32 EcdsaSignatures::PackP1363ComponentToDerInteger(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern void EcdsaSignatures_PackP1363ComponentToDerInteger_m489DAB74666CFF65F62275AFB002CA7B1D0DF4AD (void);
// 0x00000005 System.Int32 EcdsaSignatures::CalculateDerIntLengthOfP1363Component(System.Byte[],System.Int32)
extern void EcdsaSignatures_CalculateDerIntLengthOfP1363Component_m1E3344B730303D6158F4B00BF3E6AD2B93C8A832 (void);
// 0x00000006 System.Int32 EcdsaSignatures::UnpackDerIntegerToP1363Component(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern void EcdsaSignatures_UnpackDerIntegerToP1363Component_m9DBF6B0FB45727D68B5A12C7DC8AA0F83FE42035 (void);
// 0x00000007 Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters EcdsaSignatures::DecodeP256PublicKey(System.Byte[])
extern void EcdsaSignatures_DecodeP256PublicKey_m903426580BB8C48B232F02F075803C489D5F5376 (void);
// 0x00000008 System.Threading.Tasks.Task`1<AuthorizationResult> IAdapterOperations::Authorize(System.Uri,System.Uri,System.String,System.String)
// 0x00000009 System.Threading.Tasks.Task`1<AuthorizationResult> IAdapterOperations::Reauthorize(System.Uri,System.Uri,System.String,System.String)
// 0x0000000A System.Threading.Tasks.Task`1<SignedResult> IAdapterOperations::SignTransactions(System.Collections.Generic.IEnumerable`1<System.Byte[]>)
// 0x0000000B System.Threading.Tasks.Task`1<SignedResult> IAdapterOperations::SignMessages(System.Collections.Generic.IEnumerable`1<System.Byte[]>,System.Collections.Generic.IEnumerable`1<System.Byte[]>)
// 0x0000000C System.Void IMessageReceiver::Receive(System.String)
// 0x0000000D System.String AuthorizationResult::get_AuthToken()
extern void AuthorizationResult_get_AuthToken_mB4CFB1A5B4BE3B6885C4530FFD30B14FEBFE5A27 (void);
// 0x0000000E System.Void AuthorizationResult::set_AuthToken(System.String)
extern void AuthorizationResult_set_AuthToken_mEAE96F5B58F07BA5009B89010E5A9DF981A6528E (void);
// 0x0000000F System.Uri AuthorizationResult::get_WalletUriBase()
extern void AuthorizationResult_get_WalletUriBase_m8F77837E4E30A2166CAA8F4B3235A0650DBED64A (void);
// 0x00000010 System.Void AuthorizationResult::set_WalletUriBase(System.Uri)
extern void AuthorizationResult_set_WalletUriBase_m7D5BBB9ED42A33AEF48A50E7F170220DB8D190F4 (void);
// 0x00000011 System.Collections.Generic.List`1<AuthorizationResult/AuthorizationResultAccounts> AuthorizationResult::get_Accounts()
extern void AuthorizationResult_get_Accounts_m799470352073D5E4B10561FB95040E970F250DCE (void);
// 0x00000012 System.Void AuthorizationResult::set_Accounts(System.Collections.Generic.List`1<AuthorizationResult/AuthorizationResultAccounts>)
extern void AuthorizationResult_set_Accounts_m056AB4C941F0D937A5EEEF1D5D1B59278EA4B282 (void);
// 0x00000013 System.Byte[] AuthorizationResult::get_PublicKey()
extern void AuthorizationResult_get_PublicKey_m7CBAE3E9DB8F6FC2D41C1D5BA6230C4C76BE3600 (void);
// 0x00000014 System.String AuthorizationResult::get_AccountLabel()
extern void AuthorizationResult_get_AccountLabel_m1010976A374FDDED4AC8E9208CE27D0AD04737D0 (void);
// 0x00000015 System.Void AuthorizationResult::.ctor()
extern void AuthorizationResult__ctor_m6E45B3BF6ABA7B704025139BE2676B578D8BD1AC (void);
// 0x00000016 System.String AuthorizationResult/AuthorizationResultAccounts::get_Address()
extern void AuthorizationResultAccounts_get_Address_m178759C623D5A3EEFBEDDC53E449B5395FE0ECD3 (void);
// 0x00000017 System.Void AuthorizationResult/AuthorizationResultAccounts::set_Address(System.String)
extern void AuthorizationResultAccounts_set_Address_mE52C246A4F04CB3533D2186D26658A33EE144E49 (void);
// 0x00000018 System.String AuthorizationResult/AuthorizationResultAccounts::get_Label()
extern void AuthorizationResultAccounts_get_Label_mC4718B4C0833FF169C2857EA60FBF1B645169C41 (void);
// 0x00000019 System.Void AuthorizationResult/AuthorizationResultAccounts::set_Label(System.String)
extern void AuthorizationResultAccounts_set_Label_m036D44156181C63915677AA0F51C63BE01A03EDB (void);
// 0x0000001A System.Void AuthorizationResult/AuthorizationResultAccounts::.ctor()
extern void AuthorizationResultAccounts__ctor_m2C2A80E63C996CA99AE6B09B2E01C9993D1B55EB (void);
// 0x0000001B System.Collections.Generic.List`1<System.String> SignedResult::get_SignedPayloads()
extern void SignedResult_get_SignedPayloads_mD42754EF65D2AC5CF7CAC460EFDC24B1D5E6D263 (void);
// 0x0000001C System.Void SignedResult::set_SignedPayloads(System.Collections.Generic.List`1<System.String>)
extern void SignedResult_set_SignedPayloads_mE41A30BF357AD1B9F3A91032A22FE95E090E231C (void);
// 0x0000001D System.Collections.Generic.List`1<System.Byte[]> SignedResult::get_SignedPayloadsBytes()
extern void SignedResult_get_SignedPayloadsBytes_mF420D4F26EBFFFA7683B98287EB64205845D54F2 (void);
// 0x0000001E System.Void SignedResult::.ctor()
extern void SignedResult__ctor_m0321130B7F8E8058F972FABD0B1FA552CD57130D (void);
// 0x0000001F UnityEngine.AndroidJavaObject LocalAssociationIntentCreator::CreateAssociationIntent(System.String,System.Int32)
extern void LocalAssociationIntentCreator_CreateAssociationIntent_mE9AAC14862F9FEE1C703350A5D5C080D2994BC9E (void);
// 0x00000020 System.Void LocalAssociationScenario::.ctor(System.Int32)
extern void LocalAssociationScenario__ctor_m05E1F652B35E3C0B78FE70547F6EC66C46BBC83B (void);
// 0x00000021 System.Threading.Tasks.Task`1<Solana.Unity.SDK.Response`1<System.Object>> LocalAssociationScenario::StartAndExecute(System.Collections.Generic.List`1<System.Action`1<IAdapterOperations>>)
extern void LocalAssociationScenario_StartAndExecute_m1B46392E69EE55217829ED06F9D1BFE276BE1E37 (void);
// 0x00000022 System.Void LocalAssociationScenario::TryConnectWs()
extern void LocalAssociationScenario_TryConnectWs_mBDF2E6A01513A78DD5C35B9AF99C597B631AAA00 (void);
// 0x00000023 System.Void LocalAssociationScenario::ListenKeyExchange()
extern void LocalAssociationScenario_ListenKeyExchange_mE6DAEDDA9F9B548B5278A7C512EA292FD5222A26 (void);
// 0x00000024 System.Void LocalAssociationScenario::HandleEncryptedSessionPayload(System.Byte[])
extern void LocalAssociationScenario_HandleEncryptedSessionPayload_m726BF6C04187243EA584A4F6F21572E94CF10462 (void);
// 0x00000025 System.Void LocalAssociationScenario::ReceivePublicKeyHandler(System.Byte[])
extern void LocalAssociationScenario_ReceivePublicKeyHandler_m9DBAB645F4F940B216EADFDF473D50458AB6C0D9 (void);
// 0x00000026 System.Void LocalAssociationScenario::ExecuteNextAction(Solana.Unity.SDK.Response`1<System.Object>)
extern void LocalAssociationScenario_ExecuteNextAction_m99F1C6808FAEC7E108C196AA6D6D8B9BAC03EE65 (void);
// 0x00000027 System.Void LocalAssociationScenario::CloseAssociation(Solana.Unity.SDK.Response`1<System.Object>)
extern void LocalAssociationScenario_CloseAssociation_m5F3813465FEAE0A94A848B46B684F486D34FE5B0 (void);
// 0x00000028 System.Void LocalAssociationScenario::<.ctor>b__11_0()
extern void LocalAssociationScenario_U3C_ctorU3Eb__11_0_m0EADB1B52B95C479CBC9373DD45733840E854A4E (void);
// 0x00000029 System.Void LocalAssociationScenario::<.ctor>b__11_1(NativeWebSocket.WebSocketCloseCode)
extern void LocalAssociationScenario_U3C_ctorU3Eb__11_1_m57A647D953D42686F70F78A5DB0DD00EFBC8C77E (void);
// 0x0000002A System.Void LocalAssociationScenario/<>c::.cctor()
extern void U3CU3Ec__cctor_m915E770BF2D3CA0F2FBDB4E551BAB71C381EDFA5 (void);
// 0x0000002B System.Void LocalAssociationScenario/<>c::.ctor()
extern void U3CU3Ec__ctor_m880A7AACFCA67E86ACC56D1925C4061AF84960E0 (void);
// 0x0000002C System.Void LocalAssociationScenario/<>c::<.ctor>b__11_2(System.String)
extern void U3CU3Ec_U3C_ctorU3Eb__11_2_m5D649E1BB978637E615BE15CCCF5E77F38657F26 (void);
// 0x0000002D System.Void LocalAssociationScenario/<TryConnectWs>d__13::MoveNext()
extern void U3CTryConnectWsU3Ed__13_MoveNext_mA107365B83365E5361B587986F458E3F6938B080 (void);
// 0x0000002E System.Void LocalAssociationScenario/<TryConnectWs>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CTryConnectWsU3Ed__13_SetStateMachine_m5E620676114EBEE7BF929B74CC5B9F3962AA9993 (void);
// 0x0000002F System.Void LocalAssociationScenario/<ListenKeyExchange>d__14::MoveNext()
extern void U3CListenKeyExchangeU3Ed__14_MoveNext_mB99A2738F50EDFA2B2397168E093C8A6CC771D30 (void);
// 0x00000030 System.Void LocalAssociationScenario/<ListenKeyExchange>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CListenKeyExchangeU3Ed__14_SetStateMachine_mC0890E8C7889BBBD47F1AD8EAC75069B6205866D (void);
// 0x00000031 System.Void LocalAssociationScenario/<CloseAssociation>d__18::MoveNext()
extern void U3CCloseAssociationU3Ed__18_MoveNext_m0B3B0146057ACA239A26257CC868F839AFC4850F (void);
// 0x00000032 System.Void LocalAssociationScenario/<CloseAssociation>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCloseAssociationU3Ed__18_SetStateMachine_m3EE333368D5F3571FCB7524B6AA0FFBC5045F20F (void);
// 0x00000033 System.Void MobileWalletAdapterClient::.ctor(Solana.Unity.SDK.IMessageSender)
extern void MobileWalletAdapterClient__ctor_m33CE4B6EFA2293E635CF6F031FFBA479EFB2DE7B (void);
// 0x00000034 System.Threading.Tasks.Task`1<AuthorizationResult> MobileWalletAdapterClient::Authorize(System.Uri,System.Uri,System.String,System.String)
extern void MobileWalletAdapterClient_Authorize_m7521B3B7610C978D3E76DFB67463970E932C824D (void);
// 0x00000035 System.Threading.Tasks.Task`1<AuthorizationResult> MobileWalletAdapterClient::Reauthorize(System.Uri,System.Uri,System.String,System.String)
extern void MobileWalletAdapterClient_Reauthorize_m9A026059A029A6B4C58369AB31681EC2601DF9BA (void);
// 0x00000036 System.Threading.Tasks.Task`1<SignedResult> MobileWalletAdapterClient::SignTransactions(System.Collections.Generic.IEnumerable`1<System.Byte[]>)
extern void MobileWalletAdapterClient_SignTransactions_m4410B4B53BC304BF77FCD0F99A9E3DC679DFAB90 (void);
// 0x00000037 System.Threading.Tasks.Task`1<SignedResult> MobileWalletAdapterClient::SignMessages(System.Collections.Generic.IEnumerable`1<System.Byte[]>,System.Collections.Generic.IEnumerable`1<System.Byte[]>)
extern void MobileWalletAdapterClient_SignMessages_mF74FD9444888CFF8B59DB40450E24ABA0384B5B8 (void);
// 0x00000038 Solana.Unity.SDK.JsonRequest MobileWalletAdapterClient::PrepareAuthRequest(System.Uri,System.Uri,System.String,System.String,System.String)
extern void MobileWalletAdapterClient_PrepareAuthRequest_mBC03624D7505FE98E73F96CE5A7BA6EF86C2C458 (void);
// 0x00000039 Solana.Unity.SDK.JsonRequest MobileWalletAdapterClient::PrepareSignTransactionsRequest(System.Collections.Generic.IEnumerable`1<System.Byte[]>)
extern void MobileWalletAdapterClient_PrepareSignTransactionsRequest_m652F6D65348FC1E51DBFF14786D26A9D69329A16 (void);
// 0x0000003A Solana.Unity.SDK.JsonRequest MobileWalletAdapterClient::PrepareSignMessagesRequest(System.Collections.Generic.IEnumerable`1<System.Byte[]>,System.Collections.Generic.IEnumerable`1<System.Byte[]>)
extern void MobileWalletAdapterClient_PrepareSignMessagesRequest_m9CBF5639912AD996FB59C6C2880363C531CA5AD7 (void);
// 0x0000003B System.Int32 MobileWalletAdapterClient::NextMessageId()
extern void MobileWalletAdapterClient_NextMessageId_m38AB377AEF7A6AAADA277850ECBFB14A2AD6AB8E (void);
// 0x0000003C Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters MobileWalletAdapterSession::get_PublicKey()
extern void MobileWalletAdapterSession_get_PublicKey_m08BC2CD6ED63C2EDA963DE888C98212D525DC527 (void);
// 0x0000003D Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters MobileWalletAdapterSession::get_PrivateKey()
extern void MobileWalletAdapterSession_get_PrivateKey_mCC7174D6228CFE6086A0D704EA7271FB96425359 (void);
// 0x0000003E System.Byte[] MobileWalletAdapterSession::get_PublicKeyBytes()
extern void MobileWalletAdapterSession_get_PublicKeyBytes_m5171E56B4D8B386A4F3D9C7186C0D32DFD66169F (void);
// 0x0000003F System.Byte[] MobileWalletAdapterSession::get_PrivateKeyBytes()
extern void MobileWalletAdapterSession_get_PrivateKeyBytes_m8457E3E864D0397CBABD5A974566FE22AB8001D7 (void);
// 0x00000040 System.String MobileWalletAdapterSession::get_AssociationToken()
extern void MobileWalletAdapterSession_get_AssociationToken_m23925C9A69D344DF470AA6CFD84016C8E44AD58D (void);
// 0x00000041 System.Void MobileWalletAdapterSession::.ctor()
extern void MobileWalletAdapterSession__ctor_m123BA82182023E8F446013A5A0D8EF5942FB0498 (void);
// 0x00000042 System.Byte[] MobileWalletAdapterSession::CreateHelloReq()
extern void MobileWalletAdapterSession_CreateHelloReq_mF66548C068553A70B9877B8984B6769714C044B1 (void);
// 0x00000043 System.Byte[] MobileWalletAdapterSession::BuildHelloReq(Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair,Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters)
extern void MobileWalletAdapterSession_BuildHelloReq_mB60E38DC34C8A857269209FE59AE84BAB65F21D7 (void);
// 0x00000044 Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters MobileWalletAdapterSession::ParseHelloRsp(System.Byte[])
extern void MobileWalletAdapterSession_ParseHelloRsp_mBF77B1710BDE7AB2AAE07A085FAA9ED2799C2BB5 (void);
// 0x00000045 System.Byte[] MobileWalletAdapterSession::EncryptSessionPayload(System.Byte[])
extern void MobileWalletAdapterSession_EncryptSessionPayload_m3FC3B386640AB9FA2D45E1BBEE1EB8B020D3D4D2 (void);
// 0x00000046 System.Byte[] MobileWalletAdapterSession::DecryptSessionPayload(System.Byte[])
extern void MobileWalletAdapterSession_DecryptSessionPayload_m52A684E12836F0F4FA8C043DD891ED1A56E598F2 (void);
// 0x00000047 Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters MobileWalletAdapterSession::GenerateSessionEcdhSecret(System.Byte[])
extern void MobileWalletAdapterSession_GenerateSessionEcdhSecret_mDCA109E1253F296ECEA8FA8CA5BAF3183D55A8D4 (void);
// 0x00000048 Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters MobileWalletAdapterSession::GenerateSessionEcdhSecret(Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters)
extern void MobileWalletAdapterSession_GenerateSessionEcdhSecret_mC776D961D4B146E9E26CCD339729C7CAED942F3B (void);
// 0x00000049 System.Byte[] MobileWalletAdapterSession::CreateEncryptionKey(System.Byte[],Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters)
extern void MobileWalletAdapterSession_CreateEncryptionKey_m857A619AAE2FBAA9FCBFACC2F53B0A53202388E7 (void);
// 0x0000004A System.Byte[] MobileWalletAdapterSession::HkdfSHA256L16(System.Byte[],System.Byte[])
extern void MobileWalletAdapterSession_HkdfSHA256L16_mF6FE4C7B905E3905A2D478DF10D879446479E397 (void);
// 0x0000004B System.String MobileWalletAdapterSession::Base64UrlEncode(System.Byte[])
extern void MobileWalletAdapterSession_Base64UrlEncode_mD11BE715F1ACF69B80AE90DF18ACDCB49CF1FE98 (void);
// 0x0000004C System.Void MobileWalletAdapterWebSocket::.ctor(NativeWebSocket.IWebSocket,MobileWalletAdapterSession)
extern void MobileWalletAdapterWebSocket__ctor_mC7A34EA35F85FA8A75837B4B40062CEADD782AD8 (void);
// 0x0000004D System.Void MobileWalletAdapterWebSocket::Send(System.Byte[])
extern void MobileWalletAdapterWebSocket_Send_mE426E9A045E68EDF463DF01AB1B2FAF48E1F5BD4 (void);
// 0x0000004E System.Void MainThreadDispatcher::Update()
extern void MainThreadDispatcher_Update_mD58FDB030D23FCF859B726D2D5246D44FACF6395 (void);
// 0x0000004F System.Void MainThreadDispatcher::Enqueue(System.Collections.IEnumerator)
extern void MainThreadDispatcher_Enqueue_m35202CA7C36AE525EF6EBBF83694EF6673A9036C (void);
// 0x00000050 System.Void MainThreadDispatcher::Enqueue(System.Action)
extern void MainThreadDispatcher_Enqueue_m7B29D0D87905BF6630D6B91F63C94ADF13F1039F (void);
// 0x00000051 System.Threading.Tasks.Task MainThreadDispatcher::EnqueueAsync(System.Action)
extern void MainThreadDispatcher_EnqueueAsync_m08BDEFFC439BB9E6FBECEDCB9DF7E9330A32BAE7 (void);
// 0x00000052 System.Collections.IEnumerator MainThreadDispatcher::ActionWrapper(System.Action)
extern void MainThreadDispatcher_ActionWrapper_m14133E689BEB4A6AC6D08F0538B75937352A83ED (void);
// 0x00000053 System.Boolean MainThreadDispatcher::Exists()
extern void MainThreadDispatcher_Exists_m72C45A44E96140C6D39415125CCE1259991A94A8 (void);
// 0x00000054 MainThreadDispatcher MainThreadDispatcher::Instance()
extern void MainThreadDispatcher_Instance_m33FF4FBD4D7052C1C3514101DE016625C0C709F4 (void);
// 0x00000055 System.Void MainThreadDispatcher::Awake()
extern void MainThreadDispatcher_Awake_m9330F67163388B02608A0B0514A2DD36714AB894 (void);
// 0x00000056 System.Void MainThreadDispatcher::OnDestroy()
extern void MainThreadDispatcher_OnDestroy_mEF4FC9A8094EF563D5AC885E65DA699BE08E1588 (void);
// 0x00000057 System.Void MainThreadDispatcher::.ctor()
extern void MainThreadDispatcher__ctor_m053EA76EF385EF43B62F92BC7353C05323E444DD (void);
// 0x00000058 System.Void MainThreadDispatcher::.cctor()
extern void MainThreadDispatcher__cctor_m8AA445B85E11968ACBF17060D72ECCA40B13C133 (void);
// 0x00000059 System.Void MainThreadDispatcher/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m2A9AEBC58E4D860C494CD96EEFFFB725C62EDCE6 (void);
// 0x0000005A System.Void MainThreadDispatcher/<>c__DisplayClass2_0::<Enqueue>b__0()
extern void U3CU3Ec__DisplayClass2_0_U3CEnqueueU3Eb__0_m5637B733C2F62C83E6D621EC92F1CAC1A2697852 (void);
// 0x0000005B System.Void MainThreadDispatcher/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m64F8A6ED911BB75783819F9DA511BAC7B748F5AD (void);
// 0x0000005C System.Void MainThreadDispatcher/<>c__DisplayClass4_0::<EnqueueAsync>g__WrappedAction|0()
extern void U3CU3Ec__DisplayClass4_0_U3CEnqueueAsyncU3Eg__WrappedActionU7C0_m9D0CD74118BF8686948A3E0BB0A0E6FE85C07B33 (void);
// 0x0000005D System.Void MainThreadDispatcher/<ActionWrapper>d__5::.ctor(System.Int32)
extern void U3CActionWrapperU3Ed__5__ctor_mE99CFD920686FB710D3464FF310F800959FA7674 (void);
// 0x0000005E System.Void MainThreadDispatcher/<ActionWrapper>d__5::System.IDisposable.Dispose()
extern void U3CActionWrapperU3Ed__5_System_IDisposable_Dispose_mDCE7D320C700A7FB69AEA5E3A456740772731001 (void);
// 0x0000005F System.Boolean MainThreadDispatcher/<ActionWrapper>d__5::MoveNext()
extern void U3CActionWrapperU3Ed__5_MoveNext_mCD9EBF5DDCFF5426201F6C704AB743EB48DAC2FB (void);
// 0x00000060 System.Object MainThreadDispatcher/<ActionWrapper>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CActionWrapperU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA5D03630E807CDDADA6DE07821BC43A8F52CB6A9 (void);
// 0x00000061 System.Void MainThreadDispatcher/<ActionWrapper>d__5::System.Collections.IEnumerator.Reset()
extern void U3CActionWrapperU3Ed__5_System_Collections_IEnumerator_Reset_mE42D4D94CFBEAB62205DB2B44C0C9423D97DDC8B (void);
// 0x00000062 System.Object MainThreadDispatcher/<ActionWrapper>d__5::System.Collections.IEnumerator.get_Current()
extern void U3CActionWrapperU3Ed__5_System_Collections_IEnumerator_get_Current_m790626C3FC1F17C7B576BB1C2F7FE1F276F9E656 (void);
// 0x00000063 System.Void HidingAttribute::.ctor()
extern void HidingAttribute__ctor_m28320FEC95FE508E8FCDEB7C5F735798E738D8B2 (void);
// 0x00000064 System.Void HideIfAttribute::.ctor(System.String,System.Boolean,System.Int32)
extern void HideIfAttribute__ctor_m4785F3FBD0D8FF1B36B839B431F20FEA2F0DDDAA (void);
// 0x00000065 System.Void HideIfNullAttribute::.ctor(System.String,System.Int32)
extern void HideIfNullAttribute__ctor_m1138F644C747E7B11856B4111F46775C7A046863 (void);
// 0x00000066 System.Void HideIfNotNullAttribute::.ctor(System.String,System.Int32)
extern void HideIfNotNullAttribute__ctor_mF2B667969ADED48D394BD2E87FD2ABE8E3EA6D50 (void);
// 0x00000067 System.Void HideIfEnumValueAttribute::.ctor(System.String,HideIf,System.Int32[])
extern void HideIfEnumValueAttribute__ctor_m5344A500A4523F11798F7AF9C39A78265B8155B3 (void);
// 0x00000068 System.Void HideIfExampleScript::.ctor()
extern void HideIfExampleScript__ctor_m46E626CA9F1C91E359760B11E28308EA4729E4CC (void);
// 0x00000069 System.Void TestDataParent::.ctor()
extern void TestDataParent__ctor_m34AB7D5855E5F41DDB3F5B873A1A75845203CBBF (void);
// 0x0000006A System.Void TestData::.ctor()
extern void TestData__ctor_m3B872A1BA8D04B69E5FCFF02A1326D3BF3DD2C5B (void);
// 0x0000006B System.String LogoutApiRequest::get_key()
extern void LogoutApiRequest_get_key_m6F2B3DA1E472F9621E19497BCB0CA2A8B75269AD (void);
// 0x0000006C System.Void LogoutApiRequest::set_key(System.String)
extern void LogoutApiRequest_set_key_m1F8A006FF973C30317ECEF4860CC237B58BDA720 (void);
// 0x0000006D System.String LogoutApiRequest::get_data()
extern void LogoutApiRequest_get_data_mFAD2BAF6EE18AD00D4D7D195B5903B504C0A6291 (void);
// 0x0000006E System.Void LogoutApiRequest::set_data(System.String)
extern void LogoutApiRequest_set_data_m643D4C872EAF4EC9F229D052B322794C4A88A3CD (void);
// 0x0000006F System.String LogoutApiRequest::get_signature()
extern void LogoutApiRequest_get_signature_m8C4D0D1DB71E96F280DC1C901AC6E0E2CD07BB3F (void);
// 0x00000070 System.Void LogoutApiRequest::set_signature(System.String)
extern void LogoutApiRequest_set_signature_m587D6441A6F579A238152F808AE42995C9E6AEB0 (void);
// 0x00000071 System.Int64 LogoutApiRequest::get_timeout()
extern void LogoutApiRequest_get_timeout_mC9C5FEE0C8557668B0D673D67FCA0FA01AAAD6F6 (void);
// 0x00000072 System.Void LogoutApiRequest::set_timeout(System.Int64)
extern void LogoutApiRequest_set_timeout_m43AC44F6DBA87A5CD3DC22A7BDDD68E2C9D14F94 (void);
// 0x00000073 System.Void LogoutApiRequest::.ctor()
extern void LogoutApiRequest__ctor_m82B1986CE277BDC5D4D25D2132D645DD59326CCF (void);
// 0x00000074 System.String StoreApiResponse::get_message()
extern void StoreApiResponse_get_message_mFA85BFB10F72E16816EDC965AB39E6318B4EE018 (void);
// 0x00000075 System.Void StoreApiResponse::set_message(System.String)
extern void StoreApiResponse_set_message_m1E0A7C99D1844ED1FC43FC89E9AFE63F690C6447 (void);
// 0x00000076 System.Boolean StoreApiResponse::get_success()
extern void StoreApiResponse_get_success_mA5F567AF81C2BCF9A160D55678232A46553E76A3 (void);
// 0x00000077 System.Void StoreApiResponse::set_success(System.Boolean)
extern void StoreApiResponse_set_success_mF98D069C8D534081C2D5E77B68E6E92627A05D2C (void);
// 0x00000078 System.Void StoreApiResponse::.ctor()
extern void StoreApiResponse__ctor_m25E40A36BB4C58A519733F45FF2BC59C24B76D4F (void);
// 0x00000079 Web3AuthApi Web3AuthApi::getInstance()
extern void Web3AuthApi_getInstance_m51F2AF071F92616A5494F297A9F6E3E0268A9787 (void);
// 0x0000007A System.Collections.IEnumerator Web3AuthApi::authorizeSession(System.String,System.Action`1<StoreApiResponse>)
extern void Web3AuthApi_authorizeSession_mAA83CE67CE6B484D9FBCE0B283B49045BDF7DC31 (void);
// 0x0000007B System.Collections.IEnumerator Web3AuthApi::logout(LogoutApiRequest,System.Action`1<Newtonsoft.Json.Linq.JObject>)
extern void Web3AuthApi_logout_mDC3BE13A43FB0AAED8C07667DEE4F0D23645E4D8 (void);
// 0x0000007C System.Void Web3AuthApi::.ctor()
extern void Web3AuthApi__ctor_mC2CBECBF4AFD254DAE756CEFC65AC2A05AC13E3A (void);
// 0x0000007D System.Void Web3AuthApi::.cctor()
extern void Web3AuthApi__cctor_m8C1A528BD6406981D4E1DB4FDFD4907B24CAD697 (void);
// 0x0000007E System.Void Web3AuthApi/<authorizeSession>d__3::.ctor(System.Int32)
extern void U3CauthorizeSessionU3Ed__3__ctor_m9D3473F020014A994095B50599C826F30B2DB528 (void);
// 0x0000007F System.Void Web3AuthApi/<authorizeSession>d__3::System.IDisposable.Dispose()
extern void U3CauthorizeSessionU3Ed__3_System_IDisposable_Dispose_m60734F18627E8F53503EF3694B6279901A5D35DC (void);
// 0x00000080 System.Boolean Web3AuthApi/<authorizeSession>d__3::MoveNext()
extern void U3CauthorizeSessionU3Ed__3_MoveNext_m37BA245683745016DC8DBEF41D08B81230259A75 (void);
// 0x00000081 System.Object Web3AuthApi/<authorizeSession>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CauthorizeSessionU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9375A5655E2386251A55AC702EA13A6E3AAA183E (void);
// 0x00000082 System.Void Web3AuthApi/<authorizeSession>d__3::System.Collections.IEnumerator.Reset()
extern void U3CauthorizeSessionU3Ed__3_System_Collections_IEnumerator_Reset_m502E133420FCBE936D4BE259E62C8BA7AEC5FECC (void);
// 0x00000083 System.Object Web3AuthApi/<authorizeSession>d__3::System.Collections.IEnumerator.get_Current()
extern void U3CauthorizeSessionU3Ed__3_System_Collections_IEnumerator_get_Current_m80DC82DD57CB4ECAED97C985E3770D878D009D7D (void);
// 0x00000084 System.Void Web3AuthApi/<logout>d__4::.ctor(System.Int32)
extern void U3ClogoutU3Ed__4__ctor_m339B159A9EB5756901EC0A8ADC3DA4BB5E3C4846 (void);
// 0x00000085 System.Void Web3AuthApi/<logout>d__4::System.IDisposable.Dispose()
extern void U3ClogoutU3Ed__4_System_IDisposable_Dispose_m2109F876A34D4986040EBE43D36F130F5C3D7718 (void);
// 0x00000086 System.Boolean Web3AuthApi/<logout>d__4::MoveNext()
extern void U3ClogoutU3Ed__4_MoveNext_m696B3E6440D57272A67499485530E1EAF0167278 (void);
// 0x00000087 System.Object Web3AuthApi/<logout>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3ClogoutU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m48B2AD3C6729ECEB34F906EB552A90C67A814ECD (void);
// 0x00000088 System.Void Web3AuthApi/<logout>d__4::System.Collections.IEnumerator.Reset()
extern void U3ClogoutU3Ed__4_System_Collections_IEnumerator_Reset_m2DC1A62DD0D0ED0C0E473BD549D5D446E77AFC93 (void);
// 0x00000089 System.Object Web3AuthApi/<logout>d__4::System.Collections.IEnumerator.get_Current()
extern void U3ClogoutU3Ed__4_System_Collections_IEnumerator_get_Current_mAADF2C5685F8A96FCA5B6349F85D95E576C95C96 (void);
// 0x0000008A System.Int32 KeyStoreManagerUtils::web3auth_keystore_set(System.String,System.String)
extern void KeyStoreManagerUtils_web3auth_keystore_set_mD8D3E9BA35E30F3A2215F8C45948C5C35DA98749 (void);
// 0x0000008B System.String KeyStoreManagerUtils::web3auth_keystore_get(System.String)
extern void KeyStoreManagerUtils_web3auth_keystore_get_mDD1E5284ED273D20AE36691B5E8F70450C70DCA4 (void);
// 0x0000008C System.Int32 KeyStoreManagerUtils::web3auth_keystore_delete(System.String)
extern void KeyStoreManagerUtils_web3auth_keystore_delete_m7BAB20793F0D6905EF60B409C04231BF9DA0F6C0 (void);
// 0x0000008D System.String KeyStoreManagerUtils::getPubKey(System.String)
extern void KeyStoreManagerUtils_getPubKey_m0FA4A06B9E5F6C6E8EA7188EBBAF224F761C2811 (void);
// 0x0000008E System.Void KeyStoreManagerUtils::.cctor()
extern void KeyStoreManagerUtils__cctor_m687DF66A18ECAC9591C9E7D75D1F710689D420C7 (void);
// 0x0000008F System.Void KeyStoreManagerUtils::savePreferenceData(System.String,System.String)
extern void KeyStoreManagerUtils_savePreferenceData_m8A1E0EEFBD3A7671703B155705791D47E1782731 (void);
// 0x00000090 System.String KeyStoreManagerUtils::getPreferencesData(System.String)
extern void KeyStoreManagerUtils_getPreferencesData_m97CB9F28576CC6F91976E3C78B9A1D60DE59DAD7 (void);
// 0x00000091 System.Void KeyStoreManagerUtils::deletePreferencesData(System.String)
extern void KeyStoreManagerUtils_deletePreferencesData_mAF96F1BE6225B1BA502DC6ABFB57C2CC30467FCC (void);
// 0x00000092 System.String KeyStoreManagerUtils::getECDSASignature(System.String,System.String)
extern void KeyStoreManagerUtils_getECDSASignature_m5638F059501B756844F78F6CBEA555473E0F050C (void);
// 0x00000093 System.Void KeyStoreManagerUtils::.ctor()
extern void KeyStoreManagerUtils__ctor_m4F98AE5C7131002D37C95118FFE7DC7BA23407F4 (void);
// 0x00000094 System.Void AES256CBC::.ctor(System.String,System.String,System.String)
extern void AES256CBC__ctor_m3ACCFCDEF8D56644498070F4B6EB52D96326D825 (void);
// 0x00000095 System.String AES256CBC::encrypt(System.Byte[])
extern void AES256CBC_encrypt_m8A02C13CFC458F5AAF6723EC06B767952672550C (void);
// 0x00000096 System.String AES256CBC::decrypt(System.Byte[])
extern void AES256CBC_decrypt_mF6A6057DAF9B8B7308892B22F72A019E330A2AF5 (void);
// 0x00000097 Org.BouncyCastle.Math.BigInteger AES256CBC::ecdh(System.String,System.String)
extern void AES256CBC_ecdh_m7C5216E5B8C20291C80F4B6709B275EF1A52BCAD (void);
// 0x00000098 System.Byte[] AES256CBC::toByteArray(System.String)
extern void AES256CBC_toByteArray_mFD5A4A077C9290E68C6E3F3E8B399BB9D2F45002 (void);
// 0x00000099 System.Byte[] AES256CBC::toByteArray(Org.BouncyCastle.Math.BigInteger)
extern void AES256CBC_toByteArray_m7AD6F7A4CE1DF12DCF79A5BAE44D52C7B100C4B9 (void);
// 0x0000009A System.Void AES256CBC::.cctor()
extern void AES256CBC__cctor_m8DD5F014E7C29157330CD8170D40935866224E7B (void);
// 0x0000009B System.Collections.Generic.Dictionary`2<System.String,System.String> ExtraLoginOptions::get_additionalParams()
extern void ExtraLoginOptions_get_additionalParams_mBA6735F124FABDE520D48FFE5A88DA05562A55D9 (void);
// 0x0000009C System.Void ExtraLoginOptions::set_additionalParams(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void ExtraLoginOptions_set_additionalParams_m40707F1407A31B54E66BB889574C439F340727C3 (void);
// 0x0000009D System.String ExtraLoginOptions::get_domain()
extern void ExtraLoginOptions_get_domain_m6131E23579017FC1BCAF0A829BE547FEF5905669 (void);
// 0x0000009E System.Void ExtraLoginOptions::set_domain(System.String)
extern void ExtraLoginOptions_set_domain_m4EA19092B763831C5F53EE180761353274F011A6 (void);
// 0x0000009F System.String ExtraLoginOptions::get_client_id()
extern void ExtraLoginOptions_get_client_id_m09B2D6DCB75136D76C31869C315C475DDDE1E183 (void);
// 0x000000A0 System.Void ExtraLoginOptions::set_client_id(System.String)
extern void ExtraLoginOptions_set_client_id_mFBD2836D089412F7F21C2139CB6B6CCD77A2E1FA (void);
// 0x000000A1 System.String ExtraLoginOptions::get_leeway()
extern void ExtraLoginOptions_get_leeway_mD6A62EC89CCB71E0B64D6747CEBDF3DDB1C47278 (void);
// 0x000000A2 System.Void ExtraLoginOptions::set_leeway(System.String)
extern void ExtraLoginOptions_set_leeway_m331C6A22AAF3A1D480D818136A472B0876F9FE84 (void);
// 0x000000A3 System.String ExtraLoginOptions::get_verifierIdField()
extern void ExtraLoginOptions_get_verifierIdField_m5F28F8EF1D6B8E1E019221D8D0694A8A6111D474 (void);
// 0x000000A4 System.Void ExtraLoginOptions::set_verifierIdField(System.String)
extern void ExtraLoginOptions_set_verifierIdField_mE93DFFAA8521873A3CF0AE12F1B28CAC729B0867 (void);
// 0x000000A5 System.Boolean ExtraLoginOptions::get_isVerifierIdCaseSensitive()
extern void ExtraLoginOptions_get_isVerifierIdCaseSensitive_m4DD0B987E99B346C30132CEBE2A833530EC3E385 (void);
// 0x000000A6 System.Void ExtraLoginOptions::set_isVerifierIdCaseSensitive(System.Boolean)
extern void ExtraLoginOptions_set_isVerifierIdCaseSensitive_mBFCB4EB528AFFE29749BB6B808125C7243117F05 (void);
// 0x000000A7 Display ExtraLoginOptions::get_display()
extern void ExtraLoginOptions_get_display_m582C404AEF2F9AFE00D380A0DD0173B94E9719D3 (void);
// 0x000000A8 System.Void ExtraLoginOptions::set_display(Display)
extern void ExtraLoginOptions_set_display_m1DC37EA5632A3E78D6ECB67FE4129FFAD42091D9 (void);
// 0x000000A9 Prompt ExtraLoginOptions::get_prompt()
extern void ExtraLoginOptions_get_prompt_m439C4CDE16B587C3AE1D9B32176F7E8A140A2A56 (void);
// 0x000000AA System.Void ExtraLoginOptions::set_prompt(Prompt)
extern void ExtraLoginOptions_set_prompt_m9F1FCFD31E11025166B4F1750297AFB8200DBBC0 (void);
// 0x000000AB System.String ExtraLoginOptions::get_max_age()
extern void ExtraLoginOptions_get_max_age_m0B63452747C5B1448011E33568300E9D6A4D8BE2 (void);
// 0x000000AC System.Void ExtraLoginOptions::set_max_age(System.String)
extern void ExtraLoginOptions_set_max_age_mA3BE4F975E864F9B6EA3E50FBF2A4842C204211B (void);
// 0x000000AD System.String ExtraLoginOptions::get_ui_locales()
extern void ExtraLoginOptions_get_ui_locales_mC445FA1F42E58198360E080CCE232E98DEA26266 (void);
// 0x000000AE System.Void ExtraLoginOptions::set_ui_locales(System.String)
extern void ExtraLoginOptions_set_ui_locales_m7DD41856C1618214620E2707B64DBC33DCEEA8BE (void);
// 0x000000AF System.String ExtraLoginOptions::get_id_token_hint()
extern void ExtraLoginOptions_get_id_token_hint_m34302F29679DAC1704D2E8A2F032CB5EF8E125EC (void);
// 0x000000B0 System.Void ExtraLoginOptions::set_id_token_hint(System.String)
extern void ExtraLoginOptions_set_id_token_hint_m987F045150D57822607B83C82F9BA9C0090E1254 (void);
// 0x000000B1 System.String ExtraLoginOptions::get_login_hint()
extern void ExtraLoginOptions_get_login_hint_mA69CF4B76EFE35D81E0485F93026FA35E2A6631C (void);
// 0x000000B2 System.Void ExtraLoginOptions::set_login_hint(System.String)
extern void ExtraLoginOptions_set_login_hint_mC7AAE43A999C7DED43B43E0AC944543A312CF799 (void);
// 0x000000B3 System.String ExtraLoginOptions::get_acr_values()
extern void ExtraLoginOptions_get_acr_values_mE0A525FFE95FC79E280C2B005661D448D3F1B9E2 (void);
// 0x000000B4 System.Void ExtraLoginOptions::set_acr_values(System.String)
extern void ExtraLoginOptions_set_acr_values_m94199AC9D5855A3196E944F1DA9B8B5DA32DD74C (void);
// 0x000000B5 System.String ExtraLoginOptions::get_scope()
extern void ExtraLoginOptions_get_scope_m803DEA6C9E0D9C5A04B01E21927191541A2187C3 (void);
// 0x000000B6 System.Void ExtraLoginOptions::set_scope(System.String)
extern void ExtraLoginOptions_set_scope_m02A8E22DCD62FFB3789495DF18EB98D7A43FBB54 (void);
// 0x000000B7 System.String ExtraLoginOptions::get_audience()
extern void ExtraLoginOptions_get_audience_mBAA05244BBEA8E41B900A021C562D8DAAF58F1F3 (void);
// 0x000000B8 System.Void ExtraLoginOptions::set_audience(System.String)
extern void ExtraLoginOptions_set_audience_m946126A321397A91C7DAC587F1D10919AF4A4BB5 (void);
// 0x000000B9 System.String ExtraLoginOptions::get_connection()
extern void ExtraLoginOptions_get_connection_m61437417EFF66A69741F181FA587FB6C68636BDB (void);
// 0x000000BA System.Void ExtraLoginOptions::set_connection(System.String)
extern void ExtraLoginOptions_set_connection_mA97E28F72F7FF434C2CD956C7715AEC7AC3C3118 (void);
// 0x000000BB System.String ExtraLoginOptions::get_state()
extern void ExtraLoginOptions_get_state_m3FD3B48FC2C8EF9BA6F3CE01ED969710232DFEF1 (void);
// 0x000000BC System.Void ExtraLoginOptions::set_state(System.String)
extern void ExtraLoginOptions_set_state_m95C4C71B5FAF01D34E84988E3549982DF33DDD5C (void);
// 0x000000BD System.String ExtraLoginOptions::get_response_type()
extern void ExtraLoginOptions_get_response_type_m029938BFFF20D6CABD5C3CD8981A37F20DEE8692 (void);
// 0x000000BE System.Void ExtraLoginOptions::set_response_type(System.String)
extern void ExtraLoginOptions_set_response_type_mF7A854E23B908E6647DD211FF38632159FA9E733 (void);
// 0x000000BF System.String ExtraLoginOptions::get_nonce()
extern void ExtraLoginOptions_get_nonce_m942756852E378E8C3E99581E7E23D4A68EE75A2E (void);
// 0x000000C0 System.Void ExtraLoginOptions::set_nonce(System.String)
extern void ExtraLoginOptions_set_nonce_mC899BA92B3901F9753068B1647A6E1261748C2F1 (void);
// 0x000000C1 System.String ExtraLoginOptions::get_redirect_uri()
extern void ExtraLoginOptions_get_redirect_uri_m6840DFD4F78B8C70AE96462109A2923D1895D941 (void);
// 0x000000C2 System.Void ExtraLoginOptions::set_redirect_uri(System.String)
extern void ExtraLoginOptions_set_redirect_uri_m94D089A4ACC07C27048FB33468E1E1D763961562 (void);
// 0x000000C3 System.Void ExtraLoginOptions::.ctor()
extern void ExtraLoginOptions__ctor_m8C2AF94C304DDFC3CC52C78838AF364A2BA9A25A (void);
// 0x000000C4 System.String LoginConfigItem::get_verifier()
extern void LoginConfigItem_get_verifier_mA794C86057C0355A9859E507747564446F69A488 (void);
// 0x000000C5 System.Void LoginConfigItem::set_verifier(System.String)
extern void LoginConfigItem_set_verifier_m962018C987C1D76CFE29CCF2774475A978C6144C (void);
// 0x000000C6 TypeOfLogin LoginConfigItem::get_typeOfLogin()
extern void LoginConfigItem_get_typeOfLogin_m24D2AAE229F138C6C129B41DBE98696C0AA4453D (void);
// 0x000000C7 System.Void LoginConfigItem::set_typeOfLogin(TypeOfLogin)
extern void LoginConfigItem_set_typeOfLogin_m294DAA27ADD1A8DE5A0230D6652B06B21339864E (void);
// 0x000000C8 System.String LoginConfigItem::get_name()
extern void LoginConfigItem_get_name_m9C0031B2B52386FD531CC601D79BC127A3A6E656 (void);
// 0x000000C9 System.Void LoginConfigItem::set_name(System.String)
extern void LoginConfigItem_set_name_m863399B80BA2DCAA0D67999BF85CBE96E12DF4AD (void);
// 0x000000CA System.String LoginConfigItem::get_description()
extern void LoginConfigItem_get_description_mA8C7D479D75C74126D2393544939C79CAA0FAC31 (void);
// 0x000000CB System.Void LoginConfigItem::set_description(System.String)
extern void LoginConfigItem_set_description_m9002AF95F927BCC0A9AA342FE6570B548231CA6D (void);
// 0x000000CC System.String LoginConfigItem::get_clientId()
extern void LoginConfigItem_get_clientId_m8C98B27FA158D96A6F28A0A768C5F1E9B907B525 (void);
// 0x000000CD System.Void LoginConfigItem::set_clientId(System.String)
extern void LoginConfigItem_set_clientId_m333385074CC16D3C5A0DC396CAFB948FA58EE510 (void);
// 0x000000CE System.String LoginConfigItem::get_verifierSubIdentifier()
extern void LoginConfigItem_get_verifierSubIdentifier_m4D6C665D363ABB39D0DEEF531290B7215AA61994 (void);
// 0x000000CF System.Void LoginConfigItem::set_verifierSubIdentifier(System.String)
extern void LoginConfigItem_set_verifierSubIdentifier_mE6A515002BBA0CD192CAA4A4B2016521EBF60FD8 (void);
// 0x000000D0 System.String LoginConfigItem::get_logoHover()
extern void LoginConfigItem_get_logoHover_m438DD16DAA6C2C2560CBA8BC880F3F054D7A4B44 (void);
// 0x000000D1 System.Void LoginConfigItem::set_logoHover(System.String)
extern void LoginConfigItem_set_logoHover_m9B2312A2165BC160DEE44F6B6E976DD416B0EE56 (void);
// 0x000000D2 System.String LoginConfigItem::get_logoLight()
extern void LoginConfigItem_get_logoLight_m31DE6DF9CBD4A507F71AEC8BA250C5008304E6D1 (void);
// 0x000000D3 System.Void LoginConfigItem::set_logoLight(System.String)
extern void LoginConfigItem_set_logoLight_mDFD1716C5AF998620C4B705675BD9B8285140166 (void);
// 0x000000D4 System.String LoginConfigItem::get_logoDark()
extern void LoginConfigItem_get_logoDark_m91955949AE20290D2C40A8EDDE9576794DDB3B33 (void);
// 0x000000D5 System.Void LoginConfigItem::set_logoDark(System.String)
extern void LoginConfigItem_set_logoDark_m69E843576BBEF264D1901F1FBF30876C18B8717D (void);
// 0x000000D6 System.Boolean LoginConfigItem::get_mainOption()
extern void LoginConfigItem_get_mainOption_m0F05F271A583A6DC61410F5310706DBA99E1725D (void);
// 0x000000D7 System.Void LoginConfigItem::set_mainOption(System.Boolean)
extern void LoginConfigItem_set_mainOption_mAB4D615339DE122668B874A621AA3995F6335B6D (void);
// 0x000000D8 System.Boolean LoginConfigItem::get_showOnModal()
extern void LoginConfigItem_get_showOnModal_mFF9B30BE58AEBE82C355DF378F316EB82A8AF4BF (void);
// 0x000000D9 System.Void LoginConfigItem::set_showOnModal(System.Boolean)
extern void LoginConfigItem_set_showOnModal_m51FCE3168113A56EDEAA9584CD280AD535244E04 (void);
// 0x000000DA System.Boolean LoginConfigItem::get_showOnDesktop()
extern void LoginConfigItem_get_showOnDesktop_m6514CB41B44B0DE52799CF337CE9144C4DA4C74E (void);
// 0x000000DB System.Void LoginConfigItem::set_showOnDesktop(System.Boolean)
extern void LoginConfigItem_set_showOnDesktop_m29100BC8118FBA640E335752B49000C1CF2BF12B (void);
// 0x000000DC System.Boolean LoginConfigItem::get_showOnMobile()
extern void LoginConfigItem_get_showOnMobile_m70845D8C51F11EC9BCBB03243CC02360F1DC2D24 (void);
// 0x000000DD System.Void LoginConfigItem::set_showOnMobile(System.Boolean)
extern void LoginConfigItem_set_showOnMobile_m49B2785CE40A529D783AFCCFE066F70684CA84F0 (void);
// 0x000000DE System.Void LoginConfigItem::.ctor()
extern void LoginConfigItem__ctor_mAC4FC85F5335C2502F529623D27107981CECB113 (void);
// 0x000000DF Provider LoginParams::get_loginProvider()
extern void LoginParams_get_loginProvider_mEDC2EA94207549B6D5A3DCEFEB2F01FF0DD404B0 (void);
// 0x000000E0 System.Void LoginParams::set_loginProvider(Provider)
extern void LoginParams_set_loginProvider_m181593F8F76CE2BB6B1928DD093E5A1FBDCCE32A (void);
// 0x000000E1 System.String LoginParams::get_dappShare()
extern void LoginParams_get_dappShare_m3F3904C846B6AA5F2FFDA9358B73333D83B8850C (void);
// 0x000000E2 System.Void LoginParams::set_dappShare(System.String)
extern void LoginParams_set_dappShare_mAC238BA77CF4976323780E98A8DD94569213583C (void);
// 0x000000E3 ExtraLoginOptions LoginParams::get_extraLoginOptions()
extern void LoginParams_get_extraLoginOptions_m8B2E80C34B1F8E89B30361ECDC3E7309F27A8EEB (void);
// 0x000000E4 System.Void LoginParams::set_extraLoginOptions(ExtraLoginOptions)
extern void LoginParams_set_extraLoginOptions_m52997FC70C25444090F1D656B5BC5498A0DE88F7 (void);
// 0x000000E5 System.Uri LoginParams::get_redirectUrl()
extern void LoginParams_get_redirectUrl_m234C8555ABCAC471E66BFCADB353DF36ABD6D19C (void);
// 0x000000E6 System.Void LoginParams::set_redirectUrl(System.Uri)
extern void LoginParams_set_redirectUrl_m46193FBDE6F4BC27CFE86B5F385702BD37548001 (void);
// 0x000000E7 System.String LoginParams::get_appState()
extern void LoginParams_get_appState_mF4E1E4DDD5E13DEE77D8DB68B5657773A3F337DF (void);
// 0x000000E8 System.Void LoginParams::set_appState(System.String)
extern void LoginParams_set_appState_mD6E89B9EC036DEEFCC844FC57D7FCF204499CFC7 (void);
// 0x000000E9 MFALevel LoginParams::get_mfaLevel()
extern void LoginParams_get_mfaLevel_m6F22C8DA3E21413AF9E2A9D53BBF27688333DF2A (void);
// 0x000000EA System.Void LoginParams::set_mfaLevel(MFALevel)
extern void LoginParams_set_mfaLevel_m54E511FDE43D1EF63120F5695E3CE31328CB1494 (void);
// 0x000000EB System.Int32 LoginParams::get_sessionTime()
extern void LoginParams_get_sessionTime_m22FDA0E2F31E71CE7501D44D6D881BA912E9673C (void);
// 0x000000EC System.Void LoginParams::set_sessionTime(System.Int32)
extern void LoginParams_set_sessionTime_m858ADA116068969FDDAEBF4008C4E9067EAF2E80 (void);
// 0x000000ED Curve LoginParams::get_curve()
extern void LoginParams_get_curve_mA3D2BD08D7C55FDD73862E0B50560FDD1AA5F5C4 (void);
// 0x000000EE System.Void LoginParams::set_curve(Curve)
extern void LoginParams_set_curve_mC4F8B1DA20DCACA06200CA3B040DAF3033D9B48E (void);
// 0x000000EF System.Void LoginParams::.ctor()
extern void LoginParams__ctor_m180412D52E0846C8E1F06971236BFA23FA12FE98 (void);
// 0x000000F0 System.Void SecurePlayerPrefs::Init()
extern void SecurePlayerPrefs_Init_mA990D90D44307233C6C4096FF9202F6051E60191 (void);
// 0x000000F1 System.Boolean SecurePlayerPrefs::isInitialized()
extern void SecurePlayerPrefs_isInitialized_m99904CFC695644EA61D5A3B447601CFC2D24336C (void);
// 0x000000F2 System.Void SecurePlayerPrefs::securePlayerPrefs(System.String[,],System.Boolean)
extern void SecurePlayerPrefs_securePlayerPrefs_mB27DE70C606286DF0B0665270339D4FC29D360A8 (void);
// 0x000000F3 System.Void SecurePlayerPrefs::setLogErrorsEnabled(System.Boolean)
extern void SecurePlayerPrefs_setLogErrorsEnabled_m877648801097761144C34B41FDD056B6EBCBAF2A (void);
// 0x000000F4 System.Void SecurePlayerPrefs::SetString(System.String,System.String)
extern void SecurePlayerPrefs_SetString_m5D64C7C31332DE1AC22FE49AAF55282A078698BB (void);
// 0x000000F5 System.Void SecurePlayerPrefs::SetFloat(System.String,System.Single)
extern void SecurePlayerPrefs_SetFloat_m1C4491F66EB61AB12CBFF270291B6FD7A391F074 (void);
// 0x000000F6 System.Void SecurePlayerPrefs::SetInt(System.String,System.Int32)
extern void SecurePlayerPrefs_SetInt_m9CF8F4FABED36BDC757826E98A92211127F4BDE6 (void);
// 0x000000F7 System.Void SecurePlayerPrefs::SetBool(System.String,System.Boolean)
extern void SecurePlayerPrefs_SetBool_mCF63A78BE6ACBE72481891778155DFF89F9242DE (void);
// 0x000000F8 System.String SecurePlayerPrefs::GetString(System.String,System.String)
extern void SecurePlayerPrefs_GetString_m9EC6DA24B9395553BCA7251A0A2CDE0D23CBF4A4 (void);
// 0x000000F9 System.String SecurePlayerPrefs::GetString(System.String)
extern void SecurePlayerPrefs_GetString_m7831E95383724BBFB89B42B3E8AA19151555D97D (void);
// 0x000000FA System.Int32 SecurePlayerPrefs::GetInt(System.String,System.Int32)
extern void SecurePlayerPrefs_GetInt_m1AB315EA660647AC4140C594618FACEDAF7A262C (void);
// 0x000000FB System.Int32 SecurePlayerPrefs::GetInt(System.String)
extern void SecurePlayerPrefs_GetInt_m09D9D4D29DE3C360784D60C06E04EC21D40918E5 (void);
// 0x000000FC System.Single SecurePlayerPrefs::GetFloat(System.String,System.Single)
extern void SecurePlayerPrefs_GetFloat_m7427467F87E0EF57E7831B1138D5D1607B0EB45E (void);
// 0x000000FD System.Single SecurePlayerPrefs::GetFloat(System.String)
extern void SecurePlayerPrefs_GetFloat_mF0F25298086503D1AD3C831DFFCB9584F482B3C8 (void);
// 0x000000FE System.Boolean SecurePlayerPrefs::GetBool(System.String,System.Boolean)
extern void SecurePlayerPrefs_GetBool_mEAAD4D41DC60A2247E7AA7ACA3AE440C11BA759C (void);
// 0x000000FF System.Boolean SecurePlayerPrefs::GetBool(System.String)
extern void SecurePlayerPrefs_GetBool_m254685E257088F0B3A31D2B6A538CEBC75BBC9ED (void);
// 0x00000100 System.Void SecurePlayerPrefs::DeleteKey(System.String)
extern void SecurePlayerPrefs_DeleteKey_mDC4E888E64BE1F5E9DF1E99C30B68EA6290CAAA5 (void);
// 0x00000101 System.Void SecurePlayerPrefs::DeleteAll()
extern void SecurePlayerPrefs_DeleteAll_mA650F826E1DB430C22D24DF969369AD85AAAF45E (void);
// 0x00000102 System.Boolean SecurePlayerPrefs::HasKey(System.String)
extern void SecurePlayerPrefs_HasKey_m700AAC94B0BEE0E55A5A473896AD590442B1E09B (void);
// 0x00000103 System.Void SecurePlayerPrefs::Save()
extern void SecurePlayerPrefs_Save_m0FFB0CE70A0C7B4ECDBAE84BD4CC0CA83DA78FB7 (void);
// 0x00000104 System.String SecurePlayerPrefs::Decrypt(System.String)
extern void SecurePlayerPrefs_Decrypt_m65B44B081A290EE669D5B593DFA8C82D550EE585 (void);
// 0x00000105 System.String SecurePlayerPrefs::Encrypt(System.String)
extern void SecurePlayerPrefs_Encrypt_m32CF9AB11B6F06FBA1D0C6DA805A4FD3C82D5C30 (void);
// 0x00000106 System.Void SecurePlayerPrefs::.ctor()
extern void SecurePlayerPrefs__ctor_mB946F5E6236F7726C4150C6C696E41E20CB8C345 (void);
// 0x00000107 System.Void SecurePlayerPrefs::.cctor()
extern void SecurePlayerPrefs__cctor_mBBD1E8D7AC87E912D86FBE8B773FE6DCBFED75F3 (void);
// 0x00000108 System.String ShareMetadata::get_iv()
extern void ShareMetadata_get_iv_mE06C94EA532371BDDC937DC99DFC5BF1D3E98F0C (void);
// 0x00000109 System.Void ShareMetadata::set_iv(System.String)
extern void ShareMetadata_set_iv_mC57DEF8611776BF9A250C1E2B651D927DE235ED0 (void);
// 0x0000010A System.String ShareMetadata::get_ephemPublicKey()
extern void ShareMetadata_get_ephemPublicKey_mE020FC9FD0DB6134169318FE9CEB6CEB9EF91AD4 (void);
// 0x0000010B System.Void ShareMetadata::set_ephemPublicKey(System.String)
extern void ShareMetadata_set_ephemPublicKey_m0004CB59FECB0F33A5CDC4B99BD5BBF55BE34F04 (void);
// 0x0000010C System.String ShareMetadata::get_ciphertext()
extern void ShareMetadata_get_ciphertext_m39B35B03F9B0C0C92B996551F190D3DF989BA297 (void);
// 0x0000010D System.Void ShareMetadata::set_ciphertext(System.String)
extern void ShareMetadata_set_ciphertext_m3DDB5BCBE6A75CAB9AD96957D3538686395BF47C (void);
// 0x0000010E System.String ShareMetadata::get_mac()
extern void ShareMetadata_get_mac_m2CB771FB2AD4C807315A7F06ABF2F9E854BB3523 (void);
// 0x0000010F System.Void ShareMetadata::set_mac(System.String)
extern void ShareMetadata_set_mac_m8CC8C736358CD92860B313A429F7898B5442B13E (void);
// 0x00000110 System.Void ShareMetadata::.ctor()
extern void ShareMetadata__ctor_mE5F12844697576E7CCC7276E572A8D8FE9E6E8D7 (void);
// 0x00000111 System.String UserInfo::get_email()
extern void UserInfo_get_email_mD2B1F56FEE0D3A150D3B6B785E736CC1553247CD (void);
// 0x00000112 System.Void UserInfo::set_email(System.String)
extern void UserInfo_set_email_m1810F79A3E1109B2DC4894B442EB73C1D24013A3 (void);
// 0x00000113 System.String UserInfo::get_name()
extern void UserInfo_get_name_m3C0966D4C3DCE034E1855CB1FDB69A4B2EFBC7B3 (void);
// 0x00000114 System.Void UserInfo::set_name(System.String)
extern void UserInfo_set_name_m10FBE57492A8606C9ECFF76EBA6F4642357F9EAD (void);
// 0x00000115 System.String UserInfo::get_profileImage()
extern void UserInfo_get_profileImage_m603CF76C77A4F23C243BB2AE4D98B5B10CBA60F1 (void);
// 0x00000116 System.Void UserInfo::set_profileImage(System.String)
extern void UserInfo_set_profileImage_mDC379266678ED3F5BE86C93C8FB56E7964C3C401 (void);
// 0x00000117 System.String UserInfo::get_aggregateVerifier()
extern void UserInfo_get_aggregateVerifier_mDEF6F37C5CA6B975B4A7340DA2F43119A99AA915 (void);
// 0x00000118 System.Void UserInfo::set_aggregateVerifier(System.String)
extern void UserInfo_set_aggregateVerifier_m114824ABB74C2FB2B7DFAD0E1372E5AFFFDDD1A0 (void);
// 0x00000119 System.String UserInfo::get_verifier()
extern void UserInfo_get_verifier_mF92AF50FBB6262C4C43027837EA9F4AC29253B82 (void);
// 0x0000011A System.Void UserInfo::set_verifier(System.String)
extern void UserInfo_set_verifier_mF4CA760A7574711A0A2C8D8ADEA525BB1A50DA9A (void);
// 0x0000011B System.String UserInfo::get_verifierId()
extern void UserInfo_get_verifierId_m5EC029ECCA08043D4F23F162FE70A5277784DA2D (void);
// 0x0000011C System.Void UserInfo::set_verifierId(System.String)
extern void UserInfo_set_verifierId_mF7E5E64B69D51220C1ACF6CBE28B4779E535C86F (void);
// 0x0000011D System.String UserInfo::get_typeOfLogin()
extern void UserInfo_get_typeOfLogin_m0B18EC170E8ACBCEB7D91E63519C07EC35E96D9A (void);
// 0x0000011E System.Void UserInfo::set_typeOfLogin(System.String)
extern void UserInfo_set_typeOfLogin_m4E2EC5BE7866EB9D4C8B5FC4763E275A6C7355F9 (void);
// 0x0000011F System.String UserInfo::get_dappShare()
extern void UserInfo_get_dappShare_m0E11EC09FB814616F9EDFC12F4A492DB5536BA87 (void);
// 0x00000120 System.Void UserInfo::set_dappShare(System.String)
extern void UserInfo_set_dappShare_m3CFACC04510888F3CC2E423FFE576234DEB3BD43 (void);
// 0x00000121 System.String UserInfo::get_idToken()
extern void UserInfo_get_idToken_mCAEE9818EF1A53F10501C64765949A220C4CCA60 (void);
// 0x00000122 System.Void UserInfo::set_idToken(System.String)
extern void UserInfo_set_idToken_m2D7E2BA05860F7866B46F68E7E6BBCA820150E3E (void);
// 0x00000123 System.String UserInfo::get_oAuthIdToken()
extern void UserInfo_get_oAuthIdToken_mBF2391B6144CF9908F54199CF9EBD072041F553B (void);
// 0x00000124 System.Void UserInfo::set_oAuthIdToken(System.String)
extern void UserInfo_set_oAuthIdToken_mE02EEC446E68B8ECD83377F2FF9A00F1A1DAD189 (void);
// 0x00000125 System.String UserInfo::get_oAuthAccessToken()
extern void UserInfo_get_oAuthAccessToken_mB1DEFE615F4F781D502DE19E63C3D28F650F7E42 (void);
// 0x00000126 System.Void UserInfo::set_oAuthAccessToken(System.String)
extern void UserInfo_set_oAuthAccessToken_mF1FE24F01372D6D00AC1F10BE913937B21355A7E (void);
// 0x00000127 System.Void UserInfo::.ctor()
extern void UserInfo__ctor_mF3C53CD740CCF86CFBBA344B407F2FD9453FE1A7 (void);
// 0x00000128 System.String Web3AuthOptions::get_clientId()
extern void Web3AuthOptions_get_clientId_mB7B63B2D79C68861E79A9420283378CF5B6B5760 (void);
// 0x00000129 System.Void Web3AuthOptions::set_clientId(System.String)
extern void Web3AuthOptions_set_clientId_mCEDD013E698EB35EC1DF966FB8DB8B19293ECABB (void);
// 0x0000012A Web3Auth/Network Web3AuthOptions::get_network()
extern void Web3AuthOptions_get_network_mA8ECE6FB91D614BDF09B6141EEC73134EB685073 (void);
// 0x0000012B System.Void Web3AuthOptions::set_network(Web3Auth/Network)
extern void Web3AuthOptions_set_network_mCE0E43B7013A50142334B2432F46B4F48C21DC99 (void);
// 0x0000012C System.Uri Web3AuthOptions::get_redirectUrl()
extern void Web3AuthOptions_get_redirectUrl_mCE1F75BC723219D0E06A2A29994DD6CADA8E83D7 (void);
// 0x0000012D System.Void Web3AuthOptions::set_redirectUrl(System.Uri)
extern void Web3AuthOptions_set_redirectUrl_m7DBFA16C2AD50D0BD4EA180EAA543D275CD8C0C2 (void);
// 0x0000012E System.String Web3AuthOptions::get_sdkUrl()
extern void Web3AuthOptions_get_sdkUrl_mE36C68C36E31C911E9983DC6739072CC3C4E20BF (void);
// 0x0000012F System.Void Web3AuthOptions::set_sdkUrl(System.String)
extern void Web3AuthOptions_set_sdkUrl_m770C16CC5B986DCC05178627BF721715E0E006BB (void);
// 0x00000130 WhiteLabelData Web3AuthOptions::get_whiteLabel()
extern void Web3AuthOptions_get_whiteLabel_m8B010D25D63A1C8807B40FEC2CA70BEA38E96610 (void);
// 0x00000131 System.Void Web3AuthOptions::set_whiteLabel(WhiteLabelData)
extern void Web3AuthOptions_set_whiteLabel_mB7789E8223F6DFA10FFFB6443B93A787BF31FC76 (void);
// 0x00000132 System.Collections.Generic.Dictionary`2<System.String,LoginConfigItem> Web3AuthOptions::get_loginConfig()
extern void Web3AuthOptions_get_loginConfig_mF9A923D3DE8D5B999B3F2C849015CC8015F4CAAA (void);
// 0x00000133 System.Void Web3AuthOptions::set_loginConfig(System.Collections.Generic.Dictionary`2<System.String,LoginConfigItem>)
extern void Web3AuthOptions_set_loginConfig_mDF29168D03D32BC4E8F8F2FBD6F7AE937EC0C488 (void);
// 0x00000134 System.Void Web3AuthOptions::.ctor()
extern void Web3AuthOptions__ctor_m66B49631F2E216BD268B224BBB067217078E15D6 (void);
// 0x00000135 System.String Web3AuthResponse::get_privKey()
extern void Web3AuthResponse_get_privKey_m9F08D1BE32C794AFE6E8CE683858D20E5B5DC127 (void);
// 0x00000136 System.Void Web3AuthResponse::set_privKey(System.String)
extern void Web3AuthResponse_set_privKey_m2CAFC221F7A152EB1C771521084AB2A076E4B12F (void);
// 0x00000137 System.String Web3AuthResponse::get_ed25519PrivKey()
extern void Web3AuthResponse_get_ed25519PrivKey_m1694D26EC8F4567F7148177A1A048D794465FBCB (void);
// 0x00000138 System.Void Web3AuthResponse::set_ed25519PrivKey(System.String)
extern void Web3AuthResponse_set_ed25519PrivKey_mACEDDB5A71D051402E5BAD9EFC22E1250B6A8C17 (void);
// 0x00000139 UserInfo Web3AuthResponse::get_userInfo()
extern void Web3AuthResponse_get_userInfo_m106EA2DF5EB8272E8012A57A20A00E7586BCC726 (void);
// 0x0000013A System.Void Web3AuthResponse::set_userInfo(UserInfo)
extern void Web3AuthResponse_set_userInfo_mFF79B100D73EA9FFEBB5CDBABABB9E4674488DE0 (void);
// 0x0000013B System.String Web3AuthResponse::get_error()
extern void Web3AuthResponse_get_error_mBC32ECE44E253AA9CB156C9B2D49C0BDC2DFADC7 (void);
// 0x0000013C System.Void Web3AuthResponse::set_error(System.String)
extern void Web3AuthResponse_set_error_mFA61A132E5E90F4EA4F1AD4DE7732DE46C6BFCEF (void);
// 0x0000013D System.String Web3AuthResponse::get_sessionId()
extern void Web3AuthResponse_get_sessionId_m23D54DE64D16CCAF3D1EC93AAB421D036E94579F (void);
// 0x0000013E System.Void Web3AuthResponse::set_sessionId(System.String)
extern void Web3AuthResponse_set_sessionId_mAC019AC50AA7B076FE8FB1A2A99E66D1DA88D627 (void);
// 0x0000013F System.Void Web3AuthResponse::.ctor()
extern void Web3AuthResponse__ctor_mCF003E1741A472AC2C06EBBDD7737E4C84AD0FAD (void);
// 0x00000140 System.Void Web3AuthResponse::.ctor(System.String,System.String,UserInfo,System.String)
extern void Web3AuthResponse__ctor_mE3D4107276F4E35766EF40E2B20DE9696F2CC8A4 (void);
// 0x00000141 System.Void Web3AuthResponse::.ctor(System.String,System.String,UserInfo,System.String,System.String)
extern void Web3AuthResponse__ctor_m2B365B20E6A3C736BD61E205612196F1FC534D4D (void);
// 0x00000142 System.String WhiteLabelData::get_name()
extern void WhiteLabelData_get_name_mDBB093EF0F5BC443A584BD2B99A96B8F06965AC6 (void);
// 0x00000143 System.Void WhiteLabelData::set_name(System.String)
extern void WhiteLabelData_set_name_mAC8DA271351FE8292B052EA977F1403567691B55 (void);
// 0x00000144 System.String WhiteLabelData::get_logoLight()
extern void WhiteLabelData_get_logoLight_mDE265BA766DEE3EC5C4B4D08D716A85E80B6D687 (void);
// 0x00000145 System.Void WhiteLabelData::set_logoLight(System.String)
extern void WhiteLabelData_set_logoLight_mD1F7263F6DBCBB2741F374A79FF3BD8F27CEBF9E (void);
// 0x00000146 System.String WhiteLabelData::get_logoDark()
extern void WhiteLabelData_get_logoDark_m6B1A8F62473FEDFA4F37F8DEBDA75B42A5EFC337 (void);
// 0x00000147 System.Void WhiteLabelData::set_logoDark(System.String)
extern void WhiteLabelData_set_logoDark_mEAD1A09AAEC6B29B9AC57840EFD20ACDEAD6F4E9 (void);
// 0x00000148 System.String WhiteLabelData::get_defaultLanguage()
extern void WhiteLabelData_get_defaultLanguage_mCB5F5CD192AC76A0CD64E3F7F8E671BF4DB7620B (void);
// 0x00000149 System.Void WhiteLabelData::set_defaultLanguage(System.String)
extern void WhiteLabelData_set_defaultLanguage_m6FD9E33CCD8956B9B64272DDA29C4B348179615E (void);
// 0x0000014A System.Boolean WhiteLabelData::get_dark()
extern void WhiteLabelData_get_dark_m994DE1A34E7805DFC04D7FC595F75B8D3B2A548C (void);
// 0x0000014B System.Void WhiteLabelData::set_dark(System.Boolean)
extern void WhiteLabelData_set_dark_m715345FA97EAEE76703909B7CF47AD0725285778 (void);
// 0x0000014C System.Collections.Generic.Dictionary`2<System.String,System.String> WhiteLabelData::get_theme()
extern void WhiteLabelData_get_theme_m521DB832A7C4BA698BE0D27B7F6B6971EF03909E (void);
// 0x0000014D System.Void WhiteLabelData::set_theme(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WhiteLabelData_set_theme_mE705905C59E482D06603CCC9DD2CF6747E5549E8 (void);
// 0x0000014E System.Void WhiteLabelData::.ctor()
extern void WhiteLabelData__ctor_mC934E1230E97FCB07BDF7BCE6DB0CEE22827961E (void);
// 0x0000014F System.Void Utils::web3auth_launch(System.String,System.String,System.String)
extern void Utils_web3auth_launch_mF1F184FE2D581B2D3B6BB951507801E4B279DD2A (void);
// 0x00000150 System.Void Utils::LaunchUrl(System.String,System.String,System.String)
extern void Utils_LaunchUrl_m91AB1098CD57D10BDD2D6CAF4D0B0D8CA11062CC (void);
// 0x00000151 System.Byte[] Utils::DecodeBase64(System.String)
extern void Utils_DecodeBase64_m489A851C0F2481FE1EAB0E792FF18A6F8A4EF78C (void);
// 0x00000152 System.Collections.Generic.Dictionary`2<System.String,System.String> Utils::ParseQuery(System.String)
extern void Utils_ParseQuery_m94DCE66CA78640B2AE0A2AE0BE1B5EA6AEA54334 (void);
// 0x00000153 System.Int32 Utils::GetRandomUnusedPort()
extern void Utils_GetRandomUnusedPort_m3B0D526958B3373ECFA2310677FDEA3523F9EE97 (void);
// 0x00000154 System.Void Utils/<>c::.cctor()
extern void U3CU3Ec__cctor_m33AE10837481E69BFC74370F54D619BCF69AEE9B (void);
// 0x00000155 System.Void Utils/<>c::.ctor()
extern void U3CU3Ec__ctor_mFC65BA92B86438243BC898E9581B2EE5DA795BFC (void);
// 0x00000156 System.Boolean Utils/<>c::<ParseQuery>b__3_0(System.String)
extern void U3CU3Ec_U3CParseQueryU3Eb__3_0_m26F4977887BAFA6087B5B2FA17C445B39B47CFFF (void);
// 0x00000157 System.String Utils/<>c::<ParseQuery>b__3_1(System.String)
extern void U3CU3Ec_U3CParseQueryU3Eb__3_1_m70CB6979C394D2236500BBBA13A8410DB53CAC93 (void);
// 0x00000158 System.String Utils/<>c::<ParseQuery>b__3_2(System.String)
extern void U3CU3Ec_U3CParseQueryU3Eb__3_2_mE53FC528EDDCEFEBE7057B3DCF363D7D2C75B982 (void);
// 0x00000159 System.Void Web3Auth::add_onLogin(System.Action`1<Web3AuthResponse>)
extern void Web3Auth_add_onLogin_m9EDD31618AEC9CEC618953CEBF421A8AAF98D0EF (void);
// 0x0000015A System.Void Web3Auth::remove_onLogin(System.Action`1<Web3AuthResponse>)
extern void Web3Auth_remove_onLogin_m2C2E76F710A2DDD05A87654AB1E31F09E6FD9603 (void);
// 0x0000015B System.Void Web3Auth::add_onLogout(System.Action)
extern void Web3Auth_add_onLogout_m9CCAFD46D4BF381D5317E66D2763ADA4DDA88E7D (void);
// 0x0000015C System.Void Web3Auth::remove_onLogout(System.Action)
extern void Web3Auth_remove_onLogout_m253416187483E4C75FBC0573663D2EC43BC9EBA6 (void);
// 0x0000015D System.Void Web3Auth::Awake()
extern void Web3Auth_Awake_m0747C47A5BB5A5EF08732269FC410294847EA469 (void);
// 0x0000015E System.Void Web3Auth::setOptions(Web3AuthOptions)
extern void Web3Auth_setOptions_mC13A88189661DC7B1BC34EB06153EAEBD6BBF989 (void);
// 0x0000015F System.Void Web3Auth::onDeepLinkActivated(System.String)
extern void Web3Auth_onDeepLinkActivated_mC3A5B16026F6E11C6C7331788F506CC8132C9855 (void);
// 0x00000160 System.Void Web3Auth::request(System.String,LoginParams,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void Web3Auth_request_mA40017A55F64E8FF339FEA33674F9A76F5B37407 (void);
// 0x00000161 System.Void Web3Auth::setResultUrl(System.Uri)
extern void Web3Auth_setResultUrl_mE3FD69FD804A8FEE15EB059669B5C71C7194E918 (void);
// 0x00000162 System.Void Web3Auth::login(LoginParams)
extern void Web3Auth_login_m9EF66427D479EAAE621EA7BAC1D33F062901846A (void);
// 0x00000163 System.Void Web3Auth::logout(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void Web3Auth_logout_mFBC41AA0A4731EC6DE40B6E66A85FC2749716D74 (void);
// 0x00000164 System.Void Web3Auth::logout(System.Uri,System.String)
extern void Web3Auth_logout_m7EC70DDD1A767A4C96B843F1818DCF272B353B57 (void);
// 0x00000165 System.Void Web3Auth::authorizeSession()
extern void Web3Auth_authorizeSession_mE985B0EE53FAD38A3E465DDE1700FD7DE36AA191 (void);
// 0x00000166 System.Void Web3Auth::sessionTimeOutAPI()
extern void Web3Auth_sessionTimeOutAPI_m0DDD2FE8A3EBFAC34C7ADC9E8FC2E870A3D67A4E (void);
// 0x00000167 System.Void Web3Auth::Update()
extern void Web3Auth_Update_mB48C59E94C6D37F673C4D198F4F55332FA4B0AEE (void);
// 0x00000168 System.Void Web3Auth::Enqueue(System.Action)
extern void Web3Auth_Enqueue_m4C359A8F1B99BB30B0C0FA6A90F6B95DC41D01CC (void);
// 0x00000169 System.Collections.IEnumerator Web3Auth::ActionWrapper(System.Action)
extern void Web3Auth_ActionWrapper_m5460219D24A1E7E0DFBA1310B1C61495499A91F5 (void);
// 0x0000016A System.Void Web3Auth::.ctor()
extern void Web3Auth__ctor_m15252B91E6D7B6F19BE73097E3EF0C91D4119C85 (void);
// 0x0000016B System.Void Web3Auth::.cctor()
extern void Web3Auth__cctor_mB1540CCD83E03E726A62895A7260A2ECF2916E6E (void);
// 0x0000016C System.Void Web3Auth::<setResultUrl>b__19_0()
extern void Web3Auth_U3CsetResultUrlU3Eb__19_0_m39B5C7983CE2C4008B92731B4492DA19D517F9AC (void);
// 0x0000016D System.Void Web3Auth::<setResultUrl>b__19_1()
extern void Web3Auth_U3CsetResultUrlU3Eb__19_1_mCC156DBD68B3FC00DC6AD0D943038C639C4E8656 (void);
// 0x0000016E System.Void Web3Auth::<setResultUrl>b__19_2()
extern void Web3Auth_U3CsetResultUrlU3Eb__19_2_mF562EE3777E78A34F614C6676AB3EDA4900E905D (void);
// 0x0000016F System.Void Web3Auth/<>c__DisplayClass23_0::.ctor()
extern void U3CU3Ec__DisplayClass23_0__ctor_mC4D4A7861E6C7BE3ECC8C83DF028CF9D9795E85F (void);
// 0x00000170 System.Void Web3Auth/<>c__DisplayClass23_0::<authorizeSession>b__0(StoreApiResponse)
extern void U3CU3Ec__DisplayClass23_0_U3CauthorizeSessionU3Eb__0_m20AC2950722D382AD395F0DC43AD863750BEED83 (void);
// 0x00000171 System.Void Web3Auth/<>c__DisplayClass23_0::<authorizeSession>b__1()
extern void U3CU3Ec__DisplayClass23_0_U3CauthorizeSessionU3Eb__1_m0BEF105054BE6294A277F64E69342965D09F9862 (void);
// 0x00000172 System.Void Web3Auth/<>c__DisplayClass23_0::<authorizeSession>b__2()
extern void U3CU3Ec__DisplayClass23_0_U3CauthorizeSessionU3Eb__2_mD48DF10F56386B21A4C094241B76B95DD62231CB (void);
// 0x00000173 System.Void Web3Auth/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_mD82D3208D898047DD00AF6999DBEB1990A5DF25D (void);
// 0x00000174 System.Void Web3Auth/<>c__DisplayClass24_0::<sessionTimeOutAPI>b__0(StoreApiResponse)
extern void U3CU3Ec__DisplayClass24_0_U3CsessionTimeOutAPIU3Eb__0_mABE1727C8B168D6E3A7F91D23EF6E3D3B6F3AE1B (void);
// 0x00000175 System.Void Web3Auth/<>c__DisplayClass24_0::<sessionTimeOutAPI>b__1(Newtonsoft.Json.Linq.JObject)
extern void U3CU3Ec__DisplayClass24_0_U3CsessionTimeOutAPIU3Eb__1_mE05FAF31FB3F7168F40D162DDEDE21D83AAA5C2A (void);
// 0x00000176 System.Void Web3Auth/<>c__DisplayClass24_0::<sessionTimeOutAPI>b__2()
extern void U3CU3Ec__DisplayClass24_0_U3CsessionTimeOutAPIU3Eb__2_mE081C7E6645F22A99C0B1C62502E327AD473B0A0 (void);
// 0x00000177 System.Void Web3Auth/<>c__DisplayClass26_0::.ctor()
extern void U3CU3Ec__DisplayClass26_0__ctor_mC5B35FFB7AA410AF6AC1CC0A2284A8F97DD0AD02 (void);
// 0x00000178 System.Void Web3Auth/<>c__DisplayClass26_0::<Enqueue>b__0()
extern void U3CU3Ec__DisplayClass26_0_U3CEnqueueU3Eb__0_m17A828F8EC60F93CE4AE64D0F3A9353F2ECC07FF (void);
// 0x00000179 System.Void Web3Auth/<ActionWrapper>d__27::.ctor(System.Int32)
extern void U3CActionWrapperU3Ed__27__ctor_mF8E5F9F2668E6C6588F49C7858D2F518CB0F0E61 (void);
// 0x0000017A System.Void Web3Auth/<ActionWrapper>d__27::System.IDisposable.Dispose()
extern void U3CActionWrapperU3Ed__27_System_IDisposable_Dispose_mF8919282F0E8C469CD9437353549A0FA8181ECA0 (void);
// 0x0000017B System.Boolean Web3Auth/<ActionWrapper>d__27::MoveNext()
extern void U3CActionWrapperU3Ed__27_MoveNext_m6DAC129F473E9316E452B9D4CC13BF60B7696CD5 (void);
// 0x0000017C System.Object Web3Auth/<ActionWrapper>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CActionWrapperU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m13314A3316F10C97769F18AA9C3C94A5918EF71D (void);
// 0x0000017D System.Void Web3Auth/<ActionWrapper>d__27::System.Collections.IEnumerator.Reset()
extern void U3CActionWrapperU3Ed__27_System_Collections_IEnumerator_Reset_m53A4FD15C72DFECFFCC51EB9CE9791302CF3B8EA (void);
// 0x0000017E System.Object Web3Auth/<ActionWrapper>d__27::System.Collections.IEnumerator.get_Current()
extern void U3CActionWrapperU3Ed__27_System_Collections_IEnumerator_get_Current_mF09DB4A5B870BA83F6EE6B3C4F4AE54F6B5DD67D (void);
// 0x0000017F System.Void UserCancelledException::.ctor()
extern void UserCancelledException__ctor_m0CFF14ABB7A0CD83F8EAB3D77E7F82068CA5594D (void);
// 0x00000180 System.Void UnKnownException::.ctor(System.String)
extern void UnKnownException__ctor_mBCC00999CAFB3B33A999BC28CB370FCCF9D6CE66 (void);
// 0x00000181 System.Int32 WebGLSupport.WebGLInputMobilePlugin::WebGLInputMobileRegister(System.Action`1<System.Int32>)
extern void WebGLInputMobilePlugin_WebGLInputMobileRegister_m79F352E8388C0495F92218A564C060E81CC21B8B (void);
// 0x00000182 System.Void WebGLSupport.WebGLInputMobilePlugin::WebGLInputMobileOnFocusOut(System.Int32,System.Action`1<System.Int32>)
extern void WebGLInputMobilePlugin_WebGLInputMobileOnFocusOut_m985EC71B7BABFBB225189C26159A04809B170995 (void);
// 0x00000183 System.Void WebGLSupport.WebGLInputMobilePlugin::.ctor()
extern void WebGLInputMobilePlugin__ctor_m163F1CAB8968930FFE344890F51CA76863DA222C (void);
// 0x00000184 System.Void WebGLSupport.WebGLInputMobile::Awake()
extern void WebGLInputMobile_Awake_m6464CF07E9B9A8B1F2DEA7C058DB243A8010B532 (void);
// 0x00000185 System.Void WebGLSupport.WebGLInputMobile::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern void WebGLInputMobile_OnPointerDown_m64CB17BE39FBAABEF12E52B1E210D4E1DF6CD535 (void);
// 0x00000186 System.Void WebGLSupport.WebGLInputMobile::OnTouchEnd(System.Int32)
extern void WebGLInputMobile_OnTouchEnd_mA93BC33B84197B228324BF845083BD9773C98FE7 (void);
// 0x00000187 System.Collections.IEnumerator WebGLSupport.WebGLInputMobile::RegisterOnFocusOut(System.Int32)
extern void WebGLInputMobile_RegisterOnFocusOut_m697C0181EFE313C4CD16AAD1549736FB2231DFD7 (void);
// 0x00000188 System.Void WebGLSupport.WebGLInputMobile::OnFocusOut(System.Int32)
extern void WebGLInputMobile_OnFocusOut_m738467287A0F65FB47CBCD9E0A89DA7E9F47C47F (void);
// 0x00000189 System.Collections.IEnumerator WebGLSupport.WebGLInputMobile::ExecFocusOut(System.Int32)
extern void WebGLInputMobile_ExecFocusOut_mEA99D0F430E536AF12F50C05BB451A7886B6717B (void);
// 0x0000018A System.Void WebGLSupport.WebGLInputMobile::.ctor()
extern void WebGLInputMobile__ctor_m3325A035D098D0C34996AB53A667D79E1D4F7DBC (void);
// 0x0000018B System.Void WebGLSupport.WebGLInputMobile::.cctor()
extern void WebGLInputMobile__cctor_m699B0A608055F9D0346EBB7F0C3F0E4E2BF40A59 (void);
// 0x0000018C System.Void WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::.ctor(System.Int32)
extern void U3CRegisterOnFocusOutU3Ed__5__ctor_m49FB20F2E86E6235EF4BC9EDF9A9337A2BF891E7 (void);
// 0x0000018D System.Void WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::System.IDisposable.Dispose()
extern void U3CRegisterOnFocusOutU3Ed__5_System_IDisposable_Dispose_m25F9C07BB94C04A217A49C3E10A32676D5A8C116 (void);
// 0x0000018E System.Boolean WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::MoveNext()
extern void U3CRegisterOnFocusOutU3Ed__5_MoveNext_m445D1F9129A4B01F3252CE11BEB2AA3D098AEA76 (void);
// 0x0000018F System.Object WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CRegisterOnFocusOutU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m56B80C139738E9BEBE452460040CCE1076F3AD64 (void);
// 0x00000190 System.Void WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::System.Collections.IEnumerator.Reset()
extern void U3CRegisterOnFocusOutU3Ed__5_System_Collections_IEnumerator_Reset_mB17DAD52A7A8CD7CFB0DB13F5303FBB74F03B150 (void);
// 0x00000191 System.Object WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::System.Collections.IEnumerator.get_Current()
extern void U3CRegisterOnFocusOutU3Ed__5_System_Collections_IEnumerator_get_Current_m97C1222340BA4B330406B7B362813C868C30FF20 (void);
// 0x00000192 System.Void WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::.ctor(System.Int32)
extern void U3CExecFocusOutU3Ed__7__ctor_mD008B09446E714FBC21C1E00ABE3D4084A6D6480 (void);
// 0x00000193 System.Void WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::System.IDisposable.Dispose()
extern void U3CExecFocusOutU3Ed__7_System_IDisposable_Dispose_m1E420ED2CA74F2FCFE3F1E5270F1F7CD3B2FCE09 (void);
// 0x00000194 System.Boolean WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::MoveNext()
extern void U3CExecFocusOutU3Ed__7_MoveNext_m697FC926BF8D0DEEA7DC3009454D32BC6FBE7A18 (void);
// 0x00000195 System.Object WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CExecFocusOutU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m609559A44E4BB630C63C4F20D56958AD162F5D8A (void);
// 0x00000196 System.Void WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::System.Collections.IEnumerator.Reset()
extern void U3CExecFocusOutU3Ed__7_System_Collections_IEnumerator_Reset_m67DC72CC4430E06C989FC08C319D65C2857A43AD (void);
// 0x00000197 System.Object WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::System.Collections.IEnumerator.get_Current()
extern void U3CExecFocusOutU3Ed__7_System_Collections_IEnumerator_get_Current_m717C3EB6D3A3080BDE765089834E9DBFED55D367 (void);
// 0x00000198 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputInit()
extern void WebGLInputPlugin_WebGLInputInit_m11E3589EAF93DB31FAFE779A2C9D2925A9A91A6F (void);
// 0x00000199 System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputCreate(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern void WebGLInputPlugin_WebGLInputCreate_m746DD59EB7BEA71E65D865878A45D10A507929E3 (void);
// 0x0000019A System.Void WebGLSupport.WebGLInputPlugin::WebGLInputEnterSubmit(System.Int32,System.Boolean)
extern void WebGLInputPlugin_WebGLInputEnterSubmit_m27B76DD3640B3C8D52E601D8C798F2E3C90E6044 (void);
// 0x0000019B System.Void WebGLSupport.WebGLInputPlugin::WebGLInputTab(System.Int32,System.Action`2<System.Int32,System.Int32>)
extern void WebGLInputPlugin_WebGLInputTab_m20EBAC5FAB0884BCE57106F201557AA7FCB3127F (void);
// 0x0000019C System.Void WebGLSupport.WebGLInputPlugin::WebGLInputFocus(System.Int32)
extern void WebGLInputPlugin_WebGLInputFocus_m188075249363DF64437E93BCB7011F306C95F3D3 (void);
// 0x0000019D System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnFocus(System.Int32,System.Action`1<System.Int32>)
extern void WebGLInputPlugin_WebGLInputOnFocus_m2692B91D9A6A5E300E8EE174812B331551C31C8E (void);
// 0x0000019E System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnBlur(System.Int32,System.Action`1<System.Int32>)
extern void WebGLInputPlugin_WebGLInputOnBlur_mA7643E022BA1D92EDCAE42B82777F43B45B94D0E (void);
// 0x0000019F System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnValueChange(System.Int32,System.Action`2<System.Int32,System.String>)
extern void WebGLInputPlugin_WebGLInputOnValueChange_m0DCA9A890D212A2CB5C114A6AD5CE5F142DFECE5 (void);
// 0x000001A0 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnEditEnd(System.Int32,System.Action`2<System.Int32,System.String>)
extern void WebGLInputPlugin_WebGLInputOnEditEnd_m2042A3B206645A40E639677607AA96D113BAFB3E (void);
// 0x000001A1 System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputSelectionStart(System.Int32)
extern void WebGLInputPlugin_WebGLInputSelectionStart_m29E14E7BD7633302296C5CACA783D0AD48BEC4B9 (void);
// 0x000001A2 System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputSelectionEnd(System.Int32)
extern void WebGLInputPlugin_WebGLInputSelectionEnd_mC732BE407F33DF1E3120E61448717FF77CD62EA0 (void);
// 0x000001A3 System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputSelectionDirection(System.Int32)
extern void WebGLInputPlugin_WebGLInputSelectionDirection_m2E359AEE64C9F388FFC3512194B12D29A2CED4DD (void);
// 0x000001A4 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputSetSelectionRange(System.Int32,System.Int32,System.Int32)
extern void WebGLInputPlugin_WebGLInputSetSelectionRange_mC59493011984976120C0A3AD535721B60D5EC365 (void);
// 0x000001A5 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputMaxLength(System.Int32,System.Int32)
extern void WebGLInputPlugin_WebGLInputMaxLength_m9C93EEB91C34970CE5A18685795C50EC72E07445 (void);
// 0x000001A6 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputText(System.Int32,System.String)
extern void WebGLInputPlugin_WebGLInputText_mB9672B4EDE70472818658C3FE33BFD03F8A52478 (void);
// 0x000001A7 System.Boolean WebGLSupport.WebGLInputPlugin::WebGLInputIsFocus(System.Int32)
extern void WebGLInputPlugin_WebGLInputIsFocus_mE876AE821EDE3C824F9BDF8E8F51E7A6176E44FC (void);
// 0x000001A8 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputDelete(System.Int32)
extern void WebGLInputPlugin_WebGLInputDelete_m8A48356215405A65CFC9834A8B419CF264EFB9C1 (void);
// 0x000001A9 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputForceBlur(System.Int32)
extern void WebGLInputPlugin_WebGLInputForceBlur_m8665C6719F80411FFCFEFFA09D6E755236047A06 (void);
// 0x000001AA System.Void WebGLSupport.WebGLInputPlugin::.ctor()
extern void WebGLInputPlugin__ctor_m5E7C4D525EC7981177E039CBAE10A52FE4F922F5 (void);
// 0x000001AB System.String WebGLSupport.WebGLInput::get_CanvasId()
extern void WebGLInput_get_CanvasId_mB541B0AC12E27B2EAF4345A3AB266DDCC12FE82E (void);
// 0x000001AC System.Void WebGLSupport.WebGLInput::set_CanvasId(System.String)
extern void WebGLInput_set_CanvasId_m27A44AC456B182203EB1F06324BD0532BA55F682 (void);
// 0x000001AD System.Void WebGLSupport.WebGLInput::.cctor()
extern void WebGLInput__cctor_m983D0D9A5EFCA2E63A6D451D7F9733C1B9585055 (void);
// 0x000001AE System.Int32 WebGLSupport.WebGLInput::get_Id()
extern void WebGLInput_get_Id_m8FD52639A53A9DB0CDCFC9BF31F8DC8B6C0883BE (void);
// 0x000001AF WebGLSupport.IInputField WebGLSupport.WebGLInput::Setup()
extern void WebGLInput_Setup_mEE70F874E9A9376C25C8D47C92F9B014CD32A22E (void);
// 0x000001B0 System.Void WebGLSupport.WebGLInput::Awake()
extern void WebGLInput_Awake_mC2703EB0612C2026ABCCB8D12097EA2BF6F1DDC0 (void);
// 0x000001B1 UnityEngine.RectInt WebGLSupport.WebGLInput::GetElemetRect()
extern void WebGLInput_GetElemetRect_mC1BA321333DDF36404F5DB783468E735CC9296C4 (void);
// 0x000001B2 System.Void WebGLSupport.WebGLInput::OnSelect()
extern void WebGLInput_OnSelect_m2501A996790CD595512E511E03FF8E0ECED38704 (void);
// 0x000001B3 System.Void WebGLSupport.WebGLInput::OnWindowBlur()
extern void WebGLInput_OnWindowBlur_m7FE0D287BEC3C71A79B7BEA6C101CACF80A127BE (void);
// 0x000001B4 UnityEngine.Rect WebGLSupport.WebGLInput::GetScreenCoordinates(UnityEngine.RectTransform)
extern void WebGLInput_GetScreenCoordinates_mA95B21A7F596D2B46169B26FD9D04E0ADE2863F6 (void);
// 0x000001B5 System.Void WebGLSupport.WebGLInput::DeactivateInputField()
extern void WebGLInput_DeactivateInputField_mD20A5FF891DBC6AF9DB3905F16253236A6CC6FF8 (void);
// 0x000001B6 System.Void WebGLSupport.WebGLInput::OnFocus(System.Int32)
extern void WebGLInput_OnFocus_mEAFF02CB2715232B724DBF02517417F85CCF66B4 (void);
// 0x000001B7 System.Void WebGLSupport.WebGLInput::OnBlur(System.Int32)
extern void WebGLInput_OnBlur_m056127CBA134428CD5D30B5D0D567BBAD4244400 (void);
// 0x000001B8 System.Collections.IEnumerator WebGLSupport.WebGLInput::Blur(System.Int32)
extern void WebGLInput_Blur_m6FA4AA0BCCF4DF1C2DF9B7892086CF0E4ACCD389 (void);
// 0x000001B9 System.Void WebGLSupport.WebGLInput::OnValueChange(System.Int32,System.String)
extern void WebGLInput_OnValueChange_m8FC2093C4282D531764042FF66ADBB6526218B39 (void);
// 0x000001BA System.Void WebGLSupport.WebGLInput::OnEditEnd(System.Int32,System.String)
extern void WebGLInput_OnEditEnd_mD1ADCC675C43BF48128C84734354BB25DCCB6EDB (void);
// 0x000001BB System.Void WebGLSupport.WebGLInput::OnTab(System.Int32,System.Int32)
extern void WebGLInput_OnTab_m9D1182F054C00912D28B631BA1F798B1BD3D2788 (void);
// 0x000001BC System.Void WebGLSupport.WebGLInput::Update()
extern void WebGLInput_Update_m9E94E31967B7F3F2BCF1BF3F13DB83D9E913C22A (void);
// 0x000001BD System.Void WebGLSupport.WebGLInput::OnDestroy()
extern void WebGLInput_OnDestroy_m2C03015DD6619F6835140D8D3E047AFE0381D756 (void);
// 0x000001BE System.Void WebGLSupport.WebGLInput::OnEnable()
extern void WebGLInput_OnEnable_mE483787299E6E11EEDF8DDE4D1A4BEC352252B81 (void);
// 0x000001BF System.Void WebGLSupport.WebGLInput::OnDisable()
extern void WebGLInput_OnDisable_m0A6B4FF88B34EF05DDDCE5C71534A73C219E94C5 (void);
// 0x000001C0 System.Int32 WebGLSupport.WebGLInput::CompareTo(WebGLSupport.WebGLInput)
extern void WebGLInput_CompareTo_mABC11AA70E31E68012F61AD2AEE128C3C1B0A654 (void);
// 0x000001C1 System.Void WebGLSupport.WebGLInput::CheckOutFocus()
extern void WebGLInput_CheckOutFocus_m878C304E5815A7387CFCA617A8C1E8D862F775A3 (void);
// 0x000001C2 System.Void WebGLSupport.WebGLInput::.ctor()
extern void WebGLInput__ctor_m7D749FA5DED7D95529A03EAB4532F7EFDF400C4C (void);
// 0x000001C3 System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::Add(WebGLSupport.WebGLInput)
extern void WebGLInputTabFocus_Add_mEECB0EC5C006C2D2D8BDFCEADB58AA51FEE37745 (void);
// 0x000001C4 System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::Remove(WebGLSupport.WebGLInput)
extern void WebGLInputTabFocus_Remove_mB969B93318E953A3554C53A2EB3ADE2A212A39DF (void);
// 0x000001C5 System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::OnTab(WebGLSupport.WebGLInput,System.Int32)
extern void WebGLInputTabFocus_OnTab_m6A5BC1CD11614EE556767ECCBC9F92092DD223F8 (void);
// 0x000001C6 System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::.cctor()
extern void WebGLInputTabFocus__cctor_mB169E6E6D631DAFF29087AFA112807D6D64140E0 (void);
// 0x000001C7 System.Void WebGLSupport.WebGLInput/<Blur>d__21::.ctor(System.Int32)
extern void U3CBlurU3Ed__21__ctor_m96CC10B7C3F3A245C410A4365D20F6AF0DFC8D80 (void);
// 0x000001C8 System.Void WebGLSupport.WebGLInput/<Blur>d__21::System.IDisposable.Dispose()
extern void U3CBlurU3Ed__21_System_IDisposable_Dispose_mBC6A4B22FF50294136AC7B70FF6B8420B4983FAB (void);
// 0x000001C9 System.Boolean WebGLSupport.WebGLInput/<Blur>d__21::MoveNext()
extern void U3CBlurU3Ed__21_MoveNext_m95C7A268C2FFE4111985F4A647ACD73A357D2CE8 (void);
// 0x000001CA System.Object WebGLSupport.WebGLInput/<Blur>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CBlurU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m577A487FF60CEFFE5AEFFD4DC523D0F2D9DAFC65 (void);
// 0x000001CB System.Void WebGLSupport.WebGLInput/<Blur>d__21::System.Collections.IEnumerator.Reset()
extern void U3CBlurU3Ed__21_System_Collections_IEnumerator_Reset_m0A25592619505B8F99027D6959CFD4334D965557 (void);
// 0x000001CC System.Object WebGLSupport.WebGLInput/<Blur>d__21::System.Collections.IEnumerator.get_Current()
extern void U3CBlurU3Ed__21_System_Collections_IEnumerator_get_Current_mEDF84A3CBA2C5907837E898369CD1466002C6A80 (void);
// 0x000001CD WebGLSupport.ContentType WebGLSupport.IInputField::get_contentType()
// 0x000001CE WebGLSupport.LineType WebGLSupport.IInputField::get_lineType()
// 0x000001CF System.Int32 WebGLSupport.IInputField::get_fontSize()
// 0x000001D0 System.String WebGLSupport.IInputField::get_text()
// 0x000001D1 System.Void WebGLSupport.IInputField::set_text(System.String)
// 0x000001D2 System.String WebGLSupport.IInputField::get_placeholder()
// 0x000001D3 System.Int32 WebGLSupport.IInputField::get_characterLimit()
// 0x000001D4 System.Int32 WebGLSupport.IInputField::get_caretPosition()
// 0x000001D5 System.Boolean WebGLSupport.IInputField::get_isFocused()
// 0x000001D6 System.Int32 WebGLSupport.IInputField::get_selectionFocusPosition()
// 0x000001D7 System.Void WebGLSupport.IInputField::set_selectionFocusPosition(System.Int32)
// 0x000001D8 System.Int32 WebGLSupport.IInputField::get_selectionAnchorPosition()
// 0x000001D9 System.Void WebGLSupport.IInputField::set_selectionAnchorPosition(System.Int32)
// 0x000001DA System.Boolean WebGLSupport.IInputField::get_ReadOnly()
// 0x000001DB System.Boolean WebGLSupport.IInputField::get_OnFocusSelectAll()
// 0x000001DC UnityEngine.RectTransform WebGLSupport.IInputField::RectTransform()
// 0x000001DD System.Void WebGLSupport.IInputField::ActivateInputField()
// 0x000001DE System.Void WebGLSupport.IInputField::DeactivateInputField()
// 0x000001DF System.Void WebGLSupport.IInputField::Rebuild()
// 0x000001E0 System.Boolean WebGLSupport.WrappedInputField::get_ReadOnly()
extern void WrappedInputField_get_ReadOnly_m428F23DCBC9E36A30C204018EDEAAF99AC782ABB (void);
// 0x000001E1 System.String WebGLSupport.WrappedInputField::get_text()
extern void WrappedInputField_get_text_m1983DF85C628EDC2B247E256BACFD37F04297085 (void);
// 0x000001E2 System.Void WebGLSupport.WrappedInputField::set_text(System.String)
extern void WrappedInputField_set_text_m05639FF0C477EE01BDF884A75B941D26DE5AF5A2 (void);
// 0x000001E3 System.String WebGLSupport.WrappedInputField::get_placeholder()
extern void WrappedInputField_get_placeholder_mA9068EA5816B9A85C9170A893BBD5F60B025C9E8 (void);
// 0x000001E4 System.Int32 WebGLSupport.WrappedInputField::get_fontSize()
extern void WrappedInputField_get_fontSize_m16B03C1A1D743FD5D870D22E5C11E83416D5C036 (void);
// 0x000001E5 WebGLSupport.ContentType WebGLSupport.WrappedInputField::get_contentType()
extern void WrappedInputField_get_contentType_m06770CF12946A355E27814130ECFEDC10222D3A7 (void);
// 0x000001E6 WebGLSupport.LineType WebGLSupport.WrappedInputField::get_lineType()
extern void WrappedInputField_get_lineType_mA45DACE8F5D5D6EEF1545160D7EFCAE18E5F5E7A (void);
// 0x000001E7 System.Int32 WebGLSupport.WrappedInputField::get_characterLimit()
extern void WrappedInputField_get_characterLimit_m6E690B786BAE1B09A54C477DF7590E712EB28B03 (void);
// 0x000001E8 System.Int32 WebGLSupport.WrappedInputField::get_caretPosition()
extern void WrappedInputField_get_caretPosition_m0442E4B94A45213ED0C14E329ED5B48D9B4FCACB (void);
// 0x000001E9 System.Boolean WebGLSupport.WrappedInputField::get_isFocused()
extern void WrappedInputField_get_isFocused_m925F5D979144A279B38F8BBF72A19400E0E12A9B (void);
// 0x000001EA System.Int32 WebGLSupport.WrappedInputField::get_selectionFocusPosition()
extern void WrappedInputField_get_selectionFocusPosition_mB3E56DCF3A23BAFB780395DC4074E555C9BC7862 (void);
// 0x000001EB System.Void WebGLSupport.WrappedInputField::set_selectionFocusPosition(System.Int32)
extern void WrappedInputField_set_selectionFocusPosition_m007D75E5FC9EFC925D43366AC7CC90F5BC2F520F (void);
// 0x000001EC System.Int32 WebGLSupport.WrappedInputField::get_selectionAnchorPosition()
extern void WrappedInputField_get_selectionAnchorPosition_m5732B37A50B1CE0007D1DBDE264626EBD49CF672 (void);
// 0x000001ED System.Void WebGLSupport.WrappedInputField::set_selectionAnchorPosition(System.Int32)
extern void WrappedInputField_set_selectionAnchorPosition_mD93CDEA00A2917423476CAFAD234F2C8A2513239 (void);
// 0x000001EE System.Boolean WebGLSupport.WrappedInputField::get_OnFocusSelectAll()
extern void WrappedInputField_get_OnFocusSelectAll_m4CF7B3387AC1F9DB549EF8FAD137D4EC0DC4157B (void);
// 0x000001EF System.Void WebGLSupport.WrappedInputField::.ctor(UnityEngine.UI.InputField)
extern void WrappedInputField__ctor_m2B946563DAB6C458A6D0737ACEA38353D808187D (void);
// 0x000001F0 UnityEngine.RectTransform WebGLSupport.WrappedInputField::RectTransform()
extern void WrappedInputField_RectTransform_mA42FF05237958C8C636185CBD29A2D12437985EE (void);
// 0x000001F1 System.Void WebGLSupport.WrappedInputField::ActivateInputField()
extern void WrappedInputField_ActivateInputField_mD22DD8839583C0B252D0C4AC388E2436F360D8CB (void);
// 0x000001F2 System.Void WebGLSupport.WrappedInputField::DeactivateInputField()
extern void WrappedInputField_DeactivateInputField_mABA9A5F0D9EA724AD05FDA607AFA96522A0CBBDA (void);
// 0x000001F3 System.Void WebGLSupport.WrappedInputField::Rebuild()
extern void WrappedInputField_Rebuild_mCAE68B915D4FB2F69C946C012EB1B92E8C134534 (void);
// 0x000001F4 System.Boolean WebGLSupport.WrappedTMPInputField::get_ReadOnly()
extern void WrappedTMPInputField_get_ReadOnly_mB06842447B3E03A0801B1C52A5A2B21385BE6091 (void);
// 0x000001F5 System.String WebGLSupport.WrappedTMPInputField::get_text()
extern void WrappedTMPInputField_get_text_m8EB762920F69B57AF10D9E78198A273CC0A8FC63 (void);
// 0x000001F6 System.Void WebGLSupport.WrappedTMPInputField::set_text(System.String)
extern void WrappedTMPInputField_set_text_mEA1A3B7E81E123B240A949BB414A673A9C34C7C3 (void);
// 0x000001F7 System.String WebGLSupport.WrappedTMPInputField::FixContentTypeByInputField(System.String)
extern void WrappedTMPInputField_FixContentTypeByInputField_mE5B8172CED6414B35A23DBA5A29BDFE5CDC74C4E (void);
// 0x000001F8 System.String WebGLSupport.WrappedTMPInputField::get_placeholder()
extern void WrappedTMPInputField_get_placeholder_m61AF641D161DB6B7C2DAE66A528E6FC98DF3FDED (void);
// 0x000001F9 System.Int32 WebGLSupport.WrappedTMPInputField::get_fontSize()
extern void WrappedTMPInputField_get_fontSize_m23BC3CEC22F12EB6AAD766CBC09E6F4A2ECD14DA (void);
// 0x000001FA WebGLSupport.ContentType WebGLSupport.WrappedTMPInputField::get_contentType()
extern void WrappedTMPInputField_get_contentType_m00FE1A9E02562196F113635C1A921D4E8E5D952F (void);
// 0x000001FB WebGLSupport.LineType WebGLSupport.WrappedTMPInputField::get_lineType()
extern void WrappedTMPInputField_get_lineType_mE48EAC52B1DFE718C9AB52AFE715BE10260361D0 (void);
// 0x000001FC System.Int32 WebGLSupport.WrappedTMPInputField::get_characterLimit()
extern void WrappedTMPInputField_get_characterLimit_mC1A286835AA6914B16186F413BD03134B1BE0436 (void);
// 0x000001FD System.Int32 WebGLSupport.WrappedTMPInputField::get_caretPosition()
extern void WrappedTMPInputField_get_caretPosition_m74D892B07E28EC0AF9201201A20ECA32AB690A63 (void);
// 0x000001FE System.Boolean WebGLSupport.WrappedTMPInputField::get_isFocused()
extern void WrappedTMPInputField_get_isFocused_mBB79F8A9F84DD846C3178E92E9F67A3FAD6DF925 (void);
// 0x000001FF System.Int32 WebGLSupport.WrappedTMPInputField::get_selectionFocusPosition()
extern void WrappedTMPInputField_get_selectionFocusPosition_m309580C258000773C2EA99C0E2592BC7E68108BB (void);
// 0x00000200 System.Void WebGLSupport.WrappedTMPInputField::set_selectionFocusPosition(System.Int32)
extern void WrappedTMPInputField_set_selectionFocusPosition_m172B858C30425DAAD1F128A8DF07FBEB7276E03B (void);
// 0x00000201 System.Int32 WebGLSupport.WrappedTMPInputField::get_selectionAnchorPosition()
extern void WrappedTMPInputField_get_selectionAnchorPosition_m6F635E0813809FFA8C0265C0F7671C982E3FE215 (void);
// 0x00000202 System.Void WebGLSupport.WrappedTMPInputField::set_selectionAnchorPosition(System.Int32)
extern void WrappedTMPInputField_set_selectionAnchorPosition_m2FB5C4A23633EB75DFFC0584A9ACA9485301216C (void);
// 0x00000203 System.Boolean WebGLSupport.WrappedTMPInputField::get_OnFocusSelectAll()
extern void WrappedTMPInputField_get_OnFocusSelectAll_m310978B0DDA93064749EE745F3D3A7287A96E7D6 (void);
// 0x00000204 System.Void WebGLSupport.WrappedTMPInputField::.ctor(TMPro.TMP_InputField)
extern void WrappedTMPInputField__ctor_m8F5E644E417C461955F73B4AB5556F98BCCC8657 (void);
// 0x00000205 UnityEngine.RectTransform WebGLSupport.WrappedTMPInputField::RectTransform()
extern void WrappedTMPInputField_RectTransform_m4857FF0B1AA784EDD3EDECFF9C5AEFAC63048429 (void);
// 0x00000206 System.Void WebGLSupport.WrappedTMPInputField::ActivateInputField()
extern void WrappedTMPInputField_ActivateInputField_m63F1EF6D6817490014FDF46F0E593B954E7BC12E (void);
// 0x00000207 System.Void WebGLSupport.WrappedTMPInputField::DeactivateInputField()
extern void WrappedTMPInputField_DeactivateInputField_m37015E6942E12586F31655425507B67B7DBE8759 (void);
// 0x00000208 System.Void WebGLSupport.WrappedTMPInputField::Rebuild()
extern void WrappedTMPInputField_Rebuild_m0FEB6D41142881CBF63A107E85792F457E5D932F (void);
// 0x00000209 System.Boolean WebGLSupport.WrappedTMPInputField::rectOverlaps(UnityEngine.RectTransform,UnityEngine.RectTransform)
extern void WrappedTMPInputField_rectOverlaps_mF6994651D544841E487489660B816477AE77F5E0 (void);
// 0x0000020A System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowInit()
extern void WebGLWindowPlugin_WebGLWindowInit_mD5F5FA743488693577E1C46667A6D4D9B666E6D3 (void);
// 0x0000020B System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowOnFocus(System.Action)
extern void WebGLWindowPlugin_WebGLWindowOnFocus_m9442B500174D9E18E9BC09755B16798F4F17FEAF (void);
// 0x0000020C System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowOnBlur(System.Action)
extern void WebGLWindowPlugin_WebGLWindowOnBlur_m8B642358B3D2E80F008AFA18F31CE04B4658587B (void);
// 0x0000020D System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowOnResize(System.Action)
extern void WebGLWindowPlugin_WebGLWindowOnResize_mC5F5E08082E0EE9AFD3FF7E555BCEC39DF1C728F (void);
// 0x0000020E System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowInjectFullscreen()
extern void WebGLWindowPlugin_WebGLWindowInjectFullscreen_mFC44BE99F4C870D576B3798BF7582D82C5EC9BE0 (void);
// 0x0000020F System.Void WebGLSupport.WebGLWindow::.cctor()
extern void WebGLWindow__cctor_mD6D063FD4C42BB7305BA8F3D460AD0E9C9B04032 (void);
// 0x00000210 System.Boolean WebGLSupport.WebGLWindow::get_Focus()
extern void WebGLWindow_get_Focus_m894316869DC5C4E813F3B167AA4F2FD19B988C7A (void);
// 0x00000211 System.Void WebGLSupport.WebGLWindow::set_Focus(System.Boolean)
extern void WebGLWindow_set_Focus_mDB67CFFBB4E4FC1B53C4EA7786B43B1D41DCEF0F (void);
// 0x00000212 System.Void WebGLSupport.WebGLWindow::add_OnFocusEvent(System.Action)
extern void WebGLWindow_add_OnFocusEvent_mEB4B84D9D2CBEB713DD41B6BD5B999A787685CAF (void);
// 0x00000213 System.Void WebGLSupport.WebGLWindow::remove_OnFocusEvent(System.Action)
extern void WebGLWindow_remove_OnFocusEvent_mA0BCADA00CFEFAF2DB534CB7B56E3B4C44287D96 (void);
// 0x00000214 System.Void WebGLSupport.WebGLWindow::add_OnBlurEvent(System.Action)
extern void WebGLWindow_add_OnBlurEvent_mF314D905439790B708240F19A3232F3A1ACE08A0 (void);
// 0x00000215 System.Void WebGLSupport.WebGLWindow::remove_OnBlurEvent(System.Action)
extern void WebGLWindow_remove_OnBlurEvent_m5D47004D38D5EF44EFC946DCC65468BACC4D2880 (void);
// 0x00000216 System.Void WebGLSupport.WebGLWindow::add_OnResizeEvent(System.Action)
extern void WebGLWindow_add_OnResizeEvent_m706090D11DF1E6B94211AB492B08D1635855A9DD (void);
// 0x00000217 System.Void WebGLSupport.WebGLWindow::remove_OnResizeEvent(System.Action)
extern void WebGLWindow_remove_OnResizeEvent_m09D49FF0B6B215CFF896CA7EFCF10F6FE29B9914 (void);
// 0x00000218 System.Void WebGLSupport.WebGLWindow::Init()
extern void WebGLWindow_Init_mBDC66BECBD8FFEB0465EBEDF58D1BB1F160AAF3D (void);
// 0x00000219 System.Void WebGLSupport.WebGLWindow::OnWindowFocus()
extern void WebGLWindow_OnWindowFocus_m175353D303C2E8EB07A2679015D269E0F3623C3D (void);
// 0x0000021A System.Void WebGLSupport.WebGLWindow::OnWindowBlur()
extern void WebGLWindow_OnWindowBlur_m0CF09BA6693BCDA3D073A368AB81A46122449FF4 (void);
// 0x0000021B System.Void WebGLSupport.WebGLWindow::OnWindowResize()
extern void WebGLWindow_OnWindowResize_m386294E41E1A89D8BB052E42ED30972194B8356C (void);
// 0x0000021C System.Void WebGLSupport.WebGLWindow::RuntimeInitializeOnLoadMethod()
extern void WebGLWindow_RuntimeInitializeOnLoadMethod_mFF4BD1C75805AA70FE8476EDEA4ACBF8990C450A (void);
// 0x0000021D System.Void WebGLSupport.WebGLWindow/<>c::.cctor()
extern void U3CU3Ec__cctor_mBDAF04B08BE41CD35C3AA8527E0454027333E236 (void);
// 0x0000021E System.Void WebGLSupport.WebGLWindow/<>c::.ctor()
extern void U3CU3Ec__ctor_m2E40A16646D4972F915BC91A028BD57A17F2A2FD (void);
// 0x0000021F System.Void WebGLSupport.WebGLWindow/<>c::<.cctor>b__0_0()
extern void U3CU3Ec_U3C_cctorU3Eb__0_0_mA834CD175B5C7F0A819FC27C2F1CA8B939CB4443 (void);
// 0x00000220 System.Void WebGLSupport.WebGLWindow/<>c::<.cctor>b__0_1()
extern void U3CU3Ec_U3C_cctorU3Eb__0_1_m9AC71766017F7002DE0CA1112BDFBA4135C2E8B8 (void);
// 0x00000221 System.Void WebGLSupport.WebGLWindow/<>c::<.cctor>b__0_2()
extern void U3CU3Ec_U3C_cctorU3Eb__0_2_mC9844ED32160A6274225CBB20AC765E202E53CC8 (void);
// 0x00000222 System.Void WebGLSupport.Detail.RebuildChecker::.ctor(WebGLSupport.IInputField)
extern void RebuildChecker__ctor_m8AC1AAB23BC3D1220610838BEBA8BED02A54CA9A (void);
// 0x00000223 System.Boolean WebGLSupport.Detail.RebuildChecker::NeedRebuild(System.Boolean)
extern void RebuildChecker_NeedRebuild_mCBB5465AEB51A0559BAF7B4A5A25C843D027AA63 (void);
// 0x00000224 System.Void codebase.utility.Clipboard::Copy(System.String)
extern void Clipboard_Copy_mED1E74A99DFEF4ACFD652DEFFC62B9664374F3C1 (void);
// 0x00000225 System.Byte[] Merkator.BitCoin.Base58Encoding::AddCheckSum(System.Byte[])
extern void Base58Encoding_AddCheckSum_mAACF51264A8660C9AB635BBA4E54E6E8A4063B7B (void);
// 0x00000226 System.Byte[] Merkator.BitCoin.Base58Encoding::VerifyAndRemoveCheckSum(System.Byte[])
extern void Base58Encoding_VerifyAndRemoveCheckSum_m20C2BA2CCB753F35D0FCE4664C1F29676255F50D (void);
// 0x00000227 System.String Merkator.BitCoin.Base58Encoding::Encode(System.Byte[])
extern void Base58Encoding_Encode_m5C58E4749FE9E801743DB17A520E975BE8876578 (void);
// 0x00000228 System.String Merkator.BitCoin.Base58Encoding::EncodeWithCheckSum(System.Byte[])
extern void Base58Encoding_EncodeWithCheckSum_m39AF1DD16D1765EBD85F983530A4D6608C34113C (void);
// 0x00000229 System.Byte[] Merkator.BitCoin.Base58Encoding::Decode(System.String)
extern void Base58Encoding_Decode_m1D4402B734182E7F62A3E7795E7856D75AD076FA (void);
// 0x0000022A System.Byte[] Merkator.BitCoin.Base58Encoding::DecodeWithCheckSum(System.String)
extern void Base58Encoding_DecodeWithCheckSum_m1BA6820908ADD5A572D7A6564277EB6DC6534A86 (void);
// 0x0000022B System.Byte[] Merkator.BitCoin.Base58Encoding::GetCheckSum(System.Byte[])
extern void Base58Encoding_GetCheckSum_m434B54BA58490F0251A0051BA9F7AC6DC420F7E8 (void);
// 0x0000022C System.Void Merkator.BitCoin.Base58Encoding/<>c::.cctor()
extern void U3CU3Ec__cctor_m39566B9A3242011881BA9B25314FB60E28CBD938 (void);
// 0x0000022D System.Void Merkator.BitCoin.Base58Encoding/<>c::.ctor()
extern void U3CU3Ec__ctor_m6A52DA16A0EFBD0B5B37AC7769AFD90148EBDF32 (void);
// 0x0000022E System.Numerics.BigInteger Merkator.BitCoin.Base58Encoding/<>c::<Encode>b__4_0(System.Numerics.BigInteger,System.Byte)
extern void U3CU3Ec_U3CEncodeU3Eb__4_0_m84A9D74001D0DCA47FD705B4E762165026F080A9 (void);
// 0x0000022F System.Boolean Merkator.BitCoin.Base58Encoding/<>c::<Decode>b__6_0(System.Char)
extern void U3CU3Ec_U3CDecodeU3Eb__6_0_mF12D53D897CA871076F8EB2CDE6AABFE9C779D0E (void);
// 0x00000230 System.Boolean Merkator.BitCoin.Base58Encoding/<>c::<Decode>b__6_1(System.Byte)
extern void U3CU3Ec_U3CDecodeU3Eb__6_1_mD660697A18C9CE0AE9B5B9886C40FACCF4C9F9EB (void);
// 0x00000231 T[] Merkator.Tools.ArrayHelpers::ConcatArrays(T[][])
// 0x00000232 T[] Merkator.Tools.ArrayHelpers::ConcatArrays(T[],T[])
// 0x00000233 T[] Merkator.Tools.ArrayHelpers::SubArray(T[],System.Int32,System.Int32)
// 0x00000234 T[] Merkator.Tools.ArrayHelpers::SubArray(T[],System.Int32)
// 0x00000235 System.Void Merkator.Tools.ArrayHelpers::.ctor()
extern void ArrayHelpers__ctor_m41FB4847AE5F2FA1031560016A2CA56FE3791B7B (void);
// 0x00000236 System.Void Merkator.Tools.ArrayHelpers/<>c__0`1::.cctor()
// 0x00000237 System.Void Merkator.Tools.ArrayHelpers/<>c__0`1::.ctor()
// 0x00000238 System.Int32 Merkator.Tools.ArrayHelpers/<>c__0`1::<ConcatArrays>b__0_0(T[])
// 0x00000239 System.Void CandyMachineV2.CandyMachineClient::.ctor(Solana.Unity.Rpc.IRpcClient,Solana.Unity.Rpc.IStreamingRpcClient,Solana.Unity.Wallet.PublicKey)
extern void CandyMachineClient__ctor_m77D50584B968AEE061109A29ABE49EE3B2D35BD0 (void);
// 0x0000023A System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.ProgramAccountsResultWrapper`1<System.Collections.Generic.List`1<CandyMachineV2.Accounts.CandyMachine>>> CandyMachineV2.CandyMachineClient::GetCandyMachinesAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void CandyMachineClient_GetCandyMachinesAsync_m7D66A3DFE54D257039DB17CA0C769765D42DD243 (void);
// 0x0000023B System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<CandyMachineV2.Accounts.CandyMachine>> CandyMachineV2.CandyMachineClient::GetCandyMachineAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void CandyMachineClient_GetCandyMachineAsync_mF753C9D5BB8B940E5ADA41EEE02D1BB69F66D7FA (void);
// 0x0000023C System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<CandyMachineV2.Accounts.CollectionPDA>> CandyMachineV2.CandyMachineClient::GetCollectionPDAAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void CandyMachineClient_GetCollectionPDAAsync_mD55675F89BBF66E8DFFA2A066FF3C3F75DEA3385 (void);
// 0x0000023D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> CandyMachineV2.CandyMachineClient::SubscribeCandyMachineAsync(System.String,System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,CandyMachineV2.Accounts.CandyMachine>,Solana.Unity.Rpc.Types.Commitment)
extern void CandyMachineClient_SubscribeCandyMachineAsync_mB704C8A1531CE457E9B84248EB7E588D0B71F1B3 (void);
// 0x0000023E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> CandyMachineV2.CandyMachineClient::SubscribeCollectionPDAAsync(System.String,System.Action`3<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,CandyMachineV2.Accounts.CollectionPDA>,Solana.Unity.Rpc.Types.Commitment)
extern void CandyMachineClient_SubscribeCollectionPDAAsync_mEA0DA21623371722F0569BD794C7A5D7CC074FB0 (void);
// 0x0000023F System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> CandyMachineV2.CandyMachineClient::SendMintNftAsync(CandyMachineV2.Program.MintNftAccounts,System.Byte,Solana.Unity.Wallet.PublicKey,System.Func`3<System.Byte[],Solana.Unity.Wallet.PublicKey,System.Byte[]>,Solana.Unity.Wallet.PublicKey)
extern void CandyMachineClient_SendMintNftAsync_m64E48F9F47730DAE224B17BF607072C218E15822 (void);
// 0x00000240 System.Collections.Generic.Dictionary`2<System.UInt32,Solana.Unity.Programs.Abstract.ProgramError`1<CandyMachineV2.Errors.CandyMachineErrorKind>> CandyMachineV2.CandyMachineClient::BuildErrorsDictionary()
extern void CandyMachineClient_BuildErrorsDictionary_m21783F57D8D1DDBC741F0916F0127817D5224A1C (void);
// 0x00000241 System.Void CandyMachineV2.CandyMachineClient/<>c::.cctor()
extern void U3CU3Ec__cctor_mBB783E7383FC156137471B21E4D48069B8507601 (void);
// 0x00000242 System.Void CandyMachineV2.CandyMachineClient/<>c::.ctor()
extern void U3CU3Ec__ctor_mE9AF28A70283831B5BD9CD33A0DE16F44663386E (void);
// 0x00000243 CandyMachineV2.Accounts.CandyMachine CandyMachineV2.CandyMachineClient/<>c::<GetCandyMachinesAsync>b__1_0(Solana.Unity.Rpc.Models.AccountKeyPair)
extern void U3CU3Ec_U3CGetCandyMachinesAsyncU3Eb__1_0_mF64B3406FB428CF7D3316134D58534CF67CEFF36 (void);
// 0x00000244 System.Void CandyMachineV2.CandyMachineClient/<GetCandyMachinesAsync>d__1::MoveNext()
extern void U3CGetCandyMachinesAsyncU3Ed__1_MoveNext_mC98E7DD9719DCDF24C757BA23D24E7A1789BF895 (void);
// 0x00000245 System.Void CandyMachineV2.CandyMachineClient/<GetCandyMachinesAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetCandyMachinesAsyncU3Ed__1_SetStateMachine_m88AF176D5CE419FA1196AC1CCCA8E32A6E65EF25 (void);
// 0x00000246 System.Void CandyMachineV2.CandyMachineClient/<GetCandyMachineAsync>d__2::MoveNext()
extern void U3CGetCandyMachineAsyncU3Ed__2_MoveNext_mFC37003A6D53CDC18228729B1B6B8D192B6B2768 (void);
// 0x00000247 System.Void CandyMachineV2.CandyMachineClient/<GetCandyMachineAsync>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetCandyMachineAsyncU3Ed__2_SetStateMachine_mF1A6418D5CDD4F5803461FE33BCD5374E37A7519 (void);
// 0x00000248 System.Void CandyMachineV2.CandyMachineClient/<GetCollectionPDAAsync>d__3::MoveNext()
extern void U3CGetCollectionPDAAsyncU3Ed__3_MoveNext_mBE40A45ACB2B472EC9F1B3E89A06638C00A1E74D (void);
// 0x00000249 System.Void CandyMachineV2.CandyMachineClient/<GetCollectionPDAAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetCollectionPDAAsyncU3Ed__3_SetStateMachine_m0D6360FFD9ED63157B2F75890EBECA21A4FD54D2 (void);
// 0x0000024A System.Void CandyMachineV2.CandyMachineClient/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mB565BB68E35E4E386277883D55557B03F83D689F (void);
// 0x0000024B System.Void CandyMachineV2.CandyMachineClient/<>c__DisplayClass4_0::<SubscribeCandyMachineAsync>b__0(Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>)
extern void U3CU3Ec__DisplayClass4_0_U3CSubscribeCandyMachineAsyncU3Eb__0_m1A4A8E30B6E7AF53B34D5351CE1EA5F58D770582 (void);
// 0x0000024C System.Void CandyMachineV2.CandyMachineClient/<SubscribeCandyMachineAsync>d__4::MoveNext()
extern void U3CSubscribeCandyMachineAsyncU3Ed__4_MoveNext_m89DB139C0F8F6FE184AC65BC9F25E50140D112A0 (void);
// 0x0000024D System.Void CandyMachineV2.CandyMachineClient/<SubscribeCandyMachineAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeCandyMachineAsyncU3Ed__4_SetStateMachine_m1F311CCC52CC02BCADE966A88A0B3DC411B5717D (void);
// 0x0000024E System.Void CandyMachineV2.CandyMachineClient/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m31E063A754637152380EB8A399F37249ECB09F4F (void);
// 0x0000024F System.Void CandyMachineV2.CandyMachineClient/<>c__DisplayClass5_0::<SubscribeCollectionPDAAsync>b__0(Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>)
extern void U3CU3Ec__DisplayClass5_0_U3CSubscribeCollectionPDAAsyncU3Eb__0_m5F79AA9A19729941EFA1044E8A91EB5E34F89793 (void);
// 0x00000250 System.Void CandyMachineV2.CandyMachineClient/<SubscribeCollectionPDAAsync>d__5::MoveNext()
extern void U3CSubscribeCollectionPDAAsyncU3Ed__5_MoveNext_m281BD931AA9C2C975FB38A3BCFBC99E500E45D2C (void);
// 0x00000251 System.Void CandyMachineV2.CandyMachineClient/<SubscribeCollectionPDAAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeCollectionPDAAsyncU3Ed__5_SetStateMachine_m014EDD4FE5D498FCB6A06A10FEB27628596054FD (void);
// 0x00000252 System.Void CandyMachineV2.CandyMachineClient/<SendMintNftAsync>d__6::MoveNext()
extern void U3CSendMintNftAsyncU3Ed__6_MoveNext_m7309DA5D99C16C0D2DA18CF02600D2A851704C40 (void);
// 0x00000253 System.Void CandyMachineV2.CandyMachineClient/<SendMintNftAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendMintNftAsyncU3Ed__6_SetStateMachine_m0DBD07EECE42CF066221C3EE68C44B43434D9095 (void);
// 0x00000254 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> CandyMachineV2.CandyMachineUtils::MintOneToken(Solana.Unity.Wallet.Account,Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.IRpcClient)
extern void CandyMachineUtils_MintOneToken_m7CDDC90BB0920A0CF9B720BFD3BC08F5E5506073 (void);
// 0x00000255 Solana.Unity.Wallet.PublicKey CandyMachineV2.CandyMachineUtils::getMasterEdition(Solana.Unity.Wallet.PublicKey)
extern void CandyMachineUtils_getMasterEdition_mCBCA388EDEC4FDFFF455DF5FF789FF5EE5EB345E (void);
// 0x00000256 Solana.Unity.Wallet.PublicKey CandyMachineV2.CandyMachineUtils::getMetadata(Solana.Unity.Wallet.PublicKey)
extern void CandyMachineUtils_getMetadata_m15EC7FA67CF04D33DF44D624740AA0F2BBDCBBF6 (void);
// 0x00000257 System.ValueTuple`2<Solana.Unity.Wallet.PublicKey,System.Byte> CandyMachineV2.CandyMachineUtils::getCandyMachineCreator(Solana.Unity.Wallet.PublicKey)
extern void CandyMachineUtils_getCandyMachineCreator_m2F210C106A5F314535F7DAF30C4D6DAAAD94C37A (void);
// 0x00000258 System.Void CandyMachineV2.CandyMachineUtils::.cctor()
extern void CandyMachineUtils__cctor_m2357FF969C3CF53EB255C300A7B38541421E89AE (void);
// 0x00000259 System.Void CandyMachineV2.CandyMachineUtils/<MintOneToken>d__3::MoveNext()
extern void U3CMintOneTokenU3Ed__3_MoveNext_m711C0CD237DDC3F09AEAA1606F47439041A70860 (void);
// 0x0000025A System.Void CandyMachineV2.CandyMachineUtils/<MintOneToken>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CMintOneTokenU3Ed__3_SetStateMachine_m205BE2E1DBC8EE60D7E68DF003AC66C559601F66 (void);
// 0x0000025B Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_CandyMachine()
extern void MintNftAccounts_get_CandyMachine_m25005412BAA22D4698398BFA5598C7A0F93B26D3 (void);
// 0x0000025C System.Void CandyMachineV2.Program.MintNftAccounts::set_CandyMachine(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_CandyMachine_mCB13A6685DDBE5069702A4CE839D2A4036634A82 (void);
// 0x0000025D Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_CandyMachineCreator()
extern void MintNftAccounts_get_CandyMachineCreator_m5D8802563A95E407D3D53F53092B056F20B17A47 (void);
// 0x0000025E System.Void CandyMachineV2.Program.MintNftAccounts::set_CandyMachineCreator(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_CandyMachineCreator_m5F38D129E6206E5CDD2D4291DCB661140784AF49 (void);
// 0x0000025F Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_Payer()
extern void MintNftAccounts_get_Payer_m55ADB59BB1CB5617FB5C058CA10E7E2B0242E0E2 (void);
// 0x00000260 System.Void CandyMachineV2.Program.MintNftAccounts::set_Payer(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_Payer_m570D1CF4CD1D59DC368DBE0336F84A6D9121667C (void);
// 0x00000261 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_Wallet()
extern void MintNftAccounts_get_Wallet_m4E20FB2A0AB637794A5C4BC0849BD140AB2A0C31 (void);
// 0x00000262 System.Void CandyMachineV2.Program.MintNftAccounts::set_Wallet(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_Wallet_mFD9BA724D03D22B228E8E8BC008E51565C24BDCC (void);
// 0x00000263 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_Metadata()
extern void MintNftAccounts_get_Metadata_m22E96406C59D1A82CD22DAE3E4245D0437C7A7E2 (void);
// 0x00000264 System.Void CandyMachineV2.Program.MintNftAccounts::set_Metadata(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_Metadata_m08883783133F89F47BC9D2C8F4E626BB2443614A (void);
// 0x00000265 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_Mint()
extern void MintNftAccounts_get_Mint_m1167D09B7537408B5F4CD2BD154B7ECD40E1371D (void);
// 0x00000266 System.Void CandyMachineV2.Program.MintNftAccounts::set_Mint(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_Mint_mA920F099C582BD3E0CD94C310D01D7D4C17AF73E (void);
// 0x00000267 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_MintAuthority()
extern void MintNftAccounts_get_MintAuthority_m932EF235D1BDD54F1A51117CBB739F7730781492 (void);
// 0x00000268 System.Void CandyMachineV2.Program.MintNftAccounts::set_MintAuthority(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_MintAuthority_m4BC1A030B0448D7E1C9273F3467F2F0D8DCD837B (void);
// 0x00000269 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_UpdateAuthority()
extern void MintNftAccounts_get_UpdateAuthority_mA726787BEECDD66B0ECE429C3F2E758FBF29ECE0 (void);
// 0x0000026A System.Void CandyMachineV2.Program.MintNftAccounts::set_UpdateAuthority(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_UpdateAuthority_mA8B6B45B1111DEB1F1B679658BE9257A810B8788 (void);
// 0x0000026B Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_MasterEdition()
extern void MintNftAccounts_get_MasterEdition_m17A6C5CD22EFE6FC20B5CE9E16199A5716B512E1 (void);
// 0x0000026C System.Void CandyMachineV2.Program.MintNftAccounts::set_MasterEdition(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_MasterEdition_m9F0522662F1F0C6E6306A67092496B29FC60970B (void);
// 0x0000026D Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_TokenMetadataProgram()
extern void MintNftAccounts_get_TokenMetadataProgram_mC09D178EE68E95B7A730E800A8765D741B1464BF (void);
// 0x0000026E System.Void CandyMachineV2.Program.MintNftAccounts::set_TokenMetadataProgram(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_TokenMetadataProgram_m753F55575D09385973438A0D236A50FCFBA31151 (void);
// 0x0000026F Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_TokenProgram()
extern void MintNftAccounts_get_TokenProgram_mCA7F846D5486A99E1DF4E36031F21CE0150EBADA (void);
// 0x00000270 System.Void CandyMachineV2.Program.MintNftAccounts::set_TokenProgram(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_TokenProgram_m30A9B8D7DEE706E06FEACF0FCBADD1DEF4244BE9 (void);
// 0x00000271 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_SystemProgram()
extern void MintNftAccounts_get_SystemProgram_mD1E57A3AA399C19DF47E3C1DE4E1DA27777CB1E6 (void);
// 0x00000272 System.Void CandyMachineV2.Program.MintNftAccounts::set_SystemProgram(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_SystemProgram_m16A99F7B2446BA895AAD0F84D3E9EAFE93933134 (void);
// 0x00000273 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_Rent()
extern void MintNftAccounts_get_Rent_mB667205850D48FC0598490B409F5A9EB907E040B (void);
// 0x00000274 System.Void CandyMachineV2.Program.MintNftAccounts::set_Rent(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_Rent_mD74D8C604155916AC7A40C237C50982C950752E7 (void);
// 0x00000275 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_Clock()
extern void MintNftAccounts_get_Clock_mBEC6EE80F63C69184A0C57F571BDE0E87470C8AC (void);
// 0x00000276 System.Void CandyMachineV2.Program.MintNftAccounts::set_Clock(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_Clock_m506A35C4C1F7D15C91B92D2EC6D13821250A3AFA (void);
// 0x00000277 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_RecentBlockhashes()
extern void MintNftAccounts_get_RecentBlockhashes_mFFD44D71C48FA8C9206C593DBCFA27128B694A05 (void);
// 0x00000278 System.Void CandyMachineV2.Program.MintNftAccounts::set_RecentBlockhashes(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_RecentBlockhashes_mEFAE3CB3E34D700A94C9D2F38ED8FA89E6D3FC0A (void);
// 0x00000279 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.MintNftAccounts::get_InstructionSysvarAccount()
extern void MintNftAccounts_get_InstructionSysvarAccount_mF1F687EA28C91AB18B6DE227876D447789F15AF4 (void);
// 0x0000027A System.Void CandyMachineV2.Program.MintNftAccounts::set_InstructionSysvarAccount(Solana.Unity.Wallet.PublicKey)
extern void MintNftAccounts_set_InstructionSysvarAccount_m67045C9C58F058086FF0A2544D3F2E58DCD4B647 (void);
// 0x0000027B System.Void CandyMachineV2.Program.MintNftAccounts::.ctor()
extern void MintNftAccounts__ctor_m7AE43C510CFE0AF8E90E720843EC63C0EDACBBAB (void);
// 0x0000027C Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.UpdateCandyMachineAccounts::get_CandyMachine()
extern void UpdateCandyMachineAccounts_get_CandyMachine_m39D23B6C643AF99E8DCFCCF7C75FB914955C7C43 (void);
// 0x0000027D System.Void CandyMachineV2.Program.UpdateCandyMachineAccounts::set_CandyMachine(Solana.Unity.Wallet.PublicKey)
extern void UpdateCandyMachineAccounts_set_CandyMachine_mA9C82DAF0E54FFAF95074813EEFA10CEAB0F8399 (void);
// 0x0000027E Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.UpdateCandyMachineAccounts::get_Authority()
extern void UpdateCandyMachineAccounts_get_Authority_m96369DE6AE28794B061C2E8EB6B88910922CEAB5 (void);
// 0x0000027F System.Void CandyMachineV2.Program.UpdateCandyMachineAccounts::set_Authority(Solana.Unity.Wallet.PublicKey)
extern void UpdateCandyMachineAccounts_set_Authority_m8EB3BD83D628278D1B4F8E5D74BD52AB93939880 (void);
// 0x00000280 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.UpdateCandyMachineAccounts::get_Wallet()
extern void UpdateCandyMachineAccounts_get_Wallet_m6EC342B98E863018D4D2B6F2A4329E855D29C419 (void);
// 0x00000281 System.Void CandyMachineV2.Program.UpdateCandyMachineAccounts::set_Wallet(Solana.Unity.Wallet.PublicKey)
extern void UpdateCandyMachineAccounts_set_Wallet_mD59AC5B32242AD9919A83816AC94E116D6006666 (void);
// 0x00000282 System.Void CandyMachineV2.Program.UpdateCandyMachineAccounts::.ctor()
extern void UpdateCandyMachineAccounts__ctor_m1C0469ABA8817DE82E00A12EDB4323A22B95FAAB (void);
// 0x00000283 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.AddConfigLinesAccounts::get_CandyMachine()
extern void AddConfigLinesAccounts_get_CandyMachine_mC95215669EE33783489DA2D0220F28BB0E77983C (void);
// 0x00000284 System.Void CandyMachineV2.Program.AddConfigLinesAccounts::set_CandyMachine(Solana.Unity.Wallet.PublicKey)
extern void AddConfigLinesAccounts_set_CandyMachine_m557EA6FFED05F8AEAF6F697A7344489C793675AC (void);
// 0x00000285 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.AddConfigLinesAccounts::get_Authority()
extern void AddConfigLinesAccounts_get_Authority_m52A198AFD148C5BB7E0834DA73CC960A07D60250 (void);
// 0x00000286 System.Void CandyMachineV2.Program.AddConfigLinesAccounts::set_Authority(Solana.Unity.Wallet.PublicKey)
extern void AddConfigLinesAccounts_set_Authority_m49044132FAC1E18D5C16C978943589A282D9DFE7 (void);
// 0x00000287 System.Void CandyMachineV2.Program.AddConfigLinesAccounts::.ctor()
extern void AddConfigLinesAccounts__ctor_m3DB252ABF9EB8BCD09FA5439857E28AA47AF45BD (void);
// 0x00000288 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.InitializeCandyMachineAccounts::get_CandyMachine()
extern void InitializeCandyMachineAccounts_get_CandyMachine_mBD43FC16E71FBC5FA2412BA7C0796646AB9A4489 (void);
// 0x00000289 System.Void CandyMachineV2.Program.InitializeCandyMachineAccounts::set_CandyMachine(Solana.Unity.Wallet.PublicKey)
extern void InitializeCandyMachineAccounts_set_CandyMachine_mED9E9E8C13B50E3C55666C20E942C8FC34326979 (void);
// 0x0000028A Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.InitializeCandyMachineAccounts::get_Wallet()
extern void InitializeCandyMachineAccounts_get_Wallet_m92DC51DC9153541406C16E5742BEBB258F85058B (void);
// 0x0000028B System.Void CandyMachineV2.Program.InitializeCandyMachineAccounts::set_Wallet(Solana.Unity.Wallet.PublicKey)
extern void InitializeCandyMachineAccounts_set_Wallet_mDD723439AA146C48EEED78A1DD32B01329213A7F (void);
// 0x0000028C Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.InitializeCandyMachineAccounts::get_Authority()
extern void InitializeCandyMachineAccounts_get_Authority_m19F18EC63117C7762302E13F0E2AF71220311633 (void);
// 0x0000028D System.Void CandyMachineV2.Program.InitializeCandyMachineAccounts::set_Authority(Solana.Unity.Wallet.PublicKey)
extern void InitializeCandyMachineAccounts_set_Authority_m4407D7DE44911A1135182F0ADC88D8CA47F34772 (void);
// 0x0000028E Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.InitializeCandyMachineAccounts::get_Payer()
extern void InitializeCandyMachineAccounts_get_Payer_mCDADC88E02366C6D725C09A642F76D299E66E023 (void);
// 0x0000028F System.Void CandyMachineV2.Program.InitializeCandyMachineAccounts::set_Payer(Solana.Unity.Wallet.PublicKey)
extern void InitializeCandyMachineAccounts_set_Payer_m0E2B6AD1CAD2A6DAB13A8CBE0718748C03733FD5 (void);
// 0x00000290 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.InitializeCandyMachineAccounts::get_SystemProgram()
extern void InitializeCandyMachineAccounts_get_SystemProgram_m6C76B8A1B640D0FB9FE48DF9AC308D9C30BA43A5 (void);
// 0x00000291 System.Void CandyMachineV2.Program.InitializeCandyMachineAccounts::set_SystemProgram(Solana.Unity.Wallet.PublicKey)
extern void InitializeCandyMachineAccounts_set_SystemProgram_mE1D8A8EEC5ED1D681C867FB58574C8E8BB25253F (void);
// 0x00000292 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.InitializeCandyMachineAccounts::get_Rent()
extern void InitializeCandyMachineAccounts_get_Rent_m898184127D50B700AB29C5BF1C95ACF79A0F33FE (void);
// 0x00000293 System.Void CandyMachineV2.Program.InitializeCandyMachineAccounts::set_Rent(Solana.Unity.Wallet.PublicKey)
extern void InitializeCandyMachineAccounts_set_Rent_mD00D9A78195375F52FFCC159D3932825DBE89B91 (void);
// 0x00000294 System.Void CandyMachineV2.Program.InitializeCandyMachineAccounts::.ctor()
extern void InitializeCandyMachineAccounts__ctor_m8F9099EB935B15D9FFF93FB6F9EF45DE20A272FC (void);
// 0x00000295 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.SetCollectionAccounts::get_CandyMachine()
extern void SetCollectionAccounts_get_CandyMachine_m9499E0D6A429D815F739F9C053A87E476EC0B670 (void);
// 0x00000296 System.Void CandyMachineV2.Program.SetCollectionAccounts::set_CandyMachine(Solana.Unity.Wallet.PublicKey)
extern void SetCollectionAccounts_set_CandyMachine_m408E0507075D7D485AACFE33E3E40DBC4C6779D7 (void);
// 0x00000297 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.SetCollectionAccounts::get_Authority()
extern void SetCollectionAccounts_get_Authority_m892CB17EA919BC2EC9D759682F75402551BC9A72 (void);
// 0x00000298 System.Void CandyMachineV2.Program.SetCollectionAccounts::set_Authority(Solana.Unity.Wallet.PublicKey)
extern void SetCollectionAccounts_set_Authority_mF8A4BE11A4196A7970211F56F09C9A5BD2B5AFF3 (void);
// 0x00000299 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.SetCollectionAccounts::get_CollectionPda()
extern void SetCollectionAccounts_get_CollectionPda_mF6B46905FF46217C600C75F48202C25FEB798203 (void);
// 0x0000029A System.Void CandyMachineV2.Program.SetCollectionAccounts::set_CollectionPda(Solana.Unity.Wallet.PublicKey)
extern void SetCollectionAccounts_set_CollectionPda_m6CC6F35496241F80E0045D8C1C6CC9A154C74623 (void);
// 0x0000029B Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.SetCollectionAccounts::get_Payer()
extern void SetCollectionAccounts_get_Payer_mACCDEF338529198A5A0441AA5F067EB29E328A85 (void);
// 0x0000029C System.Void CandyMachineV2.Program.SetCollectionAccounts::set_Payer(Solana.Unity.Wallet.PublicKey)
extern void SetCollectionAccounts_set_Payer_mB0FE622548A74E61163F023F573614A3AA6720B3 (void);
// 0x0000029D Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.SetCollectionAccounts::get_SystemProgram()
extern void SetCollectionAccounts_get_SystemProgram_m9F70580567E2466AC43771D8E1A58500663E232F (void);
// 0x0000029E System.Void CandyMachineV2.Program.SetCollectionAccounts::set_SystemProgram(Solana.Unity.Wallet.PublicKey)
extern void SetCollectionAccounts_set_SystemProgram_m2AEDDE2B2116DF8300F49497E29D168F32EA2BAD (void);
// 0x0000029F Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.SetCollectionAccounts::get_Rent()
extern void SetCollectionAccounts_get_Rent_m39232D1F645A4B542749FF0E8EE739488D227F75 (void);
// 0x000002A0 System.Void CandyMachineV2.Program.SetCollectionAccounts::set_Rent(Solana.Unity.Wallet.PublicKey)
extern void SetCollectionAccounts_set_Rent_m6A6AC936448155F02CCD8ECAE359745E99B65A7C (void);
// 0x000002A1 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.SetCollectionAccounts::get_Metadata()
extern void SetCollectionAccounts_get_Metadata_mB3B86006A96AF22D4B503928025E9E787734E55E (void);
// 0x000002A2 System.Void CandyMachineV2.Program.SetCollectionAccounts::set_Metadata(Solana.Unity.Wallet.PublicKey)
extern void SetCollectionAccounts_set_Metadata_m1D5A58455D9AAFA3D4DB7A476788CABAB92221BF (void);
// 0x000002A3 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.SetCollectionAccounts::get_Mint()
extern void SetCollectionAccounts_get_Mint_mCF8207BF07C520CF3BD8968FB21137C35E547879 (void);
// 0x000002A4 System.Void CandyMachineV2.Program.SetCollectionAccounts::set_Mint(Solana.Unity.Wallet.PublicKey)
extern void SetCollectionAccounts_set_Mint_m12838EDD0B2977BB07C786479B7FC4CEB78BE8C3 (void);
// 0x000002A5 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.SetCollectionAccounts::get_Edition()
extern void SetCollectionAccounts_get_Edition_mFA2B9639BDE0A7BEBD6213ED27A1468E0683076A (void);
// 0x000002A6 System.Void CandyMachineV2.Program.SetCollectionAccounts::set_Edition(Solana.Unity.Wallet.PublicKey)
extern void SetCollectionAccounts_set_Edition_m168A8D482CAF31901E90055CA0F21C5608A4F114 (void);
// 0x000002A7 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.SetCollectionAccounts::get_CollectionAuthorityRecord()
extern void SetCollectionAccounts_get_CollectionAuthorityRecord_m68E57F5E19D5FEAE75BF579700CE73DBC9435F2D (void);
// 0x000002A8 System.Void CandyMachineV2.Program.SetCollectionAccounts::set_CollectionAuthorityRecord(Solana.Unity.Wallet.PublicKey)
extern void SetCollectionAccounts_set_CollectionAuthorityRecord_m4A40A468617CA0ECE13D9674E10CFCE9BEB3019E (void);
// 0x000002A9 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.SetCollectionAccounts::get_TokenMetadataProgram()
extern void SetCollectionAccounts_get_TokenMetadataProgram_mFFE2C950CA0C9888A4CAE0D182C2D69C199F2937 (void);
// 0x000002AA System.Void CandyMachineV2.Program.SetCollectionAccounts::set_TokenMetadataProgram(Solana.Unity.Wallet.PublicKey)
extern void SetCollectionAccounts_set_TokenMetadataProgram_mC548C236FCB6D045B3B7385A3BEA5F402F54B557 (void);
// 0x000002AB System.Void CandyMachineV2.Program.SetCollectionAccounts::.ctor()
extern void SetCollectionAccounts__ctor_mBC51F8179F6592A119C07A17F37815445E1C7450 (void);
// 0x000002AC Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.RemoveCollectionAccounts::get_CandyMachine()
extern void RemoveCollectionAccounts_get_CandyMachine_mE5F0E2CC8DC60A5930DCB9BD481FF53101EF0AE3 (void);
// 0x000002AD System.Void CandyMachineV2.Program.RemoveCollectionAccounts::set_CandyMachine(Solana.Unity.Wallet.PublicKey)
extern void RemoveCollectionAccounts_set_CandyMachine_m0F2814D6D76E000D0A4DB3CA8DD93FE632420B8C (void);
// 0x000002AE Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.RemoveCollectionAccounts::get_Authority()
extern void RemoveCollectionAccounts_get_Authority_m77E937E6913A424A885B410AFA5FC3CCDEE39458 (void);
// 0x000002AF System.Void CandyMachineV2.Program.RemoveCollectionAccounts::set_Authority(Solana.Unity.Wallet.PublicKey)
extern void RemoveCollectionAccounts_set_Authority_m9A6224F281C3505CD64AD546283A312232716985 (void);
// 0x000002B0 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.RemoveCollectionAccounts::get_CollectionPda()
extern void RemoveCollectionAccounts_get_CollectionPda_m8AE4CB9AC0F3B960333D8BEC1497894D1CB7310C (void);
// 0x000002B1 System.Void CandyMachineV2.Program.RemoveCollectionAccounts::set_CollectionPda(Solana.Unity.Wallet.PublicKey)
extern void RemoveCollectionAccounts_set_CollectionPda_m66A5FEED46A765B47B9B3B81059FE8C935551F15 (void);
// 0x000002B2 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.RemoveCollectionAccounts::get_Metadata()
extern void RemoveCollectionAccounts_get_Metadata_m775174B9D561A6E063349DA8690B22B5CE6C5B06 (void);
// 0x000002B3 System.Void CandyMachineV2.Program.RemoveCollectionAccounts::set_Metadata(Solana.Unity.Wallet.PublicKey)
extern void RemoveCollectionAccounts_set_Metadata_mEC9CAFC280862E3D150D4981FE2ABDF1D9A5943E (void);
// 0x000002B4 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.RemoveCollectionAccounts::get_Mint()
extern void RemoveCollectionAccounts_get_Mint_m708D94F30B285589592CADA1BE5D26DE0BB08AB7 (void);
// 0x000002B5 System.Void CandyMachineV2.Program.RemoveCollectionAccounts::set_Mint(Solana.Unity.Wallet.PublicKey)
extern void RemoveCollectionAccounts_set_Mint_m5770FC714EB2C9E39982505508F3D3A4EBA6C73A (void);
// 0x000002B6 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.RemoveCollectionAccounts::get_CollectionAuthorityRecord()
extern void RemoveCollectionAccounts_get_CollectionAuthorityRecord_mE67BEEB0A69A9AA84ECBF4E83DB1D80FC3AFC711 (void);
// 0x000002B7 System.Void CandyMachineV2.Program.RemoveCollectionAccounts::set_CollectionAuthorityRecord(Solana.Unity.Wallet.PublicKey)
extern void RemoveCollectionAccounts_set_CollectionAuthorityRecord_m9CAA7B8A0F3856005D87F817A17C0CE43AAE19F6 (void);
// 0x000002B8 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.RemoveCollectionAccounts::get_TokenMetadataProgram()
extern void RemoveCollectionAccounts_get_TokenMetadataProgram_mA9DE593999FEB94DF5BBF72745A31DAB68695974 (void);
// 0x000002B9 System.Void CandyMachineV2.Program.RemoveCollectionAccounts::set_TokenMetadataProgram(Solana.Unity.Wallet.PublicKey)
extern void RemoveCollectionAccounts_set_TokenMetadataProgram_mF2607DE618BBBF4A97D8EA363F7702CE5068E237 (void);
// 0x000002BA System.Void CandyMachineV2.Program.RemoveCollectionAccounts::.ctor()
extern void RemoveCollectionAccounts__ctor_m14ED86FA787152A7F9E305FE4594CEBCEBBA756E (void);
// 0x000002BB Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.UpdateAuthorityAccounts::get_CandyMachine()
extern void UpdateAuthorityAccounts_get_CandyMachine_mDBF88C5106D586D82F6F3A38EC14C91A7C2577A7 (void);
// 0x000002BC System.Void CandyMachineV2.Program.UpdateAuthorityAccounts::set_CandyMachine(Solana.Unity.Wallet.PublicKey)
extern void UpdateAuthorityAccounts_set_CandyMachine_m7A7C6446D4742FC5950C548FC43061FB8EA8DA37 (void);
// 0x000002BD Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.UpdateAuthorityAccounts::get_Authority()
extern void UpdateAuthorityAccounts_get_Authority_mA3C2C90ABD608749DC2B75D46547767AB766C435 (void);
// 0x000002BE System.Void CandyMachineV2.Program.UpdateAuthorityAccounts::set_Authority(Solana.Unity.Wallet.PublicKey)
extern void UpdateAuthorityAccounts_set_Authority_m33DB965D36DDA87C540D5AAB445D82FA0CFF9970 (void);
// 0x000002BF Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.UpdateAuthorityAccounts::get_Wallet()
extern void UpdateAuthorityAccounts_get_Wallet_mE27B40690C6AC4A209020B5530B7AF3107A174EB (void);
// 0x000002C0 System.Void CandyMachineV2.Program.UpdateAuthorityAccounts::set_Wallet(Solana.Unity.Wallet.PublicKey)
extern void UpdateAuthorityAccounts_set_Wallet_mDB63AF684E1D223ADB884B0A09563BC8990BAC0C (void);
// 0x000002C1 System.Void CandyMachineV2.Program.UpdateAuthorityAccounts::.ctor()
extern void UpdateAuthorityAccounts__ctor_m49CAF74F2C67548139083AA17CF9C159DBB1BCD8 (void);
// 0x000002C2 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.WithdrawFundsAccounts::get_CandyMachine()
extern void WithdrawFundsAccounts_get_CandyMachine_mF02A78DBD9EF512FEE04C5CDEFE6A5AB93EDB967 (void);
// 0x000002C3 System.Void CandyMachineV2.Program.WithdrawFundsAccounts::set_CandyMachine(Solana.Unity.Wallet.PublicKey)
extern void WithdrawFundsAccounts_set_CandyMachine_mD9D88C8D31835B0B47412089205E844FE2397101 (void);
// 0x000002C4 Solana.Unity.Wallet.PublicKey CandyMachineV2.Program.WithdrawFundsAccounts::get_Authority()
extern void WithdrawFundsAccounts_get_Authority_m349C86474148DB36FD7FB6FDEAB1C8322E1402E6 (void);
// 0x000002C5 System.Void CandyMachineV2.Program.WithdrawFundsAccounts::set_Authority(Solana.Unity.Wallet.PublicKey)
extern void WithdrawFundsAccounts_set_Authority_m37F4C61434FFC2CB5330E74DC78128E681167518 (void);
// 0x000002C6 System.Void CandyMachineV2.Program.WithdrawFundsAccounts::.ctor()
extern void WithdrawFundsAccounts__ctor_m36F5AA3894A402BBF26AF15FF4134E9EF9E562EC (void);
// 0x000002C7 Solana.Unity.Rpc.Models.TransactionInstruction CandyMachineV2.Program.CandyMachineProgram::MintNft(CandyMachineV2.Program.MintNftAccounts,System.Byte,Solana.Unity.Wallet.PublicKey)
extern void CandyMachineProgram_MintNft_m52620D5F4B4BFF082B772FD52A6C47DCA698808D (void);
// 0x000002C8 CandyMachineV2.Types.WhitelistMintMode CandyMachineV2.Types.WhitelistMintSettings::get_Mode()
extern void WhitelistMintSettings_get_Mode_m525A0D969CB898CBF10D9530101699F229F49168 (void);
// 0x000002C9 System.Void CandyMachineV2.Types.WhitelistMintSettings::set_Mode(CandyMachineV2.Types.WhitelistMintMode)
extern void WhitelistMintSettings_set_Mode_mC2EB4B4A37E231335B1771BCEB0747EB70B3F6A5 (void);
// 0x000002CA Solana.Unity.Wallet.PublicKey CandyMachineV2.Types.WhitelistMintSettings::get_Mint()
extern void WhitelistMintSettings_get_Mint_mBCC6F7806095CF5DE482617A894C7D1CFF3E8E24 (void);
// 0x000002CB System.Void CandyMachineV2.Types.WhitelistMintSettings::set_Mint(Solana.Unity.Wallet.PublicKey)
extern void WhitelistMintSettings_set_Mint_m075E0309EF6E914CE488014AAF0F7B307B6186DF (void);
// 0x000002CC System.Boolean CandyMachineV2.Types.WhitelistMintSettings::get_Presale()
extern void WhitelistMintSettings_get_Presale_m8AE18B543524909324CDD88CAF3F0EF013C8B8ED (void);
// 0x000002CD System.Void CandyMachineV2.Types.WhitelistMintSettings::set_Presale(System.Boolean)
extern void WhitelistMintSettings_set_Presale_mBCD8BD2745C7575C0A8257D5DE0D8F182154EC5B (void);
// 0x000002CE System.Nullable`1<System.UInt64> CandyMachineV2.Types.WhitelistMintSettings::get_DiscountPrice()
extern void WhitelistMintSettings_get_DiscountPrice_m7AABC98925FB187A2E48AE6CC25BB0C949B31386 (void);
// 0x000002CF System.Void CandyMachineV2.Types.WhitelistMintSettings::set_DiscountPrice(System.Nullable`1<System.UInt64>)
extern void WhitelistMintSettings_set_DiscountPrice_m63F8BEA728E87FA4EBC2025B1CCE1FBA7B4D2ECC (void);
// 0x000002D0 System.Int32 CandyMachineV2.Types.WhitelistMintSettings::Serialize(System.Byte[],System.Int32)
extern void WhitelistMintSettings_Serialize_m21A83C51D559E417D122049650E53C9A02607AB4 (void);
// 0x000002D1 System.Int32 CandyMachineV2.Types.WhitelistMintSettings::Deserialize(System.ReadOnlySpan`1<System.Byte>,System.Int32,CandyMachineV2.Types.WhitelistMintSettings&)
extern void WhitelistMintSettings_Deserialize_m09BFDA2D02AE729097CD5787C6FDA8616AB54CFE (void);
// 0x000002D2 System.Void CandyMachineV2.Types.WhitelistMintSettings::.ctor()
extern void WhitelistMintSettings__ctor_m93F2A7039FDAA037B15C06F64EC0D765837E392F (void);
// 0x000002D3 System.String CandyMachineV2.Types.CandyMachineData::get_Uuid()
extern void CandyMachineData_get_Uuid_m04423570C741D8A275306156C3D7C0C6583D6234 (void);
// 0x000002D4 System.Void CandyMachineV2.Types.CandyMachineData::set_Uuid(System.String)
extern void CandyMachineData_set_Uuid_mCABA993A680C73E22ED5D8CC6F6D1E9DA50E6C12 (void);
// 0x000002D5 System.UInt64 CandyMachineV2.Types.CandyMachineData::get_Price()
extern void CandyMachineData_get_Price_mF59E117030201231214390E1D4DE5EACAD20CBCB (void);
// 0x000002D6 System.Void CandyMachineV2.Types.CandyMachineData::set_Price(System.UInt64)
extern void CandyMachineData_set_Price_m51D598EB5ED627FDA78517375FCC1A97EF377049 (void);
// 0x000002D7 System.String CandyMachineV2.Types.CandyMachineData::get_Symbol()
extern void CandyMachineData_get_Symbol_m79DC8767B72BEB1C63D68A7A64B3B135FDF704A1 (void);
// 0x000002D8 System.Void CandyMachineV2.Types.CandyMachineData::set_Symbol(System.String)
extern void CandyMachineData_set_Symbol_mD34EC278C2578945A77038B001210F3884C8DA4F (void);
// 0x000002D9 System.UInt16 CandyMachineV2.Types.CandyMachineData::get_SellerFeeBasisPoints()
extern void CandyMachineData_get_SellerFeeBasisPoints_m2F17CC5A8BAF0DB9CE22CC07BE7A1EC3A1BD1B8C (void);
// 0x000002DA System.Void CandyMachineV2.Types.CandyMachineData::set_SellerFeeBasisPoints(System.UInt16)
extern void CandyMachineData_set_SellerFeeBasisPoints_m339DFFD43685873FFEFEB807A4FF264557B53B48 (void);
// 0x000002DB System.UInt64 CandyMachineV2.Types.CandyMachineData::get_MaxSupply()
extern void CandyMachineData_get_MaxSupply_m6D3D5AA14377E2A0233C9D68C544809B63B0E84B (void);
// 0x000002DC System.Void CandyMachineV2.Types.CandyMachineData::set_MaxSupply(System.UInt64)
extern void CandyMachineData_set_MaxSupply_m4396785B6C617A562E2A56E640B63D9A54AB00BF (void);
// 0x000002DD System.Boolean CandyMachineV2.Types.CandyMachineData::get_IsMutable()
extern void CandyMachineData_get_IsMutable_m09EB2892302F90027FE3CDC1F3E9C89C250685B3 (void);
// 0x000002DE System.Void CandyMachineV2.Types.CandyMachineData::set_IsMutable(System.Boolean)
extern void CandyMachineData_set_IsMutable_m35FB068BC4A9A499CDE51D137AB8AD2C012A0320 (void);
// 0x000002DF System.Boolean CandyMachineV2.Types.CandyMachineData::get_RetainAuthority()
extern void CandyMachineData_get_RetainAuthority_mE158266B8E6DB643E84E0A141693F90B6F2102C8 (void);
// 0x000002E0 System.Void CandyMachineV2.Types.CandyMachineData::set_RetainAuthority(System.Boolean)
extern void CandyMachineData_set_RetainAuthority_mA8A02D533CCC58F540377D8611956CE34CCE04F4 (void);
// 0x000002E1 System.Nullable`1<System.Int64> CandyMachineV2.Types.CandyMachineData::get_GoLiveDate()
extern void CandyMachineData_get_GoLiveDate_mCC1F25EF932864A65D84F77B74A86841D8768A43 (void);
// 0x000002E2 System.Void CandyMachineV2.Types.CandyMachineData::set_GoLiveDate(System.Nullable`1<System.Int64>)
extern void CandyMachineData_set_GoLiveDate_m7EE59BA7DDBBE7C15A74F1CBB982259217024564 (void);
// 0x000002E3 CandyMachineV2.Types.EndSettings CandyMachineV2.Types.CandyMachineData::get_EndSettings()
extern void CandyMachineData_get_EndSettings_mBB4EFF02B3CAC904167914C4FD4ED84827709D6F (void);
// 0x000002E4 System.Void CandyMachineV2.Types.CandyMachineData::set_EndSettings(CandyMachineV2.Types.EndSettings)
extern void CandyMachineData_set_EndSettings_mD82FE629817070FB62D96762C9FBC893B28D95B7 (void);
// 0x000002E5 CandyMachineV2.Types.Creator[] CandyMachineV2.Types.CandyMachineData::get_Creators()
extern void CandyMachineData_get_Creators_m04BB4BB2B250C2D492056CB9A6A2DFE0D7F06A3F (void);
// 0x000002E6 System.Void CandyMachineV2.Types.CandyMachineData::set_Creators(CandyMachineV2.Types.Creator[])
extern void CandyMachineData_set_Creators_m86C04A783A64B4ECFBB541868A9D7AB44BFEE7FD (void);
// 0x000002E7 CandyMachineV2.Types.HiddenSettings CandyMachineV2.Types.CandyMachineData::get_HiddenSettings()
extern void CandyMachineData_get_HiddenSettings_mC92F3D445B1FFEA63738FB169D4C9417491EC8B6 (void);
// 0x000002E8 System.Void CandyMachineV2.Types.CandyMachineData::set_HiddenSettings(CandyMachineV2.Types.HiddenSettings)
extern void CandyMachineData_set_HiddenSettings_m6E268E392FEEAD68A1B7B5E8B293D6FA9EB29020 (void);
// 0x000002E9 CandyMachineV2.Types.WhitelistMintSettings CandyMachineV2.Types.CandyMachineData::get_WhitelistMintSettings()
extern void CandyMachineData_get_WhitelistMintSettings_m9DDDCB3246BC3469E79042E60693C939257F4B8F (void);
// 0x000002EA System.Void CandyMachineV2.Types.CandyMachineData::set_WhitelistMintSettings(CandyMachineV2.Types.WhitelistMintSettings)
extern void CandyMachineData_set_WhitelistMintSettings_m5DEB282188AEEED59F0B0C3CC9ED84842093AE48 (void);
// 0x000002EB System.UInt64 CandyMachineV2.Types.CandyMachineData::get_ItemsAvailable()
extern void CandyMachineData_get_ItemsAvailable_m00B3A96173AA9C5681199FA374066EF5319C44F8 (void);
// 0x000002EC System.Void CandyMachineV2.Types.CandyMachineData::set_ItemsAvailable(System.UInt64)
extern void CandyMachineData_set_ItemsAvailable_m4E8B81D49573D285C1E365C05A89BE91E34ECBB2 (void);
// 0x000002ED CandyMachineV2.Types.GatekeeperConfig CandyMachineV2.Types.CandyMachineData::get_Gatekeeper()
extern void CandyMachineData_get_Gatekeeper_m8809185A2832EE24ECC5763CCFF321A84887AEE8 (void);
// 0x000002EE System.Void CandyMachineV2.Types.CandyMachineData::set_Gatekeeper(CandyMachineV2.Types.GatekeeperConfig)
extern void CandyMachineData_set_Gatekeeper_mC8FCFFBF558552C49378DB778924B09566FAB444 (void);
// 0x000002EF System.Int32 CandyMachineV2.Types.CandyMachineData::Serialize(System.Byte[],System.Int32)
extern void CandyMachineData_Serialize_mC1342F361387698CEA5641EE2D06420E288B7CE5 (void);
// 0x000002F0 System.Int32 CandyMachineV2.Types.CandyMachineData::Deserialize(System.ReadOnlySpan`1<System.Byte>,System.Int32,CandyMachineV2.Types.CandyMachineData&)
extern void CandyMachineData_Deserialize_m1A686FCBDCF3E960C95B2148B5F74884C4535DD8 (void);
// 0x000002F1 System.Void CandyMachineV2.Types.CandyMachineData::.ctor()
extern void CandyMachineData__ctor_m3AE5B2AC662A79E84C92C2FF28AB2D325702EE41 (void);
// 0x000002F2 Solana.Unity.Wallet.PublicKey CandyMachineV2.Types.GatekeeperConfig::get_GatekeeperNetwork()
extern void GatekeeperConfig_get_GatekeeperNetwork_mF2F44FECF46C14CDC17304EDA0C2B0FC47A54160 (void);
// 0x000002F3 System.Void CandyMachineV2.Types.GatekeeperConfig::set_GatekeeperNetwork(Solana.Unity.Wallet.PublicKey)
extern void GatekeeperConfig_set_GatekeeperNetwork_m7BBAB95F37A531E20295E4D7C6D2DB19D19E2E55 (void);
// 0x000002F4 System.Boolean CandyMachineV2.Types.GatekeeperConfig::get_ExpireOnUse()
extern void GatekeeperConfig_get_ExpireOnUse_m770882A1954A23CB374C048F34B9D77D9D63A7ED (void);
// 0x000002F5 System.Void CandyMachineV2.Types.GatekeeperConfig::set_ExpireOnUse(System.Boolean)
extern void GatekeeperConfig_set_ExpireOnUse_mCAAADB1A39B8BF19C1FA886CC58D0C8BA6D95F4E (void);
// 0x000002F6 System.Int32 CandyMachineV2.Types.GatekeeperConfig::Serialize(System.Byte[],System.Int32)
extern void GatekeeperConfig_Serialize_mCC00B61CB7D394060DED577F5AC431B2A7E63828 (void);
// 0x000002F7 System.Int32 CandyMachineV2.Types.GatekeeperConfig::Deserialize(System.ReadOnlySpan`1<System.Byte>,System.Int32,CandyMachineV2.Types.GatekeeperConfig&)
extern void GatekeeperConfig_Deserialize_m9A774ED145642BCD106760C825024F0A5978B143 (void);
// 0x000002F8 System.Void CandyMachineV2.Types.GatekeeperConfig::.ctor()
extern void GatekeeperConfig__ctor_m6CF40AB8594F123A118CCA536F7B970AE1E46CB1 (void);
// 0x000002F9 CandyMachineV2.Types.EndSettingType CandyMachineV2.Types.EndSettings::get_EndSettingType()
extern void EndSettings_get_EndSettingType_m53F883CA0EEAA09A1280BFE05D01B4BA191B4E47 (void);
// 0x000002FA System.Void CandyMachineV2.Types.EndSettings::set_EndSettingType(CandyMachineV2.Types.EndSettingType)
extern void EndSettings_set_EndSettingType_mC2E8C2B9C90C3500DDE9644D3E2D86523FEA7FAB (void);
// 0x000002FB System.UInt64 CandyMachineV2.Types.EndSettings::get_Number()
extern void EndSettings_get_Number_m8AB5F33CDE98D3F010C799DB8D6ED7859AA55BC7 (void);
// 0x000002FC System.Void CandyMachineV2.Types.EndSettings::set_Number(System.UInt64)
extern void EndSettings_set_Number_mB52B5025F7156CC980C67114C26F90AB7A31AAED (void);
// 0x000002FD System.Int32 CandyMachineV2.Types.EndSettings::Serialize(System.Byte[],System.Int32)
extern void EndSettings_Serialize_mD9036C245999D45CB367386B986C4C486AF97836 (void);
// 0x000002FE System.Int32 CandyMachineV2.Types.EndSettings::Deserialize(System.ReadOnlySpan`1<System.Byte>,System.Int32,CandyMachineV2.Types.EndSettings&)
extern void EndSettings_Deserialize_m3C2334E027C5A7D70E2E72394AB0A152B45FD748 (void);
// 0x000002FF System.Void CandyMachineV2.Types.EndSettings::.ctor()
extern void EndSettings__ctor_mD92FCB4CD05AED8E0C646AD15EA48542522B9D40 (void);
// 0x00000300 System.String CandyMachineV2.Types.HiddenSettings::get_Name()
extern void HiddenSettings_get_Name_m6D480E4B258E8C76FEC64B888B0D5FF3A251E303 (void);
// 0x00000301 System.Void CandyMachineV2.Types.HiddenSettings::set_Name(System.String)
extern void HiddenSettings_set_Name_m19CFC32BADBDEA79D442A78D5238C81218EF4A1D (void);
// 0x00000302 System.String CandyMachineV2.Types.HiddenSettings::get_Uri()
extern void HiddenSettings_get_Uri_mB60D5EBAC0BA2D451124BBE12C6F3C74419B07C1 (void);
// 0x00000303 System.Void CandyMachineV2.Types.HiddenSettings::set_Uri(System.String)
extern void HiddenSettings_set_Uri_m83930DBC124D5690AF712B89A842BF06E591D222 (void);
// 0x00000304 System.Byte[] CandyMachineV2.Types.HiddenSettings::get_Hash()
extern void HiddenSettings_get_Hash_m5251D357919AB3584778190A7D8EBD4070B087C3 (void);
// 0x00000305 System.Void CandyMachineV2.Types.HiddenSettings::set_Hash(System.Byte[])
extern void HiddenSettings_set_Hash_m0320DE6F6FF6259C3B1B7E689EAC343FF7F87322 (void);
// 0x00000306 System.Int32 CandyMachineV2.Types.HiddenSettings::Serialize(System.Byte[],System.Int32)
extern void HiddenSettings_Serialize_m073D00E9CA74F08CACC36925F9E90A56CC0FF4A0 (void);
// 0x00000307 System.Int32 CandyMachineV2.Types.HiddenSettings::Deserialize(System.ReadOnlySpan`1<System.Byte>,System.Int32,CandyMachineV2.Types.HiddenSettings&)
extern void HiddenSettings_Deserialize_mA197B879A9C61AED8095810D911CB4B9A1AE75D4 (void);
// 0x00000308 System.Void CandyMachineV2.Types.HiddenSettings::.ctor()
extern void HiddenSettings__ctor_mD3608272AB3D0A3C57503B99FAEA2A0017777BB5 (void);
// 0x00000309 System.String CandyMachineV2.Types.ConfigLine::get_Name()
extern void ConfigLine_get_Name_m22E04D37DF1F8531147651875D1266F819A05010 (void);
// 0x0000030A System.Void CandyMachineV2.Types.ConfigLine::set_Name(System.String)
extern void ConfigLine_set_Name_m47B7D1676746771AD0A05A9F1E840AE787AC1C9C (void);
// 0x0000030B System.String CandyMachineV2.Types.ConfigLine::get_Uri()
extern void ConfigLine_get_Uri_m5426D6F16B7A8D5877622A3DCB4589189CD3BBE4 (void);
// 0x0000030C System.Void CandyMachineV2.Types.ConfigLine::set_Uri(System.String)
extern void ConfigLine_set_Uri_m80D45BE5F92A12F7782EAA67042D5E0508CBB59B (void);
// 0x0000030D System.Int32 CandyMachineV2.Types.ConfigLine::Serialize(System.Byte[],System.Int32)
extern void ConfigLine_Serialize_mFE49163F2746147985813767C98F45FF36E79959 (void);
// 0x0000030E System.Int32 CandyMachineV2.Types.ConfigLine::Deserialize(System.ReadOnlySpan`1<System.Byte>,System.Int32,CandyMachineV2.Types.ConfigLine&)
extern void ConfigLine_Deserialize_mD0BEFD38594354BE739499B3B9511F0DF2064323 (void);
// 0x0000030F System.Void CandyMachineV2.Types.ConfigLine::.ctor()
extern void ConfigLine__ctor_m5F175C01FE940C851C8D6BC2434E7B40D6295F3C (void);
// 0x00000310 Solana.Unity.Wallet.PublicKey CandyMachineV2.Types.Creator::get_Address()
extern void Creator_get_Address_mC4692C654A55AD99A788297316F62D41597F3B04 (void);
// 0x00000311 System.Void CandyMachineV2.Types.Creator::set_Address(Solana.Unity.Wallet.PublicKey)
extern void Creator_set_Address_m96520F725B5E6ED23885F49B976851B3195E3FC6 (void);
// 0x00000312 System.Boolean CandyMachineV2.Types.Creator::get_Verified()
extern void Creator_get_Verified_mE6DDE67335ADF219DADFB00AEDBC04912040EAC6 (void);
// 0x00000313 System.Void CandyMachineV2.Types.Creator::set_Verified(System.Boolean)
extern void Creator_set_Verified_mCECE1EEFF9CCB36430690A4CB550F3A4AE236254 (void);
// 0x00000314 System.Byte CandyMachineV2.Types.Creator::get_Share()
extern void Creator_get_Share_mF0B505FFD8638E9391C89B01A8F60E754DFB29DF (void);
// 0x00000315 System.Void CandyMachineV2.Types.Creator::set_Share(System.Byte)
extern void Creator_set_Share_m99B7A53C0C196736FE648B972531EE01574025B8 (void);
// 0x00000316 System.Int32 CandyMachineV2.Types.Creator::Serialize(System.Byte[],System.Int32)
extern void Creator_Serialize_mEF00BA886689807047C7BB99458846DC55C46577 (void);
// 0x00000317 System.Int32 CandyMachineV2.Types.Creator::Deserialize(System.ReadOnlySpan`1<System.Byte>,System.Int32,CandyMachineV2.Types.Creator&)
extern void Creator_Deserialize_m2EC8CBE65EF15F48633EE793D7566CE84D11BA94 (void);
// 0x00000318 System.Void CandyMachineV2.Types.Creator::.ctor()
extern void Creator__ctor_m86B8AC5A6C9E947F3EE325A1442877500BBA4BF9 (void);
// 0x00000319 System.UInt64 CandyMachineV2.Accounts.CandyMachine::get_ACCOUNT_DISCRIMINATOR()
extern void CandyMachine_get_ACCOUNT_DISCRIMINATOR_mD22288FC7729F142C73B66F7EE4B5E90A7F2DEE4 (void);
// 0x0000031A System.ReadOnlySpan`1<System.Byte> CandyMachineV2.Accounts.CandyMachine::get_ACCOUNT_DISCRIMINATOR_BYTES()
extern void CandyMachine_get_ACCOUNT_DISCRIMINATOR_BYTES_m1B0ED3F11C4E8690A6850D1119181AA8AB836B64 (void);
// 0x0000031B System.String CandyMachineV2.Accounts.CandyMachine::get_ACCOUNT_DISCRIMINATOR_B58()
extern void CandyMachine_get_ACCOUNT_DISCRIMINATOR_B58_m81149173D5BAF14AB1761EA237FE3882A64BE5A8 (void);
// 0x0000031C Solana.Unity.Wallet.PublicKey CandyMachineV2.Accounts.CandyMachine::get_Authority()
extern void CandyMachine_get_Authority_m7BB1BA4CE5319A129C5B7470BB04CA6260A6CB01 (void);
// 0x0000031D System.Void CandyMachineV2.Accounts.CandyMachine::set_Authority(Solana.Unity.Wallet.PublicKey)
extern void CandyMachine_set_Authority_m69AC4F302313F9CA8432EC81BE2D7FA56FE13F31 (void);
// 0x0000031E Solana.Unity.Wallet.PublicKey CandyMachineV2.Accounts.CandyMachine::get_Wallet()
extern void CandyMachine_get_Wallet_m47336146B47A72E0FEAC53709EFD4557667649EA (void);
// 0x0000031F System.Void CandyMachineV2.Accounts.CandyMachine::set_Wallet(Solana.Unity.Wallet.PublicKey)
extern void CandyMachine_set_Wallet_m8C1AE9EB71B64050FDAB3B42754CEEFE0C01DBE7 (void);
// 0x00000320 Solana.Unity.Wallet.PublicKey CandyMachineV2.Accounts.CandyMachine::get_TokenMint()
extern void CandyMachine_get_TokenMint_m34F003EFA477040B47C5A7F5D81EFC6298A7E415 (void);
// 0x00000321 System.Void CandyMachineV2.Accounts.CandyMachine::set_TokenMint(Solana.Unity.Wallet.PublicKey)
extern void CandyMachine_set_TokenMint_m83F750A95B71C14BF1BC4ED85C135C29652C3724 (void);
// 0x00000322 System.UInt64 CandyMachineV2.Accounts.CandyMachine::get_ItemsRedeemed()
extern void CandyMachine_get_ItemsRedeemed_mA0B260732DB0BF7239ACDEA39E7FEEE3A6A9DC14 (void);
// 0x00000323 System.Void CandyMachineV2.Accounts.CandyMachine::set_ItemsRedeemed(System.UInt64)
extern void CandyMachine_set_ItemsRedeemed_m13F8C74155A05A2802494E9008886943942D39AF (void);
// 0x00000324 CandyMachineV2.Types.CandyMachineData CandyMachineV2.Accounts.CandyMachine::get_Data()
extern void CandyMachine_get_Data_mD3ADEBBF395F6FE5C764D5258F78AE23D262952F (void);
// 0x00000325 System.Void CandyMachineV2.Accounts.CandyMachine::set_Data(CandyMachineV2.Types.CandyMachineData)
extern void CandyMachine_set_Data_mA4D3CA39CBBC21964F705EA3501D4E7A593E4FD5 (void);
// 0x00000326 CandyMachineV2.Accounts.CandyMachine CandyMachineV2.Accounts.CandyMachine::Deserialize(System.ReadOnlySpan`1<System.Byte>)
extern void CandyMachine_Deserialize_mE0143AA4E6DD8E80E8B3B08D6EF933F5758C2027 (void);
// 0x00000327 System.Void CandyMachineV2.Accounts.CandyMachine::.ctor()
extern void CandyMachine__ctor_mCA7A8F389DDCFBC3EB0CD49F1CD3A7B42F9E8729 (void);
// 0x00000328 System.UInt64 CandyMachineV2.Accounts.CollectionPDA::get_ACCOUNT_DISCRIMINATOR()
extern void CollectionPDA_get_ACCOUNT_DISCRIMINATOR_mF0E9D8FAA3DD71E86FEDC09B4BEB261B492B0EC9 (void);
// 0x00000329 System.ReadOnlySpan`1<System.Byte> CandyMachineV2.Accounts.CollectionPDA::get_ACCOUNT_DISCRIMINATOR_BYTES()
extern void CollectionPDA_get_ACCOUNT_DISCRIMINATOR_BYTES_mFAAF8CFB51D70E9CBE92753BDC96463E67850CC3 (void);
// 0x0000032A System.String CandyMachineV2.Accounts.CollectionPDA::get_ACCOUNT_DISCRIMINATOR_B58()
extern void CollectionPDA_get_ACCOUNT_DISCRIMINATOR_B58_m256A20D07CACB974944ECFF887A39B4BB4247049 (void);
// 0x0000032B Solana.Unity.Wallet.PublicKey CandyMachineV2.Accounts.CollectionPDA::get_Mint()
extern void CollectionPDA_get_Mint_m75C08F06CD5333588FBC23297315784140082435 (void);
// 0x0000032C System.Void CandyMachineV2.Accounts.CollectionPDA::set_Mint(Solana.Unity.Wallet.PublicKey)
extern void CollectionPDA_set_Mint_mEC38DF4D65D1DDF80E27BCB188173D52817DA0A8 (void);
// 0x0000032D Solana.Unity.Wallet.PublicKey CandyMachineV2.Accounts.CollectionPDA::get_CandyMachine()
extern void CollectionPDA_get_CandyMachine_m295929C014AFAA913AB5526637B7D8F525980707 (void);
// 0x0000032E System.Void CandyMachineV2.Accounts.CollectionPDA::set_CandyMachine(Solana.Unity.Wallet.PublicKey)
extern void CollectionPDA_set_CandyMachine_m52A68C9986EBD9DB2968538B386B799C96D96B08 (void);
// 0x0000032F CandyMachineV2.Accounts.CollectionPDA CandyMachineV2.Accounts.CollectionPDA::Deserialize(System.ReadOnlySpan`1<System.Byte>)
extern void CollectionPDA_Deserialize_mA3B21DA4DD736A93B79A05C9416C7174C5E7BFCD (void);
// 0x00000330 System.Void CandyMachineV2.Accounts.CollectionPDA::.ctor()
extern void CollectionPDA__ctor_m5DC000F8590A6DB8F2C81D4D1D4FE1350429A1BE (void);
// 0x00000331 Solana.Unity.SDK.AccountLayout Solana.Unity.SDK.AccountLayout::DeserializeAccountLayout(System.String)
extern void AccountLayout_DeserializeAccountLayout_m2FE8156C11D1FE9B8FF060B8FB415227FA7A3F25 (void);
// 0x00000332 System.Void Solana.Unity.SDK.AccountLayout::.ctor()
extern void AccountLayout__ctor_m1055DED5F21C94EBBE9CB5E83508210C26068B11 (void);
// 0x00000333 System.Void Solana.Unity.SDK.SignaturePubkeyPair::.ctor()
extern void SignaturePubkeyPair__ctor_m7F0D6B76C2B75B37B6FFBFF9FB589C1C6FAD95EE (void);
// 0x00000334 System.Void Solana.Unity.SDK.TransactionCtorFields::.ctor()
extern void TransactionCtorFields__ctor_m2170ABB04CA21499FD2109A70ACAFBA5DABB98AD (void);
// 0x00000335 System.Void Solana.Unity.SDK.CompiledInstruction::.ctor()
extern void CompiledInstruction__ctor_m959EE4AFB503850E97EA4AEEC78C819CF6EB321F (void);
// 0x00000336 System.Void Solana.Unity.SDK.InGameWallet::.ctor(Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void InGameWallet__ctor_mE85DACDA734506636373D51F4DCEE78E4EF7F6D9 (void);
// 0x00000337 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.InGameWallet::_Login(System.String)
extern void InGameWallet__Login_mF66B6CE424B07A20C9F84523315FE98BCF5F8892 (void);
// 0x00000338 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.InGameWallet::_CreateAccount(System.String,System.String)
extern void InGameWallet__CreateAccount_mDEE532F68A5B90855061E37E9E56E4C56D45EDA1 (void);
// 0x00000339 System.Collections.IEnumerator Solana.Unity.SDK.InGameWallet::SaveEncryptedAccount(System.String,System.String,Solana.Unity.Wallet.PublicKey)
extern void InGameWallet_SaveEncryptedAccount_m89F18D25BB07089133A26E7DC5AFF530AE0D849E (void);
// 0x0000033A System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.InGameWallet::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void InGameWallet__SignTransaction_mA57F1C92A53825E00BC3BC277A66FBEA81A05B96 (void);
// 0x0000033B System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.InGameWallet::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void InGameWallet__SignAllTransactions_mA7B323B6046594B4C78B044DC154848920DED5BE (void);
// 0x0000033C System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.InGameWallet::SignMessage(System.Byte[])
extern void InGameWallet_SignMessage_m6C41E822DBFA582027F94D00D780A3D241681BA4 (void);
// 0x0000033D Solana.Unity.Wallet.Account Solana.Unity.SDK.InGameWallet::FromSecret(System.String)
extern void InGameWallet_FromSecret_m8CF73872685F7CB7986BE09DB95B4C0F5EEC4FE9 (void);
// 0x0000033E Solana.Unity.Wallet.Account Solana.Unity.SDK.InGameWallet::FromMnemonic(System.String)
extern void InGameWallet_FromMnemonic_mF9A564AA131468276BDDFB6A5750AAE2192A3509 (void);
// 0x0000033F Solana.Unity.Wallet.Account Solana.Unity.SDK.InGameWallet::FromSecretKey(System.String)
extern void InGameWallet_FromSecretKey_mE40309CCC80B5AA1D0794AFD1B9517B252A5A7A8 (void);
// 0x00000340 Solana.Unity.Wallet.Account Solana.Unity.SDK.InGameWallet::FromByteArray(System.Byte[])
extern void InGameWallet_FromByteArray_mBFDC359A58C822B0F61AD4B34A8280266E3FD2C6 (void);
// 0x00000341 System.Boolean Solana.Unity.SDK.InGameWallet::IsMnemonic(System.String)
extern void InGameWallet_IsMnemonic_m9D26AAF272F044B5C90FBC5A89FC52CB53DB9CA7 (void);
// 0x00000342 System.Boolean Solana.Unity.SDK.InGameWallet::IsByteArray(System.String)
extern void InGameWallet_IsByteArray_mB20D1BBD5D3CEBDC643732AC04B9BC4BE69E1C81 (void);
// 0x00000343 Solana.Unity.Wallet.Account Solana.Unity.SDK.InGameWallet::ParseByteArray(System.String)
extern void InGameWallet_ParseByteArray_mE5616EA0E9886D8F62B3261668805963F759282E (void);
// 0x00000344 System.String Solana.Unity.SDK.InGameWallet::LoadPlayerPrefs(System.String)
extern void InGameWallet_LoadPlayerPrefs_mEB9BD42FC4BDD9749F5F9E7ED2DC8841EBBEBBF3 (void);
// 0x00000345 System.Void Solana.Unity.SDK.InGameWallet::SavePlayerPrefs(System.String,System.String)
extern void InGameWallet_SavePlayerPrefs_mFD70EB2639E7A2937E2B453DD29FB9250A5071D8 (void);
// 0x00000346 System.Void Solana.Unity.SDK.InGameWallet/<SaveEncryptedAccount>d__4::.ctor(System.Int32)
extern void U3CSaveEncryptedAccountU3Ed__4__ctor_m812780AD6B8C0BCFC2C0BD8B1F649F3032B9D9A5 (void);
// 0x00000347 System.Void Solana.Unity.SDK.InGameWallet/<SaveEncryptedAccount>d__4::System.IDisposable.Dispose()
extern void U3CSaveEncryptedAccountU3Ed__4_System_IDisposable_Dispose_m99A1FFE4DE073BD95C5479E91A74540ABC0BAE25 (void);
// 0x00000348 System.Boolean Solana.Unity.SDK.InGameWallet/<SaveEncryptedAccount>d__4::MoveNext()
extern void U3CSaveEncryptedAccountU3Ed__4_MoveNext_mA70108FC1ACE56BBFA1E5D35FC385A73E7CC9FA2 (void);
// 0x00000349 System.Object Solana.Unity.SDK.InGameWallet/<SaveEncryptedAccount>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CSaveEncryptedAccountU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6FAE9F1491394099E251F2EAC4281BF7BB009EAB (void);
// 0x0000034A System.Void Solana.Unity.SDK.InGameWallet/<SaveEncryptedAccount>d__4::System.Collections.IEnumerator.Reset()
extern void U3CSaveEncryptedAccountU3Ed__4_System_Collections_IEnumerator_Reset_mDC19BD0923DE25000012296B57DDFA205A5BC4B7 (void);
// 0x0000034B System.Object Solana.Unity.SDK.InGameWallet/<SaveEncryptedAccount>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CSaveEncryptedAccountU3Ed__4_System_Collections_IEnumerator_get_Current_m6537CD1C0B3F98965CDBFBE40AE8516C74E39568 (void);
// 0x0000034C System.Void Solana.Unity.SDK.IWalletBase::Setup()
// 0x0000034D System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.IWalletBase::Login(System.String)
// 0x0000034E System.Void Solana.Unity.SDK.IWalletBase::Logout()
// 0x0000034F System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.IWalletBase::CreateAccount(System.String,System.String)
// 0x00000350 System.Threading.Tasks.Task`1<System.Double> Solana.Unity.SDK.IWalletBase::GetBalance(Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.Types.Commitment)
// 0x00000351 System.Threading.Tasks.Task`1<System.Double> Solana.Unity.SDK.IWalletBase::GetBalance(Solana.Unity.Rpc.Types.Commitment)
// 0x00000352 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.IWalletBase::Transfer(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000353 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.IWalletBase::Transfer(Solana.Unity.Wallet.PublicKey,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000354 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.TokenAccount[]> Solana.Unity.SDK.IWalletBase::GetTokenAccounts(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey)
// 0x00000355 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.TokenAccount[]> Solana.Unity.SDK.IWalletBase::GetTokenAccounts(Solana.Unity.Rpc.Types.Commitment)
// 0x00000356 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.IWalletBase::SignTransaction(Solana.Unity.Rpc.Models.Transaction)
// 0x00000357 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.IWalletBase::SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
// 0x00000358 System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.IWalletBase::SignMessage(System.Byte[])
// 0x00000359 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.IWalletBase::SignAndSendTransaction(Solana.Unity.Rpc.Models.Transaction,System.Boolean,Solana.Unity.Rpc.Types.Commitment)
// 0x0000035A System.Void Solana.Unity.SDK.PhantomWalletOptions::.ctor()
extern void PhantomWalletOptions__ctor_mD01D96727E0C709B9F7DD5415B50C583D4D6540E (void);
// 0x0000035B System.Void Solana.Unity.SDK.PhantomWallet::.ctor(Solana.Unity.SDK.PhantomWalletOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void PhantomWallet__ctor_mA374922C03D29B92EB9C6DD7CA0DCA994F341D05 (void);
// 0x0000035C System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.PhantomWallet::_Login(System.String)
extern void PhantomWallet__Login_mCFA72F6AC088DFC4BB4F201FFF3373A5CF31CDAE (void);
// 0x0000035D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.PhantomWallet::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void PhantomWallet__SignTransaction_m8D52CCE6DAD8215D9F0A84C04FABA64E129A7581 (void);
// 0x0000035E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.PhantomWallet::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void PhantomWallet__SignAllTransactions_m106B7A7EB531DA7C45FE7F319B702F3F67D9ADAE (void);
// 0x0000035F System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.PhantomWallet::SignMessage(System.Byte[])
extern void PhantomWallet_SignMessage_m8755FEB64DF7A91ABE72A03F76708F505240CDE5 (void);
// 0x00000360 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.PhantomWallet::_CreateAccount(System.String,System.String)
extern void PhantomWallet__CreateAccount_m89C47398F6B07ABDEA91622C6085CF4D420D8133 (void);
// 0x00000361 System.Byte[] Solana.Unity.SDK.PhantomDeepLink::get_PhantomConnectionAccountPrivateKey()
extern void PhantomDeepLink_get_PhantomConnectionAccountPrivateKey_m21F400BB0113E9908642D7CB04568CE11E6A1C70 (void);
// 0x00000362 System.Byte[] Solana.Unity.SDK.PhantomDeepLink::get_PhantomConnectionAccountPublicKey()
extern void PhantomDeepLink_get_PhantomConnectionAccountPublicKey_mD1A487A91E80C963D689EA00BACE499390CB8ABC (void);
// 0x00000363 System.Void Solana.Unity.SDK.PhantomDeepLink::.ctor(Solana.Unity.SDK.PhantomWalletOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void PhantomDeepLink__ctor_mFB9A0D9418B8A5C26EA95EA41496EA24EEC729E0 (void);
// 0x00000364 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.PhantomDeepLink::_Login(System.String)
extern void PhantomDeepLink__Login_m273A51C5C07D799DBECA3DF7ECB35DAAC6404E2B (void);
// 0x00000365 System.Void Solana.Unity.SDK.PhantomDeepLink::Logout()
extern void PhantomDeepLink_Logout_m1F6C99984021FBB0684B768C6E158E75FAED97D8 (void);
// 0x00000366 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.PhantomDeepLink::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void PhantomDeepLink__SignTransaction_m7DAA9D273740D98B5376B9B029895905E4C0B252 (void);
// 0x00000367 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.PhantomDeepLink::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void PhantomDeepLink__SignAllTransactions_mF54CD8BA8BA379B05BEACC0C87999B20E580471E (void);
// 0x00000368 System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.PhantomDeepLink::SignMessage(System.Byte[])
extern void PhantomDeepLink_SignMessage_mDC20470C791C3845288C5C55F1C7241293B692FD (void);
// 0x00000369 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.PhantomDeepLink::_CreateAccount(System.String,System.String)
extern void PhantomDeepLink__CreateAccount_m2A15C9D24777BEBCE2318DB3F0EE387EEED591FD (void);
// 0x0000036A Solana.Unity.SDK.RpcCluster Solana.Unity.SDK.PhantomDeepLink::GetCluster()
extern void PhantomDeepLink_GetCluster_m0A3CD0938CCA4545828B37EE3AF037839EE4324A (void);
// 0x0000036B System.Void Solana.Unity.SDK.PhantomDeepLink::StartLogin()
extern void PhantomDeepLink_StartLogin_m535F8DB501036D14AACBE8B4B650C503D820C974 (void);
// 0x0000036C System.Void Solana.Unity.SDK.PhantomDeepLink::StartSignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void PhantomDeepLink_StartSignTransaction_m5C193E81DBF53F344481D78960CFE67FC535FEEA (void);
// 0x0000036D System.Void Solana.Unity.SDK.PhantomDeepLink::StartSignMessage(System.Byte[])
extern void PhantomDeepLink_StartSignMessage_mC0FD744C59CF28231BD86D57A6D42FE40E73F835 (void);
// 0x0000036E System.Void Solana.Unity.SDK.PhantomDeepLink::OnDeepLinkActivated(System.String)
extern void PhantomDeepLink_OnDeepLinkActivated_m513B68542486CA3229A386491C11F9F4EDAA84C8 (void);
// 0x0000036F System.Void Solana.Unity.SDK.PhantomDeepLink::ParseConnectionSuccessful(System.String)
extern void PhantomDeepLink_ParseConnectionSuccessful_m6D05E4DD897404F8C5F77275844441F6E0799DD8 (void);
// 0x00000370 System.Void Solana.Unity.SDK.PhantomDeepLink::ParseSuccessfullySignedTransaction(System.String)
extern void PhantomDeepLink_ParseSuccessfullySignedTransaction_m10DAFEE546D11839D63EAA46750DEF34E79621C1 (void);
// 0x00000371 System.Void Solana.Unity.SDK.PhantomDeepLink::ParseSuccessfullySignedMessage(System.String)
extern void PhantomDeepLink_ParseSuccessfullySignedMessage_m51E0DE1A0485E1B8EA4022265ECA6C2CCE19DB2B (void);
// 0x00000372 System.Collections.Generic.Dictionary`2<System.String,System.String> Solana.Unity.SDK.PhantomDeepLink::ParseQueryString(System.String)
extern void PhantomDeepLink_ParseQueryString_mAC6CEEC06D2CADC4B82C6F174228B2E757E4076E (void);
// 0x00000373 System.Void Solana.Unity.SDK.PhantomDeepLink::.cctor()
extern void PhantomDeepLink__cctor_mEB37E930DEBB454307CDB57CFE2892172F6C4CD1 (void);
// 0x00000374 System.Void Solana.Unity.SDK.PhantomDeepLink/<>c::.cctor()
extern void U3CU3Ec__cctor_m7EB823FB91513E246530672C3F8B547B1B282C09 (void);
// 0x00000375 System.Void Solana.Unity.SDK.PhantomDeepLink/<>c::.ctor()
extern void U3CU3Ec__ctor_mB12647401A2C37A935205445BCB02996876AA45F (void);
// 0x00000376 System.Collections.Generic.KeyValuePair`2<System.String,System.String> Solana.Unity.SDK.PhantomDeepLink/<>c::<ParseQueryString>b__26_0(System.String)
extern void U3CU3Ec_U3CParseQueryStringU3Eb__26_0_m4C3CFD4A2FB41F97C242D73F827E7F45ED996711 (void);
// 0x00000377 System.String Solana.Unity.SDK.PhantomDeepLink/<>c::<ParseQueryString>b__26_1(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
extern void U3CU3Ec_U3CParseQueryStringU3Eb__26_1_m102EA68EE6CA539FDC0D92F5239048F2893D765B (void);
// 0x00000378 System.String Solana.Unity.SDK.PhantomDeepLink/<>c::<ParseQueryString>b__26_2(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
extern void U3CU3Ec_U3CParseQueryStringU3Eb__26_2_m85B21A8A66A054F7FF8D1A8051D5EBBAAFBB51E0 (void);
// 0x00000379 System.Void Solana.Unity.SDK.PhantomMessagePayload::.ctor(System.String,System.String,System.String)
extern void PhantomMessagePayload__ctor_m190900CB408192B867507B19D2EF313272AE2232 (void);
// 0x0000037A System.Void Solana.Unity.SDK.PhantomTransactionPayload::.ctor(System.String,System.String)
extern void PhantomTransactionPayload__ctor_m4C9AE33E562D772CD88EF250D56EDDABDFFA777D (void);
// 0x0000037B System.Void Solana.Unity.SDK.PhantomWebGL::.ctor(Solana.Unity.SDK.PhantomWalletOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void PhantomWebGL__ctor_m80EBEFF948D0346D0221D36C89429E5EB516A25C (void);
// 0x0000037C System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.PhantomWebGL::_Login(System.String)
extern void PhantomWebGL__Login_mBD1FAA12B149F751FA830D5232AFE474E87E2E25 (void);
// 0x0000037D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.PhantomWebGL::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void PhantomWebGL__SignTransaction_mE1D2B66064443365FB26193E114064B622CA3A62 (void);
// 0x0000037E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.PhantomWebGL::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void PhantomWebGL__SignAllTransactions_m6E3161BD504057756CAEB2253258797F02E69FF7 (void);
// 0x0000037F System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.PhantomWebGL::SignMessage(System.Byte[])
extern void PhantomWebGL_SignMessage_m949C1E3031A63895BC37608529F89099DBB5B546 (void);
// 0x00000380 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.PhantomWebGL::_CreateAccount(System.String,System.String)
extern void PhantomWebGL__CreateAccount_mD4F3DF80C1A7080B20EA17E064F9D4B156FE7810 (void);
// 0x00000381 System.Void Solana.Unity.SDK.PhantomWebGL::OnPhantomConnected(System.String)
extern void PhantomWebGL_OnPhantomConnected_m59FBF77E81DEABD19973FF25004B7535ABA04AE2 (void);
// 0x00000382 System.Void Solana.Unity.SDK.PhantomWebGL::OnTransactionSigned(System.String)
extern void PhantomWebGL_OnTransactionSigned_m165CABBA8446863ACBD0ECC56D915F06E78A90FF (void);
// 0x00000383 System.Void Solana.Unity.SDK.PhantomWebGL::OnMessageSigned(System.String)
extern void PhantomWebGL_OnMessageSigned_mF0225CDC896BF4CC36AFB7CB95790977581F831D (void);
// 0x00000384 System.Void Solana.Unity.SDK.PhantomWebGL::ExternConnectPhantom(System.Action`1<System.String>)
extern void PhantomWebGL_ExternConnectPhantom_mCF3CF207BE634084EC5DFF4D65800FD7C8D85FF0 (void);
// 0x00000385 System.Void Solana.Unity.SDK.PhantomWebGL::ExternSignTransaction(System.String,System.Action`1<System.String>)
extern void PhantomWebGL_ExternSignTransaction_m86CA9557DC86EB789A63BD83F37817FCF8974F64 (void);
// 0x00000386 System.Void Solana.Unity.SDK.PhantomWebGL::ExternSignMessage(System.String,System.Action`1<System.String>)
extern void PhantomWebGL_ExternSignMessage_m01BD32EF85A395852807F37094B7C94DFA20831A (void);
// 0x00000387 System.Byte[] Solana.Unity.SDK.Utils::GenerateRandomBytes(System.Int32)
extern void Utils_GenerateRandomBytes_mF21A45A5B40FE9860F537B47696531F409B44857 (void);
// 0x00000388 System.String Solana.Unity.SDK.Utils::CreateLoginDeepLink(System.String,System.String,System.String,System.String,Solana.Unity.SDK.RpcCluster)
extern void Utils_CreateLoginDeepLink_m26D4C74F4A60638ABEA302F7786875069E14C695 (void);
// 0x00000389 System.String Solana.Unity.SDK.Utils::CreateSignTransactionDeepLink(Solana.Unity.Rpc.Models.Transaction,System.Byte[],System.Byte[],System.String,System.String,System.String,System.String,Solana.Unity.SDK.RpcCluster)
extern void Utils_CreateSignTransactionDeepLink_m14041A8F844EE9C23BE18D059E2D60E812578BBA (void);
// 0x0000038A System.String Solana.Unity.SDK.Utils::CreateSignMessageDeepLink(System.Byte[],System.Byte[],System.Byte[],System.String,System.String,System.String,System.String,Solana.Unity.SDK.RpcCluster)
extern void Utils_CreateSignMessageDeepLink_m7EF253F560F54DFAA30E7FA40660321671CB2E41 (void);
// 0x0000038B System.String Solana.Unity.SDK.Utils::GetClusterString(Solana.Unity.SDK.RpcCluster)
extern void Utils_GetClusterString_m22F7B31E46E4E5D05D46919AE4BBDE7E8AD1AE3A (void);
// 0x0000038C System.Void Solana.Unity.SDK.PhantomWalletError::.ctor()
extern void PhantomWalletError__ctor_m30C8475213A0447ED9758F26AA56F0A45F4BFD82 (void);
// 0x0000038D System.Void Solana.Unity.SDK.PhantomWalletConnectSuccess::.ctor()
extern void PhantomWalletConnectSuccess__ctor_m1511DE8C8AED41309ED669B5ADE07BA359987013 (void);
// 0x0000038E System.Void Solana.Unity.SDK.PhantomWalletTransactionSuccessful::.ctor()
extern void PhantomWalletTransactionSuccessful__ctor_mD95FE46E37B734742AB1104CA326EF5A89EE5673 (void);
// 0x0000038F System.Void Solana.Unity.SDK.PhantomWalletTransactionSignedSuccessfully::.ctor()
extern void PhantomWalletTransactionSignedSuccessfully__ctor_m45B510DFA651EC05C65EFD971958F8FE66890EB8 (void);
// 0x00000390 System.Void Solana.Unity.SDK.PhantomWalletMessageSignedSuccessfully::.ctor()
extern void PhantomWalletMessageSignedSuccessfully__ctor_m866BFA6263B5EA6EA70CD6EEF148F13C538153FD (void);
// 0x00000391 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.SessionWallet::get_TargetProgram()
extern void SessionWallet_get_TargetProgram_m2433E7491C22E25520B030D06A36E10B5DFBD286 (void);
// 0x00000392 System.Void Solana.Unity.SDK.SessionWallet::set_TargetProgram(Solana.Unity.Wallet.PublicKey)
extern void SessionWallet_set_TargetProgram_mE3F2262D051605158BC6F8546F6E935D559A9E78 (void);
// 0x00000393 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.SessionWallet::get_SessionTokenPDA()
extern void SessionWallet_get_SessionTokenPDA_m02E19826C427776039815DFA97F8BDE9CCAFC883 (void);
// 0x00000394 System.Void Solana.Unity.SDK.SessionWallet::set_SessionTokenPDA(Solana.Unity.Wallet.PublicKey)
extern void SessionWallet_set_SessionTokenPDA_mCB431728E4FA2CD8C2D9D96A73BD6940054B59B7 (void);
// 0x00000395 System.Void Solana.Unity.SDK.SessionWallet::.ctor(Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void SessionWallet__ctor_mF8ACC2E41E18A806056E18D00442D1D492F9AD07 (void);
// 0x00000396 System.Boolean Solana.Unity.SDK.SessionWallet::HasSessionWallet()
extern void SessionWallet_HasSessionWallet_m8D2578E85A67E8C39D38527E95828F938A96EE3F (void);
// 0x00000397 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.SessionWallet::FindSessionToken(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.Account,Solana.Unity.Wallet.Account)
extern void SessionWallet_FindSessionToken_m82DE898D54795FAC87F6009F136D2FFE03F19409 (void);
// 0x00000398 System.Threading.Tasks.Task`1<Solana.Unity.SDK.SessionWallet> Solana.Unity.SDK.SessionWallet::GetSessionWallet(Solana.Unity.Wallet.PublicKey,System.String,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void SessionWallet_GetSessionWallet_m028F69F6C02390685D69C00E19A236B04943B34F (void);
// 0x00000399 Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.SDK.SessionWallet::CreateSessionIX(System.Boolean,System.Int64)
extern void SessionWallet_CreateSessionIX_mFC18A818D7BA84BE1959DDED607F6073F03A60C3 (void);
// 0x0000039A Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.SDK.SessionWallet::RevokeSessionIX()
extern void SessionWallet_RevokeSessionIX_m869A2113F5691DCE95D2F588282775F28DD60435 (void);
// 0x0000039B System.Threading.Tasks.Task`1<System.Boolean> Solana.Unity.SDK.SessionWallet::IsSessionTokenInitialized()
extern void SessionWallet_IsSessionTokenInitialized_m6BFE0E54E4B6079846D2FF70A69F38735639432A (void);
// 0x0000039C System.Threading.Tasks.Task`1<System.Boolean> Solana.Unity.SDK.SessionWallet::IsSessionTokenValid()
extern void SessionWallet_IsSessionTokenValid_mED765180525226E85FC3C69A2A47B9A73D15A264 (void);
// 0x0000039D System.String Solana.Unity.SDK.SessionWallet::DeriveSessionPassword(System.String)
extern void SessionWallet_DeriveSessionPassword_m72A0D3601A9EFEC241A88FFB365F7EA336DD7567 (void);
// 0x0000039E System.Void Solana.Unity.SDK.SessionWallet::DeleteSessionWallet()
extern void SessionWallet_DeleteSessionWallet_m0EBCFEB83C3D3B2070E334C580FEC6E9815E43AC (void);
// 0x0000039F System.Threading.Tasks.Task Solana.Unity.SDK.SessionWallet::PrepareLogout()
extern void SessionWallet_PrepareLogout_m4A8674131EA0A0F2A72C5E366BC1D2DFF394C0CD (void);
// 0x000003A0 System.Void Solana.Unity.SDK.SessionWallet/<GetSessionWallet>d__12::MoveNext()
extern void U3CGetSessionWalletU3Ed__12_MoveNext_m43B5CC6DEE1F3E769722C7FA09FFCF491AC98299 (void);
// 0x000003A1 System.Void Solana.Unity.SDK.SessionWallet/<GetSessionWallet>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSessionWalletU3Ed__12_SetStateMachine_m77927A9BAEC86B2A173E3E5ED4A6CF6F712437B4 (void);
// 0x000003A2 System.Void Solana.Unity.SDK.SessionWallet/<IsSessionTokenInitialized>d__15::MoveNext()
extern void U3CIsSessionTokenInitializedU3Ed__15_MoveNext_m5A42C3375A8462A03959C8C49579D7F7BCEF3894 (void);
// 0x000003A3 System.Void Solana.Unity.SDK.SessionWallet/<IsSessionTokenInitialized>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CIsSessionTokenInitializedU3Ed__15_SetStateMachine_mE29C7A9D1EFC8E63569A2FAF669C90E5AE99AE1D (void);
// 0x000003A4 System.Void Solana.Unity.SDK.SessionWallet/<IsSessionTokenValid>d__16::MoveNext()
extern void U3CIsSessionTokenValidU3Ed__16_MoveNext_m8CE869CC518E2C7F62E15CC977698EE90B726E85 (void);
// 0x000003A5 System.Void Solana.Unity.SDK.SessionWallet/<IsSessionTokenValid>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CIsSessionTokenValidU3Ed__16_SetStateMachine_mAD8658C3E35667930EC63D296C7660C81297CA7C (void);
// 0x000003A6 System.Void Solana.Unity.SDK.SessionWallet/<PrepareLogout>d__19::MoveNext()
extern void U3CPrepareLogoutU3Ed__19_MoveNext_m55C4CF186F8CBF0D80335CFB91CB92AEBDD875CE (void);
// 0x000003A7 System.Void Solana.Unity.SDK.SessionWallet/<PrepareLogout>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CPrepareLogoutU3Ed__19_SetStateMachine_mF29C3A1F8366208B84D6AF433CAE7553CEED1244 (void);
// 0x000003A8 System.Void Solana.Unity.SDK.IMessageSender::Send(System.Byte[])
// 0x000003A9 System.Void Solana.Unity.SDK.JsonRpc20Client::add_MessageEvent(Solana.Unity.SDK.JsonRpc20Client/MessageHandler)
extern void JsonRpc20Client_add_MessageEvent_mB1CC2CF565C962CC75FD18983F0E0E368113D9C6 (void);
// 0x000003AA System.Void Solana.Unity.SDK.JsonRpc20Client::remove_MessageEvent(Solana.Unity.SDK.JsonRpc20Client/MessageHandler)
extern void JsonRpc20Client_remove_MessageEvent_m0A0C2EE6808302087FD12BA5172B7A64E1F12073 (void);
// 0x000003AB System.Void Solana.Unity.SDK.JsonRpc20Client::.ctor(Solana.Unity.SDK.IMessageSender)
extern void JsonRpc20Client__ctor_mAE3E7D7E41BD3723AFB20641180F598B4E5D5AFA (void);
// 0x000003AC System.Threading.Tasks.Task`1<T> Solana.Unity.SDK.JsonRpc20Client::SendRequest(Solana.Unity.SDK.JsonRequest)
// 0x000003AD System.Void Solana.Unity.SDK.JsonRpc20Client::Receive(System.String)
extern void JsonRpc20Client_Receive_mEA5D12C79157A065D45ECAC8E403A4690DFB6B26 (void);
// 0x000003AE System.Void Solana.Unity.SDK.JsonRpc20Client::RegisterListener(System.Threading.Tasks.TaskCompletionSource`1<T>)
// 0x000003AF System.Void Solana.Unity.SDK.JsonRpc20Client::Receiver(System.Threading.Tasks.TaskCompletionSource`1<T>,System.String)
// 0x000003B0 System.Void Solana.Unity.SDK.JsonRpc20Client/MessageHandler::.ctor(System.Object,System.IntPtr)
extern void MessageHandler__ctor_mCB77E590CE77B11C2223C436597E4DA33A704D42 (void);
// 0x000003B1 System.Void Solana.Unity.SDK.JsonRpc20Client/MessageHandler::Invoke(System.String)
extern void MessageHandler_Invoke_m8D9616573ABD8B44E60BEE2B35401D3B7E4D55AE (void);
// 0x000003B2 System.IAsyncResult Solana.Unity.SDK.JsonRpc20Client/MessageHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void MessageHandler_BeginInvoke_m9B30B66812C3754FF75D47C8E348EFDD932B8475 (void);
// 0x000003B3 System.Void Solana.Unity.SDK.JsonRpc20Client/MessageHandler::EndInvoke(System.IAsyncResult)
extern void MessageHandler_EndInvoke_mD285592F8BC59335C4C1332963F0D3BB5C080FA4 (void);
// 0x000003B4 System.Void Solana.Unity.SDK.JsonRpc20Client/<>c__DisplayClass8_0`1::.ctor()
// 0x000003B5 System.Void Solana.Unity.SDK.JsonRpc20Client/<>c__DisplayClass8_0`1::<RegisterListener>b__0(System.String)
// 0x000003B6 System.Void Solana.Unity.SDK.JsonRpc20Client/<>c__DisplayClass8_0`1::<RegisterListener>b__1(System.Threading.Tasks.Task`1<T>)
// 0x000003B7 System.String Solana.Unity.SDK.JsonRequest::get_JsonRpc()
extern void JsonRequest_get_JsonRpc_m3394EB26D16812DA395B37D0F9727025B2650C0E (void);
// 0x000003B8 System.Void Solana.Unity.SDK.JsonRequest::set_JsonRpc(System.String)
extern void JsonRequest_set_JsonRpc_mAA201D60F5F5406D0CA7446DC7055152A75C34E4 (void);
// 0x000003B9 System.String Solana.Unity.SDK.JsonRequest::get_Method()
extern void JsonRequest_get_Method_m45142653DBF56922B2A585A35F717857358D320A (void);
// 0x000003BA System.Void Solana.Unity.SDK.JsonRequest::set_Method(System.String)
extern void JsonRequest_set_Method_mFCA4B0701DBFAC70A0BF7C9D54E9C92D79701444 (void);
// 0x000003BB Solana.Unity.SDK.JsonRequest/JsonRequestParams Solana.Unity.SDK.JsonRequest::get_Params()
extern void JsonRequest_get_Params_mCB2C546CBB902CF3ADBF3776F5FE4E2D1A3AD7B3 (void);
// 0x000003BC System.Void Solana.Unity.SDK.JsonRequest::set_Params(Solana.Unity.SDK.JsonRequest/JsonRequestParams)
extern void JsonRequest_set_Params_m657C7499DDA561322F54E9236ED4209FDC994D1C (void);
// 0x000003BD System.Int32 Solana.Unity.SDK.JsonRequest::get_Id()
extern void JsonRequest_get_Id_m8F9CE911EA6C7092459F8E79D1C75DEB1DE664C2 (void);
// 0x000003BE System.Void Solana.Unity.SDK.JsonRequest::set_Id(System.Int32)
extern void JsonRequest_set_Id_mDFCE17828D1A3B1A144579BD54548512B402FE5D (void);
// 0x000003BF System.Void Solana.Unity.SDK.JsonRequest::.ctor()
extern void JsonRequest__ctor_mA3E78FDEB0C84785C105BA2711136F9803232F43 (void);
// 0x000003C0 System.Uri Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::get_Uri()
extern void JsonRequestIdentity_get_Uri_m4D21ECBBFC39DBBB750284A1F3661B9C4323EBAE (void);
// 0x000003C1 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::set_Uri(System.Uri)
extern void JsonRequestIdentity_set_Uri_mEC6093D5C9BDBB403DCCB4320607F69272F27870 (void);
// 0x000003C2 System.Uri Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::get_Icon()
extern void JsonRequestIdentity_get_Icon_m781D866A41981B837BC393561E9288265831980C (void);
// 0x000003C3 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::set_Icon(System.Uri)
extern void JsonRequestIdentity_set_Icon_mE8013575B46909FFEC9201331C809317B6B9950D (void);
// 0x000003C4 System.String Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::get_Name()
extern void JsonRequestIdentity_get_Name_m45ED8697AFFCE82F60E7E5B9B33027430E95E670 (void);
// 0x000003C5 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::set_Name(System.String)
extern void JsonRequestIdentity_set_Name_m7E84FAE9B0AEF5C1B28994487EC15860AA064DE8 (void);
// 0x000003C6 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::.ctor()
extern void JsonRequestIdentity__ctor_m5673949D087410D38DFB3C24A7C0000170061B34 (void);
// 0x000003C7 Solana.Unity.SDK.JsonRequest/JsonRequestIdentity Solana.Unity.SDK.JsonRequest/JsonRequestParams::get_Identity()
extern void JsonRequestParams_get_Identity_m748E93C63732FB29E11DDF784300727B696911BC (void);
// 0x000003C8 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestParams::set_Identity(Solana.Unity.SDK.JsonRequest/JsonRequestIdentity)
extern void JsonRequestParams_set_Identity_m6CD726E2C1AFEE5E23BF799518C02CC28A313220 (void);
// 0x000003C9 System.String Solana.Unity.SDK.JsonRequest/JsonRequestParams::get_Cluster()
extern void JsonRequestParams_get_Cluster_m7A7FA905BD19DFD63677E953443E06DB58F933D2 (void);
// 0x000003CA System.Void Solana.Unity.SDK.JsonRequest/JsonRequestParams::set_Cluster(System.String)
extern void JsonRequestParams_set_Cluster_mC45A5585707DB3639B4B513B1F48D92A6D3908B7 (void);
// 0x000003CB System.String Solana.Unity.SDK.JsonRequest/JsonRequestParams::get_AuthToken()
extern void JsonRequestParams_get_AuthToken_m8FBC507A60F38EFCDA3D5667CA15B0631F13FDF3 (void);
// 0x000003CC System.Void Solana.Unity.SDK.JsonRequest/JsonRequestParams::set_AuthToken(System.String)
extern void JsonRequestParams_set_AuthToken_m7FE491F866B94E972FF2AFF06BC1FEA4B20309A7 (void);
// 0x000003CD System.Collections.Generic.List`1<System.String> Solana.Unity.SDK.JsonRequest/JsonRequestParams::get_Payloads()
extern void JsonRequestParams_get_Payloads_mD7A8A310EDB17AF8ABCA167DAD756D31AB298ACB (void);
// 0x000003CE System.Void Solana.Unity.SDK.JsonRequest/JsonRequestParams::set_Payloads(System.Collections.Generic.List`1<System.String>)
extern void JsonRequestParams_set_Payloads_m9E41FCBC0CD23E4583F7B2A2CA4DEF921699DC99 (void);
// 0x000003CF System.Collections.Generic.List`1<System.String> Solana.Unity.SDK.JsonRequest/JsonRequestParams::get_Addresses()
extern void JsonRequestParams_get_Addresses_m0A4C5E99246C080B5F3B32F1FCF711D68B5CC0D2 (void);
// 0x000003D0 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestParams::set_Addresses(System.Collections.Generic.List`1<System.String>)
extern void JsonRequestParams_set_Addresses_mE42A6E814BDD4B086ACFAD249A9E04ADB3230B25 (void);
// 0x000003D1 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestParams::.ctor()
extern void JsonRequestParams__ctor_mFFB45703FD0EB864CE4BB20BF5B79FB46DBA44BC (void);
// 0x000003D2 System.String Solana.Unity.SDK.Response`1::get_JsonRpc()
// 0x000003D3 System.Void Solana.Unity.SDK.Response`1::set_JsonRpc(System.String)
// 0x000003D4 T Solana.Unity.SDK.Response`1::get_Result()
// 0x000003D5 System.Void Solana.Unity.SDK.Response`1::set_Result(T)
// 0x000003D6 System.Int64 Solana.Unity.SDK.Response`1::get_Id()
// 0x000003D7 System.Void Solana.Unity.SDK.Response`1::set_Id(System.Int64)
// 0x000003D8 Solana.Unity.SDK.Response`1/ResponseError<T> Solana.Unity.SDK.Response`1::get_Error()
// 0x000003D9 System.Void Solana.Unity.SDK.Response`1::set_Error(Solana.Unity.SDK.Response`1/ResponseError<T>)
// 0x000003DA System.Boolean Solana.Unity.SDK.Response`1::get_WasSuccessful()
// 0x000003DB System.Boolean Solana.Unity.SDK.Response`1::get_Failed()
// 0x000003DC System.Void Solana.Unity.SDK.Response`1::.ctor()
// 0x000003DD System.Int64 Solana.Unity.SDK.Response`1/ResponseError::get_Code()
// 0x000003DE System.Void Solana.Unity.SDK.Response`1/ResponseError::set_Code(System.Int64)
// 0x000003DF System.String Solana.Unity.SDK.Response`1/ResponseError::get_Message()
// 0x000003E0 System.Void Solana.Unity.SDK.Response`1/ResponseError::set_Message(System.String)
// 0x000003E1 System.Void Solana.Unity.SDK.Response`1/ResponseError::.ctor()
// 0x000003E2 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapterOptions::.ctor()
extern void SolanaMobileWalletAdapterOptions__ctor_mFC58978115FA84A7EE1FEF8A1963DF52F115B943 (void);
// 0x000003E3 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter::.ctor(Solana.Unity.SDK.SolanaMobileWalletAdapterOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void SolanaMobileWalletAdapter__ctor_mC92267E0623C178EF6783BC0EA30BA6F0EF5903D (void);
// 0x000003E4 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.SolanaMobileWalletAdapter::_Login(System.String)
extern void SolanaMobileWalletAdapter__Login_m6F5F80F586764B6A1D63957C5D7ECDACC4E87193 (void);
// 0x000003E5 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.SolanaMobileWalletAdapter::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void SolanaMobileWalletAdapter__SignTransaction_mA565FD705BB3855B4BDF81CCD05B91575C3EA3D2 (void);
// 0x000003E6 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.SolanaMobileWalletAdapter::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void SolanaMobileWalletAdapter__SignAllTransactions_m9C420D18252C7C2504AA7906F793397A80B725D3 (void);
// 0x000003E7 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter::Logout()
extern void SolanaMobileWalletAdapter_Logout_m9DAD016CA084F4780C4740CFE8CAA258FA60A79B (void);
// 0x000003E8 System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.SolanaMobileWalletAdapter::SignMessage(System.Byte[])
extern void SolanaMobileWalletAdapter_SignMessage_mF1EA8AB0C74FC77AC2838E7C82874B6042605A2B (void);
// 0x000003E9 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.SolanaMobileWalletAdapter::_CreateAccount(System.String,System.String)
extern void SolanaMobileWalletAdapter__CreateAccount_m80D4D725D2B7AA9E2E16EEDFA0272BB8DFF899A6 (void);
// 0x000003EA System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m7F480A53DF45745F2186977ECCFBF79A824C191C (void);
// 0x000003EB System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass7_0::<_Login>b__0(IAdapterOperations)
extern void U3CU3Ec__DisplayClass7_0_U3C_LoginU3Eb__0_m4D4E13411D2ECD406415CC1AB17FCECF6BC4DB71 (void);
// 0x000003EC System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass7_0/<<_Login>b__0>d::MoveNext()
extern void U3CU3C_LoginU3Eb__0U3Ed_MoveNext_m26588C90E5301163809F96C7A7471AA7429227B0 (void);
// 0x000003ED System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass7_0/<<_Login>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3C_LoginU3Eb__0U3Ed_SetStateMachine_mF6C3111EAEB2B7F2E56CEDB8AA785B23F68AC35F (void);
// 0x000003EE System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<_Login>d__7::MoveNext()
extern void U3C_LoginU3Ed__7_MoveNext_mF823572AA663C47B14AD1617F3412C6D5D533329 (void);
// 0x000003EF System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<_Login>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3C_LoginU3Ed__7_SetStateMachine_m81CB3FDE733BFC4B615A26A200701BD90014A637 (void);
// 0x000003F0 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mD45C792E2D4D6E73C661ED4896028635572B8943 (void);
// 0x000003F1 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0::<_SignTransaction>b__0(IAdapterOperations)
extern void U3CU3Ec__DisplayClass8_0_U3C_SignTransactionU3Eb__0_m5F6552E700217BE8E0DE75478545CF0E327F1661 (void);
// 0x000003F2 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0::<_SignTransaction>b__1(IAdapterOperations)
extern void U3CU3Ec__DisplayClass8_0_U3C_SignTransactionU3Eb__1_m3F92C89D57C2A87A2D4209872DB3985444B0BD74 (void);
// 0x000003F3 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0/<<_SignTransaction>b__0>d::MoveNext()
extern void U3CU3C_SignTransactionU3Eb__0U3Ed_MoveNext_mEE00B688EB65DFCA192EA535CD5DFD7CDC82A31A (void);
// 0x000003F4 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0/<<_SignTransaction>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3C_SignTransactionU3Eb__0U3Ed_SetStateMachine_mC080A980291CF59FA19E0A20B0BEF58F700A61DD (void);
// 0x000003F5 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0/<<_SignTransaction>b__1>d::MoveNext()
extern void U3CU3C_SignTransactionU3Eb__1U3Ed_MoveNext_m2566696F1ED9C9E578B55ACAF2A7EC4391FD68AD (void);
// 0x000003F6 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0/<<_SignTransaction>b__1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3C_SignTransactionU3Eb__1U3Ed_SetStateMachine_m7FC93260964AD6BC7DBC0242D0C261632B505BDE (void);
// 0x000003F7 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<_SignTransaction>d__8::MoveNext()
extern void U3C_SignTransactionU3Ed__8_MoveNext_m571FC4EF2AC08D0A93761810D14269C7AC09FEEC (void);
// 0x000003F8 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<_SignTransaction>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3C_SignTransactionU3Ed__8_SetStateMachine_mFBECED754B5A2B22C6169BBF0BF07FD0C3D4A51A (void);
// 0x000003F9 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0::.ctor()
extern void U3CU3Ec__DisplayClass11_0__ctor_m2C78F6E05982CAB9D85F0307DC7535D64339E936 (void);
// 0x000003FA System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0::<SignMessage>b__0(IAdapterOperations)
extern void U3CU3Ec__DisplayClass11_0_U3CSignMessageU3Eb__0_m6A362B44928F82D31EC7BF7A4A3E06CCF79F84CE (void);
// 0x000003FB System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0::<SignMessage>b__1(IAdapterOperations)
extern void U3CU3Ec__DisplayClass11_0_U3CSignMessageU3Eb__1_m4C399F32D7522B6E8C6D637D9D384306446EA6B2 (void);
// 0x000003FC System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0/<<SignMessage>b__0>d::MoveNext()
extern void U3CU3CSignMessageU3Eb__0U3Ed_MoveNext_mFC167ECC69464A175E3EA03D92B283B06B394DAF (void);
// 0x000003FD System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0/<<SignMessage>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CSignMessageU3Eb__0U3Ed_SetStateMachine_mA07822211257DA9E5C09D200CE44BB07E53ADC9F (void);
// 0x000003FE System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0/<<SignMessage>b__1>d::MoveNext()
extern void U3CU3CSignMessageU3Eb__1U3Ed_MoveNext_m386EDA145D0F34D098E7F8ACDD7E9970CA1521E7 (void);
// 0x000003FF System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0/<<SignMessage>b__1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CSignMessageU3Eb__1U3Ed_SetStateMachine_mEA4C6B0193ED70EEAABB16347288A2DDD1A1C7DF (void);
// 0x00000400 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<SignMessage>d__11::MoveNext()
extern void U3CSignMessageU3Ed__11_MoveNext_mC8A86E34B9137761557FA5CDF850DAA6F3B905FD (void);
// 0x00000401 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<SignMessage>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSignMessageU3Ed__11_SetStateMachine_mFC2F7AEC9736E2D3F7A8EA525754E8560751BCF6 (void);
// 0x00000402 System.Void Solana.Unity.SDK.SolanaWalletAdapterOptions::.ctor()
extern void SolanaWalletAdapterOptions__ctor_mCE883E7BBC2F078F1BF6E674B2FA2C007A6EB40B (void);
// 0x00000403 System.Void Solana.Unity.SDK.SolanaWalletAdapter::.ctor(Solana.Unity.SDK.SolanaWalletAdapterOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void SolanaWalletAdapter__ctor_mA7D8FAF8A270B87F40DC8388696C66B3DECEBE34 (void);
// 0x00000404 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.SolanaWalletAdapter::_Login(System.String)
extern void SolanaWalletAdapter__Login_m83AE29192AB5A0019EAE7A1AC57FB746480DC258 (void);
// 0x00000405 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.SolanaWalletAdapter::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void SolanaWalletAdapter__SignTransaction_m1ABF8174714E67AD74326FDE2991FA3BDB953BCF (void);
// 0x00000406 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.SolanaWalletAdapter::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void SolanaWalletAdapter__SignAllTransactions_m06A15BD822BCB2D10EB55D9421ED199580BF7040 (void);
// 0x00000407 System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.SolanaWalletAdapter::SignMessage(System.Byte[])
extern void SolanaWalletAdapter_SignMessage_m335810BBA8E5B5B85C37E60AC5E76D23F31F4AE1 (void);
// 0x00000408 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.SolanaWalletAdapter::_CreateAccount(System.String,System.String)
extern void SolanaWalletAdapter__CreateAccount_m291C3562CE2590987BFD193FF11522D1A5E6747A (void);
// 0x00000409 System.Void Solana.Unity.SDK.SolanaWalletAdapter::Logout()
extern void SolanaWalletAdapter_Logout_m87B07347CF608DCD99C73486DBB4D2C43F1BE130 (void);
// 0x0000040A System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGLOptions::.ctor()
extern void SolanaWalletAdapterWebGLOptions__ctor_mFA4C212A4FE8F022D0FA89EC288382F0567F5C1C (void);
// 0x0000040B UnityEngine.GameObject Solana.Unity.SDK.SolanaWalletAdapterWebGL::get_WalletAdapterUI()
extern void SolanaWalletAdapterWebGL_get_WalletAdapterUI_m00DAEA8A939CE4B70ED55A193D10B70337999B65 (void);
// 0x0000040C System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::set_WalletAdapterUI(UnityEngine.GameObject)
extern void SolanaWalletAdapterWebGL_set_WalletAdapterUI_m73623EBD6EC9382F3BBB58A98112B21FDE43E0AA (void);
// 0x0000040D Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecs[] Solana.Unity.SDK.SolanaWalletAdapterWebGL::get_Wallets()
extern void SolanaWalletAdapterWebGL_get_Wallets_m03B9931F829D34BE28051D3D4611C2AD8E8ADF3E (void);
// 0x0000040E System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::set_Wallets(Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecs[])
extern void SolanaWalletAdapterWebGL_set_Wallets_mF0F35C3371099E5DB8FA0C7D38EF336FE9C29D54 (void);
// 0x0000040F System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::.ctor(Solana.Unity.SDK.SolanaWalletAdapterWebGLOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void SolanaWalletAdapterWebGL__ctor_m01E7EEA75B6387853CA01D5606926433B60AE0E8 (void);
// 0x00000410 System.Threading.Tasks.Task Solana.Unity.SDK.SolanaWalletAdapterWebGL::InitWallets()
extern void SolanaWalletAdapterWebGL_InitWallets_m2CB1EE26451203F3E0679A68432D296A14CDEAC4 (void);
// 0x00000411 System.Threading.Tasks.Task`1<System.Boolean> Solana.Unity.SDK.SolanaWalletAdapterWebGL::IsXnft()
extern void SolanaWalletAdapterWebGL_IsXnft_mD4CF07AAECCDE1F90F4F5ABEBFB699CF3E1C6CDC (void);
// 0x00000412 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.SolanaWalletAdapterWebGL::_Login(System.String)
extern void SolanaWalletAdapterWebGL__Login_m279D15703C0825C41AD1A3E50C834E516A5CAA3B (void);
// 0x00000413 System.Threading.Tasks.Task Solana.Unity.SDK.SolanaWalletAdapterWebGL::SetCurrentWallet()
extern void SolanaWalletAdapterWebGL_SetCurrentWallet_mE8BE71964B7AB5D83BFBCBF546D54D613D0B2F92 (void);
// 0x00000414 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.SolanaWalletAdapterWebGL::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void SolanaWalletAdapterWebGL__SignTransaction_mA3510F54C9391811C94A9CD42A9537F9ABEA8B6D (void);
// 0x00000415 System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.SolanaWalletAdapterWebGL::SignMessage(System.Byte[])
extern void SolanaWalletAdapterWebGL_SignMessage_m321CCD05643EB80DFBA06AAA2C9915690D4D5B57 (void);
// 0x00000416 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.SolanaWalletAdapterWebGL::_CreateAccount(System.String,System.String)
extern void SolanaWalletAdapterWebGL__CreateAccount_m4F6CFD8BC6E2D556F4DD2280607D4A86D960B477 (void);
// 0x00000417 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.SolanaWalletAdapterWebGL::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void SolanaWalletAdapterWebGL__SignAllTransactions_m0EEB0FA3D744AFB48B58DA6EE3F47BE96AAAC426 (void);
// 0x00000418 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::OnWalletConnected(System.String)
extern void SolanaWalletAdapterWebGL_OnWalletConnected_m52F659CC00A73A916A6AE1F7149EDC74C206E3F8 (void);
// 0x00000419 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::OnTransactionSigned(System.String)
extern void SolanaWalletAdapterWebGL_OnTransactionSigned_m0E6658F8F7D1DEEDA59BF5C872E966D1A6D38F57 (void);
// 0x0000041A System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::OnAllTransactionsSigned(System.String)
extern void SolanaWalletAdapterWebGL_OnAllTransactionsSigned_m68547D32562C807BDCFE6E4A2E63BF41A26C4DBB (void);
// 0x0000041B System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::OnMessageSigned(System.String)
extern void SolanaWalletAdapterWebGL_OnMessageSigned_m3246741C9145ACEC7E8EBF1F9A534CF7FD6BBED8 (void);
// 0x0000041C System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::OnWalletsInitialized(System.Boolean)
extern void SolanaWalletAdapterWebGL_OnWalletsInitialized_mAC15BBFC4E311A68D0ED2E36D2D4125CCF527A1D (void);
// 0x0000041D System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::OnWalletsLoaded(System.String)
extern void SolanaWalletAdapterWebGL_OnWalletsLoaded_m45CA61922BE84B2F28BB77715AD43D5DBF0E3B02 (void);
// 0x0000041E System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::ExternConnectWallet(System.String,System.Action`1<System.String>)
extern void SolanaWalletAdapterWebGL_ExternConnectWallet_m5609939F337E69B1699ACCD272EF82306AD18B84 (void);
// 0x0000041F System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::ExternSignTransactionWallet(System.String,System.String,System.Action`1<System.String>)
extern void SolanaWalletAdapterWebGL_ExternSignTransactionWallet_mC52D9E946571B7B4FA83A250CBFDE695AF15009D (void);
// 0x00000420 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::ExternSignAllTransactionsWallet(System.String,System.String,System.Action`1<System.String>)
extern void SolanaWalletAdapterWebGL_ExternSignAllTransactionsWallet_m0B2596A6E8C7E043810BB1801B2093903F4F045E (void);
// 0x00000421 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::ExternSignMessageWallet(System.String,System.String,System.Action`1<System.String>)
extern void SolanaWalletAdapterWebGL_ExternSignMessageWallet_m4B8592CABCAB41FEEC7C1BFA18BB0E6A94809453 (void);
// 0x00000422 System.String Solana.Unity.SDK.SolanaWalletAdapterWebGL::ExternGetWallets(System.Action`1<System.String>)
extern void SolanaWalletAdapterWebGL_ExternGetWallets_m8D92F7EEC525034A760DA3595AB744ECA8CB11B9 (void);
// 0x00000423 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::InitWalletAdapter(System.Action`1<System.Boolean>)
extern void SolanaWalletAdapterWebGL_InitWalletAdapter_m9A3782096BF4CA875F9AB402691A101951C32EA6 (void);
// 0x00000424 System.String Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecs::ToString()
extern void WalletSpecs_ToString_m28BC8C62B1601AC7E63225B31A27CDC3C2E7F677 (void);
// 0x00000425 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecs::.ctor()
extern void WalletSpecs__ctor_m86AEB466BFD6A7C7494F5DEF423505A4C639552C (void);
// 0x00000426 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecsObject::.ctor()
extern void WalletSpecsObject__ctor_m3F3016C8DA64852AD2CBE572FCBBEF4BCF0F6162 (void);
// 0x00000427 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<InitWallets>d__21::MoveNext()
extern void U3CInitWalletsU3Ed__21_MoveNext_mCFD4BF7EFE02564F58221F60E8E856486CCF4606 (void);
// 0x00000428 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<InitWallets>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitWalletsU3Ed__21_SetStateMachine_m40DBEFE6FC143C0696EB2331A60218769556CD91 (void);
// 0x00000429 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<IsXnft>d__22::MoveNext()
extern void U3CIsXnftU3Ed__22_MoveNext_m20291000B95120590DE13765C188052636B48C95 (void);
// 0x0000042A System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<IsXnft>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CIsXnftU3Ed__22_SetStateMachine_mBEDCC06148B011BEF51FABE9F8E2DB7E0703A572 (void);
// 0x0000042B System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<_Login>d__23::MoveNext()
extern void U3C_LoginU3Ed__23_MoveNext_m71DD54BBB7606E7F8A6A10BF0F648811FA6EA75A (void);
// 0x0000042C System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<_Login>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3C_LoginU3Ed__23_SetStateMachine_mFA778CF821021B1760029E5AD544B34596108E89 (void);
// 0x0000042D System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_m48D1CDB7DA734D76F68F760F7D8566C709A11F62 (void);
// 0x0000042E System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<>c__DisplayClass24_0::<SetCurrentWallet>b__0(System.String)
extern void U3CU3Ec__DisplayClass24_0_U3CSetCurrentWalletU3Eb__0_m4BDFDE49A5387AC901B26C26AA34DB718187413A (void);
// 0x0000042F System.Boolean Solana.Unity.SDK.SolanaWalletAdapterWebGL/<>c__DisplayClass24_0::<SetCurrentWallet>b__1(Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecs)
extern void U3CU3Ec__DisplayClass24_0_U3CSetCurrentWalletU3Eb__1_m416E09DD89E12C5EC70F3D3B204095A2B0AE3212 (void);
// 0x00000430 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<SetCurrentWallet>d__24::MoveNext()
extern void U3CSetCurrentWalletU3Ed__24_MoveNext_m8DA08B3686C8AE5588638E9DCA3112F71C9A4996 (void);
// 0x00000431 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<SetCurrentWallet>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSetCurrentWalletU3Ed__24_SetStateMachine_mF93E59D255CADDFF96EF31823FC4D526090CE1D9 (void);
// 0x00000432 System.String Solana.Unity.SDK.WalletAdapterButton::get_Name()
extern void WalletAdapterButton_get_Name_mF241B61FB3767951289836A153D1FB0876B2572F (void);
// 0x00000433 System.Void Solana.Unity.SDK.WalletAdapterButton::set_Name(System.String)
extern void WalletAdapterButton_set_Name_m8E68F056AA0C36D6628B332E36C612B04500E548 (void);
// 0x00000434 System.Void Solana.Unity.SDK.WalletAdapterButton::OnSelected()
extern void WalletAdapterButton_OnSelected_m41D9138B207829337F6171F3FE91D9C41D6C2E92 (void);
// 0x00000435 System.Void Solana.Unity.SDK.WalletAdapterButton::.ctor()
extern void WalletAdapterButton__ctor_m64DA773EDED1785B71BD27B79D511B808BB78293 (void);
// 0x00000436 System.Void Solana.Unity.SDK.WalletAdapterScreen::OnEnable()
extern void WalletAdapterScreen_OnEnable_mF9898D50965A6FCF21AAC8161BFFC5D9F5945A95 (void);
// 0x00000437 System.Void Solana.Unity.SDK.WalletAdapterScreen::_createWalletAdapterButton(Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecs)
extern void WalletAdapterScreen__createWalletAdapterButton_m6344416493D66BF91D141B4D2B73E79874FE24FD (void);
// 0x00000438 System.Void Solana.Unity.SDK.WalletAdapterScreen::UpdateWalletAdapterButtons()
extern void WalletAdapterScreen_UpdateWalletAdapterButtons_m69B382707A88E4A2E4D8B6A63A40C21EB54ABAE6 (void);
// 0x00000439 System.Void Solana.Unity.SDK.WalletAdapterScreen::OnClose()
extern void WalletAdapterScreen_OnClose_m0399288F37E03926A7B08D57CE08F9963406C107 (void);
// 0x0000043A System.Void Solana.Unity.SDK.WalletAdapterScreen::.ctor()
extern void WalletAdapterScreen__ctor_m710315BCA11879CE2D6459119936E4774F1E6741 (void);
// 0x0000043B System.Void Solana.Unity.SDK.WalletAdapterScreen::<_createWalletAdapterButton>b__5_0(System.String)
extern void WalletAdapterScreen_U3C_createWalletAdapterButtonU3Eb__5_0_mEDF88A56D47C74FB69CE6DEFBB4DF0434128313E (void);
// 0x0000043C System.Void Solana.Unity.SDK.UnityRateLimiter::.ctor(System.Int32,System.Int32)
extern void UnityRateLimiter__ctor_m5A3857EFDC323CA482760B8E9C4BB7C8A0061CC8 (void);
// 0x0000043D Solana.Unity.SDK.UnityRateLimiter Solana.Unity.SDK.UnityRateLimiter::Create()
extern void UnityRateLimiter_Create_m543FD9E67876BD4EFEAF7D1553B86092780EAB40 (void);
// 0x0000043E System.Boolean Solana.Unity.SDK.UnityRateLimiter::CanFire()
extern void UnityRateLimiter_CanFire_m624E172B42495D96FE534D803B036EA83BDAC539 (void);
// 0x0000043F System.Void Solana.Unity.SDK.UnityRateLimiter::Fire()
extern void UnityRateLimiter_Fire_mB650F73DC824F20F0BC157F264F9DC0AB358EA2C (void);
// 0x00000440 System.DateTime Solana.Unity.SDK.UnityRateLimiter::NextFireAllowed(System.DateTime)
extern void UnityRateLimiter_NextFireAllowed_m28D43FB28376FEDA47FF4051F536ABA2B72CDDD8 (void);
// 0x00000441 Solana.Unity.SDK.UnityRateLimiter Solana.Unity.SDK.UnityRateLimiter::PerSeconds(System.Int32)
extern void UnityRateLimiter_PerSeconds_m256EB0C4E105288F9D4DEE6BB83C1A5D031D9B76 (void);
// 0x00000442 Solana.Unity.SDK.UnityRateLimiter Solana.Unity.SDK.UnityRateLimiter::PerMs(System.Int32)
extern void UnityRateLimiter_PerMs_mB1AB2E67603A9802357A230BDBDCC8AED3F705BF (void);
// 0x00000443 Solana.Unity.SDK.UnityRateLimiter Solana.Unity.SDK.UnityRateLimiter::AllowHits(System.Int32)
extern void UnityRateLimiter_AllowHits_m5BEC977A9221882DE49D39CB60FB1A9840595292 (void);
// 0x00000444 System.String Solana.Unity.SDK.UnityRateLimiter::ToString()
extern void UnityRateLimiter_ToString_m3B142EEC9634032EE875590B505A5082EC03A573 (void);
// 0x00000445 System.Void Solana.Unity.SDK.UnityRateLimiter/<Fire>d__6::MoveNext()
extern void U3CFireU3Ed__6_MoveNext_m507D9ED243310C6ADFC2E61B458DE9505F9E9BEA (void);
// 0x00000446 System.Void Solana.Unity.SDK.UnityRateLimiter/<Fire>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CFireU3Ed__6_SetStateMachine_m051044CC9B214DA55D7F8AA30B1FA7FEF581EB9F (void);
// 0x00000447 Solana.Unity.SDK.RpcCluster Solana.Unity.SDK.WalletBase::get_RpcCluster()
extern void WalletBase_get_RpcCluster_mE4D71E2542DA0EDAC673E4A69CBEC24D41E73A60 (void);
// 0x00000448 Solana.Unity.Rpc.IRpcClient Solana.Unity.SDK.WalletBase::get_ActiveRpcClient()
extern void WalletBase_get_ActiveRpcClient_m687535E1EA6E8C32360E2B8D6A280149AF25B09F (void);
// 0x00000449 Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.SDK.WalletBase::get_ActiveStreamingRpcClient()
extern void WalletBase_get_ActiveStreamingRpcClient_m48A25F10EB4F7F65BF5247F3FD90DA6791C7D19A (void);
// 0x0000044A Solana.Unity.Wallet.Account Solana.Unity.SDK.WalletBase::get_Account()
extern void WalletBase_get_Account_m7732EE5A383DB9B749A520E92DE60384D413F973 (void);
// 0x0000044B System.Void Solana.Unity.SDK.WalletBase::set_Account(Solana.Unity.Wallet.Account)
extern void WalletBase_set_Account_m27F7B52F42474DBF54C20523E868E07073DFB231 (void);
// 0x0000044C Solana.Unity.Wallet.Bip39.Mnemonic Solana.Unity.SDK.WalletBase::get_Mnemonic()
extern void WalletBase_get_Mnemonic_m04DDBE5B054D0670AEDCE2993280DD0962D302CB (void);
// 0x0000044D System.Void Solana.Unity.SDK.WalletBase::set_Mnemonic(Solana.Unity.Wallet.Bip39.Mnemonic)
extern void WalletBase_set_Mnemonic_m5DE5994672AF1312EEEB8BAF5D87821CABB70742 (void);
// 0x0000044E System.Void Solana.Unity.SDK.WalletBase::.ctor(Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void WalletBase__ctor_mF3FC1E138065DEA23D6169D8F50897D5CD3C7B73 (void);
// 0x0000044F System.Void Solana.Unity.SDK.WalletBase::Setup()
extern void WalletBase_Setup_mD8AEB89DAEF1E6E112BC5A4DBF80A2B461AEC1C1 (void);
// 0x00000450 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.WalletBase::Login(System.String)
extern void WalletBase_Login_m10A19211BF3713E40BED0FF15C63CD3E045B4414 (void);
// 0x00000451 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.WalletBase::_Login(System.String)
// 0x00000452 System.Void Solana.Unity.SDK.WalletBase::Logout()
extern void WalletBase_Logout_m3B108A721927DE4193D950064CC85AD1EF983063 (void);
// 0x00000453 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.WalletBase::CreateAccount(System.String,System.String)
extern void WalletBase_CreateAccount_m7A5513BC3C0B6BAE715E75F935B3E31029CF15C1 (void);
// 0x00000454 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.WalletBase::_CreateAccount(System.String,System.String)
// 0x00000455 System.Threading.Tasks.Task`1<System.Double> Solana.Unity.SDK.WalletBase::GetBalance(Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_GetBalance_mFDA652FE06BAF981E141F3E3C4E850063864D3E8 (void);
// 0x00000456 System.Threading.Tasks.Task`1<System.Double> Solana.Unity.SDK.WalletBase::GetBalance(Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_GetBalance_mE5E141D28638C4E7D696419E325D2A03338E827E (void);
// 0x00000457 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.WalletBase::Transfer(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_Transfer_m77BAA44E1583D7A7676DEAA3A2942AC22F33EFA2 (void);
// 0x00000458 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.WalletBase::Transfer(Solana.Unity.Wallet.PublicKey,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_Transfer_mF8321F8530985BFDB9FE98402E7AB271547F2ABE (void);
// 0x00000459 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.TokenAccount[]> Solana.Unity.SDK.WalletBase::GetTokenAccounts(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey)
extern void WalletBase_GetTokenAccounts_mFBB7ECD909AF618AD7EC0C1882DFF297153AA809 (void);
// 0x0000045A System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.TokenAccount[]> Solana.Unity.SDK.WalletBase::GetTokenAccounts(Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_GetTokenAccounts_m00DFF5975C7E4AF8D8EAA5C0C14E8A3A0341D922 (void);
// 0x0000045B System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.WalletBase::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
// 0x0000045C System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.WalletBase::SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void WalletBase_SignTransaction_m2412CD8FECA0E47ABE2FD4934DA7C3E9F55028CF (void);
// 0x0000045D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.WalletBase::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
// 0x0000045E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.WalletBase::SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void WalletBase_SignAllTransactions_m3AD990F81DA3BB6828B9F02F8BC31CBF29B38C4A (void);
// 0x0000045F System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.WalletBase::SignAndSendTransaction(Solana.Unity.Rpc.Models.Transaction,System.Boolean,Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_SignAndSendTransaction_m00C8573CB2DB52592851D8943C6D6C50EE01E634 (void);
// 0x00000460 System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.WalletBase::SignMessage(System.Byte[])
// 0x00000461 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.WalletBase::RequestAirdrop(System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_RequestAirdrop_m3E6F776B473036ACDB61CBD818F4DD56BEDC684E (void);
// 0x00000462 System.Threading.Tasks.Task`1<System.String> Solana.Unity.SDK.WalletBase::GetBlockHash(Solana.Unity.Rpc.Types.Commitment,System.Boolean,System.Int32)
extern void WalletBase_GetBlockHash_mE40BF3FB56691F297709370584105CD98D5419B8 (void);
// 0x00000463 Solana.Unity.Rpc.IRpcClient Solana.Unity.SDK.WalletBase::StartConnection()
extern void WalletBase_StartConnection_m82161B02C2A81C4D381047DCB83CC980A5949B07 (void);
// 0x00000464 Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.SDK.WalletBase::StartStreamingConnection()
extern void WalletBase_StartStreamingConnection_m1D34CE3809AF11D30E38FC8AFEDC54926EA486D0 (void);
// 0x00000465 System.Threading.Tasks.Task Solana.Unity.SDK.WalletBase::AwaitWsRpcConnection()
extern void WalletBase_AwaitWsRpcConnection_mB78FF9611896675488AA78D9EF3FCDDFEA7C37E4 (void);
// 0x00000466 System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignaturePubKeyPair> Solana.Unity.SDK.WalletBase::DeduplicateTransactionSignatures(System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignaturePubKeyPair>,System.Boolean)
extern void WalletBase_DeduplicateTransactionSignatures_m2C76DF8137668DEC541C537CEE0EECE195D9CAB8 (void);
// 0x00000467 System.Void Solana.Unity.SDK.WalletBase::<StartStreamingConnection>b__48_0()
extern void WalletBase_U3CStartStreamingConnectionU3Eb__48_0_mB427A572045986B97C8EC8E54816AAF8D54AA6E9 (void);
// 0x00000468 System.Void Solana.Unity.SDK.WalletBase/<Login>d__27::MoveNext()
extern void U3CLoginU3Ed__27_MoveNext_m0C91351E890E4E40F48DD825E10D85144AED9407 (void);
// 0x00000469 System.Void Solana.Unity.SDK.WalletBase/<Login>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoginU3Ed__27_SetStateMachine_m559C5A606C3AE91FFD86218C376F42B94A21F8AB (void);
// 0x0000046A System.Void Solana.Unity.SDK.WalletBase/<CreateAccount>d__30::MoveNext()
extern void U3CCreateAccountU3Ed__30_MoveNext_mE4331B53A9DC8A63681898E67D8489A2ABFD6E3D (void);
// 0x0000046B System.Void Solana.Unity.SDK.WalletBase/<CreateAccount>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateAccountU3Ed__30_SetStateMachine_m830775785A8260F06D0A055FE9CFA23FA3551D5F (void);
// 0x0000046C System.Void Solana.Unity.SDK.WalletBase/<GetBalance>d__32::MoveNext()
extern void U3CGetBalanceU3Ed__32_MoveNext_m14988E7626CE1C4AF30E22F12161A0E0C37DE79E (void);
// 0x0000046D System.Void Solana.Unity.SDK.WalletBase/<GetBalance>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBalanceU3Ed__32_SetStateMachine_m7A7F56AADAADA9BC23716B817DCB98DF1E35AB0B (void);
// 0x0000046E System.Void Solana.Unity.SDK.WalletBase/<GetBalance>d__33::MoveNext()
extern void U3CGetBalanceU3Ed__33_MoveNext_mE3FD12B37BAFAD05A095863F74A0BEA02A8A3A87 (void);
// 0x0000046F System.Void Solana.Unity.SDK.WalletBase/<GetBalance>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBalanceU3Ed__33_SetStateMachine_mE8D27EB08A51BD3F4ABEB28EA556579BD0B7A5CC (void);
// 0x00000470 System.Void Solana.Unity.SDK.WalletBase/<Transfer>d__34::MoveNext()
extern void U3CTransferU3Ed__34_MoveNext_m36A26B47E62835C10F286025C8466E19DC1AE7DD (void);
// 0x00000471 System.Void Solana.Unity.SDK.WalletBase/<Transfer>d__34::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CTransferU3Ed__34_SetStateMachine_m6329542B1265798F1B95A89AA76D71CE42D51623 (void);
// 0x00000472 System.Void Solana.Unity.SDK.WalletBase/<Transfer>d__35::MoveNext()
extern void U3CTransferU3Ed__35_MoveNext_mE6D029E0EE19C202DCE7662F00B3EF60A0C9D22B (void);
// 0x00000473 System.Void Solana.Unity.SDK.WalletBase/<Transfer>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CTransferU3Ed__35_SetStateMachine_m14527CF27F604315B1F03FB5EAB4CCB34D65C14C (void);
// 0x00000474 System.Void Solana.Unity.SDK.WalletBase/<GetTokenAccounts>d__36::MoveNext()
extern void U3CGetTokenAccountsU3Ed__36_MoveNext_mCC8B5353A7B401827EC1D0E2E183F75A826918AB (void);
// 0x00000475 System.Void Solana.Unity.SDK.WalletBase/<GetTokenAccounts>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTokenAccountsU3Ed__36_SetStateMachine_m9BF32F86CB1C7D64D1B597AE05AEF21151960D1D (void);
// 0x00000476 System.Void Solana.Unity.SDK.WalletBase/<GetTokenAccounts>d__37::MoveNext()
extern void U3CGetTokenAccountsU3Ed__37_MoveNext_m737884E55851B157EC89D5F34E77F9DE52C20F56 (void);
// 0x00000477 System.Void Solana.Unity.SDK.WalletBase/<GetTokenAccounts>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTokenAccountsU3Ed__37_SetStateMachine_m2CF3D890336470F77D6FCC5EE374834C8B268699 (void);
// 0x00000478 System.Void Solana.Unity.SDK.WalletBase/<SignTransaction>d__39::MoveNext()
extern void U3CSignTransactionU3Ed__39_MoveNext_m8BB1D1C048E3F9410FE4C59AB4FBD4BBCD60340B (void);
// 0x00000479 System.Void Solana.Unity.SDK.WalletBase/<SignTransaction>d__39::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSignTransactionU3Ed__39_SetStateMachine_mAD77379C7A76A38C7AC11CDF553D30BEC2E24AA1 (void);
// 0x0000047A System.Void Solana.Unity.SDK.WalletBase/<SignAllTransactions>d__41::MoveNext()
extern void U3CSignAllTransactionsU3Ed__41_MoveNext_m3FAE9462D015F1742DCFE8D87FF03AC1DE0788E2 (void);
// 0x0000047B System.Void Solana.Unity.SDK.WalletBase/<SignAllTransactions>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSignAllTransactionsU3Ed__41_SetStateMachine_m65A179ABDB3C4C9A77803BDF32E0BEDB14109B1F (void);
// 0x0000047C System.Void Solana.Unity.SDK.WalletBase/<SignAndSendTransaction>d__42::MoveNext()
extern void U3CSignAndSendTransactionU3Ed__42_MoveNext_mEA8D88258C381711E210BA37CF501721D1F00A41 (void);
// 0x0000047D System.Void Solana.Unity.SDK.WalletBase/<SignAndSendTransaction>d__42::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSignAndSendTransactionU3Ed__42_SetStateMachine_mCBBD9BD3A3274AEFECDFBB5A7A83F2564E1738A9 (void);
// 0x0000047E System.Void Solana.Unity.SDK.WalletBase/<RequestAirdrop>d__44::MoveNext()
extern void U3CRequestAirdropU3Ed__44_MoveNext_m853D672A638056CF5A67211A8A7472F3C0D4D385 (void);
// 0x0000047F System.Void Solana.Unity.SDK.WalletBase/<RequestAirdrop>d__44::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRequestAirdropU3Ed__44_SetStateMachine_m085D704BAFDAA89FD06AFC9475EBE24F53D0AAFA (void);
// 0x00000480 System.Void Solana.Unity.SDK.WalletBase/<GetBlockHash>d__46::MoveNext()
extern void U3CGetBlockHashU3Ed__46_MoveNext_mD9516DEB58F41FA003F629417234F9FDA268BA42 (void);
// 0x00000481 System.Void Solana.Unity.SDK.WalletBase/<GetBlockHash>d__46::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBlockHashU3Ed__46_SetStateMachine_m1E60FBA4AFC2810E2004F230BD4A50B8D5A6AE7C (void);
// 0x00000482 System.Void Solana.Unity.SDK.WalletBase/<>c__DisplayClass50_0::.ctor()
extern void U3CU3Ec__DisplayClass50_0__ctor_m31C40CBF6AC3244C6AF8B613F64FF14C1317F729 (void);
// 0x00000483 System.Void Solana.Unity.SDK.WalletBase/<>c__DisplayClass50_1::.ctor()
extern void U3CU3Ec__DisplayClass50_1__ctor_m56953ED94318E0CFEF0783ADA24F35BB36F3BA5E (void);
// 0x00000484 System.Boolean Solana.Unity.SDK.WalletBase/<>c__DisplayClass50_1::<DeduplicateTransactionSignatures>b__0(Solana.Unity.Rpc.Models.SignaturePubKeyPair)
extern void U3CU3Ec__DisplayClass50_1_U3CDeduplicateTransactionSignaturesU3Eb__0_m7D0E474C37785A564E996373AA347D4F5CBBEC34 (void);
// 0x00000485 Solana.Unity.SDK.WalletBase Solana.Unity.SDK.Web3::get_WalletBase()
extern void Web3_get_WalletBase_m0737A2BA9645FD357E4706571AAABAFD0385C7AA (void);
// 0x00000486 System.Void Solana.Unity.SDK.Web3::set_WalletBase(Solana.Unity.SDK.WalletBase)
extern void Web3_set_WalletBase_m5512313ED2D0D8C8A366D3988D62644E79F8D2EA (void);
// 0x00000487 System.Int32 Solana.Unity.SDK.Web3::get_RpcMaxHits()
extern void Web3_get_RpcMaxHits_m352B69454EF78154AC568F48F95CC87845212885 (void);
// 0x00000488 System.Void Solana.Unity.SDK.Web3::set_RpcMaxHits(System.Int32)
extern void Web3_set_RpcMaxHits_m34B46DD6D32781E16D178028AA600F575C03056C (void);
// 0x00000489 System.Int32 Solana.Unity.SDK.Web3::get_RpcMaxHitsPerSeconds()
extern void Web3_get_RpcMaxHitsPerSeconds_m1AC8B9DF96A7BEC16A55A4BDED032FF8CB416141 (void);
// 0x0000048A System.Void Solana.Unity.SDK.Web3::set_RpcMaxHitsPerSeconds(System.Int32)
extern void Web3_set_RpcMaxHitsPerSeconds_m68BF7750A3FAFDAC159B153220B5021F3ACF397A (void);
// 0x0000048B System.Void Solana.Unity.SDK.Web3::add_OnWalletInstance(Solana.Unity.SDK.Web3/WalletInstance)
extern void Web3_add_OnWalletInstance_m998B512985ED58DDB8DEFB758BBCFEDB581315C5 (void);
// 0x0000048C System.Void Solana.Unity.SDK.Web3::remove_OnWalletInstance(Solana.Unity.SDK.Web3/WalletInstance)
extern void Web3_remove_OnWalletInstance_m6EF9E66A87EB3C3AE92838503209C7723EFAB4AF (void);
// 0x0000048D System.Void Solana.Unity.SDK.Web3::add_OnWalletChangeStateInternal(Solana.Unity.SDK.Web3/WalletChange)
extern void Web3_add_OnWalletChangeStateInternal_mD2DAFC678B27E27B62C75DDBD0A90C137307516A (void);
// 0x0000048E System.Void Solana.Unity.SDK.Web3::remove_OnWalletChangeStateInternal(Solana.Unity.SDK.Web3/WalletChange)
extern void Web3_remove_OnWalletChangeStateInternal_m1B40A89735BD8A404D1B5CFE2E74E7FF42EFC17B (void);
// 0x0000048F System.Void Solana.Unity.SDK.Web3::add_OnWalletChangeState(Solana.Unity.SDK.Web3/WalletChange)
extern void Web3_add_OnWalletChangeState_m95E31ADF263EBEB060DC4355432CE32A3600DA05 (void);
// 0x00000490 System.Void Solana.Unity.SDK.Web3::remove_OnWalletChangeState(Solana.Unity.SDK.Web3/WalletChange)
extern void Web3_remove_OnWalletChangeState_mCF98836BED11F766596199786F15D9C612B5A493 (void);
// 0x00000491 System.Void Solana.Unity.SDK.Web3::add_OnBalanceChangeInternal(Solana.Unity.SDK.Web3/BalanceChange)
extern void Web3_add_OnBalanceChangeInternal_m3B44AE7CFBE95FF9471C44B862CBD49127CC755F (void);
// 0x00000492 System.Void Solana.Unity.SDK.Web3::remove_OnBalanceChangeInternal(Solana.Unity.SDK.Web3/BalanceChange)
extern void Web3_remove_OnBalanceChangeInternal_mAD5B42C1DE4571534395E8AFAE57BB36F8EF63D3 (void);
// 0x00000493 System.Void Solana.Unity.SDK.Web3::add_OnBalanceChange(Solana.Unity.SDK.Web3/BalanceChange)
extern void Web3_add_OnBalanceChange_m9F2472C2389136A6B7FF8B916F52F1927EFD3239 (void);
// 0x00000494 System.Void Solana.Unity.SDK.Web3::remove_OnBalanceChange(Solana.Unity.SDK.Web3/BalanceChange)
extern void Web3_remove_OnBalanceChange_m4F6AE35852255299C6E9A855ED12F5788A3468F9 (void);
// 0x00000495 System.Int32 Solana.Unity.SDK.Web3::get_NftLoadingRequestsDelay()
extern void Web3_get_NftLoadingRequestsDelay_m6096EBB8963C1A6FB4942E20C4BCC7DB5F18EBD0 (void);
// 0x00000496 System.Void Solana.Unity.SDK.Web3::set_NftLoadingRequestsDelay(System.Int32)
extern void Web3_set_NftLoadingRequestsDelay_mE362F9F4BA5443891BAA689386943B034DEBB5F7 (void);
// 0x00000497 System.Void Solana.Unity.SDK.Web3::add_OnNFTsUpdateInternal(Solana.Unity.SDK.Web3/NFTsUpdate)
extern void Web3_add_OnNFTsUpdateInternal_mB9FF62D1EDA4389B2C343328735F6541C015C8AA (void);
// 0x00000498 System.Void Solana.Unity.SDK.Web3::remove_OnNFTsUpdateInternal(Solana.Unity.SDK.Web3/NFTsUpdate)
extern void Web3_remove_OnNFTsUpdateInternal_m4FB2FFC18DA44B06AE1E5CD81CEE92A5C032AA35 (void);
// 0x00000499 System.Void Solana.Unity.SDK.Web3::add_OnNFTsUpdate(Solana.Unity.SDK.Web3/NFTsUpdate)
extern void Web3_add_OnNFTsUpdate_mAE5D67F84FC849C09D95A8547A880337917EBC51 (void);
// 0x0000049A System.Void Solana.Unity.SDK.Web3::remove_OnNFTsUpdate(Solana.Unity.SDK.Web3/NFTsUpdate)
extern void Web3_remove_OnNFTsUpdate_m7D442FCA0D6C0841A9BF81C58F8998F3D6FBC633 (void);
// 0x0000049B Solana.Unity.Rpc.IRpcClient Solana.Unity.SDK.Web3::get_Rpc()
extern void Web3_get_Rpc_m835B7283D8B993B25F9CDBD6628C040C38432C99 (void);
// 0x0000049C Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.SDK.Web3::get_WsRpc()
extern void Web3_get_WsRpc_m6C034BDCBDDFD5A219D4C94FEB1320F4797BEC9D (void);
// 0x0000049D Solana.Unity.Wallet.Account Solana.Unity.SDK.Web3::get_Account()
extern void Web3_get_Account_mD177714BA64705E67380460AF29D7DF7A539FF72 (void);
// 0x0000049E Solana.Unity.SDK.WalletBase Solana.Unity.SDK.Web3::get_Wallet()
extern void Web3_get_Wallet_m356DFCF42CF7F0F409FB5ADC61E68049D7B79FB4 (void);
// 0x0000049F Solana.Unity.SDK.WalletBase Solana.Unity.SDK.Web3::get_Base()
extern void Web3_get_Base_m5CF39B73E6EFB497EB326FB227E45B9ACE1B5983 (void);
// 0x000004A0 System.Void Solana.Unity.SDK.Web3::Awake()
extern void Web3_Awake_m4D75E007147E71926F93429EE0C8D8D158869E0E (void);
// 0x000004A1 System.Void Solana.Unity.SDK.Web3::Start()
extern void Web3_Start_mACBCA76D472053E8A42BA93A4423E1D0100EFD83 (void);
// 0x000004A2 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3::LoginInGameWallet(System.String)
extern void Web3_LoginInGameWallet_mAA3374F553187DF9CC68F2E8BAB77A8017C24EF2 (void);
// 0x000004A3 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3::CreateAccount(System.String,System.String)
extern void Web3_CreateAccount_m2E9B41CA60E21C1A3F1DC138592492F2914CC638 (void);
// 0x000004A4 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3::LoginWeb3Auth(Provider)
extern void Web3_LoginWeb3Auth_mDB5FF54A98A315995D33A9E3944F53F570BD8476 (void);
// 0x000004A5 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3::LoginXNFT()
extern void Web3_LoginXNFT_m5D16883822850CE0BC33E41A24306E2014B026C6 (void);
// 0x000004A6 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3::LoginWalletAdapter()
extern void Web3_LoginWalletAdapter_m2118BE1A5E94BC67C7EE855CD4E8A2E44CD52C19 (void);
// 0x000004A7 System.Void Solana.Unity.SDK.Web3::LoginWithWalletAdapter()
extern void Web3_LoginWithWalletAdapter_mC35EB80A0C48CFC15F0A8DD5DEC07C9286A6198F (void);
// 0x000004A8 System.Void Solana.Unity.SDK.Web3::LoginWithWeb3Auth(System.String)
extern void Web3_LoginWithWeb3Auth_m9480E128C550BE6955E093A989ABADF7592A5E8A (void);
// 0x000004A9 System.Void Solana.Unity.SDK.Web3::Logout()
extern void Web3_Logout_m66F7405563C0B17EEDEF54BD3F8E19021E21F260 (void);
// 0x000004AA System.Threading.Tasks.Task`1<System.String> Solana.Unity.SDK.Web3::BlockHash(Solana.Unity.Rpc.Types.Commitment,System.Boolean,System.Int32)
extern void Web3_BlockHash_mF0F916BB8FAB924199BCBC656D36439CA07319F1 (void);
// 0x000004AB Cysharp.Threading.Tasks.UniTask Solana.Unity.SDK.Web3::UpdateBalance(Solana.Unity.Rpc.Types.Commitment)
extern void Web3_UpdateBalance_mCF9C2085C99213F793978DF0D7B0D4E5901BAA20 (void);
// 0x000004AC Cysharp.Threading.Tasks.UniTask Solana.Unity.SDK.Web3::UpdateNFTs(Solana.Unity.Rpc.Types.Commitment)
extern void Web3_UpdateNFTs_mFD7E181C3169E342F4CE5FF6F9FA847AACCB9FC2 (void);
// 0x000004AD Cysharp.Threading.Tasks.UniTask`1<System.Collections.Generic.List`1<Solana.Unity.SDK.Nft.Nft>> Solana.Unity.SDK.Web3::LoadNFTs(System.Boolean,System.Boolean,System.Int32,Solana.Unity.Rpc.Types.Commitment)
extern void Web3_LoadNFTs_m80318B583936E2B0FECCFCF64317A67FCB0FCD13 (void);
// 0x000004AE Cysharp.Threading.Tasks.UniTask Solana.Unity.SDK.Web3::SubscribeToWalletEvents(Solana.Unity.Rpc.Types.Commitment)
extern void Web3_SubscribeToWalletEvents_m3568141760E3A33287C9CBC480112BDDA4A05C05 (void);
// 0x000004AF Solana.Unity.Rpc.IRpcClient Solana.Unity.SDK.Web3::GetDefaultRpc()
extern void Web3_GetDefaultRpc_m3EFBE5271E82B598F84CA629A4A5BB6CE941C0B6 (void);
// 0x000004B0 Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.SDK.Web3::GetDefaultWsRpc()
extern void Web3_GetDefaultWsRpc_m25AA235EE58CE4AE6EDDEC3754DC929401256DD5 (void);
// 0x000004B1 System.Void Solana.Unity.SDK.Web3::SavePlayerPrefs(System.String,System.String)
extern void Web3_SavePlayerPrefs_m62B5BC54D607D161D713AD54ABB032DBB91CEF80 (void);
// 0x000004B2 System.String Solana.Unity.SDK.Web3::LoadPlayerPrefs(System.String)
extern void Web3_LoadPlayerPrefs_mE138462B15136AAAE0E76F00EA0A26F8E50CBAE0 (void);
// 0x000004B3 System.Void Solana.Unity.SDK.Web3::Setup()
extern void Web3_Setup_m93A01217E5AF3D4FE5C45336309F23DA986C914F (void);
// 0x000004B4 System.Void Solana.Unity.SDK.Web3::.ctor()
extern void Web3__ctor_mBA03A1CB3F417BFC58BCED8C37501C4902CFB107 (void);
// 0x000004B5 System.Void Solana.Unity.SDK.Web3::.cctor()
extern void Web3__cctor_mCAE3EF1E7AB0E95ACD852A92596148BD2667E237 (void);
// 0x000004B6 System.Void Solana.Unity.SDK.Web3::<Start>b__67_0(Solana.Unity.Wallet.Account)
extern void Web3_U3CStartU3Eb__67_0_mE6E35480C6E6F0328858E45CA7C0EA255E677DEA (void);
// 0x000004B7 System.Void Solana.Unity.SDK.Web3/WalletInstance::.ctor(System.Object,System.IntPtr)
extern void WalletInstance__ctor_m08FFD5225F6C4434729494831245C48117BA8A9B (void);
// 0x000004B8 System.Void Solana.Unity.SDK.Web3/WalletInstance::Invoke()
extern void WalletInstance_Invoke_m17BC83592F712F8264290A161117DF3C2DAF31A1 (void);
// 0x000004B9 System.IAsyncResult Solana.Unity.SDK.Web3/WalletInstance::BeginInvoke(System.AsyncCallback,System.Object)
extern void WalletInstance_BeginInvoke_mF2A3DCD2F4ECC29D5195E4EEDD639361BC05BE0A (void);
// 0x000004BA System.Void Solana.Unity.SDK.Web3/WalletInstance::EndInvoke(System.IAsyncResult)
extern void WalletInstance_EndInvoke_m89AD1AEB0932188F3F69599D5835105247D33BC8 (void);
// 0x000004BB System.Void Solana.Unity.SDK.Web3/WalletChange::.ctor(System.Object,System.IntPtr)
extern void WalletChange__ctor_mBB9555EDFB65E5D8479FA77026972154DC573FEE (void);
// 0x000004BC System.Void Solana.Unity.SDK.Web3/WalletChange::Invoke()
extern void WalletChange_Invoke_m93ABFE7A7E63322C197860DCC72B5EF2F09A3405 (void);
// 0x000004BD System.IAsyncResult Solana.Unity.SDK.Web3/WalletChange::BeginInvoke(System.AsyncCallback,System.Object)
extern void WalletChange_BeginInvoke_mD7D56C900FB919ADF5FFA60FE53B166D2C32D8B9 (void);
// 0x000004BE System.Void Solana.Unity.SDK.Web3/WalletChange::EndInvoke(System.IAsyncResult)
extern void WalletChange_EndInvoke_mB7438B0F5AEC84C62B55D86E687F4A61FA8FC3EE (void);
// 0x000004BF System.Void Solana.Unity.SDK.Web3/BalanceChange::.ctor(System.Object,System.IntPtr)
extern void BalanceChange__ctor_m7E80F85024D3099465B2A759E24F18E2AEECC118 (void);
// 0x000004C0 System.Void Solana.Unity.SDK.Web3/BalanceChange::Invoke(System.Double)
extern void BalanceChange_Invoke_mD9A313F9D252F8E14B7299497CD862731B09CE9C (void);
// 0x000004C1 System.IAsyncResult Solana.Unity.SDK.Web3/BalanceChange::BeginInvoke(System.Double,System.AsyncCallback,System.Object)
extern void BalanceChange_BeginInvoke_mC10885E03670710705E531C19EF5F205092DBBFA (void);
// 0x000004C2 System.Void Solana.Unity.SDK.Web3/BalanceChange::EndInvoke(System.IAsyncResult)
extern void BalanceChange_EndInvoke_m08A17FE898AC21ADACC069A6A5D53BA69E1619EC (void);
// 0x000004C3 System.Void Solana.Unity.SDK.Web3/NFTsUpdate::.ctor(System.Object,System.IntPtr)
extern void NFTsUpdate__ctor_mD290C7E52680FBA1B1BEAC62E0E7055962B44795 (void);
// 0x000004C4 System.Void Solana.Unity.SDK.Web3/NFTsUpdate::Invoke(System.Collections.Generic.List`1<Solana.Unity.SDK.Nft.Nft>,System.Int32)
extern void NFTsUpdate_Invoke_mFB763BA9901A33289E2FCFC04C92995A53EC2464 (void);
// 0x000004C5 System.IAsyncResult Solana.Unity.SDK.Web3/NFTsUpdate::BeginInvoke(System.Collections.Generic.List`1<Solana.Unity.SDK.Nft.Nft>,System.Int32,System.AsyncCallback,System.Object)
extern void NFTsUpdate_BeginInvoke_mC7526ED69FD054212879293B2E043EB8333EFE0D (void);
// 0x000004C6 System.Void Solana.Unity.SDK.Web3/NFTsUpdate::EndInvoke(System.IAsyncResult)
extern void NFTsUpdate_EndInvoke_mC4F2CF65FBCE20BE56AA85D9EA6F232BD0B561DB (void);
// 0x000004C7 System.Void Solana.Unity.SDK.Web3/<LoginInGameWallet>d__68::MoveNext()
extern void U3CLoginInGameWalletU3Ed__68_MoveNext_m87A760E0AD194D2516AADC3CB97ED2375ACF4BA8 (void);
// 0x000004C8 System.Void Solana.Unity.SDK.Web3/<LoginInGameWallet>d__68::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoginInGameWalletU3Ed__68_SetStateMachine_m2F1E7026D3D187D85865DDB0F571763AE318B166 (void);
// 0x000004C9 System.Void Solana.Unity.SDK.Web3/<CreateAccount>d__69::MoveNext()
extern void U3CCreateAccountU3Ed__69_MoveNext_m9509D75B7967408BF6C3EABF319214D4CA643556 (void);
// 0x000004CA System.Void Solana.Unity.SDK.Web3/<CreateAccount>d__69::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateAccountU3Ed__69_SetStateMachine_mC56F979A6CB5AD6D1C477DE6551EFDED028AF7B5 (void);
// 0x000004CB System.Void Solana.Unity.SDK.Web3/<LoginWeb3Auth>d__70::MoveNext()
extern void U3CLoginWeb3AuthU3Ed__70_MoveNext_mD55625DE87F1066FF85F2F1649AA298C6CB28BC1 (void);
// 0x000004CC System.Void Solana.Unity.SDK.Web3/<LoginWeb3Auth>d__70::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoginWeb3AuthU3Ed__70_SetStateMachine_mFCFAD64623D996332EE46CF923B08D63FF01F63C (void);
// 0x000004CD System.Void Solana.Unity.SDK.Web3/<LoginXNFT>d__71::MoveNext()
extern void U3CLoginXNFTU3Ed__71_MoveNext_mC97BFEF295E4779A0C4BD0778986846788BA8BBD (void);
// 0x000004CE System.Void Solana.Unity.SDK.Web3/<LoginXNFT>d__71::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoginXNFTU3Ed__71_SetStateMachine_m8B53A485B37E689F9D69C0ACBDBA6EA23D0C4F15 (void);
// 0x000004CF System.Void Solana.Unity.SDK.Web3/<LoginWalletAdapter>d__72::MoveNext()
extern void U3CLoginWalletAdapterU3Ed__72_MoveNext_m4C611AB91465080E71B66624D0A1392A9C4286B2 (void);
// 0x000004D0 System.Void Solana.Unity.SDK.Web3/<LoginWalletAdapter>d__72::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoginWalletAdapterU3Ed__72_SetStateMachine_mB9E829EA97CB38AE20BACEA44C2558C3AB083A2E (void);
// 0x000004D1 System.Void Solana.Unity.SDK.Web3/<UpdateBalance>d__77::MoveNext()
extern void U3CUpdateBalanceU3Ed__77_MoveNext_m903578AA48F9F8506B708DDC9064875A7152508D (void);
// 0x000004D2 System.Void Solana.Unity.SDK.Web3/<UpdateBalance>d__77::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUpdateBalanceU3Ed__77_SetStateMachine_mA74A5B030572A9D821FEF4E7B023E376A1F9FEB7 (void);
// 0x000004D3 System.Void Solana.Unity.SDK.Web3/<UpdateNFTs>d__78::MoveNext()
extern void U3CUpdateNFTsU3Ed__78_MoveNext_mE8997212300C6884458B1B03954262634C1E9994 (void);
// 0x000004D4 System.Void Solana.Unity.SDK.Web3/<UpdateNFTs>d__78::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUpdateNFTsU3Ed__78_SetStateMachine_mF8AC9411D368109415678DD0EDEDB56BDA5881AC (void);
// 0x000004D5 System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass79_0::.ctor()
extern void U3CU3Ec__DisplayClass79_0__ctor_mFB528C2C5CF5791C7FC53ED64993FFDFB70E51A8 (void);
// 0x000004D6 System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass79_0::<LoadNFTs>b__0(Solana.Unity.SDK.Nft.Nft)
extern void U3CU3Ec__DisplayClass79_0_U3CLoadNFTsU3Eb__0_m6DDC4DF4FDDEB4EC8B405CE0F38CFF1AD96ADA26 (void);
// 0x000004D7 System.Boolean Solana.Unity.SDK.Web3/<>c__DisplayClass79_0::<LoadNFTs>b__9(Solana.Unity.Rpc.Models.TokenAccount)
extern void U3CU3Ec__DisplayClass79_0_U3CLoadNFTsU3Eb__9_m2E0F983E790C33962EDA0DC9831F61E4789F7F30 (void);
// 0x000004D8 System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass79_1::.ctor()
extern void U3CU3Ec__DisplayClass79_1__ctor_mE9FD7C8EBE84649523E65D95490DC0FE2047A521 (void);
// 0x000004D9 System.Boolean Solana.Unity.SDK.Web3/<>c__DisplayClass79_1::<LoadNFTs>b__6(Solana.Unity.Rpc.Models.TokenAccount)
extern void U3CU3Ec__DisplayClass79_1_U3CLoadNFTsU3Eb__6_mC925CE36AEF3886F55CA5BE391601FB8A8D516B1 (void);
// 0x000004DA System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass79_2::.ctor()
extern void U3CU3Ec__DisplayClass79_2__ctor_m9765B4B534609491370762C92ABAF6D319E3FBBA (void);
// 0x000004DB System.Boolean Solana.Unity.SDK.Web3/<>c__DisplayClass79_2::<LoadNFTs>b__10(Solana.Unity.SDK.Nft.Nft)
extern void U3CU3Ec__DisplayClass79_2_U3CLoadNFTsU3Eb__10_mBCE82020C934CAB7DD904AAD1984AC9914078507 (void);
// 0x000004DC System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass79_3::.ctor()
extern void U3CU3Ec__DisplayClass79_3__ctor_m358EEB6A512FCFAC62705487CAA123D6F854DB4A (void);
// 0x000004DD System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass79_3::<LoadNFTs>b__11(Solana.Unity.SDK.Nft.Nft)
extern void U3CU3Ec__DisplayClass79_3_U3CLoadNFTsU3Eb__11_mCF861C689E0392AB29E87A34EA96B17675E99005 (void);
// 0x000004DE System.Void Solana.Unity.SDK.Web3/<>c::.cctor()
extern void U3CU3Ec__cctor_mBBE80F495D7F042B855D0E04C1DF5C81665F06B6 (void);
// 0x000004DF System.Void Solana.Unity.SDK.Web3/<>c::.ctor()
extern void U3CU3Ec__ctor_m8023591C793528DF5DEC1201FA2C18D8B6B745DA (void);
// 0x000004E0 System.Boolean Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_5(Solana.Unity.Rpc.Models.TokenAccount)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_5_m58B18A854DDC1F1F14D5196ED2D81C1DB6D3042E (void);
// 0x000004E1 System.Boolean Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_7(Solana.Unity.Rpc.Models.TokenAccount)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_7_m6E2AF5F321000A19982909DD6FF6CB3DDCEDA4DF (void);
// 0x000004E2 System.Void Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_1(Solana.Unity.SDK.Nft.Nft)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_1_m515B3D0C2D9A55E645799C5ED69B1678E5955F68 (void);
// 0x000004E3 System.String Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_2(Solana.Unity.SDK.Nft.Nft)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_2_m3565CB19DDFE81DBF69E5239385A47169B3CBF43 (void);
// 0x000004E4 Solana.Unity.SDK.Nft.Nft Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_3(System.Linq.IGrouping`2<System.String,Solana.Unity.SDK.Nft.Nft>)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_3_m1A5602997171326C1E4DF7E4B4AE62472893436D (void);
// 0x000004E5 System.Boolean Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_4(Solana.Unity.SDK.Nft.Nft)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_4_mAB86D732FF9D9ED1D3F802ABB9EF0BB40311476A (void);
// 0x000004E6 System.Boolean Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_8(Solana.Unity.Rpc.Models.TokenAccount)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_8_mF39E41AD64100CC2D41F80F602513199B5A5B2D0 (void);
// 0x000004E7 System.Void Solana.Unity.SDK.Web3/<LoadNFTs>d__79::MoveNext()
extern void U3CLoadNFTsU3Ed__79_MoveNext_m08B56300A222E6077D215F081CE7EDA6B090B395 (void);
// 0x000004E8 System.Void Solana.Unity.SDK.Web3/<LoadNFTs>d__79::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoadNFTsU3Ed__79_SetStateMachine_m5A50A0A9F8355CAD01D09D9C40C03FF81F53FF5C (void);
// 0x000004E9 System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass80_0::.ctor()
extern void U3CU3Ec__DisplayClass80_0__ctor_m0AFBE4DBD0D5EB3C115CEB84BE9F5C685C239A0A (void);
// 0x000004EA System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass80_0::<SubscribeToWalletEvents>b__0(Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>)
extern void U3CU3Ec__DisplayClass80_0_U3CSubscribeToWalletEventsU3Eb__0_m187A813060EDB6C85D31EA0C6286974DD357BA99 (void);
// 0x000004EB System.Void Solana.Unity.SDK.Web3/<SubscribeToWalletEvents>d__80::MoveNext()
extern void U3CSubscribeToWalletEventsU3Ed__80_MoveNext_m052B394788EED3E7D025B9E32C545923B7C2DC61 (void);
// 0x000004EC System.Void Solana.Unity.SDK.Web3/<SubscribeToWalletEvents>d__80::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeToWalletEventsU3Ed__80_SetStateMachine_m5DB5F713FDCCF53CD67C005764BCB6F394648C29 (void);
// 0x000004ED System.Void Solana.Unity.SDK.Web3AuthWalletOptions::.ctor()
extern void Web3AuthWalletOptions__ctor_m3860812E774EA6685B0E06E4FFB2D3891AD1CD45 (void);
// 0x000004EE System.Void Solana.Unity.SDK.Web3AuthWallet::add_OnLoginNotify(System.Action`1<Solana.Unity.Wallet.Account>)
extern void Web3AuthWallet_add_OnLoginNotify_mD3FB2EFF6D1951C84A5BA6B6500C2D8CE26B49B0 (void);
// 0x000004EF System.Void Solana.Unity.SDK.Web3AuthWallet::remove_OnLoginNotify(System.Action`1<Solana.Unity.Wallet.Account>)
extern void Web3AuthWallet_remove_OnLoginNotify_mE49F93F19D29EADE81DC1EE5D55B9F358A177FAE (void);
// 0x000004F0 System.Void Solana.Unity.SDK.Web3AuthWallet::.ctor(Solana.Unity.SDK.Web3AuthWalletOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void Web3AuthWallet__ctor_m94846D2B5FB9EF6E563B166B9DB854EF0F36064C (void);
// 0x000004F1 System.Void Solana.Unity.SDK.Web3AuthWallet::OnLogin(Web3AuthResponse)
extern void Web3AuthWallet_OnLogin_m960B10D5E79EF244515510A63A48639C6284E24E (void);
// 0x000004F2 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3AuthWallet::_Login(System.String)
extern void Web3AuthWallet__Login_m99542B38C4957637DD168CC4427D7DE27D4EE838 (void);
// 0x000004F3 System.Void Solana.Unity.SDK.Web3AuthWallet::Logout()
extern void Web3AuthWallet_Logout_mD2A29FED0E754A03F65C535588F308CA551DAAE7 (void);
// 0x000004F4 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3AuthWallet::_CreateAccount(System.String,System.String)
extern void Web3AuthWallet__CreateAccount_m935B766838C8C5521D0B9FBC8089DC32F0B6177C (void);
// 0x000004F5 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.Web3AuthWallet::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void Web3AuthWallet__SignTransaction_m9761048AB57E27A43C66D222E6E9D87E84A779B3 (void);
// 0x000004F6 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.Web3AuthWallet::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void Web3AuthWallet__SignAllTransactions_m9B72612978B7137ADE17DF1C08F185DF1A417752 (void);
// 0x000004F7 System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.Web3AuthWallet::SignMessage(System.Byte[])
extern void Web3AuthWallet_SignMessage_mAE45567F63836DC405A9BC4BCD01B1176157C443 (void);
// 0x000004F8 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3AuthWallet::LoginWithProvider(Provider)
extern void Web3AuthWallet_LoginWithProvider_m476B1904A1353A9FFA57CAA3A20A08DC2078C92D (void);
// 0x000004F9 System.Void Solana.Unity.SDK.Utility.PublicKeyJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,Solana.Unity.Wallet.PublicKey,Newtonsoft.Json.JsonSerializer)
extern void PublicKeyJsonConverter_WriteJson_m76453B0ED42C18F5B9DFF03579356F9D76B8E1CA (void);
// 0x000004FA Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Utility.PublicKeyJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Solana.Unity.Wallet.PublicKey,System.Boolean,Newtonsoft.Json.JsonSerializer)
extern void PublicKeyJsonConverter_ReadJson_m8CF91A986CB3C1160BC2E5BD2B25E2357B3D10BC (void);
// 0x000004FB System.Void Solana.Unity.SDK.Utility.PublicKeyJsonConverter::.ctor()
extern void PublicKeyJsonConverter__ctor_m63E085B9BF14733C7703233E1A97EA6497474618 (void);
// 0x000004FC System.Void Solana.Unity.SDK.Utility.CreatorJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,Solana.Unity.Metaplex.NFT.Library.Creator,Newtonsoft.Json.JsonSerializer)
extern void CreatorJsonConverter_WriteJson_m1C019BDDA2CE7F526CD6A663DCEB3C9D2DA10BEC (void);
// 0x000004FD Solana.Unity.Metaplex.NFT.Library.Creator Solana.Unity.SDK.Utility.CreatorJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Solana.Unity.Metaplex.NFT.Library.Creator,System.Boolean,Newtonsoft.Json.JsonSerializer)
extern void CreatorJsonConverter_ReadJson_m797A058B9688BB0DEF93A7657EAA28089DDCA726 (void);
// 0x000004FE System.Void Solana.Unity.SDK.Utility.CreatorJsonConverter::.ctor()
extern void CreatorJsonConverter__ctor_mF962DCDC5F3141BE9F7E6338AF57A6427F479AF6 (void);
// 0x000004FF System.Void Solana.Unity.SDK.Utility.CollectionJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,Solana.Unity.Metaplex.NFT.Library.Collection,Newtonsoft.Json.JsonSerializer)
extern void CollectionJsonConverter_WriteJson_m5EE49D46A9ABF9B01CE6B633C1A6E5780B6A68DF (void);
// 0x00000500 Solana.Unity.Metaplex.NFT.Library.Collection Solana.Unity.SDK.Utility.CollectionJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Solana.Unity.Metaplex.NFT.Library.Collection,System.Boolean,Newtonsoft.Json.JsonSerializer)
extern void CollectionJsonConverter_ReadJson_mFF0963DB3D5A8FBCFF875B96585CF58FAC3C064A (void);
// 0x00000501 System.Void Solana.Unity.SDK.Utility.CollectionJsonConverter::.ctor()
extern void CollectionJsonConverter__ctor_m84A462A762A2D3DDAA54743C699D7C721975CA2A (void);
// 0x00000502 System.Threading.Tasks.Task`1<T> Solana.Unity.SDK.Utility.FileLoader::LoadFile(System.String,System.String)
// 0x00000503 System.Threading.Tasks.Task`1<T> Solana.Unity.SDK.Utility.FileLoader::LoadTexture(System.String,System.Threading.CancellationToken)
// 0x00000504 Cysharp.Threading.Tasks.UniTask`1<T> Solana.Unity.SDK.Utility.FileLoader::LoadGif(System.String,System.Threading.CancellationToken)
// 0x00000505 UnityEngine.Texture2D Solana.Unity.SDK.Utility.FileLoader::GetTextureFromGifByteStream(System.Byte[])
extern void FileLoader_GetTextureFromGifByteStream_mD606B61F26264099CB8E2F4561D7FFEA208D2185 (void);
// 0x00000506 T Solana.Unity.SDK.Utility.FileLoader::LoadFileFromLocalPath(System.String)
// 0x00000507 System.Void Solana.Unity.SDK.Utility.FileLoader::SaveToPersistentDataPath(System.String,T)
// 0x00000508 UnityEngine.Texture2D Solana.Unity.SDK.Utility.FileLoader::Resize(UnityEngine.Texture,System.Int32,System.Int32)
extern void FileLoader_Resize_m9CEA433A8CE82F3C2D109EEB0E105DB8DBE09000 (void);
// 0x00000509 System.Void Solana.Unity.SDK.Utility.FileLoader::DestroyTexture(UnityEngine.Texture)
extern void FileLoader_DestroyTexture_mEF1E99FD49EEB7970B1A41AC588914EDD466B33B (void);
// 0x0000050A System.Void Solana.Unity.SDK.Utility.FileLoader/<LoadFile>d__0`1::MoveNext()
// 0x0000050B System.Void Solana.Unity.SDK.Utility.FileLoader/<LoadFile>d__0`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x0000050C System.Void Solana.Unity.SDK.Utility.FileLoader/<LoadTexture>d__1`1::MoveNext()
// 0x0000050D System.Void Solana.Unity.SDK.Utility.FileLoader/<LoadTexture>d__1`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x0000050E System.Void Solana.Unity.SDK.Utility.FileLoader/<LoadGif>d__2`1::MoveNext()
// 0x0000050F System.Void Solana.Unity.SDK.Utility.FileLoader/<LoadGif>d__2`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x00000510 System.Byte[] Solana.Unity.SDK.Utility.ObjectToByte::ObjectToByteArray(System.Object)
extern void ObjectToByte_ObjectToByteArray_m0969DAC0E1F59DDD71611AB8273327D43A273D00 (void);
// 0x00000511 System.Object Solana.Unity.SDK.Utility.ObjectToByte::ByteArrayToObject(System.Byte[])
extern void ObjectToByte_ByteArrayToObject_m318C1EC6699063FE6EC72CA4465A7FB187C7CBB3 (void);
// 0x00000512 System.Byte[] Solana.Unity.SDK.Utility.ObjectToByte::getBytes(Solana.Unity.SDK.CompiledInstruction)
extern void ObjectToByte_getBytes_mA49C2855AE0AA982667DE0C7383EF0D53F1AE0B6 (void);
// 0x00000513 Solana.Unity.SDK.CompiledInstruction Solana.Unity.SDK.Utility.ObjectToByte::fromBytes(System.Byte[])
extern void ObjectToByte_fromBytes_mF250A7DF4C8A80BCC10E7123D71C64B9746355B8 (void);
// 0x00000514 System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeBase58StringFromByte(System.Byte[],System.Int32,System.Int32,System.String&)
extern void ObjectToByte_DecodeBase58StringFromByte_mC6CBEFFAA6B15AA40EA4BD9426CE3C58A9485BD6 (void);
// 0x00000515 System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeUTF8StringFromByte(System.Byte[],System.Int32,System.Int32,System.String&)
extern void ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD (void);
// 0x00000516 System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeUlongFromByte(System.Byte[],System.Int32,System.UInt64&)
extern void ObjectToByte_DecodeUlongFromByte_m1405595B586601DB9FD31401D582BD57144B45E7 (void);
// 0x00000517 System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeUIntFromByte(System.Byte[],System.Int32,System.UInt32&)
extern void ObjectToByte_DecodeUIntFromByte_mB43A80B57C31A2FF925805DFF3E5D46002B325A3 (void);
// 0x00000518 System.Void Solana.Unity.SDK.Nft.Attributes::.ctor()
extern void Attributes__ctor_mE823C4A7CEB5D6A5D6C761A8AD42548F2AEA0199 (void);
// 0x00000519 System.Void Solana.Unity.SDK.Nft.MetaplexJsonData::.ctor()
extern void MetaplexJsonData__ctor_mF1CE93E88CD9BA674FD69D75D54268726E30643A (void);
// 0x0000051A System.Void Solana.Unity.SDK.Nft.MetaplexData::.ctor()
extern void MetaplexData__ctor_m8C7AB1EA3C51A48260FB0D9A4DE01081AD1857FB (void);
// 0x0000051B System.Void Solana.Unity.SDK.Nft.CreatorData::.ctor()
extern void CreatorData__ctor_mA17A1B2AA158D11B1AEA9A77EEE06FA000BE6EFC (void);
// 0x0000051C System.Void Solana.Unity.SDK.Nft.File::.ctor()
extern void File__ctor_m715CBF3E44330435DF65991787BDD0AFC5550228 (void);
// 0x0000051D System.Void Solana.Unity.SDK.Nft.Properties::.ctor()
extern void Properties__ctor_m78944B6ABFC5BCD5ACC11B55E4EAA1CD0E97553A (void);
// 0x0000051E System.Void Solana.Unity.SDK.Nft.Metaplex::.ctor(Solana.Unity.Metaplex.NFT.Library.MetadataAccount)
extern void Metaplex__ctor_m301DD08FF78DBFE60FB196F060B64D5B1082A29C (void);
// 0x0000051F Solana.Unity.SDK.Nft.NFTProData Solana.Unity.SDK.Nft.NFTProData::DeserializeNFTProData(System.String)
extern void NFTProData_DeserializeNFTProData_m1B56B9DFBC2FF15965779F8E8019E7A6E113BE03 (void);
// 0x00000520 System.Void Solana.Unity.SDK.Nft.NFTProData::.ctor()
extern void NFTProData__ctor_m6D6E773454EE51C70B1B56D7FB4F472008AC2A62 (void);
// 0x00000521 System.String Solana.Unity.SDK.Nft.NftImage::get_name()
extern void NftImage_get_name_m31A02C1BBDC36B30D4A2061B2A6D7F2727F05620 (void);
// 0x00000522 System.Void Solana.Unity.SDK.Nft.NftImage::set_name(System.String)
extern void NftImage_set_name_m595DD99548F5EF12D840D8316EB45816919E46F6 (void);
// 0x00000523 System.String Solana.Unity.SDK.Nft.NftImage::get_extension()
extern void NftImage_get_extension_m8EC747E41953C61A5BE39943D6876D92A4246D11 (void);
// 0x00000524 System.Void Solana.Unity.SDK.Nft.NftImage::set_extension(System.String)
extern void NftImage_set_extension_m570CD3BB0C9FF797E8FDA2EB61ED406DC28486E8 (void);
// 0x00000525 System.String Solana.Unity.SDK.Nft.NftImage::get_externalUrl()
extern void NftImage_get_externalUrl_m809C6DC78D290A0FF51CC08ADC4AB145A66EA806 (void);
// 0x00000526 System.Void Solana.Unity.SDK.Nft.NftImage::set_externalUrl(System.String)
extern void NftImage_set_externalUrl_m82EAF4A55FBB51F7A775758786A5410906B85AF7 (void);
// 0x00000527 UnityEngine.Texture2D Solana.Unity.SDK.Nft.NftImage::get_file()
extern void NftImage_get_file_mF87C00E458B7385A20656B4FAAC930473B3CDFD6 (void);
// 0x00000528 System.Void Solana.Unity.SDK.Nft.NftImage::set_file(UnityEngine.Texture2D)
extern void NftImage_set_file_mA0E407437B4D29D0B68645934C4613FEF61B7B23 (void);
// 0x00000529 System.Void Solana.Unity.SDK.Nft.NftImage::.ctor()
extern void NftImage__ctor_m67A1777D7E2D8D968815C6E7803EF2D219E5B3CC (void);
// 0x0000052A System.Void Solana.Unity.SDK.Nft.Nft::.ctor()
extern void Nft__ctor_mE6D1F715EEA47AEAA6F8C9F6A8A7D7C815B997AB (void);
// 0x0000052B System.Void Solana.Unity.SDK.Nft.Nft::.ctor(Solana.Unity.SDK.Nft.Metaplex)
extern void Nft__ctor_m87A95EEFFB10B250CA7E350677DB735AD03F6D9C (void);
// 0x0000052C System.Threading.Tasks.Task`1<Solana.Unity.SDK.Nft.Nft> Solana.Unity.SDK.Nft.Nft::TryGetNftData(System.String,Solana.Unity.Rpc.IRpcClient,System.Boolean,System.Int32,System.Boolean,Solana.Unity.Rpc.Types.Commitment)
extern void Nft_TryGetNftData_m5AAF4EADA0D4058E07FFBB49D27AC368E458D5A2 (void);
// 0x0000052D Solana.Unity.SDK.Nft.Nft Solana.Unity.SDK.Nft.Nft::TryLoadNftFromLocal(System.String)
extern void Nft_TryLoadNftFromLocal_m847ED85635E5620F2FB57EA13E811C20490A07A7 (void);
// 0x0000052E System.Threading.Tasks.Task Solana.Unity.SDK.Nft.Nft::LoadTexture(System.Int32)
extern void Nft_LoadTexture_mDFB1A673C4F3B46C7CD2344EBD8976AA9A9EAE56 (void);
// 0x0000052F System.Void Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::MoveNext()
extern void U3CTryGetNftDataU3Ed__3_MoveNext_m58C0867108B5FFE2CD4C4B51BF5948194AF79581 (void);
// 0x00000530 System.Void Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CTryGetNftDataU3Ed__3_SetStateMachine_m0DF8A2A110E9187D23E731F7A7605B3C6869F516 (void);
// 0x00000531 System.Void Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::MoveNext()
extern void U3CLoadTextureU3Ed__5_MoveNext_mC655A2A6DAE3DDA587484EAA064FA24C4E715217 (void);
// 0x00000532 System.Void Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoadTextureU3Ed__5_SetStateMachine_m416574BBE0B82DCB9C76C15F9D7A47FEAA340017 (void);
// 0x00000533 System.String Solana.Unity.SDK.Nft.iNftFile`1::get_name()
// 0x00000534 System.Void Solana.Unity.SDK.Nft.iNftFile`1::set_name(System.String)
// 0x00000535 System.String Solana.Unity.SDK.Nft.iNftFile`1::get_extension()
// 0x00000536 System.Void Solana.Unity.SDK.Nft.iNftFile`1::set_extension(System.String)
// 0x00000537 System.String Solana.Unity.SDK.Nft.iNftFile`1::get_externalUrl()
// 0x00000538 System.Void Solana.Unity.SDK.Nft.iNftFile`1::set_externalUrl(System.String)
// 0x00000539 T Solana.Unity.SDK.Nft.iNftFile`1::get_file()
// 0x0000053A System.Void Solana.Unity.SDK.Nft.iNftFile`1::set_file(T)
static Il2CppMethodPointer s_methodPointers[1338] = 
{
	EcdsaSignatures_EncodeP256PublicKey_m968BE495996F8D7C84468D0AA9B47179CB5EB9A1,
	EcdsaSignatures_ConvertEcp256SignatureDeRtoP1363_mE13BF5BC7716C2F3CF7D181C681FC51794127383,
	EcdsaSignatures_ConvertEcp256SignatureP1363ToDer_mE1B0575DB32276146A5EA714216C7844CE01C4A0,
	EcdsaSignatures_PackP1363ComponentToDerInteger_m489DAB74666CFF65F62275AFB002CA7B1D0DF4AD,
	EcdsaSignatures_CalculateDerIntLengthOfP1363Component_m1E3344B730303D6158F4B00BF3E6AD2B93C8A832,
	EcdsaSignatures_UnpackDerIntegerToP1363Component_m9DBF6B0FB45727D68B5A12C7DC8AA0F83FE42035,
	EcdsaSignatures_DecodeP256PublicKey_m903426580BB8C48B232F02F075803C489D5F5376,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AuthorizationResult_get_AuthToken_mB4CFB1A5B4BE3B6885C4530FFD30B14FEBFE5A27,
	AuthorizationResult_set_AuthToken_mEAE96F5B58F07BA5009B89010E5A9DF981A6528E,
	AuthorizationResult_get_WalletUriBase_m8F77837E4E30A2166CAA8F4B3235A0650DBED64A,
	AuthorizationResult_set_WalletUriBase_m7D5BBB9ED42A33AEF48A50E7F170220DB8D190F4,
	AuthorizationResult_get_Accounts_m799470352073D5E4B10561FB95040E970F250DCE,
	AuthorizationResult_set_Accounts_m056AB4C941F0D937A5EEEF1D5D1B59278EA4B282,
	AuthorizationResult_get_PublicKey_m7CBAE3E9DB8F6FC2D41C1D5BA6230C4C76BE3600,
	AuthorizationResult_get_AccountLabel_m1010976A374FDDED4AC8E9208CE27D0AD04737D0,
	AuthorizationResult__ctor_m6E45B3BF6ABA7B704025139BE2676B578D8BD1AC,
	AuthorizationResultAccounts_get_Address_m178759C623D5A3EEFBEDDC53E449B5395FE0ECD3,
	AuthorizationResultAccounts_set_Address_mE52C246A4F04CB3533D2186D26658A33EE144E49,
	AuthorizationResultAccounts_get_Label_mC4718B4C0833FF169C2857EA60FBF1B645169C41,
	AuthorizationResultAccounts_set_Label_m036D44156181C63915677AA0F51C63BE01A03EDB,
	AuthorizationResultAccounts__ctor_m2C2A80E63C996CA99AE6B09B2E01C9993D1B55EB,
	SignedResult_get_SignedPayloads_mD42754EF65D2AC5CF7CAC460EFDC24B1D5E6D263,
	SignedResult_set_SignedPayloads_mE41A30BF357AD1B9F3A91032A22FE95E090E231C,
	SignedResult_get_SignedPayloadsBytes_mF420D4F26EBFFFA7683B98287EB64205845D54F2,
	SignedResult__ctor_m0321130B7F8E8058F972FABD0B1FA552CD57130D,
	LocalAssociationIntentCreator_CreateAssociationIntent_mE9AAC14862F9FEE1C703350A5D5C080D2994BC9E,
	LocalAssociationScenario__ctor_m05E1F652B35E3C0B78FE70547F6EC66C46BBC83B,
	LocalAssociationScenario_StartAndExecute_m1B46392E69EE55217829ED06F9D1BFE276BE1E37,
	LocalAssociationScenario_TryConnectWs_mBDF2E6A01513A78DD5C35B9AF99C597B631AAA00,
	LocalAssociationScenario_ListenKeyExchange_mE6DAEDDA9F9B548B5278A7C512EA292FD5222A26,
	LocalAssociationScenario_HandleEncryptedSessionPayload_m726BF6C04187243EA584A4F6F21572E94CF10462,
	LocalAssociationScenario_ReceivePublicKeyHandler_m9DBAB645F4F940B216EADFDF473D50458AB6C0D9,
	LocalAssociationScenario_ExecuteNextAction_m99F1C6808FAEC7E108C196AA6D6D8B9BAC03EE65,
	LocalAssociationScenario_CloseAssociation_m5F3813465FEAE0A94A848B46B684F486D34FE5B0,
	LocalAssociationScenario_U3C_ctorU3Eb__11_0_m0EADB1B52B95C479CBC9373DD45733840E854A4E,
	LocalAssociationScenario_U3C_ctorU3Eb__11_1_m57A647D953D42686F70F78A5DB0DD00EFBC8C77E,
	U3CU3Ec__cctor_m915E770BF2D3CA0F2FBDB4E551BAB71C381EDFA5,
	U3CU3Ec__ctor_m880A7AACFCA67E86ACC56D1925C4061AF84960E0,
	U3CU3Ec_U3C_ctorU3Eb__11_2_m5D649E1BB978637E615BE15CCCF5E77F38657F26,
	U3CTryConnectWsU3Ed__13_MoveNext_mA107365B83365E5361B587986F458E3F6938B080,
	U3CTryConnectWsU3Ed__13_SetStateMachine_m5E620676114EBEE7BF929B74CC5B9F3962AA9993,
	U3CListenKeyExchangeU3Ed__14_MoveNext_mB99A2738F50EDFA2B2397168E093C8A6CC771D30,
	U3CListenKeyExchangeU3Ed__14_SetStateMachine_mC0890E8C7889BBBD47F1AD8EAC75069B6205866D,
	U3CCloseAssociationU3Ed__18_MoveNext_m0B3B0146057ACA239A26257CC868F839AFC4850F,
	U3CCloseAssociationU3Ed__18_SetStateMachine_m3EE333368D5F3571FCB7524B6AA0FFBC5045F20F,
	MobileWalletAdapterClient__ctor_m33CE4B6EFA2293E635CF6F031FFBA479EFB2DE7B,
	MobileWalletAdapterClient_Authorize_m7521B3B7610C978D3E76DFB67463970E932C824D,
	MobileWalletAdapterClient_Reauthorize_m9A026059A029A6B4C58369AB31681EC2601DF9BA,
	MobileWalletAdapterClient_SignTransactions_m4410B4B53BC304BF77FCD0F99A9E3DC679DFAB90,
	MobileWalletAdapterClient_SignMessages_mF74FD9444888CFF8B59DB40450E24ABA0384B5B8,
	MobileWalletAdapterClient_PrepareAuthRequest_mBC03624D7505FE98E73F96CE5A7BA6EF86C2C458,
	MobileWalletAdapterClient_PrepareSignTransactionsRequest_m652F6D65348FC1E51DBFF14786D26A9D69329A16,
	MobileWalletAdapterClient_PrepareSignMessagesRequest_m9CBF5639912AD996FB59C6C2880363C531CA5AD7,
	MobileWalletAdapterClient_NextMessageId_m38AB377AEF7A6AAADA277850ECBFB14A2AD6AB8E,
	MobileWalletAdapterSession_get_PublicKey_m08BC2CD6ED63C2EDA963DE888C98212D525DC527,
	MobileWalletAdapterSession_get_PrivateKey_mCC7174D6228CFE6086A0D704EA7271FB96425359,
	MobileWalletAdapterSession_get_PublicKeyBytes_m5171E56B4D8B386A4F3D9C7186C0D32DFD66169F,
	MobileWalletAdapterSession_get_PrivateKeyBytes_m8457E3E864D0397CBABD5A974566FE22AB8001D7,
	MobileWalletAdapterSession_get_AssociationToken_m23925C9A69D344DF470AA6CFD84016C8E44AD58D,
	MobileWalletAdapterSession__ctor_m123BA82182023E8F446013A5A0D8EF5942FB0498,
	MobileWalletAdapterSession_CreateHelloReq_mF66548C068553A70B9877B8984B6769714C044B1,
	MobileWalletAdapterSession_BuildHelloReq_mB60E38DC34C8A857269209FE59AE84BAB65F21D7,
	MobileWalletAdapterSession_ParseHelloRsp_mBF77B1710BDE7AB2AAE07A085FAA9ED2799C2BB5,
	MobileWalletAdapterSession_EncryptSessionPayload_m3FC3B386640AB9FA2D45E1BBEE1EB8B020D3D4D2,
	MobileWalletAdapterSession_DecryptSessionPayload_m52A684E12836F0F4FA8C043DD891ED1A56E598F2,
	MobileWalletAdapterSession_GenerateSessionEcdhSecret_mDCA109E1253F296ECEA8FA8CA5BAF3183D55A8D4,
	MobileWalletAdapterSession_GenerateSessionEcdhSecret_mC776D961D4B146E9E26CCD339729C7CAED942F3B,
	MobileWalletAdapterSession_CreateEncryptionKey_m857A619AAE2FBAA9FCBFACC2F53B0A53202388E7,
	MobileWalletAdapterSession_HkdfSHA256L16_mF6FE4C7B905E3905A2D478DF10D879446479E397,
	MobileWalletAdapterSession_Base64UrlEncode_mD11BE715F1ACF69B80AE90DF18ACDCB49CF1FE98,
	MobileWalletAdapterWebSocket__ctor_mC7A34EA35F85FA8A75837B4B40062CEADD782AD8,
	MobileWalletAdapterWebSocket_Send_mE426E9A045E68EDF463DF01AB1B2FAF48E1F5BD4,
	MainThreadDispatcher_Update_mD58FDB030D23FCF859B726D2D5246D44FACF6395,
	MainThreadDispatcher_Enqueue_m35202CA7C36AE525EF6EBBF83694EF6673A9036C,
	MainThreadDispatcher_Enqueue_m7B29D0D87905BF6630D6B91F63C94ADF13F1039F,
	MainThreadDispatcher_EnqueueAsync_m08BDEFFC439BB9E6FBECEDCB9DF7E9330A32BAE7,
	MainThreadDispatcher_ActionWrapper_m14133E689BEB4A6AC6D08F0538B75937352A83ED,
	MainThreadDispatcher_Exists_m72C45A44E96140C6D39415125CCE1259991A94A8,
	MainThreadDispatcher_Instance_m33FF4FBD4D7052C1C3514101DE016625C0C709F4,
	MainThreadDispatcher_Awake_m9330F67163388B02608A0B0514A2DD36714AB894,
	MainThreadDispatcher_OnDestroy_mEF4FC9A8094EF563D5AC885E65DA699BE08E1588,
	MainThreadDispatcher__ctor_m053EA76EF385EF43B62F92BC7353C05323E444DD,
	MainThreadDispatcher__cctor_m8AA445B85E11968ACBF17060D72ECCA40B13C133,
	U3CU3Ec__DisplayClass2_0__ctor_m2A9AEBC58E4D860C494CD96EEFFFB725C62EDCE6,
	U3CU3Ec__DisplayClass2_0_U3CEnqueueU3Eb__0_m5637B733C2F62C83E6D621EC92F1CAC1A2697852,
	U3CU3Ec__DisplayClass4_0__ctor_m64F8A6ED911BB75783819F9DA511BAC7B748F5AD,
	U3CU3Ec__DisplayClass4_0_U3CEnqueueAsyncU3Eg__WrappedActionU7C0_m9D0CD74118BF8686948A3E0BB0A0E6FE85C07B33,
	U3CActionWrapperU3Ed__5__ctor_mE99CFD920686FB710D3464FF310F800959FA7674,
	U3CActionWrapperU3Ed__5_System_IDisposable_Dispose_mDCE7D320C700A7FB69AEA5E3A456740772731001,
	U3CActionWrapperU3Ed__5_MoveNext_mCD9EBF5DDCFF5426201F6C704AB743EB48DAC2FB,
	U3CActionWrapperU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA5D03630E807CDDADA6DE07821BC43A8F52CB6A9,
	U3CActionWrapperU3Ed__5_System_Collections_IEnumerator_Reset_mE42D4D94CFBEAB62205DB2B44C0C9423D97DDC8B,
	U3CActionWrapperU3Ed__5_System_Collections_IEnumerator_get_Current_m790626C3FC1F17C7B576BB1C2F7FE1F276F9E656,
	HidingAttribute__ctor_m28320FEC95FE508E8FCDEB7C5F735798E738D8B2,
	HideIfAttribute__ctor_m4785F3FBD0D8FF1B36B839B431F20FEA2F0DDDAA,
	HideIfNullAttribute__ctor_m1138F644C747E7B11856B4111F46775C7A046863,
	HideIfNotNullAttribute__ctor_mF2B667969ADED48D394BD2E87FD2ABE8E3EA6D50,
	HideIfEnumValueAttribute__ctor_m5344A500A4523F11798F7AF9C39A78265B8155B3,
	HideIfExampleScript__ctor_m46E626CA9F1C91E359760B11E28308EA4729E4CC,
	TestDataParent__ctor_m34AB7D5855E5F41DDB3F5B873A1A75845203CBBF,
	TestData__ctor_m3B872A1BA8D04B69E5FCFF02A1326D3BF3DD2C5B,
	LogoutApiRequest_get_key_m6F2B3DA1E472F9621E19497BCB0CA2A8B75269AD,
	LogoutApiRequest_set_key_m1F8A006FF973C30317ECEF4860CC237B58BDA720,
	LogoutApiRequest_get_data_mFAD2BAF6EE18AD00D4D7D195B5903B504C0A6291,
	LogoutApiRequest_set_data_m643D4C872EAF4EC9F229D052B322794C4A88A3CD,
	LogoutApiRequest_get_signature_m8C4D0D1DB71E96F280DC1C901AC6E0E2CD07BB3F,
	LogoutApiRequest_set_signature_m587D6441A6F579A238152F808AE42995C9E6AEB0,
	LogoutApiRequest_get_timeout_mC9C5FEE0C8557668B0D673D67FCA0FA01AAAD6F6,
	LogoutApiRequest_set_timeout_m43AC44F6DBA87A5CD3DC22A7BDDD68E2C9D14F94,
	LogoutApiRequest__ctor_m82B1986CE277BDC5D4D25D2132D645DD59326CCF,
	StoreApiResponse_get_message_mFA85BFB10F72E16816EDC965AB39E6318B4EE018,
	StoreApiResponse_set_message_m1E0A7C99D1844ED1FC43FC89E9AFE63F690C6447,
	StoreApiResponse_get_success_mA5F567AF81C2BCF9A160D55678232A46553E76A3,
	StoreApiResponse_set_success_mF98D069C8D534081C2D5E77B68E6E92627A05D2C,
	StoreApiResponse__ctor_m25E40A36BB4C58A519733F45FF2BC59C24B76D4F,
	Web3AuthApi_getInstance_m51F2AF071F92616A5494F297A9F6E3E0268A9787,
	Web3AuthApi_authorizeSession_mAA83CE67CE6B484D9FBCE0B283B49045BDF7DC31,
	Web3AuthApi_logout_mDC3BE13A43FB0AAED8C07667DEE4F0D23645E4D8,
	Web3AuthApi__ctor_mC2CBECBF4AFD254DAE756CEFC65AC2A05AC13E3A,
	Web3AuthApi__cctor_m8C1A528BD6406981D4E1DB4FDFD4907B24CAD697,
	U3CauthorizeSessionU3Ed__3__ctor_m9D3473F020014A994095B50599C826F30B2DB528,
	U3CauthorizeSessionU3Ed__3_System_IDisposable_Dispose_m60734F18627E8F53503EF3694B6279901A5D35DC,
	U3CauthorizeSessionU3Ed__3_MoveNext_m37BA245683745016DC8DBEF41D08B81230259A75,
	U3CauthorizeSessionU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9375A5655E2386251A55AC702EA13A6E3AAA183E,
	U3CauthorizeSessionU3Ed__3_System_Collections_IEnumerator_Reset_m502E133420FCBE936D4BE259E62C8BA7AEC5FECC,
	U3CauthorizeSessionU3Ed__3_System_Collections_IEnumerator_get_Current_m80DC82DD57CB4ECAED97C985E3770D878D009D7D,
	U3ClogoutU3Ed__4__ctor_m339B159A9EB5756901EC0A8ADC3DA4BB5E3C4846,
	U3ClogoutU3Ed__4_System_IDisposable_Dispose_m2109F876A34D4986040EBE43D36F130F5C3D7718,
	U3ClogoutU3Ed__4_MoveNext_m696B3E6440D57272A67499485530E1EAF0167278,
	U3ClogoutU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m48B2AD3C6729ECEB34F906EB552A90C67A814ECD,
	U3ClogoutU3Ed__4_System_Collections_IEnumerator_Reset_m2DC1A62DD0D0ED0C0E473BD549D5D446E77AFC93,
	U3ClogoutU3Ed__4_System_Collections_IEnumerator_get_Current_mAADF2C5685F8A96FCA5B6349F85D95E576C95C96,
	KeyStoreManagerUtils_web3auth_keystore_set_mD8D3E9BA35E30F3A2215F8C45948C5C35DA98749,
	KeyStoreManagerUtils_web3auth_keystore_get_mDD1E5284ED273D20AE36691B5E8F70450C70DCA4,
	KeyStoreManagerUtils_web3auth_keystore_delete_m7BAB20793F0D6905EF60B409C04231BF9DA0F6C0,
	KeyStoreManagerUtils_getPubKey_m0FA4A06B9E5F6C6E8EA7188EBBAF224F761C2811,
	KeyStoreManagerUtils__cctor_m687DF66A18ECAC9591C9E7D75D1F710689D420C7,
	KeyStoreManagerUtils_savePreferenceData_m8A1E0EEFBD3A7671703B155705791D47E1782731,
	KeyStoreManagerUtils_getPreferencesData_m97CB9F28576CC6F91976E3C78B9A1D60DE59DAD7,
	KeyStoreManagerUtils_deletePreferencesData_mAF96F1BE6225B1BA502DC6ABFB57C2CC30467FCC,
	KeyStoreManagerUtils_getECDSASignature_m5638F059501B756844F78F6CBEA555473E0F050C,
	KeyStoreManagerUtils__ctor_m4F98AE5C7131002D37C95118FFE7DC7BA23407F4,
	AES256CBC__ctor_m3ACCFCDEF8D56644498070F4B6EB52D96326D825,
	AES256CBC_encrypt_m8A02C13CFC458F5AAF6723EC06B767952672550C,
	AES256CBC_decrypt_mF6A6057DAF9B8B7308892B22F72A019E330A2AF5,
	AES256CBC_ecdh_m7C5216E5B8C20291C80F4B6709B275EF1A52BCAD,
	AES256CBC_toByteArray_mFD5A4A077C9290E68C6E3F3E8B399BB9D2F45002,
	AES256CBC_toByteArray_m7AD6F7A4CE1DF12DCF79A5BAE44D52C7B100C4B9,
	AES256CBC__cctor_m8DD5F014E7C29157330CD8170D40935866224E7B,
	ExtraLoginOptions_get_additionalParams_mBA6735F124FABDE520D48FFE5A88DA05562A55D9,
	ExtraLoginOptions_set_additionalParams_m40707F1407A31B54E66BB889574C439F340727C3,
	ExtraLoginOptions_get_domain_m6131E23579017FC1BCAF0A829BE547FEF5905669,
	ExtraLoginOptions_set_domain_m4EA19092B763831C5F53EE180761353274F011A6,
	ExtraLoginOptions_get_client_id_m09B2D6DCB75136D76C31869C315C475DDDE1E183,
	ExtraLoginOptions_set_client_id_mFBD2836D089412F7F21C2139CB6B6CCD77A2E1FA,
	ExtraLoginOptions_get_leeway_mD6A62EC89CCB71E0B64D6747CEBDF3DDB1C47278,
	ExtraLoginOptions_set_leeway_m331C6A22AAF3A1D480D818136A472B0876F9FE84,
	ExtraLoginOptions_get_verifierIdField_m5F28F8EF1D6B8E1E019221D8D0694A8A6111D474,
	ExtraLoginOptions_set_verifierIdField_mE93DFFAA8521873A3CF0AE12F1B28CAC729B0867,
	ExtraLoginOptions_get_isVerifierIdCaseSensitive_m4DD0B987E99B346C30132CEBE2A833530EC3E385,
	ExtraLoginOptions_set_isVerifierIdCaseSensitive_mBFCB4EB528AFFE29749BB6B808125C7243117F05,
	ExtraLoginOptions_get_display_m582C404AEF2F9AFE00D380A0DD0173B94E9719D3,
	ExtraLoginOptions_set_display_m1DC37EA5632A3E78D6ECB67FE4129FFAD42091D9,
	ExtraLoginOptions_get_prompt_m439C4CDE16B587C3AE1D9B32176F7E8A140A2A56,
	ExtraLoginOptions_set_prompt_m9F1FCFD31E11025166B4F1750297AFB8200DBBC0,
	ExtraLoginOptions_get_max_age_m0B63452747C5B1448011E33568300E9D6A4D8BE2,
	ExtraLoginOptions_set_max_age_mA3BE4F975E864F9B6EA3E50FBF2A4842C204211B,
	ExtraLoginOptions_get_ui_locales_mC445FA1F42E58198360E080CCE232E98DEA26266,
	ExtraLoginOptions_set_ui_locales_m7DD41856C1618214620E2707B64DBC33DCEEA8BE,
	ExtraLoginOptions_get_id_token_hint_m34302F29679DAC1704D2E8A2F032CB5EF8E125EC,
	ExtraLoginOptions_set_id_token_hint_m987F045150D57822607B83C82F9BA9C0090E1254,
	ExtraLoginOptions_get_login_hint_mA69CF4B76EFE35D81E0485F93026FA35E2A6631C,
	ExtraLoginOptions_set_login_hint_mC7AAE43A999C7DED43B43E0AC944543A312CF799,
	ExtraLoginOptions_get_acr_values_mE0A525FFE95FC79E280C2B005661D448D3F1B9E2,
	ExtraLoginOptions_set_acr_values_m94199AC9D5855A3196E944F1DA9B8B5DA32DD74C,
	ExtraLoginOptions_get_scope_m803DEA6C9E0D9C5A04B01E21927191541A2187C3,
	ExtraLoginOptions_set_scope_m02A8E22DCD62FFB3789495DF18EB98D7A43FBB54,
	ExtraLoginOptions_get_audience_mBAA05244BBEA8E41B900A021C562D8DAAF58F1F3,
	ExtraLoginOptions_set_audience_m946126A321397A91C7DAC587F1D10919AF4A4BB5,
	ExtraLoginOptions_get_connection_m61437417EFF66A69741F181FA587FB6C68636BDB,
	ExtraLoginOptions_set_connection_mA97E28F72F7FF434C2CD956C7715AEC7AC3C3118,
	ExtraLoginOptions_get_state_m3FD3B48FC2C8EF9BA6F3CE01ED969710232DFEF1,
	ExtraLoginOptions_set_state_m95C4C71B5FAF01D34E84988E3549982DF33DDD5C,
	ExtraLoginOptions_get_response_type_m029938BFFF20D6CABD5C3CD8981A37F20DEE8692,
	ExtraLoginOptions_set_response_type_mF7A854E23B908E6647DD211FF38632159FA9E733,
	ExtraLoginOptions_get_nonce_m942756852E378E8C3E99581E7E23D4A68EE75A2E,
	ExtraLoginOptions_set_nonce_mC899BA92B3901F9753068B1647A6E1261748C2F1,
	ExtraLoginOptions_get_redirect_uri_m6840DFD4F78B8C70AE96462109A2923D1895D941,
	ExtraLoginOptions_set_redirect_uri_m94D089A4ACC07C27048FB33468E1E1D763961562,
	ExtraLoginOptions__ctor_m8C2AF94C304DDFC3CC52C78838AF364A2BA9A25A,
	LoginConfigItem_get_verifier_mA794C86057C0355A9859E507747564446F69A488,
	LoginConfigItem_set_verifier_m962018C987C1D76CFE29CCF2774475A978C6144C,
	LoginConfigItem_get_typeOfLogin_m24D2AAE229F138C6C129B41DBE98696C0AA4453D,
	LoginConfigItem_set_typeOfLogin_m294DAA27ADD1A8DE5A0230D6652B06B21339864E,
	LoginConfigItem_get_name_m9C0031B2B52386FD531CC601D79BC127A3A6E656,
	LoginConfigItem_set_name_m863399B80BA2DCAA0D67999BF85CBE96E12DF4AD,
	LoginConfigItem_get_description_mA8C7D479D75C74126D2393544939C79CAA0FAC31,
	LoginConfigItem_set_description_m9002AF95F927BCC0A9AA342FE6570B548231CA6D,
	LoginConfigItem_get_clientId_m8C98B27FA158D96A6F28A0A768C5F1E9B907B525,
	LoginConfigItem_set_clientId_m333385074CC16D3C5A0DC396CAFB948FA58EE510,
	LoginConfigItem_get_verifierSubIdentifier_m4D6C665D363ABB39D0DEEF531290B7215AA61994,
	LoginConfigItem_set_verifierSubIdentifier_mE6A515002BBA0CD192CAA4A4B2016521EBF60FD8,
	LoginConfigItem_get_logoHover_m438DD16DAA6C2C2560CBA8BC880F3F054D7A4B44,
	LoginConfigItem_set_logoHover_m9B2312A2165BC160DEE44F6B6E976DD416B0EE56,
	LoginConfigItem_get_logoLight_m31DE6DF9CBD4A507F71AEC8BA250C5008304E6D1,
	LoginConfigItem_set_logoLight_mDFD1716C5AF998620C4B705675BD9B8285140166,
	LoginConfigItem_get_logoDark_m91955949AE20290D2C40A8EDDE9576794DDB3B33,
	LoginConfigItem_set_logoDark_m69E843576BBEF264D1901F1FBF30876C18B8717D,
	LoginConfigItem_get_mainOption_m0F05F271A583A6DC61410F5310706DBA99E1725D,
	LoginConfigItem_set_mainOption_mAB4D615339DE122668B874A621AA3995F6335B6D,
	LoginConfigItem_get_showOnModal_mFF9B30BE58AEBE82C355DF378F316EB82A8AF4BF,
	LoginConfigItem_set_showOnModal_m51FCE3168113A56EDEAA9584CD280AD535244E04,
	LoginConfigItem_get_showOnDesktop_m6514CB41B44B0DE52799CF337CE9144C4DA4C74E,
	LoginConfigItem_set_showOnDesktop_m29100BC8118FBA640E335752B49000C1CF2BF12B,
	LoginConfigItem_get_showOnMobile_m70845D8C51F11EC9BCBB03243CC02360F1DC2D24,
	LoginConfigItem_set_showOnMobile_m49B2785CE40A529D783AFCCFE066F70684CA84F0,
	LoginConfigItem__ctor_mAC4FC85F5335C2502F529623D27107981CECB113,
	LoginParams_get_loginProvider_mEDC2EA94207549B6D5A3DCEFEB2F01FF0DD404B0,
	LoginParams_set_loginProvider_m181593F8F76CE2BB6B1928DD093E5A1FBDCCE32A,
	LoginParams_get_dappShare_m3F3904C846B6AA5F2FFDA9358B73333D83B8850C,
	LoginParams_set_dappShare_mAC238BA77CF4976323780E98A8DD94569213583C,
	LoginParams_get_extraLoginOptions_m8B2E80C34B1F8E89B30361ECDC3E7309F27A8EEB,
	LoginParams_set_extraLoginOptions_m52997FC70C25444090F1D656B5BC5498A0DE88F7,
	LoginParams_get_redirectUrl_m234C8555ABCAC471E66BFCADB353DF36ABD6D19C,
	LoginParams_set_redirectUrl_m46193FBDE6F4BC27CFE86B5F385702BD37548001,
	LoginParams_get_appState_mF4E1E4DDD5E13DEE77D8DB68B5657773A3F337DF,
	LoginParams_set_appState_mD6E89B9EC036DEEFCC844FC57D7FCF204499CFC7,
	LoginParams_get_mfaLevel_m6F22C8DA3E21413AF9E2A9D53BBF27688333DF2A,
	LoginParams_set_mfaLevel_m54E511FDE43D1EF63120F5695E3CE31328CB1494,
	LoginParams_get_sessionTime_m22FDA0E2F31E71CE7501D44D6D881BA912E9673C,
	LoginParams_set_sessionTime_m858ADA116068969FDDAEBF4008C4E9067EAF2E80,
	LoginParams_get_curve_mA3D2BD08D7C55FDD73862E0B50560FDD1AA5F5C4,
	LoginParams_set_curve_mC4F8B1DA20DCACA06200CA3B040DAF3033D9B48E,
	LoginParams__ctor_m180412D52E0846C8E1F06971236BFA23FA12FE98,
	SecurePlayerPrefs_Init_mA990D90D44307233C6C4096FF9202F6051E60191,
	SecurePlayerPrefs_isInitialized_m99904CFC695644EA61D5A3B447601CFC2D24336C,
	SecurePlayerPrefs_securePlayerPrefs_mB27DE70C606286DF0B0665270339D4FC29D360A8,
	SecurePlayerPrefs_setLogErrorsEnabled_m877648801097761144C34B41FDD056B6EBCBAF2A,
	SecurePlayerPrefs_SetString_m5D64C7C31332DE1AC22FE49AAF55282A078698BB,
	SecurePlayerPrefs_SetFloat_m1C4491F66EB61AB12CBFF270291B6FD7A391F074,
	SecurePlayerPrefs_SetInt_m9CF8F4FABED36BDC757826E98A92211127F4BDE6,
	SecurePlayerPrefs_SetBool_mCF63A78BE6ACBE72481891778155DFF89F9242DE,
	SecurePlayerPrefs_GetString_m9EC6DA24B9395553BCA7251A0A2CDE0D23CBF4A4,
	SecurePlayerPrefs_GetString_m7831E95383724BBFB89B42B3E8AA19151555D97D,
	SecurePlayerPrefs_GetInt_m1AB315EA660647AC4140C594618FACEDAF7A262C,
	SecurePlayerPrefs_GetInt_m09D9D4D29DE3C360784D60C06E04EC21D40918E5,
	SecurePlayerPrefs_GetFloat_m7427467F87E0EF57E7831B1138D5D1607B0EB45E,
	SecurePlayerPrefs_GetFloat_mF0F25298086503D1AD3C831DFFCB9584F482B3C8,
	SecurePlayerPrefs_GetBool_mEAAD4D41DC60A2247E7AA7ACA3AE440C11BA759C,
	SecurePlayerPrefs_GetBool_m254685E257088F0B3A31D2B6A538CEBC75BBC9ED,
	SecurePlayerPrefs_DeleteKey_mDC4E888E64BE1F5E9DF1E99C30B68EA6290CAAA5,
	SecurePlayerPrefs_DeleteAll_mA650F826E1DB430C22D24DF969369AD85AAAF45E,
	SecurePlayerPrefs_HasKey_m700AAC94B0BEE0E55A5A473896AD590442B1E09B,
	SecurePlayerPrefs_Save_m0FFB0CE70A0C7B4ECDBAE84BD4CC0CA83DA78FB7,
	SecurePlayerPrefs_Decrypt_m65B44B081A290EE669D5B593DFA8C82D550EE585,
	SecurePlayerPrefs_Encrypt_m32CF9AB11B6F06FBA1D0C6DA805A4FD3C82D5C30,
	SecurePlayerPrefs__ctor_mB946F5E6236F7726C4150C6C696E41E20CB8C345,
	SecurePlayerPrefs__cctor_mBBD1E8D7AC87E912D86FBE8B773FE6DCBFED75F3,
	ShareMetadata_get_iv_mE06C94EA532371BDDC937DC99DFC5BF1D3E98F0C,
	ShareMetadata_set_iv_mC57DEF8611776BF9A250C1E2B651D927DE235ED0,
	ShareMetadata_get_ephemPublicKey_mE020FC9FD0DB6134169318FE9CEB6CEB9EF91AD4,
	ShareMetadata_set_ephemPublicKey_m0004CB59FECB0F33A5CDC4B99BD5BBF55BE34F04,
	ShareMetadata_get_ciphertext_m39B35B03F9B0C0C92B996551F190D3DF989BA297,
	ShareMetadata_set_ciphertext_m3DDB5BCBE6A75CAB9AD96957D3538686395BF47C,
	ShareMetadata_get_mac_m2CB771FB2AD4C807315A7F06ABF2F9E854BB3523,
	ShareMetadata_set_mac_m8CC8C736358CD92860B313A429F7898B5442B13E,
	ShareMetadata__ctor_mE5F12844697576E7CCC7276E572A8D8FE9E6E8D7,
	UserInfo_get_email_mD2B1F56FEE0D3A150D3B6B785E736CC1553247CD,
	UserInfo_set_email_m1810F79A3E1109B2DC4894B442EB73C1D24013A3,
	UserInfo_get_name_m3C0966D4C3DCE034E1855CB1FDB69A4B2EFBC7B3,
	UserInfo_set_name_m10FBE57492A8606C9ECFF76EBA6F4642357F9EAD,
	UserInfo_get_profileImage_m603CF76C77A4F23C243BB2AE4D98B5B10CBA60F1,
	UserInfo_set_profileImage_mDC379266678ED3F5BE86C93C8FB56E7964C3C401,
	UserInfo_get_aggregateVerifier_mDEF6F37C5CA6B975B4A7340DA2F43119A99AA915,
	UserInfo_set_aggregateVerifier_m114824ABB74C2FB2B7DFAD0E1372E5AFFFDDD1A0,
	UserInfo_get_verifier_mF92AF50FBB6262C4C43027837EA9F4AC29253B82,
	UserInfo_set_verifier_mF4CA760A7574711A0A2C8D8ADEA525BB1A50DA9A,
	UserInfo_get_verifierId_m5EC029ECCA08043D4F23F162FE70A5277784DA2D,
	UserInfo_set_verifierId_mF7E5E64B69D51220C1ACF6CBE28B4779E535C86F,
	UserInfo_get_typeOfLogin_m0B18EC170E8ACBCEB7D91E63519C07EC35E96D9A,
	UserInfo_set_typeOfLogin_m4E2EC5BE7866EB9D4C8B5FC4763E275A6C7355F9,
	UserInfo_get_dappShare_m0E11EC09FB814616F9EDFC12F4A492DB5536BA87,
	UserInfo_set_dappShare_m3CFACC04510888F3CC2E423FFE576234DEB3BD43,
	UserInfo_get_idToken_mCAEE9818EF1A53F10501C64765949A220C4CCA60,
	UserInfo_set_idToken_m2D7E2BA05860F7866B46F68E7E6BBCA820150E3E,
	UserInfo_get_oAuthIdToken_mBF2391B6144CF9908F54199CF9EBD072041F553B,
	UserInfo_set_oAuthIdToken_mE02EEC446E68B8ECD83377F2FF9A00F1A1DAD189,
	UserInfo_get_oAuthAccessToken_mB1DEFE615F4F781D502DE19E63C3D28F650F7E42,
	UserInfo_set_oAuthAccessToken_mF1FE24F01372D6D00AC1F10BE913937B21355A7E,
	UserInfo__ctor_mF3C53CD740CCF86CFBBA344B407F2FD9453FE1A7,
	Web3AuthOptions_get_clientId_mB7B63B2D79C68861E79A9420283378CF5B6B5760,
	Web3AuthOptions_set_clientId_mCEDD013E698EB35EC1DF966FB8DB8B19293ECABB,
	Web3AuthOptions_get_network_mA8ECE6FB91D614BDF09B6141EEC73134EB685073,
	Web3AuthOptions_set_network_mCE0E43B7013A50142334B2432F46B4F48C21DC99,
	Web3AuthOptions_get_redirectUrl_mCE1F75BC723219D0E06A2A29994DD6CADA8E83D7,
	Web3AuthOptions_set_redirectUrl_m7DBFA16C2AD50D0BD4EA180EAA543D275CD8C0C2,
	Web3AuthOptions_get_sdkUrl_mE36C68C36E31C911E9983DC6739072CC3C4E20BF,
	Web3AuthOptions_set_sdkUrl_m770C16CC5B986DCC05178627BF721715E0E006BB,
	Web3AuthOptions_get_whiteLabel_m8B010D25D63A1C8807B40FEC2CA70BEA38E96610,
	Web3AuthOptions_set_whiteLabel_mB7789E8223F6DFA10FFFB6443B93A787BF31FC76,
	Web3AuthOptions_get_loginConfig_mF9A923D3DE8D5B999B3F2C849015CC8015F4CAAA,
	Web3AuthOptions_set_loginConfig_mDF29168D03D32BC4E8F8F2FBD6F7AE937EC0C488,
	Web3AuthOptions__ctor_m66B49631F2E216BD268B224BBB067217078E15D6,
	Web3AuthResponse_get_privKey_m9F08D1BE32C794AFE6E8CE683858D20E5B5DC127,
	Web3AuthResponse_set_privKey_m2CAFC221F7A152EB1C771521084AB2A076E4B12F,
	Web3AuthResponse_get_ed25519PrivKey_m1694D26EC8F4567F7148177A1A048D794465FBCB,
	Web3AuthResponse_set_ed25519PrivKey_mACEDDB5A71D051402E5BAD9EFC22E1250B6A8C17,
	Web3AuthResponse_get_userInfo_m106EA2DF5EB8272E8012A57A20A00E7586BCC726,
	Web3AuthResponse_set_userInfo_mFF79B100D73EA9FFEBB5CDBABABB9E4674488DE0,
	Web3AuthResponse_get_error_mBC32ECE44E253AA9CB156C9B2D49C0BDC2DFADC7,
	Web3AuthResponse_set_error_mFA61A132E5E90F4EA4F1AD4DE7732DE46C6BFCEF,
	Web3AuthResponse_get_sessionId_m23D54DE64D16CCAF3D1EC93AAB421D036E94579F,
	Web3AuthResponse_set_sessionId_mAC019AC50AA7B076FE8FB1A2A99E66D1DA88D627,
	Web3AuthResponse__ctor_mCF003E1741A472AC2C06EBBDD7737E4C84AD0FAD,
	Web3AuthResponse__ctor_mE3D4107276F4E35766EF40E2B20DE9696F2CC8A4,
	Web3AuthResponse__ctor_m2B365B20E6A3C736BD61E205612196F1FC534D4D,
	WhiteLabelData_get_name_mDBB093EF0F5BC443A584BD2B99A96B8F06965AC6,
	WhiteLabelData_set_name_mAC8DA271351FE8292B052EA977F1403567691B55,
	WhiteLabelData_get_logoLight_mDE265BA766DEE3EC5C4B4D08D716A85E80B6D687,
	WhiteLabelData_set_logoLight_mD1F7263F6DBCBB2741F374A79FF3BD8F27CEBF9E,
	WhiteLabelData_get_logoDark_m6B1A8F62473FEDFA4F37F8DEBDA75B42A5EFC337,
	WhiteLabelData_set_logoDark_mEAD1A09AAEC6B29B9AC57840EFD20ACDEAD6F4E9,
	WhiteLabelData_get_defaultLanguage_mCB5F5CD192AC76A0CD64E3F7F8E671BF4DB7620B,
	WhiteLabelData_set_defaultLanguage_m6FD9E33CCD8956B9B64272DDA29C4B348179615E,
	WhiteLabelData_get_dark_m994DE1A34E7805DFC04D7FC595F75B8D3B2A548C,
	WhiteLabelData_set_dark_m715345FA97EAEE76703909B7CF47AD0725285778,
	WhiteLabelData_get_theme_m521DB832A7C4BA698BE0D27B7F6B6971EF03909E,
	WhiteLabelData_set_theme_mE705905C59E482D06603CCC9DD2CF6747E5549E8,
	WhiteLabelData__ctor_mC934E1230E97FCB07BDF7BCE6DB0CEE22827961E,
	Utils_web3auth_launch_mF1F184FE2D581B2D3B6BB951507801E4B279DD2A,
	Utils_LaunchUrl_m91AB1098CD57D10BDD2D6CAF4D0B0D8CA11062CC,
	Utils_DecodeBase64_m489A851C0F2481FE1EAB0E792FF18A6F8A4EF78C,
	Utils_ParseQuery_m94DCE66CA78640B2AE0A2AE0BE1B5EA6AEA54334,
	Utils_GetRandomUnusedPort_m3B0D526958B3373ECFA2310677FDEA3523F9EE97,
	U3CU3Ec__cctor_m33AE10837481E69BFC74370F54D619BCF69AEE9B,
	U3CU3Ec__ctor_mFC65BA92B86438243BC898E9581B2EE5DA795BFC,
	U3CU3Ec_U3CParseQueryU3Eb__3_0_m26F4977887BAFA6087B5B2FA17C445B39B47CFFF,
	U3CU3Ec_U3CParseQueryU3Eb__3_1_m70CB6979C394D2236500BBBA13A8410DB53CAC93,
	U3CU3Ec_U3CParseQueryU3Eb__3_2_mE53FC528EDDCEFEBE7057B3DCF363D7D2C75B982,
	Web3Auth_add_onLogin_m9EDD31618AEC9CEC618953CEBF421A8AAF98D0EF,
	Web3Auth_remove_onLogin_m2C2E76F710A2DDD05A87654AB1E31F09E6FD9603,
	Web3Auth_add_onLogout_m9CCAFD46D4BF381D5317E66D2763ADA4DDA88E7D,
	Web3Auth_remove_onLogout_m253416187483E4C75FBC0573663D2EC43BC9EBA6,
	Web3Auth_Awake_m0747C47A5BB5A5EF08732269FC410294847EA469,
	Web3Auth_setOptions_mC13A88189661DC7B1BC34EB06153EAEBD6BBF989,
	Web3Auth_onDeepLinkActivated_mC3A5B16026F6E11C6C7331788F506CC8132C9855,
	Web3Auth_request_mA40017A55F64E8FF339FEA33674F9A76F5B37407,
	Web3Auth_setResultUrl_mE3FD69FD804A8FEE15EB059669B5C71C7194E918,
	Web3Auth_login_m9EF66427D479EAAE621EA7BAC1D33F062901846A,
	Web3Auth_logout_mFBC41AA0A4731EC6DE40B6E66A85FC2749716D74,
	Web3Auth_logout_m7EC70DDD1A767A4C96B843F1818DCF272B353B57,
	Web3Auth_authorizeSession_mE985B0EE53FAD38A3E465DDE1700FD7DE36AA191,
	Web3Auth_sessionTimeOutAPI_m0DDD2FE8A3EBFAC34C7ADC9E8FC2E870A3D67A4E,
	Web3Auth_Update_mB48C59E94C6D37F673C4D198F4F55332FA4B0AEE,
	Web3Auth_Enqueue_m4C359A8F1B99BB30B0C0FA6A90F6B95DC41D01CC,
	Web3Auth_ActionWrapper_m5460219D24A1E7E0DFBA1310B1C61495499A91F5,
	Web3Auth__ctor_m15252B91E6D7B6F19BE73097E3EF0C91D4119C85,
	Web3Auth__cctor_mB1540CCD83E03E726A62895A7260A2ECF2916E6E,
	Web3Auth_U3CsetResultUrlU3Eb__19_0_m39B5C7983CE2C4008B92731B4492DA19D517F9AC,
	Web3Auth_U3CsetResultUrlU3Eb__19_1_mCC156DBD68B3FC00DC6AD0D943038C639C4E8656,
	Web3Auth_U3CsetResultUrlU3Eb__19_2_mF562EE3777E78A34F614C6676AB3EDA4900E905D,
	U3CU3Ec__DisplayClass23_0__ctor_mC4D4A7861E6C7BE3ECC8C83DF028CF9D9795E85F,
	U3CU3Ec__DisplayClass23_0_U3CauthorizeSessionU3Eb__0_m20AC2950722D382AD395F0DC43AD863750BEED83,
	U3CU3Ec__DisplayClass23_0_U3CauthorizeSessionU3Eb__1_m0BEF105054BE6294A277F64E69342965D09F9862,
	U3CU3Ec__DisplayClass23_0_U3CauthorizeSessionU3Eb__2_mD48DF10F56386B21A4C094241B76B95DD62231CB,
	U3CU3Ec__DisplayClass24_0__ctor_mD82D3208D898047DD00AF6999DBEB1990A5DF25D,
	U3CU3Ec__DisplayClass24_0_U3CsessionTimeOutAPIU3Eb__0_mABE1727C8B168D6E3A7F91D23EF6E3D3B6F3AE1B,
	U3CU3Ec__DisplayClass24_0_U3CsessionTimeOutAPIU3Eb__1_mE05FAF31FB3F7168F40D162DDEDE21D83AAA5C2A,
	U3CU3Ec__DisplayClass24_0_U3CsessionTimeOutAPIU3Eb__2_mE081C7E6645F22A99C0B1C62502E327AD473B0A0,
	U3CU3Ec__DisplayClass26_0__ctor_mC5B35FFB7AA410AF6AC1CC0A2284A8F97DD0AD02,
	U3CU3Ec__DisplayClass26_0_U3CEnqueueU3Eb__0_m17A828F8EC60F93CE4AE64D0F3A9353F2ECC07FF,
	U3CActionWrapperU3Ed__27__ctor_mF8E5F9F2668E6C6588F49C7858D2F518CB0F0E61,
	U3CActionWrapperU3Ed__27_System_IDisposable_Dispose_mF8919282F0E8C469CD9437353549A0FA8181ECA0,
	U3CActionWrapperU3Ed__27_MoveNext_m6DAC129F473E9316E452B9D4CC13BF60B7696CD5,
	U3CActionWrapperU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m13314A3316F10C97769F18AA9C3C94A5918EF71D,
	U3CActionWrapperU3Ed__27_System_Collections_IEnumerator_Reset_m53A4FD15C72DFECFFCC51EB9CE9791302CF3B8EA,
	U3CActionWrapperU3Ed__27_System_Collections_IEnumerator_get_Current_mF09DB4A5B870BA83F6EE6B3C4F4AE54F6B5DD67D,
	UserCancelledException__ctor_m0CFF14ABB7A0CD83F8EAB3D77E7F82068CA5594D,
	UnKnownException__ctor_mBCC00999CAFB3B33A999BC28CB370FCCF9D6CE66,
	WebGLInputMobilePlugin_WebGLInputMobileRegister_m79F352E8388C0495F92218A564C060E81CC21B8B,
	WebGLInputMobilePlugin_WebGLInputMobileOnFocusOut_m985EC71B7BABFBB225189C26159A04809B170995,
	WebGLInputMobilePlugin__ctor_m163F1CAB8968930FFE344890F51CA76863DA222C,
	WebGLInputMobile_Awake_m6464CF07E9B9A8B1F2DEA7C058DB243A8010B532,
	WebGLInputMobile_OnPointerDown_m64CB17BE39FBAABEF12E52B1E210D4E1DF6CD535,
	WebGLInputMobile_OnTouchEnd_mA93BC33B84197B228324BF845083BD9773C98FE7,
	WebGLInputMobile_RegisterOnFocusOut_m697C0181EFE313C4CD16AAD1549736FB2231DFD7,
	WebGLInputMobile_OnFocusOut_m738467287A0F65FB47CBCD9E0A89DA7E9F47C47F,
	WebGLInputMobile_ExecFocusOut_mEA99D0F430E536AF12F50C05BB451A7886B6717B,
	WebGLInputMobile__ctor_m3325A035D098D0C34996AB53A667D79E1D4F7DBC,
	WebGLInputMobile__cctor_m699B0A608055F9D0346EBB7F0C3F0E4E2BF40A59,
	U3CRegisterOnFocusOutU3Ed__5__ctor_m49FB20F2E86E6235EF4BC9EDF9A9337A2BF891E7,
	U3CRegisterOnFocusOutU3Ed__5_System_IDisposable_Dispose_m25F9C07BB94C04A217A49C3E10A32676D5A8C116,
	U3CRegisterOnFocusOutU3Ed__5_MoveNext_m445D1F9129A4B01F3252CE11BEB2AA3D098AEA76,
	U3CRegisterOnFocusOutU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m56B80C139738E9BEBE452460040CCE1076F3AD64,
	U3CRegisterOnFocusOutU3Ed__5_System_Collections_IEnumerator_Reset_mB17DAD52A7A8CD7CFB0DB13F5303FBB74F03B150,
	U3CRegisterOnFocusOutU3Ed__5_System_Collections_IEnumerator_get_Current_m97C1222340BA4B330406B7B362813C868C30FF20,
	U3CExecFocusOutU3Ed__7__ctor_mD008B09446E714FBC21C1E00ABE3D4084A6D6480,
	U3CExecFocusOutU3Ed__7_System_IDisposable_Dispose_m1E420ED2CA74F2FCFE3F1E5270F1F7CD3B2FCE09,
	U3CExecFocusOutU3Ed__7_MoveNext_m697FC926BF8D0DEEA7DC3009454D32BC6FBE7A18,
	U3CExecFocusOutU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m609559A44E4BB630C63C4F20D56958AD162F5D8A,
	U3CExecFocusOutU3Ed__7_System_Collections_IEnumerator_Reset_m67DC72CC4430E06C989FC08C319D65C2857A43AD,
	U3CExecFocusOutU3Ed__7_System_Collections_IEnumerator_get_Current_m717C3EB6D3A3080BDE765089834E9DBFED55D367,
	WebGLInputPlugin_WebGLInputInit_m11E3589EAF93DB31FAFE779A2C9D2925A9A91A6F,
	WebGLInputPlugin_WebGLInputCreate_m746DD59EB7BEA71E65D865878A45D10A507929E3,
	WebGLInputPlugin_WebGLInputEnterSubmit_m27B76DD3640B3C8D52E601D8C798F2E3C90E6044,
	WebGLInputPlugin_WebGLInputTab_m20EBAC5FAB0884BCE57106F201557AA7FCB3127F,
	WebGLInputPlugin_WebGLInputFocus_m188075249363DF64437E93BCB7011F306C95F3D3,
	WebGLInputPlugin_WebGLInputOnFocus_m2692B91D9A6A5E300E8EE174812B331551C31C8E,
	WebGLInputPlugin_WebGLInputOnBlur_mA7643E022BA1D92EDCAE42B82777F43B45B94D0E,
	WebGLInputPlugin_WebGLInputOnValueChange_m0DCA9A890D212A2CB5C114A6AD5CE5F142DFECE5,
	WebGLInputPlugin_WebGLInputOnEditEnd_m2042A3B206645A40E639677607AA96D113BAFB3E,
	WebGLInputPlugin_WebGLInputSelectionStart_m29E14E7BD7633302296C5CACA783D0AD48BEC4B9,
	WebGLInputPlugin_WebGLInputSelectionEnd_mC732BE407F33DF1E3120E61448717FF77CD62EA0,
	WebGLInputPlugin_WebGLInputSelectionDirection_m2E359AEE64C9F388FFC3512194B12D29A2CED4DD,
	WebGLInputPlugin_WebGLInputSetSelectionRange_mC59493011984976120C0A3AD535721B60D5EC365,
	WebGLInputPlugin_WebGLInputMaxLength_m9C93EEB91C34970CE5A18685795C50EC72E07445,
	WebGLInputPlugin_WebGLInputText_mB9672B4EDE70472818658C3FE33BFD03F8A52478,
	WebGLInputPlugin_WebGLInputIsFocus_mE876AE821EDE3C824F9BDF8E8F51E7A6176E44FC,
	WebGLInputPlugin_WebGLInputDelete_m8A48356215405A65CFC9834A8B419CF264EFB9C1,
	WebGLInputPlugin_WebGLInputForceBlur_m8665C6719F80411FFCFEFFA09D6E755236047A06,
	WebGLInputPlugin__ctor_m5E7C4D525EC7981177E039CBAE10A52FE4F922F5,
	WebGLInput_get_CanvasId_mB541B0AC12E27B2EAF4345A3AB266DDCC12FE82E,
	WebGLInput_set_CanvasId_m27A44AC456B182203EB1F06324BD0532BA55F682,
	WebGLInput__cctor_m983D0D9A5EFCA2E63A6D451D7F9733C1B9585055,
	WebGLInput_get_Id_m8FD52639A53A9DB0CDCFC9BF31F8DC8B6C0883BE,
	WebGLInput_Setup_mEE70F874E9A9376C25C8D47C92F9B014CD32A22E,
	WebGLInput_Awake_mC2703EB0612C2026ABCCB8D12097EA2BF6F1DDC0,
	WebGLInput_GetElemetRect_mC1BA321333DDF36404F5DB783468E735CC9296C4,
	WebGLInput_OnSelect_m2501A996790CD595512E511E03FF8E0ECED38704,
	WebGLInput_OnWindowBlur_m7FE0D287BEC3C71A79B7BEA6C101CACF80A127BE,
	WebGLInput_GetScreenCoordinates_mA95B21A7F596D2B46169B26FD9D04E0ADE2863F6,
	WebGLInput_DeactivateInputField_mD20A5FF891DBC6AF9DB3905F16253236A6CC6FF8,
	WebGLInput_OnFocus_mEAFF02CB2715232B724DBF02517417F85CCF66B4,
	WebGLInput_OnBlur_m056127CBA134428CD5D30B5D0D567BBAD4244400,
	WebGLInput_Blur_m6FA4AA0BCCF4DF1C2DF9B7892086CF0E4ACCD389,
	WebGLInput_OnValueChange_m8FC2093C4282D531764042FF66ADBB6526218B39,
	WebGLInput_OnEditEnd_mD1ADCC675C43BF48128C84734354BB25DCCB6EDB,
	WebGLInput_OnTab_m9D1182F054C00912D28B631BA1F798B1BD3D2788,
	WebGLInput_Update_m9E94E31967B7F3F2BCF1BF3F13DB83D9E913C22A,
	WebGLInput_OnDestroy_m2C03015DD6619F6835140D8D3E047AFE0381D756,
	WebGLInput_OnEnable_mE483787299E6E11EEDF8DDE4D1A4BEC352252B81,
	WebGLInput_OnDisable_m0A6B4FF88B34EF05DDDCE5C71534A73C219E94C5,
	WebGLInput_CompareTo_mABC11AA70E31E68012F61AD2AEE128C3C1B0A654,
	WebGLInput_CheckOutFocus_m878C304E5815A7387CFCA617A8C1E8D862F775A3,
	WebGLInput__ctor_m7D749FA5DED7D95529A03EAB4532F7EFDF400C4C,
	WebGLInputTabFocus_Add_mEECB0EC5C006C2D2D8BDFCEADB58AA51FEE37745,
	WebGLInputTabFocus_Remove_mB969B93318E953A3554C53A2EB3ADE2A212A39DF,
	WebGLInputTabFocus_OnTab_m6A5BC1CD11614EE556767ECCBC9F92092DD223F8,
	WebGLInputTabFocus__cctor_mB169E6E6D631DAFF29087AFA112807D6D64140E0,
	U3CBlurU3Ed__21__ctor_m96CC10B7C3F3A245C410A4365D20F6AF0DFC8D80,
	U3CBlurU3Ed__21_System_IDisposable_Dispose_mBC6A4B22FF50294136AC7B70FF6B8420B4983FAB,
	U3CBlurU3Ed__21_MoveNext_m95C7A268C2FFE4111985F4A647ACD73A357D2CE8,
	U3CBlurU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m577A487FF60CEFFE5AEFFD4DC523D0F2D9DAFC65,
	U3CBlurU3Ed__21_System_Collections_IEnumerator_Reset_m0A25592619505B8F99027D6959CFD4334D965557,
	U3CBlurU3Ed__21_System_Collections_IEnumerator_get_Current_mEDF84A3CBA2C5907837E898369CD1466002C6A80,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	WrappedInputField_get_ReadOnly_m428F23DCBC9E36A30C204018EDEAAF99AC782ABB,
	WrappedInputField_get_text_m1983DF85C628EDC2B247E256BACFD37F04297085,
	WrappedInputField_set_text_m05639FF0C477EE01BDF884A75B941D26DE5AF5A2,
	WrappedInputField_get_placeholder_mA9068EA5816B9A85C9170A893BBD5F60B025C9E8,
	WrappedInputField_get_fontSize_m16B03C1A1D743FD5D870D22E5C11E83416D5C036,
	WrappedInputField_get_contentType_m06770CF12946A355E27814130ECFEDC10222D3A7,
	WrappedInputField_get_lineType_mA45DACE8F5D5D6EEF1545160D7EFCAE18E5F5E7A,
	WrappedInputField_get_characterLimit_m6E690B786BAE1B09A54C477DF7590E712EB28B03,
	WrappedInputField_get_caretPosition_m0442E4B94A45213ED0C14E329ED5B48D9B4FCACB,
	WrappedInputField_get_isFocused_m925F5D979144A279B38F8BBF72A19400E0E12A9B,
	WrappedInputField_get_selectionFocusPosition_mB3E56DCF3A23BAFB780395DC4074E555C9BC7862,
	WrappedInputField_set_selectionFocusPosition_m007D75E5FC9EFC925D43366AC7CC90F5BC2F520F,
	WrappedInputField_get_selectionAnchorPosition_m5732B37A50B1CE0007D1DBDE264626EBD49CF672,
	WrappedInputField_set_selectionAnchorPosition_mD93CDEA00A2917423476CAFAD234F2C8A2513239,
	WrappedInputField_get_OnFocusSelectAll_m4CF7B3387AC1F9DB549EF8FAD137D4EC0DC4157B,
	WrappedInputField__ctor_m2B946563DAB6C458A6D0737ACEA38353D808187D,
	WrappedInputField_RectTransform_mA42FF05237958C8C636185CBD29A2D12437985EE,
	WrappedInputField_ActivateInputField_mD22DD8839583C0B252D0C4AC388E2436F360D8CB,
	WrappedInputField_DeactivateInputField_mABA9A5F0D9EA724AD05FDA607AFA96522A0CBBDA,
	WrappedInputField_Rebuild_mCAE68B915D4FB2F69C946C012EB1B92E8C134534,
	WrappedTMPInputField_get_ReadOnly_mB06842447B3E03A0801B1C52A5A2B21385BE6091,
	WrappedTMPInputField_get_text_m8EB762920F69B57AF10D9E78198A273CC0A8FC63,
	WrappedTMPInputField_set_text_mEA1A3B7E81E123B240A949BB414A673A9C34C7C3,
	WrappedTMPInputField_FixContentTypeByInputField_mE5B8172CED6414B35A23DBA5A29BDFE5CDC74C4E,
	WrappedTMPInputField_get_placeholder_m61AF641D161DB6B7C2DAE66A528E6FC98DF3FDED,
	WrappedTMPInputField_get_fontSize_m23BC3CEC22F12EB6AAD766CBC09E6F4A2ECD14DA,
	WrappedTMPInputField_get_contentType_m00FE1A9E02562196F113635C1A921D4E8E5D952F,
	WrappedTMPInputField_get_lineType_mE48EAC52B1DFE718C9AB52AFE715BE10260361D0,
	WrappedTMPInputField_get_characterLimit_mC1A286835AA6914B16186F413BD03134B1BE0436,
	WrappedTMPInputField_get_caretPosition_m74D892B07E28EC0AF9201201A20ECA32AB690A63,
	WrappedTMPInputField_get_isFocused_mBB79F8A9F84DD846C3178E92E9F67A3FAD6DF925,
	WrappedTMPInputField_get_selectionFocusPosition_m309580C258000773C2EA99C0E2592BC7E68108BB,
	WrappedTMPInputField_set_selectionFocusPosition_m172B858C30425DAAD1F128A8DF07FBEB7276E03B,
	WrappedTMPInputField_get_selectionAnchorPosition_m6F635E0813809FFA8C0265C0F7671C982E3FE215,
	WrappedTMPInputField_set_selectionAnchorPosition_m2FB5C4A23633EB75DFFC0584A9ACA9485301216C,
	WrappedTMPInputField_get_OnFocusSelectAll_m310978B0DDA93064749EE745F3D3A7287A96E7D6,
	WrappedTMPInputField__ctor_m8F5E644E417C461955F73B4AB5556F98BCCC8657,
	WrappedTMPInputField_RectTransform_m4857FF0B1AA784EDD3EDECFF9C5AEFAC63048429,
	WrappedTMPInputField_ActivateInputField_m63F1EF6D6817490014FDF46F0E593B954E7BC12E,
	WrappedTMPInputField_DeactivateInputField_m37015E6942E12586F31655425507B67B7DBE8759,
	WrappedTMPInputField_Rebuild_m0FEB6D41142881CBF63A107E85792F457E5D932F,
	WrappedTMPInputField_rectOverlaps_mF6994651D544841E487489660B816477AE77F5E0,
	WebGLWindowPlugin_WebGLWindowInit_mD5F5FA743488693577E1C46667A6D4D9B666E6D3,
	WebGLWindowPlugin_WebGLWindowOnFocus_m9442B500174D9E18E9BC09755B16798F4F17FEAF,
	WebGLWindowPlugin_WebGLWindowOnBlur_m8B642358B3D2E80F008AFA18F31CE04B4658587B,
	WebGLWindowPlugin_WebGLWindowOnResize_mC5F5E08082E0EE9AFD3FF7E555BCEC39DF1C728F,
	WebGLWindowPlugin_WebGLWindowInjectFullscreen_mFC44BE99F4C870D576B3798BF7582D82C5EC9BE0,
	WebGLWindow__cctor_mD6D063FD4C42BB7305BA8F3D460AD0E9C9B04032,
	WebGLWindow_get_Focus_m894316869DC5C4E813F3B167AA4F2FD19B988C7A,
	WebGLWindow_set_Focus_mDB67CFFBB4E4FC1B53C4EA7786B43B1D41DCEF0F,
	WebGLWindow_add_OnFocusEvent_mEB4B84D9D2CBEB713DD41B6BD5B999A787685CAF,
	WebGLWindow_remove_OnFocusEvent_mA0BCADA00CFEFAF2DB534CB7B56E3B4C44287D96,
	WebGLWindow_add_OnBlurEvent_mF314D905439790B708240F19A3232F3A1ACE08A0,
	WebGLWindow_remove_OnBlurEvent_m5D47004D38D5EF44EFC946DCC65468BACC4D2880,
	WebGLWindow_add_OnResizeEvent_m706090D11DF1E6B94211AB492B08D1635855A9DD,
	WebGLWindow_remove_OnResizeEvent_m09D49FF0B6B215CFF896CA7EFCF10F6FE29B9914,
	WebGLWindow_Init_mBDC66BECBD8FFEB0465EBEDF58D1BB1F160AAF3D,
	WebGLWindow_OnWindowFocus_m175353D303C2E8EB07A2679015D269E0F3623C3D,
	WebGLWindow_OnWindowBlur_m0CF09BA6693BCDA3D073A368AB81A46122449FF4,
	WebGLWindow_OnWindowResize_m386294E41E1A89D8BB052E42ED30972194B8356C,
	WebGLWindow_RuntimeInitializeOnLoadMethod_mFF4BD1C75805AA70FE8476EDEA4ACBF8990C450A,
	U3CU3Ec__cctor_mBDAF04B08BE41CD35C3AA8527E0454027333E236,
	U3CU3Ec__ctor_m2E40A16646D4972F915BC91A028BD57A17F2A2FD,
	U3CU3Ec_U3C_cctorU3Eb__0_0_mA834CD175B5C7F0A819FC27C2F1CA8B939CB4443,
	U3CU3Ec_U3C_cctorU3Eb__0_1_m9AC71766017F7002DE0CA1112BDFBA4135C2E8B8,
	U3CU3Ec_U3C_cctorU3Eb__0_2_mC9844ED32160A6274225CBB20AC765E202E53CC8,
	RebuildChecker__ctor_m8AC1AAB23BC3D1220610838BEBA8BED02A54CA9A,
	RebuildChecker_NeedRebuild_mCBB5465AEB51A0559BAF7B4A5A25C843D027AA63,
	Clipboard_Copy_mED1E74A99DFEF4ACFD652DEFFC62B9664374F3C1,
	Base58Encoding_AddCheckSum_mAACF51264A8660C9AB635BBA4E54E6E8A4063B7B,
	Base58Encoding_VerifyAndRemoveCheckSum_m20C2BA2CCB753F35D0FCE4664C1F29676255F50D,
	Base58Encoding_Encode_m5C58E4749FE9E801743DB17A520E975BE8876578,
	Base58Encoding_EncodeWithCheckSum_m39AF1DD16D1765EBD85F983530A4D6608C34113C,
	Base58Encoding_Decode_m1D4402B734182E7F62A3E7795E7856D75AD076FA,
	Base58Encoding_DecodeWithCheckSum_m1BA6820908ADD5A572D7A6564277EB6DC6534A86,
	Base58Encoding_GetCheckSum_m434B54BA58490F0251A0051BA9F7AC6DC420F7E8,
	U3CU3Ec__cctor_m39566B9A3242011881BA9B25314FB60E28CBD938,
	U3CU3Ec__ctor_m6A52DA16A0EFBD0B5B37AC7769AFD90148EBDF32,
	U3CU3Ec_U3CEncodeU3Eb__4_0_m84A9D74001D0DCA47FD705B4E762165026F080A9,
	U3CU3Ec_U3CDecodeU3Eb__6_0_mF12D53D897CA871076F8EB2CDE6AABFE9C779D0E,
	U3CU3Ec_U3CDecodeU3Eb__6_1_mD660697A18C9CE0AE9B5B9886C40FACCF4C9F9EB,
	NULL,
	NULL,
	NULL,
	NULL,
	ArrayHelpers__ctor_m41FB4847AE5F2FA1031560016A2CA56FE3791B7B,
	NULL,
	NULL,
	NULL,
	CandyMachineClient__ctor_m77D50584B968AEE061109A29ABE49EE3B2D35BD0,
	CandyMachineClient_GetCandyMachinesAsync_m7D66A3DFE54D257039DB17CA0C769765D42DD243,
	CandyMachineClient_GetCandyMachineAsync_mF753C9D5BB8B940E5ADA41EEE02D1BB69F66D7FA,
	CandyMachineClient_GetCollectionPDAAsync_mD55675F89BBF66E8DFFA2A066FF3C3F75DEA3385,
	CandyMachineClient_SubscribeCandyMachineAsync_mB704C8A1531CE457E9B84248EB7E588D0B71F1B3,
	CandyMachineClient_SubscribeCollectionPDAAsync_mEA0DA21623371722F0569BD794C7A5D7CC074FB0,
	CandyMachineClient_SendMintNftAsync_m64E48F9F47730DAE224B17BF607072C218E15822,
	CandyMachineClient_BuildErrorsDictionary_m21783F57D8D1DDBC741F0916F0127817D5224A1C,
	U3CU3Ec__cctor_mBB783E7383FC156137471B21E4D48069B8507601,
	U3CU3Ec__ctor_mE9AF28A70283831B5BD9CD33A0DE16F44663386E,
	U3CU3Ec_U3CGetCandyMachinesAsyncU3Eb__1_0_mF64B3406FB428CF7D3316134D58534CF67CEFF36,
	U3CGetCandyMachinesAsyncU3Ed__1_MoveNext_mC98E7DD9719DCDF24C757BA23D24E7A1789BF895,
	U3CGetCandyMachinesAsyncU3Ed__1_SetStateMachine_m88AF176D5CE419FA1196AC1CCCA8E32A6E65EF25,
	U3CGetCandyMachineAsyncU3Ed__2_MoveNext_mFC37003A6D53CDC18228729B1B6B8D192B6B2768,
	U3CGetCandyMachineAsyncU3Ed__2_SetStateMachine_mF1A6418D5CDD4F5803461FE33BCD5374E37A7519,
	U3CGetCollectionPDAAsyncU3Ed__3_MoveNext_mBE40A45ACB2B472EC9F1B3E89A06638C00A1E74D,
	U3CGetCollectionPDAAsyncU3Ed__3_SetStateMachine_m0D6360FFD9ED63157B2F75890EBECA21A4FD54D2,
	U3CU3Ec__DisplayClass4_0__ctor_mB565BB68E35E4E386277883D55557B03F83D689F,
	U3CU3Ec__DisplayClass4_0_U3CSubscribeCandyMachineAsyncU3Eb__0_m1A4A8E30B6E7AF53B34D5351CE1EA5F58D770582,
	U3CSubscribeCandyMachineAsyncU3Ed__4_MoveNext_m89DB139C0F8F6FE184AC65BC9F25E50140D112A0,
	U3CSubscribeCandyMachineAsyncU3Ed__4_SetStateMachine_m1F311CCC52CC02BCADE966A88A0B3DC411B5717D,
	U3CU3Ec__DisplayClass5_0__ctor_m31E063A754637152380EB8A399F37249ECB09F4F,
	U3CU3Ec__DisplayClass5_0_U3CSubscribeCollectionPDAAsyncU3Eb__0_m5F79AA9A19729941EFA1044E8A91EB5E34F89793,
	U3CSubscribeCollectionPDAAsyncU3Ed__5_MoveNext_m281BD931AA9C2C975FB38A3BCFBC99E500E45D2C,
	U3CSubscribeCollectionPDAAsyncU3Ed__5_SetStateMachine_m014EDD4FE5D498FCB6A06A10FEB27628596054FD,
	U3CSendMintNftAsyncU3Ed__6_MoveNext_m7309DA5D99C16C0D2DA18CF02600D2A851704C40,
	U3CSendMintNftAsyncU3Ed__6_SetStateMachine_m0DBD07EECE42CF066221C3EE68C44B43434D9095,
	CandyMachineUtils_MintOneToken_m7CDDC90BB0920A0CF9B720BFD3BC08F5E5506073,
	CandyMachineUtils_getMasterEdition_mCBCA388EDEC4FDFFF455DF5FF789FF5EE5EB345E,
	CandyMachineUtils_getMetadata_m15EC7FA67CF04D33DF44D624740AA0F2BBDCBBF6,
	CandyMachineUtils_getCandyMachineCreator_m2F210C106A5F314535F7DAF30C4D6DAAAD94C37A,
	CandyMachineUtils__cctor_m2357FF969C3CF53EB255C300A7B38541421E89AE,
	U3CMintOneTokenU3Ed__3_MoveNext_m711C0CD237DDC3F09AEAA1606F47439041A70860,
	U3CMintOneTokenU3Ed__3_SetStateMachine_m205BE2E1DBC8EE60D7E68DF003AC66C559601F66,
	MintNftAccounts_get_CandyMachine_m25005412BAA22D4698398BFA5598C7A0F93B26D3,
	MintNftAccounts_set_CandyMachine_mCB13A6685DDBE5069702A4CE839D2A4036634A82,
	MintNftAccounts_get_CandyMachineCreator_m5D8802563A95E407D3D53F53092B056F20B17A47,
	MintNftAccounts_set_CandyMachineCreator_m5F38D129E6206E5CDD2D4291DCB661140784AF49,
	MintNftAccounts_get_Payer_m55ADB59BB1CB5617FB5C058CA10E7E2B0242E0E2,
	MintNftAccounts_set_Payer_m570D1CF4CD1D59DC368DBE0336F84A6D9121667C,
	MintNftAccounts_get_Wallet_m4E20FB2A0AB637794A5C4BC0849BD140AB2A0C31,
	MintNftAccounts_set_Wallet_mFD9BA724D03D22B228E8E8BC008E51565C24BDCC,
	MintNftAccounts_get_Metadata_m22E96406C59D1A82CD22DAE3E4245D0437C7A7E2,
	MintNftAccounts_set_Metadata_m08883783133F89F47BC9D2C8F4E626BB2443614A,
	MintNftAccounts_get_Mint_m1167D09B7537408B5F4CD2BD154B7ECD40E1371D,
	MintNftAccounts_set_Mint_mA920F099C582BD3E0CD94C310D01D7D4C17AF73E,
	MintNftAccounts_get_MintAuthority_m932EF235D1BDD54F1A51117CBB739F7730781492,
	MintNftAccounts_set_MintAuthority_m4BC1A030B0448D7E1C9273F3467F2F0D8DCD837B,
	MintNftAccounts_get_UpdateAuthority_mA726787BEECDD66B0ECE429C3F2E758FBF29ECE0,
	MintNftAccounts_set_UpdateAuthority_mA8B6B45B1111DEB1F1B679658BE9257A810B8788,
	MintNftAccounts_get_MasterEdition_m17A6C5CD22EFE6FC20B5CE9E16199A5716B512E1,
	MintNftAccounts_set_MasterEdition_m9F0522662F1F0C6E6306A67092496B29FC60970B,
	MintNftAccounts_get_TokenMetadataProgram_mC09D178EE68E95B7A730E800A8765D741B1464BF,
	MintNftAccounts_set_TokenMetadataProgram_m753F55575D09385973438A0D236A50FCFBA31151,
	MintNftAccounts_get_TokenProgram_mCA7F846D5486A99E1DF4E36031F21CE0150EBADA,
	MintNftAccounts_set_TokenProgram_m30A9B8D7DEE706E06FEACF0FCBADD1DEF4244BE9,
	MintNftAccounts_get_SystemProgram_mD1E57A3AA399C19DF47E3C1DE4E1DA27777CB1E6,
	MintNftAccounts_set_SystemProgram_m16A99F7B2446BA895AAD0F84D3E9EAFE93933134,
	MintNftAccounts_get_Rent_mB667205850D48FC0598490B409F5A9EB907E040B,
	MintNftAccounts_set_Rent_mD74D8C604155916AC7A40C237C50982C950752E7,
	MintNftAccounts_get_Clock_mBEC6EE80F63C69184A0C57F571BDE0E87470C8AC,
	MintNftAccounts_set_Clock_m506A35C4C1F7D15C91B92D2EC6D13821250A3AFA,
	MintNftAccounts_get_RecentBlockhashes_mFFD44D71C48FA8C9206C593DBCFA27128B694A05,
	MintNftAccounts_set_RecentBlockhashes_mEFAE3CB3E34D700A94C9D2F38ED8FA89E6D3FC0A,
	MintNftAccounts_get_InstructionSysvarAccount_mF1F687EA28C91AB18B6DE227876D447789F15AF4,
	MintNftAccounts_set_InstructionSysvarAccount_m67045C9C58F058086FF0A2544D3F2E58DCD4B647,
	MintNftAccounts__ctor_m7AE43C510CFE0AF8E90E720843EC63C0EDACBBAB,
	UpdateCandyMachineAccounts_get_CandyMachine_m39D23B6C643AF99E8DCFCCF7C75FB914955C7C43,
	UpdateCandyMachineAccounts_set_CandyMachine_mA9C82DAF0E54FFAF95074813EEFA10CEAB0F8399,
	UpdateCandyMachineAccounts_get_Authority_m96369DE6AE28794B061C2E8EB6B88910922CEAB5,
	UpdateCandyMachineAccounts_set_Authority_m8EB3BD83D628278D1B4F8E5D74BD52AB93939880,
	UpdateCandyMachineAccounts_get_Wallet_m6EC342B98E863018D4D2B6F2A4329E855D29C419,
	UpdateCandyMachineAccounts_set_Wallet_mD59AC5B32242AD9919A83816AC94E116D6006666,
	UpdateCandyMachineAccounts__ctor_m1C0469ABA8817DE82E00A12EDB4323A22B95FAAB,
	AddConfigLinesAccounts_get_CandyMachine_mC95215669EE33783489DA2D0220F28BB0E77983C,
	AddConfigLinesAccounts_set_CandyMachine_m557EA6FFED05F8AEAF6F697A7344489C793675AC,
	AddConfigLinesAccounts_get_Authority_m52A198AFD148C5BB7E0834DA73CC960A07D60250,
	AddConfigLinesAccounts_set_Authority_m49044132FAC1E18D5C16C978943589A282D9DFE7,
	AddConfigLinesAccounts__ctor_m3DB252ABF9EB8BCD09FA5439857E28AA47AF45BD,
	InitializeCandyMachineAccounts_get_CandyMachine_mBD43FC16E71FBC5FA2412BA7C0796646AB9A4489,
	InitializeCandyMachineAccounts_set_CandyMachine_mED9E9E8C13B50E3C55666C20E942C8FC34326979,
	InitializeCandyMachineAccounts_get_Wallet_m92DC51DC9153541406C16E5742BEBB258F85058B,
	InitializeCandyMachineAccounts_set_Wallet_mDD723439AA146C48EEED78A1DD32B01329213A7F,
	InitializeCandyMachineAccounts_get_Authority_m19F18EC63117C7762302E13F0E2AF71220311633,
	InitializeCandyMachineAccounts_set_Authority_m4407D7DE44911A1135182F0ADC88D8CA47F34772,
	InitializeCandyMachineAccounts_get_Payer_mCDADC88E02366C6D725C09A642F76D299E66E023,
	InitializeCandyMachineAccounts_set_Payer_m0E2B6AD1CAD2A6DAB13A8CBE0718748C03733FD5,
	InitializeCandyMachineAccounts_get_SystemProgram_m6C76B8A1B640D0FB9FE48DF9AC308D9C30BA43A5,
	InitializeCandyMachineAccounts_set_SystemProgram_mE1D8A8EEC5ED1D681C867FB58574C8E8BB25253F,
	InitializeCandyMachineAccounts_get_Rent_m898184127D50B700AB29C5BF1C95ACF79A0F33FE,
	InitializeCandyMachineAccounts_set_Rent_mD00D9A78195375F52FFCC159D3932825DBE89B91,
	InitializeCandyMachineAccounts__ctor_m8F9099EB935B15D9FFF93FB6F9EF45DE20A272FC,
	SetCollectionAccounts_get_CandyMachine_m9499E0D6A429D815F739F9C053A87E476EC0B670,
	SetCollectionAccounts_set_CandyMachine_m408E0507075D7D485AACFE33E3E40DBC4C6779D7,
	SetCollectionAccounts_get_Authority_m892CB17EA919BC2EC9D759682F75402551BC9A72,
	SetCollectionAccounts_set_Authority_mF8A4BE11A4196A7970211F56F09C9A5BD2B5AFF3,
	SetCollectionAccounts_get_CollectionPda_mF6B46905FF46217C600C75F48202C25FEB798203,
	SetCollectionAccounts_set_CollectionPda_m6CC6F35496241F80E0045D8C1C6CC9A154C74623,
	SetCollectionAccounts_get_Payer_mACCDEF338529198A5A0441AA5F067EB29E328A85,
	SetCollectionAccounts_set_Payer_mB0FE622548A74E61163F023F573614A3AA6720B3,
	SetCollectionAccounts_get_SystemProgram_m9F70580567E2466AC43771D8E1A58500663E232F,
	SetCollectionAccounts_set_SystemProgram_m2AEDDE2B2116DF8300F49497E29D168F32EA2BAD,
	SetCollectionAccounts_get_Rent_m39232D1F645A4B542749FF0E8EE739488D227F75,
	SetCollectionAccounts_set_Rent_m6A6AC936448155F02CCD8ECAE359745E99B65A7C,
	SetCollectionAccounts_get_Metadata_mB3B86006A96AF22D4B503928025E9E787734E55E,
	SetCollectionAccounts_set_Metadata_m1D5A58455D9AAFA3D4DB7A476788CABAB92221BF,
	SetCollectionAccounts_get_Mint_mCF8207BF07C520CF3BD8968FB21137C35E547879,
	SetCollectionAccounts_set_Mint_m12838EDD0B2977BB07C786479B7FC4CEB78BE8C3,
	SetCollectionAccounts_get_Edition_mFA2B9639BDE0A7BEBD6213ED27A1468E0683076A,
	SetCollectionAccounts_set_Edition_m168A8D482CAF31901E90055CA0F21C5608A4F114,
	SetCollectionAccounts_get_CollectionAuthorityRecord_m68E57F5E19D5FEAE75BF579700CE73DBC9435F2D,
	SetCollectionAccounts_set_CollectionAuthorityRecord_m4A40A468617CA0ECE13D9674E10CFCE9BEB3019E,
	SetCollectionAccounts_get_TokenMetadataProgram_mFFE2C950CA0C9888A4CAE0D182C2D69C199F2937,
	SetCollectionAccounts_set_TokenMetadataProgram_mC548C236FCB6D045B3B7385A3BEA5F402F54B557,
	SetCollectionAccounts__ctor_mBC51F8179F6592A119C07A17F37815445E1C7450,
	RemoveCollectionAccounts_get_CandyMachine_mE5F0E2CC8DC60A5930DCB9BD481FF53101EF0AE3,
	RemoveCollectionAccounts_set_CandyMachine_m0F2814D6D76E000D0A4DB3CA8DD93FE632420B8C,
	RemoveCollectionAccounts_get_Authority_m77E937E6913A424A885B410AFA5FC3CCDEE39458,
	RemoveCollectionAccounts_set_Authority_m9A6224F281C3505CD64AD546283A312232716985,
	RemoveCollectionAccounts_get_CollectionPda_m8AE4CB9AC0F3B960333D8BEC1497894D1CB7310C,
	RemoveCollectionAccounts_set_CollectionPda_m66A5FEED46A765B47B9B3B81059FE8C935551F15,
	RemoveCollectionAccounts_get_Metadata_m775174B9D561A6E063349DA8690B22B5CE6C5B06,
	RemoveCollectionAccounts_set_Metadata_mEC9CAFC280862E3D150D4981FE2ABDF1D9A5943E,
	RemoveCollectionAccounts_get_Mint_m708D94F30B285589592CADA1BE5D26DE0BB08AB7,
	RemoveCollectionAccounts_set_Mint_m5770FC714EB2C9E39982505508F3D3A4EBA6C73A,
	RemoveCollectionAccounts_get_CollectionAuthorityRecord_mE67BEEB0A69A9AA84ECBF4E83DB1D80FC3AFC711,
	RemoveCollectionAccounts_set_CollectionAuthorityRecord_m9CAA7B8A0F3856005D87F817A17C0CE43AAE19F6,
	RemoveCollectionAccounts_get_TokenMetadataProgram_mA9DE593999FEB94DF5BBF72745A31DAB68695974,
	RemoveCollectionAccounts_set_TokenMetadataProgram_mF2607DE618BBBF4A97D8EA363F7702CE5068E237,
	RemoveCollectionAccounts__ctor_m14ED86FA787152A7F9E305FE4594CEBCEBBA756E,
	UpdateAuthorityAccounts_get_CandyMachine_mDBF88C5106D586D82F6F3A38EC14C91A7C2577A7,
	UpdateAuthorityAccounts_set_CandyMachine_m7A7C6446D4742FC5950C548FC43061FB8EA8DA37,
	UpdateAuthorityAccounts_get_Authority_mA3C2C90ABD608749DC2B75D46547767AB766C435,
	UpdateAuthorityAccounts_set_Authority_m33DB965D36DDA87C540D5AAB445D82FA0CFF9970,
	UpdateAuthorityAccounts_get_Wallet_mE27B40690C6AC4A209020B5530B7AF3107A174EB,
	UpdateAuthorityAccounts_set_Wallet_mDB63AF684E1D223ADB884B0A09563BC8990BAC0C,
	UpdateAuthorityAccounts__ctor_m49CAF74F2C67548139083AA17CF9C159DBB1BCD8,
	WithdrawFundsAccounts_get_CandyMachine_mF02A78DBD9EF512FEE04C5CDEFE6A5AB93EDB967,
	WithdrawFundsAccounts_set_CandyMachine_mD9D88C8D31835B0B47412089205E844FE2397101,
	WithdrawFundsAccounts_get_Authority_m349C86474148DB36FD7FB6FDEAB1C8322E1402E6,
	WithdrawFundsAccounts_set_Authority_m37F4C61434FFC2CB5330E74DC78128E681167518,
	WithdrawFundsAccounts__ctor_m36F5AA3894A402BBF26AF15FF4134E9EF9E562EC,
	CandyMachineProgram_MintNft_m52620D5F4B4BFF082B772FD52A6C47DCA698808D,
	WhitelistMintSettings_get_Mode_m525A0D969CB898CBF10D9530101699F229F49168,
	WhitelistMintSettings_set_Mode_mC2EB4B4A37E231335B1771BCEB0747EB70B3F6A5,
	WhitelistMintSettings_get_Mint_mBCC6F7806095CF5DE482617A894C7D1CFF3E8E24,
	WhitelistMintSettings_set_Mint_m075E0309EF6E914CE488014AAF0F7B307B6186DF,
	WhitelistMintSettings_get_Presale_m8AE18B543524909324CDD88CAF3F0EF013C8B8ED,
	WhitelistMintSettings_set_Presale_mBCD8BD2745C7575C0A8257D5DE0D8F182154EC5B,
	WhitelistMintSettings_get_DiscountPrice_m7AABC98925FB187A2E48AE6CC25BB0C949B31386,
	WhitelistMintSettings_set_DiscountPrice_m63F8BEA728E87FA4EBC2025B1CCE1FBA7B4D2ECC,
	WhitelistMintSettings_Serialize_m21A83C51D559E417D122049650E53C9A02607AB4,
	WhitelistMintSettings_Deserialize_m09BFDA2D02AE729097CD5787C6FDA8616AB54CFE,
	WhitelistMintSettings__ctor_m93F2A7039FDAA037B15C06F64EC0D765837E392F,
	CandyMachineData_get_Uuid_m04423570C741D8A275306156C3D7C0C6583D6234,
	CandyMachineData_set_Uuid_mCABA993A680C73E22ED5D8CC6F6D1E9DA50E6C12,
	CandyMachineData_get_Price_mF59E117030201231214390E1D4DE5EACAD20CBCB,
	CandyMachineData_set_Price_m51D598EB5ED627FDA78517375FCC1A97EF377049,
	CandyMachineData_get_Symbol_m79DC8767B72BEB1C63D68A7A64B3B135FDF704A1,
	CandyMachineData_set_Symbol_mD34EC278C2578945A77038B001210F3884C8DA4F,
	CandyMachineData_get_SellerFeeBasisPoints_m2F17CC5A8BAF0DB9CE22CC07BE7A1EC3A1BD1B8C,
	CandyMachineData_set_SellerFeeBasisPoints_m339DFFD43685873FFEFEB807A4FF264557B53B48,
	CandyMachineData_get_MaxSupply_m6D3D5AA14377E2A0233C9D68C544809B63B0E84B,
	CandyMachineData_set_MaxSupply_m4396785B6C617A562E2A56E640B63D9A54AB00BF,
	CandyMachineData_get_IsMutable_m09EB2892302F90027FE3CDC1F3E9C89C250685B3,
	CandyMachineData_set_IsMutable_m35FB068BC4A9A499CDE51D137AB8AD2C012A0320,
	CandyMachineData_get_RetainAuthority_mE158266B8E6DB643E84E0A141693F90B6F2102C8,
	CandyMachineData_set_RetainAuthority_mA8A02D533CCC58F540377D8611956CE34CCE04F4,
	CandyMachineData_get_GoLiveDate_mCC1F25EF932864A65D84F77B74A86841D8768A43,
	CandyMachineData_set_GoLiveDate_m7EE59BA7DDBBE7C15A74F1CBB982259217024564,
	CandyMachineData_get_EndSettings_mBB4EFF02B3CAC904167914C4FD4ED84827709D6F,
	CandyMachineData_set_EndSettings_mD82FE629817070FB62D96762C9FBC893B28D95B7,
	CandyMachineData_get_Creators_m04BB4BB2B250C2D492056CB9A6A2DFE0D7F06A3F,
	CandyMachineData_set_Creators_m86C04A783A64B4ECFBB541868A9D7AB44BFEE7FD,
	CandyMachineData_get_HiddenSettings_mC92F3D445B1FFEA63738FB169D4C9417491EC8B6,
	CandyMachineData_set_HiddenSettings_m6E268E392FEEAD68A1B7B5E8B293D6FA9EB29020,
	CandyMachineData_get_WhitelistMintSettings_m9DDDCB3246BC3469E79042E60693C939257F4B8F,
	CandyMachineData_set_WhitelistMintSettings_m5DEB282188AEEED59F0B0C3CC9ED84842093AE48,
	CandyMachineData_get_ItemsAvailable_m00B3A96173AA9C5681199FA374066EF5319C44F8,
	CandyMachineData_set_ItemsAvailable_m4E8B81D49573D285C1E365C05A89BE91E34ECBB2,
	CandyMachineData_get_Gatekeeper_m8809185A2832EE24ECC5763CCFF321A84887AEE8,
	CandyMachineData_set_Gatekeeper_mC8FCFFBF558552C49378DB778924B09566FAB444,
	CandyMachineData_Serialize_mC1342F361387698CEA5641EE2D06420E288B7CE5,
	CandyMachineData_Deserialize_m1A686FCBDCF3E960C95B2148B5F74884C4535DD8,
	CandyMachineData__ctor_m3AE5B2AC662A79E84C92C2FF28AB2D325702EE41,
	GatekeeperConfig_get_GatekeeperNetwork_mF2F44FECF46C14CDC17304EDA0C2B0FC47A54160,
	GatekeeperConfig_set_GatekeeperNetwork_m7BBAB95F37A531E20295E4D7C6D2DB19D19E2E55,
	GatekeeperConfig_get_ExpireOnUse_m770882A1954A23CB374C048F34B9D77D9D63A7ED,
	GatekeeperConfig_set_ExpireOnUse_mCAAADB1A39B8BF19C1FA886CC58D0C8BA6D95F4E,
	GatekeeperConfig_Serialize_mCC00B61CB7D394060DED577F5AC431B2A7E63828,
	GatekeeperConfig_Deserialize_m9A774ED145642BCD106760C825024F0A5978B143,
	GatekeeperConfig__ctor_m6CF40AB8594F123A118CCA536F7B970AE1E46CB1,
	EndSettings_get_EndSettingType_m53F883CA0EEAA09A1280BFE05D01B4BA191B4E47,
	EndSettings_set_EndSettingType_mC2E8C2B9C90C3500DDE9644D3E2D86523FEA7FAB,
	EndSettings_get_Number_m8AB5F33CDE98D3F010C799DB8D6ED7859AA55BC7,
	EndSettings_set_Number_mB52B5025F7156CC980C67114C26F90AB7A31AAED,
	EndSettings_Serialize_mD9036C245999D45CB367386B986C4C486AF97836,
	EndSettings_Deserialize_m3C2334E027C5A7D70E2E72394AB0A152B45FD748,
	EndSettings__ctor_mD92FCB4CD05AED8E0C646AD15EA48542522B9D40,
	HiddenSettings_get_Name_m6D480E4B258E8C76FEC64B888B0D5FF3A251E303,
	HiddenSettings_set_Name_m19CFC32BADBDEA79D442A78D5238C81218EF4A1D,
	HiddenSettings_get_Uri_mB60D5EBAC0BA2D451124BBE12C6F3C74419B07C1,
	HiddenSettings_set_Uri_m83930DBC124D5690AF712B89A842BF06E591D222,
	HiddenSettings_get_Hash_m5251D357919AB3584778190A7D8EBD4070B087C3,
	HiddenSettings_set_Hash_m0320DE6F6FF6259C3B1B7E689EAC343FF7F87322,
	HiddenSettings_Serialize_m073D00E9CA74F08CACC36925F9E90A56CC0FF4A0,
	HiddenSettings_Deserialize_mA197B879A9C61AED8095810D911CB4B9A1AE75D4,
	HiddenSettings__ctor_mD3608272AB3D0A3C57503B99FAEA2A0017777BB5,
	ConfigLine_get_Name_m22E04D37DF1F8531147651875D1266F819A05010,
	ConfigLine_set_Name_m47B7D1676746771AD0A05A9F1E840AE787AC1C9C,
	ConfigLine_get_Uri_m5426D6F16B7A8D5877622A3DCB4589189CD3BBE4,
	ConfigLine_set_Uri_m80D45BE5F92A12F7782EAA67042D5E0508CBB59B,
	ConfigLine_Serialize_mFE49163F2746147985813767C98F45FF36E79959,
	ConfigLine_Deserialize_mD0BEFD38594354BE739499B3B9511F0DF2064323,
	ConfigLine__ctor_m5F175C01FE940C851C8D6BC2434E7B40D6295F3C,
	Creator_get_Address_mC4692C654A55AD99A788297316F62D41597F3B04,
	Creator_set_Address_m96520F725B5E6ED23885F49B976851B3195E3FC6,
	Creator_get_Verified_mE6DDE67335ADF219DADFB00AEDBC04912040EAC6,
	Creator_set_Verified_mCECE1EEFF9CCB36430690A4CB550F3A4AE236254,
	Creator_get_Share_mF0B505FFD8638E9391C89B01A8F60E754DFB29DF,
	Creator_set_Share_m99B7A53C0C196736FE648B972531EE01574025B8,
	Creator_Serialize_mEF00BA886689807047C7BB99458846DC55C46577,
	Creator_Deserialize_m2EC8CBE65EF15F48633EE793D7566CE84D11BA94,
	Creator__ctor_m86B8AC5A6C9E947F3EE325A1442877500BBA4BF9,
	CandyMachine_get_ACCOUNT_DISCRIMINATOR_mD22288FC7729F142C73B66F7EE4B5E90A7F2DEE4,
	CandyMachine_get_ACCOUNT_DISCRIMINATOR_BYTES_m1B0ED3F11C4E8690A6850D1119181AA8AB836B64,
	CandyMachine_get_ACCOUNT_DISCRIMINATOR_B58_m81149173D5BAF14AB1761EA237FE3882A64BE5A8,
	CandyMachine_get_Authority_m7BB1BA4CE5319A129C5B7470BB04CA6260A6CB01,
	CandyMachine_set_Authority_m69AC4F302313F9CA8432EC81BE2D7FA56FE13F31,
	CandyMachine_get_Wallet_m47336146B47A72E0FEAC53709EFD4557667649EA,
	CandyMachine_set_Wallet_m8C1AE9EB71B64050FDAB3B42754CEEFE0C01DBE7,
	CandyMachine_get_TokenMint_m34F003EFA477040B47C5A7F5D81EFC6298A7E415,
	CandyMachine_set_TokenMint_m83F750A95B71C14BF1BC4ED85C135C29652C3724,
	CandyMachine_get_ItemsRedeemed_mA0B260732DB0BF7239ACDEA39E7FEEE3A6A9DC14,
	CandyMachine_set_ItemsRedeemed_m13F8C74155A05A2802494E9008886943942D39AF,
	CandyMachine_get_Data_mD3ADEBBF395F6FE5C764D5258F78AE23D262952F,
	CandyMachine_set_Data_mA4D3CA39CBBC21964F705EA3501D4E7A593E4FD5,
	CandyMachine_Deserialize_mE0143AA4E6DD8E80E8B3B08D6EF933F5758C2027,
	CandyMachine__ctor_mCA7A8F389DDCFBC3EB0CD49F1CD3A7B42F9E8729,
	CollectionPDA_get_ACCOUNT_DISCRIMINATOR_mF0E9D8FAA3DD71E86FEDC09B4BEB261B492B0EC9,
	CollectionPDA_get_ACCOUNT_DISCRIMINATOR_BYTES_mFAAF8CFB51D70E9CBE92753BDC96463E67850CC3,
	CollectionPDA_get_ACCOUNT_DISCRIMINATOR_B58_m256A20D07CACB974944ECFF887A39B4BB4247049,
	CollectionPDA_get_Mint_m75C08F06CD5333588FBC23297315784140082435,
	CollectionPDA_set_Mint_mEC38DF4D65D1DDF80E27BCB188173D52817DA0A8,
	CollectionPDA_get_CandyMachine_m295929C014AFAA913AB5526637B7D8F525980707,
	CollectionPDA_set_CandyMachine_m52A68C9986EBD9DB2968538B386B799C96D96B08,
	CollectionPDA_Deserialize_mA3B21DA4DD736A93B79A05C9416C7174C5E7BFCD,
	CollectionPDA__ctor_m5DC000F8590A6DB8F2C81D4D1D4FE1350429A1BE,
	AccountLayout_DeserializeAccountLayout_m2FE8156C11D1FE9B8FF060B8FB415227FA7A3F25,
	AccountLayout__ctor_m1055DED5F21C94EBBE9CB5E83508210C26068B11,
	SignaturePubkeyPair__ctor_m7F0D6B76C2B75B37B6FFBFF9FB589C1C6FAD95EE,
	TransactionCtorFields__ctor_m2170ABB04CA21499FD2109A70ACAFBA5DABB98AD,
	CompiledInstruction__ctor_m959EE4AFB503850E97EA4AEEC78C819CF6EB321F,
	InGameWallet__ctor_mE85DACDA734506636373D51F4DCEE78E4EF7F6D9,
	InGameWallet__Login_mF66B6CE424B07A20C9F84523315FE98BCF5F8892,
	InGameWallet__CreateAccount_mDEE532F68A5B90855061E37E9E56E4C56D45EDA1,
	InGameWallet_SaveEncryptedAccount_m89F18D25BB07089133A26E7DC5AFF530AE0D849E,
	InGameWallet__SignTransaction_mA57F1C92A53825E00BC3BC277A66FBEA81A05B96,
	InGameWallet__SignAllTransactions_mA7B323B6046594B4C78B044DC154848920DED5BE,
	InGameWallet_SignMessage_m6C41E822DBFA582027F94D00D780A3D241681BA4,
	InGameWallet_FromSecret_m8CF73872685F7CB7986BE09DB95B4C0F5EEC4FE9,
	InGameWallet_FromMnemonic_mF9A564AA131468276BDDFB6A5750AAE2192A3509,
	InGameWallet_FromSecretKey_mE40309CCC80B5AA1D0794AFD1B9517B252A5A7A8,
	InGameWallet_FromByteArray_mBFDC359A58C822B0F61AD4B34A8280266E3FD2C6,
	InGameWallet_IsMnemonic_m9D26AAF272F044B5C90FBC5A89FC52CB53DB9CA7,
	InGameWallet_IsByteArray_mB20D1BBD5D3CEBDC643732AC04B9BC4BE69E1C81,
	InGameWallet_ParseByteArray_mE5616EA0E9886D8F62B3261668805963F759282E,
	InGameWallet_LoadPlayerPrefs_mEB9BD42FC4BDD9749F5F9E7ED2DC8841EBBEBBF3,
	InGameWallet_SavePlayerPrefs_mFD70EB2639E7A2937E2B453DD29FB9250A5071D8,
	U3CSaveEncryptedAccountU3Ed__4__ctor_m812780AD6B8C0BCFC2C0BD8B1F649F3032B9D9A5,
	U3CSaveEncryptedAccountU3Ed__4_System_IDisposable_Dispose_m99A1FFE4DE073BD95C5479E91A74540ABC0BAE25,
	U3CSaveEncryptedAccountU3Ed__4_MoveNext_mA70108FC1ACE56BBFA1E5D35FC385A73E7CC9FA2,
	U3CSaveEncryptedAccountU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6FAE9F1491394099E251F2EAC4281BF7BB009EAB,
	U3CSaveEncryptedAccountU3Ed__4_System_Collections_IEnumerator_Reset_mDC19BD0923DE25000012296B57DDFA205A5BC4B7,
	U3CSaveEncryptedAccountU3Ed__4_System_Collections_IEnumerator_get_Current_m6537CD1C0B3F98965CDBFBE40AE8516C74E39568,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	PhantomWalletOptions__ctor_mD01D96727E0C709B9F7DD5415B50C583D4D6540E,
	PhantomWallet__ctor_mA374922C03D29B92EB9C6DD7CA0DCA994F341D05,
	PhantomWallet__Login_mCFA72F6AC088DFC4BB4F201FFF3373A5CF31CDAE,
	PhantomWallet__SignTransaction_m8D52CCE6DAD8215D9F0A84C04FABA64E129A7581,
	PhantomWallet__SignAllTransactions_m106B7A7EB531DA7C45FE7F319B702F3F67D9ADAE,
	PhantomWallet_SignMessage_m8755FEB64DF7A91ABE72A03F76708F505240CDE5,
	PhantomWallet__CreateAccount_m89C47398F6B07ABDEA91622C6085CF4D420D8133,
	PhantomDeepLink_get_PhantomConnectionAccountPrivateKey_m21F400BB0113E9908642D7CB04568CE11E6A1C70,
	PhantomDeepLink_get_PhantomConnectionAccountPublicKey_mD1A487A91E80C963D689EA00BACE499390CB8ABC,
	PhantomDeepLink__ctor_mFB9A0D9418B8A5C26EA95EA41496EA24EEC729E0,
	PhantomDeepLink__Login_m273A51C5C07D799DBECA3DF7ECB35DAAC6404E2B,
	PhantomDeepLink_Logout_m1F6C99984021FBB0684B768C6E158E75FAED97D8,
	PhantomDeepLink__SignTransaction_m7DAA9D273740D98B5376B9B029895905E4C0B252,
	PhantomDeepLink__SignAllTransactions_mF54CD8BA8BA379B05BEACC0C87999B20E580471E,
	PhantomDeepLink_SignMessage_mDC20470C791C3845288C5C55F1C7241293B692FD,
	PhantomDeepLink__CreateAccount_m2A15C9D24777BEBCE2318DB3F0EE387EEED591FD,
	PhantomDeepLink_GetCluster_m0A3CD0938CCA4545828B37EE3AF037839EE4324A,
	PhantomDeepLink_StartLogin_m535F8DB501036D14AACBE8B4B650C503D820C974,
	PhantomDeepLink_StartSignTransaction_m5C193E81DBF53F344481D78960CFE67FC535FEEA,
	PhantomDeepLink_StartSignMessage_mC0FD744C59CF28231BD86D57A6D42FE40E73F835,
	PhantomDeepLink_OnDeepLinkActivated_m513B68542486CA3229A386491C11F9F4EDAA84C8,
	PhantomDeepLink_ParseConnectionSuccessful_m6D05E4DD897404F8C5F77275844441F6E0799DD8,
	PhantomDeepLink_ParseSuccessfullySignedTransaction_m10DAFEE546D11839D63EAA46750DEF34E79621C1,
	PhantomDeepLink_ParseSuccessfullySignedMessage_m51E0DE1A0485E1B8EA4022265ECA6C2CCE19DB2B,
	PhantomDeepLink_ParseQueryString_mAC6CEEC06D2CADC4B82C6F174228B2E757E4076E,
	PhantomDeepLink__cctor_mEB37E930DEBB454307CDB57CFE2892172F6C4CD1,
	U3CU3Ec__cctor_m7EB823FB91513E246530672C3F8B547B1B282C09,
	U3CU3Ec__ctor_mB12647401A2C37A935205445BCB02996876AA45F,
	U3CU3Ec_U3CParseQueryStringU3Eb__26_0_m4C3CFD4A2FB41F97C242D73F827E7F45ED996711,
	U3CU3Ec_U3CParseQueryStringU3Eb__26_1_m102EA68EE6CA539FDC0D92F5239048F2893D765B,
	U3CU3Ec_U3CParseQueryStringU3Eb__26_2_m85B21A8A66A054F7FF8D1A8051D5EBBAAFBB51E0,
	PhantomMessagePayload__ctor_m190900CB408192B867507B19D2EF313272AE2232,
	PhantomTransactionPayload__ctor_m4C9AE33E562D772CD88EF250D56EDDABDFFA777D,
	PhantomWebGL__ctor_m80EBEFF948D0346D0221D36C89429E5EB516A25C,
	PhantomWebGL__Login_mBD1FAA12B149F751FA830D5232AFE474E87E2E25,
	PhantomWebGL__SignTransaction_mE1D2B66064443365FB26193E114064B622CA3A62,
	PhantomWebGL__SignAllTransactions_m6E3161BD504057756CAEB2253258797F02E69FF7,
	PhantomWebGL_SignMessage_m949C1E3031A63895BC37608529F89099DBB5B546,
	PhantomWebGL__CreateAccount_mD4F3DF80C1A7080B20EA17E064F9D4B156FE7810,
	PhantomWebGL_OnPhantomConnected_m59FBF77E81DEABD19973FF25004B7535ABA04AE2,
	PhantomWebGL_OnTransactionSigned_m165CABBA8446863ACBD0ECC56D915F06E78A90FF,
	PhantomWebGL_OnMessageSigned_mF0225CDC896BF4CC36AFB7CB95790977581F831D,
	PhantomWebGL_ExternConnectPhantom_mCF3CF207BE634084EC5DFF4D65800FD7C8D85FF0,
	PhantomWebGL_ExternSignTransaction_m86CA9557DC86EB789A63BD83F37817FCF8974F64,
	PhantomWebGL_ExternSignMessage_m01BD32EF85A395852807F37094B7C94DFA20831A,
	Utils_GenerateRandomBytes_mF21A45A5B40FE9860F537B47696531F409B44857,
	Utils_CreateLoginDeepLink_m26D4C74F4A60638ABEA302F7786875069E14C695,
	Utils_CreateSignTransactionDeepLink_m14041A8F844EE9C23BE18D059E2D60E812578BBA,
	Utils_CreateSignMessageDeepLink_m7EF253F560F54DFAA30E7FA40660321671CB2E41,
	Utils_GetClusterString_m22F7B31E46E4E5D05D46919AE4BBDE7E8AD1AE3A,
	PhantomWalletError__ctor_m30C8475213A0447ED9758F26AA56F0A45F4BFD82,
	PhantomWalletConnectSuccess__ctor_m1511DE8C8AED41309ED669B5ADE07BA359987013,
	PhantomWalletTransactionSuccessful__ctor_mD95FE46E37B734742AB1104CA326EF5A89EE5673,
	PhantomWalletTransactionSignedSuccessfully__ctor_m45B510DFA651EC05C65EFD971958F8FE66890EB8,
	PhantomWalletMessageSignedSuccessfully__ctor_m866BFA6263B5EA6EA70CD6EEF148F13C538153FD,
	SessionWallet_get_TargetProgram_m2433E7491C22E25520B030D06A36E10B5DFBD286,
	SessionWallet_set_TargetProgram_mE3F2262D051605158BC6F8546F6E935D559A9E78,
	SessionWallet_get_SessionTokenPDA_m02E19826C427776039815DFA97F8BDE9CCAFC883,
	SessionWallet_set_SessionTokenPDA_mCB431728E4FA2CD8C2D9D96A73BD6940054B59B7,
	SessionWallet__ctor_mF8ACC2E41E18A806056E18D00442D1D492F9AD07,
	SessionWallet_HasSessionWallet_m8D2578E85A67E8C39D38527E95828F938A96EE3F,
	SessionWallet_FindSessionToken_m82DE898D54795FAC87F6009F136D2FFE03F19409,
	SessionWallet_GetSessionWallet_m028F69F6C02390685D69C00E19A236B04943B34F,
	SessionWallet_CreateSessionIX_mFC18A818D7BA84BE1959DDED607F6073F03A60C3,
	SessionWallet_RevokeSessionIX_m869A2113F5691DCE95D2F588282775F28DD60435,
	SessionWallet_IsSessionTokenInitialized_m6BFE0E54E4B6079846D2FF70A69F38735639432A,
	SessionWallet_IsSessionTokenValid_mED765180525226E85FC3C69A2A47B9A73D15A264,
	SessionWallet_DeriveSessionPassword_m72A0D3601A9EFEC241A88FFB365F7EA336DD7567,
	SessionWallet_DeleteSessionWallet_m0EBCFEB83C3D3B2070E334C580FEC6E9815E43AC,
	SessionWallet_PrepareLogout_m4A8674131EA0A0F2A72C5E366BC1D2DFF394C0CD,
	U3CGetSessionWalletU3Ed__12_MoveNext_m43B5CC6DEE1F3E769722C7FA09FFCF491AC98299,
	U3CGetSessionWalletU3Ed__12_SetStateMachine_m77927A9BAEC86B2A173E3E5ED4A6CF6F712437B4,
	U3CIsSessionTokenInitializedU3Ed__15_MoveNext_m5A42C3375A8462A03959C8C49579D7F7BCEF3894,
	U3CIsSessionTokenInitializedU3Ed__15_SetStateMachine_mE29C7A9D1EFC8E63569A2FAF669C90E5AE99AE1D,
	U3CIsSessionTokenValidU3Ed__16_MoveNext_m8CE869CC518E2C7F62E15CC977698EE90B726E85,
	U3CIsSessionTokenValidU3Ed__16_SetStateMachine_mAD8658C3E35667930EC63D296C7660C81297CA7C,
	U3CPrepareLogoutU3Ed__19_MoveNext_m55C4CF186F8CBF0D80335CFB91CB92AEBDD875CE,
	U3CPrepareLogoutU3Ed__19_SetStateMachine_mF29C3A1F8366208B84D6AF433CAE7553CEED1244,
	NULL,
	JsonRpc20Client_add_MessageEvent_mB1CC2CF565C962CC75FD18983F0E0E368113D9C6,
	JsonRpc20Client_remove_MessageEvent_m0A0C2EE6808302087FD12BA5172B7A64E1F12073,
	JsonRpc20Client__ctor_mAE3E7D7E41BD3723AFB20641180F598B4E5D5AFA,
	NULL,
	JsonRpc20Client_Receive_mEA5D12C79157A065D45ECAC8E403A4690DFB6B26,
	NULL,
	NULL,
	MessageHandler__ctor_mCB77E590CE77B11C2223C436597E4DA33A704D42,
	MessageHandler_Invoke_m8D9616573ABD8B44E60BEE2B35401D3B7E4D55AE,
	MessageHandler_BeginInvoke_m9B30B66812C3754FF75D47C8E348EFDD932B8475,
	MessageHandler_EndInvoke_mD285592F8BC59335C4C1332963F0D3BB5C080FA4,
	NULL,
	NULL,
	NULL,
	JsonRequest_get_JsonRpc_m3394EB26D16812DA395B37D0F9727025B2650C0E,
	JsonRequest_set_JsonRpc_mAA201D60F5F5406D0CA7446DC7055152A75C34E4,
	JsonRequest_get_Method_m45142653DBF56922B2A585A35F717857358D320A,
	JsonRequest_set_Method_mFCA4B0701DBFAC70A0BF7C9D54E9C92D79701444,
	JsonRequest_get_Params_mCB2C546CBB902CF3ADBF3776F5FE4E2D1A3AD7B3,
	JsonRequest_set_Params_m657C7499DDA561322F54E9236ED4209FDC994D1C,
	JsonRequest_get_Id_m8F9CE911EA6C7092459F8E79D1C75DEB1DE664C2,
	JsonRequest_set_Id_mDFCE17828D1A3B1A144579BD54548512B402FE5D,
	JsonRequest__ctor_mA3E78FDEB0C84785C105BA2711136F9803232F43,
	JsonRequestIdentity_get_Uri_m4D21ECBBFC39DBBB750284A1F3661B9C4323EBAE,
	JsonRequestIdentity_set_Uri_mEC6093D5C9BDBB403DCCB4320607F69272F27870,
	JsonRequestIdentity_get_Icon_m781D866A41981B837BC393561E9288265831980C,
	JsonRequestIdentity_set_Icon_mE8013575B46909FFEC9201331C809317B6B9950D,
	JsonRequestIdentity_get_Name_m45ED8697AFFCE82F60E7E5B9B33027430E95E670,
	JsonRequestIdentity_set_Name_m7E84FAE9B0AEF5C1B28994487EC15860AA064DE8,
	JsonRequestIdentity__ctor_m5673949D087410D38DFB3C24A7C0000170061B34,
	JsonRequestParams_get_Identity_m748E93C63732FB29E11DDF784300727B696911BC,
	JsonRequestParams_set_Identity_m6CD726E2C1AFEE5E23BF799518C02CC28A313220,
	JsonRequestParams_get_Cluster_m7A7FA905BD19DFD63677E953443E06DB58F933D2,
	JsonRequestParams_set_Cluster_mC45A5585707DB3639B4B513B1F48D92A6D3908B7,
	JsonRequestParams_get_AuthToken_m8FBC507A60F38EFCDA3D5667CA15B0631F13FDF3,
	JsonRequestParams_set_AuthToken_m7FE491F866B94E972FF2AFF06BC1FEA4B20309A7,
	JsonRequestParams_get_Payloads_mD7A8A310EDB17AF8ABCA167DAD756D31AB298ACB,
	JsonRequestParams_set_Payloads_m9E41FCBC0CD23E4583F7B2A2CA4DEF921699DC99,
	JsonRequestParams_get_Addresses_m0A4C5E99246C080B5F3B32F1FCF711D68B5CC0D2,
	JsonRequestParams_set_Addresses_mE42A6E814BDD4B086ACFAD249A9E04ADB3230B25,
	JsonRequestParams__ctor_mFFB45703FD0EB864CE4BB20BF5B79FB46DBA44BC,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	SolanaMobileWalletAdapterOptions__ctor_mFC58978115FA84A7EE1FEF8A1963DF52F115B943,
	SolanaMobileWalletAdapter__ctor_mC92267E0623C178EF6783BC0EA30BA6F0EF5903D,
	SolanaMobileWalletAdapter__Login_m6F5F80F586764B6A1D63957C5D7ECDACC4E87193,
	SolanaMobileWalletAdapter__SignTransaction_mA565FD705BB3855B4BDF81CCD05B91575C3EA3D2,
	SolanaMobileWalletAdapter__SignAllTransactions_m9C420D18252C7C2504AA7906F793397A80B725D3,
	SolanaMobileWalletAdapter_Logout_m9DAD016CA084F4780C4740CFE8CAA258FA60A79B,
	SolanaMobileWalletAdapter_SignMessage_mF1EA8AB0C74FC77AC2838E7C82874B6042605A2B,
	SolanaMobileWalletAdapter__CreateAccount_m80D4D725D2B7AA9E2E16EEDFA0272BB8DFF899A6,
	U3CU3Ec__DisplayClass7_0__ctor_m7F480A53DF45745F2186977ECCFBF79A824C191C,
	U3CU3Ec__DisplayClass7_0_U3C_LoginU3Eb__0_m4D4E13411D2ECD406415CC1AB17FCECF6BC4DB71,
	U3CU3C_LoginU3Eb__0U3Ed_MoveNext_m26588C90E5301163809F96C7A7471AA7429227B0,
	U3CU3C_LoginU3Eb__0U3Ed_SetStateMachine_mF6C3111EAEB2B7F2E56CEDB8AA785B23F68AC35F,
	U3C_LoginU3Ed__7_MoveNext_mF823572AA663C47B14AD1617F3412C6D5D533329,
	U3C_LoginU3Ed__7_SetStateMachine_m81CB3FDE733BFC4B615A26A200701BD90014A637,
	U3CU3Ec__DisplayClass8_0__ctor_mD45C792E2D4D6E73C661ED4896028635572B8943,
	U3CU3Ec__DisplayClass8_0_U3C_SignTransactionU3Eb__0_m5F6552E700217BE8E0DE75478545CF0E327F1661,
	U3CU3Ec__DisplayClass8_0_U3C_SignTransactionU3Eb__1_m3F92C89D57C2A87A2D4209872DB3985444B0BD74,
	U3CU3C_SignTransactionU3Eb__0U3Ed_MoveNext_mEE00B688EB65DFCA192EA535CD5DFD7CDC82A31A,
	U3CU3C_SignTransactionU3Eb__0U3Ed_SetStateMachine_mC080A980291CF59FA19E0A20B0BEF58F700A61DD,
	U3CU3C_SignTransactionU3Eb__1U3Ed_MoveNext_m2566696F1ED9C9E578B55ACAF2A7EC4391FD68AD,
	U3CU3C_SignTransactionU3Eb__1U3Ed_SetStateMachine_m7FC93260964AD6BC7DBC0242D0C261632B505BDE,
	U3C_SignTransactionU3Ed__8_MoveNext_m571FC4EF2AC08D0A93761810D14269C7AC09FEEC,
	U3C_SignTransactionU3Ed__8_SetStateMachine_mFBECED754B5A2B22C6169BBF0BF07FD0C3D4A51A,
	U3CU3Ec__DisplayClass11_0__ctor_m2C78F6E05982CAB9D85F0307DC7535D64339E936,
	U3CU3Ec__DisplayClass11_0_U3CSignMessageU3Eb__0_m6A362B44928F82D31EC7BF7A4A3E06CCF79F84CE,
	U3CU3Ec__DisplayClass11_0_U3CSignMessageU3Eb__1_m4C399F32D7522B6E8C6D637D9D384306446EA6B2,
	U3CU3CSignMessageU3Eb__0U3Ed_MoveNext_mFC167ECC69464A175E3EA03D92B283B06B394DAF,
	U3CU3CSignMessageU3Eb__0U3Ed_SetStateMachine_mA07822211257DA9E5C09D200CE44BB07E53ADC9F,
	U3CU3CSignMessageU3Eb__1U3Ed_MoveNext_m386EDA145D0F34D098E7F8ACDD7E9970CA1521E7,
	U3CU3CSignMessageU3Eb__1U3Ed_SetStateMachine_mEA4C6B0193ED70EEAABB16347288A2DDD1A1C7DF,
	U3CSignMessageU3Ed__11_MoveNext_mC8A86E34B9137761557FA5CDF850DAA6F3B905FD,
	U3CSignMessageU3Ed__11_SetStateMachine_mFC2F7AEC9736E2D3F7A8EA525754E8560751BCF6,
	SolanaWalletAdapterOptions__ctor_mCE883E7BBC2F078F1BF6E674B2FA2C007A6EB40B,
	SolanaWalletAdapter__ctor_mA7D8FAF8A270B87F40DC8388696C66B3DECEBE34,
	SolanaWalletAdapter__Login_m83AE29192AB5A0019EAE7A1AC57FB746480DC258,
	SolanaWalletAdapter__SignTransaction_m1ABF8174714E67AD74326FDE2991FA3BDB953BCF,
	SolanaWalletAdapter__SignAllTransactions_m06A15BD822BCB2D10EB55D9421ED199580BF7040,
	SolanaWalletAdapter_SignMessage_m335810BBA8E5B5B85C37E60AC5E76D23F31F4AE1,
	SolanaWalletAdapter__CreateAccount_m291C3562CE2590987BFD193FF11522D1A5E6747A,
	SolanaWalletAdapter_Logout_m87B07347CF608DCD99C73486DBB4D2C43F1BE130,
	SolanaWalletAdapterWebGLOptions__ctor_mFA4C212A4FE8F022D0FA89EC288382F0567F5C1C,
	SolanaWalletAdapterWebGL_get_WalletAdapterUI_m00DAEA8A939CE4B70ED55A193D10B70337999B65,
	SolanaWalletAdapterWebGL_set_WalletAdapterUI_m73623EBD6EC9382F3BBB58A98112B21FDE43E0AA,
	SolanaWalletAdapterWebGL_get_Wallets_m03B9931F829D34BE28051D3D4611C2AD8E8ADF3E,
	SolanaWalletAdapterWebGL_set_Wallets_mF0F35C3371099E5DB8FA0C7D38EF336FE9C29D54,
	SolanaWalletAdapterWebGL__ctor_m01E7EEA75B6387853CA01D5606926433B60AE0E8,
	SolanaWalletAdapterWebGL_InitWallets_m2CB1EE26451203F3E0679A68432D296A14CDEAC4,
	SolanaWalletAdapterWebGL_IsXnft_mD4CF07AAECCDE1F90F4F5ABEBFB699CF3E1C6CDC,
	SolanaWalletAdapterWebGL__Login_m279D15703C0825C41AD1A3E50C834E516A5CAA3B,
	SolanaWalletAdapterWebGL_SetCurrentWallet_mE8BE71964B7AB5D83BFBCBF546D54D613D0B2F92,
	SolanaWalletAdapterWebGL__SignTransaction_mA3510F54C9391811C94A9CD42A9537F9ABEA8B6D,
	SolanaWalletAdapterWebGL_SignMessage_m321CCD05643EB80DFBA06AAA2C9915690D4D5B57,
	SolanaWalletAdapterWebGL__CreateAccount_m4F6CFD8BC6E2D556F4DD2280607D4A86D960B477,
	SolanaWalletAdapterWebGL__SignAllTransactions_m0EEB0FA3D744AFB48B58DA6EE3F47BE96AAAC426,
	SolanaWalletAdapterWebGL_OnWalletConnected_m52F659CC00A73A916A6AE1F7149EDC74C206E3F8,
	SolanaWalletAdapterWebGL_OnTransactionSigned_m0E6658F8F7D1DEEDA59BF5C872E966D1A6D38F57,
	SolanaWalletAdapterWebGL_OnAllTransactionsSigned_m68547D32562C807BDCFE6E4A2E63BF41A26C4DBB,
	SolanaWalletAdapterWebGL_OnMessageSigned_m3246741C9145ACEC7E8EBF1F9A534CF7FD6BBED8,
	SolanaWalletAdapterWebGL_OnWalletsInitialized_mAC15BBFC4E311A68D0ED2E36D2D4125CCF527A1D,
	SolanaWalletAdapterWebGL_OnWalletsLoaded_m45CA61922BE84B2F28BB77715AD43D5DBF0E3B02,
	SolanaWalletAdapterWebGL_ExternConnectWallet_m5609939F337E69B1699ACCD272EF82306AD18B84,
	SolanaWalletAdapterWebGL_ExternSignTransactionWallet_mC52D9E946571B7B4FA83A250CBFDE695AF15009D,
	SolanaWalletAdapterWebGL_ExternSignAllTransactionsWallet_m0B2596A6E8C7E043810BB1801B2093903F4F045E,
	SolanaWalletAdapterWebGL_ExternSignMessageWallet_m4B8592CABCAB41FEEC7C1BFA18BB0E6A94809453,
	SolanaWalletAdapterWebGL_ExternGetWallets_m8D92F7EEC525034A760DA3595AB744ECA8CB11B9,
	SolanaWalletAdapterWebGL_InitWalletAdapter_m9A3782096BF4CA875F9AB402691A101951C32EA6,
	WalletSpecs_ToString_m28BC8C62B1601AC7E63225B31A27CDC3C2E7F677,
	WalletSpecs__ctor_m86AEB466BFD6A7C7494F5DEF423505A4C639552C,
	WalletSpecsObject__ctor_m3F3016C8DA64852AD2CBE572FCBBEF4BCF0F6162,
	U3CInitWalletsU3Ed__21_MoveNext_mCFD4BF7EFE02564F58221F60E8E856486CCF4606,
	U3CInitWalletsU3Ed__21_SetStateMachine_m40DBEFE6FC143C0696EB2331A60218769556CD91,
	U3CIsXnftU3Ed__22_MoveNext_m20291000B95120590DE13765C188052636B48C95,
	U3CIsXnftU3Ed__22_SetStateMachine_mBEDCC06148B011BEF51FABE9F8E2DB7E0703A572,
	U3C_LoginU3Ed__23_MoveNext_m71DD54BBB7606E7F8A6A10BF0F648811FA6EA75A,
	U3C_LoginU3Ed__23_SetStateMachine_mFA778CF821021B1760029E5AD544B34596108E89,
	U3CU3Ec__DisplayClass24_0__ctor_m48D1CDB7DA734D76F68F760F7D8566C709A11F62,
	U3CU3Ec__DisplayClass24_0_U3CSetCurrentWalletU3Eb__0_m4BDFDE49A5387AC901B26C26AA34DB718187413A,
	U3CU3Ec__DisplayClass24_0_U3CSetCurrentWalletU3Eb__1_m416E09DD89E12C5EC70F3D3B204095A2B0AE3212,
	U3CSetCurrentWalletU3Ed__24_MoveNext_m8DA08B3686C8AE5588638E9DCA3112F71C9A4996,
	U3CSetCurrentWalletU3Ed__24_SetStateMachine_mF93E59D255CADDFF96EF31823FC4D526090CE1D9,
	WalletAdapterButton_get_Name_mF241B61FB3767951289836A153D1FB0876B2572F,
	WalletAdapterButton_set_Name_m8E68F056AA0C36D6628B332E36C612B04500E548,
	WalletAdapterButton_OnSelected_m41D9138B207829337F6171F3FE91D9C41D6C2E92,
	WalletAdapterButton__ctor_m64DA773EDED1785B71BD27B79D511B808BB78293,
	WalletAdapterScreen_OnEnable_mF9898D50965A6FCF21AAC8161BFFC5D9F5945A95,
	WalletAdapterScreen__createWalletAdapterButton_m6344416493D66BF91D141B4D2B73E79874FE24FD,
	WalletAdapterScreen_UpdateWalletAdapterButtons_m69B382707A88E4A2E4D8B6A63A40C21EB54ABAE6,
	WalletAdapterScreen_OnClose_m0399288F37E03926A7B08D57CE08F9963406C107,
	WalletAdapterScreen__ctor_m710315BCA11879CE2D6459119936E4774F1E6741,
	WalletAdapterScreen_U3C_createWalletAdapterButtonU3Eb__5_0_mEDF88A56D47C74FB69CE6DEFBB4DF0434128313E,
	UnityRateLimiter__ctor_m5A3857EFDC323CA482760B8E9C4BB7C8A0061CC8,
	UnityRateLimiter_Create_m543FD9E67876BD4EFEAF7D1553B86092780EAB40,
	UnityRateLimiter_CanFire_m624E172B42495D96FE534D803B036EA83BDAC539,
	UnityRateLimiter_Fire_mB650F73DC824F20F0BC157F264F9DC0AB358EA2C,
	UnityRateLimiter_NextFireAllowed_m28D43FB28376FEDA47FF4051F536ABA2B72CDDD8,
	UnityRateLimiter_PerSeconds_m256EB0C4E105288F9D4DEE6BB83C1A5D031D9B76,
	UnityRateLimiter_PerMs_mB1AB2E67603A9802357A230BDBDCC8AED3F705BF,
	UnityRateLimiter_AllowHits_m5BEC977A9221882DE49D39CB60FB1A9840595292,
	UnityRateLimiter_ToString_m3B142EEC9634032EE875590B505A5082EC03A573,
	U3CFireU3Ed__6_MoveNext_m507D9ED243310C6ADFC2E61B458DE9505F9E9BEA,
	U3CFireU3Ed__6_SetStateMachine_m051044CC9B214DA55D7F8AA30B1FA7FEF581EB9F,
	WalletBase_get_RpcCluster_mE4D71E2542DA0EDAC673E4A69CBEC24D41E73A60,
	WalletBase_get_ActiveRpcClient_m687535E1EA6E8C32360E2B8D6A280149AF25B09F,
	WalletBase_get_ActiveStreamingRpcClient_m48A25F10EB4F7F65BF5247F3FD90DA6791C7D19A,
	WalletBase_get_Account_m7732EE5A383DB9B749A520E92DE60384D413F973,
	WalletBase_set_Account_m27F7B52F42474DBF54C20523E868E07073DFB231,
	WalletBase_get_Mnemonic_m04DDBE5B054D0670AEDCE2993280DD0962D302CB,
	WalletBase_set_Mnemonic_m5DE5994672AF1312EEEB8BAF5D87821CABB70742,
	WalletBase__ctor_mF3FC1E138065DEA23D6169D8F50897D5CD3C7B73,
	WalletBase_Setup_mD8AEB89DAEF1E6E112BC5A4DBF80A2B461AEC1C1,
	WalletBase_Login_m10A19211BF3713E40BED0FF15C63CD3E045B4414,
	NULL,
	WalletBase_Logout_m3B108A721927DE4193D950064CC85AD1EF983063,
	WalletBase_CreateAccount_m7A5513BC3C0B6BAE715E75F935B3E31029CF15C1,
	NULL,
	WalletBase_GetBalance_mFDA652FE06BAF981E141F3E3C4E850063864D3E8,
	WalletBase_GetBalance_mE5E141D28638C4E7D696419E325D2A03338E827E,
	WalletBase_Transfer_m77BAA44E1583D7A7676DEAA3A2942AC22F33EFA2,
	WalletBase_Transfer_mF8321F8530985BFDB9FE98402E7AB271547F2ABE,
	WalletBase_GetTokenAccounts_mFBB7ECD909AF618AD7EC0C1882DFF297153AA809,
	WalletBase_GetTokenAccounts_m00DFF5975C7E4AF8D8EAA5C0C14E8A3A0341D922,
	NULL,
	WalletBase_SignTransaction_m2412CD8FECA0E47ABE2FD4934DA7C3E9F55028CF,
	NULL,
	WalletBase_SignAllTransactions_m3AD990F81DA3BB6828B9F02F8BC31CBF29B38C4A,
	WalletBase_SignAndSendTransaction_m00C8573CB2DB52592851D8943C6D6C50EE01E634,
	NULL,
	WalletBase_RequestAirdrop_m3E6F776B473036ACDB61CBD818F4DD56BEDC684E,
	WalletBase_GetBlockHash_mE40BF3FB56691F297709370584105CD98D5419B8,
	WalletBase_StartConnection_m82161B02C2A81C4D381047DCB83CC980A5949B07,
	WalletBase_StartStreamingConnection_m1D34CE3809AF11D30E38FC8AFEDC54926EA486D0,
	WalletBase_AwaitWsRpcConnection_mB78FF9611896675488AA78D9EF3FCDDFEA7C37E4,
	WalletBase_DeduplicateTransactionSignatures_m2C76DF8137668DEC541C537CEE0EECE195D9CAB8,
	WalletBase_U3CStartStreamingConnectionU3Eb__48_0_mB427A572045986B97C8EC8E54816AAF8D54AA6E9,
	U3CLoginU3Ed__27_MoveNext_m0C91351E890E4E40F48DD825E10D85144AED9407,
	U3CLoginU3Ed__27_SetStateMachine_m559C5A606C3AE91FFD86218C376F42B94A21F8AB,
	U3CCreateAccountU3Ed__30_MoveNext_mE4331B53A9DC8A63681898E67D8489A2ABFD6E3D,
	U3CCreateAccountU3Ed__30_SetStateMachine_m830775785A8260F06D0A055FE9CFA23FA3551D5F,
	U3CGetBalanceU3Ed__32_MoveNext_m14988E7626CE1C4AF30E22F12161A0E0C37DE79E,
	U3CGetBalanceU3Ed__32_SetStateMachine_m7A7F56AADAADA9BC23716B817DCB98DF1E35AB0B,
	U3CGetBalanceU3Ed__33_MoveNext_mE3FD12B37BAFAD05A095863F74A0BEA02A8A3A87,
	U3CGetBalanceU3Ed__33_SetStateMachine_mE8D27EB08A51BD3F4ABEB28EA556579BD0B7A5CC,
	U3CTransferU3Ed__34_MoveNext_m36A26B47E62835C10F286025C8466E19DC1AE7DD,
	U3CTransferU3Ed__34_SetStateMachine_m6329542B1265798F1B95A89AA76D71CE42D51623,
	U3CTransferU3Ed__35_MoveNext_mE6D029E0EE19C202DCE7662F00B3EF60A0C9D22B,
	U3CTransferU3Ed__35_SetStateMachine_m14527CF27F604315B1F03FB5EAB4CCB34D65C14C,
	U3CGetTokenAccountsU3Ed__36_MoveNext_mCC8B5353A7B401827EC1D0E2E183F75A826918AB,
	U3CGetTokenAccountsU3Ed__36_SetStateMachine_m9BF32F86CB1C7D64D1B597AE05AEF21151960D1D,
	U3CGetTokenAccountsU3Ed__37_MoveNext_m737884E55851B157EC89D5F34E77F9DE52C20F56,
	U3CGetTokenAccountsU3Ed__37_SetStateMachine_m2CF3D890336470F77D6FCC5EE374834C8B268699,
	U3CSignTransactionU3Ed__39_MoveNext_m8BB1D1C048E3F9410FE4C59AB4FBD4BBCD60340B,
	U3CSignTransactionU3Ed__39_SetStateMachine_mAD77379C7A76A38C7AC11CDF553D30BEC2E24AA1,
	U3CSignAllTransactionsU3Ed__41_MoveNext_m3FAE9462D015F1742DCFE8D87FF03AC1DE0788E2,
	U3CSignAllTransactionsU3Ed__41_SetStateMachine_m65A179ABDB3C4C9A77803BDF32E0BEDB14109B1F,
	U3CSignAndSendTransactionU3Ed__42_MoveNext_mEA8D88258C381711E210BA37CF501721D1F00A41,
	U3CSignAndSendTransactionU3Ed__42_SetStateMachine_mCBBD9BD3A3274AEFECDFBB5A7A83F2564E1738A9,
	U3CRequestAirdropU3Ed__44_MoveNext_m853D672A638056CF5A67211A8A7472F3C0D4D385,
	U3CRequestAirdropU3Ed__44_SetStateMachine_m085D704BAFDAA89FD06AFC9475EBE24F53D0AAFA,
	U3CGetBlockHashU3Ed__46_MoveNext_mD9516DEB58F41FA003F629417234F9FDA268BA42,
	U3CGetBlockHashU3Ed__46_SetStateMachine_m1E60FBA4AFC2810E2004F230BD4A50B8D5A6AE7C,
	U3CU3Ec__DisplayClass50_0__ctor_m31C40CBF6AC3244C6AF8B613F64FF14C1317F729,
	U3CU3Ec__DisplayClass50_1__ctor_m56953ED94318E0CFEF0783ADA24F35BB36F3BA5E,
	U3CU3Ec__DisplayClass50_1_U3CDeduplicateTransactionSignaturesU3Eb__0_m7D0E474C37785A564E996373AA347D4F5CBBEC34,
	Web3_get_WalletBase_m0737A2BA9645FD357E4706571AAABAFD0385C7AA,
	Web3_set_WalletBase_m5512313ED2D0D8C8A366D3988D62644E79F8D2EA,
	Web3_get_RpcMaxHits_m352B69454EF78154AC568F48F95CC87845212885,
	Web3_set_RpcMaxHits_m34B46DD6D32781E16D178028AA600F575C03056C,
	Web3_get_RpcMaxHitsPerSeconds_m1AC8B9DF96A7BEC16A55A4BDED032FF8CB416141,
	Web3_set_RpcMaxHitsPerSeconds_m68BF7750A3FAFDAC159B153220B5021F3ACF397A,
	Web3_add_OnWalletInstance_m998B512985ED58DDB8DEFB758BBCFEDB581315C5,
	Web3_remove_OnWalletInstance_m6EF9E66A87EB3C3AE92838503209C7723EFAB4AF,
	Web3_add_OnWalletChangeStateInternal_mD2DAFC678B27E27B62C75DDBD0A90C137307516A,
	Web3_remove_OnWalletChangeStateInternal_m1B40A89735BD8A404D1B5CFE2E74E7FF42EFC17B,
	Web3_add_OnWalletChangeState_m95E31ADF263EBEB060DC4355432CE32A3600DA05,
	Web3_remove_OnWalletChangeState_mCF98836BED11F766596199786F15D9C612B5A493,
	Web3_add_OnBalanceChangeInternal_m3B44AE7CFBE95FF9471C44B862CBD49127CC755F,
	Web3_remove_OnBalanceChangeInternal_mAD5B42C1DE4571534395E8AFAE57BB36F8EF63D3,
	Web3_add_OnBalanceChange_m9F2472C2389136A6B7FF8B916F52F1927EFD3239,
	Web3_remove_OnBalanceChange_m4F6AE35852255299C6E9A855ED12F5788A3468F9,
	Web3_get_NftLoadingRequestsDelay_m6096EBB8963C1A6FB4942E20C4BCC7DB5F18EBD0,
	Web3_set_NftLoadingRequestsDelay_mE362F9F4BA5443891BAA689386943B034DEBB5F7,
	Web3_add_OnNFTsUpdateInternal_mB9FF62D1EDA4389B2C343328735F6541C015C8AA,
	Web3_remove_OnNFTsUpdateInternal_m4FB2FFC18DA44B06AE1E5CD81CEE92A5C032AA35,
	Web3_add_OnNFTsUpdate_mAE5D67F84FC849C09D95A8547A880337917EBC51,
	Web3_remove_OnNFTsUpdate_m7D442FCA0D6C0841A9BF81C58F8998F3D6FBC633,
	Web3_get_Rpc_m835B7283D8B993B25F9CDBD6628C040C38432C99,
	Web3_get_WsRpc_m6C034BDCBDDFD5A219D4C94FEB1320F4797BEC9D,
	Web3_get_Account_mD177714BA64705E67380460AF29D7DF7A539FF72,
	Web3_get_Wallet_m356DFCF42CF7F0F409FB5ADC61E68049D7B79FB4,
	Web3_get_Base_m5CF39B73E6EFB497EB326FB227E45B9ACE1B5983,
	Web3_Awake_m4D75E007147E71926F93429EE0C8D8D158869E0E,
	Web3_Start_mACBCA76D472053E8A42BA93A4423E1D0100EFD83,
	Web3_LoginInGameWallet_mAA3374F553187DF9CC68F2E8BAB77A8017C24EF2,
	Web3_CreateAccount_m2E9B41CA60E21C1A3F1DC138592492F2914CC638,
	Web3_LoginWeb3Auth_mDB5FF54A98A315995D33A9E3944F53F570BD8476,
	Web3_LoginXNFT_m5D16883822850CE0BC33E41A24306E2014B026C6,
	Web3_LoginWalletAdapter_m2118BE1A5E94BC67C7EE855CD4E8A2E44CD52C19,
	Web3_LoginWithWalletAdapter_mC35EB80A0C48CFC15F0A8DD5DEC07C9286A6198F,
	Web3_LoginWithWeb3Auth_m9480E128C550BE6955E093A989ABADF7592A5E8A,
	Web3_Logout_m66F7405563C0B17EEDEF54BD3F8E19021E21F260,
	Web3_BlockHash_mF0F916BB8FAB924199BCBC656D36439CA07319F1,
	Web3_UpdateBalance_mCF9C2085C99213F793978DF0D7B0D4E5901BAA20,
	Web3_UpdateNFTs_mFD7E181C3169E342F4CE5FF6F9FA847AACCB9FC2,
	Web3_LoadNFTs_m80318B583936E2B0FECCFCF64317A67FCB0FCD13,
	Web3_SubscribeToWalletEvents_m3568141760E3A33287C9CBC480112BDDA4A05C05,
	Web3_GetDefaultRpc_m3EFBE5271E82B598F84CA629A4A5BB6CE941C0B6,
	Web3_GetDefaultWsRpc_m25AA235EE58CE4AE6EDDEC3754DC929401256DD5,
	Web3_SavePlayerPrefs_m62B5BC54D607D161D713AD54ABB032DBB91CEF80,
	Web3_LoadPlayerPrefs_mE138462B15136AAAE0E76F00EA0A26F8E50CBAE0,
	Web3_Setup_m93A01217E5AF3D4FE5C45336309F23DA986C914F,
	Web3__ctor_mBA03A1CB3F417BFC58BCED8C37501C4902CFB107,
	Web3__cctor_mCAE3EF1E7AB0E95ACD852A92596148BD2667E237,
	Web3_U3CStartU3Eb__67_0_mE6E35480C6E6F0328858E45CA7C0EA255E677DEA,
	WalletInstance__ctor_m08FFD5225F6C4434729494831245C48117BA8A9B,
	WalletInstance_Invoke_m17BC83592F712F8264290A161117DF3C2DAF31A1,
	WalletInstance_BeginInvoke_mF2A3DCD2F4ECC29D5195E4EEDD639361BC05BE0A,
	WalletInstance_EndInvoke_m89AD1AEB0932188F3F69599D5835105247D33BC8,
	WalletChange__ctor_mBB9555EDFB65E5D8479FA77026972154DC573FEE,
	WalletChange_Invoke_m93ABFE7A7E63322C197860DCC72B5EF2F09A3405,
	WalletChange_BeginInvoke_mD7D56C900FB919ADF5FFA60FE53B166D2C32D8B9,
	WalletChange_EndInvoke_mB7438B0F5AEC84C62B55D86E687F4A61FA8FC3EE,
	BalanceChange__ctor_m7E80F85024D3099465B2A759E24F18E2AEECC118,
	BalanceChange_Invoke_mD9A313F9D252F8E14B7299497CD862731B09CE9C,
	BalanceChange_BeginInvoke_mC10885E03670710705E531C19EF5F205092DBBFA,
	BalanceChange_EndInvoke_m08A17FE898AC21ADACC069A6A5D53BA69E1619EC,
	NFTsUpdate__ctor_mD290C7E52680FBA1B1BEAC62E0E7055962B44795,
	NFTsUpdate_Invoke_mFB763BA9901A33289E2FCFC04C92995A53EC2464,
	NFTsUpdate_BeginInvoke_mC7526ED69FD054212879293B2E043EB8333EFE0D,
	NFTsUpdate_EndInvoke_mC4F2CF65FBCE20BE56AA85D9EA6F232BD0B561DB,
	U3CLoginInGameWalletU3Ed__68_MoveNext_m87A760E0AD194D2516AADC3CB97ED2375ACF4BA8,
	U3CLoginInGameWalletU3Ed__68_SetStateMachine_m2F1E7026D3D187D85865DDB0F571763AE318B166,
	U3CCreateAccountU3Ed__69_MoveNext_m9509D75B7967408BF6C3EABF319214D4CA643556,
	U3CCreateAccountU3Ed__69_SetStateMachine_mC56F979A6CB5AD6D1C477DE6551EFDED028AF7B5,
	U3CLoginWeb3AuthU3Ed__70_MoveNext_mD55625DE87F1066FF85F2F1649AA298C6CB28BC1,
	U3CLoginWeb3AuthU3Ed__70_SetStateMachine_mFCFAD64623D996332EE46CF923B08D63FF01F63C,
	U3CLoginXNFTU3Ed__71_MoveNext_mC97BFEF295E4779A0C4BD0778986846788BA8BBD,
	U3CLoginXNFTU3Ed__71_SetStateMachine_m8B53A485B37E689F9D69C0ACBDBA6EA23D0C4F15,
	U3CLoginWalletAdapterU3Ed__72_MoveNext_m4C611AB91465080E71B66624D0A1392A9C4286B2,
	U3CLoginWalletAdapterU3Ed__72_SetStateMachine_mB9E829EA97CB38AE20BACEA44C2558C3AB083A2E,
	U3CUpdateBalanceU3Ed__77_MoveNext_m903578AA48F9F8506B708DDC9064875A7152508D,
	U3CUpdateBalanceU3Ed__77_SetStateMachine_mA74A5B030572A9D821FEF4E7B023E376A1F9FEB7,
	U3CUpdateNFTsU3Ed__78_MoveNext_mE8997212300C6884458B1B03954262634C1E9994,
	U3CUpdateNFTsU3Ed__78_SetStateMachine_mF8AC9411D368109415678DD0EDEDB56BDA5881AC,
	U3CU3Ec__DisplayClass79_0__ctor_mFB528C2C5CF5791C7FC53ED64993FFDFB70E51A8,
	U3CU3Ec__DisplayClass79_0_U3CLoadNFTsU3Eb__0_m6DDC4DF4FDDEB4EC8B405CE0F38CFF1AD96ADA26,
	U3CU3Ec__DisplayClass79_0_U3CLoadNFTsU3Eb__9_m2E0F983E790C33962EDA0DC9831F61E4789F7F30,
	U3CU3Ec__DisplayClass79_1__ctor_mE9FD7C8EBE84649523E65D95490DC0FE2047A521,
	U3CU3Ec__DisplayClass79_1_U3CLoadNFTsU3Eb__6_mC925CE36AEF3886F55CA5BE391601FB8A8D516B1,
	U3CU3Ec__DisplayClass79_2__ctor_m9765B4B534609491370762C92ABAF6D319E3FBBA,
	U3CU3Ec__DisplayClass79_2_U3CLoadNFTsU3Eb__10_mBCE82020C934CAB7DD904AAD1984AC9914078507,
	U3CU3Ec__DisplayClass79_3__ctor_m358EEB6A512FCFAC62705487CAA123D6F854DB4A,
	U3CU3Ec__DisplayClass79_3_U3CLoadNFTsU3Eb__11_mCF861C689E0392AB29E87A34EA96B17675E99005,
	U3CU3Ec__cctor_mBBE80F495D7F042B855D0E04C1DF5C81665F06B6,
	U3CU3Ec__ctor_m8023591C793528DF5DEC1201FA2C18D8B6B745DA,
	U3CU3Ec_U3CLoadNFTsU3Eb__79_5_m58B18A854DDC1F1F14D5196ED2D81C1DB6D3042E,
	U3CU3Ec_U3CLoadNFTsU3Eb__79_7_m6E2AF5F321000A19982909DD6FF6CB3DDCEDA4DF,
	U3CU3Ec_U3CLoadNFTsU3Eb__79_1_m515B3D0C2D9A55E645799C5ED69B1678E5955F68,
	U3CU3Ec_U3CLoadNFTsU3Eb__79_2_m3565CB19DDFE81DBF69E5239385A47169B3CBF43,
	U3CU3Ec_U3CLoadNFTsU3Eb__79_3_m1A5602997171326C1E4DF7E4B4AE62472893436D,
	U3CU3Ec_U3CLoadNFTsU3Eb__79_4_mAB86D732FF9D9ED1D3F802ABB9EF0BB40311476A,
	U3CU3Ec_U3CLoadNFTsU3Eb__79_8_mF39E41AD64100CC2D41F80F602513199B5A5B2D0,
	U3CLoadNFTsU3Ed__79_MoveNext_m08B56300A222E6077D215F081CE7EDA6B090B395,
	U3CLoadNFTsU3Ed__79_SetStateMachine_m5A50A0A9F8355CAD01D09D9C40C03FF81F53FF5C,
	U3CU3Ec__DisplayClass80_0__ctor_m0AFBE4DBD0D5EB3C115CEB84BE9F5C685C239A0A,
	U3CU3Ec__DisplayClass80_0_U3CSubscribeToWalletEventsU3Eb__0_m187A813060EDB6C85D31EA0C6286974DD357BA99,
	U3CSubscribeToWalletEventsU3Ed__80_MoveNext_m052B394788EED3E7D025B9E32C545923B7C2DC61,
	U3CSubscribeToWalletEventsU3Ed__80_SetStateMachine_m5DB5F713FDCCF53CD67C005764BCB6F394648C29,
	Web3AuthWalletOptions__ctor_m3860812E774EA6685B0E06E4FFB2D3891AD1CD45,
	Web3AuthWallet_add_OnLoginNotify_mD3FB2EFF6D1951C84A5BA6B6500C2D8CE26B49B0,
	Web3AuthWallet_remove_OnLoginNotify_mE49F93F19D29EADE81DC1EE5D55B9F358A177FAE,
	Web3AuthWallet__ctor_m94846D2B5FB9EF6E563B166B9DB854EF0F36064C,
	Web3AuthWallet_OnLogin_m960B10D5E79EF244515510A63A48639C6284E24E,
	Web3AuthWallet__Login_m99542B38C4957637DD168CC4427D7DE27D4EE838,
	Web3AuthWallet_Logout_mD2A29FED0E754A03F65C535588F308CA551DAAE7,
	Web3AuthWallet__CreateAccount_m935B766838C8C5521D0B9FBC8089DC32F0B6177C,
	Web3AuthWallet__SignTransaction_m9761048AB57E27A43C66D222E6E9D87E84A779B3,
	Web3AuthWallet__SignAllTransactions_m9B72612978B7137ADE17DF1C08F185DF1A417752,
	Web3AuthWallet_SignMessage_mAE45567F63836DC405A9BC4BCD01B1176157C443,
	Web3AuthWallet_LoginWithProvider_m476B1904A1353A9FFA57CAA3A20A08DC2078C92D,
	PublicKeyJsonConverter_WriteJson_m76453B0ED42C18F5B9DFF03579356F9D76B8E1CA,
	PublicKeyJsonConverter_ReadJson_m8CF91A986CB3C1160BC2E5BD2B25E2357B3D10BC,
	PublicKeyJsonConverter__ctor_m63E085B9BF14733C7703233E1A97EA6497474618,
	CreatorJsonConverter_WriteJson_m1C019BDDA2CE7F526CD6A663DCEB3C9D2DA10BEC,
	CreatorJsonConverter_ReadJson_m797A058B9688BB0DEF93A7657EAA28089DDCA726,
	CreatorJsonConverter__ctor_mF962DCDC5F3141BE9F7E6338AF57A6427F479AF6,
	CollectionJsonConverter_WriteJson_m5EE49D46A9ABF9B01CE6B633C1A6E5780B6A68DF,
	CollectionJsonConverter_ReadJson_mFF0963DB3D5A8FBCFF875B96585CF58FAC3C064A,
	CollectionJsonConverter__ctor_m84A462A762A2D3DDAA54743C699D7C721975CA2A,
	NULL,
	NULL,
	NULL,
	FileLoader_GetTextureFromGifByteStream_mD606B61F26264099CB8E2F4561D7FFEA208D2185,
	NULL,
	NULL,
	FileLoader_Resize_m9CEA433A8CE82F3C2D109EEB0E105DB8DBE09000,
	FileLoader_DestroyTexture_mEF1E99FD49EEB7970B1A41AC588914EDD466B33B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ObjectToByte_ObjectToByteArray_m0969DAC0E1F59DDD71611AB8273327D43A273D00,
	ObjectToByte_ByteArrayToObject_m318C1EC6699063FE6EC72CA4465A7FB187C7CBB3,
	ObjectToByte_getBytes_mA49C2855AE0AA982667DE0C7383EF0D53F1AE0B6,
	ObjectToByte_fromBytes_mF250A7DF4C8A80BCC10E7123D71C64B9746355B8,
	ObjectToByte_DecodeBase58StringFromByte_mC6CBEFFAA6B15AA40EA4BD9426CE3C58A9485BD6,
	ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD,
	ObjectToByte_DecodeUlongFromByte_m1405595B586601DB9FD31401D582BD57144B45E7,
	ObjectToByte_DecodeUIntFromByte_mB43A80B57C31A2FF925805DFF3E5D46002B325A3,
	Attributes__ctor_mE823C4A7CEB5D6A5D6C761A8AD42548F2AEA0199,
	MetaplexJsonData__ctor_mF1CE93E88CD9BA674FD69D75D54268726E30643A,
	MetaplexData__ctor_m8C7AB1EA3C51A48260FB0D9A4DE01081AD1857FB,
	CreatorData__ctor_mA17A1B2AA158D11B1AEA9A77EEE06FA000BE6EFC,
	File__ctor_m715CBF3E44330435DF65991787BDD0AFC5550228,
	Properties__ctor_m78944B6ABFC5BCD5ACC11B55E4EAA1CD0E97553A,
	Metaplex__ctor_m301DD08FF78DBFE60FB196F060B64D5B1082A29C,
	NFTProData_DeserializeNFTProData_m1B56B9DFBC2FF15965779F8E8019E7A6E113BE03,
	NFTProData__ctor_m6D6E773454EE51C70B1B56D7FB4F472008AC2A62,
	NftImage_get_name_m31A02C1BBDC36B30D4A2061B2A6D7F2727F05620,
	NftImage_set_name_m595DD99548F5EF12D840D8316EB45816919E46F6,
	NftImage_get_extension_m8EC747E41953C61A5BE39943D6876D92A4246D11,
	NftImage_set_extension_m570CD3BB0C9FF797E8FDA2EB61ED406DC28486E8,
	NftImage_get_externalUrl_m809C6DC78D290A0FF51CC08ADC4AB145A66EA806,
	NftImage_set_externalUrl_m82EAF4A55FBB51F7A775758786A5410906B85AF7,
	NftImage_get_file_mF87C00E458B7385A20656B4FAAC930473B3CDFD6,
	NftImage_set_file_mA0E407437B4D29D0B68645934C4613FEF61B7B23,
	NftImage__ctor_m67A1777D7E2D8D968815C6E7803EF2D219E5B3CC,
	Nft__ctor_mE6D1F715EEA47AEAA6F8C9F6A8A7D7C815B997AB,
	Nft__ctor_m87A95EEFFB10B250CA7E350677DB735AD03F6D9C,
	Nft_TryGetNftData_m5AAF4EADA0D4058E07FFBB49D27AC368E458D5A2,
	Nft_TryLoadNftFromLocal_m847ED85635E5620F2FB57EA13E811C20490A07A7,
	Nft_LoadTexture_mDFB1A673C4F3B46C7CD2344EBD8976AA9A9EAE56,
	U3CTryGetNftDataU3Ed__3_MoveNext_m58C0867108B5FFE2CD4C4B51BF5948194AF79581,
	U3CTryGetNftDataU3Ed__3_SetStateMachine_m0DF8A2A110E9187D23E731F7A7605B3C6869F516,
	U3CLoadTextureU3Ed__5_MoveNext_mC655A2A6DAE3DDA587484EAA064FA24C4E715217,
	U3CLoadTextureU3Ed__5_SetStateMachine_m416574BBE0B82DCB9C76C15F9D7A47FEAA340017,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
extern void U3CTryConnectWsU3Ed__13_MoveNext_mA107365B83365E5361B587986F458E3F6938B080_AdjustorThunk (void);
extern void U3CTryConnectWsU3Ed__13_SetStateMachine_m5E620676114EBEE7BF929B74CC5B9F3962AA9993_AdjustorThunk (void);
extern void U3CListenKeyExchangeU3Ed__14_MoveNext_mB99A2738F50EDFA2B2397168E093C8A6CC771D30_AdjustorThunk (void);
extern void U3CListenKeyExchangeU3Ed__14_SetStateMachine_mC0890E8C7889BBBD47F1AD8EAC75069B6205866D_AdjustorThunk (void);
extern void U3CCloseAssociationU3Ed__18_MoveNext_m0B3B0146057ACA239A26257CC868F839AFC4850F_AdjustorThunk (void);
extern void U3CCloseAssociationU3Ed__18_SetStateMachine_m3EE333368D5F3571FCB7524B6AA0FFBC5045F20F_AdjustorThunk (void);
extern void U3CGetCandyMachinesAsyncU3Ed__1_MoveNext_mC98E7DD9719DCDF24C757BA23D24E7A1789BF895_AdjustorThunk (void);
extern void U3CGetCandyMachinesAsyncU3Ed__1_SetStateMachine_m88AF176D5CE419FA1196AC1CCCA8E32A6E65EF25_AdjustorThunk (void);
extern void U3CGetCandyMachineAsyncU3Ed__2_MoveNext_mFC37003A6D53CDC18228729B1B6B8D192B6B2768_AdjustorThunk (void);
extern void U3CGetCandyMachineAsyncU3Ed__2_SetStateMachine_mF1A6418D5CDD4F5803461FE33BCD5374E37A7519_AdjustorThunk (void);
extern void U3CGetCollectionPDAAsyncU3Ed__3_MoveNext_mBE40A45ACB2B472EC9F1B3E89A06638C00A1E74D_AdjustorThunk (void);
extern void U3CGetCollectionPDAAsyncU3Ed__3_SetStateMachine_m0D6360FFD9ED63157B2F75890EBECA21A4FD54D2_AdjustorThunk (void);
extern void U3CSubscribeCandyMachineAsyncU3Ed__4_MoveNext_m89DB139C0F8F6FE184AC65BC9F25E50140D112A0_AdjustorThunk (void);
extern void U3CSubscribeCandyMachineAsyncU3Ed__4_SetStateMachine_m1F311CCC52CC02BCADE966A88A0B3DC411B5717D_AdjustorThunk (void);
extern void U3CSubscribeCollectionPDAAsyncU3Ed__5_MoveNext_m281BD931AA9C2C975FB38A3BCFBC99E500E45D2C_AdjustorThunk (void);
extern void U3CSubscribeCollectionPDAAsyncU3Ed__5_SetStateMachine_m014EDD4FE5D498FCB6A06A10FEB27628596054FD_AdjustorThunk (void);
extern void U3CSendMintNftAsyncU3Ed__6_MoveNext_m7309DA5D99C16C0D2DA18CF02600D2A851704C40_AdjustorThunk (void);
extern void U3CSendMintNftAsyncU3Ed__6_SetStateMachine_m0DBD07EECE42CF066221C3EE68C44B43434D9095_AdjustorThunk (void);
extern void U3CMintOneTokenU3Ed__3_MoveNext_m711C0CD237DDC3F09AEAA1606F47439041A70860_AdjustorThunk (void);
extern void U3CMintOneTokenU3Ed__3_SetStateMachine_m205BE2E1DBC8EE60D7E68DF003AC66C559601F66_AdjustorThunk (void);
extern void U3CGetSessionWalletU3Ed__12_MoveNext_m43B5CC6DEE1F3E769722C7FA09FFCF491AC98299_AdjustorThunk (void);
extern void U3CGetSessionWalletU3Ed__12_SetStateMachine_m77927A9BAEC86B2A173E3E5ED4A6CF6F712437B4_AdjustorThunk (void);
extern void U3CIsSessionTokenInitializedU3Ed__15_MoveNext_m5A42C3375A8462A03959C8C49579D7F7BCEF3894_AdjustorThunk (void);
extern void U3CIsSessionTokenInitializedU3Ed__15_SetStateMachine_mE29C7A9D1EFC8E63569A2FAF669C90E5AE99AE1D_AdjustorThunk (void);
extern void U3CIsSessionTokenValidU3Ed__16_MoveNext_m8CE869CC518E2C7F62E15CC977698EE90B726E85_AdjustorThunk (void);
extern void U3CIsSessionTokenValidU3Ed__16_SetStateMachine_mAD8658C3E35667930EC63D296C7660C81297CA7C_AdjustorThunk (void);
extern void U3CPrepareLogoutU3Ed__19_MoveNext_m55C4CF186F8CBF0D80335CFB91CB92AEBDD875CE_AdjustorThunk (void);
extern void U3CPrepareLogoutU3Ed__19_SetStateMachine_mF29C3A1F8366208B84D6AF433CAE7553CEED1244_AdjustorThunk (void);
extern void U3CU3C_LoginU3Eb__0U3Ed_MoveNext_m26588C90E5301163809F96C7A7471AA7429227B0_AdjustorThunk (void);
extern void U3CU3C_LoginU3Eb__0U3Ed_SetStateMachine_mF6C3111EAEB2B7F2E56CEDB8AA785B23F68AC35F_AdjustorThunk (void);
extern void U3C_LoginU3Ed__7_MoveNext_mF823572AA663C47B14AD1617F3412C6D5D533329_AdjustorThunk (void);
extern void U3C_LoginU3Ed__7_SetStateMachine_m81CB3FDE733BFC4B615A26A200701BD90014A637_AdjustorThunk (void);
extern void U3CU3C_SignTransactionU3Eb__0U3Ed_MoveNext_mEE00B688EB65DFCA192EA535CD5DFD7CDC82A31A_AdjustorThunk (void);
extern void U3CU3C_SignTransactionU3Eb__0U3Ed_SetStateMachine_mC080A980291CF59FA19E0A20B0BEF58F700A61DD_AdjustorThunk (void);
extern void U3CU3C_SignTransactionU3Eb__1U3Ed_MoveNext_m2566696F1ED9C9E578B55ACAF2A7EC4391FD68AD_AdjustorThunk (void);
extern void U3CU3C_SignTransactionU3Eb__1U3Ed_SetStateMachine_m7FC93260964AD6BC7DBC0242D0C261632B505BDE_AdjustorThunk (void);
extern void U3C_SignTransactionU3Ed__8_MoveNext_m571FC4EF2AC08D0A93761810D14269C7AC09FEEC_AdjustorThunk (void);
extern void U3C_SignTransactionU3Ed__8_SetStateMachine_mFBECED754B5A2B22C6169BBF0BF07FD0C3D4A51A_AdjustorThunk (void);
extern void U3CU3CSignMessageU3Eb__0U3Ed_MoveNext_mFC167ECC69464A175E3EA03D92B283B06B394DAF_AdjustorThunk (void);
extern void U3CU3CSignMessageU3Eb__0U3Ed_SetStateMachine_mA07822211257DA9E5C09D200CE44BB07E53ADC9F_AdjustorThunk (void);
extern void U3CU3CSignMessageU3Eb__1U3Ed_MoveNext_m386EDA145D0F34D098E7F8ACDD7E9970CA1521E7_AdjustorThunk (void);
extern void U3CU3CSignMessageU3Eb__1U3Ed_SetStateMachine_mEA4C6B0193ED70EEAABB16347288A2DDD1A1C7DF_AdjustorThunk (void);
extern void U3CSignMessageU3Ed__11_MoveNext_mC8A86E34B9137761557FA5CDF850DAA6F3B905FD_AdjustorThunk (void);
extern void U3CSignMessageU3Ed__11_SetStateMachine_mFC2F7AEC9736E2D3F7A8EA525754E8560751BCF6_AdjustorThunk (void);
extern void U3CInitWalletsU3Ed__21_MoveNext_mCFD4BF7EFE02564F58221F60E8E856486CCF4606_AdjustorThunk (void);
extern void U3CInitWalletsU3Ed__21_SetStateMachine_m40DBEFE6FC143C0696EB2331A60218769556CD91_AdjustorThunk (void);
extern void U3CIsXnftU3Ed__22_MoveNext_m20291000B95120590DE13765C188052636B48C95_AdjustorThunk (void);
extern void U3CIsXnftU3Ed__22_SetStateMachine_mBEDCC06148B011BEF51FABE9F8E2DB7E0703A572_AdjustorThunk (void);
extern void U3C_LoginU3Ed__23_MoveNext_m71DD54BBB7606E7F8A6A10BF0F648811FA6EA75A_AdjustorThunk (void);
extern void U3C_LoginU3Ed__23_SetStateMachine_mFA778CF821021B1760029E5AD544B34596108E89_AdjustorThunk (void);
extern void U3CSetCurrentWalletU3Ed__24_MoveNext_m8DA08B3686C8AE5588638E9DCA3112F71C9A4996_AdjustorThunk (void);
extern void U3CSetCurrentWalletU3Ed__24_SetStateMachine_mF93E59D255CADDFF96EF31823FC4D526090CE1D9_AdjustorThunk (void);
extern void U3CFireU3Ed__6_MoveNext_m507D9ED243310C6ADFC2E61B458DE9505F9E9BEA_AdjustorThunk (void);
extern void U3CFireU3Ed__6_SetStateMachine_m051044CC9B214DA55D7F8AA30B1FA7FEF581EB9F_AdjustorThunk (void);
extern void U3CLoginU3Ed__27_MoveNext_m0C91351E890E4E40F48DD825E10D85144AED9407_AdjustorThunk (void);
extern void U3CLoginU3Ed__27_SetStateMachine_m559C5A606C3AE91FFD86218C376F42B94A21F8AB_AdjustorThunk (void);
extern void U3CCreateAccountU3Ed__30_MoveNext_mE4331B53A9DC8A63681898E67D8489A2ABFD6E3D_AdjustorThunk (void);
extern void U3CCreateAccountU3Ed__30_SetStateMachine_m830775785A8260F06D0A055FE9CFA23FA3551D5F_AdjustorThunk (void);
extern void U3CGetBalanceU3Ed__32_MoveNext_m14988E7626CE1C4AF30E22F12161A0E0C37DE79E_AdjustorThunk (void);
extern void U3CGetBalanceU3Ed__32_SetStateMachine_m7A7F56AADAADA9BC23716B817DCB98DF1E35AB0B_AdjustorThunk (void);
extern void U3CGetBalanceU3Ed__33_MoveNext_mE3FD12B37BAFAD05A095863F74A0BEA02A8A3A87_AdjustorThunk (void);
extern void U3CGetBalanceU3Ed__33_SetStateMachine_mE8D27EB08A51BD3F4ABEB28EA556579BD0B7A5CC_AdjustorThunk (void);
extern void U3CTransferU3Ed__34_MoveNext_m36A26B47E62835C10F286025C8466E19DC1AE7DD_AdjustorThunk (void);
extern void U3CTransferU3Ed__34_SetStateMachine_m6329542B1265798F1B95A89AA76D71CE42D51623_AdjustorThunk (void);
extern void U3CTransferU3Ed__35_MoveNext_mE6D029E0EE19C202DCE7662F00B3EF60A0C9D22B_AdjustorThunk (void);
extern void U3CTransferU3Ed__35_SetStateMachine_m14527CF27F604315B1F03FB5EAB4CCB34D65C14C_AdjustorThunk (void);
extern void U3CGetTokenAccountsU3Ed__36_MoveNext_mCC8B5353A7B401827EC1D0E2E183F75A826918AB_AdjustorThunk (void);
extern void U3CGetTokenAccountsU3Ed__36_SetStateMachine_m9BF32F86CB1C7D64D1B597AE05AEF21151960D1D_AdjustorThunk (void);
extern void U3CGetTokenAccountsU3Ed__37_MoveNext_m737884E55851B157EC89D5F34E77F9DE52C20F56_AdjustorThunk (void);
extern void U3CGetTokenAccountsU3Ed__37_SetStateMachine_m2CF3D890336470F77D6FCC5EE374834C8B268699_AdjustorThunk (void);
extern void U3CSignTransactionU3Ed__39_MoveNext_m8BB1D1C048E3F9410FE4C59AB4FBD4BBCD60340B_AdjustorThunk (void);
extern void U3CSignTransactionU3Ed__39_SetStateMachine_mAD77379C7A76A38C7AC11CDF553D30BEC2E24AA1_AdjustorThunk (void);
extern void U3CSignAllTransactionsU3Ed__41_MoveNext_m3FAE9462D015F1742DCFE8D87FF03AC1DE0788E2_AdjustorThunk (void);
extern void U3CSignAllTransactionsU3Ed__41_SetStateMachine_m65A179ABDB3C4C9A77803BDF32E0BEDB14109B1F_AdjustorThunk (void);
extern void U3CSignAndSendTransactionU3Ed__42_MoveNext_mEA8D88258C381711E210BA37CF501721D1F00A41_AdjustorThunk (void);
extern void U3CSignAndSendTransactionU3Ed__42_SetStateMachine_mCBBD9BD3A3274AEFECDFBB5A7A83F2564E1738A9_AdjustorThunk (void);
extern void U3CRequestAirdropU3Ed__44_MoveNext_m853D672A638056CF5A67211A8A7472F3C0D4D385_AdjustorThunk (void);
extern void U3CRequestAirdropU3Ed__44_SetStateMachine_m085D704BAFDAA89FD06AFC9475EBE24F53D0AAFA_AdjustorThunk (void);
extern void U3CGetBlockHashU3Ed__46_MoveNext_mD9516DEB58F41FA003F629417234F9FDA268BA42_AdjustorThunk (void);
extern void U3CGetBlockHashU3Ed__46_SetStateMachine_m1E60FBA4AFC2810E2004F230BD4A50B8D5A6AE7C_AdjustorThunk (void);
extern void U3CLoginInGameWalletU3Ed__68_MoveNext_m87A760E0AD194D2516AADC3CB97ED2375ACF4BA8_AdjustorThunk (void);
extern void U3CLoginInGameWalletU3Ed__68_SetStateMachine_m2F1E7026D3D187D85865DDB0F571763AE318B166_AdjustorThunk (void);
extern void U3CCreateAccountU3Ed__69_MoveNext_m9509D75B7967408BF6C3EABF319214D4CA643556_AdjustorThunk (void);
extern void U3CCreateAccountU3Ed__69_SetStateMachine_mC56F979A6CB5AD6D1C477DE6551EFDED028AF7B5_AdjustorThunk (void);
extern void U3CLoginWeb3AuthU3Ed__70_MoveNext_mD55625DE87F1066FF85F2F1649AA298C6CB28BC1_AdjustorThunk (void);
extern void U3CLoginWeb3AuthU3Ed__70_SetStateMachine_mFCFAD64623D996332EE46CF923B08D63FF01F63C_AdjustorThunk (void);
extern void U3CLoginXNFTU3Ed__71_MoveNext_mC97BFEF295E4779A0C4BD0778986846788BA8BBD_AdjustorThunk (void);
extern void U3CLoginXNFTU3Ed__71_SetStateMachine_m8B53A485B37E689F9D69C0ACBDBA6EA23D0C4F15_AdjustorThunk (void);
extern void U3CLoginWalletAdapterU3Ed__72_MoveNext_m4C611AB91465080E71B66624D0A1392A9C4286B2_AdjustorThunk (void);
extern void U3CLoginWalletAdapterU3Ed__72_SetStateMachine_mB9E829EA97CB38AE20BACEA44C2558C3AB083A2E_AdjustorThunk (void);
extern void U3CUpdateBalanceU3Ed__77_MoveNext_m903578AA48F9F8506B708DDC9064875A7152508D_AdjustorThunk (void);
extern void U3CUpdateBalanceU3Ed__77_SetStateMachine_mA74A5B030572A9D821FEF4E7B023E376A1F9FEB7_AdjustorThunk (void);
extern void U3CUpdateNFTsU3Ed__78_MoveNext_mE8997212300C6884458B1B03954262634C1E9994_AdjustorThunk (void);
extern void U3CUpdateNFTsU3Ed__78_SetStateMachine_mF8AC9411D368109415678DD0EDEDB56BDA5881AC_AdjustorThunk (void);
extern void U3CLoadNFTsU3Ed__79_MoveNext_m08B56300A222E6077D215F081CE7EDA6B090B395_AdjustorThunk (void);
extern void U3CLoadNFTsU3Ed__79_SetStateMachine_m5A50A0A9F8355CAD01D09D9C40C03FF81F53FF5C_AdjustorThunk (void);
extern void U3CSubscribeToWalletEventsU3Ed__80_MoveNext_m052B394788EED3E7D025B9E32C545923B7C2DC61_AdjustorThunk (void);
extern void U3CSubscribeToWalletEventsU3Ed__80_SetStateMachine_m5DB5F713FDCCF53CD67C005764BCB6F394648C29_AdjustorThunk (void);
extern void U3CTryGetNftDataU3Ed__3_MoveNext_m58C0867108B5FFE2CD4C4B51BF5948194AF79581_AdjustorThunk (void);
extern void U3CTryGetNftDataU3Ed__3_SetStateMachine_m0DF8A2A110E9187D23E731F7A7605B3C6869F516_AdjustorThunk (void);
extern void U3CLoadTextureU3Ed__5_MoveNext_mC655A2A6DAE3DDA587484EAA064FA24C4E715217_AdjustorThunk (void);
extern void U3CLoadTextureU3Ed__5_SetStateMachine_m416574BBE0B82DCB9C76C15F9D7A47FEAA340017_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[102] = 
{
	{ 0x0600002D, U3CTryConnectWsU3Ed__13_MoveNext_mA107365B83365E5361B587986F458E3F6938B080_AdjustorThunk },
	{ 0x0600002E, U3CTryConnectWsU3Ed__13_SetStateMachine_m5E620676114EBEE7BF929B74CC5B9F3962AA9993_AdjustorThunk },
	{ 0x0600002F, U3CListenKeyExchangeU3Ed__14_MoveNext_mB99A2738F50EDFA2B2397168E093C8A6CC771D30_AdjustorThunk },
	{ 0x06000030, U3CListenKeyExchangeU3Ed__14_SetStateMachine_mC0890E8C7889BBBD47F1AD8EAC75069B6205866D_AdjustorThunk },
	{ 0x06000031, U3CCloseAssociationU3Ed__18_MoveNext_m0B3B0146057ACA239A26257CC868F839AFC4850F_AdjustorThunk },
	{ 0x06000032, U3CCloseAssociationU3Ed__18_SetStateMachine_m3EE333368D5F3571FCB7524B6AA0FFBC5045F20F_AdjustorThunk },
	{ 0x06000244, U3CGetCandyMachinesAsyncU3Ed__1_MoveNext_mC98E7DD9719DCDF24C757BA23D24E7A1789BF895_AdjustorThunk },
	{ 0x06000245, U3CGetCandyMachinesAsyncU3Ed__1_SetStateMachine_m88AF176D5CE419FA1196AC1CCCA8E32A6E65EF25_AdjustorThunk },
	{ 0x06000246, U3CGetCandyMachineAsyncU3Ed__2_MoveNext_mFC37003A6D53CDC18228729B1B6B8D192B6B2768_AdjustorThunk },
	{ 0x06000247, U3CGetCandyMachineAsyncU3Ed__2_SetStateMachine_mF1A6418D5CDD4F5803461FE33BCD5374E37A7519_AdjustorThunk },
	{ 0x06000248, U3CGetCollectionPDAAsyncU3Ed__3_MoveNext_mBE40A45ACB2B472EC9F1B3E89A06638C00A1E74D_AdjustorThunk },
	{ 0x06000249, U3CGetCollectionPDAAsyncU3Ed__3_SetStateMachine_m0D6360FFD9ED63157B2F75890EBECA21A4FD54D2_AdjustorThunk },
	{ 0x0600024C, U3CSubscribeCandyMachineAsyncU3Ed__4_MoveNext_m89DB139C0F8F6FE184AC65BC9F25E50140D112A0_AdjustorThunk },
	{ 0x0600024D, U3CSubscribeCandyMachineAsyncU3Ed__4_SetStateMachine_m1F311CCC52CC02BCADE966A88A0B3DC411B5717D_AdjustorThunk },
	{ 0x06000250, U3CSubscribeCollectionPDAAsyncU3Ed__5_MoveNext_m281BD931AA9C2C975FB38A3BCFBC99E500E45D2C_AdjustorThunk },
	{ 0x06000251, U3CSubscribeCollectionPDAAsyncU3Ed__5_SetStateMachine_m014EDD4FE5D498FCB6A06A10FEB27628596054FD_AdjustorThunk },
	{ 0x06000252, U3CSendMintNftAsyncU3Ed__6_MoveNext_m7309DA5D99C16C0D2DA18CF02600D2A851704C40_AdjustorThunk },
	{ 0x06000253, U3CSendMintNftAsyncU3Ed__6_SetStateMachine_m0DBD07EECE42CF066221C3EE68C44B43434D9095_AdjustorThunk },
	{ 0x06000259, U3CMintOneTokenU3Ed__3_MoveNext_m711C0CD237DDC3F09AEAA1606F47439041A70860_AdjustorThunk },
	{ 0x0600025A, U3CMintOneTokenU3Ed__3_SetStateMachine_m205BE2E1DBC8EE60D7E68DF003AC66C559601F66_AdjustorThunk },
	{ 0x060003A0, U3CGetSessionWalletU3Ed__12_MoveNext_m43B5CC6DEE1F3E769722C7FA09FFCF491AC98299_AdjustorThunk },
	{ 0x060003A1, U3CGetSessionWalletU3Ed__12_SetStateMachine_m77927A9BAEC86B2A173E3E5ED4A6CF6F712437B4_AdjustorThunk },
	{ 0x060003A2, U3CIsSessionTokenInitializedU3Ed__15_MoveNext_m5A42C3375A8462A03959C8C49579D7F7BCEF3894_AdjustorThunk },
	{ 0x060003A3, U3CIsSessionTokenInitializedU3Ed__15_SetStateMachine_mE29C7A9D1EFC8E63569A2FAF669C90E5AE99AE1D_AdjustorThunk },
	{ 0x060003A4, U3CIsSessionTokenValidU3Ed__16_MoveNext_m8CE869CC518E2C7F62E15CC977698EE90B726E85_AdjustorThunk },
	{ 0x060003A5, U3CIsSessionTokenValidU3Ed__16_SetStateMachine_mAD8658C3E35667930EC63D296C7660C81297CA7C_AdjustorThunk },
	{ 0x060003A6, U3CPrepareLogoutU3Ed__19_MoveNext_m55C4CF186F8CBF0D80335CFB91CB92AEBDD875CE_AdjustorThunk },
	{ 0x060003A7, U3CPrepareLogoutU3Ed__19_SetStateMachine_mF29C3A1F8366208B84D6AF433CAE7553CEED1244_AdjustorThunk },
	{ 0x060003EC, U3CU3C_LoginU3Eb__0U3Ed_MoveNext_m26588C90E5301163809F96C7A7471AA7429227B0_AdjustorThunk },
	{ 0x060003ED, U3CU3C_LoginU3Eb__0U3Ed_SetStateMachine_mF6C3111EAEB2B7F2E56CEDB8AA785B23F68AC35F_AdjustorThunk },
	{ 0x060003EE, U3C_LoginU3Ed__7_MoveNext_mF823572AA663C47B14AD1617F3412C6D5D533329_AdjustorThunk },
	{ 0x060003EF, U3C_LoginU3Ed__7_SetStateMachine_m81CB3FDE733BFC4B615A26A200701BD90014A637_AdjustorThunk },
	{ 0x060003F3, U3CU3C_SignTransactionU3Eb__0U3Ed_MoveNext_mEE00B688EB65DFCA192EA535CD5DFD7CDC82A31A_AdjustorThunk },
	{ 0x060003F4, U3CU3C_SignTransactionU3Eb__0U3Ed_SetStateMachine_mC080A980291CF59FA19E0A20B0BEF58F700A61DD_AdjustorThunk },
	{ 0x060003F5, U3CU3C_SignTransactionU3Eb__1U3Ed_MoveNext_m2566696F1ED9C9E578B55ACAF2A7EC4391FD68AD_AdjustorThunk },
	{ 0x060003F6, U3CU3C_SignTransactionU3Eb__1U3Ed_SetStateMachine_m7FC93260964AD6BC7DBC0242D0C261632B505BDE_AdjustorThunk },
	{ 0x060003F7, U3C_SignTransactionU3Ed__8_MoveNext_m571FC4EF2AC08D0A93761810D14269C7AC09FEEC_AdjustorThunk },
	{ 0x060003F8, U3C_SignTransactionU3Ed__8_SetStateMachine_mFBECED754B5A2B22C6169BBF0BF07FD0C3D4A51A_AdjustorThunk },
	{ 0x060003FC, U3CU3CSignMessageU3Eb__0U3Ed_MoveNext_mFC167ECC69464A175E3EA03D92B283B06B394DAF_AdjustorThunk },
	{ 0x060003FD, U3CU3CSignMessageU3Eb__0U3Ed_SetStateMachine_mA07822211257DA9E5C09D200CE44BB07E53ADC9F_AdjustorThunk },
	{ 0x060003FE, U3CU3CSignMessageU3Eb__1U3Ed_MoveNext_m386EDA145D0F34D098E7F8ACDD7E9970CA1521E7_AdjustorThunk },
	{ 0x060003FF, U3CU3CSignMessageU3Eb__1U3Ed_SetStateMachine_mEA4C6B0193ED70EEAABB16347288A2DDD1A1C7DF_AdjustorThunk },
	{ 0x06000400, U3CSignMessageU3Ed__11_MoveNext_mC8A86E34B9137761557FA5CDF850DAA6F3B905FD_AdjustorThunk },
	{ 0x06000401, U3CSignMessageU3Ed__11_SetStateMachine_mFC2F7AEC9736E2D3F7A8EA525754E8560751BCF6_AdjustorThunk },
	{ 0x06000427, U3CInitWalletsU3Ed__21_MoveNext_mCFD4BF7EFE02564F58221F60E8E856486CCF4606_AdjustorThunk },
	{ 0x06000428, U3CInitWalletsU3Ed__21_SetStateMachine_m40DBEFE6FC143C0696EB2331A60218769556CD91_AdjustorThunk },
	{ 0x06000429, U3CIsXnftU3Ed__22_MoveNext_m20291000B95120590DE13765C188052636B48C95_AdjustorThunk },
	{ 0x0600042A, U3CIsXnftU3Ed__22_SetStateMachine_mBEDCC06148B011BEF51FABE9F8E2DB7E0703A572_AdjustorThunk },
	{ 0x0600042B, U3C_LoginU3Ed__23_MoveNext_m71DD54BBB7606E7F8A6A10BF0F648811FA6EA75A_AdjustorThunk },
	{ 0x0600042C, U3C_LoginU3Ed__23_SetStateMachine_mFA778CF821021B1760029E5AD544B34596108E89_AdjustorThunk },
	{ 0x06000430, U3CSetCurrentWalletU3Ed__24_MoveNext_m8DA08B3686C8AE5588638E9DCA3112F71C9A4996_AdjustorThunk },
	{ 0x06000431, U3CSetCurrentWalletU3Ed__24_SetStateMachine_mF93E59D255CADDFF96EF31823FC4D526090CE1D9_AdjustorThunk },
	{ 0x06000445, U3CFireU3Ed__6_MoveNext_m507D9ED243310C6ADFC2E61B458DE9505F9E9BEA_AdjustorThunk },
	{ 0x06000446, U3CFireU3Ed__6_SetStateMachine_m051044CC9B214DA55D7F8AA30B1FA7FEF581EB9F_AdjustorThunk },
	{ 0x06000468, U3CLoginU3Ed__27_MoveNext_m0C91351E890E4E40F48DD825E10D85144AED9407_AdjustorThunk },
	{ 0x06000469, U3CLoginU3Ed__27_SetStateMachine_m559C5A606C3AE91FFD86218C376F42B94A21F8AB_AdjustorThunk },
	{ 0x0600046A, U3CCreateAccountU3Ed__30_MoveNext_mE4331B53A9DC8A63681898E67D8489A2ABFD6E3D_AdjustorThunk },
	{ 0x0600046B, U3CCreateAccountU3Ed__30_SetStateMachine_m830775785A8260F06D0A055FE9CFA23FA3551D5F_AdjustorThunk },
	{ 0x0600046C, U3CGetBalanceU3Ed__32_MoveNext_m14988E7626CE1C4AF30E22F12161A0E0C37DE79E_AdjustorThunk },
	{ 0x0600046D, U3CGetBalanceU3Ed__32_SetStateMachine_m7A7F56AADAADA9BC23716B817DCB98DF1E35AB0B_AdjustorThunk },
	{ 0x0600046E, U3CGetBalanceU3Ed__33_MoveNext_mE3FD12B37BAFAD05A095863F74A0BEA02A8A3A87_AdjustorThunk },
	{ 0x0600046F, U3CGetBalanceU3Ed__33_SetStateMachine_mE8D27EB08A51BD3F4ABEB28EA556579BD0B7A5CC_AdjustorThunk },
	{ 0x06000470, U3CTransferU3Ed__34_MoveNext_m36A26B47E62835C10F286025C8466E19DC1AE7DD_AdjustorThunk },
	{ 0x06000471, U3CTransferU3Ed__34_SetStateMachine_m6329542B1265798F1B95A89AA76D71CE42D51623_AdjustorThunk },
	{ 0x06000472, U3CTransferU3Ed__35_MoveNext_mE6D029E0EE19C202DCE7662F00B3EF60A0C9D22B_AdjustorThunk },
	{ 0x06000473, U3CTransferU3Ed__35_SetStateMachine_m14527CF27F604315B1F03FB5EAB4CCB34D65C14C_AdjustorThunk },
	{ 0x06000474, U3CGetTokenAccountsU3Ed__36_MoveNext_mCC8B5353A7B401827EC1D0E2E183F75A826918AB_AdjustorThunk },
	{ 0x06000475, U3CGetTokenAccountsU3Ed__36_SetStateMachine_m9BF32F86CB1C7D64D1B597AE05AEF21151960D1D_AdjustorThunk },
	{ 0x06000476, U3CGetTokenAccountsU3Ed__37_MoveNext_m737884E55851B157EC89D5F34E77F9DE52C20F56_AdjustorThunk },
	{ 0x06000477, U3CGetTokenAccountsU3Ed__37_SetStateMachine_m2CF3D890336470F77D6FCC5EE374834C8B268699_AdjustorThunk },
	{ 0x06000478, U3CSignTransactionU3Ed__39_MoveNext_m8BB1D1C048E3F9410FE4C59AB4FBD4BBCD60340B_AdjustorThunk },
	{ 0x06000479, U3CSignTransactionU3Ed__39_SetStateMachine_mAD77379C7A76A38C7AC11CDF553D30BEC2E24AA1_AdjustorThunk },
	{ 0x0600047A, U3CSignAllTransactionsU3Ed__41_MoveNext_m3FAE9462D015F1742DCFE8D87FF03AC1DE0788E2_AdjustorThunk },
	{ 0x0600047B, U3CSignAllTransactionsU3Ed__41_SetStateMachine_m65A179ABDB3C4C9A77803BDF32E0BEDB14109B1F_AdjustorThunk },
	{ 0x0600047C, U3CSignAndSendTransactionU3Ed__42_MoveNext_mEA8D88258C381711E210BA37CF501721D1F00A41_AdjustorThunk },
	{ 0x0600047D, U3CSignAndSendTransactionU3Ed__42_SetStateMachine_mCBBD9BD3A3274AEFECDFBB5A7A83F2564E1738A9_AdjustorThunk },
	{ 0x0600047E, U3CRequestAirdropU3Ed__44_MoveNext_m853D672A638056CF5A67211A8A7472F3C0D4D385_AdjustorThunk },
	{ 0x0600047F, U3CRequestAirdropU3Ed__44_SetStateMachine_m085D704BAFDAA89FD06AFC9475EBE24F53D0AAFA_AdjustorThunk },
	{ 0x06000480, U3CGetBlockHashU3Ed__46_MoveNext_mD9516DEB58F41FA003F629417234F9FDA268BA42_AdjustorThunk },
	{ 0x06000481, U3CGetBlockHashU3Ed__46_SetStateMachine_m1E60FBA4AFC2810E2004F230BD4A50B8D5A6AE7C_AdjustorThunk },
	{ 0x060004C7, U3CLoginInGameWalletU3Ed__68_MoveNext_m87A760E0AD194D2516AADC3CB97ED2375ACF4BA8_AdjustorThunk },
	{ 0x060004C8, U3CLoginInGameWalletU3Ed__68_SetStateMachine_m2F1E7026D3D187D85865DDB0F571763AE318B166_AdjustorThunk },
	{ 0x060004C9, U3CCreateAccountU3Ed__69_MoveNext_m9509D75B7967408BF6C3EABF319214D4CA643556_AdjustorThunk },
	{ 0x060004CA, U3CCreateAccountU3Ed__69_SetStateMachine_mC56F979A6CB5AD6D1C477DE6551EFDED028AF7B5_AdjustorThunk },
	{ 0x060004CB, U3CLoginWeb3AuthU3Ed__70_MoveNext_mD55625DE87F1066FF85F2F1649AA298C6CB28BC1_AdjustorThunk },
	{ 0x060004CC, U3CLoginWeb3AuthU3Ed__70_SetStateMachine_mFCFAD64623D996332EE46CF923B08D63FF01F63C_AdjustorThunk },
	{ 0x060004CD, U3CLoginXNFTU3Ed__71_MoveNext_mC97BFEF295E4779A0C4BD0778986846788BA8BBD_AdjustorThunk },
	{ 0x060004CE, U3CLoginXNFTU3Ed__71_SetStateMachine_m8B53A485B37E689F9D69C0ACBDBA6EA23D0C4F15_AdjustorThunk },
	{ 0x060004CF, U3CLoginWalletAdapterU3Ed__72_MoveNext_m4C611AB91465080E71B66624D0A1392A9C4286B2_AdjustorThunk },
	{ 0x060004D0, U3CLoginWalletAdapterU3Ed__72_SetStateMachine_mB9E829EA97CB38AE20BACEA44C2558C3AB083A2E_AdjustorThunk },
	{ 0x060004D1, U3CUpdateBalanceU3Ed__77_MoveNext_m903578AA48F9F8506B708DDC9064875A7152508D_AdjustorThunk },
	{ 0x060004D2, U3CUpdateBalanceU3Ed__77_SetStateMachine_mA74A5B030572A9D821FEF4E7B023E376A1F9FEB7_AdjustorThunk },
	{ 0x060004D3, U3CUpdateNFTsU3Ed__78_MoveNext_mE8997212300C6884458B1B03954262634C1E9994_AdjustorThunk },
	{ 0x060004D4, U3CUpdateNFTsU3Ed__78_SetStateMachine_mF8AC9411D368109415678DD0EDEDB56BDA5881AC_AdjustorThunk },
	{ 0x060004E7, U3CLoadNFTsU3Ed__79_MoveNext_m08B56300A222E6077D215F081CE7EDA6B090B395_AdjustorThunk },
	{ 0x060004E8, U3CLoadNFTsU3Ed__79_SetStateMachine_m5A50A0A9F8355CAD01D09D9C40C03FF81F53FF5C_AdjustorThunk },
	{ 0x060004EB, U3CSubscribeToWalletEventsU3Ed__80_MoveNext_m052B394788EED3E7D025B9E32C545923B7C2DC61_AdjustorThunk },
	{ 0x060004EC, U3CSubscribeToWalletEventsU3Ed__80_SetStateMachine_m5DB5F713FDCCF53CD67C005764BCB6F394648C29_AdjustorThunk },
	{ 0x0600052F, U3CTryGetNftDataU3Ed__3_MoveNext_m58C0867108B5FFE2CD4C4B51BF5948194AF79581_AdjustorThunk },
	{ 0x06000530, U3CTryGetNftDataU3Ed__3_SetStateMachine_m0DF8A2A110E9187D23E731F7A7605B3C6869F516_AdjustorThunk },
	{ 0x06000531, U3CLoadTextureU3Ed__5_MoveNext_mC655A2A6DAE3DDA587484EAA064FA24C4E715217_AdjustorThunk },
	{ 0x06000532, U3CLoadTextureU3Ed__5_SetStateMachine_m416574BBE0B82DCB9C76C15F9D7A47FEAA340017_AdjustorThunk },
};
static const int32_t s_InvokerIndices[1338] = 
{
	18377,
	16587,
	16587,
	13616,
	16444,
	14339,
	18377,
	0,
	0,
	0,
	0,
	0,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	12499,
	12659,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12499,
	12659,
	16587,
	10064,
	9003,
	12659,
	12659,
	10099,
	10099,
	10099,
	10099,
	12659,
	10064,
	19958,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	10099,
	1726,
	1726,
	9003,
	4346,
	813,
	9003,
	4346,
	12462,
	12499,
	12499,
	12499,
	12499,
	12499,
	12659,
	12499,
	16592,
	18377,
	9003,
	9003,
	9003,
	9003,
	16592,
	16592,
	18377,
	5654,
	10099,
	12659,
	10099,
	10099,
	9003,
	9003,
	19867,
	19903,
	12659,
	12659,
	12659,
	19958,
	12659,
	12659,
	12659,
	12659,
	10064,
	12659,
	12368,
	12499,
	12659,
	12499,
	12659,
	2814,
	5645,
	5645,
	2839,
	12659,
	12659,
	12659,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12463,
	10065,
	12659,
	12499,
	10099,
	12368,
	9970,
	12659,
	19903,
	4346,
	4346,
	12659,
	19958,
	10064,
	12659,
	12368,
	12499,
	12659,
	12499,
	10064,
	12659,
	12368,
	12499,
	12659,
	12499,
	16446,
	18377,
	18216,
	18377,
	19958,
	17096,
	18377,
	19014,
	16592,
	12659,
	2865,
	9003,
	9003,
	4346,
	18377,
	18377,
	19958,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12368,
	9970,
	12462,
	10064,
	12462,
	10064,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12462,
	10064,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12368,
	9970,
	12368,
	9970,
	12368,
	9970,
	12368,
	9970,
	12659,
	12462,
	10064,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12462,
	10064,
	12462,
	10064,
	12462,
	10064,
	12659,
	19958,
	19867,
	17080,
	19002,
	17096,
	17101,
	17089,
	17080,
	16592,
	18377,
	16444,
	18216,
	16694,
	18488,
	16207,
	18054,
	19014,
	19958,
	18054,
	19958,
	18377,
	18377,
	12659,
	19958,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12462,
	10064,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	2023,
	942,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12368,
	9970,
	12499,
	10099,
	12659,
	15789,
	15789,
	18377,
	18377,
	19894,
	19958,
	12659,
	7491,
	9003,
	9003,
	10099,
	10099,
	10099,
	10099,
	12659,
	10099,
	10099,
	2865,
	10099,
	10099,
	10099,
	5654,
	12659,
	12659,
	12659,
	10099,
	9003,
	12659,
	19958,
	12659,
	12659,
	12659,
	12659,
	10099,
	12659,
	12659,
	12659,
	10099,
	10099,
	12659,
	12659,
	12659,
	10064,
	12659,
	12368,
	12499,
	12659,
	12499,
	12659,
	10099,
	18216,
	17013,
	12659,
	12659,
	10099,
	19010,
	18372,
	19010,
	18372,
	12659,
	19958,
	10064,
	12659,
	12368,
	12499,
	12659,
	12499,
	10064,
	12659,
	12368,
	12499,
	12659,
	12499,
	19958,
	12913,
	17008,
	17013,
	19010,
	17013,
	17013,
	17013,
	17013,
	18212,
	18212,
	18212,
	15719,
	17010,
	17013,
	18051,
	19010,
	19010,
	12659,
	19903,
	19014,
	19958,
	12462,
	12499,
	12659,
	12531,
	12659,
	12659,
	9077,
	12659,
	19010,
	19010,
	18372,
	17013,
	17013,
	17010,
	12659,
	12659,
	12659,
	12659,
	8629,
	12659,
	12659,
	19014,
	19014,
	17089,
	19958,
	10064,
	12659,
	12368,
	12499,
	12659,
	12499,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	12368,
	12499,
	10099,
	12499,
	12462,
	12462,
	12462,
	12462,
	12462,
	12368,
	12462,
	10064,
	12462,
	10064,
	12368,
	10099,
	12499,
	12659,
	12659,
	12659,
	12368,
	12499,
	10099,
	9003,
	12499,
	12462,
	12462,
	12462,
	12462,
	12462,
	12368,
	12462,
	10064,
	12462,
	10064,
	12368,
	10099,
	12499,
	12659,
	12659,
	12659,
	3433,
	19958,
	19014,
	19014,
	19014,
	19958,
	19958,
	19867,
	19002,
	19014,
	19014,
	19014,
	19014,
	19014,
	19014,
	19958,
	19958,
	19958,
	19958,
	19958,
	19958,
	12659,
	12659,
	12659,
	12659,
	10099,
	7374,
	19014,
	18377,
	18377,
	18377,
	18377,
	18377,
	18377,
	18377,
	19958,
	12659,
	3069,
	7623,
	7374,
	0,
	0,
	0,
	0,
	12659,
	0,
	0,
	0,
	2865,
	4342,
	4342,
	4342,
	2443,
	2443,
	788,
	12499,
	19958,
	12659,
	9003,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	5654,
	12659,
	10099,
	12659,
	5654,
	12659,
	10099,
	12659,
	10099,
	15383,
	18377,
	18377,
	17948,
	19958,
	12659,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12499,
	10099,
	12659,
	15358,
	12368,
	9970,
	12499,
	10099,
	12368,
	9970,
	11738,
	9620,
	3992,
	15163,
	12659,
	12499,
	10099,
	12641,
	10232,
	12499,
	10099,
	12639,
	10230,
	12641,
	10232,
	12368,
	9970,
	12368,
	9970,
	11723,
	9603,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12641,
	10232,
	12499,
	10099,
	3992,
	15163,
	12659,
	12499,
	10099,
	12368,
	9970,
	3992,
	15163,
	12659,
	12368,
	9970,
	12641,
	10232,
	3992,
	15163,
	12659,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	3992,
	15163,
	12659,
	12499,
	10099,
	12499,
	10099,
	3992,
	15163,
	12659,
	12499,
	10099,
	12368,
	9970,
	12368,
	9970,
	3992,
	15163,
	12659,
	19950,
	19839,
	19903,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12641,
	10232,
	12499,
	10099,
	18343,
	12659,
	19950,
	19839,
	19903,
	12499,
	10099,
	12499,
	10099,
	18343,
	12659,
	18377,
	12659,
	12659,
	12659,
	12659,
	1916,
	9003,
	4346,
	2446,
	9003,
	9003,
	9003,
	18377,
	18377,
	18377,
	18377,
	18054,
	18054,
	18377,
	18377,
	17096,
	10064,
	12659,
	12368,
	12499,
	12659,
	12499,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	12659,
	909,
	9003,
	9003,
	9003,
	9003,
	4346,
	19903,
	19903,
	909,
	9003,
	12659,
	9003,
	9003,
	9003,
	4346,
	12462,
	12659,
	10099,
	10099,
	10099,
	10099,
	10099,
	10099,
	18377,
	19958,
	19958,
	12659,
	6069,
	8969,
	8969,
	2865,
	5654,
	909,
	9003,
	9003,
	9003,
	9003,
	4346,
	19014,
	19014,
	19014,
	19014,
	17096,
	17096,
	18372,
	13788,
	13052,
	13052,
	18372,
	12659,
	12659,
	12659,
	12659,
	12659,
	12499,
	10099,
	12499,
	10099,
	1916,
	12368,
	15383,
	13332,
	4253,
	12499,
	12499,
	12499,
	18377,
	12659,
	12499,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	0,
	10099,
	10099,
	10099,
	0,
	10099,
	0,
	0,
	5648,
	10099,
	2446,
	10099,
	0,
	0,
	0,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12462,
	10064,
	12659,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	12659,
	909,
	9003,
	9003,
	9003,
	12659,
	9003,
	4346,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	909,
	9003,
	9003,
	9003,
	9003,
	4346,
	12659,
	12659,
	19903,
	19014,
	19903,
	19014,
	909,
	19903,
	19903,
	9003,
	19903,
	9003,
	9003,
	4346,
	9003,
	19014,
	19014,
	19014,
	19014,
	19002,
	19014,
	17096,
	15789,
	15789,
	15789,
	18377,
	19014,
	12499,
	12659,
	12659,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	7491,
	12659,
	10099,
	12499,
	10099,
	12659,
	12659,
	12659,
	10099,
	12659,
	12659,
	12659,
	10099,
	5292,
	19903,
	12368,
	12659,
	7911,
	8996,
	8996,
	8996,
	12499,
	12659,
	10099,
	12462,
	12499,
	12499,
	12499,
	10099,
	12499,
	10099,
	1916,
	12659,
	9003,
	0,
	12659,
	4346,
	0,
	4342,
	8996,
	1730,
	2453,
	4346,
	8996,
	0,
	9003,
	0,
	9003,
	2428,
	0,
	4414,
	2391,
	12499,
	12499,
	12499,
	16580,
	12659,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	12659,
	7491,
	12499,
	10099,
	12462,
	10064,
	12462,
	10064,
	19014,
	19014,
	19014,
	19014,
	19014,
	19014,
	19014,
	19014,
	19014,
	19014,
	19894,
	19010,
	19014,
	19014,
	19014,
	19014,
	19903,
	19903,
	19903,
	19903,
	19903,
	12659,
	12659,
	9003,
	4346,
	8996,
	12499,
	12499,
	12659,
	10099,
	12659,
	15333,
	18971,
	18971,
	14138,
	18971,
	12499,
	12499,
	17096,
	18377,
	19958,
	12659,
	19958,
	10099,
	5648,
	12659,
	4346,
	10099,
	5648,
	12659,
	4346,
	10099,
	5648,
	10005,
	2373,
	10099,
	5648,
	5645,
	1707,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	12659,
	10099,
	7491,
	12659,
	7491,
	12659,
	7491,
	12659,
	10099,
	19958,
	12659,
	7491,
	7491,
	10099,
	9003,
	9003,
	7491,
	7491,
	12659,
	10099,
	12659,
	5654,
	12659,
	10099,
	12659,
	10099,
	10099,
	909,
	10099,
	9003,
	12659,
	4346,
	9003,
	9003,
	9003,
	8996,
	2865,
	807,
	12659,
	2865,
	807,
	12659,
	2865,
	807,
	12659,
	0,
	0,
	0,
	18377,
	0,
	0,
	15369,
	19014,
	0,
	0,
	0,
	0,
	0,
	0,
	18377,
	18377,
	18377,
	18377,
	14793,
	14793,
	15766,
	15766,
	12659,
	12659,
	12659,
	12659,
	12659,
	12659,
	10099,
	18377,
	12659,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12499,
	10099,
	12659,
	12659,
	10099,
	13328,
	18377,
	8996,
	12659,
	10099,
	12659,
	10099,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[19] = 
{
	{ 0x06000186, 32,  (void**)&WebGLInputMobile_OnTouchEnd_mA93BC33B84197B228324BF845083BD9773C98FE7_RuntimeMethod_var, 0 },
	{ 0x06000188, 31,  (void**)&WebGLInputMobile_OnFocusOut_m738467287A0F65FB47CBCD9E0A89DA7E9F47C47F_RuntimeMethod_var, 0 },
	{ 0x060001B6, 28,  (void**)&WebGLInput_OnFocus_mEAFF02CB2715232B724DBF02517417F85CCF66B4_RuntimeMethod_var, 0 },
	{ 0x060001B7, 26,  (void**)&WebGLInput_OnBlur_m056127CBA134428CD5D30B5D0D567BBAD4244400_RuntimeMethod_var, 0 },
	{ 0x060001B9, 30,  (void**)&WebGLInput_OnValueChange_m8FC2093C4282D531764042FF66ADBB6526218B39_RuntimeMethod_var, 0 },
	{ 0x060001BA, 27,  (void**)&WebGLInput_OnEditEnd_mD1ADCC675C43BF48128C84734354BB25DCCB6EDB_RuntimeMethod_var, 0 },
	{ 0x060001BB, 29,  (void**)&WebGLInput_OnTab_m9D1182F054C00912D28B631BA1F798B1BD3D2788_RuntimeMethod_var, 0 },
	{ 0x06000219, 34,  (void**)&WebGLWindow_OnWindowFocus_m175353D303C2E8EB07A2679015D269E0F3623C3D_RuntimeMethod_var, 0 },
	{ 0x0600021A, 33,  (void**)&WebGLWindow_OnWindowBlur_m0CF09BA6693BCDA3D073A368AB81A46122449FF4_RuntimeMethod_var, 0 },
	{ 0x0600021B, 35,  (void**)&WebGLWindow_OnWindowResize_m386294E41E1A89D8BB052E42ED30972194B8356C_RuntimeMethod_var, 0 },
	{ 0x06000381, 13,  (void**)&PhantomWebGL_OnPhantomConnected_m59FBF77E81DEABD19973FF25004B7535ABA04AE2_RuntimeMethod_var, 0 },
	{ 0x06000382, 14,  (void**)&PhantomWebGL_OnTransactionSigned_m165CABBA8446863ACBD0ECC56D915F06E78A90FF_RuntimeMethod_var, 0 },
	{ 0x06000383, 12,  (void**)&PhantomWebGL_OnMessageSigned_mF0225CDC896BF4CC36AFB7CB95790977581F831D_RuntimeMethod_var, 0 },
	{ 0x06000418, 18,  (void**)&SolanaWalletAdapterWebGL_OnWalletConnected_m52F659CC00A73A916A6AE1F7149EDC74C206E3F8_RuntimeMethod_var, 0 },
	{ 0x06000419, 17,  (void**)&SolanaWalletAdapterWebGL_OnTransactionSigned_m0E6658F8F7D1DEEDA59BF5C872E966D1A6D38F57_RuntimeMethod_var, 0 },
	{ 0x0600041A, 15,  (void**)&SolanaWalletAdapterWebGL_OnAllTransactionsSigned_m68547D32562C807BDCFE6E4A2E63BF41A26C4DBB_RuntimeMethod_var, 0 },
	{ 0x0600041B, 16,  (void**)&SolanaWalletAdapterWebGL_OnMessageSigned_m3246741C9145ACEC7E8EBF1F9A534CF7FD6BBED8_RuntimeMethod_var, 0 },
	{ 0x0600041C, 19,  (void**)&SolanaWalletAdapterWebGL_OnWalletsInitialized_mAC15BBFC4E311A68D0ED2E36D2D4125CCF527A1D_RuntimeMethod_var, 0 },
	{ 0x0600041D, 20,  (void**)&SolanaWalletAdapterWebGL_OnWalletsLoaded_m45CA61922BE84B2F28BB77715AD43D5DBF0E3B02_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[18] = 
{
	{ 0x02000057, { 9, 3 } },
	{ 0x02000095, { 35, 1 } },
	{ 0x02000099, { 36, 1 } },
	{ 0x020000E2, { 54, 15 } },
	{ 0x020000E3, { 69, 7 } },
	{ 0x020000E4, { 76, 7 } },
	{ 0x06000231, { 0, 6 } },
	{ 0x06000232, { 6, 1 } },
	{ 0x06000233, { 7, 1 } },
	{ 0x06000234, { 8, 1 } },
	{ 0x060003AC, { 12, 4 } },
	{ 0x060003AE, { 16, 10 } },
	{ 0x060003AF, { 26, 9 } },
	{ 0x06000502, { 37, 4 } },
	{ 0x06000503, { 41, 4 } },
	{ 0x06000504, { 45, 4 } },
	{ 0x06000506, { 49, 3 } },
	{ 0x06000507, { 52, 2 } },
};
extern const uint32_t g_rgctx_U3CU3Ec__0_1_t4F1BAF462F7594FD6B456B14DAE5A86461CDBE1C;
extern const uint32_t g_rgctx_U3CU3Ec__0_1_U3CConcatArraysU3Eb__0_0_m049964C5F10EB13BF0F8C758A009A57785201533;
extern const uint32_t g_rgctx_Func_2_tA44D33C49BA99B58281CB5F6D5AA9364D5B46E5A;
extern const uint32_t g_rgctx_Func_2__ctor_m5CA1B25DC3B8568BE0621E85EC7428465A414F8F;
extern const uint32_t g_rgctx_Enumerable_Sum_TisTU5BU5D_t86551705E4755049423D0CB638759B204C8269B0_m3B4E7CF4FA5ABCCA61267B8B7662BDAC0373E87A;
extern const uint32_t g_rgctx_TU5BU5D_t86551705E4755049423D0CB638759B204C8269B0;
extern const uint32_t g_rgctx_TU5BU5D_tB7C6AA74013C5C7D072D05A64EA74CD2E4D5F2B3;
extern const uint32_t g_rgctx_TU5BU5D_t45E0C57C3F7F77A0C295F55BDB7A251257CD5928;
extern const uint32_t g_rgctx_ArrayHelpers_SubArray_TisT_t61D5CC983135B42F589AE6B69A7F0C01399E0E83_mEDE977CFA61ED3F079F4E582CA3CCD97B4495C5F;
extern const uint32_t g_rgctx_U3CU3Ec__0_1_t713C11CA6939655EAA5B968040199614A0F82CBB;
extern const uint32_t g_rgctx_U3CU3Ec__0_1__ctor_m6CC687B74ADD9F49BFF8B15DCF321A2A25799C5C;
extern const uint32_t g_rgctx_U3CU3Ec__0_1_t713C11CA6939655EAA5B968040199614A0F82CBB;
extern const uint32_t g_rgctx_TaskCompletionSource_1_tB71D9C7E6FD6BCF8C71939FB96C4836EF545F087;
extern const uint32_t g_rgctx_TaskCompletionSource_1__ctor_m50A900775C95DB50ADC0BA4D5B2AF28002564C59;
extern const uint32_t g_rgctx_JsonRpc20Client_RegisterListener_TisT_t1B7DF713374C76CAF64615E90246380825BE1E50_mC93DFEC477156CEE252175C9FF6530B2A2682E57;
extern const uint32_t g_rgctx_TaskCompletionSource_1_get_Task_m9283A8EE1299038CA5875F2CC0004CBB559DBBE4;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass8_0_1_t9EA7EF9F6C04342CB31F02E35606DE44133EE64A;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass8_0_1__ctor_m76A4E374B2D9FDCE5BC15EBDA7CB925B82E3CEC9;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass8_0_1_U3CRegisterListenerU3Eb__0_m433763B1E0A06627BDF039F033F8C711B1DD6DA6;
extern const uint32_t g_rgctx_TaskCompletionSource_1_tFDE9349CA9DEC51712A234C0EF0DEE182E9FB352;
extern const uint32_t g_rgctx_TaskCompletionSource_1_get_Task_m60EEB0D70D940C2D60D92CBD664816F59649EB07;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass8_0_1_U3CRegisterListenerU3Eb__1_mEBC6E42F751CAB8A3FB8BCFFF1DB35E6F029A3A1;
extern const uint32_t g_rgctx_Action_1_t6BB402925B2957AE323A7DD382D99D1CDD9B251C;
extern const uint32_t g_rgctx_Action_1__ctor_m2A80CEB1D35106819F28A7A99FCB8653C16384C5;
extern const uint32_t g_rgctx_Task_1_t8F0005D86E35B5527978BBE10D91CBBA099A4A72;
extern const uint32_t g_rgctx_Task_1_ContinueWith_m462F992AF267FA5F5271CDB237F240308D21D97A;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisResponse_1_tF337FC1E396F19A3B5FFF82EF97CB2A9360F328E_mDE60BDFFCD63FED10148CEDEF3C3CFAED2A4CDD3;
extern const uint32_t g_rgctx_Response_1_tF337FC1E396F19A3B5FFF82EF97CB2A9360F328E;
extern const uint32_t g_rgctx_Response_1_get_Error_mFCCA387F659C8658D7E7B2F20510D2E53A7746B4;
extern const uint32_t g_rgctx_ResponseError_tE58DAC8FC1BEF640957A3CEB773BD71129EAC06E;
extern const uint32_t g_rgctx_ResponseError_get_Message_mCAB89DB57CB2DD6524929BEBBE947A1E28A6715E;
extern const uint32_t g_rgctx_TaskCompletionSource_1_t78CAE5215A21D399879D6FB65B71B418F09FFFA8;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetException_mC752003023048A6DC706663DAA2388CA66B13125;
extern const uint32_t g_rgctx_Response_1_get_Result_m31FFE403EB8169502C1D1CBAA6FDBF802DC8DC00;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetResult_mC4474264739246E9EEE51EFBD60F6A931BD4E83D;
extern const uint32_t g_rgctx_JsonRpc20Client_Receiver_TisT_t8CE41ACD00BE39070F148222082CA557F03AF92F_m18BB30C59D57E7C5560209C11EBD16CF93E6A4E4;
extern const uint32_t g_rgctx_Response_1_get_Error_mB8FB83D35FFE35C8B3AF739F27C90AF6689A1C8D;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Create_m778E44D6F24DB61F810CDFFCB7F7B4608976E4C4;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_tD753073B02634965349356219B1AD8F6724D8D4E;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CLoadFileU3Ed__0_1_t370C5F48064834108D407FA8C6EE02BB7FE03622_m93B53E63A8B1822AE822C916B75BAC8FCF7B0E58;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m22336A8A7156FAFEB7305A8BC5F0BEB916F96E3F;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Create_m990C0805947ECE72F4E29EB3221F98ECF6AADEED;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_tB7A5BDA15D3C61720F9594AB0C48E5B73BDD5F87;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CLoadTextureU3Ed__1_1_tECA17FCD732FAEB905693CC2C0F2835B91E342CC_m6B080E1917A838DDC4EC379568883CD828E7C721;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_get_Task_mADA7B19838CE0BEC36EE068D1F6F9EFBC0CCDF34;
extern const uint32_t g_rgctx_AsyncUniTaskMethodBuilder_1_Create_mFE5EF474E48059947DAD1EBE55E0015B5377C0F9;
extern const uint32_t g_rgctx_AsyncUniTaskMethodBuilder_1_t42885722CD9B0B9B9C7106286890B35A2BEAF151;
extern const uint32_t g_rgctx_AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadGifU3Ed__2_1_t117F0A1227085369F18852C5971E2C17DE465EB1_mFB7FD347A78FCCF1C368725FC4ED5AA0655F474D;
extern const uint32_t g_rgctx_AsyncUniTaskMethodBuilder_1_get_Task_m3C01C3E06D1CC4EA7FA3AA5C21195E656367678D;
extern const uint32_t g_rgctx_T_t23F196B14C108A8E898FA4B82B3A4820019CE9A0;
extern const uint32_t g_rgctx_T_t23F196B14C108A8E898FA4B82B3A4820019CE9A0;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisT_t23F196B14C108A8E898FA4B82B3A4820019CE9A0_m88BA484255BC48E08DACD3C022B2C9CBF46C7CB4;
extern const uint32_t g_rgctx_T_t7F4BF9274798091CDE02DEF9976FA78C98152922;
extern const uint32_t g_rgctx_T_t7F4BF9274798091CDE02DEF9976FA78C98152922;
extern const uint32_t g_rgctx_T_t2DF564D90D6B861AED06881E7CC969150A537BD8;
extern const uint32_t g_rgctx_FileLoader_LoadGif_TisT_t2DF564D90D6B861AED06881E7CC969150A537BD8_m4F031258FDFE61F8B55351802D200188141FF0D2;
extern const uint32_t g_rgctx_UniTask_1_GetAwaiter_mCE8602CACCB3983DD19CB97CC4C2A16DE3AC531D;
extern const uint32_t g_rgctx_Awaiter_get_IsCompleted_m6437F76CA880395B30A59B787FFD9B2EAAA81F20;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t1CB49DE1F2D1093262888F6584870FF62682D9CF_TisU3CLoadFileU3Ed__0_1_tD7F0B06578532034652C7BE1DF8769CBDDA3ACE3_m1B06110365388FEF9842A2C8D0DA4B6FB1FE008E;
extern const uint32_t g_rgctx_Awaiter_GetResult_mB8147FA7C4DB8E414C743E74B08492D5F107813B;
extern const uint32_t g_rgctx_FileLoader_LoadTexture_TisT_t2DF564D90D6B861AED06881E7CC969150A537BD8_m495E76C103F082D80B11048B24479927491DE7A3;
extern const uint32_t g_rgctx_Task_1_t67D16650ABF8769B8FD5FDE70D4F808C4BF92A85;
extern const uint32_t g_rgctx_Task_1_GetAwaiter_mD6DE46088F2343357A265D6F5DB00C82505645E7;
extern const uint32_t g_rgctx_TaskAwaiter_1_get_IsCompleted_m667869133EFAB24D0DC9CCD330F055AB159428FA;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t85732AC8D9275583413329A777949F2D2E65FAF7_TisU3CLoadFileU3Ed__0_1_tD7F0B06578532034652C7BE1DF8769CBDDA3ACE3_m6F4421F24D7ACA9D8F3C71592A33D6FC12D17684;
extern const uint32_t g_rgctx_TaskAwaiter_1_GetResult_mD9226B1F9C235ED87F7D160BF1EE2CE3AF39FC5B;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetException_m0BBB3735D2D6487C17519B6C6F91404907F66592;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m527BF840E424E66EC23335DD26334F82276376DA;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_m033BE82BF9AE24E59964829904C7F4C4793BB0EB;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisUnityWebRequestAsyncOperationAwaiter_tD3A3F0371C5FA0623CA38610020B0E44F0B3354A_TisU3CLoadTextureU3Ed__1_1_t340B2FA28FF1DC109ECFAF3025D20C7C6063771E_m9FDD467A4A9A4CF05CD0C6663BF785A0A60044BE;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadTextureU3Ed__1_1_t340B2FA28FF1DC109ECFAF3025D20C7C6063771E_m1DEA32217575202BC2A6F1C06EE8AD0103C85D55;
extern const uint32_t g_rgctx_T_tFA60939775E14680E309D74AB11C95B6E59274C9;
extern const uint32_t g_rgctx_T_tFA60939775E14680E309D74AB11C95B6E59274C9;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetException_m24DE8330A0FC4C51BB0306FAF59B5B4D3BA12693;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetResult_mD2E4F4E0537B503F60272F33127225DFBB42552B;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_m414AA87EDDB8D5925AE8C2C9DCA1417D6F1FD1FF;
extern const uint32_t g_rgctx_AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisUnityWebRequestAsyncOperationAwaiter_tD3A3F0371C5FA0623CA38610020B0E44F0B3354A_TisU3CLoadGifU3Ed__2_1_t2CB263833F334D9E71CA0C6541C2DDA3912C6F2D_mDB7EB394E2A1FC50C06FF782C57E0C76F435180D;
extern const uint32_t g_rgctx_AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadGifU3Ed__2_1_t2CB263833F334D9E71CA0C6541C2DDA3912C6F2D_mAB4F3F69BE71C72DD507D275D468776BE7F27752;
extern const uint32_t g_rgctx_T_t5A177C888F6C8A70C7ABC430CA7179203F22BAC5;
extern const uint32_t g_rgctx_T_t5A177C888F6C8A70C7ABC430CA7179203F22BAC5;
extern const uint32_t g_rgctx_AsyncUniTaskMethodBuilder_1_SetException_m7BF9A59F94656BE8B2C18E943ECB58674D8A420B;
extern const uint32_t g_rgctx_AsyncUniTaskMethodBuilder_1_SetResult_mFCF692D75937C104B519F8B9FFCE21D9196DECA1;
extern const uint32_t g_rgctx_AsyncUniTaskMethodBuilder_1_SetStateMachine_m5CEC42C6B4E531ABDAC432D4ED0A1DCC204D5EE5;
static const Il2CppRGCTXDefinition s_rgctxValues[83] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__0_1_t4F1BAF462F7594FD6B456B14DAE5A86461CDBE1C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__0_1_U3CConcatArraysU3Eb__0_0_m049964C5F10EB13BF0F8C758A009A57785201533 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tA44D33C49BA99B58281CB5F6D5AA9364D5B46E5A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_m5CA1B25DC3B8568BE0621E85EC7428465A414F8F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_Sum_TisTU5BU5D_t86551705E4755049423D0CB638759B204C8269B0_m3B4E7CF4FA5ABCCA61267B8B7662BDAC0373E87A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t86551705E4755049423D0CB638759B204C8269B0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_tB7C6AA74013C5C7D072D05A64EA74CD2E4D5F2B3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t45E0C57C3F7F77A0C295F55BDB7A251257CD5928 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ArrayHelpers_SubArray_TisT_t61D5CC983135B42F589AE6B69A7F0C01399E0E83_mEDE977CFA61ED3F079F4E582CA3CCD97B4495C5F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__0_1_t713C11CA6939655EAA5B968040199614A0F82CBB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__0_1__ctor_m6CC687B74ADD9F49BFF8B15DCF321A2A25799C5C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__0_1_t713C11CA6939655EAA5B968040199614A0F82CBB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_tB71D9C7E6FD6BCF8C71939FB96C4836EF545F087 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1__ctor_m50A900775C95DB50ADC0BA4D5B2AF28002564C59 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonRpc20Client_RegisterListener_TisT_t1B7DF713374C76CAF64615E90246380825BE1E50_mC93DFEC477156CEE252175C9FF6530B2A2682E57 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_get_Task_m9283A8EE1299038CA5875F2CC0004CBB559DBBE4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass8_0_1_t9EA7EF9F6C04342CB31F02E35606DE44133EE64A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass8_0_1__ctor_m76A4E374B2D9FDCE5BC15EBDA7CB925B82E3CEC9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass8_0_1_U3CRegisterListenerU3Eb__0_m433763B1E0A06627BDF039F033F8C711B1DD6DA6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_tFDE9349CA9DEC51712A234C0EF0DEE182E9FB352 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_get_Task_m60EEB0D70D940C2D60D92CBD664816F59649EB07 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass8_0_1_U3CRegisterListenerU3Eb__1_mEBC6E42F751CAB8A3FB8BCFFF1DB35E6F029A3A1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t6BB402925B2957AE323A7DD382D99D1CDD9B251C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1__ctor_m2A80CEB1D35106819F28A7A99FCB8653C16384C5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_t8F0005D86E35B5527978BBE10D91CBBA099A4A72 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_ContinueWith_m462F992AF267FA5F5271CDB237F240308D21D97A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisResponse_1_tF337FC1E396F19A3B5FFF82EF97CB2A9360F328E_mDE60BDFFCD63FED10148CEDEF3C3CFAED2A4CDD3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Response_1_tF337FC1E396F19A3B5FFF82EF97CB2A9360F328E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Response_1_get_Error_mFCCA387F659C8658D7E7B2F20510D2E53A7746B4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ResponseError_tE58DAC8FC1BEF640957A3CEB773BD71129EAC06E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ResponseError_get_Message_mCAB89DB57CB2DD6524929BEBBE947A1E28A6715E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_t78CAE5215A21D399879D6FB65B71B418F09FFFA8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetException_mC752003023048A6DC706663DAA2388CA66B13125 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Response_1_get_Result_m31FFE403EB8169502C1D1CBAA6FDBF802DC8DC00 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetResult_mC4474264739246E9EEE51EFBD60F6A931BD4E83D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonRpc20Client_Receiver_TisT_t8CE41ACD00BE39070F148222082CA557F03AF92F_m18BB30C59D57E7C5560209C11EBD16CF93E6A4E4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Response_1_get_Error_mB8FB83D35FFE35C8B3AF739F27C90AF6689A1C8D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Create_m778E44D6F24DB61F810CDFFCB7F7B4608976E4C4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_tD753073B02634965349356219B1AD8F6724D8D4E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CLoadFileU3Ed__0_1_t370C5F48064834108D407FA8C6EE02BB7FE03622_m93B53E63A8B1822AE822C916B75BAC8FCF7B0E58 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m22336A8A7156FAFEB7305A8BC5F0BEB916F96E3F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Create_m990C0805947ECE72F4E29EB3221F98ECF6AADEED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_tB7A5BDA15D3C61720F9594AB0C48E5B73BDD5F87 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CLoadTextureU3Ed__1_1_tECA17FCD732FAEB905693CC2C0F2835B91E342CC_m6B080E1917A838DDC4EC379568883CD828E7C721 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_get_Task_mADA7B19838CE0BEC36EE068D1F6F9EFBC0CCDF34 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncUniTaskMethodBuilder_1_Create_mFE5EF474E48059947DAD1EBE55E0015B5377C0F9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncUniTaskMethodBuilder_1_t42885722CD9B0B9B9C7106286890B35A2BEAF151 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncUniTaskMethodBuilder_1_Start_TisU3CLoadGifU3Ed__2_1_t117F0A1227085369F18852C5971E2C17DE465EB1_mFB7FD347A78FCCF1C368725FC4ED5AA0655F474D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncUniTaskMethodBuilder_1_get_Task_m3C01C3E06D1CC4EA7FA3AA5C21195E656367678D },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t23F196B14C108A8E898FA4B82B3A4820019CE9A0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t23F196B14C108A8E898FA4B82B3A4820019CE9A0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisT_t23F196B14C108A8E898FA4B82B3A4820019CE9A0_m88BA484255BC48E08DACD3C022B2C9CBF46C7CB4 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t7F4BF9274798091CDE02DEF9976FA78C98152922 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t7F4BF9274798091CDE02DEF9976FA78C98152922 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t2DF564D90D6B861AED06881E7CC969150A537BD8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FileLoader_LoadGif_TisT_t2DF564D90D6B861AED06881E7CC969150A537BD8_m4F031258FDFE61F8B55351802D200188141FF0D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UniTask_1_GetAwaiter_mCE8602CACCB3983DD19CB97CC4C2A16DE3AC531D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Awaiter_get_IsCompleted_m6437F76CA880395B30A59B787FFD9B2EAAA81F20 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t1CB49DE1F2D1093262888F6584870FF62682D9CF_TisU3CLoadFileU3Ed__0_1_tD7F0B06578532034652C7BE1DF8769CBDDA3ACE3_m1B06110365388FEF9842A2C8D0DA4B6FB1FE008E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Awaiter_GetResult_mB8147FA7C4DB8E414C743E74B08492D5F107813B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FileLoader_LoadTexture_TisT_t2DF564D90D6B861AED06881E7CC969150A537BD8_m495E76C103F082D80B11048B24479927491DE7A3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_t67D16650ABF8769B8FD5FDE70D4F808C4BF92A85 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_GetAwaiter_mD6DE46088F2343357A265D6F5DB00C82505645E7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAwaiter_1_get_IsCompleted_m667869133EFAB24D0DC9CCD330F055AB159428FA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t85732AC8D9275583413329A777949F2D2E65FAF7_TisU3CLoadFileU3Ed__0_1_tD7F0B06578532034652C7BE1DF8769CBDDA3ACE3_m6F4421F24D7ACA9D8F3C71592A33D6FC12D17684 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAwaiter_1_GetResult_mD9226B1F9C235ED87F7D160BF1EE2CE3AF39FC5B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetException_m0BBB3735D2D6487C17519B6C6F91404907F66592 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m527BF840E424E66EC23335DD26334F82276376DA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_m033BE82BF9AE24E59964829904C7F4C4793BB0EB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisUnityWebRequestAsyncOperationAwaiter_tD3A3F0371C5FA0623CA38610020B0E44F0B3354A_TisU3CLoadTextureU3Ed__1_1_t340B2FA28FF1DC109ECFAF3025D20C7C6063771E_m9FDD467A4A9A4CF05CD0C6663BF785A0A60044BE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadTextureU3Ed__1_1_t340B2FA28FF1DC109ECFAF3025D20C7C6063771E_m1DEA32217575202BC2A6F1C06EE8AD0103C85D55 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tFA60939775E14680E309D74AB11C95B6E59274C9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tFA60939775E14680E309D74AB11C95B6E59274C9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetException_m24DE8330A0FC4C51BB0306FAF59B5B4D3BA12693 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetResult_mD2E4F4E0537B503F60272F33127225DFBB42552B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_m414AA87EDDB8D5925AE8C2C9DCA1417D6F1FD1FF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisUnityWebRequestAsyncOperationAwaiter_tD3A3F0371C5FA0623CA38610020B0E44F0B3354A_TisU3CLoadGifU3Ed__2_1_t2CB263833F334D9E71CA0C6541C2DDA3912C6F2D_mDB7EB394E2A1FC50C06FF782C57E0C76F435180D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadGifU3Ed__2_1_t2CB263833F334D9E71CA0C6541C2DDA3912C6F2D_mAB4F3F69BE71C72DD507D275D468776BE7F27752 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t5A177C888F6C8A70C7ABC430CA7179203F22BAC5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t5A177C888F6C8A70C7ABC430CA7179203F22BAC5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncUniTaskMethodBuilder_1_SetException_m7BF9A59F94656BE8B2C18E943ECB58674D8A420B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncUniTaskMethodBuilder_1_SetResult_mFCF692D75937C104B519F8B9FFCE21D9196DECA1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncUniTaskMethodBuilder_1_SetStateMachine_m5CEC42C6B4E531ABDAC432D4ED0A1DCC204D5EE5 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_com_solana_unity_sdk_CodeGenModule;
const Il2CppCodeGenModule g_com_solana_unity_sdk_CodeGenModule = 
{
	"com.solana.unity_sdk.dll",
	1338,
	s_methodPointers,
	102,
	s_adjustorThunks,
	s_InvokerIndices,
	19,
	s_reversePInvokeIndices,
	18,
	s_rgctxIndices,
	83,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
