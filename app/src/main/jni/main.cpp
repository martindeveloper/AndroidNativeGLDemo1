#include "Headers.h"

Renderer* GetRenderer()
{
    static Renderer* renderer;

    if(renderer == NULL) {
        renderer = new Renderer();
    }

    return renderer;
}

/* Android native bridge functions */

JNIEXPORT void JNICALL Java_com_martinpernica_mynativeapplication1_MainRenderer_nativeInitialize (JNIEnv* env, jobject obj, jint width, jint height)
{
    const RendererConfig config = { width, height };
    GetRenderer()->Initialize(config);
}

JNIEXPORT void JNICALL Java_com_martinpernica_mynativeapplication1_MainRenderer_nativeDrawFrame (JNIEnv* env, jobject obj)
{
    GetRenderer()->DrawFrame();
}