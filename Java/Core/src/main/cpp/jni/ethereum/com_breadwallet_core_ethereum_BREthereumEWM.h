/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_breadwallet_core_ethereum_BREthereumEWM */

#ifndef _Included_com_breadwallet_core_ethereum_BREthereumEWM
#define _Included_com_breadwallet_core_ethereum_BREthereumEWM
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniCreateEWM
 * Signature: (Lcom/breadwallet/core/ethereum/BREthereumEWM/Client;JLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniCreateEWM
  (JNIEnv *, jclass, jobject, jlong, jstring, jstring, jobjectArray);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniCreateEWM_PublicKey
 * Signature: (Lcom/breadwallet/core/ethereum/BREthereumEWM/Client;JLjava/lang/String;[B)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniCreateEWM_1PublicKey
  (JNIEnv *, jclass, jobject, jlong, jstring, jbyteArray);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAddressIsValid
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAddressIsValid
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAnnounceTransaction
 * Signature: (ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAnnounceTransaction
  (JNIEnv *, jobject, jint, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAnnounceTransactionComplete
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAnnounceTransactionComplete
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAnnounceLog
 * Signature: (ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAnnounceLog
  (JNIEnv *, jobject, jint, jstring, jstring, jobjectArray, jstring, jstring, jstring, jstring, jstring, jstring, jstring);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAnnounceLogComplete
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAnnounceLogComplete
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAnnounceBalance
 * Signature: (JLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAnnounceBalance
  (JNIEnv *, jobject, jlong, jstring, jint);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAnnounceGasPrice
 * Signature: (JLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAnnounceGasPrice
  (JNIEnv *, jobject, jlong, jstring, jint);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAnnounceGasEstimate
 * Signature: (JJLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAnnounceGasEstimate
  (JNIEnv *, jobject, jlong, jlong, jstring, jint);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAnnounceSubmitTransaction
 * Signature: (JJLjava/lang/String;ILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAnnounceSubmitTransaction
  (JNIEnv *, jobject, jlong, jlong, jstring, jint, jstring, jint);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAnnounceBlockNumber
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAnnounceBlockNumber
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAnnounceNonce
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAnnounceNonce
  (JNIEnv *, jobject, jstring, jstring, jint);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAnnounceToken
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAnnounceToken
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jint, jstring, jstring, jint);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniAnnounceTokenComplete
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniAnnounceTokenComplete
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniEWMGetAccount
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniEWMGetAccount
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniGetAccountPrimaryAddress
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniGetAccountPrimaryAddress
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniGetAccountPrimaryAddressPublicKey
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniGetAccountPrimaryAddressPublicKey
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniGetAccountPrimaryAddressPrivateKey
 * Signature: (JLjava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniGetAccountPrimaryAddressPrivateKey
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniEWMGetWallet
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniEWMGetWallet
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniEWMGetWalletToken
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniEWMGetWalletToken
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniEWMCreateWalletToken
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniEWMCreateWalletToken
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniEWMWalletGetToken
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniEWMWalletGetToken
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniGetWalletBalance
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniGetWalletBalance
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniEstimateWalletGasPrice
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniEstimateWalletGasPrice
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniWalletGetDefaultGasPrice
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniWalletGetDefaultGasPrice
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniWalletSetDefaultGasPrice
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniWalletSetDefaultGasPrice
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniWalletGetDefaultGasLimit
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniWalletGetDefaultGasLimit
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniWalletSetDefaultGasLimit
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniWalletSetDefaultGasLimit
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniCreateTransaction
 * Signature: (JLjava/lang/String;Ljava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniCreateTransaction
  (JNIEnv *, jobject, jlong, jstring, jstring, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniCreateTransactionGeneric
 * Signature: (JLjava/lang/String;Ljava/lang/String;JLjava/lang/String;JLjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniCreateTransactionGeneric
  (JNIEnv *, jobject, jlong, jstring, jstring, jlong, jstring, jlong, jstring, jstring);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniSignTransaction
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniSignTransaction
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniSignTransactionWithPrivateKey
 * Signature: (JJ[B)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniSignTransactionWithPrivateKey
  (JNIEnv *, jobject, jlong, jlong, jbyteArray);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniSubmitTransaction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniSubmitTransaction
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniGetTransactions
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniGetTransactions
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionEstimateGas
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionEstimateGas
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionEstimateFee
 * Signature: (JLjava/lang/String;JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionEstimateFee
  (JNIEnv *, jobject, jlong, jstring, jlong, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionHasToken
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionHasToken
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionGetAmount
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionGetAmount
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionGetFee
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionGetFee
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionSourceAddress
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionSourceAddress
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionTargetAddress
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionTargetAddress
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionGetIdentifier
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionGetIdentifier
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionGetGasPrice
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionGetGasPrice
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionGetGasLimit
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionGetGasLimit
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionGetGasUsed
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionGetGasUsed
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionGetNonce
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionGetNonce
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionGetBlockNumber
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionGetBlockNumber
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionGetBlockTimestamp
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionGetBlockTimestamp
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionGetBlockConfirmations
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionGetBlockConfirmations
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionGetToken
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionGetToken
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionIsConfirmed
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionIsConfirmed
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniTransactionIsSubmitted
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniTransactionIsSubmitted
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniUpdateTokens
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniUpdateTokens
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniEWMGetBlockHeight
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniEWMGetBlockHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniEWMConnect
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniEWMConnect
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    jniEWMDisconnect
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_jniEWMDisconnect
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_ethereum_BREthereumEWM
 * Method:    initializeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_ethereum_BREthereumEWM_initializeNative
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
