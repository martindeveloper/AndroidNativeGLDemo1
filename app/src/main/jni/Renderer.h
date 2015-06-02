#pragma once
#include "Headers.h"

class Renderer {
public:
    Renderer();
    void Initialize(const RendererConfig config);
    void DrawFrame();
};