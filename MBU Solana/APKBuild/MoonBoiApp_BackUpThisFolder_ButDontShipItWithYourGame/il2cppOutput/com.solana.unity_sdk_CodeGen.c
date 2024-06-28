﻿#include "pch-c.h"
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
// 0x0000008A System.String KeyStoreManagerUtils::getPubKey(System.String)
extern void KeyStoreManagerUtils_getPubKey_m0FA4A06B9E5F6C6E8EA7188EBBAF224F761C2811 (void);
// 0x0000008B System.Void KeyStoreManagerUtils::.cctor()
extern void KeyStoreManagerUtils__cctor_m687DF66A18ECAC9591C9E7D75D1F710689D420C7 (void);
// 0x0000008C System.Void KeyStoreManagerUtils::savePreferenceData(System.String,System.String)
extern void KeyStoreManagerUtils_savePreferenceData_m8A1E0EEFBD3A7671703B155705791D47E1782731 (void);
// 0x0000008D System.String KeyStoreManagerUtils::getPreferencesData(System.String)
extern void KeyStoreManagerUtils_getPreferencesData_m97CB9F28576CC6F91976E3C78B9A1D60DE59DAD7 (void);
// 0x0000008E System.Void KeyStoreManagerUtils::deletePreferencesData(System.String)
extern void KeyStoreManagerUtils_deletePreferencesData_mAF96F1BE6225B1BA502DC6ABFB57C2CC30467FCC (void);
// 0x0000008F System.String KeyStoreManagerUtils::getECDSASignature(System.String,System.String)
extern void KeyStoreManagerUtils_getECDSASignature_m5638F059501B756844F78F6CBEA555473E0F050C (void);
// 0x00000090 System.Void KeyStoreManagerUtils::.ctor()
extern void KeyStoreManagerUtils__ctor_m4F98AE5C7131002D37C95118FFE7DC7BA23407F4 (void);
// 0x00000091 System.Void AES256CBC::.ctor(System.String,System.String,System.String)
extern void AES256CBC__ctor_m3ACCFCDEF8D56644498070F4B6EB52D96326D825 (void);
// 0x00000092 System.String AES256CBC::encrypt(System.Byte[])
extern void AES256CBC_encrypt_m8A02C13CFC458F5AAF6723EC06B767952672550C (void);
// 0x00000093 System.String AES256CBC::decrypt(System.Byte[])
extern void AES256CBC_decrypt_mF6A6057DAF9B8B7308892B22F72A019E330A2AF5 (void);
// 0x00000094 Org.BouncyCastle.Math.BigInteger AES256CBC::ecdh(System.String,System.String)
extern void AES256CBC_ecdh_m7C5216E5B8C20291C80F4B6709B275EF1A52BCAD (void);
// 0x00000095 System.Byte[] AES256CBC::toByteArray(System.String)
extern void AES256CBC_toByteArray_mFD5A4A077C9290E68C6E3F3E8B399BB9D2F45002 (void);
// 0x00000096 System.Byte[] AES256CBC::toByteArray(Org.BouncyCastle.Math.BigInteger)
extern void AES256CBC_toByteArray_m7AD6F7A4CE1DF12DCF79A5BAE44D52C7B100C4B9 (void);
// 0x00000097 System.Void AES256CBC::.cctor()
extern void AES256CBC__cctor_m8DD5F014E7C29157330CD8170D40935866224E7B (void);
// 0x00000098 System.Collections.Generic.Dictionary`2<System.String,System.String> ExtraLoginOptions::get_additionalParams()
extern void ExtraLoginOptions_get_additionalParams_mBA6735F124FABDE520D48FFE5A88DA05562A55D9 (void);
// 0x00000099 System.Void ExtraLoginOptions::set_additionalParams(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void ExtraLoginOptions_set_additionalParams_m40707F1407A31B54E66BB889574C439F340727C3 (void);
// 0x0000009A System.String ExtraLoginOptions::get_domain()
extern void ExtraLoginOptions_get_domain_m6131E23579017FC1BCAF0A829BE547FEF5905669 (void);
// 0x0000009B System.Void ExtraLoginOptions::set_domain(System.String)
extern void ExtraLoginOptions_set_domain_m4EA19092B763831C5F53EE180761353274F011A6 (void);
// 0x0000009C System.String ExtraLoginOptions::get_client_id()
extern void ExtraLoginOptions_get_client_id_m09B2D6DCB75136D76C31869C315C475DDDE1E183 (void);
// 0x0000009D System.Void ExtraLoginOptions::set_client_id(System.String)
extern void ExtraLoginOptions_set_client_id_mFBD2836D089412F7F21C2139CB6B6CCD77A2E1FA (void);
// 0x0000009E System.String ExtraLoginOptions::get_leeway()
extern void ExtraLoginOptions_get_leeway_mD6A62EC89CCB71E0B64D6747CEBDF3DDB1C47278 (void);
// 0x0000009F System.Void ExtraLoginOptions::set_leeway(System.String)
extern void ExtraLoginOptions_set_leeway_m331C6A22AAF3A1D480D818136A472B0876F9FE84 (void);
// 0x000000A0 System.String ExtraLoginOptions::get_verifierIdField()
extern void ExtraLoginOptions_get_verifierIdField_m5F28F8EF1D6B8E1E019221D8D0694A8A6111D474 (void);
// 0x000000A1 System.Void ExtraLoginOptions::set_verifierIdField(System.String)
extern void ExtraLoginOptions_set_verifierIdField_mE93DFFAA8521873A3CF0AE12F1B28CAC729B0867 (void);
// 0x000000A2 System.Boolean ExtraLoginOptions::get_isVerifierIdCaseSensitive()
extern void ExtraLoginOptions_get_isVerifierIdCaseSensitive_m4DD0B987E99B346C30132CEBE2A833530EC3E385 (void);
// 0x000000A3 System.Void ExtraLoginOptions::set_isVerifierIdCaseSensitive(System.Boolean)
extern void ExtraLoginOptions_set_isVerifierIdCaseSensitive_mBFCB4EB528AFFE29749BB6B808125C7243117F05 (void);
// 0x000000A4 Display ExtraLoginOptions::get_display()
extern void ExtraLoginOptions_get_display_m582C404AEF2F9AFE00D380A0DD0173B94E9719D3 (void);
// 0x000000A5 System.Void ExtraLoginOptions::set_display(Display)
extern void ExtraLoginOptions_set_display_m1DC37EA5632A3E78D6ECB67FE4129FFAD42091D9 (void);
// 0x000000A6 Prompt ExtraLoginOptions::get_prompt()
extern void ExtraLoginOptions_get_prompt_m439C4CDE16B587C3AE1D9B32176F7E8A140A2A56 (void);
// 0x000000A7 System.Void ExtraLoginOptions::set_prompt(Prompt)
extern void ExtraLoginOptions_set_prompt_m9F1FCFD31E11025166B4F1750297AFB8200DBBC0 (void);
// 0x000000A8 System.String ExtraLoginOptions::get_max_age()
extern void ExtraLoginOptions_get_max_age_m0B63452747C5B1448011E33568300E9D6A4D8BE2 (void);
// 0x000000A9 System.Void ExtraLoginOptions::set_max_age(System.String)
extern void ExtraLoginOptions_set_max_age_mA3BE4F975E864F9B6EA3E50FBF2A4842C204211B (void);
// 0x000000AA System.String ExtraLoginOptions::get_ui_locales()
extern void ExtraLoginOptions_get_ui_locales_mC445FA1F42E58198360E080CCE232E98DEA26266 (void);
// 0x000000AB System.Void ExtraLoginOptions::set_ui_locales(System.String)
extern void ExtraLoginOptions_set_ui_locales_m7DD41856C1618214620E2707B64DBC33DCEEA8BE (void);
// 0x000000AC System.String ExtraLoginOptions::get_id_token_hint()
extern void ExtraLoginOptions_get_id_token_hint_m34302F29679DAC1704D2E8A2F032CB5EF8E125EC (void);
// 0x000000AD System.Void ExtraLoginOptions::set_id_token_hint(System.String)
extern void ExtraLoginOptions_set_id_token_hint_m987F045150D57822607B83C82F9BA9C0090E1254 (void);
// 0x000000AE System.String ExtraLoginOptions::get_login_hint()
extern void ExtraLoginOptions_get_login_hint_mA69CF4B76EFE35D81E0485F93026FA35E2A6631C (void);
// 0x000000AF System.Void ExtraLoginOptions::set_login_hint(System.String)
extern void ExtraLoginOptions_set_login_hint_mC7AAE43A999C7DED43B43E0AC944543A312CF799 (void);
// 0x000000B0 System.String ExtraLoginOptions::get_acr_values()
extern void ExtraLoginOptions_get_acr_values_mE0A525FFE95FC79E280C2B005661D448D3F1B9E2 (void);
// 0x000000B1 System.Void ExtraLoginOptions::set_acr_values(System.String)
extern void ExtraLoginOptions_set_acr_values_m94199AC9D5855A3196E944F1DA9B8B5DA32DD74C (void);
// 0x000000B2 System.String ExtraLoginOptions::get_scope()
extern void ExtraLoginOptions_get_scope_m803DEA6C9E0D9C5A04B01E21927191541A2187C3 (void);
// 0x000000B3 System.Void ExtraLoginOptions::set_scope(System.String)
extern void ExtraLoginOptions_set_scope_m02A8E22DCD62FFB3789495DF18EB98D7A43FBB54 (void);
// 0x000000B4 System.String ExtraLoginOptions::get_audience()
extern void ExtraLoginOptions_get_audience_mBAA05244BBEA8E41B900A021C562D8DAAF58F1F3 (void);
// 0x000000B5 System.Void ExtraLoginOptions::set_audience(System.String)
extern void ExtraLoginOptions_set_audience_m946126A321397A91C7DAC587F1D10919AF4A4BB5 (void);
// 0x000000B6 System.String ExtraLoginOptions::get_connection()
extern void ExtraLoginOptions_get_connection_m61437417EFF66A69741F181FA587FB6C68636BDB (void);
// 0x000000B7 System.Void ExtraLoginOptions::set_connection(System.String)
extern void ExtraLoginOptions_set_connection_mA97E28F72F7FF434C2CD956C7715AEC7AC3C3118 (void);
// 0x000000B8 System.String ExtraLoginOptions::get_state()
extern void ExtraLoginOptions_get_state_m3FD3B48FC2C8EF9BA6F3CE01ED969710232DFEF1 (void);
// 0x000000B9 System.Void ExtraLoginOptions::set_state(System.String)
extern void ExtraLoginOptions_set_state_m95C4C71B5FAF01D34E84988E3549982DF33DDD5C (void);
// 0x000000BA System.String ExtraLoginOptions::get_response_type()
extern void ExtraLoginOptions_get_response_type_m029938BFFF20D6CABD5C3CD8981A37F20DEE8692 (void);
// 0x000000BB System.Void ExtraLoginOptions::set_response_type(System.String)
extern void ExtraLoginOptions_set_response_type_mF7A854E23B908E6647DD211FF38632159FA9E733 (void);
// 0x000000BC System.String ExtraLoginOptions::get_nonce()
extern void ExtraLoginOptions_get_nonce_m942756852E378E8C3E99581E7E23D4A68EE75A2E (void);
// 0x000000BD System.Void ExtraLoginOptions::set_nonce(System.String)
extern void ExtraLoginOptions_set_nonce_mC899BA92B3901F9753068B1647A6E1261748C2F1 (void);
// 0x000000BE System.String ExtraLoginOptions::get_redirect_uri()
extern void ExtraLoginOptions_get_redirect_uri_m6840DFD4F78B8C70AE96462109A2923D1895D941 (void);
// 0x000000BF System.Void ExtraLoginOptions::set_redirect_uri(System.String)
extern void ExtraLoginOptions_set_redirect_uri_m94D089A4ACC07C27048FB33468E1E1D763961562 (void);
// 0x000000C0 System.Void ExtraLoginOptions::.ctor()
extern void ExtraLoginOptions__ctor_m8C2AF94C304DDFC3CC52C78838AF364A2BA9A25A (void);
// 0x000000C1 System.String LoginConfigItem::get_verifier()
extern void LoginConfigItem_get_verifier_mA794C86057C0355A9859E507747564446F69A488 (void);
// 0x000000C2 System.Void LoginConfigItem::set_verifier(System.String)
extern void LoginConfigItem_set_verifier_m962018C987C1D76CFE29CCF2774475A978C6144C (void);
// 0x000000C3 TypeOfLogin LoginConfigItem::get_typeOfLogin()
extern void LoginConfigItem_get_typeOfLogin_m24D2AAE229F138C6C129B41DBE98696C0AA4453D (void);
// 0x000000C4 System.Void LoginConfigItem::set_typeOfLogin(TypeOfLogin)
extern void LoginConfigItem_set_typeOfLogin_m294DAA27ADD1A8DE5A0230D6652B06B21339864E (void);
// 0x000000C5 System.String LoginConfigItem::get_name()
extern void LoginConfigItem_get_name_m9C0031B2B52386FD531CC601D79BC127A3A6E656 (void);
// 0x000000C6 System.Void LoginConfigItem::set_name(System.String)
extern void LoginConfigItem_set_name_m863399B80BA2DCAA0D67999BF85CBE96E12DF4AD (void);
// 0x000000C7 System.String LoginConfigItem::get_description()
extern void LoginConfigItem_get_description_mA8C7D479D75C74126D2393544939C79CAA0FAC31 (void);
// 0x000000C8 System.Void LoginConfigItem::set_description(System.String)
extern void LoginConfigItem_set_description_m9002AF95F927BCC0A9AA342FE6570B548231CA6D (void);
// 0x000000C9 System.String LoginConfigItem::get_clientId()
extern void LoginConfigItem_get_clientId_m8C98B27FA158D96A6F28A0A768C5F1E9B907B525 (void);
// 0x000000CA System.Void LoginConfigItem::set_clientId(System.String)
extern void LoginConfigItem_set_clientId_m333385074CC16D3C5A0DC396CAFB948FA58EE510 (void);
// 0x000000CB System.String LoginConfigItem::get_verifierSubIdentifier()
extern void LoginConfigItem_get_verifierSubIdentifier_m4D6C665D363ABB39D0DEEF531290B7215AA61994 (void);
// 0x000000CC System.Void LoginConfigItem::set_verifierSubIdentifier(System.String)
extern void LoginConfigItem_set_verifierSubIdentifier_mE6A515002BBA0CD192CAA4A4B2016521EBF60FD8 (void);
// 0x000000CD System.String LoginConfigItem::get_logoHover()
extern void LoginConfigItem_get_logoHover_m438DD16DAA6C2C2560CBA8BC880F3F054D7A4B44 (void);
// 0x000000CE System.Void LoginConfigItem::set_logoHover(System.String)
extern void LoginConfigItem_set_logoHover_m9B2312A2165BC160DEE44F6B6E976DD416B0EE56 (void);
// 0x000000CF System.String LoginConfigItem::get_logoLight()
extern void LoginConfigItem_get_logoLight_m31DE6DF9CBD4A507F71AEC8BA250C5008304E6D1 (void);
// 0x000000D0 System.Void LoginConfigItem::set_logoLight(System.String)
extern void LoginConfigItem_set_logoLight_mDFD1716C5AF998620C4B705675BD9B8285140166 (void);
// 0x000000D1 System.String LoginConfigItem::get_logoDark()
extern void LoginConfigItem_get_logoDark_m91955949AE20290D2C40A8EDDE9576794DDB3B33 (void);
// 0x000000D2 System.Void LoginConfigItem::set_logoDark(System.String)
extern void LoginConfigItem_set_logoDark_m69E843576BBEF264D1901F1FBF30876C18B8717D (void);
// 0x000000D3 System.Boolean LoginConfigItem::get_mainOption()
extern void LoginConfigItem_get_mainOption_m0F05F271A583A6DC61410F5310706DBA99E1725D (void);
// 0x000000D4 System.Void LoginConfigItem::set_mainOption(System.Boolean)
extern void LoginConfigItem_set_mainOption_mAB4D615339DE122668B874A621AA3995F6335B6D (void);
// 0x000000D5 System.Boolean LoginConfigItem::get_showOnModal()
extern void LoginConfigItem_get_showOnModal_mFF9B30BE58AEBE82C355DF378F316EB82A8AF4BF (void);
// 0x000000D6 System.Void LoginConfigItem::set_showOnModal(System.Boolean)
extern void LoginConfigItem_set_showOnModal_m51FCE3168113A56EDEAA9584CD280AD535244E04 (void);
// 0x000000D7 System.Boolean LoginConfigItem::get_showOnDesktop()
extern void LoginConfigItem_get_showOnDesktop_m6514CB41B44B0DE52799CF337CE9144C4DA4C74E (void);
// 0x000000D8 System.Void LoginConfigItem::set_showOnDesktop(System.Boolean)
extern void LoginConfigItem_set_showOnDesktop_m29100BC8118FBA640E335752B49000C1CF2BF12B (void);
// 0x000000D9 System.Boolean LoginConfigItem::get_showOnMobile()
extern void LoginConfigItem_get_showOnMobile_m70845D8C51F11EC9BCBB03243CC02360F1DC2D24 (void);
// 0x000000DA System.Void LoginConfigItem::set_showOnMobile(System.Boolean)
extern void LoginConfigItem_set_showOnMobile_m49B2785CE40A529D783AFCCFE066F70684CA84F0 (void);
// 0x000000DB System.Void LoginConfigItem::.ctor()
extern void LoginConfigItem__ctor_mAC4FC85F5335C2502F529623D27107981CECB113 (void);
// 0x000000DC Provider LoginParams::get_loginProvider()
extern void LoginParams_get_loginProvider_mEDC2EA94207549B6D5A3DCEFEB2F01FF0DD404B0 (void);
// 0x000000DD System.Void LoginParams::set_loginProvider(Provider)
extern void LoginParams_set_loginProvider_m181593F8F76CE2BB6B1928DD093E5A1FBDCCE32A (void);
// 0x000000DE System.String LoginParams::get_dappShare()
extern void LoginParams_get_dappShare_m3F3904C846B6AA5F2FFDA9358B73333D83B8850C (void);
// 0x000000DF System.Void LoginParams::set_dappShare(System.String)
extern void LoginParams_set_dappShare_mAC238BA77CF4976323780E98A8DD94569213583C (void);
// 0x000000E0 ExtraLoginOptions LoginParams::get_extraLoginOptions()
extern void LoginParams_get_extraLoginOptions_m8B2E80C34B1F8E89B30361ECDC3E7309F27A8EEB (void);
// 0x000000E1 System.Void LoginParams::set_extraLoginOptions(ExtraLoginOptions)
extern void LoginParams_set_extraLoginOptions_m52997FC70C25444090F1D656B5BC5498A0DE88F7 (void);
// 0x000000E2 System.Uri LoginParams::get_redirectUrl()
extern void LoginParams_get_redirectUrl_m234C8555ABCAC471E66BFCADB353DF36ABD6D19C (void);
// 0x000000E3 System.Void LoginParams::set_redirectUrl(System.Uri)
extern void LoginParams_set_redirectUrl_m46193FBDE6F4BC27CFE86B5F385702BD37548001 (void);
// 0x000000E4 System.String LoginParams::get_appState()
extern void LoginParams_get_appState_mF4E1E4DDD5E13DEE77D8DB68B5657773A3F337DF (void);
// 0x000000E5 System.Void LoginParams::set_appState(System.String)
extern void LoginParams_set_appState_mD6E89B9EC036DEEFCC844FC57D7FCF204499CFC7 (void);
// 0x000000E6 MFALevel LoginParams::get_mfaLevel()
extern void LoginParams_get_mfaLevel_m6F22C8DA3E21413AF9E2A9D53BBF27688333DF2A (void);
// 0x000000E7 System.Void LoginParams::set_mfaLevel(MFALevel)
extern void LoginParams_set_mfaLevel_m54E511FDE43D1EF63120F5695E3CE31328CB1494 (void);
// 0x000000E8 System.Int32 LoginParams::get_sessionTime()
extern void LoginParams_get_sessionTime_m22FDA0E2F31E71CE7501D44D6D881BA912E9673C (void);
// 0x000000E9 System.Void LoginParams::set_sessionTime(System.Int32)
extern void LoginParams_set_sessionTime_m858ADA116068969FDDAEBF4008C4E9067EAF2E80 (void);
// 0x000000EA Curve LoginParams::get_curve()
extern void LoginParams_get_curve_mA3D2BD08D7C55FDD73862E0B50560FDD1AA5F5C4 (void);
// 0x000000EB System.Void LoginParams::set_curve(Curve)
extern void LoginParams_set_curve_mC4F8B1DA20DCACA06200CA3B040DAF3033D9B48E (void);
// 0x000000EC System.Void LoginParams::.ctor()
extern void LoginParams__ctor_m180412D52E0846C8E1F06971236BFA23FA12FE98 (void);
// 0x000000ED System.Void SecurePlayerPrefs::Init()
extern void SecurePlayerPrefs_Init_mA990D90D44307233C6C4096FF9202F6051E60191 (void);
// 0x000000EE System.Boolean SecurePlayerPrefs::isInitialized()
extern void SecurePlayerPrefs_isInitialized_m99904CFC695644EA61D5A3B447601CFC2D24336C (void);
// 0x000000EF System.Void SecurePlayerPrefs::securePlayerPrefs(System.String[,],System.Boolean)
extern void SecurePlayerPrefs_securePlayerPrefs_mB27DE70C606286DF0B0665270339D4FC29D360A8 (void);
// 0x000000F0 System.Void SecurePlayerPrefs::setLogErrorsEnabled(System.Boolean)
extern void SecurePlayerPrefs_setLogErrorsEnabled_m877648801097761144C34B41FDD056B6EBCBAF2A (void);
// 0x000000F1 System.Void SecurePlayerPrefs::SetString(System.String,System.String)
extern void SecurePlayerPrefs_SetString_m5D64C7C31332DE1AC22FE49AAF55282A078698BB (void);
// 0x000000F2 System.Void SecurePlayerPrefs::SetFloat(System.String,System.Single)
extern void SecurePlayerPrefs_SetFloat_m1C4491F66EB61AB12CBFF270291B6FD7A391F074 (void);
// 0x000000F3 System.Void SecurePlayerPrefs::SetInt(System.String,System.Int32)
extern void SecurePlayerPrefs_SetInt_m9CF8F4FABED36BDC757826E98A92211127F4BDE6 (void);
// 0x000000F4 System.Void SecurePlayerPrefs::SetBool(System.String,System.Boolean)
extern void SecurePlayerPrefs_SetBool_mCF63A78BE6ACBE72481891778155DFF89F9242DE (void);
// 0x000000F5 System.String SecurePlayerPrefs::GetString(System.String,System.String)
extern void SecurePlayerPrefs_GetString_m9EC6DA24B9395553BCA7251A0A2CDE0D23CBF4A4 (void);
// 0x000000F6 System.String SecurePlayerPrefs::GetString(System.String)
extern void SecurePlayerPrefs_GetString_m7831E95383724BBFB89B42B3E8AA19151555D97D (void);
// 0x000000F7 System.Int32 SecurePlayerPrefs::GetInt(System.String,System.Int32)
extern void SecurePlayerPrefs_GetInt_m1AB315EA660647AC4140C594618FACEDAF7A262C (void);
// 0x000000F8 System.Int32 SecurePlayerPrefs::GetInt(System.String)
extern void SecurePlayerPrefs_GetInt_m09D9D4D29DE3C360784D60C06E04EC21D40918E5 (void);
// 0x000000F9 System.Single SecurePlayerPrefs::GetFloat(System.String,System.Single)
extern void SecurePlayerPrefs_GetFloat_m7427467F87E0EF57E7831B1138D5D1607B0EB45E (void);
// 0x000000FA System.Single SecurePlayerPrefs::GetFloat(System.String)
extern void SecurePlayerPrefs_GetFloat_mF0F25298086503D1AD3C831DFFCB9584F482B3C8 (void);
// 0x000000FB System.Boolean SecurePlayerPrefs::GetBool(System.String,System.Boolean)
extern void SecurePlayerPrefs_GetBool_mEAAD4D41DC60A2247E7AA7ACA3AE440C11BA759C (void);
// 0x000000FC System.Boolean SecurePlayerPrefs::GetBool(System.String)
extern void SecurePlayerPrefs_GetBool_m254685E257088F0B3A31D2B6A538CEBC75BBC9ED (void);
// 0x000000FD System.Void SecurePlayerPrefs::DeleteKey(System.String)
extern void SecurePlayerPrefs_DeleteKey_mDC4E888E64BE1F5E9DF1E99C30B68EA6290CAAA5 (void);
// 0x000000FE System.Void SecurePlayerPrefs::DeleteAll()
extern void SecurePlayerPrefs_DeleteAll_mA650F826E1DB430C22D24DF969369AD85AAAF45E (void);
// 0x000000FF System.Boolean SecurePlayerPrefs::HasKey(System.String)
extern void SecurePlayerPrefs_HasKey_m700AAC94B0BEE0E55A5A473896AD590442B1E09B (void);
// 0x00000100 System.Void SecurePlayerPrefs::Save()
extern void SecurePlayerPrefs_Save_m0FFB0CE70A0C7B4ECDBAE84BD4CC0CA83DA78FB7 (void);
// 0x00000101 System.String SecurePlayerPrefs::Decrypt(System.String)
extern void SecurePlayerPrefs_Decrypt_m65B44B081A290EE669D5B593DFA8C82D550EE585 (void);
// 0x00000102 System.String SecurePlayerPrefs::Encrypt(System.String)
extern void SecurePlayerPrefs_Encrypt_m32CF9AB11B6F06FBA1D0C6DA805A4FD3C82D5C30 (void);
// 0x00000103 System.Void SecurePlayerPrefs::.ctor()
extern void SecurePlayerPrefs__ctor_mB946F5E6236F7726C4150C6C696E41E20CB8C345 (void);
// 0x00000104 System.Void SecurePlayerPrefs::.cctor()
extern void SecurePlayerPrefs__cctor_mBBD1E8D7AC87E912D86FBE8B773FE6DCBFED75F3 (void);
// 0x00000105 System.String ShareMetadata::get_iv()
extern void ShareMetadata_get_iv_mE06C94EA532371BDDC937DC99DFC5BF1D3E98F0C (void);
// 0x00000106 System.Void ShareMetadata::set_iv(System.String)
extern void ShareMetadata_set_iv_mC57DEF8611776BF9A250C1E2B651D927DE235ED0 (void);
// 0x00000107 System.String ShareMetadata::get_ephemPublicKey()
extern void ShareMetadata_get_ephemPublicKey_mE020FC9FD0DB6134169318FE9CEB6CEB9EF91AD4 (void);
// 0x00000108 System.Void ShareMetadata::set_ephemPublicKey(System.String)
extern void ShareMetadata_set_ephemPublicKey_m0004CB59FECB0F33A5CDC4B99BD5BBF55BE34F04 (void);
// 0x00000109 System.String ShareMetadata::get_ciphertext()
extern void ShareMetadata_get_ciphertext_m39B35B03F9B0C0C92B996551F190D3DF989BA297 (void);
// 0x0000010A System.Void ShareMetadata::set_ciphertext(System.String)
extern void ShareMetadata_set_ciphertext_m3DDB5BCBE6A75CAB9AD96957D3538686395BF47C (void);
// 0x0000010B System.String ShareMetadata::get_mac()
extern void ShareMetadata_get_mac_m2CB771FB2AD4C807315A7F06ABF2F9E854BB3523 (void);
// 0x0000010C System.Void ShareMetadata::set_mac(System.String)
extern void ShareMetadata_set_mac_m8CC8C736358CD92860B313A429F7898B5442B13E (void);
// 0x0000010D System.Void ShareMetadata::.ctor()
extern void ShareMetadata__ctor_mE5F12844697576E7CCC7276E572A8D8FE9E6E8D7 (void);
// 0x0000010E System.String UserInfo::get_email()
extern void UserInfo_get_email_mD2B1F56FEE0D3A150D3B6B785E736CC1553247CD (void);
// 0x0000010F System.Void UserInfo::set_email(System.String)
extern void UserInfo_set_email_m1810F79A3E1109B2DC4894B442EB73C1D24013A3 (void);
// 0x00000110 System.String UserInfo::get_name()
extern void UserInfo_get_name_m3C0966D4C3DCE034E1855CB1FDB69A4B2EFBC7B3 (void);
// 0x00000111 System.Void UserInfo::set_name(System.String)
extern void UserInfo_set_name_m10FBE57492A8606C9ECFF76EBA6F4642357F9EAD (void);
// 0x00000112 System.String UserInfo::get_profileImage()
extern void UserInfo_get_profileImage_m603CF76C77A4F23C243BB2AE4D98B5B10CBA60F1 (void);
// 0x00000113 System.Void UserInfo::set_profileImage(System.String)
extern void UserInfo_set_profileImage_mDC379266678ED3F5BE86C93C8FB56E7964C3C401 (void);
// 0x00000114 System.String UserInfo::get_aggregateVerifier()
extern void UserInfo_get_aggregateVerifier_mDEF6F37C5CA6B975B4A7340DA2F43119A99AA915 (void);
// 0x00000115 System.Void UserInfo::set_aggregateVerifier(System.String)
extern void UserInfo_set_aggregateVerifier_m114824ABB74C2FB2B7DFAD0E1372E5AFFFDDD1A0 (void);
// 0x00000116 System.String UserInfo::get_verifier()
extern void UserInfo_get_verifier_mF92AF50FBB6262C4C43027837EA9F4AC29253B82 (void);
// 0x00000117 System.Void UserInfo::set_verifier(System.String)
extern void UserInfo_set_verifier_mF4CA760A7574711A0A2C8D8ADEA525BB1A50DA9A (void);
// 0x00000118 System.String UserInfo::get_verifierId()
extern void UserInfo_get_verifierId_m5EC029ECCA08043D4F23F162FE70A5277784DA2D (void);
// 0x00000119 System.Void UserInfo::set_verifierId(System.String)
extern void UserInfo_set_verifierId_mF7E5E64B69D51220C1ACF6CBE28B4779E535C86F (void);
// 0x0000011A System.String UserInfo::get_typeOfLogin()
extern void UserInfo_get_typeOfLogin_m0B18EC170E8ACBCEB7D91E63519C07EC35E96D9A (void);
// 0x0000011B System.Void UserInfo::set_typeOfLogin(System.String)
extern void UserInfo_set_typeOfLogin_m4E2EC5BE7866EB9D4C8B5FC4763E275A6C7355F9 (void);
// 0x0000011C System.String UserInfo::get_dappShare()
extern void UserInfo_get_dappShare_m0E11EC09FB814616F9EDFC12F4A492DB5536BA87 (void);
// 0x0000011D System.Void UserInfo::set_dappShare(System.String)
extern void UserInfo_set_dappShare_m3CFACC04510888F3CC2E423FFE576234DEB3BD43 (void);
// 0x0000011E System.String UserInfo::get_idToken()
extern void UserInfo_get_idToken_mCAEE9818EF1A53F10501C64765949A220C4CCA60 (void);
// 0x0000011F System.Void UserInfo::set_idToken(System.String)
extern void UserInfo_set_idToken_m2D7E2BA05860F7866B46F68E7E6BBCA820150E3E (void);
// 0x00000120 System.String UserInfo::get_oAuthIdToken()
extern void UserInfo_get_oAuthIdToken_mBF2391B6144CF9908F54199CF9EBD072041F553B (void);
// 0x00000121 System.Void UserInfo::set_oAuthIdToken(System.String)
extern void UserInfo_set_oAuthIdToken_mE02EEC446E68B8ECD83377F2FF9A00F1A1DAD189 (void);
// 0x00000122 System.String UserInfo::get_oAuthAccessToken()
extern void UserInfo_get_oAuthAccessToken_mB1DEFE615F4F781D502DE19E63C3D28F650F7E42 (void);
// 0x00000123 System.Void UserInfo::set_oAuthAccessToken(System.String)
extern void UserInfo_set_oAuthAccessToken_mF1FE24F01372D6D00AC1F10BE913937B21355A7E (void);
// 0x00000124 System.Void UserInfo::.ctor()
extern void UserInfo__ctor_mF3C53CD740CCF86CFBBA344B407F2FD9453FE1A7 (void);
// 0x00000125 System.String Web3AuthOptions::get_clientId()
extern void Web3AuthOptions_get_clientId_mB7B63B2D79C68861E79A9420283378CF5B6B5760 (void);
// 0x00000126 System.Void Web3AuthOptions::set_clientId(System.String)
extern void Web3AuthOptions_set_clientId_mCEDD013E698EB35EC1DF966FB8DB8B19293ECABB (void);
// 0x00000127 Web3Auth/Network Web3AuthOptions::get_network()
extern void Web3AuthOptions_get_network_mA8ECE6FB91D614BDF09B6141EEC73134EB685073 (void);
// 0x00000128 System.Void Web3AuthOptions::set_network(Web3Auth/Network)
extern void Web3AuthOptions_set_network_mCE0E43B7013A50142334B2432F46B4F48C21DC99 (void);
// 0x00000129 System.Uri Web3AuthOptions::get_redirectUrl()
extern void Web3AuthOptions_get_redirectUrl_mCE1F75BC723219D0E06A2A29994DD6CADA8E83D7 (void);
// 0x0000012A System.Void Web3AuthOptions::set_redirectUrl(System.Uri)
extern void Web3AuthOptions_set_redirectUrl_m7DBFA16C2AD50D0BD4EA180EAA543D275CD8C0C2 (void);
// 0x0000012B System.String Web3AuthOptions::get_sdkUrl()
extern void Web3AuthOptions_get_sdkUrl_mE36C68C36E31C911E9983DC6739072CC3C4E20BF (void);
// 0x0000012C System.Void Web3AuthOptions::set_sdkUrl(System.String)
extern void Web3AuthOptions_set_sdkUrl_m770C16CC5B986DCC05178627BF721715E0E006BB (void);
// 0x0000012D WhiteLabelData Web3AuthOptions::get_whiteLabel()
extern void Web3AuthOptions_get_whiteLabel_m8B010D25D63A1C8807B40FEC2CA70BEA38E96610 (void);
// 0x0000012E System.Void Web3AuthOptions::set_whiteLabel(WhiteLabelData)
extern void Web3AuthOptions_set_whiteLabel_mB7789E8223F6DFA10FFFB6443B93A787BF31FC76 (void);
// 0x0000012F System.Collections.Generic.Dictionary`2<System.String,LoginConfigItem> Web3AuthOptions::get_loginConfig()
extern void Web3AuthOptions_get_loginConfig_mF9A923D3DE8D5B999B3F2C849015CC8015F4CAAA (void);
// 0x00000130 System.Void Web3AuthOptions::set_loginConfig(System.Collections.Generic.Dictionary`2<System.String,LoginConfigItem>)
extern void Web3AuthOptions_set_loginConfig_mDF29168D03D32BC4E8F8F2FBD6F7AE937EC0C488 (void);
// 0x00000131 System.Void Web3AuthOptions::.ctor()
extern void Web3AuthOptions__ctor_m66B49631F2E216BD268B224BBB067217078E15D6 (void);
// 0x00000132 System.String Web3AuthResponse::get_privKey()
extern void Web3AuthResponse_get_privKey_m9F08D1BE32C794AFE6E8CE683858D20E5B5DC127 (void);
// 0x00000133 System.Void Web3AuthResponse::set_privKey(System.String)
extern void Web3AuthResponse_set_privKey_m2CAFC221F7A152EB1C771521084AB2A076E4B12F (void);
// 0x00000134 System.String Web3AuthResponse::get_ed25519PrivKey()
extern void Web3AuthResponse_get_ed25519PrivKey_m1694D26EC8F4567F7148177A1A048D794465FBCB (void);
// 0x00000135 System.Void Web3AuthResponse::set_ed25519PrivKey(System.String)
extern void Web3AuthResponse_set_ed25519PrivKey_mACEDDB5A71D051402E5BAD9EFC22E1250B6A8C17 (void);
// 0x00000136 UserInfo Web3AuthResponse::get_userInfo()
extern void Web3AuthResponse_get_userInfo_m106EA2DF5EB8272E8012A57A20A00E7586BCC726 (void);
// 0x00000137 System.Void Web3AuthResponse::set_userInfo(UserInfo)
extern void Web3AuthResponse_set_userInfo_mFF79B100D73EA9FFEBB5CDBABABB9E4674488DE0 (void);
// 0x00000138 System.String Web3AuthResponse::get_error()
extern void Web3AuthResponse_get_error_mBC32ECE44E253AA9CB156C9B2D49C0BDC2DFADC7 (void);
// 0x00000139 System.Void Web3AuthResponse::set_error(System.String)
extern void Web3AuthResponse_set_error_mFA61A132E5E90F4EA4F1AD4DE7732DE46C6BFCEF (void);
// 0x0000013A System.String Web3AuthResponse::get_sessionId()
extern void Web3AuthResponse_get_sessionId_m23D54DE64D16CCAF3D1EC93AAB421D036E94579F (void);
// 0x0000013B System.Void Web3AuthResponse::set_sessionId(System.String)
extern void Web3AuthResponse_set_sessionId_mAC019AC50AA7B076FE8FB1A2A99E66D1DA88D627 (void);
// 0x0000013C System.Void Web3AuthResponse::.ctor()
extern void Web3AuthResponse__ctor_mCF003E1741A472AC2C06EBBDD7737E4C84AD0FAD (void);
// 0x0000013D System.Void Web3AuthResponse::.ctor(System.String,System.String,UserInfo,System.String)
extern void Web3AuthResponse__ctor_mE3D4107276F4E35766EF40E2B20DE9696F2CC8A4 (void);
// 0x0000013E System.Void Web3AuthResponse::.ctor(System.String,System.String,UserInfo,System.String,System.String)
extern void Web3AuthResponse__ctor_m2B365B20E6A3C736BD61E205612196F1FC534D4D (void);
// 0x0000013F System.String WhiteLabelData::get_name()
extern void WhiteLabelData_get_name_mDBB093EF0F5BC443A584BD2B99A96B8F06965AC6 (void);
// 0x00000140 System.Void WhiteLabelData::set_name(System.String)
extern void WhiteLabelData_set_name_mAC8DA271351FE8292B052EA977F1403567691B55 (void);
// 0x00000141 System.String WhiteLabelData::get_logoLight()
extern void WhiteLabelData_get_logoLight_mDE265BA766DEE3EC5C4B4D08D716A85E80B6D687 (void);
// 0x00000142 System.Void WhiteLabelData::set_logoLight(System.String)
extern void WhiteLabelData_set_logoLight_mD1F7263F6DBCBB2741F374A79FF3BD8F27CEBF9E (void);
// 0x00000143 System.String WhiteLabelData::get_logoDark()
extern void WhiteLabelData_get_logoDark_m6B1A8F62473FEDFA4F37F8DEBDA75B42A5EFC337 (void);
// 0x00000144 System.Void WhiteLabelData::set_logoDark(System.String)
extern void WhiteLabelData_set_logoDark_mEAD1A09AAEC6B29B9AC57840EFD20ACDEAD6F4E9 (void);
// 0x00000145 System.String WhiteLabelData::get_defaultLanguage()
extern void WhiteLabelData_get_defaultLanguage_mCB5F5CD192AC76A0CD64E3F7F8E671BF4DB7620B (void);
// 0x00000146 System.Void WhiteLabelData::set_defaultLanguage(System.String)
extern void WhiteLabelData_set_defaultLanguage_m6FD9E33CCD8956B9B64272DDA29C4B348179615E (void);
// 0x00000147 System.Boolean WhiteLabelData::get_dark()
extern void WhiteLabelData_get_dark_m994DE1A34E7805DFC04D7FC595F75B8D3B2A548C (void);
// 0x00000148 System.Void WhiteLabelData::set_dark(System.Boolean)
extern void WhiteLabelData_set_dark_m715345FA97EAEE76703909B7CF47AD0725285778 (void);
// 0x00000149 System.Collections.Generic.Dictionary`2<System.String,System.String> WhiteLabelData::get_theme()
extern void WhiteLabelData_get_theme_m521DB832A7C4BA698BE0D27B7F6B6971EF03909E (void);
// 0x0000014A System.Void WhiteLabelData::set_theme(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WhiteLabelData_set_theme_mE705905C59E482D06603CCC9DD2CF6747E5549E8 (void);
// 0x0000014B System.Void WhiteLabelData::.ctor()
extern void WhiteLabelData__ctor_mC934E1230E97FCB07BDF7BCE6DB0CEE22827961E (void);
// 0x0000014C System.Void Utils::LaunchUrl(System.String,System.String,System.String)
extern void Utils_LaunchUrl_m91AB1098CD57D10BDD2D6CAF4D0B0D8CA11062CC (void);
// 0x0000014D System.Byte[] Utils::DecodeBase64(System.String)
extern void Utils_DecodeBase64_m489A851C0F2481FE1EAB0E792FF18A6F8A4EF78C (void);
// 0x0000014E System.Collections.Generic.Dictionary`2<System.String,System.String> Utils::ParseQuery(System.String)
extern void Utils_ParseQuery_m94DCE66CA78640B2AE0A2AE0BE1B5EA6AEA54334 (void);
// 0x0000014F System.Int32 Utils::GetRandomUnusedPort()
extern void Utils_GetRandomUnusedPort_m3B0D526958B3373ECFA2310677FDEA3523F9EE97 (void);
// 0x00000150 System.Void Utils/<>c::.cctor()
extern void U3CU3Ec__cctor_m33AE10837481E69BFC74370F54D619BCF69AEE9B (void);
// 0x00000151 System.Void Utils/<>c::.ctor()
extern void U3CU3Ec__ctor_mFC65BA92B86438243BC898E9581B2EE5DA795BFC (void);
// 0x00000152 System.Boolean Utils/<>c::<ParseQuery>b__2_0(System.String)
extern void U3CU3Ec_U3CParseQueryU3Eb__2_0_m2C3D5DAD6DDB201F78580961B35309D83ACD5558 (void);
// 0x00000153 System.String Utils/<>c::<ParseQuery>b__2_1(System.String)
extern void U3CU3Ec_U3CParseQueryU3Eb__2_1_m14798DEFE5D23D4DDD0E64C7ED6DECF425EFB2D9 (void);
// 0x00000154 System.String Utils/<>c::<ParseQuery>b__2_2(System.String)
extern void U3CU3Ec_U3CParseQueryU3Eb__2_2_m2B68E7D7108A948A0B8F56184B6541FC6EDFF35A (void);
// 0x00000155 System.Void Web3Auth::add_onLogin(System.Action`1<Web3AuthResponse>)
extern void Web3Auth_add_onLogin_m9EDD31618AEC9CEC618953CEBF421A8AAF98D0EF (void);
// 0x00000156 System.Void Web3Auth::remove_onLogin(System.Action`1<Web3AuthResponse>)
extern void Web3Auth_remove_onLogin_m2C2E76F710A2DDD05A87654AB1E31F09E6FD9603 (void);
// 0x00000157 System.Void Web3Auth::add_onLogout(System.Action)
extern void Web3Auth_add_onLogout_m9CCAFD46D4BF381D5317E66D2763ADA4DDA88E7D (void);
// 0x00000158 System.Void Web3Auth::remove_onLogout(System.Action)
extern void Web3Auth_remove_onLogout_m253416187483E4C75FBC0573663D2EC43BC9EBA6 (void);
// 0x00000159 System.Void Web3Auth::Awake()
extern void Web3Auth_Awake_m0747C47A5BB5A5EF08732269FC410294847EA469 (void);
// 0x0000015A System.Void Web3Auth::setOptions(Web3AuthOptions)
extern void Web3Auth_setOptions_mC13A88189661DC7B1BC34EB06153EAEBD6BBF989 (void);
// 0x0000015B System.Void Web3Auth::onDeepLinkActivated(System.String)
extern void Web3Auth_onDeepLinkActivated_mC3A5B16026F6E11C6C7331788F506CC8132C9855 (void);
// 0x0000015C System.Void Web3Auth::request(System.String,LoginParams,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void Web3Auth_request_mA40017A55F64E8FF339FEA33674F9A76F5B37407 (void);
// 0x0000015D System.Void Web3Auth::setResultUrl(System.Uri)
extern void Web3Auth_setResultUrl_mE3FD69FD804A8FEE15EB059669B5C71C7194E918 (void);
// 0x0000015E System.Void Web3Auth::login(LoginParams)
extern void Web3Auth_login_m9EF66427D479EAAE621EA7BAC1D33F062901846A (void);
// 0x0000015F System.Void Web3Auth::logout(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void Web3Auth_logout_mFBC41AA0A4731EC6DE40B6E66A85FC2749716D74 (void);
// 0x00000160 System.Void Web3Auth::logout(System.Uri,System.String)
extern void Web3Auth_logout_m7EC70DDD1A767A4C96B843F1818DCF272B353B57 (void);
// 0x00000161 System.Void Web3Auth::authorizeSession()
extern void Web3Auth_authorizeSession_mE985B0EE53FAD38A3E465DDE1700FD7DE36AA191 (void);
// 0x00000162 System.Void Web3Auth::sessionTimeOutAPI()
extern void Web3Auth_sessionTimeOutAPI_m0DDD2FE8A3EBFAC34C7ADC9E8FC2E870A3D67A4E (void);
// 0x00000163 System.Void Web3Auth::Update()
extern void Web3Auth_Update_mB48C59E94C6D37F673C4D198F4F55332FA4B0AEE (void);
// 0x00000164 System.Void Web3Auth::Enqueue(System.Action)
extern void Web3Auth_Enqueue_m4C359A8F1B99BB30B0C0FA6A90F6B95DC41D01CC (void);
// 0x00000165 System.Collections.IEnumerator Web3Auth::ActionWrapper(System.Action)
extern void Web3Auth_ActionWrapper_m5460219D24A1E7E0DFBA1310B1C61495499A91F5 (void);
// 0x00000166 System.Void Web3Auth::.ctor()
extern void Web3Auth__ctor_m15252B91E6D7B6F19BE73097E3EF0C91D4119C85 (void);
// 0x00000167 System.Void Web3Auth::.cctor()
extern void Web3Auth__cctor_mB1540CCD83E03E726A62895A7260A2ECF2916E6E (void);
// 0x00000168 System.Void Web3Auth::<setResultUrl>b__19_0()
extern void Web3Auth_U3CsetResultUrlU3Eb__19_0_m39B5C7983CE2C4008B92731B4492DA19D517F9AC (void);
// 0x00000169 System.Void Web3Auth::<setResultUrl>b__19_1()
extern void Web3Auth_U3CsetResultUrlU3Eb__19_1_mCC156DBD68B3FC00DC6AD0D943038C639C4E8656 (void);
// 0x0000016A System.Void Web3Auth::<setResultUrl>b__19_2()
extern void Web3Auth_U3CsetResultUrlU3Eb__19_2_mF562EE3777E78A34F614C6676AB3EDA4900E905D (void);
// 0x0000016B System.Void Web3Auth/<>c__DisplayClass23_0::.ctor()
extern void U3CU3Ec__DisplayClass23_0__ctor_mC4D4A7861E6C7BE3ECC8C83DF028CF9D9795E85F (void);
// 0x0000016C System.Void Web3Auth/<>c__DisplayClass23_0::<authorizeSession>b__0(StoreApiResponse)
extern void U3CU3Ec__DisplayClass23_0_U3CauthorizeSessionU3Eb__0_m20AC2950722D382AD395F0DC43AD863750BEED83 (void);
// 0x0000016D System.Void Web3Auth/<>c__DisplayClass23_0::<authorizeSession>b__1()
extern void U3CU3Ec__DisplayClass23_0_U3CauthorizeSessionU3Eb__1_m0BEF105054BE6294A277F64E69342965D09F9862 (void);
// 0x0000016E System.Void Web3Auth/<>c__DisplayClass23_0::<authorizeSession>b__2()
extern void U3CU3Ec__DisplayClass23_0_U3CauthorizeSessionU3Eb__2_mD48DF10F56386B21A4C094241B76B95DD62231CB (void);
// 0x0000016F System.Void Web3Auth/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_mD82D3208D898047DD00AF6999DBEB1990A5DF25D (void);
// 0x00000170 System.Void Web3Auth/<>c__DisplayClass24_0::<sessionTimeOutAPI>b__0(StoreApiResponse)
extern void U3CU3Ec__DisplayClass24_0_U3CsessionTimeOutAPIU3Eb__0_mABE1727C8B168D6E3A7F91D23EF6E3D3B6F3AE1B (void);
// 0x00000171 System.Void Web3Auth/<>c__DisplayClass24_0::<sessionTimeOutAPI>b__1(Newtonsoft.Json.Linq.JObject)
extern void U3CU3Ec__DisplayClass24_0_U3CsessionTimeOutAPIU3Eb__1_mE05FAF31FB3F7168F40D162DDEDE21D83AAA5C2A (void);
// 0x00000172 System.Void Web3Auth/<>c__DisplayClass24_0::<sessionTimeOutAPI>b__2()
extern void U3CU3Ec__DisplayClass24_0_U3CsessionTimeOutAPIU3Eb__2_mE081C7E6645F22A99C0B1C62502E327AD473B0A0 (void);
// 0x00000173 System.Void Web3Auth/<>c__DisplayClass26_0::.ctor()
extern void U3CU3Ec__DisplayClass26_0__ctor_mC5B35FFB7AA410AF6AC1CC0A2284A8F97DD0AD02 (void);
// 0x00000174 System.Void Web3Auth/<>c__DisplayClass26_0::<Enqueue>b__0()
extern void U3CU3Ec__DisplayClass26_0_U3CEnqueueU3Eb__0_m17A828F8EC60F93CE4AE64D0F3A9353F2ECC07FF (void);
// 0x00000175 System.Void Web3Auth/<ActionWrapper>d__27::.ctor(System.Int32)
extern void U3CActionWrapperU3Ed__27__ctor_mF8E5F9F2668E6C6588F49C7858D2F518CB0F0E61 (void);
// 0x00000176 System.Void Web3Auth/<ActionWrapper>d__27::System.IDisposable.Dispose()
extern void U3CActionWrapperU3Ed__27_System_IDisposable_Dispose_mF8919282F0E8C469CD9437353549A0FA8181ECA0 (void);
// 0x00000177 System.Boolean Web3Auth/<ActionWrapper>d__27::MoveNext()
extern void U3CActionWrapperU3Ed__27_MoveNext_m6DAC129F473E9316E452B9D4CC13BF60B7696CD5 (void);
// 0x00000178 System.Object Web3Auth/<ActionWrapper>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CActionWrapperU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m13314A3316F10C97769F18AA9C3C94A5918EF71D (void);
// 0x00000179 System.Void Web3Auth/<ActionWrapper>d__27::System.Collections.IEnumerator.Reset()
extern void U3CActionWrapperU3Ed__27_System_Collections_IEnumerator_Reset_m53A4FD15C72DFECFFCC51EB9CE9791302CF3B8EA (void);
// 0x0000017A System.Object Web3Auth/<ActionWrapper>d__27::System.Collections.IEnumerator.get_Current()
extern void U3CActionWrapperU3Ed__27_System_Collections_IEnumerator_get_Current_mF09DB4A5B870BA83F6EE6B3C4F4AE54F6B5DD67D (void);
// 0x0000017B System.Void UserCancelledException::.ctor()
extern void UserCancelledException__ctor_m0CFF14ABB7A0CD83F8EAB3D77E7F82068CA5594D (void);
// 0x0000017C System.Void UnKnownException::.ctor(System.String)
extern void UnKnownException__ctor_mBCC00999CAFB3B33A999BC28CB370FCCF9D6CE66 (void);
// 0x0000017D System.Int32 WebGLSupport.WebGLInputMobilePlugin::WebGLInputMobileRegister(System.Action`1<System.Int32>)
extern void WebGLInputMobilePlugin_WebGLInputMobileRegister_m79F352E8388C0495F92218A564C060E81CC21B8B (void);
// 0x0000017E System.Void WebGLSupport.WebGLInputMobilePlugin::WebGLInputMobileOnFocusOut(System.Int32,System.Action`1<System.Int32>)
extern void WebGLInputMobilePlugin_WebGLInputMobileOnFocusOut_m985EC71B7BABFBB225189C26159A04809B170995 (void);
// 0x0000017F System.Void WebGLSupport.WebGLInputMobilePlugin::.ctor()
extern void WebGLInputMobilePlugin__ctor_m163F1CAB8968930FFE344890F51CA76863DA222C (void);
// 0x00000180 System.Void WebGLSupport.WebGLInputMobile::Awake()
extern void WebGLInputMobile_Awake_m6464CF07E9B9A8B1F2DEA7C058DB243A8010B532 (void);
// 0x00000181 System.Void WebGLSupport.WebGLInputMobile::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern void WebGLInputMobile_OnPointerDown_m64CB17BE39FBAABEF12E52B1E210D4E1DF6CD535 (void);
// 0x00000182 System.Void WebGLSupport.WebGLInputMobile::OnTouchEnd(System.Int32)
extern void WebGLInputMobile_OnTouchEnd_mA93BC33B84197B228324BF845083BD9773C98FE7 (void);
// 0x00000183 System.Collections.IEnumerator WebGLSupport.WebGLInputMobile::RegisterOnFocusOut(System.Int32)
extern void WebGLInputMobile_RegisterOnFocusOut_m697C0181EFE313C4CD16AAD1549736FB2231DFD7 (void);
// 0x00000184 System.Void WebGLSupport.WebGLInputMobile::OnFocusOut(System.Int32)
extern void WebGLInputMobile_OnFocusOut_m738467287A0F65FB47CBCD9E0A89DA7E9F47C47F (void);
// 0x00000185 System.Collections.IEnumerator WebGLSupport.WebGLInputMobile::ExecFocusOut(System.Int32)
extern void WebGLInputMobile_ExecFocusOut_mEA99D0F430E536AF12F50C05BB451A7886B6717B (void);
// 0x00000186 System.Void WebGLSupport.WebGLInputMobile::.ctor()
extern void WebGLInputMobile__ctor_m3325A035D098D0C34996AB53A667D79E1D4F7DBC (void);
// 0x00000187 System.Void WebGLSupport.WebGLInputMobile::.cctor()
extern void WebGLInputMobile__cctor_m699B0A608055F9D0346EBB7F0C3F0E4E2BF40A59 (void);
// 0x00000188 System.Void WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::.ctor(System.Int32)
extern void U3CRegisterOnFocusOutU3Ed__5__ctor_m49FB20F2E86E6235EF4BC9EDF9A9337A2BF891E7 (void);
// 0x00000189 System.Void WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::System.IDisposable.Dispose()
extern void U3CRegisterOnFocusOutU3Ed__5_System_IDisposable_Dispose_m25F9C07BB94C04A217A49C3E10A32676D5A8C116 (void);
// 0x0000018A System.Boolean WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::MoveNext()
extern void U3CRegisterOnFocusOutU3Ed__5_MoveNext_m445D1F9129A4B01F3252CE11BEB2AA3D098AEA76 (void);
// 0x0000018B System.Object WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CRegisterOnFocusOutU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m56B80C139738E9BEBE452460040CCE1076F3AD64 (void);
// 0x0000018C System.Void WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::System.Collections.IEnumerator.Reset()
extern void U3CRegisterOnFocusOutU3Ed__5_System_Collections_IEnumerator_Reset_mB17DAD52A7A8CD7CFB0DB13F5303FBB74F03B150 (void);
// 0x0000018D System.Object WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::System.Collections.IEnumerator.get_Current()
extern void U3CRegisterOnFocusOutU3Ed__5_System_Collections_IEnumerator_get_Current_m97C1222340BA4B330406B7B362813C868C30FF20 (void);
// 0x0000018E System.Void WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::.ctor(System.Int32)
extern void U3CExecFocusOutU3Ed__7__ctor_mD008B09446E714FBC21C1E00ABE3D4084A6D6480 (void);
// 0x0000018F System.Void WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::System.IDisposable.Dispose()
extern void U3CExecFocusOutU3Ed__7_System_IDisposable_Dispose_m1E420ED2CA74F2FCFE3F1E5270F1F7CD3B2FCE09 (void);
// 0x00000190 System.Boolean WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::MoveNext()
extern void U3CExecFocusOutU3Ed__7_MoveNext_m697FC926BF8D0DEEA7DC3009454D32BC6FBE7A18 (void);
// 0x00000191 System.Object WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CExecFocusOutU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m609559A44E4BB630C63C4F20D56958AD162F5D8A (void);
// 0x00000192 System.Void WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::System.Collections.IEnumerator.Reset()
extern void U3CExecFocusOutU3Ed__7_System_Collections_IEnumerator_Reset_m67DC72CC4430E06C989FC08C319D65C2857A43AD (void);
// 0x00000193 System.Object WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::System.Collections.IEnumerator.get_Current()
extern void U3CExecFocusOutU3Ed__7_System_Collections_IEnumerator_get_Current_m717C3EB6D3A3080BDE765089834E9DBFED55D367 (void);
// 0x00000194 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputInit()
extern void WebGLInputPlugin_WebGLInputInit_m11E3589EAF93DB31FAFE779A2C9D2925A9A91A6F (void);
// 0x00000195 System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputCreate(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern void WebGLInputPlugin_WebGLInputCreate_m746DD59EB7BEA71E65D865878A45D10A507929E3 (void);
// 0x00000196 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputEnterSubmit(System.Int32,System.Boolean)
extern void WebGLInputPlugin_WebGLInputEnterSubmit_m27B76DD3640B3C8D52E601D8C798F2E3C90E6044 (void);
// 0x00000197 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputTab(System.Int32,System.Action`2<System.Int32,System.Int32>)
extern void WebGLInputPlugin_WebGLInputTab_m20EBAC5FAB0884BCE57106F201557AA7FCB3127F (void);
// 0x00000198 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputFocus(System.Int32)
extern void WebGLInputPlugin_WebGLInputFocus_m188075249363DF64437E93BCB7011F306C95F3D3 (void);
// 0x00000199 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnFocus(System.Int32,System.Action`1<System.Int32>)
extern void WebGLInputPlugin_WebGLInputOnFocus_m2692B91D9A6A5E300E8EE174812B331551C31C8E (void);
// 0x0000019A System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnBlur(System.Int32,System.Action`1<System.Int32>)
extern void WebGLInputPlugin_WebGLInputOnBlur_mA7643E022BA1D92EDCAE42B82777F43B45B94D0E (void);
// 0x0000019B System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnValueChange(System.Int32,System.Action`2<System.Int32,System.String>)
extern void WebGLInputPlugin_WebGLInputOnValueChange_m0DCA9A890D212A2CB5C114A6AD5CE5F142DFECE5 (void);
// 0x0000019C System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnEditEnd(System.Int32,System.Action`2<System.Int32,System.String>)
extern void WebGLInputPlugin_WebGLInputOnEditEnd_m2042A3B206645A40E639677607AA96D113BAFB3E (void);
// 0x0000019D System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputSelectionStart(System.Int32)
extern void WebGLInputPlugin_WebGLInputSelectionStart_m29E14E7BD7633302296C5CACA783D0AD48BEC4B9 (void);
// 0x0000019E System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputSelectionEnd(System.Int32)
extern void WebGLInputPlugin_WebGLInputSelectionEnd_mC732BE407F33DF1E3120E61448717FF77CD62EA0 (void);
// 0x0000019F System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputSelectionDirection(System.Int32)
extern void WebGLInputPlugin_WebGLInputSelectionDirection_m2E359AEE64C9F388FFC3512194B12D29A2CED4DD (void);
// 0x000001A0 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputSetSelectionRange(System.Int32,System.Int32,System.Int32)
extern void WebGLInputPlugin_WebGLInputSetSelectionRange_mC59493011984976120C0A3AD535721B60D5EC365 (void);
// 0x000001A1 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputMaxLength(System.Int32,System.Int32)
extern void WebGLInputPlugin_WebGLInputMaxLength_m9C93EEB91C34970CE5A18685795C50EC72E07445 (void);
// 0x000001A2 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputText(System.Int32,System.String)
extern void WebGLInputPlugin_WebGLInputText_mB9672B4EDE70472818658C3FE33BFD03F8A52478 (void);
// 0x000001A3 System.Boolean WebGLSupport.WebGLInputPlugin::WebGLInputIsFocus(System.Int32)
extern void WebGLInputPlugin_WebGLInputIsFocus_mE876AE821EDE3C824F9BDF8E8F51E7A6176E44FC (void);
// 0x000001A4 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputDelete(System.Int32)
extern void WebGLInputPlugin_WebGLInputDelete_m8A48356215405A65CFC9834A8B419CF264EFB9C1 (void);
// 0x000001A5 System.Void WebGLSupport.WebGLInputPlugin::WebGLInputForceBlur(System.Int32)
extern void WebGLInputPlugin_WebGLInputForceBlur_m8665C6719F80411FFCFEFFA09D6E755236047A06 (void);
// 0x000001A6 System.Void WebGLSupport.WebGLInputPlugin::.ctor()
extern void WebGLInputPlugin__ctor_m5E7C4D525EC7981177E039CBAE10A52FE4F922F5 (void);
// 0x000001A7 System.String WebGLSupport.WebGLInput::get_CanvasId()
extern void WebGLInput_get_CanvasId_mB541B0AC12E27B2EAF4345A3AB266DDCC12FE82E (void);
// 0x000001A8 System.Void WebGLSupport.WebGLInput::set_CanvasId(System.String)
extern void WebGLInput_set_CanvasId_m27A44AC456B182203EB1F06324BD0532BA55F682 (void);
// 0x000001A9 System.Void WebGLSupport.WebGLInput::.cctor()
extern void WebGLInput__cctor_m983D0D9A5EFCA2E63A6D451D7F9733C1B9585055 (void);
// 0x000001AA System.Int32 WebGLSupport.WebGLInput::get_Id()
extern void WebGLInput_get_Id_m8FD52639A53A9DB0CDCFC9BF31F8DC8B6C0883BE (void);
// 0x000001AB WebGLSupport.IInputField WebGLSupport.WebGLInput::Setup()
extern void WebGLInput_Setup_mEE70F874E9A9376C25C8D47C92F9B014CD32A22E (void);
// 0x000001AC System.Void WebGLSupport.WebGLInput::Awake()
extern void WebGLInput_Awake_mC2703EB0612C2026ABCCB8D12097EA2BF6F1DDC0 (void);
// 0x000001AD UnityEngine.RectInt WebGLSupport.WebGLInput::GetElemetRect()
extern void WebGLInput_GetElemetRect_mC1BA321333DDF36404F5DB783468E735CC9296C4 (void);
// 0x000001AE System.Void WebGLSupport.WebGLInput::OnSelect()
extern void WebGLInput_OnSelect_m2501A996790CD595512E511E03FF8E0ECED38704 (void);
// 0x000001AF System.Void WebGLSupport.WebGLInput::OnWindowBlur()
extern void WebGLInput_OnWindowBlur_m7FE0D287BEC3C71A79B7BEA6C101CACF80A127BE (void);
// 0x000001B0 UnityEngine.Rect WebGLSupport.WebGLInput::GetScreenCoordinates(UnityEngine.RectTransform)
extern void WebGLInput_GetScreenCoordinates_mA95B21A7F596D2B46169B26FD9D04E0ADE2863F6 (void);
// 0x000001B1 System.Void WebGLSupport.WebGLInput::DeactivateInputField()
extern void WebGLInput_DeactivateInputField_mD20A5FF891DBC6AF9DB3905F16253236A6CC6FF8 (void);
// 0x000001B2 System.Void WebGLSupport.WebGLInput::OnFocus(System.Int32)
extern void WebGLInput_OnFocus_mEAFF02CB2715232B724DBF02517417F85CCF66B4 (void);
// 0x000001B3 System.Void WebGLSupport.WebGLInput::OnBlur(System.Int32)
extern void WebGLInput_OnBlur_m056127CBA134428CD5D30B5D0D567BBAD4244400 (void);
// 0x000001B4 System.Collections.IEnumerator WebGLSupport.WebGLInput::Blur(System.Int32)
extern void WebGLInput_Blur_m6FA4AA0BCCF4DF1C2DF9B7892086CF0E4ACCD389 (void);
// 0x000001B5 System.Void WebGLSupport.WebGLInput::OnValueChange(System.Int32,System.String)
extern void WebGLInput_OnValueChange_m8FC2093C4282D531764042FF66ADBB6526218B39 (void);
// 0x000001B6 System.Void WebGLSupport.WebGLInput::OnEditEnd(System.Int32,System.String)
extern void WebGLInput_OnEditEnd_mD1ADCC675C43BF48128C84734354BB25DCCB6EDB (void);
// 0x000001B7 System.Void WebGLSupport.WebGLInput::OnTab(System.Int32,System.Int32)
extern void WebGLInput_OnTab_m9D1182F054C00912D28B631BA1F798B1BD3D2788 (void);
// 0x000001B8 System.Void WebGLSupport.WebGLInput::Update()
extern void WebGLInput_Update_m9E94E31967B7F3F2BCF1BF3F13DB83D9E913C22A (void);
// 0x000001B9 System.Void WebGLSupport.WebGLInput::OnDestroy()
extern void WebGLInput_OnDestroy_m2C03015DD6619F6835140D8D3E047AFE0381D756 (void);
// 0x000001BA System.Void WebGLSupport.WebGLInput::OnEnable()
extern void WebGLInput_OnEnable_mE483787299E6E11EEDF8DDE4D1A4BEC352252B81 (void);
// 0x000001BB System.Void WebGLSupport.WebGLInput::OnDisable()
extern void WebGLInput_OnDisable_m0A6B4FF88B34EF05DDDCE5C71534A73C219E94C5 (void);
// 0x000001BC System.Int32 WebGLSupport.WebGLInput::CompareTo(WebGLSupport.WebGLInput)
extern void WebGLInput_CompareTo_mABC11AA70E31E68012F61AD2AEE128C3C1B0A654 (void);
// 0x000001BD System.Void WebGLSupport.WebGLInput::CheckOutFocus()
extern void WebGLInput_CheckOutFocus_m878C304E5815A7387CFCA617A8C1E8D862F775A3 (void);
// 0x000001BE System.Void WebGLSupport.WebGLInput::.ctor()
extern void WebGLInput__ctor_m7D749FA5DED7D95529A03EAB4532F7EFDF400C4C (void);
// 0x000001BF System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::Add(WebGLSupport.WebGLInput)
extern void WebGLInputTabFocus_Add_mEECB0EC5C006C2D2D8BDFCEADB58AA51FEE37745 (void);
// 0x000001C0 System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::Remove(WebGLSupport.WebGLInput)
extern void WebGLInputTabFocus_Remove_mB969B93318E953A3554C53A2EB3ADE2A212A39DF (void);
// 0x000001C1 System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::OnTab(WebGLSupport.WebGLInput,System.Int32)
extern void WebGLInputTabFocus_OnTab_m6A5BC1CD11614EE556767ECCBC9F92092DD223F8 (void);
// 0x000001C2 System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::.cctor()
extern void WebGLInputTabFocus__cctor_mB169E6E6D631DAFF29087AFA112807D6D64140E0 (void);
// 0x000001C3 System.Void WebGLSupport.WebGLInput/<Blur>d__21::.ctor(System.Int32)
extern void U3CBlurU3Ed__21__ctor_m96CC10B7C3F3A245C410A4365D20F6AF0DFC8D80 (void);
// 0x000001C4 System.Void WebGLSupport.WebGLInput/<Blur>d__21::System.IDisposable.Dispose()
extern void U3CBlurU3Ed__21_System_IDisposable_Dispose_mBC6A4B22FF50294136AC7B70FF6B8420B4983FAB (void);
// 0x000001C5 System.Boolean WebGLSupport.WebGLInput/<Blur>d__21::MoveNext()
extern void U3CBlurU3Ed__21_MoveNext_m95C7A268C2FFE4111985F4A647ACD73A357D2CE8 (void);
// 0x000001C6 System.Object WebGLSupport.WebGLInput/<Blur>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CBlurU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m577A487FF60CEFFE5AEFFD4DC523D0F2D9DAFC65 (void);
// 0x000001C7 System.Void WebGLSupport.WebGLInput/<Blur>d__21::System.Collections.IEnumerator.Reset()
extern void U3CBlurU3Ed__21_System_Collections_IEnumerator_Reset_m0A25592619505B8F99027D6959CFD4334D965557 (void);
// 0x000001C8 System.Object WebGLSupport.WebGLInput/<Blur>d__21::System.Collections.IEnumerator.get_Current()
extern void U3CBlurU3Ed__21_System_Collections_IEnumerator_get_Current_mEDF84A3CBA2C5907837E898369CD1466002C6A80 (void);
// 0x000001C9 WebGLSupport.ContentType WebGLSupport.IInputField::get_contentType()
// 0x000001CA WebGLSupport.LineType WebGLSupport.IInputField::get_lineType()
// 0x000001CB System.Int32 WebGLSupport.IInputField::get_fontSize()
// 0x000001CC System.String WebGLSupport.IInputField::get_text()
// 0x000001CD System.Void WebGLSupport.IInputField::set_text(System.String)
// 0x000001CE System.String WebGLSupport.IInputField::get_placeholder()
// 0x000001CF System.Int32 WebGLSupport.IInputField::get_characterLimit()
// 0x000001D0 System.Int32 WebGLSupport.IInputField::get_caretPosition()
// 0x000001D1 System.Boolean WebGLSupport.IInputField::get_isFocused()
// 0x000001D2 System.Int32 WebGLSupport.IInputField::get_selectionFocusPosition()
// 0x000001D3 System.Void WebGLSupport.IInputField::set_selectionFocusPosition(System.Int32)
// 0x000001D4 System.Int32 WebGLSupport.IInputField::get_selectionAnchorPosition()
// 0x000001D5 System.Void WebGLSupport.IInputField::set_selectionAnchorPosition(System.Int32)
// 0x000001D6 System.Boolean WebGLSupport.IInputField::get_ReadOnly()
// 0x000001D7 System.Boolean WebGLSupport.IInputField::get_OnFocusSelectAll()
// 0x000001D8 UnityEngine.RectTransform WebGLSupport.IInputField::RectTransform()
// 0x000001D9 System.Void WebGLSupport.IInputField::ActivateInputField()
// 0x000001DA System.Void WebGLSupport.IInputField::DeactivateInputField()
// 0x000001DB System.Void WebGLSupport.IInputField::Rebuild()
// 0x000001DC System.Boolean WebGLSupport.WrappedInputField::get_ReadOnly()
extern void WrappedInputField_get_ReadOnly_m428F23DCBC9E36A30C204018EDEAAF99AC782ABB (void);
// 0x000001DD System.String WebGLSupport.WrappedInputField::get_text()
extern void WrappedInputField_get_text_m1983DF85C628EDC2B247E256BACFD37F04297085 (void);
// 0x000001DE System.Void WebGLSupport.WrappedInputField::set_text(System.String)
extern void WrappedInputField_set_text_m05639FF0C477EE01BDF884A75B941D26DE5AF5A2 (void);
// 0x000001DF System.String WebGLSupport.WrappedInputField::get_placeholder()
extern void WrappedInputField_get_placeholder_mA9068EA5816B9A85C9170A893BBD5F60B025C9E8 (void);
// 0x000001E0 System.Int32 WebGLSupport.WrappedInputField::get_fontSize()
extern void WrappedInputField_get_fontSize_m16B03C1A1D743FD5D870D22E5C11E83416D5C036 (void);
// 0x000001E1 WebGLSupport.ContentType WebGLSupport.WrappedInputField::get_contentType()
extern void WrappedInputField_get_contentType_m06770CF12946A355E27814130ECFEDC10222D3A7 (void);
// 0x000001E2 WebGLSupport.LineType WebGLSupport.WrappedInputField::get_lineType()
extern void WrappedInputField_get_lineType_mA45DACE8F5D5D6EEF1545160D7EFCAE18E5F5E7A (void);
// 0x000001E3 System.Int32 WebGLSupport.WrappedInputField::get_characterLimit()
extern void WrappedInputField_get_characterLimit_m6E690B786BAE1B09A54C477DF7590E712EB28B03 (void);
// 0x000001E4 System.Int32 WebGLSupport.WrappedInputField::get_caretPosition()
extern void WrappedInputField_get_caretPosition_m0442E4B94A45213ED0C14E329ED5B48D9B4FCACB (void);
// 0x000001E5 System.Boolean WebGLSupport.WrappedInputField::get_isFocused()
extern void WrappedInputField_get_isFocused_m925F5D979144A279B38F8BBF72A19400E0E12A9B (void);
// 0x000001E6 System.Int32 WebGLSupport.WrappedInputField::get_selectionFocusPosition()
extern void WrappedInputField_get_selectionFocusPosition_mB3E56DCF3A23BAFB780395DC4074E555C9BC7862 (void);
// 0x000001E7 System.Void WebGLSupport.WrappedInputField::set_selectionFocusPosition(System.Int32)
extern void WrappedInputField_set_selectionFocusPosition_m007D75E5FC9EFC925D43366AC7CC90F5BC2F520F (void);
// 0x000001E8 System.Int32 WebGLSupport.WrappedInputField::get_selectionAnchorPosition()
extern void WrappedInputField_get_selectionAnchorPosition_m5732B37A50B1CE0007D1DBDE264626EBD49CF672 (void);
// 0x000001E9 System.Void WebGLSupport.WrappedInputField::set_selectionAnchorPosition(System.Int32)
extern void WrappedInputField_set_selectionAnchorPosition_mD93CDEA00A2917423476CAFAD234F2C8A2513239 (void);
// 0x000001EA System.Boolean WebGLSupport.WrappedInputField::get_OnFocusSelectAll()
extern void WrappedInputField_get_OnFocusSelectAll_m4CF7B3387AC1F9DB549EF8FAD137D4EC0DC4157B (void);
// 0x000001EB System.Void WebGLSupport.WrappedInputField::.ctor(UnityEngine.UI.InputField)
extern void WrappedInputField__ctor_m2B946563DAB6C458A6D0737ACEA38353D808187D (void);
// 0x000001EC UnityEngine.RectTransform WebGLSupport.WrappedInputField::RectTransform()
extern void WrappedInputField_RectTransform_mA42FF05237958C8C636185CBD29A2D12437985EE (void);
// 0x000001ED System.Void WebGLSupport.WrappedInputField::ActivateInputField()
extern void WrappedInputField_ActivateInputField_mD22DD8839583C0B252D0C4AC388E2436F360D8CB (void);
// 0x000001EE System.Void WebGLSupport.WrappedInputField::DeactivateInputField()
extern void WrappedInputField_DeactivateInputField_mABA9A5F0D9EA724AD05FDA607AFA96522A0CBBDA (void);
// 0x000001EF System.Void WebGLSupport.WrappedInputField::Rebuild()
extern void WrappedInputField_Rebuild_mCAE68B915D4FB2F69C946C012EB1B92E8C134534 (void);
// 0x000001F0 System.Boolean WebGLSupport.WrappedTMPInputField::get_ReadOnly()
extern void WrappedTMPInputField_get_ReadOnly_mB06842447B3E03A0801B1C52A5A2B21385BE6091 (void);
// 0x000001F1 System.String WebGLSupport.WrappedTMPInputField::get_text()
extern void WrappedTMPInputField_get_text_m8EB762920F69B57AF10D9E78198A273CC0A8FC63 (void);
// 0x000001F2 System.Void WebGLSupport.WrappedTMPInputField::set_text(System.String)
extern void WrappedTMPInputField_set_text_mEA1A3B7E81E123B240A949BB414A673A9C34C7C3 (void);
// 0x000001F3 System.String WebGLSupport.WrappedTMPInputField::FixContentTypeByInputField(System.String)
extern void WrappedTMPInputField_FixContentTypeByInputField_mE5B8172CED6414B35A23DBA5A29BDFE5CDC74C4E (void);
// 0x000001F4 System.String WebGLSupport.WrappedTMPInputField::get_placeholder()
extern void WrappedTMPInputField_get_placeholder_m61AF641D161DB6B7C2DAE66A528E6FC98DF3FDED (void);
// 0x000001F5 System.Int32 WebGLSupport.WrappedTMPInputField::get_fontSize()
extern void WrappedTMPInputField_get_fontSize_m23BC3CEC22F12EB6AAD766CBC09E6F4A2ECD14DA (void);
// 0x000001F6 WebGLSupport.ContentType WebGLSupport.WrappedTMPInputField::get_contentType()
extern void WrappedTMPInputField_get_contentType_m00FE1A9E02562196F113635C1A921D4E8E5D952F (void);
// 0x000001F7 WebGLSupport.LineType WebGLSupport.WrappedTMPInputField::get_lineType()
extern void WrappedTMPInputField_get_lineType_mE48EAC52B1DFE718C9AB52AFE715BE10260361D0 (void);
// 0x000001F8 System.Int32 WebGLSupport.WrappedTMPInputField::get_characterLimit()
extern void WrappedTMPInputField_get_characterLimit_mC1A286835AA6914B16186F413BD03134B1BE0436 (void);
// 0x000001F9 System.Int32 WebGLSupport.WrappedTMPInputField::get_caretPosition()
extern void WrappedTMPInputField_get_caretPosition_m74D892B07E28EC0AF9201201A20ECA32AB690A63 (void);
// 0x000001FA System.Boolean WebGLSupport.WrappedTMPInputField::get_isFocused()
extern void WrappedTMPInputField_get_isFocused_mBB79F8A9F84DD846C3178E92E9F67A3FAD6DF925 (void);
// 0x000001FB System.Int32 WebGLSupport.WrappedTMPInputField::get_selectionFocusPosition()
extern void WrappedTMPInputField_get_selectionFocusPosition_m309580C258000773C2EA99C0E2592BC7E68108BB (void);
// 0x000001FC System.Void WebGLSupport.WrappedTMPInputField::set_selectionFocusPosition(System.Int32)
extern void WrappedTMPInputField_set_selectionFocusPosition_m172B858C30425DAAD1F128A8DF07FBEB7276E03B (void);
// 0x000001FD System.Int32 WebGLSupport.WrappedTMPInputField::get_selectionAnchorPosition()
extern void WrappedTMPInputField_get_selectionAnchorPosition_m6F635E0813809FFA8C0265C0F7671C982E3FE215 (void);
// 0x000001FE System.Void WebGLSupport.WrappedTMPInputField::set_selectionAnchorPosition(System.Int32)
extern void WrappedTMPInputField_set_selectionAnchorPosition_m2FB5C4A23633EB75DFFC0584A9ACA9485301216C (void);
// 0x000001FF System.Boolean WebGLSupport.WrappedTMPInputField::get_OnFocusSelectAll()
extern void WrappedTMPInputField_get_OnFocusSelectAll_m310978B0DDA93064749EE745F3D3A7287A96E7D6 (void);
// 0x00000200 System.Void WebGLSupport.WrappedTMPInputField::.ctor(TMPro.TMP_InputField)
extern void WrappedTMPInputField__ctor_m8F5E644E417C461955F73B4AB5556F98BCCC8657 (void);
// 0x00000201 UnityEngine.RectTransform WebGLSupport.WrappedTMPInputField::RectTransform()
extern void WrappedTMPInputField_RectTransform_m4857FF0B1AA784EDD3EDECFF9C5AEFAC63048429 (void);
// 0x00000202 System.Void WebGLSupport.WrappedTMPInputField::ActivateInputField()
extern void WrappedTMPInputField_ActivateInputField_m63F1EF6D6817490014FDF46F0E593B954E7BC12E (void);
// 0x00000203 System.Void WebGLSupport.WrappedTMPInputField::DeactivateInputField()
extern void WrappedTMPInputField_DeactivateInputField_m37015E6942E12586F31655425507B67B7DBE8759 (void);
// 0x00000204 System.Void WebGLSupport.WrappedTMPInputField::Rebuild()
extern void WrappedTMPInputField_Rebuild_m0FEB6D41142881CBF63A107E85792F457E5D932F (void);
// 0x00000205 System.Boolean WebGLSupport.WrappedTMPInputField::rectOverlaps(UnityEngine.RectTransform,UnityEngine.RectTransform)
extern void WrappedTMPInputField_rectOverlaps_mF6994651D544841E487489660B816477AE77F5E0 (void);
// 0x00000206 System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowInit()
extern void WebGLWindowPlugin_WebGLWindowInit_mD5F5FA743488693577E1C46667A6D4D9B666E6D3 (void);
// 0x00000207 System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowOnFocus(System.Action)
extern void WebGLWindowPlugin_WebGLWindowOnFocus_m9442B500174D9E18E9BC09755B16798F4F17FEAF (void);
// 0x00000208 System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowOnBlur(System.Action)
extern void WebGLWindowPlugin_WebGLWindowOnBlur_m8B642358B3D2E80F008AFA18F31CE04B4658587B (void);
// 0x00000209 System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowOnResize(System.Action)
extern void WebGLWindowPlugin_WebGLWindowOnResize_mC5F5E08082E0EE9AFD3FF7E555BCEC39DF1C728F (void);
// 0x0000020A System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowInjectFullscreen()
extern void WebGLWindowPlugin_WebGLWindowInjectFullscreen_mFC44BE99F4C870D576B3798BF7582D82C5EC9BE0 (void);
// 0x0000020B System.Void WebGLSupport.WebGLWindow::.cctor()
extern void WebGLWindow__cctor_mD6D063FD4C42BB7305BA8F3D460AD0E9C9B04032 (void);
// 0x0000020C System.Boolean WebGLSupport.WebGLWindow::get_Focus()
extern void WebGLWindow_get_Focus_m894316869DC5C4E813F3B167AA4F2FD19B988C7A (void);
// 0x0000020D System.Void WebGLSupport.WebGLWindow::set_Focus(System.Boolean)
extern void WebGLWindow_set_Focus_mDB67CFFBB4E4FC1B53C4EA7786B43B1D41DCEF0F (void);
// 0x0000020E System.Void WebGLSupport.WebGLWindow::add_OnFocusEvent(System.Action)
extern void WebGLWindow_add_OnFocusEvent_mEB4B84D9D2CBEB713DD41B6BD5B999A787685CAF (void);
// 0x0000020F System.Void WebGLSupport.WebGLWindow::remove_OnFocusEvent(System.Action)
extern void WebGLWindow_remove_OnFocusEvent_mA0BCADA00CFEFAF2DB534CB7B56E3B4C44287D96 (void);
// 0x00000210 System.Void WebGLSupport.WebGLWindow::add_OnBlurEvent(System.Action)
extern void WebGLWindow_add_OnBlurEvent_mF314D905439790B708240F19A3232F3A1ACE08A0 (void);
// 0x00000211 System.Void WebGLSupport.WebGLWindow::remove_OnBlurEvent(System.Action)
extern void WebGLWindow_remove_OnBlurEvent_m5D47004D38D5EF44EFC946DCC65468BACC4D2880 (void);
// 0x00000212 System.Void WebGLSupport.WebGLWindow::add_OnResizeEvent(System.Action)
extern void WebGLWindow_add_OnResizeEvent_m706090D11DF1E6B94211AB492B08D1635855A9DD (void);
// 0x00000213 System.Void WebGLSupport.WebGLWindow::remove_OnResizeEvent(System.Action)
extern void WebGLWindow_remove_OnResizeEvent_m09D49FF0B6B215CFF896CA7EFCF10F6FE29B9914 (void);
// 0x00000214 System.Void WebGLSupport.WebGLWindow::Init()
extern void WebGLWindow_Init_mBDC66BECBD8FFEB0465EBEDF58D1BB1F160AAF3D (void);
// 0x00000215 System.Void WebGLSupport.WebGLWindow::OnWindowFocus()
extern void WebGLWindow_OnWindowFocus_m175353D303C2E8EB07A2679015D269E0F3623C3D (void);
// 0x00000216 System.Void WebGLSupport.WebGLWindow::OnWindowBlur()
extern void WebGLWindow_OnWindowBlur_m0CF09BA6693BCDA3D073A368AB81A46122449FF4 (void);
// 0x00000217 System.Void WebGLSupport.WebGLWindow::OnWindowResize()
extern void WebGLWindow_OnWindowResize_m386294E41E1A89D8BB052E42ED30972194B8356C (void);
// 0x00000218 System.Void WebGLSupport.WebGLWindow::RuntimeInitializeOnLoadMethod()
extern void WebGLWindow_RuntimeInitializeOnLoadMethod_mFF4BD1C75805AA70FE8476EDEA4ACBF8990C450A (void);
// 0x00000219 System.Void WebGLSupport.WebGLWindow/<>c::.cctor()
extern void U3CU3Ec__cctor_mBDAF04B08BE41CD35C3AA8527E0454027333E236 (void);
// 0x0000021A System.Void WebGLSupport.WebGLWindow/<>c::.ctor()
extern void U3CU3Ec__ctor_m2E40A16646D4972F915BC91A028BD57A17F2A2FD (void);
// 0x0000021B System.Void WebGLSupport.WebGLWindow/<>c::<.cctor>b__0_0()
extern void U3CU3Ec_U3C_cctorU3Eb__0_0_mA834CD175B5C7F0A819FC27C2F1CA8B939CB4443 (void);
// 0x0000021C System.Void WebGLSupport.WebGLWindow/<>c::<.cctor>b__0_1()
extern void U3CU3Ec_U3C_cctorU3Eb__0_1_m9AC71766017F7002DE0CA1112BDFBA4135C2E8B8 (void);
// 0x0000021D System.Void WebGLSupport.WebGLWindow/<>c::<.cctor>b__0_2()
extern void U3CU3Ec_U3C_cctorU3Eb__0_2_mC9844ED32160A6274225CBB20AC765E202E53CC8 (void);
// 0x0000021E System.Void WebGLSupport.Detail.RebuildChecker::.ctor(WebGLSupport.IInputField)
extern void RebuildChecker__ctor_m8AC1AAB23BC3D1220610838BEBA8BED02A54CA9A (void);
// 0x0000021F System.Boolean WebGLSupport.Detail.RebuildChecker::NeedRebuild(System.Boolean)
extern void RebuildChecker_NeedRebuild_mCBB5465AEB51A0559BAF7B4A5A25C843D027AA63 (void);
// 0x00000220 System.Void codebase.utility.Clipboard::Copy(System.String)
extern void Clipboard_Copy_mED1E74A99DFEF4ACFD652DEFFC62B9664374F3C1 (void);
// 0x00000221 System.Byte[] Merkator.BitCoin.Base58Encoding::AddCheckSum(System.Byte[])
extern void Base58Encoding_AddCheckSum_mAACF51264A8660C9AB635BBA4E54E6E8A4063B7B (void);
// 0x00000222 System.Byte[] Merkator.BitCoin.Base58Encoding::VerifyAndRemoveCheckSum(System.Byte[])
extern void Base58Encoding_VerifyAndRemoveCheckSum_m20C2BA2CCB753F35D0FCE4664C1F29676255F50D (void);
// 0x00000223 System.String Merkator.BitCoin.Base58Encoding::Encode(System.Byte[])
extern void Base58Encoding_Encode_m5C58E4749FE9E801743DB17A520E975BE8876578 (void);
// 0x00000224 System.String Merkator.BitCoin.Base58Encoding::EncodeWithCheckSum(System.Byte[])
extern void Base58Encoding_EncodeWithCheckSum_m39AF1DD16D1765EBD85F983530A4D6608C34113C (void);
// 0x00000225 System.Byte[] Merkator.BitCoin.Base58Encoding::Decode(System.String)
extern void Base58Encoding_Decode_m1D4402B734182E7F62A3E7795E7856D75AD076FA (void);
// 0x00000226 System.Byte[] Merkator.BitCoin.Base58Encoding::DecodeWithCheckSum(System.String)
extern void Base58Encoding_DecodeWithCheckSum_m1BA6820908ADD5A572D7A6564277EB6DC6534A86 (void);
// 0x00000227 System.Byte[] Merkator.BitCoin.Base58Encoding::GetCheckSum(System.Byte[])
extern void Base58Encoding_GetCheckSum_m434B54BA58490F0251A0051BA9F7AC6DC420F7E8 (void);
// 0x00000228 System.Void Merkator.BitCoin.Base58Encoding/<>c::.cctor()
extern void U3CU3Ec__cctor_m39566B9A3242011881BA9B25314FB60E28CBD938 (void);
// 0x00000229 System.Void Merkator.BitCoin.Base58Encoding/<>c::.ctor()
extern void U3CU3Ec__ctor_m6A52DA16A0EFBD0B5B37AC7769AFD90148EBDF32 (void);
// 0x0000022A System.Numerics.BigInteger Merkator.BitCoin.Base58Encoding/<>c::<Encode>b__4_0(System.Numerics.BigInteger,System.Byte)
extern void U3CU3Ec_U3CEncodeU3Eb__4_0_m84A9D74001D0DCA47FD705B4E762165026F080A9 (void);
// 0x0000022B System.Boolean Merkator.BitCoin.Base58Encoding/<>c::<Decode>b__6_0(System.Char)
extern void U3CU3Ec_U3CDecodeU3Eb__6_0_mF12D53D897CA871076F8EB2CDE6AABFE9C779D0E (void);
// 0x0000022C System.Boolean Merkator.BitCoin.Base58Encoding/<>c::<Decode>b__6_1(System.Byte)
extern void U3CU3Ec_U3CDecodeU3Eb__6_1_mD660697A18C9CE0AE9B5B9886C40FACCF4C9F9EB (void);
// 0x0000022D T[] Merkator.Tools.ArrayHelpers::ConcatArrays(T[][])
// 0x0000022E T[] Merkator.Tools.ArrayHelpers::ConcatArrays(T[],T[])
// 0x0000022F T[] Merkator.Tools.ArrayHelpers::SubArray(T[],System.Int32,System.Int32)
// 0x00000230 T[] Merkator.Tools.ArrayHelpers::SubArray(T[],System.Int32)
// 0x00000231 System.Void Merkator.Tools.ArrayHelpers::.ctor()
extern void ArrayHelpers__ctor_m41FB4847AE5F2FA1031560016A2CA56FE3791B7B (void);
// 0x00000232 System.Void Merkator.Tools.ArrayHelpers/<>c__0`1::.cctor()
// 0x00000233 System.Void Merkator.Tools.ArrayHelpers/<>c__0`1::.ctor()
// 0x00000234 System.Int32 Merkator.Tools.ArrayHelpers/<>c__0`1::<ConcatArrays>b__0_0(T[])
// 0x00000235 Solana.Unity.SDK.AccountLayout Solana.Unity.SDK.AccountLayout::DeserializeAccountLayout(System.String)
extern void AccountLayout_DeserializeAccountLayout_m2FE8156C11D1FE9B8FF060B8FB415227FA7A3F25 (void);
// 0x00000236 System.Void Solana.Unity.SDK.AccountLayout::.ctor()
extern void AccountLayout__ctor_m1055DED5F21C94EBBE9CB5E83508210C26068B11 (void);
// 0x00000237 System.Void Solana.Unity.SDK.SignaturePubkeyPair::.ctor()
extern void SignaturePubkeyPair__ctor_m7F0D6B76C2B75B37B6FFBFF9FB589C1C6FAD95EE (void);
// 0x00000238 System.Void Solana.Unity.SDK.TransactionCtorFields::.ctor()
extern void TransactionCtorFields__ctor_m2170ABB04CA21499FD2109A70ACAFBA5DABB98AD (void);
// 0x00000239 System.Void Solana.Unity.SDK.CompiledInstruction::.ctor()
extern void CompiledInstruction__ctor_m959EE4AFB503850E97EA4AEEC78C819CF6EB321F (void);
// 0x0000023A System.Void Solana.Unity.SDK.InGameWallet::.ctor(Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void InGameWallet__ctor_mE85DACDA734506636373D51F4DCEE78E4EF7F6D9 (void);
// 0x0000023B System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.InGameWallet::_Login(System.String)
extern void InGameWallet__Login_mF66B6CE424B07A20C9F84523315FE98BCF5F8892 (void);
// 0x0000023C System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.InGameWallet::_CreateAccount(System.String,System.String)
extern void InGameWallet__CreateAccount_mDEE532F68A5B90855061E37E9E56E4C56D45EDA1 (void);
// 0x0000023D System.Collections.IEnumerator Solana.Unity.SDK.InGameWallet::SaveEncryptedAccount(System.String,System.String,Solana.Unity.Wallet.PublicKey)
extern void InGameWallet_SaveEncryptedAccount_m89F18D25BB07089133A26E7DC5AFF530AE0D849E (void);
// 0x0000023E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.InGameWallet::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void InGameWallet__SignTransaction_mA57F1C92A53825E00BC3BC277A66FBEA81A05B96 (void);
// 0x0000023F System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.InGameWallet::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void InGameWallet__SignAllTransactions_mA7B323B6046594B4C78B044DC154848920DED5BE (void);
// 0x00000240 System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.InGameWallet::SignMessage(System.Byte[])
extern void InGameWallet_SignMessage_m6C41E822DBFA582027F94D00D780A3D241681BA4 (void);
// 0x00000241 Solana.Unity.Wallet.Account Solana.Unity.SDK.InGameWallet::FromSecret(System.String)
extern void InGameWallet_FromSecret_m8CF73872685F7CB7986BE09DB95B4C0F5EEC4FE9 (void);
// 0x00000242 Solana.Unity.Wallet.Account Solana.Unity.SDK.InGameWallet::FromMnemonic(System.String)
extern void InGameWallet_FromMnemonic_mF9A564AA131468276BDDFB6A5750AAE2192A3509 (void);
// 0x00000243 Solana.Unity.Wallet.Account Solana.Unity.SDK.InGameWallet::FromSecretKey(System.String)
extern void InGameWallet_FromSecretKey_mE40309CCC80B5AA1D0794AFD1B9517B252A5A7A8 (void);
// 0x00000244 Solana.Unity.Wallet.Account Solana.Unity.SDK.InGameWallet::FromByteArray(System.Byte[])
extern void InGameWallet_FromByteArray_mBFDC359A58C822B0F61AD4B34A8280266E3FD2C6 (void);
// 0x00000245 System.Boolean Solana.Unity.SDK.InGameWallet::IsMnemonic(System.String)
extern void InGameWallet_IsMnemonic_m9D26AAF272F044B5C90FBC5A89FC52CB53DB9CA7 (void);
// 0x00000246 System.Boolean Solana.Unity.SDK.InGameWallet::IsByteArray(System.String)
extern void InGameWallet_IsByteArray_mB20D1BBD5D3CEBDC643732AC04B9BC4BE69E1C81 (void);
// 0x00000247 Solana.Unity.Wallet.Account Solana.Unity.SDK.InGameWallet::ParseByteArray(System.String)
extern void InGameWallet_ParseByteArray_mE5616EA0E9886D8F62B3261668805963F759282E (void);
// 0x00000248 System.String Solana.Unity.SDK.InGameWallet::LoadPlayerPrefs(System.String)
extern void InGameWallet_LoadPlayerPrefs_mEB9BD42FC4BDD9749F5F9E7ED2DC8841EBBEBBF3 (void);
// 0x00000249 System.Void Solana.Unity.SDK.InGameWallet::SavePlayerPrefs(System.String,System.String)
extern void InGameWallet_SavePlayerPrefs_mFD70EB2639E7A2937E2B453DD29FB9250A5071D8 (void);
// 0x0000024A System.Void Solana.Unity.SDK.InGameWallet/<SaveEncryptedAccount>d__4::.ctor(System.Int32)
extern void U3CSaveEncryptedAccountU3Ed__4__ctor_m812780AD6B8C0BCFC2C0BD8B1F649F3032B9D9A5 (void);
// 0x0000024B System.Void Solana.Unity.SDK.InGameWallet/<SaveEncryptedAccount>d__4::System.IDisposable.Dispose()
extern void U3CSaveEncryptedAccountU3Ed__4_System_IDisposable_Dispose_m99A1FFE4DE073BD95C5479E91A74540ABC0BAE25 (void);
// 0x0000024C System.Boolean Solana.Unity.SDK.InGameWallet/<SaveEncryptedAccount>d__4::MoveNext()
extern void U3CSaveEncryptedAccountU3Ed__4_MoveNext_mA70108FC1ACE56BBFA1E5D35FC385A73E7CC9FA2 (void);
// 0x0000024D System.Object Solana.Unity.SDK.InGameWallet/<SaveEncryptedAccount>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CSaveEncryptedAccountU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6FAE9F1491394099E251F2EAC4281BF7BB009EAB (void);
// 0x0000024E System.Void Solana.Unity.SDK.InGameWallet/<SaveEncryptedAccount>d__4::System.Collections.IEnumerator.Reset()
extern void U3CSaveEncryptedAccountU3Ed__4_System_Collections_IEnumerator_Reset_mDC19BD0923DE25000012296B57DDFA205A5BC4B7 (void);
// 0x0000024F System.Object Solana.Unity.SDK.InGameWallet/<SaveEncryptedAccount>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CSaveEncryptedAccountU3Ed__4_System_Collections_IEnumerator_get_Current_m6537CD1C0B3F98965CDBFBE40AE8516C74E39568 (void);
// 0x00000250 System.Void Solana.Unity.SDK.IWalletBase::Setup()
// 0x00000251 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.IWalletBase::Login(System.String)
// 0x00000252 System.Void Solana.Unity.SDK.IWalletBase::Logout()
// 0x00000253 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.IWalletBase::CreateAccount(System.String,System.String)
// 0x00000254 System.Threading.Tasks.Task`1<System.Double> Solana.Unity.SDK.IWalletBase::GetBalance(Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.Types.Commitment)
// 0x00000255 System.Threading.Tasks.Task`1<System.Double> Solana.Unity.SDK.IWalletBase::GetBalance(Solana.Unity.Rpc.Types.Commitment)
// 0x00000256 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.IWalletBase::Transfer(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000257 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.IWalletBase::Transfer(Solana.Unity.Wallet.PublicKey,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000258 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.TokenAccount[]> Solana.Unity.SDK.IWalletBase::GetTokenAccounts(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey)
// 0x00000259 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.TokenAccount[]> Solana.Unity.SDK.IWalletBase::GetTokenAccounts(Solana.Unity.Rpc.Types.Commitment)
// 0x0000025A System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.IWalletBase::SignTransaction(Solana.Unity.Rpc.Models.Transaction)
// 0x0000025B System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.IWalletBase::SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
// 0x0000025C System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.IWalletBase::SignMessage(System.Byte[])
// 0x0000025D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.IWalletBase::SignAndSendTransaction(Solana.Unity.Rpc.Models.Transaction,System.Boolean,Solana.Unity.Rpc.Types.Commitment)
// 0x0000025E System.Void Solana.Unity.SDK.PhantomWalletOptions::.ctor()
extern void PhantomWalletOptions__ctor_mD01D96727E0C709B9F7DD5415B50C583D4D6540E (void);
// 0x0000025F System.Void Solana.Unity.SDK.PhantomWallet::.ctor(Solana.Unity.SDK.PhantomWalletOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void PhantomWallet__ctor_mA374922C03D29B92EB9C6DD7CA0DCA994F341D05 (void);
// 0x00000260 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.PhantomWallet::_Login(System.String)
extern void PhantomWallet__Login_mCFA72F6AC088DFC4BB4F201FFF3373A5CF31CDAE (void);
// 0x00000261 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.PhantomWallet::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void PhantomWallet__SignTransaction_m8D52CCE6DAD8215D9F0A84C04FABA64E129A7581 (void);
// 0x00000262 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.PhantomWallet::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void PhantomWallet__SignAllTransactions_m106B7A7EB531DA7C45FE7F319B702F3F67D9ADAE (void);
// 0x00000263 System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.PhantomWallet::SignMessage(System.Byte[])
extern void PhantomWallet_SignMessage_m8755FEB64DF7A91ABE72A03F76708F505240CDE5 (void);
// 0x00000264 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.PhantomWallet::_CreateAccount(System.String,System.String)
extern void PhantomWallet__CreateAccount_m89C47398F6B07ABDEA91622C6085CF4D420D8133 (void);
// 0x00000265 System.Byte[] Solana.Unity.SDK.PhantomDeepLink::get_PhantomConnectionAccountPrivateKey()
extern void PhantomDeepLink_get_PhantomConnectionAccountPrivateKey_m21F400BB0113E9908642D7CB04568CE11E6A1C70 (void);
// 0x00000266 System.Byte[] Solana.Unity.SDK.PhantomDeepLink::get_PhantomConnectionAccountPublicKey()
extern void PhantomDeepLink_get_PhantomConnectionAccountPublicKey_mD1A487A91E80C963D689EA00BACE499390CB8ABC (void);
// 0x00000267 System.Void Solana.Unity.SDK.PhantomDeepLink::.ctor(Solana.Unity.SDK.PhantomWalletOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void PhantomDeepLink__ctor_mFB9A0D9418B8A5C26EA95EA41496EA24EEC729E0 (void);
// 0x00000268 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.PhantomDeepLink::_Login(System.String)
extern void PhantomDeepLink__Login_m273A51C5C07D799DBECA3DF7ECB35DAAC6404E2B (void);
// 0x00000269 System.Void Solana.Unity.SDK.PhantomDeepLink::Logout()
extern void PhantomDeepLink_Logout_m1F6C99984021FBB0684B768C6E158E75FAED97D8 (void);
// 0x0000026A System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.PhantomDeepLink::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void PhantomDeepLink__SignTransaction_m7DAA9D273740D98B5376B9B029895905E4C0B252 (void);
// 0x0000026B System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.PhantomDeepLink::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void PhantomDeepLink__SignAllTransactions_mF54CD8BA8BA379B05BEACC0C87999B20E580471E (void);
// 0x0000026C System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.PhantomDeepLink::SignMessage(System.Byte[])
extern void PhantomDeepLink_SignMessage_mDC20470C791C3845288C5C55F1C7241293B692FD (void);
// 0x0000026D System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.PhantomDeepLink::_CreateAccount(System.String,System.String)
extern void PhantomDeepLink__CreateAccount_m2A15C9D24777BEBCE2318DB3F0EE387EEED591FD (void);
// 0x0000026E Solana.Unity.SDK.RpcCluster Solana.Unity.SDK.PhantomDeepLink::GetCluster()
extern void PhantomDeepLink_GetCluster_m0A3CD0938CCA4545828B37EE3AF037839EE4324A (void);
// 0x0000026F System.Void Solana.Unity.SDK.PhantomDeepLink::StartLogin()
extern void PhantomDeepLink_StartLogin_m535F8DB501036D14AACBE8B4B650C503D820C974 (void);
// 0x00000270 System.Void Solana.Unity.SDK.PhantomDeepLink::StartSignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void PhantomDeepLink_StartSignTransaction_m5C193E81DBF53F344481D78960CFE67FC535FEEA (void);
// 0x00000271 System.Void Solana.Unity.SDK.PhantomDeepLink::StartSignMessage(System.Byte[])
extern void PhantomDeepLink_StartSignMessage_mC0FD744C59CF28231BD86D57A6D42FE40E73F835 (void);
// 0x00000272 System.Void Solana.Unity.SDK.PhantomDeepLink::OnDeepLinkActivated(System.String)
extern void PhantomDeepLink_OnDeepLinkActivated_m513B68542486CA3229A386491C11F9F4EDAA84C8 (void);
// 0x00000273 System.Void Solana.Unity.SDK.PhantomDeepLink::ParseConnectionSuccessful(System.String)
extern void PhantomDeepLink_ParseConnectionSuccessful_m6D05E4DD897404F8C5F77275844441F6E0799DD8 (void);
// 0x00000274 System.Void Solana.Unity.SDK.PhantomDeepLink::ParseSuccessfullySignedTransaction(System.String)
extern void PhantomDeepLink_ParseSuccessfullySignedTransaction_m10DAFEE546D11839D63EAA46750DEF34E79621C1 (void);
// 0x00000275 System.Void Solana.Unity.SDK.PhantomDeepLink::ParseSuccessfullySignedMessage(System.String)
extern void PhantomDeepLink_ParseSuccessfullySignedMessage_m51E0DE1A0485E1B8EA4022265ECA6C2CCE19DB2B (void);
// 0x00000276 System.Collections.Generic.Dictionary`2<System.String,System.String> Solana.Unity.SDK.PhantomDeepLink::ParseQueryString(System.String)
extern void PhantomDeepLink_ParseQueryString_mAC6CEEC06D2CADC4B82C6F174228B2E757E4076E (void);
// 0x00000277 System.Void Solana.Unity.SDK.PhantomDeepLink::.cctor()
extern void PhantomDeepLink__cctor_mEB37E930DEBB454307CDB57CFE2892172F6C4CD1 (void);
// 0x00000278 System.Void Solana.Unity.SDK.PhantomDeepLink/<>c::.cctor()
extern void U3CU3Ec__cctor_m7EB823FB91513E246530672C3F8B547B1B282C09 (void);
// 0x00000279 System.Void Solana.Unity.SDK.PhantomDeepLink/<>c::.ctor()
extern void U3CU3Ec__ctor_mB12647401A2C37A935205445BCB02996876AA45F (void);
// 0x0000027A System.Collections.Generic.KeyValuePair`2<System.String,System.String> Solana.Unity.SDK.PhantomDeepLink/<>c::<ParseQueryString>b__26_0(System.String)
extern void U3CU3Ec_U3CParseQueryStringU3Eb__26_0_m4C3CFD4A2FB41F97C242D73F827E7F45ED996711 (void);
// 0x0000027B System.String Solana.Unity.SDK.PhantomDeepLink/<>c::<ParseQueryString>b__26_1(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
extern void U3CU3Ec_U3CParseQueryStringU3Eb__26_1_m102EA68EE6CA539FDC0D92F5239048F2893D765B (void);
// 0x0000027C System.String Solana.Unity.SDK.PhantomDeepLink/<>c::<ParseQueryString>b__26_2(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
extern void U3CU3Ec_U3CParseQueryStringU3Eb__26_2_m85B21A8A66A054F7FF8D1A8051D5EBBAAFBB51E0 (void);
// 0x0000027D System.Void Solana.Unity.SDK.PhantomMessagePayload::.ctor(System.String,System.String,System.String)
extern void PhantomMessagePayload__ctor_m190900CB408192B867507B19D2EF313272AE2232 (void);
// 0x0000027E System.Void Solana.Unity.SDK.PhantomTransactionPayload::.ctor(System.String,System.String)
extern void PhantomTransactionPayload__ctor_m4C9AE33E562D772CD88EF250D56EDDABDFFA777D (void);
// 0x0000027F System.Void Solana.Unity.SDK.PhantomWebGL::.ctor(Solana.Unity.SDK.PhantomWalletOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void PhantomWebGL__ctor_m80EBEFF948D0346D0221D36C89429E5EB516A25C (void);
// 0x00000280 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.PhantomWebGL::_Login(System.String)
extern void PhantomWebGL__Login_mBD1FAA12B149F751FA830D5232AFE474E87E2E25 (void);
// 0x00000281 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.PhantomWebGL::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void PhantomWebGL__SignTransaction_mE1D2B66064443365FB26193E114064B622CA3A62 (void);
// 0x00000282 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.PhantomWebGL::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void PhantomWebGL__SignAllTransactions_m6E3161BD504057756CAEB2253258797F02E69FF7 (void);
// 0x00000283 System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.PhantomWebGL::SignMessage(System.Byte[])
extern void PhantomWebGL_SignMessage_m949C1E3031A63895BC37608529F89099DBB5B546 (void);
// 0x00000284 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.PhantomWebGL::_CreateAccount(System.String,System.String)
extern void PhantomWebGL__CreateAccount_mD4F3DF80C1A7080B20EA17E064F9D4B156FE7810 (void);
// 0x00000285 System.Void Solana.Unity.SDK.PhantomWebGL::OnPhantomConnected(System.String)
extern void PhantomWebGL_OnPhantomConnected_m59FBF77E81DEABD19973FF25004B7535ABA04AE2 (void);
// 0x00000286 System.Void Solana.Unity.SDK.PhantomWebGL::OnTransactionSigned(System.String)
extern void PhantomWebGL_OnTransactionSigned_m165CABBA8446863ACBD0ECC56D915F06E78A90FF (void);
// 0x00000287 System.Void Solana.Unity.SDK.PhantomWebGL::OnMessageSigned(System.String)
extern void PhantomWebGL_OnMessageSigned_mF0225CDC896BF4CC36AFB7CB95790977581F831D (void);
// 0x00000288 System.Void Solana.Unity.SDK.PhantomWebGL::ExternConnectPhantom(System.Action`1<System.String>)
extern void PhantomWebGL_ExternConnectPhantom_mCF3CF207BE634084EC5DFF4D65800FD7C8D85FF0 (void);
// 0x00000289 System.Void Solana.Unity.SDK.PhantomWebGL::ExternSignTransaction(System.String,System.Action`1<System.String>)
extern void PhantomWebGL_ExternSignTransaction_m86CA9557DC86EB789A63BD83F37817FCF8974F64 (void);
// 0x0000028A System.Void Solana.Unity.SDK.PhantomWebGL::ExternSignMessage(System.String,System.Action`1<System.String>)
extern void PhantomWebGL_ExternSignMessage_m01BD32EF85A395852807F37094B7C94DFA20831A (void);
// 0x0000028B System.Byte[] Solana.Unity.SDK.Utils::GenerateRandomBytes(System.Int32)
extern void Utils_GenerateRandomBytes_mF21A45A5B40FE9860F537B47696531F409B44857 (void);
// 0x0000028C System.String Solana.Unity.SDK.Utils::CreateLoginDeepLink(System.String,System.String,System.String,System.String,Solana.Unity.SDK.RpcCluster)
extern void Utils_CreateLoginDeepLink_m26D4C74F4A60638ABEA302F7786875069E14C695 (void);
// 0x0000028D System.String Solana.Unity.SDK.Utils::CreateSignTransactionDeepLink(Solana.Unity.Rpc.Models.Transaction,System.Byte[],System.Byte[],System.String,System.String,System.String,System.String,Solana.Unity.SDK.RpcCluster)
extern void Utils_CreateSignTransactionDeepLink_m14041A8F844EE9C23BE18D059E2D60E812578BBA (void);
// 0x0000028E System.String Solana.Unity.SDK.Utils::CreateSignMessageDeepLink(System.Byte[],System.Byte[],System.Byte[],System.String,System.String,System.String,System.String,Solana.Unity.SDK.RpcCluster)
extern void Utils_CreateSignMessageDeepLink_m7EF253F560F54DFAA30E7FA40660321671CB2E41 (void);
// 0x0000028F System.String Solana.Unity.SDK.Utils::GetClusterString(Solana.Unity.SDK.RpcCluster)
extern void Utils_GetClusterString_m22F7B31E46E4E5D05D46919AE4BBDE7E8AD1AE3A (void);
// 0x00000290 System.Void Solana.Unity.SDK.PhantomWalletError::.ctor()
extern void PhantomWalletError__ctor_m30C8475213A0447ED9758F26AA56F0A45F4BFD82 (void);
// 0x00000291 System.Void Solana.Unity.SDK.PhantomWalletConnectSuccess::.ctor()
extern void PhantomWalletConnectSuccess__ctor_m1511DE8C8AED41309ED669B5ADE07BA359987013 (void);
// 0x00000292 System.Void Solana.Unity.SDK.PhantomWalletTransactionSuccessful::.ctor()
extern void PhantomWalletTransactionSuccessful__ctor_mD95FE46E37B734742AB1104CA326EF5A89EE5673 (void);
// 0x00000293 System.Void Solana.Unity.SDK.PhantomWalletTransactionSignedSuccessfully::.ctor()
extern void PhantomWalletTransactionSignedSuccessfully__ctor_m45B510DFA651EC05C65EFD971958F8FE66890EB8 (void);
// 0x00000294 System.Void Solana.Unity.SDK.PhantomWalletMessageSignedSuccessfully::.ctor()
extern void PhantomWalletMessageSignedSuccessfully__ctor_m866BFA6263B5EA6EA70CD6EEF148F13C538153FD (void);
// 0x00000295 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.SessionWallet::get_TargetProgram()
extern void SessionWallet_get_TargetProgram_m2433E7491C22E25520B030D06A36E10B5DFBD286 (void);
// 0x00000296 System.Void Solana.Unity.SDK.SessionWallet::set_TargetProgram(Solana.Unity.Wallet.PublicKey)
extern void SessionWallet_set_TargetProgram_mE3F2262D051605158BC6F8546F6E935D559A9E78 (void);
// 0x00000297 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.SessionWallet::get_SessionTokenPDA()
extern void SessionWallet_get_SessionTokenPDA_m02E19826C427776039815DFA97F8BDE9CCAFC883 (void);
// 0x00000298 System.Void Solana.Unity.SDK.SessionWallet::set_SessionTokenPDA(Solana.Unity.Wallet.PublicKey)
extern void SessionWallet_set_SessionTokenPDA_mCB431728E4FA2CD8C2D9D96A73BD6940054B59B7 (void);
// 0x00000299 System.Void Solana.Unity.SDK.SessionWallet::.ctor(Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void SessionWallet__ctor_mF8ACC2E41E18A806056E18D00442D1D492F9AD07 (void);
// 0x0000029A System.Boolean Solana.Unity.SDK.SessionWallet::HasSessionWallet()
extern void SessionWallet_HasSessionWallet_m8D2578E85A67E8C39D38527E95828F938A96EE3F (void);
// 0x0000029B Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.SessionWallet::FindSessionToken(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.Account,Solana.Unity.Wallet.Account)
extern void SessionWallet_FindSessionToken_m82DE898D54795FAC87F6009F136D2FFE03F19409 (void);
// 0x0000029C System.Void Solana.Unity.SDK.SessionWallet::SignInitSessionTx(Solana.Unity.Rpc.Models.Transaction)
extern void SessionWallet_SignInitSessionTx_m5E7DE1BFEC805FB6CB18798E18F38B4E059067B6 (void);
// 0x0000029D System.Threading.Tasks.Task`1<Solana.Unity.SDK.SessionWallet> Solana.Unity.SDK.SessionWallet::GetSessionWallet(Solana.Unity.Wallet.PublicKey,System.String,Solana.Unity.SDK.WalletBase)
extern void SessionWallet_GetSessionWallet_m379AB7CB2CA322107D76B968526F9B2C490A5BE0 (void);
// 0x0000029E Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.SDK.SessionWallet::CreateSessionIX(System.Boolean,System.Int64)
extern void SessionWallet_CreateSessionIX_mFC18A818D7BA84BE1959DDED607F6073F03A60C3 (void);
// 0x0000029F Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.SDK.SessionWallet::RevokeSessionIX()
extern void SessionWallet_RevokeSessionIX_m869A2113F5691DCE95D2F588282775F28DD60435 (void);
// 0x000002A0 System.Threading.Tasks.Task`1<System.Boolean> Solana.Unity.SDK.SessionWallet::IsSessionTokenInitialized(Solana.Unity.Rpc.Types.Commitment)
extern void SessionWallet_IsSessionTokenInitialized_m1D1A78DD4C59D5E1C28C6C247C5840DC97CB231E (void);
// 0x000002A1 System.Threading.Tasks.Task`1<System.Boolean> Solana.Unity.SDK.SessionWallet::IsSessionTokenValid(Solana.Unity.Rpc.Types.Commitment)
extern void SessionWallet_IsSessionTokenValid_m691F9D6C90004C222A5A9A4446ADA74861C58373 (void);
// 0x000002A2 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.PublicKey> Solana.Unity.SDK.SessionWallet::Authority(Solana.Unity.Rpc.Types.Commitment)
extern void SessionWallet_Authority_mA348982509F8EEB632F18F2B155E6F37F405D5BE (void);
// 0x000002A3 System.String Solana.Unity.SDK.SessionWallet::DeriveSessionPassword(System.String)
extern void SessionWallet_DeriveSessionPassword_m72A0D3601A9EFEC241A88FFB365F7EA336DD7567 (void);
// 0x000002A4 System.Void Solana.Unity.SDK.SessionWallet::DeleteSessionWallet()
extern void SessionWallet_DeleteSessionWallet_m0EBCFEB83C3D3B2070E334C580FEC6E9815E43AC (void);
// 0x000002A5 System.Threading.Tasks.Task Solana.Unity.SDK.SessionWallet::CloseSession(Solana.Unity.Rpc.Types.Commitment)
extern void SessionWallet_CloseSession_m5DEB79B357BE76DA5627F78E47485B3D631A093F (void);
// 0x000002A6 System.Void Solana.Unity.SDK.SessionWallet/<GetSessionWallet>d__14::MoveNext()
extern void U3CGetSessionWalletU3Ed__14_MoveNext_mD8212BDD730AFE06019146DC4EF20235C1655549 (void);
// 0x000002A7 System.Void Solana.Unity.SDK.SessionWallet/<GetSessionWallet>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSessionWalletU3Ed__14_SetStateMachine_m1E5D4FD22F6245A4646F290C0BEE25621B234642 (void);
// 0x000002A8 System.Void Solana.Unity.SDK.SessionWallet/<IsSessionTokenInitialized>d__17::MoveNext()
extern void U3CIsSessionTokenInitializedU3Ed__17_MoveNext_m756E593EBF187C92D609423C921763D34D834101 (void);
// 0x000002A9 System.Void Solana.Unity.SDK.SessionWallet/<IsSessionTokenInitialized>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CIsSessionTokenInitializedU3Ed__17_SetStateMachine_m0492BC01DC09A901565AFA5A25FEFC8F60B16B7D (void);
// 0x000002AA System.Void Solana.Unity.SDK.SessionWallet/<IsSessionTokenValid>d__18::MoveNext()
extern void U3CIsSessionTokenValidU3Ed__18_MoveNext_m3602DA58F4A18C37ABFE555D578583E067070E16 (void);
// 0x000002AB System.Void Solana.Unity.SDK.SessionWallet/<IsSessionTokenValid>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CIsSessionTokenValidU3Ed__18_SetStateMachine_m4655ED5C5BC4A6561851ADB60CCF0F1ECC19D3DE (void);
// 0x000002AC System.Void Solana.Unity.SDK.SessionWallet/<Authority>d__19::MoveNext()
extern void U3CAuthorityU3Ed__19_MoveNext_mD7F845D3B62AA7CDD696C070975751A76147092E (void);
// 0x000002AD System.Void Solana.Unity.SDK.SessionWallet/<Authority>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CAuthorityU3Ed__19_SetStateMachine_m21D2195194A8EA06D8D4FAD9A085B2C799F1F8E9 (void);
// 0x000002AE System.Void Solana.Unity.SDK.SessionWallet/<CloseSession>d__22::MoveNext()
extern void U3CCloseSessionU3Ed__22_MoveNext_m7A5F8F033AC6779A5831138429CC6CA078EA55FB (void);
// 0x000002AF System.Void Solana.Unity.SDK.SessionWallet/<CloseSession>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCloseSessionU3Ed__22_SetStateMachine_mB33C422F5E76769272E1BD4E0D99BF534EB20106 (void);
// 0x000002B0 System.Void Solana.Unity.SDK.IMessageSender::Send(System.Byte[])
// 0x000002B1 System.Void Solana.Unity.SDK.JsonRpc20Client::add_MessageEvent(Solana.Unity.SDK.JsonRpc20Client/MessageHandler)
extern void JsonRpc20Client_add_MessageEvent_mB1CC2CF565C962CC75FD18983F0E0E368113D9C6 (void);
// 0x000002B2 System.Void Solana.Unity.SDK.JsonRpc20Client::remove_MessageEvent(Solana.Unity.SDK.JsonRpc20Client/MessageHandler)
extern void JsonRpc20Client_remove_MessageEvent_m0A0C2EE6808302087FD12BA5172B7A64E1F12073 (void);
// 0x000002B3 System.Void Solana.Unity.SDK.JsonRpc20Client::.ctor(Solana.Unity.SDK.IMessageSender)
extern void JsonRpc20Client__ctor_mAE3E7D7E41BD3723AFB20641180F598B4E5D5AFA (void);
// 0x000002B4 System.Threading.Tasks.Task`1<T> Solana.Unity.SDK.JsonRpc20Client::SendRequest(Solana.Unity.SDK.JsonRequest)
// 0x000002B5 System.Void Solana.Unity.SDK.JsonRpc20Client::Receive(System.String)
extern void JsonRpc20Client_Receive_mEA5D12C79157A065D45ECAC8E403A4690DFB6B26 (void);
// 0x000002B6 System.Void Solana.Unity.SDK.JsonRpc20Client::RegisterListener(System.Threading.Tasks.TaskCompletionSource`1<T>)
// 0x000002B7 System.Void Solana.Unity.SDK.JsonRpc20Client::Receiver(System.Threading.Tasks.TaskCompletionSource`1<T>,System.String)
// 0x000002B8 System.Void Solana.Unity.SDK.JsonRpc20Client/MessageHandler::.ctor(System.Object,System.IntPtr)
extern void MessageHandler__ctor_mCB77E590CE77B11C2223C436597E4DA33A704D42 (void);
// 0x000002B9 System.Void Solana.Unity.SDK.JsonRpc20Client/MessageHandler::Invoke(System.String)
extern void MessageHandler_Invoke_m8D9616573ABD8B44E60BEE2B35401D3B7E4D55AE (void);
// 0x000002BA System.IAsyncResult Solana.Unity.SDK.JsonRpc20Client/MessageHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void MessageHandler_BeginInvoke_m9B30B66812C3754FF75D47C8E348EFDD932B8475 (void);
// 0x000002BB System.Void Solana.Unity.SDK.JsonRpc20Client/MessageHandler::EndInvoke(System.IAsyncResult)
extern void MessageHandler_EndInvoke_mD285592F8BC59335C4C1332963F0D3BB5C080FA4 (void);
// 0x000002BC System.Void Solana.Unity.SDK.JsonRpc20Client/<>c__DisplayClass8_0`1::.ctor()
// 0x000002BD System.Void Solana.Unity.SDK.JsonRpc20Client/<>c__DisplayClass8_0`1::<RegisterListener>b__0(System.String)
// 0x000002BE System.Void Solana.Unity.SDK.JsonRpc20Client/<>c__DisplayClass8_0`1::<RegisterListener>b__1(System.Threading.Tasks.Task`1<T>)
// 0x000002BF System.String Solana.Unity.SDK.JsonRequest::get_JsonRpc()
extern void JsonRequest_get_JsonRpc_m3394EB26D16812DA395B37D0F9727025B2650C0E (void);
// 0x000002C0 System.Void Solana.Unity.SDK.JsonRequest::set_JsonRpc(System.String)
extern void JsonRequest_set_JsonRpc_mAA201D60F5F5406D0CA7446DC7055152A75C34E4 (void);
// 0x000002C1 System.String Solana.Unity.SDK.JsonRequest::get_Method()
extern void JsonRequest_get_Method_m45142653DBF56922B2A585A35F717857358D320A (void);
// 0x000002C2 System.Void Solana.Unity.SDK.JsonRequest::set_Method(System.String)
extern void JsonRequest_set_Method_mFCA4B0701DBFAC70A0BF7C9D54E9C92D79701444 (void);
// 0x000002C3 Solana.Unity.SDK.JsonRequest/JsonRequestParams Solana.Unity.SDK.JsonRequest::get_Params()
extern void JsonRequest_get_Params_mCB2C546CBB902CF3ADBF3776F5FE4E2D1A3AD7B3 (void);
// 0x000002C4 System.Void Solana.Unity.SDK.JsonRequest::set_Params(Solana.Unity.SDK.JsonRequest/JsonRequestParams)
extern void JsonRequest_set_Params_m657C7499DDA561322F54E9236ED4209FDC994D1C (void);
// 0x000002C5 System.Int32 Solana.Unity.SDK.JsonRequest::get_Id()
extern void JsonRequest_get_Id_m8F9CE911EA6C7092459F8E79D1C75DEB1DE664C2 (void);
// 0x000002C6 System.Void Solana.Unity.SDK.JsonRequest::set_Id(System.Int32)
extern void JsonRequest_set_Id_mDFCE17828D1A3B1A144579BD54548512B402FE5D (void);
// 0x000002C7 System.Void Solana.Unity.SDK.JsonRequest::.ctor()
extern void JsonRequest__ctor_mA3E78FDEB0C84785C105BA2711136F9803232F43 (void);
// 0x000002C8 System.Uri Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::get_Uri()
extern void JsonRequestIdentity_get_Uri_m4D21ECBBFC39DBBB750284A1F3661B9C4323EBAE (void);
// 0x000002C9 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::set_Uri(System.Uri)
extern void JsonRequestIdentity_set_Uri_mEC6093D5C9BDBB403DCCB4320607F69272F27870 (void);
// 0x000002CA System.Uri Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::get_Icon()
extern void JsonRequestIdentity_get_Icon_m781D866A41981B837BC393561E9288265831980C (void);
// 0x000002CB System.Void Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::set_Icon(System.Uri)
extern void JsonRequestIdentity_set_Icon_mE8013575B46909FFEC9201331C809317B6B9950D (void);
// 0x000002CC System.String Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::get_Name()
extern void JsonRequestIdentity_get_Name_m45ED8697AFFCE82F60E7E5B9B33027430E95E670 (void);
// 0x000002CD System.Void Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::set_Name(System.String)
extern void JsonRequestIdentity_set_Name_m7E84FAE9B0AEF5C1B28994487EC15860AA064DE8 (void);
// 0x000002CE System.Void Solana.Unity.SDK.JsonRequest/JsonRequestIdentity::.ctor()
extern void JsonRequestIdentity__ctor_m5673949D087410D38DFB3C24A7C0000170061B34 (void);
// 0x000002CF Solana.Unity.SDK.JsonRequest/JsonRequestIdentity Solana.Unity.SDK.JsonRequest/JsonRequestParams::get_Identity()
extern void JsonRequestParams_get_Identity_m748E93C63732FB29E11DDF784300727B696911BC (void);
// 0x000002D0 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestParams::set_Identity(Solana.Unity.SDK.JsonRequest/JsonRequestIdentity)
extern void JsonRequestParams_set_Identity_m6CD726E2C1AFEE5E23BF799518C02CC28A313220 (void);
// 0x000002D1 System.String Solana.Unity.SDK.JsonRequest/JsonRequestParams::get_Cluster()
extern void JsonRequestParams_get_Cluster_m7A7FA905BD19DFD63677E953443E06DB58F933D2 (void);
// 0x000002D2 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestParams::set_Cluster(System.String)
extern void JsonRequestParams_set_Cluster_mC45A5585707DB3639B4B513B1F48D92A6D3908B7 (void);
// 0x000002D3 System.String Solana.Unity.SDK.JsonRequest/JsonRequestParams::get_AuthToken()
extern void JsonRequestParams_get_AuthToken_m8FBC507A60F38EFCDA3D5667CA15B0631F13FDF3 (void);
// 0x000002D4 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestParams::set_AuthToken(System.String)
extern void JsonRequestParams_set_AuthToken_m7FE491F866B94E972FF2AFF06BC1FEA4B20309A7 (void);
// 0x000002D5 System.Collections.Generic.List`1<System.String> Solana.Unity.SDK.JsonRequest/JsonRequestParams::get_Payloads()
extern void JsonRequestParams_get_Payloads_mD7A8A310EDB17AF8ABCA167DAD756D31AB298ACB (void);
// 0x000002D6 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestParams::set_Payloads(System.Collections.Generic.List`1<System.String>)
extern void JsonRequestParams_set_Payloads_m9E41FCBC0CD23E4583F7B2A2CA4DEF921699DC99 (void);
// 0x000002D7 System.Collections.Generic.List`1<System.String> Solana.Unity.SDK.JsonRequest/JsonRequestParams::get_Addresses()
extern void JsonRequestParams_get_Addresses_m0A4C5E99246C080B5F3B32F1FCF711D68B5CC0D2 (void);
// 0x000002D8 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestParams::set_Addresses(System.Collections.Generic.List`1<System.String>)
extern void JsonRequestParams_set_Addresses_mE42A6E814BDD4B086ACFAD249A9E04ADB3230B25 (void);
// 0x000002D9 System.Void Solana.Unity.SDK.JsonRequest/JsonRequestParams::.ctor()
extern void JsonRequestParams__ctor_mFFB45703FD0EB864CE4BB20BF5B79FB46DBA44BC (void);
// 0x000002DA System.String Solana.Unity.SDK.Response`1::get_JsonRpc()
// 0x000002DB System.Void Solana.Unity.SDK.Response`1::set_JsonRpc(System.String)
// 0x000002DC T Solana.Unity.SDK.Response`1::get_Result()
// 0x000002DD System.Void Solana.Unity.SDK.Response`1::set_Result(T)
// 0x000002DE System.Int64 Solana.Unity.SDK.Response`1::get_Id()
// 0x000002DF System.Void Solana.Unity.SDK.Response`1::set_Id(System.Int64)
// 0x000002E0 Solana.Unity.SDK.Response`1/ResponseError<T> Solana.Unity.SDK.Response`1::get_Error()
// 0x000002E1 System.Void Solana.Unity.SDK.Response`1::set_Error(Solana.Unity.SDK.Response`1/ResponseError<T>)
// 0x000002E2 System.Boolean Solana.Unity.SDK.Response`1::get_WasSuccessful()
// 0x000002E3 System.Boolean Solana.Unity.SDK.Response`1::get_Failed()
// 0x000002E4 System.Void Solana.Unity.SDK.Response`1::.ctor()
// 0x000002E5 System.Int64 Solana.Unity.SDK.Response`1/ResponseError::get_Code()
// 0x000002E6 System.Void Solana.Unity.SDK.Response`1/ResponseError::set_Code(System.Int64)
// 0x000002E7 System.String Solana.Unity.SDK.Response`1/ResponseError::get_Message()
// 0x000002E8 System.Void Solana.Unity.SDK.Response`1/ResponseError::set_Message(System.String)
// 0x000002E9 System.Void Solana.Unity.SDK.Response`1/ResponseError::.ctor()
// 0x000002EA System.Void Solana.Unity.SDK.SolanaMobileWalletAdapterOptions::.ctor()
extern void SolanaMobileWalletAdapterOptions__ctor_mFC58978115FA84A7EE1FEF8A1963DF52F115B943 (void);
// 0x000002EB System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter::.ctor(Solana.Unity.SDK.SolanaMobileWalletAdapterOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void SolanaMobileWalletAdapter__ctor_mC92267E0623C178EF6783BC0EA30BA6F0EF5903D (void);
// 0x000002EC System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.SolanaMobileWalletAdapter::_Login(System.String)
extern void SolanaMobileWalletAdapter__Login_m6F5F80F586764B6A1D63957C5D7ECDACC4E87193 (void);
// 0x000002ED System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.SolanaMobileWalletAdapter::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void SolanaMobileWalletAdapter__SignTransaction_mA565FD705BB3855B4BDF81CCD05B91575C3EA3D2 (void);
// 0x000002EE System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.SolanaMobileWalletAdapter::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void SolanaMobileWalletAdapter__SignAllTransactions_m9C420D18252C7C2504AA7906F793397A80B725D3 (void);
// 0x000002EF System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter::Logout()
extern void SolanaMobileWalletAdapter_Logout_m9DAD016CA084F4780C4740CFE8CAA258FA60A79B (void);
// 0x000002F0 System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.SolanaMobileWalletAdapter::SignMessage(System.Byte[])
extern void SolanaMobileWalletAdapter_SignMessage_mF1EA8AB0C74FC77AC2838E7C82874B6042605A2B (void);
// 0x000002F1 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.SolanaMobileWalletAdapter::_CreateAccount(System.String,System.String)
extern void SolanaMobileWalletAdapter__CreateAccount_m80D4D725D2B7AA9E2E16EEDFA0272BB8DFF899A6 (void);
// 0x000002F2 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m7F480A53DF45745F2186977ECCFBF79A824C191C (void);
// 0x000002F3 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass7_0::<_Login>b__0(IAdapterOperations)
extern void U3CU3Ec__DisplayClass7_0_U3C_LoginU3Eb__0_m4D4E13411D2ECD406415CC1AB17FCECF6BC4DB71 (void);
// 0x000002F4 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass7_0/<<_Login>b__0>d::MoveNext()
extern void U3CU3C_LoginU3Eb__0U3Ed_MoveNext_m26588C90E5301163809F96C7A7471AA7429227B0 (void);
// 0x000002F5 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass7_0/<<_Login>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3C_LoginU3Eb__0U3Ed_SetStateMachine_mF6C3111EAEB2B7F2E56CEDB8AA785B23F68AC35F (void);
// 0x000002F6 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<_Login>d__7::MoveNext()
extern void U3C_LoginU3Ed__7_MoveNext_mF823572AA663C47B14AD1617F3412C6D5D533329 (void);
// 0x000002F7 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<_Login>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3C_LoginU3Ed__7_SetStateMachine_m81CB3FDE733BFC4B615A26A200701BD90014A637 (void);
// 0x000002F8 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mD45C792E2D4D6E73C661ED4896028635572B8943 (void);
// 0x000002F9 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0::<_SignTransaction>b__0(IAdapterOperations)
extern void U3CU3Ec__DisplayClass8_0_U3C_SignTransactionU3Eb__0_m5F6552E700217BE8E0DE75478545CF0E327F1661 (void);
// 0x000002FA System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0::<_SignTransaction>b__1(IAdapterOperations)
extern void U3CU3Ec__DisplayClass8_0_U3C_SignTransactionU3Eb__1_m3F92C89D57C2A87A2D4209872DB3985444B0BD74 (void);
// 0x000002FB System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0/<<_SignTransaction>b__0>d::MoveNext()
extern void U3CU3C_SignTransactionU3Eb__0U3Ed_MoveNext_mEE00B688EB65DFCA192EA535CD5DFD7CDC82A31A (void);
// 0x000002FC System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0/<<_SignTransaction>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3C_SignTransactionU3Eb__0U3Ed_SetStateMachine_mC080A980291CF59FA19E0A20B0BEF58F700A61DD (void);
// 0x000002FD System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0/<<_SignTransaction>b__1>d::MoveNext()
extern void U3CU3C_SignTransactionU3Eb__1U3Ed_MoveNext_m2566696F1ED9C9E578B55ACAF2A7EC4391FD68AD (void);
// 0x000002FE System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass8_0/<<_SignTransaction>b__1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3C_SignTransactionU3Eb__1U3Ed_SetStateMachine_m7FC93260964AD6BC7DBC0242D0C261632B505BDE (void);
// 0x000002FF System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<_SignTransaction>d__8::MoveNext()
extern void U3C_SignTransactionU3Ed__8_MoveNext_m571FC4EF2AC08D0A93761810D14269C7AC09FEEC (void);
// 0x00000300 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<_SignTransaction>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3C_SignTransactionU3Ed__8_SetStateMachine_mFBECED754B5A2B22C6169BBF0BF07FD0C3D4A51A (void);
// 0x00000301 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0::.ctor()
extern void U3CU3Ec__DisplayClass11_0__ctor_m2C78F6E05982CAB9D85F0307DC7535D64339E936 (void);
// 0x00000302 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0::<SignMessage>b__0(IAdapterOperations)
extern void U3CU3Ec__DisplayClass11_0_U3CSignMessageU3Eb__0_m6A362B44928F82D31EC7BF7A4A3E06CCF79F84CE (void);
// 0x00000303 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0::<SignMessage>b__1(IAdapterOperations)
extern void U3CU3Ec__DisplayClass11_0_U3CSignMessageU3Eb__1_m4C399F32D7522B6E8C6D637D9D384306446EA6B2 (void);
// 0x00000304 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0/<<SignMessage>b__0>d::MoveNext()
extern void U3CU3CSignMessageU3Eb__0U3Ed_MoveNext_mFC167ECC69464A175E3EA03D92B283B06B394DAF (void);
// 0x00000305 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0/<<SignMessage>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CSignMessageU3Eb__0U3Ed_SetStateMachine_mA07822211257DA9E5C09D200CE44BB07E53ADC9F (void);
// 0x00000306 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0/<<SignMessage>b__1>d::MoveNext()
extern void U3CU3CSignMessageU3Eb__1U3Ed_MoveNext_m386EDA145D0F34D098E7F8ACDD7E9970CA1521E7 (void);
// 0x00000307 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<>c__DisplayClass11_0/<<SignMessage>b__1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CSignMessageU3Eb__1U3Ed_SetStateMachine_mEA4C6B0193ED70EEAABB16347288A2DDD1A1C7DF (void);
// 0x00000308 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<SignMessage>d__11::MoveNext()
extern void U3CSignMessageU3Ed__11_MoveNext_mC8A86E34B9137761557FA5CDF850DAA6F3B905FD (void);
// 0x00000309 System.Void Solana.Unity.SDK.SolanaMobileWalletAdapter/<SignMessage>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSignMessageU3Ed__11_SetStateMachine_mFC2F7AEC9736E2D3F7A8EA525754E8560751BCF6 (void);
// 0x0000030A System.Void Solana.Unity.SDK.SolanaWalletAdapterOptions::.ctor()
extern void SolanaWalletAdapterOptions__ctor_mCE883E7BBC2F078F1BF6E674B2FA2C007A6EB40B (void);
// 0x0000030B System.Void Solana.Unity.SDK.SolanaWalletAdapter::.ctor(Solana.Unity.SDK.SolanaWalletAdapterOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void SolanaWalletAdapter__ctor_mA7D8FAF8A270B87F40DC8388696C66B3DECEBE34 (void);
// 0x0000030C System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.SolanaWalletAdapter::_Login(System.String)
extern void SolanaWalletAdapter__Login_m83AE29192AB5A0019EAE7A1AC57FB746480DC258 (void);
// 0x0000030D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.SolanaWalletAdapter::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void SolanaWalletAdapter__SignTransaction_m1ABF8174714E67AD74326FDE2991FA3BDB953BCF (void);
// 0x0000030E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.SolanaWalletAdapter::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void SolanaWalletAdapter__SignAllTransactions_m06A15BD822BCB2D10EB55D9421ED199580BF7040 (void);
// 0x0000030F System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.SolanaWalletAdapter::SignMessage(System.Byte[])
extern void SolanaWalletAdapter_SignMessage_m335810BBA8E5B5B85C37E60AC5E76D23F31F4AE1 (void);
// 0x00000310 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.SolanaWalletAdapter::_CreateAccount(System.String,System.String)
extern void SolanaWalletAdapter__CreateAccount_m291C3562CE2590987BFD193FF11522D1A5E6747A (void);
// 0x00000311 System.Void Solana.Unity.SDK.SolanaWalletAdapter::Logout()
extern void SolanaWalletAdapter_Logout_m87B07347CF608DCD99C73486DBB4D2C43F1BE130 (void);
// 0x00000312 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGLOptions::.ctor()
extern void SolanaWalletAdapterWebGLOptions__ctor_mFA4C212A4FE8F022D0FA89EC288382F0567F5C1C (void);
// 0x00000313 UnityEngine.GameObject Solana.Unity.SDK.SolanaWalletAdapterWebGL::get_WalletAdapterUI()
extern void SolanaWalletAdapterWebGL_get_WalletAdapterUI_m00DAEA8A939CE4B70ED55A193D10B70337999B65 (void);
// 0x00000314 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::set_WalletAdapterUI(UnityEngine.GameObject)
extern void SolanaWalletAdapterWebGL_set_WalletAdapterUI_m73623EBD6EC9382F3BBB58A98112B21FDE43E0AA (void);
// 0x00000315 Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecs[] Solana.Unity.SDK.SolanaWalletAdapterWebGL::get_Wallets()
extern void SolanaWalletAdapterWebGL_get_Wallets_m03B9931F829D34BE28051D3D4611C2AD8E8ADF3E (void);
// 0x00000316 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::set_Wallets(Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecs[])
extern void SolanaWalletAdapterWebGL_set_Wallets_mF0F35C3371099E5DB8FA0C7D38EF336FE9C29D54 (void);
// 0x00000317 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::.ctor(Solana.Unity.SDK.SolanaWalletAdapterWebGLOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void SolanaWalletAdapterWebGL__ctor_m01E7EEA75B6387853CA01D5606926433B60AE0E8 (void);
// 0x00000318 System.Threading.Tasks.Task Solana.Unity.SDK.SolanaWalletAdapterWebGL::InitWallets()
extern void SolanaWalletAdapterWebGL_InitWallets_m2CB1EE26451203F3E0679A68432D296A14CDEAC4 (void);
// 0x00000319 System.Threading.Tasks.Task`1<System.Boolean> Solana.Unity.SDK.SolanaWalletAdapterWebGL::IsXnft()
extern void SolanaWalletAdapterWebGL_IsXnft_mD4CF07AAECCDE1F90F4F5ABEBFB699CF3E1C6CDC (void);
// 0x0000031A System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.SolanaWalletAdapterWebGL::_Login(System.String)
extern void SolanaWalletAdapterWebGL__Login_m279D15703C0825C41AD1A3E50C834E516A5CAA3B (void);
// 0x0000031B System.Threading.Tasks.Task Solana.Unity.SDK.SolanaWalletAdapterWebGL::SetCurrentWallet()
extern void SolanaWalletAdapterWebGL_SetCurrentWallet_mE8BE71964B7AB5D83BFBCBF546D54D613D0B2F92 (void);
// 0x0000031C System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.SolanaWalletAdapterWebGL::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void SolanaWalletAdapterWebGL__SignTransaction_mA3510F54C9391811C94A9CD42A9537F9ABEA8B6D (void);
// 0x0000031D System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.SolanaWalletAdapterWebGL::SignMessage(System.Byte[])
extern void SolanaWalletAdapterWebGL_SignMessage_m321CCD05643EB80DFBA06AAA2C9915690D4D5B57 (void);
// 0x0000031E System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.SolanaWalletAdapterWebGL::_CreateAccount(System.String,System.String)
extern void SolanaWalletAdapterWebGL__CreateAccount_m4F6CFD8BC6E2D556F4DD2280607D4A86D960B477 (void);
// 0x0000031F System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.SolanaWalletAdapterWebGL::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void SolanaWalletAdapterWebGL__SignAllTransactions_m0EEB0FA3D744AFB48B58DA6EE3F47BE96AAAC426 (void);
// 0x00000320 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::OnWalletConnected(System.String)
extern void SolanaWalletAdapterWebGL_OnWalletConnected_m52F659CC00A73A916A6AE1F7149EDC74C206E3F8 (void);
// 0x00000321 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::OnTransactionSigned(System.String)
extern void SolanaWalletAdapterWebGL_OnTransactionSigned_m0E6658F8F7D1DEEDA59BF5C872E966D1A6D38F57 (void);
// 0x00000322 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::OnAllTransactionsSigned(System.String)
extern void SolanaWalletAdapterWebGL_OnAllTransactionsSigned_m68547D32562C807BDCFE6E4A2E63BF41A26C4DBB (void);
// 0x00000323 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::OnMessageSigned(System.String)
extern void SolanaWalletAdapterWebGL_OnMessageSigned_m3246741C9145ACEC7E8EBF1F9A534CF7FD6BBED8 (void);
// 0x00000324 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::OnWalletsInitialized(System.Boolean)
extern void SolanaWalletAdapterWebGL_OnWalletsInitialized_mAC15BBFC4E311A68D0ED2E36D2D4125CCF527A1D (void);
// 0x00000325 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::OnWalletsLoaded(System.String)
extern void SolanaWalletAdapterWebGL_OnWalletsLoaded_m45CA61922BE84B2F28BB77715AD43D5DBF0E3B02 (void);
// 0x00000326 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::ExternConnectWallet(System.String,System.Action`1<System.String>)
extern void SolanaWalletAdapterWebGL_ExternConnectWallet_m5609939F337E69B1699ACCD272EF82306AD18B84 (void);
// 0x00000327 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::ExternSignTransactionWallet(System.String,System.String,System.Action`1<System.String>)
extern void SolanaWalletAdapterWebGL_ExternSignTransactionWallet_mC52D9E946571B7B4FA83A250CBFDE695AF15009D (void);
// 0x00000328 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::ExternSignAllTransactionsWallet(System.String,System.String,System.Action`1<System.String>)
extern void SolanaWalletAdapterWebGL_ExternSignAllTransactionsWallet_m0B2596A6E8C7E043810BB1801B2093903F4F045E (void);
// 0x00000329 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::ExternSignMessageWallet(System.String,System.String,System.Action`1<System.String>)
extern void SolanaWalletAdapterWebGL_ExternSignMessageWallet_m4B8592CABCAB41FEEC7C1BFA18BB0E6A94809453 (void);
// 0x0000032A System.String Solana.Unity.SDK.SolanaWalletAdapterWebGL::ExternGetWallets(System.Action`1<System.String>)
extern void SolanaWalletAdapterWebGL_ExternGetWallets_m8D92F7EEC525034A760DA3595AB744ECA8CB11B9 (void);
// 0x0000032B System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL::InitWalletAdapter(System.Action`1<System.Boolean>)
extern void SolanaWalletAdapterWebGL_InitWalletAdapter_m9A3782096BF4CA875F9AB402691A101951C32EA6 (void);
// 0x0000032C System.String Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecs::ToString()
extern void WalletSpecs_ToString_m28BC8C62B1601AC7E63225B31A27CDC3C2E7F677 (void);
// 0x0000032D System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecs::.ctor()
extern void WalletSpecs__ctor_m86AEB466BFD6A7C7494F5DEF423505A4C639552C (void);
// 0x0000032E System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecsObject::.ctor()
extern void WalletSpecsObject__ctor_m3F3016C8DA64852AD2CBE572FCBBEF4BCF0F6162 (void);
// 0x0000032F System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<InitWallets>d__21::MoveNext()
extern void U3CInitWalletsU3Ed__21_MoveNext_mCFD4BF7EFE02564F58221F60E8E856486CCF4606 (void);
// 0x00000330 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<InitWallets>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitWalletsU3Ed__21_SetStateMachine_m40DBEFE6FC143C0696EB2331A60218769556CD91 (void);
// 0x00000331 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<IsXnft>d__22::MoveNext()
extern void U3CIsXnftU3Ed__22_MoveNext_m20291000B95120590DE13765C188052636B48C95 (void);
// 0x00000332 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<IsXnft>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CIsXnftU3Ed__22_SetStateMachine_mBEDCC06148B011BEF51FABE9F8E2DB7E0703A572 (void);
// 0x00000333 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<_Login>d__23::MoveNext()
extern void U3C_LoginU3Ed__23_MoveNext_m71DD54BBB7606E7F8A6A10BF0F648811FA6EA75A (void);
// 0x00000334 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<_Login>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3C_LoginU3Ed__23_SetStateMachine_mFA778CF821021B1760029E5AD544B34596108E89 (void);
// 0x00000335 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_m48D1CDB7DA734D76F68F760F7D8566C709A11F62 (void);
// 0x00000336 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<>c__DisplayClass24_0::<SetCurrentWallet>b__0(System.String)
extern void U3CU3Ec__DisplayClass24_0_U3CSetCurrentWalletU3Eb__0_m4BDFDE49A5387AC901B26C26AA34DB718187413A (void);
// 0x00000337 System.Boolean Solana.Unity.SDK.SolanaWalletAdapterWebGL/<>c__DisplayClass24_0::<SetCurrentWallet>b__1(Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecs)
extern void U3CU3Ec__DisplayClass24_0_U3CSetCurrentWalletU3Eb__1_m416E09DD89E12C5EC70F3D3B204095A2B0AE3212 (void);
// 0x00000338 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<SetCurrentWallet>d__24::MoveNext()
extern void U3CSetCurrentWalletU3Ed__24_MoveNext_m8DA08B3686C8AE5588638E9DCA3112F71C9A4996 (void);
// 0x00000339 System.Void Solana.Unity.SDK.SolanaWalletAdapterWebGL/<SetCurrentWallet>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSetCurrentWalletU3Ed__24_SetStateMachine_mF93E59D255CADDFF96EF31823FC4D526090CE1D9 (void);
// 0x0000033A System.String Solana.Unity.SDK.WalletAdapterButton::get_Name()
extern void WalletAdapterButton_get_Name_mF241B61FB3767951289836A153D1FB0876B2572F (void);
// 0x0000033B System.Void Solana.Unity.SDK.WalletAdapterButton::set_Name(System.String)
extern void WalletAdapterButton_set_Name_m8E68F056AA0C36D6628B332E36C612B04500E548 (void);
// 0x0000033C System.Void Solana.Unity.SDK.WalletAdapterButton::OnSelected()
extern void WalletAdapterButton_OnSelected_m41D9138B207829337F6171F3FE91D9C41D6C2E92 (void);
// 0x0000033D System.Void Solana.Unity.SDK.WalletAdapterButton::.ctor()
extern void WalletAdapterButton__ctor_m64DA773EDED1785B71BD27B79D511B808BB78293 (void);
// 0x0000033E System.Void Solana.Unity.SDK.WalletAdapterScreen::OnEnable()
extern void WalletAdapterScreen_OnEnable_mF9898D50965A6FCF21AAC8161BFFC5D9F5945A95 (void);
// 0x0000033F System.Void Solana.Unity.SDK.WalletAdapterScreen::_createWalletAdapterButton(Solana.Unity.SDK.SolanaWalletAdapterWebGL/WalletSpecs)
extern void WalletAdapterScreen__createWalletAdapterButton_m6344416493D66BF91D141B4D2B73E79874FE24FD (void);
// 0x00000340 System.Void Solana.Unity.SDK.WalletAdapterScreen::UpdateWalletAdapterButtons()
extern void WalletAdapterScreen_UpdateWalletAdapterButtons_m69B382707A88E4A2E4D8B6A63A40C21EB54ABAE6 (void);
// 0x00000341 System.Void Solana.Unity.SDK.WalletAdapterScreen::OnClose()
extern void WalletAdapterScreen_OnClose_m0399288F37E03926A7B08D57CE08F9963406C107 (void);
// 0x00000342 System.Void Solana.Unity.SDK.WalletAdapterScreen::.ctor()
extern void WalletAdapterScreen__ctor_m710315BCA11879CE2D6459119936E4774F1E6741 (void);
// 0x00000343 System.Void Solana.Unity.SDK.WalletAdapterScreen::<_createWalletAdapterButton>b__5_0(System.String)
extern void WalletAdapterScreen_U3C_createWalletAdapterButtonU3Eb__5_0_mEDF88A56D47C74FB69CE6DEFBB4DF0434128313E (void);
// 0x00000344 System.Void Solana.Unity.SDK.UnityRateLimiter::.ctor(System.Int32,System.Int32)
extern void UnityRateLimiter__ctor_m5A3857EFDC323CA482760B8E9C4BB7C8A0061CC8 (void);
// 0x00000345 Solana.Unity.SDK.UnityRateLimiter Solana.Unity.SDK.UnityRateLimiter::Create()
extern void UnityRateLimiter_Create_m543FD9E67876BD4EFEAF7D1553B86092780EAB40 (void);
// 0x00000346 System.Boolean Solana.Unity.SDK.UnityRateLimiter::CanFire()
extern void UnityRateLimiter_CanFire_m624E172B42495D96FE534D803B036EA83BDAC539 (void);
// 0x00000347 System.Void Solana.Unity.SDK.UnityRateLimiter::Fire()
extern void UnityRateLimiter_Fire_mB650F73DC824F20F0BC157F264F9DC0AB358EA2C (void);
// 0x00000348 System.DateTime Solana.Unity.SDK.UnityRateLimiter::NextFireAllowed(System.DateTime)
extern void UnityRateLimiter_NextFireAllowed_m28D43FB28376FEDA47FF4051F536ABA2B72CDDD8 (void);
// 0x00000349 Solana.Unity.SDK.UnityRateLimiter Solana.Unity.SDK.UnityRateLimiter::PerSeconds(System.Int32)
extern void UnityRateLimiter_PerSeconds_m256EB0C4E105288F9D4DEE6BB83C1A5D031D9B76 (void);
// 0x0000034A Solana.Unity.SDK.UnityRateLimiter Solana.Unity.SDK.UnityRateLimiter::PerMs(System.Int32)
extern void UnityRateLimiter_PerMs_mB1AB2E67603A9802357A230BDBDCC8AED3F705BF (void);
// 0x0000034B Solana.Unity.SDK.UnityRateLimiter Solana.Unity.SDK.UnityRateLimiter::AllowHits(System.Int32)
extern void UnityRateLimiter_AllowHits_m5BEC977A9221882DE49D39CB60FB1A9840595292 (void);
// 0x0000034C System.String Solana.Unity.SDK.UnityRateLimiter::ToString()
extern void UnityRateLimiter_ToString_m3B142EEC9634032EE875590B505A5082EC03A573 (void);
// 0x0000034D System.Void Solana.Unity.SDK.UnityRateLimiter/<Fire>d__6::MoveNext()
extern void U3CFireU3Ed__6_MoveNext_m507D9ED243310C6ADFC2E61B458DE9505F9E9BEA (void);
// 0x0000034E System.Void Solana.Unity.SDK.UnityRateLimiter/<Fire>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CFireU3Ed__6_SetStateMachine_m051044CC9B214DA55D7F8AA30B1FA7FEF581EB9F (void);
// 0x0000034F Solana.Unity.SDK.RpcCluster Solana.Unity.SDK.WalletBase::get_RpcCluster()
extern void WalletBase_get_RpcCluster_mE4D71E2542DA0EDAC673E4A69CBEC24D41E73A60 (void);
// 0x00000350 Solana.Unity.Rpc.IRpcClient Solana.Unity.SDK.WalletBase::get_ActiveRpcClient()
extern void WalletBase_get_ActiveRpcClient_m687535E1EA6E8C32360E2B8D6A280149AF25B09F (void);
// 0x00000351 Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.SDK.WalletBase::get_ActiveStreamingRpcClient()
extern void WalletBase_get_ActiveStreamingRpcClient_m48A25F10EB4F7F65BF5247F3FD90DA6791C7D19A (void);
// 0x00000352 Solana.Unity.Wallet.Account Solana.Unity.SDK.WalletBase::get_Account()
extern void WalletBase_get_Account_m7732EE5A383DB9B749A520E92DE60384D413F973 (void);
// 0x00000353 System.Void Solana.Unity.SDK.WalletBase::set_Account(Solana.Unity.Wallet.Account)
extern void WalletBase_set_Account_m27F7B52F42474DBF54C20523E868E07073DFB231 (void);
// 0x00000354 Solana.Unity.Wallet.Bip39.Mnemonic Solana.Unity.SDK.WalletBase::get_Mnemonic()
extern void WalletBase_get_Mnemonic_m04DDBE5B054D0670AEDCE2993280DD0962D302CB (void);
// 0x00000355 System.Void Solana.Unity.SDK.WalletBase::set_Mnemonic(Solana.Unity.Wallet.Bip39.Mnemonic)
extern void WalletBase_set_Mnemonic_m5DE5994672AF1312EEEB8BAF5D87821CABB70742 (void);
// 0x00000356 System.Void Solana.Unity.SDK.WalletBase::.ctor(Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void WalletBase__ctor_mF3FC1E138065DEA23D6169D8F50897D5CD3C7B73 (void);
// 0x00000357 System.Void Solana.Unity.SDK.WalletBase::Setup()
extern void WalletBase_Setup_mD8AEB89DAEF1E6E112BC5A4DBF80A2B461AEC1C1 (void);
// 0x00000358 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.WalletBase::Login(System.String)
extern void WalletBase_Login_m10A19211BF3713E40BED0FF15C63CD3E045B4414 (void);
// 0x00000359 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.WalletBase::_Login(System.String)
// 0x0000035A System.Void Solana.Unity.SDK.WalletBase::Logout()
extern void WalletBase_Logout_m3B108A721927DE4193D950064CC85AD1EF983063 (void);
// 0x0000035B System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.WalletBase::CreateAccount(System.String,System.String)
extern void WalletBase_CreateAccount_m7A5513BC3C0B6BAE715E75F935B3E31029CF15C1 (void);
// 0x0000035C System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.WalletBase::_CreateAccount(System.String,System.String)
// 0x0000035D System.Threading.Tasks.Task`1<System.Double> Solana.Unity.SDK.WalletBase::GetBalance(Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_GetBalance_mFDA652FE06BAF981E141F3E3C4E850063864D3E8 (void);
// 0x0000035E System.Threading.Tasks.Task`1<System.Double> Solana.Unity.SDK.WalletBase::GetBalance(Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_GetBalance_mE5E141D28638C4E7D696419E325D2A03338E827E (void);
// 0x0000035F System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.WalletBase::Transfer(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_Transfer_m77BAA44E1583D7A7676DEAA3A2942AC22F33EFA2 (void);
// 0x00000360 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.WalletBase::Transfer(Solana.Unity.Wallet.PublicKey,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_Transfer_mF8321F8530985BFDB9FE98402E7AB271547F2ABE (void);
// 0x00000361 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.TokenAccount[]> Solana.Unity.SDK.WalletBase::GetTokenAccounts(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey)
extern void WalletBase_GetTokenAccounts_mFBB7ECD909AF618AD7EC0C1882DFF297153AA809 (void);
// 0x00000362 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.TokenAccount[]> Solana.Unity.SDK.WalletBase::GetTokenAccounts(Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_GetTokenAccounts_m00DFF5975C7E4AF8D8EAA5C0C14E8A3A0341D922 (void);
// 0x00000363 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.WalletBase::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
// 0x00000364 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.WalletBase::SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void WalletBase_SignTransaction_m2412CD8FECA0E47ABE2FD4934DA7C3E9F55028CF (void);
// 0x00000365 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.WalletBase::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
// 0x00000366 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.WalletBase::SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void WalletBase_SignAllTransactions_m3AD990F81DA3BB6828B9F02F8BC31CBF29B38C4A (void);
// 0x00000367 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.WalletBase::SignAndSendTransaction(Solana.Unity.Rpc.Models.Transaction,System.Boolean,Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_SignAndSendTransaction_m00C8573CB2DB52592851D8943C6D6C50EE01E634 (void);
// 0x00000368 System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.WalletBase::SignMessage(System.Byte[])
// 0x00000369 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.SDK.WalletBase::RequestAirdrop(System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void WalletBase_RequestAirdrop_m3E6F776B473036ACDB61CBD818F4DD56BEDC684E (void);
// 0x0000036A System.Threading.Tasks.Task`1<System.String> Solana.Unity.SDK.WalletBase::GetBlockHash(Solana.Unity.Rpc.Types.Commitment,System.Boolean,System.Int32)
extern void WalletBase_GetBlockHash_mE40BF3FB56691F297709370584105CD98D5419B8 (void);
// 0x0000036B Solana.Unity.Rpc.IRpcClient Solana.Unity.SDK.WalletBase::StartConnection()
extern void WalletBase_StartConnection_m82161B02C2A81C4D381047DCB83CC980A5949B07 (void);
// 0x0000036C Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.SDK.WalletBase::StartStreamingConnection()
extern void WalletBase_StartStreamingConnection_m1D34CE3809AF11D30E38FC8AFEDC54926EA486D0 (void);
// 0x0000036D System.Threading.Tasks.Task Solana.Unity.SDK.WalletBase::AwaitWsRpcConnection()
extern void WalletBase_AwaitWsRpcConnection_mB78FF9611896675488AA78D9EF3FCDDFEA7C37E4 (void);
// 0x0000036E System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignaturePubKeyPair> Solana.Unity.SDK.WalletBase::DeduplicateTransactionSignatures(System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignaturePubKeyPair>,System.Boolean)
extern void WalletBase_DeduplicateTransactionSignatures_m2C76DF8137668DEC541C537CEE0EECE195D9CAB8 (void);
// 0x0000036F System.Void Solana.Unity.SDK.WalletBase::<StartStreamingConnection>b__48_0()
extern void WalletBase_U3CStartStreamingConnectionU3Eb__48_0_mB427A572045986B97C8EC8E54816AAF8D54AA6E9 (void);
// 0x00000370 System.Void Solana.Unity.SDK.WalletBase/<Login>d__27::MoveNext()
extern void U3CLoginU3Ed__27_MoveNext_m0C91351E890E4E40F48DD825E10D85144AED9407 (void);
// 0x00000371 System.Void Solana.Unity.SDK.WalletBase/<Login>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoginU3Ed__27_SetStateMachine_m559C5A606C3AE91FFD86218C376F42B94A21F8AB (void);
// 0x00000372 System.Void Solana.Unity.SDK.WalletBase/<CreateAccount>d__30::MoveNext()
extern void U3CCreateAccountU3Ed__30_MoveNext_mE4331B53A9DC8A63681898E67D8489A2ABFD6E3D (void);
// 0x00000373 System.Void Solana.Unity.SDK.WalletBase/<CreateAccount>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateAccountU3Ed__30_SetStateMachine_m830775785A8260F06D0A055FE9CFA23FA3551D5F (void);
// 0x00000374 System.Void Solana.Unity.SDK.WalletBase/<GetBalance>d__32::MoveNext()
extern void U3CGetBalanceU3Ed__32_MoveNext_m14988E7626CE1C4AF30E22F12161A0E0C37DE79E (void);
// 0x00000375 System.Void Solana.Unity.SDK.WalletBase/<GetBalance>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBalanceU3Ed__32_SetStateMachine_m7A7F56AADAADA9BC23716B817DCB98DF1E35AB0B (void);
// 0x00000376 System.Void Solana.Unity.SDK.WalletBase/<GetBalance>d__33::MoveNext()
extern void U3CGetBalanceU3Ed__33_MoveNext_mE3FD12B37BAFAD05A095863F74A0BEA02A8A3A87 (void);
// 0x00000377 System.Void Solana.Unity.SDK.WalletBase/<GetBalance>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBalanceU3Ed__33_SetStateMachine_mE8D27EB08A51BD3F4ABEB28EA556579BD0B7A5CC (void);
// 0x00000378 System.Void Solana.Unity.SDK.WalletBase/<Transfer>d__34::MoveNext()
extern void U3CTransferU3Ed__34_MoveNext_m36A26B47E62835C10F286025C8466E19DC1AE7DD (void);
// 0x00000379 System.Void Solana.Unity.SDK.WalletBase/<Transfer>d__34::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CTransferU3Ed__34_SetStateMachine_m6329542B1265798F1B95A89AA76D71CE42D51623 (void);
// 0x0000037A System.Void Solana.Unity.SDK.WalletBase/<Transfer>d__35::MoveNext()
extern void U3CTransferU3Ed__35_MoveNext_mE6D029E0EE19C202DCE7662F00B3EF60A0C9D22B (void);
// 0x0000037B System.Void Solana.Unity.SDK.WalletBase/<Transfer>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CTransferU3Ed__35_SetStateMachine_m14527CF27F604315B1F03FB5EAB4CCB34D65C14C (void);
// 0x0000037C System.Void Solana.Unity.SDK.WalletBase/<GetTokenAccounts>d__36::MoveNext()
extern void U3CGetTokenAccountsU3Ed__36_MoveNext_mCC8B5353A7B401827EC1D0E2E183F75A826918AB (void);
// 0x0000037D System.Void Solana.Unity.SDK.WalletBase/<GetTokenAccounts>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTokenAccountsU3Ed__36_SetStateMachine_m9BF32F86CB1C7D64D1B597AE05AEF21151960D1D (void);
// 0x0000037E System.Void Solana.Unity.SDK.WalletBase/<GetTokenAccounts>d__37::MoveNext()
extern void U3CGetTokenAccountsU3Ed__37_MoveNext_m737884E55851B157EC89D5F34E77F9DE52C20F56 (void);
// 0x0000037F System.Void Solana.Unity.SDK.WalletBase/<GetTokenAccounts>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTokenAccountsU3Ed__37_SetStateMachine_m2CF3D890336470F77D6FCC5EE374834C8B268699 (void);
// 0x00000380 System.Void Solana.Unity.SDK.WalletBase/<SignTransaction>d__39::MoveNext()
extern void U3CSignTransactionU3Ed__39_MoveNext_m8BB1D1C048E3F9410FE4C59AB4FBD4BBCD60340B (void);
// 0x00000381 System.Void Solana.Unity.SDK.WalletBase/<SignTransaction>d__39::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSignTransactionU3Ed__39_SetStateMachine_mAD77379C7A76A38C7AC11CDF553D30BEC2E24AA1 (void);
// 0x00000382 System.Void Solana.Unity.SDK.WalletBase/<SignAllTransactions>d__41::MoveNext()
extern void U3CSignAllTransactionsU3Ed__41_MoveNext_m3FAE9462D015F1742DCFE8D87FF03AC1DE0788E2 (void);
// 0x00000383 System.Void Solana.Unity.SDK.WalletBase/<SignAllTransactions>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSignAllTransactionsU3Ed__41_SetStateMachine_m65A179ABDB3C4C9A77803BDF32E0BEDB14109B1F (void);
// 0x00000384 System.Void Solana.Unity.SDK.WalletBase/<SignAndSendTransaction>d__42::MoveNext()
extern void U3CSignAndSendTransactionU3Ed__42_MoveNext_mEA8D88258C381711E210BA37CF501721D1F00A41 (void);
// 0x00000385 System.Void Solana.Unity.SDK.WalletBase/<SignAndSendTransaction>d__42::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSignAndSendTransactionU3Ed__42_SetStateMachine_mCBBD9BD3A3274AEFECDFBB5A7A83F2564E1738A9 (void);
// 0x00000386 System.Void Solana.Unity.SDK.WalletBase/<RequestAirdrop>d__44::MoveNext()
extern void U3CRequestAirdropU3Ed__44_MoveNext_m853D672A638056CF5A67211A8A7472F3C0D4D385 (void);
// 0x00000387 System.Void Solana.Unity.SDK.WalletBase/<RequestAirdrop>d__44::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRequestAirdropU3Ed__44_SetStateMachine_m085D704BAFDAA89FD06AFC9475EBE24F53D0AAFA (void);
// 0x00000388 System.Void Solana.Unity.SDK.WalletBase/<GetBlockHash>d__46::MoveNext()
extern void U3CGetBlockHashU3Ed__46_MoveNext_mD9516DEB58F41FA003F629417234F9FDA268BA42 (void);
// 0x00000389 System.Void Solana.Unity.SDK.WalletBase/<GetBlockHash>d__46::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBlockHashU3Ed__46_SetStateMachine_m1E60FBA4AFC2810E2004F230BD4A50B8D5A6AE7C (void);
// 0x0000038A System.Void Solana.Unity.SDK.WalletBase/<>c__DisplayClass50_0::.ctor()
extern void U3CU3Ec__DisplayClass50_0__ctor_m31C40CBF6AC3244C6AF8B613F64FF14C1317F729 (void);
// 0x0000038B System.Void Solana.Unity.SDK.WalletBase/<>c__DisplayClass50_1::.ctor()
extern void U3CU3Ec__DisplayClass50_1__ctor_m56953ED94318E0CFEF0783ADA24F35BB36F3BA5E (void);
// 0x0000038C System.Boolean Solana.Unity.SDK.WalletBase/<>c__DisplayClass50_1::<DeduplicateTransactionSignatures>b__0(Solana.Unity.Rpc.Models.SignaturePubKeyPair)
extern void U3CU3Ec__DisplayClass50_1_U3CDeduplicateTransactionSignaturesU3Eb__0_m7D0E474C37785A564E996373AA347D4F5CBBEC34 (void);
// 0x0000038D Solana.Unity.SDK.WalletBase Solana.Unity.SDK.Web3::get_WalletBase()
extern void Web3_get_WalletBase_m0737A2BA9645FD357E4706571AAABAFD0385C7AA (void);
// 0x0000038E System.Void Solana.Unity.SDK.Web3::set_WalletBase(Solana.Unity.SDK.WalletBase)
extern void Web3_set_WalletBase_m5512313ED2D0D8C8A366D3988D62644E79F8D2EA (void);
// 0x0000038F System.Int32 Solana.Unity.SDK.Web3::get_RpcMaxHits()
extern void Web3_get_RpcMaxHits_m352B69454EF78154AC568F48F95CC87845212885 (void);
// 0x00000390 System.Void Solana.Unity.SDK.Web3::set_RpcMaxHits(System.Int32)
extern void Web3_set_RpcMaxHits_m34B46DD6D32781E16D178028AA600F575C03056C (void);
// 0x00000391 System.Int32 Solana.Unity.SDK.Web3::get_RpcMaxHitsPerSeconds()
extern void Web3_get_RpcMaxHitsPerSeconds_m1AC8B9DF96A7BEC16A55A4BDED032FF8CB416141 (void);
// 0x00000392 System.Void Solana.Unity.SDK.Web3::set_RpcMaxHitsPerSeconds(System.Int32)
extern void Web3_set_RpcMaxHitsPerSeconds_m68BF7750A3FAFDAC159B153220B5021F3ACF397A (void);
// 0x00000393 System.Void Solana.Unity.SDK.Web3::add_OnWalletInstance(Solana.Unity.SDK.Web3/WalletInstance)
extern void Web3_add_OnWalletInstance_m998B512985ED58DDB8DEFB758BBCFEDB581315C5 (void);
// 0x00000394 System.Void Solana.Unity.SDK.Web3::remove_OnWalletInstance(Solana.Unity.SDK.Web3/WalletInstance)
extern void Web3_remove_OnWalletInstance_m6EF9E66A87EB3C3AE92838503209C7723EFAB4AF (void);
// 0x00000395 System.Void Solana.Unity.SDK.Web3::add_OnWalletChangeStateInternal(Solana.Unity.SDK.Web3/WalletChange)
extern void Web3_add_OnWalletChangeStateInternal_mD2DAFC678B27E27B62C75DDBD0A90C137307516A (void);
// 0x00000396 System.Void Solana.Unity.SDK.Web3::remove_OnWalletChangeStateInternal(Solana.Unity.SDK.Web3/WalletChange)
extern void Web3_remove_OnWalletChangeStateInternal_m1B40A89735BD8A404D1B5CFE2E74E7FF42EFC17B (void);
// 0x00000397 System.Void Solana.Unity.SDK.Web3::add_OnWalletChangeState(Solana.Unity.SDK.Web3/WalletChange)
extern void Web3_add_OnWalletChangeState_m95E31ADF263EBEB060DC4355432CE32A3600DA05 (void);
// 0x00000398 System.Void Solana.Unity.SDK.Web3::remove_OnWalletChangeState(Solana.Unity.SDK.Web3/WalletChange)
extern void Web3_remove_OnWalletChangeState_mCF98836BED11F766596199786F15D9C612B5A493 (void);
// 0x00000399 System.Void Solana.Unity.SDK.Web3::add_OnBalanceChangeInternal(Solana.Unity.SDK.Web3/BalanceChange)
extern void Web3_add_OnBalanceChangeInternal_m3B44AE7CFBE95FF9471C44B862CBD49127CC755F (void);
// 0x0000039A System.Void Solana.Unity.SDK.Web3::remove_OnBalanceChangeInternal(Solana.Unity.SDK.Web3/BalanceChange)
extern void Web3_remove_OnBalanceChangeInternal_mAD5B42C1DE4571534395E8AFAE57BB36F8EF63D3 (void);
// 0x0000039B System.Void Solana.Unity.SDK.Web3::add_OnBalanceChange(Solana.Unity.SDK.Web3/BalanceChange)
extern void Web3_add_OnBalanceChange_m9F2472C2389136A6B7FF8B916F52F1927EFD3239 (void);
// 0x0000039C System.Void Solana.Unity.SDK.Web3::remove_OnBalanceChange(Solana.Unity.SDK.Web3/BalanceChange)
extern void Web3_remove_OnBalanceChange_m4F6AE35852255299C6E9A855ED12F5788A3468F9 (void);
// 0x0000039D System.Int32 Solana.Unity.SDK.Web3::get_NftLoadingRequestsDelay()
extern void Web3_get_NftLoadingRequestsDelay_m6096EBB8963C1A6FB4942E20C4BCC7DB5F18EBD0 (void);
// 0x0000039E System.Void Solana.Unity.SDK.Web3::set_NftLoadingRequestsDelay(System.Int32)
extern void Web3_set_NftLoadingRequestsDelay_mE362F9F4BA5443891BAA689386943B034DEBB5F7 (void);
// 0x0000039F System.Void Solana.Unity.SDK.Web3::add_OnNFTsUpdateInternal(Solana.Unity.SDK.Web3/NFTsUpdate)
extern void Web3_add_OnNFTsUpdateInternal_mB9FF62D1EDA4389B2C343328735F6541C015C8AA (void);
// 0x000003A0 System.Void Solana.Unity.SDK.Web3::remove_OnNFTsUpdateInternal(Solana.Unity.SDK.Web3/NFTsUpdate)
extern void Web3_remove_OnNFTsUpdateInternal_m4FB2FFC18DA44B06AE1E5CD81CEE92A5C032AA35 (void);
// 0x000003A1 System.Void Solana.Unity.SDK.Web3::add_OnNFTsUpdate(Solana.Unity.SDK.Web3/NFTsUpdate)
extern void Web3_add_OnNFTsUpdate_mAE5D67F84FC849C09D95A8547A880337917EBC51 (void);
// 0x000003A2 System.Void Solana.Unity.SDK.Web3::remove_OnNFTsUpdate(Solana.Unity.SDK.Web3/NFTsUpdate)
extern void Web3_remove_OnNFTsUpdate_m7D442FCA0D6C0841A9BF81C58F8998F3D6FBC633 (void);
// 0x000003A3 Solana.Unity.Rpc.IRpcClient Solana.Unity.SDK.Web3::get_Rpc()
extern void Web3_get_Rpc_m835B7283D8B993B25F9CDBD6628C040C38432C99 (void);
// 0x000003A4 Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.SDK.Web3::get_WsRpc()
extern void Web3_get_WsRpc_m6C034BDCBDDFD5A219D4C94FEB1320F4797BEC9D (void);
// 0x000003A5 Solana.Unity.Wallet.Account Solana.Unity.SDK.Web3::get_Account()
extern void Web3_get_Account_mD177714BA64705E67380460AF29D7DF7A539FF72 (void);
// 0x000003A6 Solana.Unity.SDK.WalletBase Solana.Unity.SDK.Web3::get_Wallet()
extern void Web3_get_Wallet_m356DFCF42CF7F0F409FB5ADC61E68049D7B79FB4 (void);
// 0x000003A7 Solana.Unity.SDK.WalletBase Solana.Unity.SDK.Web3::get_Base()
extern void Web3_get_Base_m5CF39B73E6EFB497EB326FB227E45B9ACE1B5983 (void);
// 0x000003A8 System.Void Solana.Unity.SDK.Web3::Awake()
extern void Web3_Awake_m4D75E007147E71926F93429EE0C8D8D158869E0E (void);
// 0x000003A9 System.Void Solana.Unity.SDK.Web3::Start()
extern void Web3_Start_mACBCA76D472053E8A42BA93A4423E1D0100EFD83 (void);
// 0x000003AA System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3::LoginInGameWallet(System.String)
extern void Web3_LoginInGameWallet_mAA3374F553187DF9CC68F2E8BAB77A8017C24EF2 (void);
// 0x000003AB System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3::CreateAccount(System.String,System.String)
extern void Web3_CreateAccount_m2E9B41CA60E21C1A3F1DC138592492F2914CC638 (void);
// 0x000003AC System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3::LoginWeb3Auth(Provider)
extern void Web3_LoginWeb3Auth_mDB5FF54A98A315995D33A9E3944F53F570BD8476 (void);
// 0x000003AD System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3::LoginXNFT()
extern void Web3_LoginXNFT_m5D16883822850CE0BC33E41A24306E2014B026C6 (void);
// 0x000003AE System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3::LoginWalletAdapter()
extern void Web3_LoginWalletAdapter_m2118BE1A5E94BC67C7EE855CD4E8A2E44CD52C19 (void);
// 0x000003AF System.Void Solana.Unity.SDK.Web3::LoginWithWalletAdapter()
extern void Web3_LoginWithWalletAdapter_mC35EB80A0C48CFC15F0A8DD5DEC07C9286A6198F (void);
// 0x000003B0 System.Void Solana.Unity.SDK.Web3::LoginWithWeb3Auth(System.String)
extern void Web3_LoginWithWeb3Auth_m9480E128C550BE6955E093A989ABADF7592A5E8A (void);
// 0x000003B1 System.Void Solana.Unity.SDK.Web3::Logout()
extern void Web3_Logout_m66F7405563C0B17EEDEF54BD3F8E19021E21F260 (void);
// 0x000003B2 System.Threading.Tasks.Task`1<System.String> Solana.Unity.SDK.Web3::BlockHash(Solana.Unity.Rpc.Types.Commitment,System.Boolean,System.Int32)
extern void Web3_BlockHash_mF0F916BB8FAB924199BCBC656D36439CA07319F1 (void);
// 0x000003B3 Cysharp.Threading.Tasks.UniTask Solana.Unity.SDK.Web3::UpdateBalance(Solana.Unity.Rpc.Types.Commitment)
extern void Web3_UpdateBalance_mCF9C2085C99213F793978DF0D7B0D4E5901BAA20 (void);
// 0x000003B4 Cysharp.Threading.Tasks.UniTask Solana.Unity.SDK.Web3::UpdateNFTs(Solana.Unity.Rpc.Types.Commitment)
extern void Web3_UpdateNFTs_mFD7E181C3169E342F4CE5FF6F9FA847AACCB9FC2 (void);
// 0x000003B5 Cysharp.Threading.Tasks.UniTask`1<System.Collections.Generic.List`1<Solana.Unity.SDK.Nft.Nft>> Solana.Unity.SDK.Web3::LoadNFTs(System.Boolean,System.Boolean,System.Int32,Solana.Unity.Rpc.Types.Commitment)
extern void Web3_LoadNFTs_m80318B583936E2B0FECCFCF64317A67FCB0FCD13 (void);
// 0x000003B6 Cysharp.Threading.Tasks.UniTask Solana.Unity.SDK.Web3::SubscribeToWalletEvents(Solana.Unity.Rpc.Types.Commitment)
extern void Web3_SubscribeToWalletEvents_m3568141760E3A33287C9CBC480112BDDA4A05C05 (void);
// 0x000003B7 Solana.Unity.Rpc.IRpcClient Solana.Unity.SDK.Web3::GetDefaultRpc()
extern void Web3_GetDefaultRpc_m3EFBE5271E82B598F84CA629A4A5BB6CE941C0B6 (void);
// 0x000003B8 Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.SDK.Web3::GetDefaultWsRpc()
extern void Web3_GetDefaultWsRpc_m25AA235EE58CE4AE6EDDEC3754DC929401256DD5 (void);
// 0x000003B9 System.Void Solana.Unity.SDK.Web3::SavePlayerPrefs(System.String,System.String)
extern void Web3_SavePlayerPrefs_m62B5BC54D607D161D713AD54ABB032DBB91CEF80 (void);
// 0x000003BA System.String Solana.Unity.SDK.Web3::LoadPlayerPrefs(System.String)
extern void Web3_LoadPlayerPrefs_mE138462B15136AAAE0E76F00EA0A26F8E50CBAE0 (void);
// 0x000003BB System.Void Solana.Unity.SDK.Web3::Setup()
extern void Web3_Setup_m93A01217E5AF3D4FE5C45336309F23DA986C914F (void);
// 0x000003BC System.Void Solana.Unity.SDK.Web3::.ctor()
extern void Web3__ctor_mBA03A1CB3F417BFC58BCED8C37501C4902CFB107 (void);
// 0x000003BD System.Void Solana.Unity.SDK.Web3::.cctor()
extern void Web3__cctor_mCAE3EF1E7AB0E95ACD852A92596148BD2667E237 (void);
// 0x000003BE System.Void Solana.Unity.SDK.Web3::<Start>b__67_0(Solana.Unity.Wallet.Account)
extern void Web3_U3CStartU3Eb__67_0_mE6E35480C6E6F0328858E45CA7C0EA255E677DEA (void);
// 0x000003BF System.Void Solana.Unity.SDK.Web3/WalletInstance::.ctor(System.Object,System.IntPtr)
extern void WalletInstance__ctor_m08FFD5225F6C4434729494831245C48117BA8A9B (void);
// 0x000003C0 System.Void Solana.Unity.SDK.Web3/WalletInstance::Invoke()
extern void WalletInstance_Invoke_m17BC83592F712F8264290A161117DF3C2DAF31A1 (void);
// 0x000003C1 System.IAsyncResult Solana.Unity.SDK.Web3/WalletInstance::BeginInvoke(System.AsyncCallback,System.Object)
extern void WalletInstance_BeginInvoke_mF2A3DCD2F4ECC29D5195E4EEDD639361BC05BE0A (void);
// 0x000003C2 System.Void Solana.Unity.SDK.Web3/WalletInstance::EndInvoke(System.IAsyncResult)
extern void WalletInstance_EndInvoke_m89AD1AEB0932188F3F69599D5835105247D33BC8 (void);
// 0x000003C3 System.Void Solana.Unity.SDK.Web3/WalletChange::.ctor(System.Object,System.IntPtr)
extern void WalletChange__ctor_mBB9555EDFB65E5D8479FA77026972154DC573FEE (void);
// 0x000003C4 System.Void Solana.Unity.SDK.Web3/WalletChange::Invoke()
extern void WalletChange_Invoke_m93ABFE7A7E63322C197860DCC72B5EF2F09A3405 (void);
// 0x000003C5 System.IAsyncResult Solana.Unity.SDK.Web3/WalletChange::BeginInvoke(System.AsyncCallback,System.Object)
extern void WalletChange_BeginInvoke_mD7D56C900FB919ADF5FFA60FE53B166D2C32D8B9 (void);
// 0x000003C6 System.Void Solana.Unity.SDK.Web3/WalletChange::EndInvoke(System.IAsyncResult)
extern void WalletChange_EndInvoke_mB7438B0F5AEC84C62B55D86E687F4A61FA8FC3EE (void);
// 0x000003C7 System.Void Solana.Unity.SDK.Web3/BalanceChange::.ctor(System.Object,System.IntPtr)
extern void BalanceChange__ctor_m7E80F85024D3099465B2A759E24F18E2AEECC118 (void);
// 0x000003C8 System.Void Solana.Unity.SDK.Web3/BalanceChange::Invoke(System.Double)
extern void BalanceChange_Invoke_mD9A313F9D252F8E14B7299497CD862731B09CE9C (void);
// 0x000003C9 System.IAsyncResult Solana.Unity.SDK.Web3/BalanceChange::BeginInvoke(System.Double,System.AsyncCallback,System.Object)
extern void BalanceChange_BeginInvoke_mC10885E03670710705E531C19EF5F205092DBBFA (void);
// 0x000003CA System.Void Solana.Unity.SDK.Web3/BalanceChange::EndInvoke(System.IAsyncResult)
extern void BalanceChange_EndInvoke_m08A17FE898AC21ADACC069A6A5D53BA69E1619EC (void);
// 0x000003CB System.Void Solana.Unity.SDK.Web3/NFTsUpdate::.ctor(System.Object,System.IntPtr)
extern void NFTsUpdate__ctor_mD290C7E52680FBA1B1BEAC62E0E7055962B44795 (void);
// 0x000003CC System.Void Solana.Unity.SDK.Web3/NFTsUpdate::Invoke(System.Collections.Generic.List`1<Solana.Unity.SDK.Nft.Nft>,System.Int32)
extern void NFTsUpdate_Invoke_mFB763BA9901A33289E2FCFC04C92995A53EC2464 (void);
// 0x000003CD System.IAsyncResult Solana.Unity.SDK.Web3/NFTsUpdate::BeginInvoke(System.Collections.Generic.List`1<Solana.Unity.SDK.Nft.Nft>,System.Int32,System.AsyncCallback,System.Object)
extern void NFTsUpdate_BeginInvoke_mC7526ED69FD054212879293B2E043EB8333EFE0D (void);
// 0x000003CE System.Void Solana.Unity.SDK.Web3/NFTsUpdate::EndInvoke(System.IAsyncResult)
extern void NFTsUpdate_EndInvoke_mC4F2CF65FBCE20BE56AA85D9EA6F232BD0B561DB (void);
// 0x000003CF System.Void Solana.Unity.SDK.Web3/<LoginInGameWallet>d__68::MoveNext()
extern void U3CLoginInGameWalletU3Ed__68_MoveNext_m87A760E0AD194D2516AADC3CB97ED2375ACF4BA8 (void);
// 0x000003D0 System.Void Solana.Unity.SDK.Web3/<LoginInGameWallet>d__68::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoginInGameWalletU3Ed__68_SetStateMachine_m2F1E7026D3D187D85865DDB0F571763AE318B166 (void);
// 0x000003D1 System.Void Solana.Unity.SDK.Web3/<CreateAccount>d__69::MoveNext()
extern void U3CCreateAccountU3Ed__69_MoveNext_m9509D75B7967408BF6C3EABF319214D4CA643556 (void);
// 0x000003D2 System.Void Solana.Unity.SDK.Web3/<CreateAccount>d__69::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateAccountU3Ed__69_SetStateMachine_mC56F979A6CB5AD6D1C477DE6551EFDED028AF7B5 (void);
// 0x000003D3 System.Void Solana.Unity.SDK.Web3/<LoginWeb3Auth>d__70::MoveNext()
extern void U3CLoginWeb3AuthU3Ed__70_MoveNext_mD55625DE87F1066FF85F2F1649AA298C6CB28BC1 (void);
// 0x000003D4 System.Void Solana.Unity.SDK.Web3/<LoginWeb3Auth>d__70::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoginWeb3AuthU3Ed__70_SetStateMachine_mFCFAD64623D996332EE46CF923B08D63FF01F63C (void);
// 0x000003D5 System.Void Solana.Unity.SDK.Web3/<LoginXNFT>d__71::MoveNext()
extern void U3CLoginXNFTU3Ed__71_MoveNext_mC97BFEF295E4779A0C4BD0778986846788BA8BBD (void);
// 0x000003D6 System.Void Solana.Unity.SDK.Web3/<LoginXNFT>d__71::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoginXNFTU3Ed__71_SetStateMachine_m8B53A485B37E689F9D69C0ACBDBA6EA23D0C4F15 (void);
// 0x000003D7 System.Void Solana.Unity.SDK.Web3/<LoginWalletAdapter>d__72::MoveNext()
extern void U3CLoginWalletAdapterU3Ed__72_MoveNext_m4C611AB91465080E71B66624D0A1392A9C4286B2 (void);
// 0x000003D8 System.Void Solana.Unity.SDK.Web3/<LoginWalletAdapter>d__72::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoginWalletAdapterU3Ed__72_SetStateMachine_mB9E829EA97CB38AE20BACEA44C2558C3AB083A2E (void);
// 0x000003D9 System.Void Solana.Unity.SDK.Web3/<UpdateBalance>d__77::MoveNext()
extern void U3CUpdateBalanceU3Ed__77_MoveNext_m903578AA48F9F8506B708DDC9064875A7152508D (void);
// 0x000003DA System.Void Solana.Unity.SDK.Web3/<UpdateBalance>d__77::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUpdateBalanceU3Ed__77_SetStateMachine_mA74A5B030572A9D821FEF4E7B023E376A1F9FEB7 (void);
// 0x000003DB System.Void Solana.Unity.SDK.Web3/<UpdateNFTs>d__78::MoveNext()
extern void U3CUpdateNFTsU3Ed__78_MoveNext_mE8997212300C6884458B1B03954262634C1E9994 (void);
// 0x000003DC System.Void Solana.Unity.SDK.Web3/<UpdateNFTs>d__78::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUpdateNFTsU3Ed__78_SetStateMachine_mF8AC9411D368109415678DD0EDEDB56BDA5881AC (void);
// 0x000003DD System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass79_0::.ctor()
extern void U3CU3Ec__DisplayClass79_0__ctor_mFB528C2C5CF5791C7FC53ED64993FFDFB70E51A8 (void);
// 0x000003DE System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass79_0::<LoadNFTs>b__0(Solana.Unity.SDK.Nft.Nft)
extern void U3CU3Ec__DisplayClass79_0_U3CLoadNFTsU3Eb__0_m6DDC4DF4FDDEB4EC8B405CE0F38CFF1AD96ADA26 (void);
// 0x000003DF System.Boolean Solana.Unity.SDK.Web3/<>c__DisplayClass79_0::<LoadNFTs>b__9(Solana.Unity.Rpc.Models.TokenAccount)
extern void U3CU3Ec__DisplayClass79_0_U3CLoadNFTsU3Eb__9_m2E0F983E790C33962EDA0DC9831F61E4789F7F30 (void);
// 0x000003E0 System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass79_1::.ctor()
extern void U3CU3Ec__DisplayClass79_1__ctor_mE9FD7C8EBE84649523E65D95490DC0FE2047A521 (void);
// 0x000003E1 System.Boolean Solana.Unity.SDK.Web3/<>c__DisplayClass79_1::<LoadNFTs>b__6(Solana.Unity.Rpc.Models.TokenAccount)
extern void U3CU3Ec__DisplayClass79_1_U3CLoadNFTsU3Eb__6_mC925CE36AEF3886F55CA5BE391601FB8A8D516B1 (void);
// 0x000003E2 System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass79_2::.ctor()
extern void U3CU3Ec__DisplayClass79_2__ctor_m9765B4B534609491370762C92ABAF6D319E3FBBA (void);
// 0x000003E3 System.Boolean Solana.Unity.SDK.Web3/<>c__DisplayClass79_2::<LoadNFTs>b__10(Solana.Unity.SDK.Nft.Nft)
extern void U3CU3Ec__DisplayClass79_2_U3CLoadNFTsU3Eb__10_mBCE82020C934CAB7DD904AAD1984AC9914078507 (void);
// 0x000003E4 System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass79_3::.ctor()
extern void U3CU3Ec__DisplayClass79_3__ctor_m358EEB6A512FCFAC62705487CAA123D6F854DB4A (void);
// 0x000003E5 System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass79_3::<LoadNFTs>b__11(Solana.Unity.SDK.Nft.Nft)
extern void U3CU3Ec__DisplayClass79_3_U3CLoadNFTsU3Eb__11_mCF861C689E0392AB29E87A34EA96B17675E99005 (void);
// 0x000003E6 System.Void Solana.Unity.SDK.Web3/<>c::.cctor()
extern void U3CU3Ec__cctor_mBBE80F495D7F042B855D0E04C1DF5C81665F06B6 (void);
// 0x000003E7 System.Void Solana.Unity.SDK.Web3/<>c::.ctor()
extern void U3CU3Ec__ctor_m8023591C793528DF5DEC1201FA2C18D8B6B745DA (void);
// 0x000003E8 System.Boolean Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_5(Solana.Unity.Rpc.Models.TokenAccount)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_5_m58B18A854DDC1F1F14D5196ED2D81C1DB6D3042E (void);
// 0x000003E9 System.Boolean Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_7(Solana.Unity.Rpc.Models.TokenAccount)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_7_m6E2AF5F321000A19982909DD6FF6CB3DDCEDA4DF (void);
// 0x000003EA System.Void Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_1(Solana.Unity.SDK.Nft.Nft)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_1_m515B3D0C2D9A55E645799C5ED69B1678E5955F68 (void);
// 0x000003EB System.String Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_2(Solana.Unity.SDK.Nft.Nft)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_2_m3565CB19DDFE81DBF69E5239385A47169B3CBF43 (void);
// 0x000003EC Solana.Unity.SDK.Nft.Nft Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_3(System.Linq.IGrouping`2<System.String,Solana.Unity.SDK.Nft.Nft>)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_3_m1A5602997171326C1E4DF7E4B4AE62472893436D (void);
// 0x000003ED System.Boolean Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_4(Solana.Unity.SDK.Nft.Nft)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_4_mAB86D732FF9D9ED1D3F802ABB9EF0BB40311476A (void);
// 0x000003EE System.Boolean Solana.Unity.SDK.Web3/<>c::<LoadNFTs>b__79_8(Solana.Unity.Rpc.Models.TokenAccount)
extern void U3CU3Ec_U3CLoadNFTsU3Eb__79_8_mF39E41AD64100CC2D41F80F602513199B5A5B2D0 (void);
// 0x000003EF System.Void Solana.Unity.SDK.Web3/<LoadNFTs>d__79::MoveNext()
extern void U3CLoadNFTsU3Ed__79_MoveNext_m08B56300A222E6077D215F081CE7EDA6B090B395 (void);
// 0x000003F0 System.Void Solana.Unity.SDK.Web3/<LoadNFTs>d__79::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoadNFTsU3Ed__79_SetStateMachine_m5A50A0A9F8355CAD01D09D9C40C03FF81F53FF5C (void);
// 0x000003F1 System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass80_0::.ctor()
extern void U3CU3Ec__DisplayClass80_0__ctor_m0AFBE4DBD0D5EB3C115CEB84BE9F5C685C239A0A (void);
// 0x000003F2 System.Void Solana.Unity.SDK.Web3/<>c__DisplayClass80_0::<SubscribeToWalletEvents>b__0(Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>)
extern void U3CU3Ec__DisplayClass80_0_U3CSubscribeToWalletEventsU3Eb__0_m187A813060EDB6C85D31EA0C6286974DD357BA99 (void);
// 0x000003F3 System.Void Solana.Unity.SDK.Web3/<SubscribeToWalletEvents>d__80::MoveNext()
extern void U3CSubscribeToWalletEventsU3Ed__80_MoveNext_m052B394788EED3E7D025B9E32C545923B7C2DC61 (void);
// 0x000003F4 System.Void Solana.Unity.SDK.Web3/<SubscribeToWalletEvents>d__80::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeToWalletEventsU3Ed__80_SetStateMachine_m5DB5F713FDCCF53CD67C005764BCB6F394648C29 (void);
// 0x000003F5 System.Void Solana.Unity.SDK.Web3AuthWalletOptions::.ctor()
extern void Web3AuthWalletOptions__ctor_m3860812E774EA6685B0E06E4FFB2D3891AD1CD45 (void);
// 0x000003F6 System.Void Solana.Unity.SDK.Web3AuthWallet::add_OnLoginNotify(System.Action`1<Solana.Unity.Wallet.Account>)
extern void Web3AuthWallet_add_OnLoginNotify_mD3FB2EFF6D1951C84A5BA6B6500C2D8CE26B49B0 (void);
// 0x000003F7 System.Void Solana.Unity.SDK.Web3AuthWallet::remove_OnLoginNotify(System.Action`1<Solana.Unity.Wallet.Account>)
extern void Web3AuthWallet_remove_OnLoginNotify_mE49F93F19D29EADE81DC1EE5D55B9F358A177FAE (void);
// 0x000003F8 System.Void Solana.Unity.SDK.Web3AuthWallet::.ctor(Solana.Unity.SDK.Web3AuthWalletOptions,Solana.Unity.SDK.RpcCluster,System.String,System.String,System.Boolean)
extern void Web3AuthWallet__ctor_m94846D2B5FB9EF6E563B166B9DB854EF0F36064C (void);
// 0x000003F9 System.Void Solana.Unity.SDK.Web3AuthWallet::OnLogin(Web3AuthResponse)
extern void Web3AuthWallet_OnLogin_m960B10D5E79EF244515510A63A48639C6284E24E (void);
// 0x000003FA System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3AuthWallet::_Login(System.String)
extern void Web3AuthWallet__Login_m99542B38C4957637DD168CC4427D7DE27D4EE838 (void);
// 0x000003FB System.Void Solana.Unity.SDK.Web3AuthWallet::Logout()
extern void Web3AuthWallet_Logout_mD2A29FED0E754A03F65C535588F308CA551DAAE7 (void);
// 0x000003FC System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3AuthWallet::_CreateAccount(System.String,System.String)
extern void Web3AuthWallet__CreateAccount_m935B766838C8C5521D0B9FBC8089DC32F0B6177C (void);
// 0x000003FD System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction> Solana.Unity.SDK.Web3AuthWallet::_SignTransaction(Solana.Unity.Rpc.Models.Transaction)
extern void Web3AuthWallet__SignTransaction_m9761048AB57E27A43C66D222E6E9D87E84A779B3 (void);
// 0x000003FE System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Models.Transaction[]> Solana.Unity.SDK.Web3AuthWallet::_SignAllTransactions(Solana.Unity.Rpc.Models.Transaction[])
extern void Web3AuthWallet__SignAllTransactions_m9B72612978B7137ADE17DF1C08F185DF1A417752 (void);
// 0x000003FF System.Threading.Tasks.Task`1<System.Byte[]> Solana.Unity.SDK.Web3AuthWallet::SignMessage(System.Byte[])
extern void Web3AuthWallet_SignMessage_mAE45567F63836DC405A9BC4BCD01B1176157C443 (void);
// 0x00000400 System.Threading.Tasks.Task`1<Solana.Unity.Wallet.Account> Solana.Unity.SDK.Web3AuthWallet::LoginWithProvider(Provider)
extern void Web3AuthWallet_LoginWithProvider_m476B1904A1353A9FFA57CAA3A20A08DC2078C92D (void);
// 0x00000401 System.Void Solana.Unity.SDK.Utility.PublicKeyJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,Solana.Unity.Wallet.PublicKey,Newtonsoft.Json.JsonSerializer)
extern void PublicKeyJsonConverter_WriteJson_m76453B0ED42C18F5B9DFF03579356F9D76B8E1CA (void);
// 0x00000402 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Utility.PublicKeyJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Solana.Unity.Wallet.PublicKey,System.Boolean,Newtonsoft.Json.JsonSerializer)
extern void PublicKeyJsonConverter_ReadJson_m8CF91A986CB3C1160BC2E5BD2B25E2357B3D10BC (void);
// 0x00000403 System.Void Solana.Unity.SDK.Utility.PublicKeyJsonConverter::.ctor()
extern void PublicKeyJsonConverter__ctor_m63E085B9BF14733C7703233E1A97EA6497474618 (void);
// 0x00000404 System.Void Solana.Unity.SDK.Utility.CreatorJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,Solana.Unity.Metaplex.NFT.Library.Creator,Newtonsoft.Json.JsonSerializer)
extern void CreatorJsonConverter_WriteJson_m1C019BDDA2CE7F526CD6A663DCEB3C9D2DA10BEC (void);
// 0x00000405 Solana.Unity.Metaplex.NFT.Library.Creator Solana.Unity.SDK.Utility.CreatorJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Solana.Unity.Metaplex.NFT.Library.Creator,System.Boolean,Newtonsoft.Json.JsonSerializer)
extern void CreatorJsonConverter_ReadJson_m797A058B9688BB0DEF93A7657EAA28089DDCA726 (void);
// 0x00000406 System.Void Solana.Unity.SDK.Utility.CreatorJsonConverter::.ctor()
extern void CreatorJsonConverter__ctor_mF962DCDC5F3141BE9F7E6338AF57A6427F479AF6 (void);
// 0x00000407 System.Void Solana.Unity.SDK.Utility.CollectionJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,Solana.Unity.Metaplex.NFT.Library.Collection,Newtonsoft.Json.JsonSerializer)
extern void CollectionJsonConverter_WriteJson_m5EE49D46A9ABF9B01CE6B633C1A6E5780B6A68DF (void);
// 0x00000408 Solana.Unity.Metaplex.NFT.Library.Collection Solana.Unity.SDK.Utility.CollectionJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Solana.Unity.Metaplex.NFT.Library.Collection,System.Boolean,Newtonsoft.Json.JsonSerializer)
extern void CollectionJsonConverter_ReadJson_mFF0963DB3D5A8FBCFF875B96585CF58FAC3C064A (void);
// 0x00000409 System.Void Solana.Unity.SDK.Utility.CollectionJsonConverter::.ctor()
extern void CollectionJsonConverter__ctor_m84A462A762A2D3DDAA54743C699D7C721975CA2A (void);
// 0x0000040A System.Threading.Tasks.Task`1<T> Solana.Unity.SDK.Utility.FileLoader::LoadFile(System.String,System.String)
// 0x0000040B System.Threading.Tasks.Task`1<T> Solana.Unity.SDK.Utility.FileLoader::LoadTexture(System.String,System.Threading.CancellationToken)
// 0x0000040C Cysharp.Threading.Tasks.UniTask`1<T> Solana.Unity.SDK.Utility.FileLoader::LoadGif(System.String,System.Threading.CancellationToken)
// 0x0000040D UnityEngine.Texture2D Solana.Unity.SDK.Utility.FileLoader::GetTextureFromGifByteStream(System.Byte[])
extern void FileLoader_GetTextureFromGifByteStream_mD606B61F26264099CB8E2F4561D7FFEA208D2185 (void);
// 0x0000040E T Solana.Unity.SDK.Utility.FileLoader::LoadFileFromLocalPath(System.String)
// 0x0000040F System.Void Solana.Unity.SDK.Utility.FileLoader::SaveToPersistentDataPath(System.String,T)
// 0x00000410 UnityEngine.Texture2D Solana.Unity.SDK.Utility.FileLoader::Resize(UnityEngine.Texture,System.Int32,System.Int32)
extern void FileLoader_Resize_m9CEA433A8CE82F3C2D109EEB0E105DB8DBE09000 (void);
// 0x00000411 System.Void Solana.Unity.SDK.Utility.FileLoader::DestroyTexture(UnityEngine.Texture)
extern void FileLoader_DestroyTexture_mEF1E99FD49EEB7970B1A41AC588914EDD466B33B (void);
// 0x00000412 System.Void Solana.Unity.SDK.Utility.FileLoader/<LoadFile>d__0`1::MoveNext()
// 0x00000413 System.Void Solana.Unity.SDK.Utility.FileLoader/<LoadFile>d__0`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x00000414 System.Void Solana.Unity.SDK.Utility.FileLoader/<LoadTexture>d__1`1::MoveNext()
// 0x00000415 System.Void Solana.Unity.SDK.Utility.FileLoader/<LoadTexture>d__1`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x00000416 System.Void Solana.Unity.SDK.Utility.FileLoader/<LoadGif>d__2`1::MoveNext()
// 0x00000417 System.Void Solana.Unity.SDK.Utility.FileLoader/<LoadGif>d__2`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x00000418 System.Byte[] Solana.Unity.SDK.Utility.ObjectToByte::ObjectToByteArray(System.Object)
extern void ObjectToByte_ObjectToByteArray_m0969DAC0E1F59DDD71611AB8273327D43A273D00 (void);
// 0x00000419 System.Object Solana.Unity.SDK.Utility.ObjectToByte::ByteArrayToObject(System.Byte[])
extern void ObjectToByte_ByteArrayToObject_m318C1EC6699063FE6EC72CA4465A7FB187C7CBB3 (void);
// 0x0000041A System.Byte[] Solana.Unity.SDK.Utility.ObjectToByte::getBytes(Solana.Unity.SDK.CompiledInstruction)
extern void ObjectToByte_getBytes_mA49C2855AE0AA982667DE0C7383EF0D53F1AE0B6 (void);
// 0x0000041B Solana.Unity.SDK.CompiledInstruction Solana.Unity.SDK.Utility.ObjectToByte::fromBytes(System.Byte[])
extern void ObjectToByte_fromBytes_mF250A7DF4C8A80BCC10E7123D71C64B9746355B8 (void);
// 0x0000041C System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeBase58StringFromByte(System.Byte[],System.Int32,System.Int32,System.String&)
extern void ObjectToByte_DecodeBase58StringFromByte_mC6CBEFFAA6B15AA40EA4BD9426CE3C58A9485BD6 (void);
// 0x0000041D System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeUTF8StringFromByte(System.Byte[],System.Int32,System.Int32,System.String&)
extern void ObjectToByte_DecodeUTF8StringFromByte_m0D99F929E301E292E7A8BC112C912F7B1FD955AD (void);
// 0x0000041E System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeUlongFromByte(System.Byte[],System.Int32,System.UInt64&)
extern void ObjectToByte_DecodeUlongFromByte_m1405595B586601DB9FD31401D582BD57144B45E7 (void);
// 0x0000041F System.Void Solana.Unity.SDK.Utility.ObjectToByte::DecodeUIntFromByte(System.Byte[],System.Int32,System.UInt32&)
extern void ObjectToByte_DecodeUIntFromByte_mB43A80B57C31A2FF925805DFF3E5D46002B325A3 (void);
// 0x00000420 Solana.Unity.Metaplex.CandyGuard.GuardSet Solana.Unity.SDK.Metaplex.GuardData::get_Default()
extern void GuardData_get_Default_m5596EE47A46C5249390111E0CA6A364CA89EF304 (void);
// 0x00000421 System.Void Solana.Unity.SDK.Metaplex.GuardData::set_Default(Solana.Unity.Metaplex.CandyGuard.GuardSet)
extern void GuardData_set_Default_mCA716E5A76C86C8797D275869BCE97C2F0028AEC (void);
// 0x00000422 Solana.Unity.Metaplex.CandyGuard.Group[] Solana.Unity.SDK.Metaplex.GuardData::get_Groups()
extern void GuardData_get_Groups_m94F4EFF53946DB6E267E4782B4AFF1359082A38E (void);
// 0x00000423 System.Void Solana.Unity.SDK.Metaplex.GuardData::set_Groups(Solana.Unity.Metaplex.CandyGuard.Group[])
extern void GuardData_set_Groups_m9EDBB85AE3BBCD4EEBE1EBABC6B1505F1B5A53F2 (void);
// 0x00000424 System.Int32 Solana.Unity.SDK.Metaplex.GuardData::Serialize(System.Byte[],System.Int32)
extern void GuardData_Serialize_mBB60B060D8FE7D1D3435927391D225C3D7A374D1 (void);
// 0x00000425 Solana.Unity.SDK.Metaplex.GuardData Solana.Unity.SDK.Metaplex.GuardData::Deserialize(System.ReadOnlySpan`1<System.Byte>,System.Int32)
extern void GuardData_Deserialize_m7C53D6FE1008B928FFC213C357F9BD61C9F1D039 (void);
// 0x00000426 System.Void Solana.Unity.SDK.Metaplex.GuardData::.ctor()
extern void GuardData__ctor_m24D0F9E519FD3025DB6C1D42E640C56373EC236D (void);
// 0x00000427 Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/ThirdPartySignerMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_ThirdPartySigner()
extern void CandyGuardMintSettings_get_ThirdPartySigner_m929782DA72859446C994EB8A09FDCF998A416E43 (void);
// 0x00000428 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_ThirdPartySigner(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/ThirdPartySignerMintSettings)
extern void CandyGuardMintSettings_set_ThirdPartySigner_m941C2C1DC2D422A542BCB982A67490642CF0554B (void);
// 0x00000429 Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/GatekeeperMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_Gatekeeper()
extern void CandyGuardMintSettings_get_Gatekeeper_m61F236D11213C8A7A7B4646B5EBAE4D4A1E1309E (void);
// 0x0000042A System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_Gatekeeper(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/GatekeeperMintSettings)
extern void CandyGuardMintSettings_set_Gatekeeper_m0F8AFB73A81CCB1CC831BA49A97479B86AFE151C (void);
// 0x0000042B Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/AllowListMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_AllowList()
extern void CandyGuardMintSettings_get_AllowList_m41D021D8770CFC9693E5113B327518C3B4561557 (void);
// 0x0000042C System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_AllowList(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/AllowListMintSettings)
extern void CandyGuardMintSettings_set_AllowList_m8ACC831665CA87AC80F8AD604B3B1B67C29F9305 (void);
// 0x0000042D Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/MintLimitMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_MintLimit()
extern void CandyGuardMintSettings_get_MintLimit_m1D12E27317F12FDC55F276350BEDAFA9ED412FD1 (void);
// 0x0000042E System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_MintLimit(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/MintLimitMintSettings)
extern void CandyGuardMintSettings_set_MintLimit_m983D15D1C0F49786D9FE378F9A08D2B7FB5B4534 (void);
// 0x0000042F Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/SolPaymentMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_SolPayment()
extern void CandyGuardMintSettings_get_SolPayment_m10B775C12B76D90C59BFC0FF05AA4177B52066A1 (void);
// 0x00000430 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_SolPayment(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/SolPaymentMintSettings)
extern void CandyGuardMintSettings_set_SolPayment_m79E59849F3EEB6ABA0A423ED640FEE3FD318824A (void);
// 0x00000431 Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftPaymentMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_NftPayment()
extern void CandyGuardMintSettings_get_NftPayment_m4DF9646738E6BA55A67BB4DD3FF08ADA8459A2F2 (void);
// 0x00000432 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_NftPayment(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftPaymentMintSettings)
extern void CandyGuardMintSettings_set_NftPayment_mFA6AAC4AFEE2CA8EFF29E501B9BF7269A9568EB2 (void);
// 0x00000433 Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftGateMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_NftGate()
extern void CandyGuardMintSettings_get_NftGate_m8FCA5544CFAA76FE6AA8AD99B77C75674FB219B4 (void);
// 0x00000434 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_NftGate(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftGateMintSettings)
extern void CandyGuardMintSettings_set_NftGate_m8EE93DFE23E98FCDAD5AB79624DDE8692627EA90 (void);
// 0x00000435 Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftBurnMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_NftBurn()
extern void CandyGuardMintSettings_get_NftBurn_mB5A6FB5E21DA0ED40C4F941D24853C0158502F4B (void);
// 0x00000436 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_NftBurn(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftBurnMintSettings)
extern void CandyGuardMintSettings_set_NftBurn_m04FF2F55424B3A238A1DC13485F9EE5DE1A679B2 (void);
// 0x00000437 Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenBurnMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_TokenBurn()
extern void CandyGuardMintSettings_get_TokenBurn_m23ECD9F4D158699B4EA40FCBABDEA7E86CE8E39A (void);
// 0x00000438 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_TokenBurn(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenBurnMintSettings)
extern void CandyGuardMintSettings_set_TokenBurn_m8DD1B7B6EFACBCA5FA9A61EBAA735B6912E8A7F9 (void);
// 0x00000439 Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenGateMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_TokenGate()
extern void CandyGuardMintSettings_get_TokenGate_m07281C4DB3957FDADEBFBC9A8160199889D63C8B (void);
// 0x0000043A System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_TokenGate(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenGateMintSettings)
extern void CandyGuardMintSettings_set_TokenGate_mF937449512E44B653753D6C3EEEA5B8B58A059C7 (void);
// 0x0000043B Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenPaymentMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_TokenPayment()
extern void CandyGuardMintSettings_get_TokenPayment_m285D9B13D73867A67F875050B489D4E21EF6EFC8 (void);
// 0x0000043C System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_TokenPayment(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenPaymentMintSettings)
extern void CandyGuardMintSettings_set_TokenPayment_m5FE61C130FD84318D83F3719BAF28EEFAF991497 (void);
// 0x0000043D Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/FreezeSolPaymentMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_FreezeSolPayment()
extern void CandyGuardMintSettings_get_FreezeSolPayment_mEA00CFFCF1948F5EC5167BB2442C5F838B63DD70 (void);
// 0x0000043E System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_FreezeSolPayment(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/FreezeSolPaymentMintSettings)
extern void CandyGuardMintSettings_set_FreezeSolPayment_m3C2AB89A9E770893F152DA934526716519678892 (void);
// 0x0000043F Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/FreezeTokenPaymentMintSettings Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::get_FreezeTokenPayment()
extern void CandyGuardMintSettings_get_FreezeTokenPayment_m3A8F3C47392FFDD1F710E071F801ABD85A430B63 (void);
// 0x00000440 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::set_FreezeTokenPayment(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/FreezeTokenPaymentMintSettings)
extern void CandyGuardMintSettings_set_FreezeTokenPayment_m0159A7B680FCC8C951785370CF129A08CD05391C (void);
// 0x00000441 System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountMeta> Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::GetMintArgs(Solana.Unity.Wallet.Account,Solana.Unity.Wallet.Account,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey)
extern void CandyGuardMintSettings_GetMintArgs_mD60BB6B0254E0C40597A26BA5BA33012B5E013F6 (void);
// 0x00000442 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::OverrideWith(Solana.Unity.SDK.Metaplex.CandyGuardMintSettings)
extern void CandyGuardMintSettings_OverrideWith_m790FCAC26758DA4EB15358D7E5A933950B57D110 (void);
// 0x00000443 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::.ctor()
extern void CandyGuardMintSettings__ctor_m7A27D7864F79D754ACFC7AD9FA7AF46572897BBD (void);
// 0x00000444 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings::.cctor()
extern void CandyGuardMintSettings__cctor_mD6FBAEB2CA1CCE3D6DB72AAE443010C32F239117 (void);
// 0x00000445 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/ThirdPartySignerMintSettings::get_Signer()
extern void ThirdPartySignerMintSettings_get_Signer_mB1521B130FBA1BA5BBA4EDBE5481D7D2910C9657 (void);
// 0x00000446 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/ThirdPartySignerMintSettings::set_Signer(Solana.Unity.Wallet.PublicKey)
extern void ThirdPartySignerMintSettings_set_Signer_m9C8D5A4F71EF9DDE9CEBAF6B5EACA26C8A293A96 (void);
// 0x00000447 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/ThirdPartySignerMintSettings::.ctor()
extern void ThirdPartySignerMintSettings__ctor_m4D1F1A345E2F8DD88E06DC230BDBDB9518F7BA38 (void);
// 0x00000448 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/GatekeeperMintSettings::get_Network()
extern void GatekeeperMintSettings_get_Network_mC4DED141C448BED31E573AD112635217C430EB11 (void);
// 0x00000449 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/GatekeeperMintSettings::set_Network(Solana.Unity.Wallet.PublicKey)
extern void GatekeeperMintSettings_set_Network_m70673D71A0B78BC73729F89C4DCAC19FA5740FB0 (void);
// 0x0000044A System.Boolean Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/GatekeeperMintSettings::get_ExpireOnUse()
extern void GatekeeperMintSettings_get_ExpireOnUse_mF084F09C43D909751E63B619E1E5AFEA0544BE6C (void);
// 0x0000044B System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/GatekeeperMintSettings::set_ExpireOnUse(System.Boolean)
extern void GatekeeperMintSettings_set_ExpireOnUse_m2A5F67D8AB272142EE411794523613589785D6EF (void);
// 0x0000044C System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/GatekeeperMintSettings::.ctor()
extern void GatekeeperMintSettings__ctor_mF525B94F3AF90661236254557213FABAF8D3D1BF (void);
// 0x0000044D Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftPaymentMintSettings::get_Destination()
extern void NftPaymentMintSettings_get_Destination_m6D808F81493D2E0B9F5218441719DE341F399658 (void);
// 0x0000044E System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftPaymentMintSettings::set_Destination(Solana.Unity.Wallet.PublicKey)
extern void NftPaymentMintSettings_set_Destination_m852F07701B8B3B5C0783D52DBEAD3E09BF1DD85A (void);
// 0x0000044F Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftPaymentMintSettings::get_Mint()
extern void NftPaymentMintSettings_get_Mint_mE8AE212D6BB209CC85A65CDF8B3CAEAA74287574 (void);
// 0x00000450 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftPaymentMintSettings::set_Mint(Solana.Unity.Wallet.PublicKey)
extern void NftPaymentMintSettings_set_Mint_m05876F94F618CC696779EA35A6B24065FC84222E (void);
// 0x00000451 System.Byte Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftPaymentMintSettings::get_TokenStandard()
extern void NftPaymentMintSettings_get_TokenStandard_m4B6152D3C5D6EBB277DBE01C934454F21BC5E10A (void);
// 0x00000452 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftPaymentMintSettings::set_TokenStandard(System.Byte)
extern void NftPaymentMintSettings_set_TokenStandard_m2198AE0E2128B046E7E85ADB294360B075ED1EBF (void);
// 0x00000453 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftPaymentMintSettings::.ctor()
extern void NftPaymentMintSettings__ctor_mFEED0388D25D7C5C395DE3FE8287936547C25658 (void);
// 0x00000454 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftGateMintSettings::get_Mint()
extern void NftGateMintSettings_get_Mint_mC318039AB338B582166A5D1FE7E9A6DE34737EC0 (void);
// 0x00000455 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftGateMintSettings::set_Mint(Solana.Unity.Wallet.PublicKey)
extern void NftGateMintSettings_set_Mint_mC895A90D5FF78A4C0F7E2CAC8D5C65E5A9C16895 (void);
// 0x00000456 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftGateMintSettings::.ctor()
extern void NftGateMintSettings__ctor_m11AAEB63D89655FAB8EB0EEE6688C6D4AC8FA2DA (void);
// 0x00000457 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftBurnMintSettings::get_RequiredCollection()
extern void NftBurnMintSettings_get_RequiredCollection_m80227E34B0F38A86AC9F47B1BC44C5EDA424146C (void);
// 0x00000458 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftBurnMintSettings::set_RequiredCollection(Solana.Unity.Wallet.PublicKey)
extern void NftBurnMintSettings_set_RequiredCollection_m1C1688301CDBA59DC9DAB69EFFEAC1B3C54EE0A6 (void);
// 0x00000459 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftBurnMintSettings::get_Mint()
extern void NftBurnMintSettings_get_Mint_m456FD8887FF9D600C8D73628DEDAB0E26B407849 (void);
// 0x0000045A System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftBurnMintSettings::set_Mint(Solana.Unity.Wallet.PublicKey)
extern void NftBurnMintSettings_set_Mint_m97323EBF1CE59C0A99F3773FAC91B647A818BAC4 (void);
// 0x0000045B System.Byte Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftBurnMintSettings::get_TokenStandard()
extern void NftBurnMintSettings_get_TokenStandard_m4B69FBE44863E16D398E0085123E1FD7579B60B3 (void);
// 0x0000045C System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftBurnMintSettings::set_TokenStandard(System.Byte)
extern void NftBurnMintSettings_set_TokenStandard_m91F811ED63CBBD9FDA60962C3E98CA673D0F82CD (void);
// 0x0000045D System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/NftBurnMintSettings::.ctor()
extern void NftBurnMintSettings__ctor_m3A65C36500AEF2A0406E148832D40892ADCABA47 (void);
// 0x0000045E System.Byte[] Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/AllowListMintSettings::get_MerkleRoot()
extern void AllowListMintSettings_get_MerkleRoot_m67211686FE79ED25211D631364766A7555A6C824 (void);
// 0x0000045F System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/AllowListMintSettings::set_MerkleRoot(System.Byte[])
extern void AllowListMintSettings_set_MerkleRoot_mD3B9CA68686DC49EF0ACE5EE3147E0B3E88B13F1 (void);
// 0x00000460 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/AllowListMintSettings::.ctor()
extern void AllowListMintSettings__ctor_m5FF57B638B1018804ED0477AAB44AA9891FF0A77 (void);
// 0x00000461 System.Int32 Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/MintLimitMintSettings::get_Id()
extern void MintLimitMintSettings_get_Id_m42B759C008F7FC2352E8962C26D993BAB15C36B2 (void);
// 0x00000462 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/MintLimitMintSettings::set_Id(System.Int32)
extern void MintLimitMintSettings_set_Id_mCACD9C95C4F80B92429E900EC7E475D99ECDC2AD (void);
// 0x00000463 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/MintLimitMintSettings::.ctor()
extern void MintLimitMintSettings__ctor_mE75E326C34DB7B3F1A8634C8A73CCD6FC91F8FD2 (void);
// 0x00000464 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/SolPaymentMintSettings::get_Destination()
extern void SolPaymentMintSettings_get_Destination_mA2623477917A92ACD5CE74015CA1FC9DCEF89AD1 (void);
// 0x00000465 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/SolPaymentMintSettings::set_Destination(Solana.Unity.Wallet.PublicKey)
extern void SolPaymentMintSettings_set_Destination_mF1AD8943FAC54B7077C46FB1FFA3ECEDD8CD3B27 (void);
// 0x00000466 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/SolPaymentMintSettings::.ctor()
extern void SolPaymentMintSettings__ctor_m0D96B54C80D382A9BEF7AEA2B5BFD6C9E04204DC (void);
// 0x00000467 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenBurnMintSettings::get_Mint()
extern void TokenBurnMintSettings_get_Mint_m041D9772663B6BFBF888C21E65677C523FC988D3 (void);
// 0x00000468 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenBurnMintSettings::set_Mint(Solana.Unity.Wallet.PublicKey)
extern void TokenBurnMintSettings_set_Mint_mD62BCC06357B9B60264196FC073BCFC85C477F97 (void);
// 0x00000469 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenBurnMintSettings::.ctor()
extern void TokenBurnMintSettings__ctor_m8CFC0FDD182E04604C0F7DEB003FA3F5737C60D1 (void);
// 0x0000046A Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenGateMintSettings::get_Mint()
extern void TokenGateMintSettings_get_Mint_m572F1BEBE634B7779D96F46871E4F7231CC55A06 (void);
// 0x0000046B System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenGateMintSettings::set_Mint(Solana.Unity.Wallet.PublicKey)
extern void TokenGateMintSettings_set_Mint_m69344352642DDE4E3D6953A4123B8E587303A048 (void);
// 0x0000046C System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenGateMintSettings::.ctor()
extern void TokenGateMintSettings__ctor_m2D9B44C2F7EFE240C9AD0DB2E232DF43269B6CE8 (void);
// 0x0000046D Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenPaymentMintSettings::get_Mint()
extern void TokenPaymentMintSettings_get_Mint_mD66E76C73C745DB61478015D68D39EB3B17F278E (void);
// 0x0000046E System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenPaymentMintSettings::set_Mint(Solana.Unity.Wallet.PublicKey)
extern void TokenPaymentMintSettings_set_Mint_mEA7DC7D348390671BD6966F111C76E9FAC5AAA5E (void);
// 0x0000046F Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenPaymentMintSettings::get_DestinationAta()
extern void TokenPaymentMintSettings_get_DestinationAta_m2A87047C04E0AE6DD6DB7425F0B18729EA474369 (void);
// 0x00000470 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenPaymentMintSettings::set_DestinationAta(Solana.Unity.Wallet.PublicKey)
extern void TokenPaymentMintSettings_set_DestinationAta_m285D9F39F5C7C27CE2ABC8E09D2507B9256F16FC (void);
// 0x00000471 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/TokenPaymentMintSettings::.ctor()
extern void TokenPaymentMintSettings__ctor_m9EFFAE4F50C478587F302581E05707D013D197A7 (void);
// 0x00000472 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/FreezeTokenPaymentMintSettings::get_Mint()
extern void FreezeTokenPaymentMintSettings_get_Mint_m5E4B85536BE58541AA8170724DE30340F53187DF (void);
// 0x00000473 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/FreezeTokenPaymentMintSettings::set_Mint(Solana.Unity.Wallet.PublicKey)
extern void FreezeTokenPaymentMintSettings_set_Mint_m379BFE9DF71F622D618FEA78A16C0B41D69A416B (void);
// 0x00000474 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/FreezeTokenPaymentMintSettings::get_DestinationAta()
extern void FreezeTokenPaymentMintSettings_get_DestinationAta_m089320EFF6495662A9D276595F72007220470088 (void);
// 0x00000475 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/FreezeTokenPaymentMintSettings::set_DestinationAta(Solana.Unity.Wallet.PublicKey)
extern void FreezeTokenPaymentMintSettings_set_DestinationAta_m172835E7E21276DC7841EBABF03BB9ECFB13F06F (void);
// 0x00000476 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/FreezeTokenPaymentMintSettings::.ctor()
extern void FreezeTokenPaymentMintSettings__ctor_mE37A0818152DDEA283E9DD98B667C41183B85B1C (void);
// 0x00000477 Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/FreezeSolPaymentMintSettings::get_Destination()
extern void FreezeSolPaymentMintSettings_get_Destination_mD44D84C7030E0393710772A53D2F0661596402BB (void);
// 0x00000478 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/FreezeSolPaymentMintSettings::set_Destination(Solana.Unity.Wallet.PublicKey)
extern void FreezeSolPaymentMintSettings_set_Destination_m87EC33B7D39886BAD7924DAB0350D39CE03F09B5 (void);
// 0x00000479 System.Void Solana.Unity.SDK.Metaplex.CandyGuardMintSettings/FreezeSolPaymentMintSettings::.ctor()
extern void FreezeSolPaymentMintSettings__ctor_m6E89F611990F4FA88BC7BC82150F8B7F09BE2996 (void);
// 0x0000047A Solana.Unity.Wallet.PublicKey Solana.Unity.SDK.Metaplex.CandyMachineCommands::GetCandyMachineCreator(Solana.Unity.Wallet.PublicKey)
extern void CandyMachineCommands_GetCandyMachineCreator_m41AE2D18C8E41F06956768B236B9998F22258B74 (void);
// 0x0000047B System.Threading.Tasks.Task`1<System.String> Solana.Unity.SDK.Metaplex.CandyMachineCommands::InitializeCandyMachine(Solana.Unity.Wallet.Account,Solana.Unity.Wallet.Account,Solana.Unity.Wallet.PublicKey,Solana.Unity.Metaplex.Candymachine.Types.CandyMachineData,Solana.Unity.Rpc.IRpcClient,System.Boolean)
extern void CandyMachineCommands_InitializeCandyMachine_m88BA6176BE8B2B4ED8BFF9560C2A215F7B08D679 (void);
// 0x0000047C System.Threading.Tasks.Task`1<System.String> Solana.Unity.SDK.Metaplex.CandyMachineCommands::AddConfigLines(Solana.Unity.Wallet.Account,Solana.Unity.Wallet.PublicKey,Solana.Unity.Metaplex.Candymachine.Types.ConfigLine[],System.UInt32,Solana.Unity.Rpc.IRpcClient,System.Boolean)
extern void CandyMachineCommands_AddConfigLines_m8797D2A325A3F20D0F9E50569F9C023F9FD54D1E (void);
// 0x0000047D System.Threading.Tasks.Task`1<System.String> Solana.Unity.SDK.Metaplex.CandyMachineCommands::MintOneToken(Solana.Unity.Wallet.Account,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.Account,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.IRpcClient,System.Boolean)
extern void CandyMachineCommands_MintOneToken_m73B7E5C42B856F5ADDE31C7A360A83CB7F2A8A11 (void);
// 0x0000047E System.Threading.Tasks.Task`1<System.String> Solana.Unity.SDK.Metaplex.CandyMachineCommands::MintOneTokenWithGuards(Solana.Unity.Wallet.Account,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.Account,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,Solana.Unity.SDK.Metaplex.CandyGuardMintSettings,Solana.Unity.Rpc.IRpcClient,System.Boolean)
extern void CandyMachineCommands_MintOneTokenWithGuards_m7E4E4CD2CD60F91D38EB70AD9CCEEAD2BB5E7A20 (void);
// 0x0000047F System.Threading.Tasks.Task`1<System.ValueTuple`2<System.String,Solana.Unity.Wallet.PublicKey>> Solana.Unity.SDK.Metaplex.CandyMachineCommands::InitializeGuards(Solana.Unity.Wallet.Account,Solana.Unity.SDK.Metaplex.GuardData,Solana.Unity.Rpc.IRpcClient,System.Boolean)
extern void CandyMachineCommands_InitializeGuards_m84651FAA034C9800271D892B44C356FDE01A787F (void);
// 0x00000480 System.Threading.Tasks.Task`1<System.String> Solana.Unity.SDK.Metaplex.CandyMachineCommands::AddGuards(Solana.Unity.Wallet.Account,Solana.Unity.Wallet.PublicKey,Solana.Unity.SDK.Metaplex.GuardData,Solana.Unity.Rpc.IRpcClient,System.Boolean)
extern void CandyMachineCommands_AddGuards_m5759A7A168312D8BC6A8D8AFEE1A14258E1DB23C (void);
// 0x00000481 System.Threading.Tasks.Task`1<System.String> Solana.Unity.SDK.Metaplex.CandyMachineCommands::WrapCandyMachine(Solana.Unity.Wallet.Account,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.IRpcClient,System.Boolean)
extern void CandyMachineCommands_WrapCandyMachine_m6FF64A64C76A335A5524651625271BA83C26D00C (void);
// 0x00000482 System.Threading.Tasks.Task`1<System.String> Solana.Unity.SDK.Metaplex.CandyMachineCommands::Withdraw(Solana.Unity.Wallet.Account,Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.IRpcClient,System.Boolean)
extern void CandyMachineCommands_Withdraw_mDE4F03DC0F88D5C9583D8465AD7D92F96BB175AC (void);
// 0x00000483 System.Threading.Tasks.Task`1<System.String> Solana.Unity.SDK.Metaplex.CandyMachineCommands::WithdrawGuards(Solana.Unity.Wallet.Account,Solana.Unity.Wallet.PublicKey,Solana.Unity.Rpc.IRpcClient,System.Boolean)
extern void CandyMachineCommands_WithdrawGuards_mBCB8A82029B9B795244D340955E65D5FC1CA9814 (void);
// 0x00000484 System.UInt64 Solana.Unity.SDK.Metaplex.CandyMachineCommands::GetSpaceForCandyMachine(Solana.Unity.Metaplex.Candymachine.Types.CandyMachineData)
extern void CandyMachineCommands_GetSpaceForCandyMachine_m19C1EF2A1B4D923C09E5196BA4E5CCEFB33C08C1 (void);
// 0x00000485 System.UInt64 Solana.Unity.SDK.Metaplex.CandyMachineCommands::GetConfigLineSize(Solana.Unity.Metaplex.Candymachine.Types.ConfigLineSettings)
extern void CandyMachineCommands_GetConfigLineSize_m907030137F4F12B39CD4318260104B4FBECB96B6 (void);
// 0x00000486 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands::.cctor()
extern void CandyMachineCommands__cctor_mBE19764C08CCBDFA39C443CC292017C97FE07BEE (void);
// 0x00000487 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<InitializeCandyMachine>d__11::MoveNext()
extern void U3CInitializeCandyMachineU3Ed__11_MoveNext_m372641EDEFA76AD142C751E254943308D306F8DF (void);
// 0x00000488 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<InitializeCandyMachine>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeCandyMachineU3Ed__11_SetStateMachine_m7A18DC92FC5E80AE5AC0AD7F3B2CF80435A9628F (void);
// 0x00000489 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<AddConfigLines>d__12::MoveNext()
extern void U3CAddConfigLinesU3Ed__12_MoveNext_mB0D137A4C710003B97F6F814BDB0892F63E20074 (void);
// 0x0000048A System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<AddConfigLines>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CAddConfigLinesU3Ed__12_SetStateMachine_mC2CF00E8AE1F166317B9E89CE739569CFC788377 (void);
// 0x0000048B System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m26783AB0C02BA0FDDFF7893093AF829D93137525 (void);
// 0x0000048C Solana.Unity.Rpc.Models.AccountMeta Solana.Unity.SDK.Metaplex.CandyMachineCommands/<>c__DisplayClass13_0::<MintOneToken>b__0(Solana.Unity.Rpc.Models.AccountMeta)
extern void U3CU3Ec__DisplayClass13_0_U3CMintOneTokenU3Eb__0_m83FF39C6BB53BF7B05B9BED9AC13CBD1786BB31E (void);
// 0x0000048D System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<MintOneToken>d__13::MoveNext()
extern void U3CMintOneTokenU3Ed__13_MoveNext_m1181ED5948D4A2D40B3F5B3B5C8BB73133B690E9 (void);
// 0x0000048E System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<MintOneToken>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CMintOneTokenU3Ed__13_SetStateMachine_mD27C715807CBFDD0EB91D28BDD7F9931BC2A71D1 (void);
// 0x0000048F System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<>c__DisplayClass14_0::.ctor()
extern void U3CU3Ec__DisplayClass14_0__ctor_m16266346A035C6239F9618056E72F2473CC765CE (void);
// 0x00000490 Solana.Unity.Rpc.Models.AccountMeta Solana.Unity.SDK.Metaplex.CandyMachineCommands/<>c__DisplayClass14_0::<MintOneTokenWithGuards>b__0(Solana.Unity.Rpc.Models.AccountMeta)
extern void U3CU3Ec__DisplayClass14_0_U3CMintOneTokenWithGuardsU3Eb__0_m21D61C61B638AB5C39D1DF8A6A1BE1CC5EFE0884 (void);
// 0x00000491 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<MintOneTokenWithGuards>d__14::MoveNext()
extern void U3CMintOneTokenWithGuardsU3Ed__14_MoveNext_m682B6F914390CFE441FD7466165340A59B6F97C6 (void);
// 0x00000492 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<MintOneTokenWithGuards>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CMintOneTokenWithGuardsU3Ed__14_SetStateMachine_mA7E1168AC2B81C8594970424C1C18C17A000AE72 (void);
// 0x00000493 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<InitializeGuards>d__15::MoveNext()
extern void U3CInitializeGuardsU3Ed__15_MoveNext_m291F4376836824E1F41296225A055115C611F450 (void);
// 0x00000494 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<InitializeGuards>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeGuardsU3Ed__15_SetStateMachine_m2B3178034275BF7A34AC592DF5F82B430D0E306C (void);
// 0x00000495 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<AddGuards>d__16::MoveNext()
extern void U3CAddGuardsU3Ed__16_MoveNext_m28772698B0EC23BE754B73A4524061C7AEBDB79C (void);
// 0x00000496 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<AddGuards>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CAddGuardsU3Ed__16_SetStateMachine_mFF608CBD682B1B11475BF40DAE7A73F076A2BDEE (void);
// 0x00000497 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<WrapCandyMachine>d__17::MoveNext()
extern void U3CWrapCandyMachineU3Ed__17_MoveNext_m505FB69D8E9217EFB7C8639BF8E2200FD5F23C00 (void);
// 0x00000498 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<WrapCandyMachine>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWrapCandyMachineU3Ed__17_SetStateMachine_m465E0684DB3D9127C425A76BC938C0C01BDC8CAE (void);
// 0x00000499 System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<Withdraw>d__18::MoveNext()
extern void U3CWithdrawU3Ed__18_MoveNext_mE3E2A0BEB76A21E2241189CABE17AD8E46CC46B9 (void);
// 0x0000049A System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<Withdraw>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWithdrawU3Ed__18_SetStateMachine_m60D6BE7DDA5057C7EC1F1D66B6D60A7752D7E136 (void);
// 0x0000049B System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<WithdrawGuards>d__19::MoveNext()
extern void U3CWithdrawGuardsU3Ed__19_MoveNext_m635D26AD0E4F6E47F900FA79B5D481FF3D1AF4A8 (void);
// 0x0000049C System.Void Solana.Unity.SDK.Metaplex.CandyMachineCommands/<WithdrawGuards>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWithdrawGuardsU3Ed__19_SetStateMachine_mA9B5959934310C72D0C308383C7BFBE2A16A4B94 (void);
// 0x0000049D System.Void Solana.Unity.SDK.Nft.Attributes::.ctor()
extern void Attributes__ctor_mE823C4A7CEB5D6A5D6C761A8AD42548F2AEA0199 (void);
// 0x0000049E System.Void Solana.Unity.SDK.Nft.MetaplexJsonData::.ctor()
extern void MetaplexJsonData__ctor_mF1CE93E88CD9BA674FD69D75D54268726E30643A (void);
// 0x0000049F System.Void Solana.Unity.SDK.Nft.MetaplexData::.ctor()
extern void MetaplexData__ctor_m8C7AB1EA3C51A48260FB0D9A4DE01081AD1857FB (void);
// 0x000004A0 System.Void Solana.Unity.SDK.Nft.CreatorData::.ctor()
extern void CreatorData__ctor_mA17A1B2AA158D11B1AEA9A77EEE06FA000BE6EFC (void);
// 0x000004A1 System.Void Solana.Unity.SDK.Nft.File::.ctor()
extern void File__ctor_m715CBF3E44330435DF65991787BDD0AFC5550228 (void);
// 0x000004A2 System.Void Solana.Unity.SDK.Nft.Properties::.ctor()
extern void Properties__ctor_m78944B6ABFC5BCD5ACC11B55E4EAA1CD0E97553A (void);
// 0x000004A3 System.Void Solana.Unity.SDK.Nft.Metaplex::.ctor(Solana.Unity.Metaplex.NFT.Library.MetadataAccount)
extern void Metaplex__ctor_m301DD08FF78DBFE60FB196F060B64D5B1082A29C (void);
// 0x000004A4 Solana.Unity.SDK.Nft.NFTProData Solana.Unity.SDK.Nft.NFTProData::DeserializeNFTProData(System.String)
extern void NFTProData_DeserializeNFTProData_m1B56B9DFBC2FF15965779F8E8019E7A6E113BE03 (void);
// 0x000004A5 System.Void Solana.Unity.SDK.Nft.NFTProData::.ctor()
extern void NFTProData__ctor_m6D6E773454EE51C70B1B56D7FB4F472008AC2A62 (void);
// 0x000004A6 System.String Solana.Unity.SDK.Nft.NftImage::get_name()
extern void NftImage_get_name_m31A02C1BBDC36B30D4A2061B2A6D7F2727F05620 (void);
// 0x000004A7 System.Void Solana.Unity.SDK.Nft.NftImage::set_name(System.String)
extern void NftImage_set_name_m595DD99548F5EF12D840D8316EB45816919E46F6 (void);
// 0x000004A8 System.String Solana.Unity.SDK.Nft.NftImage::get_extension()
extern void NftImage_get_extension_m8EC747E41953C61A5BE39943D6876D92A4246D11 (void);
// 0x000004A9 System.Void Solana.Unity.SDK.Nft.NftImage::set_extension(System.String)
extern void NftImage_set_extension_m570CD3BB0C9FF797E8FDA2EB61ED406DC28486E8 (void);
// 0x000004AA System.String Solana.Unity.SDK.Nft.NftImage::get_externalUrl()
extern void NftImage_get_externalUrl_m809C6DC78D290A0FF51CC08ADC4AB145A66EA806 (void);
// 0x000004AB System.Void Solana.Unity.SDK.Nft.NftImage::set_externalUrl(System.String)
extern void NftImage_set_externalUrl_m82EAF4A55FBB51F7A775758786A5410906B85AF7 (void);
// 0x000004AC UnityEngine.Texture2D Solana.Unity.SDK.Nft.NftImage::get_file()
extern void NftImage_get_file_mF87C00E458B7385A20656B4FAAC930473B3CDFD6 (void);
// 0x000004AD System.Void Solana.Unity.SDK.Nft.NftImage::set_file(UnityEngine.Texture2D)
extern void NftImage_set_file_mA0E407437B4D29D0B68645934C4613FEF61B7B23 (void);
// 0x000004AE System.Void Solana.Unity.SDK.Nft.NftImage::.ctor()
extern void NftImage__ctor_m67A1777D7E2D8D968815C6E7803EF2D219E5B3CC (void);
// 0x000004AF System.Void Solana.Unity.SDK.Nft.Nft::.ctor()
extern void Nft__ctor_mE6D1F715EEA47AEAA6F8C9F6A8A7D7C815B997AB (void);
// 0x000004B0 System.Void Solana.Unity.SDK.Nft.Nft::.ctor(Solana.Unity.SDK.Nft.Metaplex)
extern void Nft__ctor_m87A95EEFFB10B250CA7E350677DB735AD03F6D9C (void);
// 0x000004B1 System.Threading.Tasks.Task`1<Solana.Unity.SDK.Nft.Nft> Solana.Unity.SDK.Nft.Nft::TryGetNftData(System.String,Solana.Unity.Rpc.IRpcClient,System.Boolean,System.Int32,System.Boolean,Solana.Unity.Rpc.Types.Commitment)
extern void Nft_TryGetNftData_m5AAF4EADA0D4058E07FFBB49D27AC368E458D5A2 (void);
// 0x000004B2 Solana.Unity.SDK.Nft.Nft Solana.Unity.SDK.Nft.Nft::TryLoadNftFromLocal(System.String)
extern void Nft_TryLoadNftFromLocal_m847ED85635E5620F2FB57EA13E811C20490A07A7 (void);
// 0x000004B3 System.Threading.Tasks.Task Solana.Unity.SDK.Nft.Nft::LoadTexture(System.Int32)
extern void Nft_LoadTexture_mDFB1A673C4F3B46C7CD2344EBD8976AA9A9EAE56 (void);
// 0x000004B4 System.Void Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::MoveNext()
extern void U3CTryGetNftDataU3Ed__3_MoveNext_m58C0867108B5FFE2CD4C4B51BF5948194AF79581 (void);
// 0x000004B5 System.Void Solana.Unity.SDK.Nft.Nft/<TryGetNftData>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CTryGetNftDataU3Ed__3_SetStateMachine_m0DF8A2A110E9187D23E731F7A7605B3C6869F516 (void);
// 0x000004B6 System.Void Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::MoveNext()
extern void U3CLoadTextureU3Ed__5_MoveNext_mC655A2A6DAE3DDA587484EAA064FA24C4E715217 (void);
// 0x000004B7 System.Void Solana.Unity.SDK.Nft.Nft/<LoadTexture>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoadTextureU3Ed__5_SetStateMachine_m416574BBE0B82DCB9C76C15F9D7A47FEAA340017 (void);
// 0x000004B8 System.String Solana.Unity.SDK.Nft.iNftFile`1::get_name()
// 0x000004B9 System.Void Solana.Unity.SDK.Nft.iNftFile`1::set_name(System.String)
// 0x000004BA System.String Solana.Unity.SDK.Nft.iNftFile`1::get_extension()
// 0x000004BB System.Void Solana.Unity.SDK.Nft.iNftFile`1::set_extension(System.String)
// 0x000004BC System.String Solana.Unity.SDK.Nft.iNftFile`1::get_externalUrl()
// 0x000004BD System.Void Solana.Unity.SDK.Nft.iNftFile`1::set_externalUrl(System.String)
// 0x000004BE T Solana.Unity.SDK.Nft.iNftFile`1::get_file()
// 0x000004BF System.Void Solana.Unity.SDK.Nft.iNftFile`1::set_file(T)
static Il2CppMethodPointer s_methodPointers[1215] = 
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
	Utils_LaunchUrl_m91AB1098CD57D10BDD2D6CAF4D0B0D8CA11062CC,
	Utils_DecodeBase64_m489A851C0F2481FE1EAB0E792FF18A6F8A4EF78C,
	Utils_ParseQuery_m94DCE66CA78640B2AE0A2AE0BE1B5EA6AEA54334,
	Utils_GetRandomUnusedPort_m3B0D526958B3373ECFA2310677FDEA3523F9EE97,
	U3CU3Ec__cctor_m33AE10837481E69BFC74370F54D619BCF69AEE9B,
	U3CU3Ec__ctor_mFC65BA92B86438243BC898E9581B2EE5DA795BFC,
	U3CU3Ec_U3CParseQueryU3Eb__2_0_m2C3D5DAD6DDB201F78580961B35309D83ACD5558,
	U3CU3Ec_U3CParseQueryU3Eb__2_1_m14798DEFE5D23D4DDD0E64C7ED6DECF425EFB2D9,
	U3CU3Ec_U3CParseQueryU3Eb__2_2_m2B68E7D7108A948A0B8F56184B6541FC6EDFF35A,
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
	SessionWallet_SignInitSessionTx_m5E7DE1BFEC805FB6CB18798E18F38B4E059067B6,
	SessionWallet_GetSessionWallet_m379AB7CB2CA322107D76B968526F9B2C490A5BE0,
	SessionWallet_CreateSessionIX_mFC18A818D7BA84BE1959DDED607F6073F03A60C3,
	SessionWallet_RevokeSessionIX_m869A2113F5691DCE95D2F588282775F28DD60435,
	SessionWallet_IsSessionTokenInitialized_m1D1A78DD4C59D5E1C28C6C247C5840DC97CB231E,
	SessionWallet_IsSessionTokenValid_m691F9D6C90004C222A5A9A4446ADA74861C58373,
	SessionWallet_Authority_mA348982509F8EEB632F18F2B155E6F37F405D5BE,
	SessionWallet_DeriveSessionPassword_m72A0D3601A9EFEC241A88FFB365F7EA336DD7567,
	SessionWallet_DeleteSessionWallet_m0EBCFEB83C3D3B2070E334C580FEC6E9815E43AC,
	SessionWallet_CloseSession_m5DEB79B357BE76DA5627F78E47485B3D631A093F,
	U3CGetSessionWalletU3Ed__14_MoveNext_mD8212BDD730AFE06019146DC4EF20235C1655549,
	U3CGetSessionWalletU3Ed__14_SetStateMachine_m1E5D4FD22F6245A4646F290C0BEE25621B234642,
	U3CIsSessionTokenInitializedU3Ed__17_MoveNext_m756E593EBF187C92D609423C921763D34D834101,
	U3CIsSessionTokenInitializedU3Ed__17_SetStateMachine_m0492BC01DC09A901565AFA5A25FEFC8F60B16B7D,
	U3CIsSessionTokenValidU3Ed__18_MoveNext_m3602DA58F4A18C37ABFE555D578583E067070E16,
	U3CIsSessionTokenValidU3Ed__18_SetStateMachine_m4655ED5C5BC4A6561851ADB60CCF0F1ECC19D3DE,
	U3CAuthorityU3Ed__19_MoveNext_mD7F845D3B62AA7CDD696C070975751A76147092E,
	U3CAuthorityU3Ed__19_SetStateMachine_m21D2195194A8EA06D8D4FAD9A085B2C799F1F8E9,
	U3CCloseSessionU3Ed__22_MoveNext_m7A5F8F033AC6779A5831138429CC6CA078EA55FB,
	U3CCloseSessionU3Ed__22_SetStateMachine_mB33C422F5E76769272E1BD4E0D99BF534EB20106,
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
	GuardData_get_Default_m5596EE47A46C5249390111E0CA6A364CA89EF304,
	GuardData_set_Default_mCA716E5A76C86C8797D275869BCE97C2F0028AEC,
	GuardData_get_Groups_m94F4EFF53946DB6E267E4782B4AFF1359082A38E,
	GuardData_set_Groups_m9EDBB85AE3BBCD4EEBE1EBABC6B1505F1B5A53F2,
	GuardData_Serialize_mBB60B060D8FE7D1D3435927391D225C3D7A374D1,
	GuardData_Deserialize_m7C53D6FE1008B928FFC213C357F9BD61C9F1D039,
	GuardData__ctor_m24D0F9E519FD3025DB6C1D42E640C56373EC236D,
	CandyGuardMintSettings_get_ThirdPartySigner_m929782DA72859446C994EB8A09FDCF998A416E43,
	CandyGuardMintSettings_set_ThirdPartySigner_m941C2C1DC2D422A542BCB982A67490642CF0554B,
	CandyGuardMintSettings_get_Gatekeeper_m61F236D11213C8A7A7B4646B5EBAE4D4A1E1309E,
	CandyGuardMintSettings_set_Gatekeeper_m0F8AFB73A81CCB1CC831BA49A97479B86AFE151C,
	CandyGuardMintSettings_get_AllowList_m41D021D8770CFC9693E5113B327518C3B4561557,
	CandyGuardMintSettings_set_AllowList_m8ACC831665CA87AC80F8AD604B3B1B67C29F9305,
	CandyGuardMintSettings_get_MintLimit_m1D12E27317F12FDC55F276350BEDAFA9ED412FD1,
	CandyGuardMintSettings_set_MintLimit_m983D15D1C0F49786D9FE378F9A08D2B7FB5B4534,
	CandyGuardMintSettings_get_SolPayment_m10B775C12B76D90C59BFC0FF05AA4177B52066A1,
	CandyGuardMintSettings_set_SolPayment_m79E59849F3EEB6ABA0A423ED640FEE3FD318824A,
	CandyGuardMintSettings_get_NftPayment_m4DF9646738E6BA55A67BB4DD3FF08ADA8459A2F2,
	CandyGuardMintSettings_set_NftPayment_mFA6AAC4AFEE2CA8EFF29E501B9BF7269A9568EB2,
	CandyGuardMintSettings_get_NftGate_m8FCA5544CFAA76FE6AA8AD99B77C75674FB219B4,
	CandyGuardMintSettings_set_NftGate_m8EE93DFE23E98FCDAD5AB79624DDE8692627EA90,
	CandyGuardMintSettings_get_NftBurn_mB5A6FB5E21DA0ED40C4F941D24853C0158502F4B,
	CandyGuardMintSettings_set_NftBurn_m04FF2F55424B3A238A1DC13485F9EE5DE1A679B2,
	CandyGuardMintSettings_get_TokenBurn_m23ECD9F4D158699B4EA40FCBABDEA7E86CE8E39A,
	CandyGuardMintSettings_set_TokenBurn_m8DD1B7B6EFACBCA5FA9A61EBAA735B6912E8A7F9,
	CandyGuardMintSettings_get_TokenGate_m07281C4DB3957FDADEBFBC9A8160199889D63C8B,
	CandyGuardMintSettings_set_TokenGate_mF937449512E44B653753D6C3EEEA5B8B58A059C7,
	CandyGuardMintSettings_get_TokenPayment_m285D9B13D73867A67F875050B489D4E21EF6EFC8,
	CandyGuardMintSettings_set_TokenPayment_m5FE61C130FD84318D83F3719BAF28EEFAF991497,
	CandyGuardMintSettings_get_FreezeSolPayment_mEA00CFFCF1948F5EC5167BB2442C5F838B63DD70,
	CandyGuardMintSettings_set_FreezeSolPayment_m3C2AB89A9E770893F152DA934526716519678892,
	CandyGuardMintSettings_get_FreezeTokenPayment_m3A8F3C47392FFDD1F710E071F801ABD85A430B63,
	CandyGuardMintSettings_set_FreezeTokenPayment_m0159A7B680FCC8C951785370CF129A08CD05391C,
	CandyGuardMintSettings_GetMintArgs_mD60BB6B0254E0C40597A26BA5BA33012B5E013F6,
	CandyGuardMintSettings_OverrideWith_m790FCAC26758DA4EB15358D7E5A933950B57D110,
	CandyGuardMintSettings__ctor_m7A27D7864F79D754ACFC7AD9FA7AF46572897BBD,
	CandyGuardMintSettings__cctor_mD6FBAEB2CA1CCE3D6DB72AAE443010C32F239117,
	ThirdPartySignerMintSettings_get_Signer_mB1521B130FBA1BA5BBA4EDBE5481D7D2910C9657,
	ThirdPartySignerMintSettings_set_Signer_m9C8D5A4F71EF9DDE9CEBAF6B5EACA26C8A293A96,
	ThirdPartySignerMintSettings__ctor_m4D1F1A345E2F8DD88E06DC230BDBDB9518F7BA38,
	GatekeeperMintSettings_get_Network_mC4DED141C448BED31E573AD112635217C430EB11,
	GatekeeperMintSettings_set_Network_m70673D71A0B78BC73729F89C4DCAC19FA5740FB0,
	GatekeeperMintSettings_get_ExpireOnUse_mF084F09C43D909751E63B619E1E5AFEA0544BE6C,
	GatekeeperMintSettings_set_ExpireOnUse_m2A5F67D8AB272142EE411794523613589785D6EF,
	GatekeeperMintSettings__ctor_mF525B94F3AF90661236254557213FABAF8D3D1BF,
	NftPaymentMintSettings_get_Destination_m6D808F81493D2E0B9F5218441719DE341F399658,
	NftPaymentMintSettings_set_Destination_m852F07701B8B3B5C0783D52DBEAD3E09BF1DD85A,
	NftPaymentMintSettings_get_Mint_mE8AE212D6BB209CC85A65CDF8B3CAEAA74287574,
	NftPaymentMintSettings_set_Mint_m05876F94F618CC696779EA35A6B24065FC84222E,
	NftPaymentMintSettings_get_TokenStandard_m4B6152D3C5D6EBB277DBE01C934454F21BC5E10A,
	NftPaymentMintSettings_set_TokenStandard_m2198AE0E2128B046E7E85ADB294360B075ED1EBF,
	NftPaymentMintSettings__ctor_mFEED0388D25D7C5C395DE3FE8287936547C25658,
	NftGateMintSettings_get_Mint_mC318039AB338B582166A5D1FE7E9A6DE34737EC0,
	NftGateMintSettings_set_Mint_mC895A90D5FF78A4C0F7E2CAC8D5C65E5A9C16895,
	NftGateMintSettings__ctor_m11AAEB63D89655FAB8EB0EEE6688C6D4AC8FA2DA,
	NftBurnMintSettings_get_RequiredCollection_m80227E34B0F38A86AC9F47B1BC44C5EDA424146C,
	NftBurnMintSettings_set_RequiredCollection_m1C1688301CDBA59DC9DAB69EFFEAC1B3C54EE0A6,
	NftBurnMintSettings_get_Mint_m456FD8887FF9D600C8D73628DEDAB0E26B407849,
	NftBurnMintSettings_set_Mint_m97323EBF1CE59C0A99F3773FAC91B647A818BAC4,
	NftBurnMintSettings_get_TokenStandard_m4B69FBE44863E16D398E0085123E1FD7579B60B3,
	NftBurnMintSettings_set_TokenStandard_m91F811ED63CBBD9FDA60962C3E98CA673D0F82CD,
	NftBurnMintSettings__ctor_m3A65C36500AEF2A0406E148832D40892ADCABA47,
	AllowListMintSettings_get_MerkleRoot_m67211686FE79ED25211D631364766A7555A6C824,
	AllowListMintSettings_set_MerkleRoot_mD3B9CA68686DC49EF0ACE5EE3147E0B3E88B13F1,
	AllowListMintSettings__ctor_m5FF57B638B1018804ED0477AAB44AA9891FF0A77,
	MintLimitMintSettings_get_Id_m42B759C008F7FC2352E8962C26D993BAB15C36B2,
	MintLimitMintSettings_set_Id_mCACD9C95C4F80B92429E900EC7E475D99ECDC2AD,
	MintLimitMintSettings__ctor_mE75E326C34DB7B3F1A8634C8A73CCD6FC91F8FD2,
	SolPaymentMintSettings_get_Destination_mA2623477917A92ACD5CE74015CA1FC9DCEF89AD1,
	SolPaymentMintSettings_set_Destination_mF1AD8943FAC54B7077C46FB1FFA3ECEDD8CD3B27,
	SolPaymentMintSettings__ctor_m0D96B54C80D382A9BEF7AEA2B5BFD6C9E04204DC,
	TokenBurnMintSettings_get_Mint_m041D9772663B6BFBF888C21E65677C523FC988D3,
	TokenBurnMintSettings_set_Mint_mD62BCC06357B9B60264196FC073BCFC85C477F97,
	TokenBurnMintSettings__ctor_m8CFC0FDD182E04604C0F7DEB003FA3F5737C60D1,
	TokenGateMintSettings_get_Mint_m572F1BEBE634B7779D96F46871E4F7231CC55A06,
	TokenGateMintSettings_set_Mint_m69344352642DDE4E3D6953A4123B8E587303A048,
	TokenGateMintSettings__ctor_m2D9B44C2F7EFE240C9AD0DB2E232DF43269B6CE8,
	TokenPaymentMintSettings_get_Mint_mD66E76C73C745DB61478015D68D39EB3B17F278E,
	TokenPaymentMintSettings_set_Mint_mEA7DC7D348390671BD6966F111C76E9FAC5AAA5E,
	TokenPaymentMintSettings_get_DestinationAta_m2A87047C04E0AE6DD6DB7425F0B18729EA474369,
	TokenPaymentMintSettings_set_DestinationAta_m285D9F39F5C7C27CE2ABC8E09D2507B9256F16FC,
	TokenPaymentMintSettings__ctor_m9EFFAE4F50C478587F302581E05707D013D197A7,
	FreezeTokenPaymentMintSettings_get_Mint_m5E4B85536BE58541AA8170724DE30340F53187DF,
	FreezeTokenPaymentMintSettings_set_Mint_m379BFE9DF71F622D618FEA78A16C0B41D69A416B,
	FreezeTokenPaymentMintSettings_get_DestinationAta_m089320EFF6495662A9D276595F72007220470088,
	FreezeTokenPaymentMintSettings_set_DestinationAta_m172835E7E21276DC7841EBABF03BB9ECFB13F06F,
	FreezeTokenPaymentMintSettings__ctor_mE37A0818152DDEA283E9DD98B667C41183B85B1C,
	FreezeSolPaymentMintSettings_get_Destination_mD44D84C7030E0393710772A53D2F0661596402BB,
	FreezeSolPaymentMintSettings_set_Destination_m87EC33B7D39886BAD7924DAB0350D39CE03F09B5,
	FreezeSolPaymentMintSettings__ctor_m6E89F611990F4FA88BC7BC82150F8B7F09BE2996,
	CandyMachineCommands_GetCandyMachineCreator_m41AE2D18C8E41F06956768B236B9998F22258B74,
	CandyMachineCommands_InitializeCandyMachine_m88BA6176BE8B2B4ED8BFF9560C2A215F7B08D679,
	CandyMachineCommands_AddConfigLines_m8797D2A325A3F20D0F9E50569F9C023F9FD54D1E,
	CandyMachineCommands_MintOneToken_m73B7E5C42B856F5ADDE31C7A360A83CB7F2A8A11,
	CandyMachineCommands_MintOneTokenWithGuards_m7E4E4CD2CD60F91D38EB70AD9CCEEAD2BB5E7A20,
	CandyMachineCommands_InitializeGuards_m84651FAA034C9800271D892B44C356FDE01A787F,
	CandyMachineCommands_AddGuards_m5759A7A168312D8BC6A8D8AFEE1A14258E1DB23C,
	CandyMachineCommands_WrapCandyMachine_m6FF64A64C76A335A5524651625271BA83C26D00C,
	CandyMachineCommands_Withdraw_mDE4F03DC0F88D5C9583D8465AD7D92F96BB175AC,
	CandyMachineCommands_WithdrawGuards_mBCB8A82029B9B795244D340955E65D5FC1CA9814,
	CandyMachineCommands_GetSpaceForCandyMachine_m19C1EF2A1B4D923C09E5196BA4E5CCEFB33C08C1,
	CandyMachineCommands_GetConfigLineSize_m907030137F4F12B39CD4318260104B4FBECB96B6,
	CandyMachineCommands__cctor_mBE19764C08CCBDFA39C443CC292017C97FE07BEE,
	U3CInitializeCandyMachineU3Ed__11_MoveNext_m372641EDEFA76AD142C751E254943308D306F8DF,
	U3CInitializeCandyMachineU3Ed__11_SetStateMachine_m7A18DC92FC5E80AE5AC0AD7F3B2CF80435A9628F,
	U3CAddConfigLinesU3Ed__12_MoveNext_mB0D137A4C710003B97F6F814BDB0892F63E20074,
	U3CAddConfigLinesU3Ed__12_SetStateMachine_mC2CF00E8AE1F166317B9E89CE739569CFC788377,
	U3CU3Ec__DisplayClass13_0__ctor_m26783AB0C02BA0FDDFF7893093AF829D93137525,
	U3CU3Ec__DisplayClass13_0_U3CMintOneTokenU3Eb__0_m83FF39C6BB53BF7B05B9BED9AC13CBD1786BB31E,
	U3CMintOneTokenU3Ed__13_MoveNext_m1181ED5948D4A2D40B3F5B3B5C8BB73133B690E9,
	U3CMintOneTokenU3Ed__13_SetStateMachine_mD27C715807CBFDD0EB91D28BDD7F9931BC2A71D1,
	U3CU3Ec__DisplayClass14_0__ctor_m16266346A035C6239F9618056E72F2473CC765CE,
	U3CU3Ec__DisplayClass14_0_U3CMintOneTokenWithGuardsU3Eb__0_m21D61C61B638AB5C39D1DF8A6A1BE1CC5EFE0884,
	U3CMintOneTokenWithGuardsU3Ed__14_MoveNext_m682B6F914390CFE441FD7466165340A59B6F97C6,
	U3CMintOneTokenWithGuardsU3Ed__14_SetStateMachine_mA7E1168AC2B81C8594970424C1C18C17A000AE72,
	U3CInitializeGuardsU3Ed__15_MoveNext_m291F4376836824E1F41296225A055115C611F450,
	U3CInitializeGuardsU3Ed__15_SetStateMachine_m2B3178034275BF7A34AC592DF5F82B430D0E306C,
	U3CAddGuardsU3Ed__16_MoveNext_m28772698B0EC23BE754B73A4524061C7AEBDB79C,
	U3CAddGuardsU3Ed__16_SetStateMachine_mFF608CBD682B1B11475BF40DAE7A73F076A2BDEE,
	U3CWrapCandyMachineU3Ed__17_MoveNext_m505FB69D8E9217EFB7C8639BF8E2200FD5F23C00,
	U3CWrapCandyMachineU3Ed__17_SetStateMachine_m465E0684DB3D9127C425A76BC938C0C01BDC8CAE,
	U3CWithdrawU3Ed__18_MoveNext_mE3E2A0BEB76A21E2241189CABE17AD8E46CC46B9,
	U3CWithdrawU3Ed__18_SetStateMachine_m60D6BE7DDA5057C7EC1F1D66B6D60A7752D7E136,
	U3CWithdrawGuardsU3Ed__19_MoveNext_m635D26AD0E4F6E47F900FA79B5D481FF3D1AF4A8,
	U3CWithdrawGuardsU3Ed__19_SetStateMachine_mA9B5959934310C72D0C308383C7BFBE2A16A4B94,
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
extern void U3CGetSessionWalletU3Ed__14_MoveNext_mD8212BDD730AFE06019146DC4EF20235C1655549_AdjustorThunk (void);
extern void U3CGetSessionWalletU3Ed__14_SetStateMachine_m1E5D4FD22F6245A4646F290C0BEE25621B234642_AdjustorThunk (void);
extern void U3CIsSessionTokenInitializedU3Ed__17_MoveNext_m756E593EBF187C92D609423C921763D34D834101_AdjustorThunk (void);
extern void U3CIsSessionTokenInitializedU3Ed__17_SetStateMachine_m0492BC01DC09A901565AFA5A25FEFC8F60B16B7D_AdjustorThunk (void);
extern void U3CIsSessionTokenValidU3Ed__18_MoveNext_m3602DA58F4A18C37ABFE555D578583E067070E16_AdjustorThunk (void);
extern void U3CIsSessionTokenValidU3Ed__18_SetStateMachine_m4655ED5C5BC4A6561851ADB60CCF0F1ECC19D3DE_AdjustorThunk (void);
extern void U3CAuthorityU3Ed__19_MoveNext_mD7F845D3B62AA7CDD696C070975751A76147092E_AdjustorThunk (void);
extern void U3CAuthorityU3Ed__19_SetStateMachine_m21D2195194A8EA06D8D4FAD9A085B2C799F1F8E9_AdjustorThunk (void);
extern void U3CCloseSessionU3Ed__22_MoveNext_m7A5F8F033AC6779A5831138429CC6CA078EA55FB_AdjustorThunk (void);
extern void U3CCloseSessionU3Ed__22_SetStateMachine_mB33C422F5E76769272E1BD4E0D99BF534EB20106_AdjustorThunk (void);
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
extern void U3CInitializeCandyMachineU3Ed__11_MoveNext_m372641EDEFA76AD142C751E254943308D306F8DF_AdjustorThunk (void);
extern void U3CInitializeCandyMachineU3Ed__11_SetStateMachine_m7A18DC92FC5E80AE5AC0AD7F3B2CF80435A9628F_AdjustorThunk (void);
extern void U3CAddConfigLinesU3Ed__12_MoveNext_mB0D137A4C710003B97F6F814BDB0892F63E20074_AdjustorThunk (void);
extern void U3CAddConfigLinesU3Ed__12_SetStateMachine_mC2CF00E8AE1F166317B9E89CE739569CFC788377_AdjustorThunk (void);
extern void U3CMintOneTokenU3Ed__13_MoveNext_m1181ED5948D4A2D40B3F5B3B5C8BB73133B690E9_AdjustorThunk (void);
extern void U3CMintOneTokenU3Ed__13_SetStateMachine_mD27C715807CBFDD0EB91D28BDD7F9931BC2A71D1_AdjustorThunk (void);
extern void U3CMintOneTokenWithGuardsU3Ed__14_MoveNext_m682B6F914390CFE441FD7466165340A59B6F97C6_AdjustorThunk (void);
extern void U3CMintOneTokenWithGuardsU3Ed__14_SetStateMachine_mA7E1168AC2B81C8594970424C1C18C17A000AE72_AdjustorThunk (void);
extern void U3CInitializeGuardsU3Ed__15_MoveNext_m291F4376836824E1F41296225A055115C611F450_AdjustorThunk (void);
extern void U3CInitializeGuardsU3Ed__15_SetStateMachine_m2B3178034275BF7A34AC592DF5F82B430D0E306C_AdjustorThunk (void);
extern void U3CAddGuardsU3Ed__16_MoveNext_m28772698B0EC23BE754B73A4524061C7AEBDB79C_AdjustorThunk (void);
extern void U3CAddGuardsU3Ed__16_SetStateMachine_mFF608CBD682B1B11475BF40DAE7A73F076A2BDEE_AdjustorThunk (void);
extern void U3CWrapCandyMachineU3Ed__17_MoveNext_m505FB69D8E9217EFB7C8639BF8E2200FD5F23C00_AdjustorThunk (void);
extern void U3CWrapCandyMachineU3Ed__17_SetStateMachine_m465E0684DB3D9127C425A76BC938C0C01BDC8CAE_AdjustorThunk (void);
extern void U3CWithdrawU3Ed__18_MoveNext_mE3E2A0BEB76A21E2241189CABE17AD8E46CC46B9_AdjustorThunk (void);
extern void U3CWithdrawU3Ed__18_SetStateMachine_m60D6BE7DDA5057C7EC1F1D66B6D60A7752D7E136_AdjustorThunk (void);
extern void U3CWithdrawGuardsU3Ed__19_MoveNext_m635D26AD0E4F6E47F900FA79B5D481FF3D1AF4A8_AdjustorThunk (void);
extern void U3CWithdrawGuardsU3Ed__19_SetStateMachine_mA9B5959934310C72D0C308383C7BFBE2A16A4B94_AdjustorThunk (void);
extern void U3CTryGetNftDataU3Ed__3_MoveNext_m58C0867108B5FFE2CD4C4B51BF5948194AF79581_AdjustorThunk (void);
extern void U3CTryGetNftDataU3Ed__3_SetStateMachine_m0DF8A2A110E9187D23E731F7A7605B3C6869F516_AdjustorThunk (void);
extern void U3CLoadTextureU3Ed__5_MoveNext_mC655A2A6DAE3DDA587484EAA064FA24C4E715217_AdjustorThunk (void);
extern void U3CLoadTextureU3Ed__5_SetStateMachine_m416574BBE0B82DCB9C76C15F9D7A47FEAA340017_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[108] = 
{
	{ 0x0600002D, U3CTryConnectWsU3Ed__13_MoveNext_mA107365B83365E5361B587986F458E3F6938B080_AdjustorThunk },
	{ 0x0600002E, U3CTryConnectWsU3Ed__13_SetStateMachine_m5E620676114EBEE7BF929B74CC5B9F3962AA9993_AdjustorThunk },
	{ 0x0600002F, U3CListenKeyExchangeU3Ed__14_MoveNext_mB99A2738F50EDFA2B2397168E093C8A6CC771D30_AdjustorThunk },
	{ 0x06000030, U3CListenKeyExchangeU3Ed__14_SetStateMachine_mC0890E8C7889BBBD47F1AD8EAC75069B6205866D_AdjustorThunk },
	{ 0x06000031, U3CCloseAssociationU3Ed__18_MoveNext_m0B3B0146057ACA239A26257CC868F839AFC4850F_AdjustorThunk },
	{ 0x06000032, U3CCloseAssociationU3Ed__18_SetStateMachine_m3EE333368D5F3571FCB7524B6AA0FFBC5045F20F_AdjustorThunk },
	{ 0x060002A6, U3CGetSessionWalletU3Ed__14_MoveNext_mD8212BDD730AFE06019146DC4EF20235C1655549_AdjustorThunk },
	{ 0x060002A7, U3CGetSessionWalletU3Ed__14_SetStateMachine_m1E5D4FD22F6245A4646F290C0BEE25621B234642_AdjustorThunk },
	{ 0x060002A8, U3CIsSessionTokenInitializedU3Ed__17_MoveNext_m756E593EBF187C92D609423C921763D34D834101_AdjustorThunk },
	{ 0x060002A9, U3CIsSessionTokenInitializedU3Ed__17_SetStateMachine_m0492BC01DC09A901565AFA5A25FEFC8F60B16B7D_AdjustorThunk },
	{ 0x060002AA, U3CIsSessionTokenValidU3Ed__18_MoveNext_m3602DA58F4A18C37ABFE555D578583E067070E16_AdjustorThunk },
	{ 0x060002AB, U3CIsSessionTokenValidU3Ed__18_SetStateMachine_m4655ED5C5BC4A6561851ADB60CCF0F1ECC19D3DE_AdjustorThunk },
	{ 0x060002AC, U3CAuthorityU3Ed__19_MoveNext_mD7F845D3B62AA7CDD696C070975751A76147092E_AdjustorThunk },
	{ 0x060002AD, U3CAuthorityU3Ed__19_SetStateMachine_m21D2195194A8EA06D8D4FAD9A085B2C799F1F8E9_AdjustorThunk },
	{ 0x060002AE, U3CCloseSessionU3Ed__22_MoveNext_m7A5F8F033AC6779A5831138429CC6CA078EA55FB_AdjustorThunk },
	{ 0x060002AF, U3CCloseSessionU3Ed__22_SetStateMachine_mB33C422F5E76769272E1BD4E0D99BF534EB20106_AdjustorThunk },
	{ 0x060002F4, U3CU3C_LoginU3Eb__0U3Ed_MoveNext_m26588C90E5301163809F96C7A7471AA7429227B0_AdjustorThunk },
	{ 0x060002F5, U3CU3C_LoginU3Eb__0U3Ed_SetStateMachine_mF6C3111EAEB2B7F2E56CEDB8AA785B23F68AC35F_AdjustorThunk },
	{ 0x060002F6, U3C_LoginU3Ed__7_MoveNext_mF823572AA663C47B14AD1617F3412C6D5D533329_AdjustorThunk },
	{ 0x060002F7, U3C_LoginU3Ed__7_SetStateMachine_m81CB3FDE733BFC4B615A26A200701BD90014A637_AdjustorThunk },
	{ 0x060002FB, U3CU3C_SignTransactionU3Eb__0U3Ed_MoveNext_mEE00B688EB65DFCA192EA535CD5DFD7CDC82A31A_AdjustorThunk },
	{ 0x060002FC, U3CU3C_SignTransactionU3Eb__0U3Ed_SetStateMachine_mC080A980291CF59FA19E0A20B0BEF58F700A61DD_AdjustorThunk },
	{ 0x060002FD, U3CU3C_SignTransactionU3Eb__1U3Ed_MoveNext_m2566696F1ED9C9E578B55ACAF2A7EC4391FD68AD_AdjustorThunk },
	{ 0x060002FE, U3CU3C_SignTransactionU3Eb__1U3Ed_SetStateMachine_m7FC93260964AD6BC7DBC0242D0C261632B505BDE_AdjustorThunk },
	{ 0x060002FF, U3C_SignTransactionU3Ed__8_MoveNext_m571FC4EF2AC08D0A93761810D14269C7AC09FEEC_AdjustorThunk },
	{ 0x06000300, U3C_SignTransactionU3Ed__8_SetStateMachine_mFBECED754B5A2B22C6169BBF0BF07FD0C3D4A51A_AdjustorThunk },
	{ 0x06000304, U3CU3CSignMessageU3Eb__0U3Ed_MoveNext_mFC167ECC69464A175E3EA03D92B283B06B394DAF_AdjustorThunk },
	{ 0x06000305, U3CU3CSignMessageU3Eb__0U3Ed_SetStateMachine_mA07822211257DA9E5C09D200CE44BB07E53ADC9F_AdjustorThunk },
	{ 0x06000306, U3CU3CSignMessageU3Eb__1U3Ed_MoveNext_m386EDA145D0F34D098E7F8ACDD7E9970CA1521E7_AdjustorThunk },
	{ 0x06000307, U3CU3CSignMessageU3Eb__1U3Ed_SetStateMachine_mEA4C6B0193ED70EEAABB16347288A2DDD1A1C7DF_AdjustorThunk },
	{ 0x06000308, U3CSignMessageU3Ed__11_MoveNext_mC8A86E34B9137761557FA5CDF850DAA6F3B905FD_AdjustorThunk },
	{ 0x06000309, U3CSignMessageU3Ed__11_SetStateMachine_mFC2F7AEC9736E2D3F7A8EA525754E8560751BCF6_AdjustorThunk },
	{ 0x0600032F, U3CInitWalletsU3Ed__21_MoveNext_mCFD4BF7EFE02564F58221F60E8E856486CCF4606_AdjustorThunk },
	{ 0x06000330, U3CInitWalletsU3Ed__21_SetStateMachine_m40DBEFE6FC143C0696EB2331A60218769556CD91_AdjustorThunk },
	{ 0x06000331, U3CIsXnftU3Ed__22_MoveNext_m20291000B95120590DE13765C188052636B48C95_AdjustorThunk },
	{ 0x06000332, U3CIsXnftU3Ed__22_SetStateMachine_mBEDCC06148B011BEF51FABE9F8E2DB7E0703A572_AdjustorThunk },
	{ 0x06000333, U3C_LoginU3Ed__23_MoveNext_m71DD54BBB7606E7F8A6A10BF0F648811FA6EA75A_AdjustorThunk },
	{ 0x06000334, U3C_LoginU3Ed__23_SetStateMachine_mFA778CF821021B1760029E5AD544B34596108E89_AdjustorThunk },
	{ 0x06000338, U3CSetCurrentWalletU3Ed__24_MoveNext_m8DA08B3686C8AE5588638E9DCA3112F71C9A4996_AdjustorThunk },
	{ 0x06000339, U3CSetCurrentWalletU3Ed__24_SetStateMachine_mF93E59D255CADDFF96EF31823FC4D526090CE1D9_AdjustorThunk },
	{ 0x0600034D, U3CFireU3Ed__6_MoveNext_m507D9ED243310C6ADFC2E61B458DE9505F9E9BEA_AdjustorThunk },
	{ 0x0600034E, U3CFireU3Ed__6_SetStateMachine_m051044CC9B214DA55D7F8AA30B1FA7FEF581EB9F_AdjustorThunk },
	{ 0x06000370, U3CLoginU3Ed__27_MoveNext_m0C91351E890E4E40F48DD825E10D85144AED9407_AdjustorThunk },
	{ 0x06000371, U3CLoginU3Ed__27_SetStateMachine_m559C5A606C3AE91FFD86218C376F42B94A21F8AB_AdjustorThunk },
	{ 0x06000372, U3CCreateAccountU3Ed__30_MoveNext_mE4331B53A9DC8A63681898E67D8489A2ABFD6E3D_AdjustorThunk },
	{ 0x06000373, U3CCreateAccountU3Ed__30_SetStateMachine_m830775785A8260F06D0A055FE9CFA23FA3551D5F_AdjustorThunk },
	{ 0x06000374, U3CGetBalanceU3Ed__32_MoveNext_m14988E7626CE1C4AF30E22F12161A0E0C37DE79E_AdjustorThunk },
	{ 0x06000375, U3CGetBalanceU3Ed__32_SetStateMachine_m7A7F56AADAADA9BC23716B817DCB98DF1E35AB0B_AdjustorThunk },
	{ 0x06000376, U3CGetBalanceU3Ed__33_MoveNext_mE3FD12B37BAFAD05A095863F74A0BEA02A8A3A87_AdjustorThunk },
	{ 0x06000377, U3CGetBalanceU3Ed__33_SetStateMachine_mE8D27EB08A51BD3F4ABEB28EA556579BD0B7A5CC_AdjustorThunk },
	{ 0x06000378, U3CTransferU3Ed__34_MoveNext_m36A26B47E62835C10F286025C8466E19DC1AE7DD_AdjustorThunk },
	{ 0x06000379, U3CTransferU3Ed__34_SetStateMachine_m6329542B1265798F1B95A89AA76D71CE42D51623_AdjustorThunk },
	{ 0x0600037A, U3CTransferU3Ed__35_MoveNext_mE6D029E0EE19C202DCE7662F00B3EF60A0C9D22B_AdjustorThunk },
	{ 0x0600037B, U3CTransferU3Ed__35_SetStateMachine_m14527CF27F604315B1F03FB5EAB4CCB34D65C14C_AdjustorThunk },
	{ 0x0600037C, U3CGetTokenAccountsU3Ed__36_MoveNext_mCC8B5353A7B401827EC1D0E2E183F75A826918AB_AdjustorThunk },
	{ 0x0600037D, U3CGetTokenAccountsU3Ed__36_SetStateMachine_m9BF32F86CB1C7D64D1B597AE05AEF21151960D1D_AdjustorThunk },
	{ 0x0600037E, U3CGetTokenAccountsU3Ed__37_MoveNext_m737884E55851B157EC89D5F34E77F9DE52C20F56_AdjustorThunk },
	{ 0x0600037F, U3CGetTokenAccountsU3Ed__37_SetStateMachine_m2CF3D890336470F77D6FCC5EE374834C8B268699_AdjustorThunk },
	{ 0x06000380, U3CSignTransactionU3Ed__39_MoveNext_m8BB1D1C048E3F9410FE4C59AB4FBD4BBCD60340B_AdjustorThunk },
	{ 0x06000381, U3CSignTransactionU3Ed__39_SetStateMachine_mAD77379C7A76A38C7AC11CDF553D30BEC2E24AA1_AdjustorThunk },
	{ 0x06000382, U3CSignAllTransactionsU3Ed__41_MoveNext_m3FAE9462D015F1742DCFE8D87FF03AC1DE0788E2_AdjustorThunk },
	{ 0x06000383, U3CSignAllTransactionsU3Ed__41_SetStateMachine_m65A179ABDB3C4C9A77803BDF32E0BEDB14109B1F_AdjustorThunk },
	{ 0x06000384, U3CSignAndSendTransactionU3Ed__42_MoveNext_mEA8D88258C381711E210BA37CF501721D1F00A41_AdjustorThunk },
	{ 0x06000385, U3CSignAndSendTransactionU3Ed__42_SetStateMachine_mCBBD9BD3A3274AEFECDFBB5A7A83F2564E1738A9_AdjustorThunk },
	{ 0x06000386, U3CRequestAirdropU3Ed__44_MoveNext_m853D672A638056CF5A67211A8A7472F3C0D4D385_AdjustorThunk },
	{ 0x06000387, U3CRequestAirdropU3Ed__44_SetStateMachine_m085D704BAFDAA89FD06AFC9475EBE24F53D0AAFA_AdjustorThunk },
	{ 0x06000388, U3CGetBlockHashU3Ed__46_MoveNext_mD9516DEB58F41FA003F629417234F9FDA268BA42_AdjustorThunk },
	{ 0x06000389, U3CGetBlockHashU3Ed__46_SetStateMachine_m1E60FBA4AFC2810E2004F230BD4A50B8D5A6AE7C_AdjustorThunk },
	{ 0x060003CF, U3CLoginInGameWalletU3Ed__68_MoveNext_m87A760E0AD194D2516AADC3CB97ED2375ACF4BA8_AdjustorThunk },
	{ 0x060003D0, U3CLoginInGameWalletU3Ed__68_SetStateMachine_m2F1E7026D3D187D85865DDB0F571763AE318B166_AdjustorThunk },
	{ 0x060003D1, U3CCreateAccountU3Ed__69_MoveNext_m9509D75B7967408BF6C3EABF319214D4CA643556_AdjustorThunk },
	{ 0x060003D2, U3CCreateAccountU3Ed__69_SetStateMachine_mC56F979A6CB5AD6D1C477DE6551EFDED028AF7B5_AdjustorThunk },
	{ 0x060003D3, U3CLoginWeb3AuthU3Ed__70_MoveNext_mD55625DE87F1066FF85F2F1649AA298C6CB28BC1_AdjustorThunk },
	{ 0x060003D4, U3CLoginWeb3AuthU3Ed__70_SetStateMachine_mFCFAD64623D996332EE46CF923B08D63FF01F63C_AdjustorThunk },
	{ 0x060003D5, U3CLoginXNFTU3Ed__71_MoveNext_mC97BFEF295E4779A0C4BD0778986846788BA8BBD_AdjustorThunk },
	{ 0x060003D6, U3CLoginXNFTU3Ed__71_SetStateMachine_m8B53A485B37E689F9D69C0ACBDBA6EA23D0C4F15_AdjustorThunk },
	{ 0x060003D7, U3CLoginWalletAdapterU3Ed__72_MoveNext_m4C611AB91465080E71B66624D0A1392A9C4286B2_AdjustorThunk },
	{ 0x060003D8, U3CLoginWalletAdapterU3Ed__72_SetStateMachine_mB9E829EA97CB38AE20BACEA44C2558C3AB083A2E_AdjustorThunk },
	{ 0x060003D9, U3CUpdateBalanceU3Ed__77_MoveNext_m903578AA48F9F8506B708DDC9064875A7152508D_AdjustorThunk },
	{ 0x060003DA, U3CUpdateBalanceU3Ed__77_SetStateMachine_mA74A5B030572A9D821FEF4E7B023E376A1F9FEB7_AdjustorThunk },
	{ 0x060003DB, U3CUpdateNFTsU3Ed__78_MoveNext_mE8997212300C6884458B1B03954262634C1E9994_AdjustorThunk },
	{ 0x060003DC, U3CUpdateNFTsU3Ed__78_SetStateMachine_mF8AC9411D368109415678DD0EDEDB56BDA5881AC_AdjustorThunk },
	{ 0x060003EF, U3CLoadNFTsU3Ed__79_MoveNext_m08B56300A222E6077D215F081CE7EDA6B090B395_AdjustorThunk },
	{ 0x060003F0, U3CLoadNFTsU3Ed__79_SetStateMachine_m5A50A0A9F8355CAD01D09D9C40C03FF81F53FF5C_AdjustorThunk },
	{ 0x060003F3, U3CSubscribeToWalletEventsU3Ed__80_MoveNext_m052B394788EED3E7D025B9E32C545923B7C2DC61_AdjustorThunk },
	{ 0x060003F4, U3CSubscribeToWalletEventsU3Ed__80_SetStateMachine_m5DB5F713FDCCF53CD67C005764BCB6F394648C29_AdjustorThunk },
	{ 0x06000487, U3CInitializeCandyMachineU3Ed__11_MoveNext_m372641EDEFA76AD142C751E254943308D306F8DF_AdjustorThunk },
	{ 0x06000488, U3CInitializeCandyMachineU3Ed__11_SetStateMachine_m7A18DC92FC5E80AE5AC0AD7F3B2CF80435A9628F_AdjustorThunk },
	{ 0x06000489, U3CAddConfigLinesU3Ed__12_MoveNext_mB0D137A4C710003B97F6F814BDB0892F63E20074_AdjustorThunk },
	{ 0x0600048A, U3CAddConfigLinesU3Ed__12_SetStateMachine_mC2CF00E8AE1F166317B9E89CE739569CFC788377_AdjustorThunk },
	{ 0x0600048D, U3CMintOneTokenU3Ed__13_MoveNext_m1181ED5948D4A2D40B3F5B3B5C8BB73133B690E9_AdjustorThunk },
	{ 0x0600048E, U3CMintOneTokenU3Ed__13_SetStateMachine_mD27C715807CBFDD0EB91D28BDD7F9931BC2A71D1_AdjustorThunk },
	{ 0x06000491, U3CMintOneTokenWithGuardsU3Ed__14_MoveNext_m682B6F914390CFE441FD7466165340A59B6F97C6_AdjustorThunk },
	{ 0x06000492, U3CMintOneTokenWithGuardsU3Ed__14_SetStateMachine_mA7E1168AC2B81C8594970424C1C18C17A000AE72_AdjustorThunk },
	{ 0x06000493, U3CInitializeGuardsU3Ed__15_MoveNext_m291F4376836824E1F41296225A055115C611F450_AdjustorThunk },
	{ 0x06000494, U3CInitializeGuardsU3Ed__15_SetStateMachine_m2B3178034275BF7A34AC592DF5F82B430D0E306C_AdjustorThunk },
	{ 0x06000495, U3CAddGuardsU3Ed__16_MoveNext_m28772698B0EC23BE754B73A4524061C7AEBDB79C_AdjustorThunk },
	{ 0x06000496, U3CAddGuardsU3Ed__16_SetStateMachine_mFF608CBD682B1B11475BF40DAE7A73F076A2BDEE_AdjustorThunk },
	{ 0x06000497, U3CWrapCandyMachineU3Ed__17_MoveNext_m505FB69D8E9217EFB7C8639BF8E2200FD5F23C00_AdjustorThunk },
	{ 0x06000498, U3CWrapCandyMachineU3Ed__17_SetStateMachine_m465E0684DB3D9127C425A76BC938C0C01BDC8CAE_AdjustorThunk },
	{ 0x06000499, U3CWithdrawU3Ed__18_MoveNext_mE3E2A0BEB76A21E2241189CABE17AD8E46CC46B9_AdjustorThunk },
	{ 0x0600049A, U3CWithdrawU3Ed__18_SetStateMachine_m60D6BE7DDA5057C7EC1F1D66B6D60A7752D7E136_AdjustorThunk },
	{ 0x0600049B, U3CWithdrawGuardsU3Ed__19_MoveNext_m635D26AD0E4F6E47F900FA79B5D481FF3D1AF4A8_AdjustorThunk },
	{ 0x0600049C, U3CWithdrawGuardsU3Ed__19_SetStateMachine_mA9B5959934310C72D0C308383C7BFBE2A16A4B94_AdjustorThunk },
	{ 0x060004B4, U3CTryGetNftDataU3Ed__3_MoveNext_m58C0867108B5FFE2CD4C4B51BF5948194AF79581_AdjustorThunk },
	{ 0x060004B5, U3CTryGetNftDataU3Ed__3_SetStateMachine_m0DF8A2A110E9187D23E731F7A7605B3C6869F516_AdjustorThunk },
	{ 0x060004B6, U3CLoadTextureU3Ed__5_MoveNext_mC655A2A6DAE3DDA587484EAA064FA24C4E715217_AdjustorThunk },
	{ 0x060004B7, U3CLoadTextureU3Ed__5_SetStateMachine_m416574BBE0B82DCB9C76C15F9D7A47FEAA340017_AdjustorThunk },
};
static const int32_t s_InvokerIndices[1215] = 
{
	18354,
	16565,
	16565,
	13597,
	16421,
	14314,
	18354,
	0,
	0,
	0,
	0,
	0,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	12478,
	12638,
	12478,
	10082,
	12478,
	10082,
	12638,
	12478,
	10082,
	12478,
	12638,
	16565,
	10046,
	8988,
	12638,
	12638,
	10082,
	10082,
	10082,
	10082,
	12638,
	10046,
	19936,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	10082,
	1724,
	1724,
	8988,
	4339,
	811,
	8988,
	4339,
	12440,
	12478,
	12478,
	12478,
	12478,
	12478,
	12638,
	12478,
	16570,
	18354,
	8988,
	8988,
	8988,
	8988,
	16570,
	16570,
	18354,
	5644,
	10082,
	12638,
	10082,
	10082,
	8988,
	8988,
	19845,
	19881,
	12638,
	12638,
	12638,
	19936,
	12638,
	12638,
	12638,
	12638,
	10046,
	12638,
	12348,
	12478,
	12638,
	12478,
	12638,
	2808,
	5635,
	5635,
	2832,
	12638,
	12638,
	12638,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12441,
	10047,
	12638,
	12478,
	10082,
	12348,
	9954,
	12638,
	19881,
	4339,
	4339,
	12638,
	19936,
	10046,
	12638,
	12348,
	12478,
	12638,
	12478,
	10046,
	12638,
	12348,
	12478,
	12638,
	12478,
	18354,
	19936,
	17074,
	18354,
	18991,
	16570,
	12638,
	2858,
	8988,
	8988,
	4339,
	18354,
	18354,
	19936,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12348,
	9954,
	12440,
	10046,
	12440,
	10046,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12638,
	12478,
	10082,
	12440,
	10046,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12348,
	9954,
	12348,
	9954,
	12348,
	9954,
	12348,
	9954,
	12638,
	12440,
	10046,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12440,
	10046,
	12440,
	10046,
	12440,
	10046,
	12638,
	19936,
	19845,
	17058,
	18979,
	17074,
	17079,
	17067,
	17058,
	16570,
	18354,
	16421,
	18194,
	16673,
	18465,
	16183,
	18032,
	18991,
	19936,
	18032,
	19936,
	18354,
	18354,
	12638,
	19936,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12638,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12638,
	12478,
	10082,
	12440,
	10046,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12638,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12638,
	2023,
	940,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12348,
	9954,
	12478,
	10082,
	12638,
	15766,
	18354,
	18354,
	19872,
	19936,
	12638,
	7477,
	8988,
	8988,
	10082,
	10082,
	10082,
	10082,
	12638,
	10082,
	10082,
	2858,
	10082,
	10082,
	10082,
	5644,
	12638,
	12638,
	12638,
	10082,
	8988,
	12638,
	19936,
	12638,
	12638,
	12638,
	12638,
	10082,
	12638,
	12638,
	12638,
	10082,
	10082,
	12638,
	12638,
	12638,
	10046,
	12638,
	12348,
	12478,
	12638,
	12478,
	12638,
	10082,
	18194,
	16991,
	12638,
	12638,
	10082,
	18987,
	18349,
	18987,
	18349,
	12638,
	19936,
	10046,
	12638,
	12348,
	12478,
	12638,
	12478,
	10046,
	12638,
	12348,
	12478,
	12638,
	12478,
	19936,
	12892,
	16986,
	16991,
	18987,
	16991,
	16991,
	16991,
	16991,
	18190,
	18190,
	18190,
	15686,
	16988,
	16991,
	18029,
	18987,
	18987,
	12638,
	19881,
	18991,
	19936,
	12440,
	12478,
	12638,
	12509,
	12638,
	12638,
	9062,
	12638,
	18987,
	18987,
	18349,
	16991,
	16991,
	16988,
	12638,
	12638,
	12638,
	12638,
	8611,
	12638,
	12638,
	18991,
	18991,
	17067,
	19936,
	10046,
	12638,
	12348,
	12478,
	12638,
	12478,
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
	12348,
	12478,
	10082,
	12478,
	12440,
	12440,
	12440,
	12440,
	12440,
	12348,
	12440,
	10046,
	12440,
	10046,
	12348,
	10082,
	12478,
	12638,
	12638,
	12638,
	12348,
	12478,
	10082,
	8988,
	12478,
	12440,
	12440,
	12440,
	12440,
	12440,
	12348,
	12440,
	10046,
	12440,
	10046,
	12348,
	10082,
	12478,
	12638,
	12638,
	12638,
	3426,
	19936,
	18991,
	18991,
	18991,
	19936,
	19936,
	19845,
	18979,
	18991,
	18991,
	18991,
	18991,
	18991,
	18991,
	19936,
	19936,
	19936,
	19936,
	19936,
	19936,
	12638,
	12638,
	12638,
	12638,
	10082,
	7361,
	18991,
	18354,
	18354,
	18354,
	18354,
	18354,
	18354,
	18354,
	19936,
	12638,
	3063,
	7610,
	7361,
	0,
	0,
	0,
	0,
	12638,
	0,
	0,
	0,
	18354,
	12638,
	12638,
	12638,
	12638,
	1914,
	8988,
	4339,
	2442,
	8988,
	8988,
	8988,
	18354,
	18354,
	18354,
	18354,
	18032,
	18032,
	18354,
	18354,
	17074,
	10046,
	12638,
	12348,
	12478,
	12638,
	12478,
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
	12638,
	906,
	8988,
	8988,
	8988,
	8988,
	4339,
	19881,
	19881,
	906,
	8988,
	12638,
	8988,
	8988,
	8988,
	4339,
	12440,
	12638,
	10082,
	10082,
	10082,
	10082,
	10082,
	10082,
	18354,
	19936,
	19936,
	12638,
	6057,
	8954,
	8954,
	2858,
	5644,
	906,
	8988,
	8988,
	8988,
	8988,
	4339,
	18991,
	18991,
	18991,
	18991,
	17074,
	17074,
	18349,
	13770,
	13031,
	13031,
	18349,
	12638,
	12638,
	12638,
	12638,
	12638,
	12478,
	10082,
	12478,
	10082,
	1914,
	12348,
	15351,
	10082,
	15351,
	4246,
	12478,
	8981,
	8981,
	8981,
	18354,
	12638,
	8981,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	0,
	10082,
	10082,
	10082,
	0,
	10082,
	0,
	0,
	5638,
	10082,
	2442,
	10082,
	0,
	0,
	0,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12440,
	10046,
	12638,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12638,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12638,
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
	12638,
	906,
	8988,
	8988,
	8988,
	12638,
	8988,
	4339,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	906,
	8988,
	8988,
	8988,
	8988,
	4339,
	12638,
	12638,
	19881,
	18991,
	19881,
	18991,
	906,
	19881,
	19881,
	8988,
	19881,
	8988,
	8988,
	4339,
	8988,
	18991,
	18991,
	18991,
	18991,
	18979,
	18991,
	17074,
	15766,
	15766,
	15766,
	18354,
	18991,
	12478,
	12638,
	12638,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	7477,
	12638,
	10082,
	12478,
	10082,
	12638,
	12638,
	12638,
	10082,
	12638,
	12638,
	12638,
	10082,
	5282,
	19881,
	12348,
	12638,
	7898,
	8981,
	8981,
	8981,
	12478,
	12638,
	10082,
	12440,
	12478,
	12478,
	12478,
	10082,
	12478,
	10082,
	1914,
	12638,
	8988,
	0,
	12638,
	4339,
	0,
	4335,
	8981,
	1728,
	2449,
	4339,
	8981,
	0,
	8988,
	0,
	8988,
	2424,
	0,
	4407,
	2386,
	12478,
	12478,
	12478,
	16558,
	12638,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	12638,
	7477,
	12478,
	10082,
	12440,
	10046,
	12440,
	10046,
	18991,
	18991,
	18991,
	18991,
	18991,
	18991,
	18991,
	18991,
	18991,
	18991,
	19872,
	18987,
	18991,
	18991,
	18991,
	18991,
	19881,
	19881,
	19881,
	19881,
	19881,
	12638,
	12638,
	8988,
	4339,
	8981,
	12478,
	12478,
	12638,
	10082,
	12638,
	15303,
	18948,
	18948,
	14119,
	18948,
	12478,
	12478,
	17074,
	18354,
	19936,
	12638,
	19936,
	10082,
	5638,
	12638,
	4339,
	10082,
	5638,
	12638,
	4339,
	10082,
	5638,
	9989,
	2368,
	10082,
	5638,
	5635,
	1705,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	7477,
	12638,
	7477,
	12638,
	7477,
	12638,
	10082,
	19936,
	12638,
	7477,
	7477,
	10082,
	8988,
	8988,
	7477,
	7477,
	12638,
	10082,
	12638,
	5644,
	12638,
	10082,
	12638,
	10082,
	10082,
	906,
	10082,
	8988,
	12638,
	4339,
	8988,
	8988,
	8988,
	8981,
	2858,
	805,
	12638,
	2858,
	805,
	12638,
	2858,
	805,
	12638,
	0,
	0,
	0,
	18354,
	0,
	0,
	15338,
	18991,
	0,
	0,
	0,
	0,
	0,
	0,
	18354,
	18354,
	18354,
	18354,
	14771,
	14771,
	15743,
	15743,
	12478,
	10082,
	12478,
	10082,
	3986,
	16511,
	12638,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	1724,
	10082,
	12638,
	19936,
	12478,
	10082,
	12638,
	12478,
	10082,
	12348,
	9954,
	12638,
	12478,
	10082,
	12478,
	10082,
	12348,
	9954,
	12638,
	12478,
	10082,
	12638,
	12478,
	10082,
	12478,
	10082,
	12348,
	9954,
	12638,
	12478,
	10082,
	12638,
	12440,
	10046,
	12638,
	12478,
	10082,
	12638,
	12478,
	10082,
	12638,
	12478,
	10082,
	12638,
	12478,
	10082,
	12478,
	10082,
	12638,
	12478,
	10082,
	12478,
	10082,
	12638,
	12478,
	10082,
	12638,
	18354,
	13321,
	13327,
	13148,
	12962,
	14563,
	13769,
	13769,
	14563,
	14563,
	18695,
	18695,
	19936,
	12638,
	10082,
	12638,
	10082,
	12638,
	8988,
	12638,
	10082,
	12638,
	8988,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	10082,
	12638,
	12638,
	12638,
	12638,
	12638,
	12638,
	10082,
	18354,
	12638,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12478,
	10082,
	12638,
	12638,
	10082,
	13307,
	18354,
	8981,
	12638,
	10082,
	12638,
	10082,
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
	{ 0x06000182, 24,  (void**)&WebGLInputMobile_OnTouchEnd_mA93BC33B84197B228324BF845083BD9773C98FE7_RuntimeMethod_var, 0 },
	{ 0x06000184, 23,  (void**)&WebGLInputMobile_OnFocusOut_m738467287A0F65FB47CBCD9E0A89DA7E9F47C47F_RuntimeMethod_var, 0 },
	{ 0x060001B2, 20,  (void**)&WebGLInput_OnFocus_mEAFF02CB2715232B724DBF02517417F85CCF66B4_RuntimeMethod_var, 0 },
	{ 0x060001B3, 18,  (void**)&WebGLInput_OnBlur_m056127CBA134428CD5D30B5D0D567BBAD4244400_RuntimeMethod_var, 0 },
	{ 0x060001B5, 22,  (void**)&WebGLInput_OnValueChange_m8FC2093C4282D531764042FF66ADBB6526218B39_RuntimeMethod_var, 0 },
	{ 0x060001B6, 19,  (void**)&WebGLInput_OnEditEnd_mD1ADCC675C43BF48128C84734354BB25DCCB6EDB_RuntimeMethod_var, 0 },
	{ 0x060001B7, 21,  (void**)&WebGLInput_OnTab_m9D1182F054C00912D28B631BA1F798B1BD3D2788_RuntimeMethod_var, 0 },
	{ 0x06000215, 26,  (void**)&WebGLWindow_OnWindowFocus_m175353D303C2E8EB07A2679015D269E0F3623C3D_RuntimeMethod_var, 0 },
	{ 0x06000216, 25,  (void**)&WebGLWindow_OnWindowBlur_m0CF09BA6693BCDA3D073A368AB81A46122449FF4_RuntimeMethod_var, 0 },
	{ 0x06000217, 27,  (void**)&WebGLWindow_OnWindowResize_m386294E41E1A89D8BB052E42ED30972194B8356C_RuntimeMethod_var, 0 },
	{ 0x06000285, 5,  (void**)&PhantomWebGL_OnPhantomConnected_m59FBF77E81DEABD19973FF25004B7535ABA04AE2_RuntimeMethod_var, 0 },
	{ 0x06000286, 6,  (void**)&PhantomWebGL_OnTransactionSigned_m165CABBA8446863ACBD0ECC56D915F06E78A90FF_RuntimeMethod_var, 0 },
	{ 0x06000287, 4,  (void**)&PhantomWebGL_OnMessageSigned_mF0225CDC896BF4CC36AFB7CB95790977581F831D_RuntimeMethod_var, 0 },
	{ 0x06000320, 10,  (void**)&SolanaWalletAdapterWebGL_OnWalletConnected_m52F659CC00A73A916A6AE1F7149EDC74C206E3F8_RuntimeMethod_var, 0 },
	{ 0x06000321, 9,  (void**)&SolanaWalletAdapterWebGL_OnTransactionSigned_m0E6658F8F7D1DEEDA59BF5C872E966D1A6D38F57_RuntimeMethod_var, 0 },
	{ 0x06000322, 7,  (void**)&SolanaWalletAdapterWebGL_OnAllTransactionsSigned_m68547D32562C807BDCFE6E4A2E63BF41A26C4DBB_RuntimeMethod_var, 0 },
	{ 0x06000323, 8,  (void**)&SolanaWalletAdapterWebGL_OnMessageSigned_m3246741C9145ACEC7E8EBF1F9A534CF7FD6BBED8_RuntimeMethod_var, 0 },
	{ 0x06000324, 11,  (void**)&SolanaWalletAdapterWebGL_OnWalletsInitialized_mAC15BBFC4E311A68D0ED2E36D2D4125CCF527A1D_RuntimeMethod_var, 0 },
	{ 0x06000325, 12,  (void**)&SolanaWalletAdapterWebGL_OnWalletsLoaded_m45CA61922BE84B2F28BB77715AD43D5DBF0E3B02_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[18] = 
{
	{ 0x02000057, { 9, 3 } },
	{ 0x02000075, { 35, 1 } },
	{ 0x02000079, { 36, 1 } },
	{ 0x020000C2, { 54, 15 } },
	{ 0x020000C3, { 69, 7 } },
	{ 0x020000C4, { 76, 7 } },
	{ 0x0600022D, { 0, 6 } },
	{ 0x0600022E, { 6, 1 } },
	{ 0x0600022F, { 7, 1 } },
	{ 0x06000230, { 8, 1 } },
	{ 0x060002B4, { 12, 4 } },
	{ 0x060002B6, { 16, 10 } },
	{ 0x060002B7, { 26, 9 } },
	{ 0x0600040A, { 37, 4 } },
	{ 0x0600040B, { 41, 4 } },
	{ 0x0600040C, { 45, 4 } },
	{ 0x0600040E, { 49, 3 } },
	{ 0x0600040F, { 52, 2 } },
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
	1215,
	s_methodPointers,
	108,
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
