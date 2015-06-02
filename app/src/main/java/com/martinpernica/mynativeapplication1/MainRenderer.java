package com.martinpernica.mynativeapplication1;

import android.opengl.GLSurfaceView;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

public class MainRenderer implements GLSurfaceView.Renderer {

    public void onDrawFrame(GL10 gl)
    {
        //gl.glClear(GL10.GL_COLOR_BUFFER_BIT);

        nativeDrawFrame();
    }

    public void onSurfaceChanged(GL10 gl, int width, int height)
    {
        //gl.glViewport(0, 0, width, height);

        nativeInitialize(width, height);
    }

    public void onSurfaceCreated(GL10 gl, EGLConfig config)
    {
        //gl.glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
    }

    private native void nativeInitialize(int width, int height);
    private native void nativeDrawFrame();

    static {
        System.loadLibrary("native_lib");
    }
}
