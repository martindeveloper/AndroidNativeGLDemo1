#include "Renderer.h"

Renderer::Renderer()
{}

void Renderer::Initialize(const RendererConfig config)
{
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
    glViewport(0, 0, config.Width, config.Height);
}

void Renderer::DrawFrame()
{
    glClear(GL_COLOR_BUFFER_BIT);
    __android_log_write(ANDROID_LOG_INFO, "MyNativeApplication1::Renderer", "DrawFrame called");
}