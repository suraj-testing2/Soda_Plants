/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_noisepages_nettoyeur_patchfield_pd_PdModule */

#ifndef _Included_com_noisepages_nettoyeur_patchfield_pd_PdModule
#define _Included_com_noisepages_nettoyeur_patchfield_pd_PdModule
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_noisepages_nettoyeur_patchfield_pd_PdModule
 * Method:    pdInitAudio
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_noisepages_nettoyeur_patchfield_pd_PdModule_pdInitAudio
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_noisepages_nettoyeur_patchfield_pd_PdModule
 * Method:    configureModule
 * Signature: (JIIII)J
 */
JNIEXPORT jlong JNICALL Java_com_noisepages_nettoyeur_patchfield_pd_PdModule_configureModule
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     com_noisepages_nettoyeur_patchfield_pd_PdModule
 * Method:    release
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_noisepages_nettoyeur_patchfield_pd_PdModule_release
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
