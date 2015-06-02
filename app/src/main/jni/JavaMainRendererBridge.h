#pragma once
#ifndef _Included_com_martinpernica_mynativeapplication1_MainRenderer
#define _Included_com_martinpernica_mynativeapplication1_MainRenderer

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_martinpernica_mynativeapplication1_MainRenderer
 * Method:    nativeInitialize
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_martinpernica_mynativeapplication1_MainRenderer_nativeInitialize
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_martinpernica_mynativeapplication1_MainRenderer
 * Method:    nativeDrawFrame
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_martinpernica_mynativeapplication1_MainRenderer_nativeDrawFrame
  (JNIEnv *, jobject);

#ifdef __cplusplus
}

#endif
#endif
