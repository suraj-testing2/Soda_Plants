/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_noisepages_nettoyeur_patchfield_modules_JavaModule */

#ifndef _Included_com_noisepages_nettoyeur_patchfield_modules_JavaModule
#define _Included_com_noisepages_nettoyeur_patchfield_modules_JavaModule
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_noisepages_nettoyeur_patchfield_modules_JavaModule
 * Method:    configure
 * Signature: (JIIII)J
 */
JNIEXPORT jlong JNICALL Java_com_noisepages_nettoyeur_patchfield_modules_JavaModule_configure
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     com_noisepages_nettoyeur_patchfield_modules_JavaModule
 * Method:    release
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_noisepages_nettoyeur_patchfield_modules_JavaModule_release
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_noisepages_nettoyeur_patchfield_modules_JavaModule
 * Method:    fillInputBuffer
 * Signature: (J[F)V
 */
JNIEXPORT void JNICALL Java_com_noisepages_nettoyeur_patchfield_modules_JavaModule_fillInputBuffer
  (JNIEnv *, jobject, jlong, jfloatArray);

/*
 * Class:     com_noisepages_nettoyeur_patchfield_modules_JavaModule
 * Method:    sendOutputBuffer
 * Signature: (J[F)V
 */
JNIEXPORT void JNICALL Java_com_noisepages_nettoyeur_patchfield_modules_JavaModule_sendOutputBuffer
  (JNIEnv *, jobject, jlong, jfloatArray);

/*
 * Class:     com_noisepages_nettoyeur_patchfield_modules_JavaModule
 * Method:    signalThread
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_noisepages_nettoyeur_patchfield_modules_JavaModule_signalThread
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
