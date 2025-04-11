#ifndef AEWINDOW_H
#define AEWINDOW_H

#pragma once

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <AERMOSS/Util/AEColor.hpp>
#include <AERMOSS/Util/AEConstants.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)
    class AEWindow{
    private:
        GLFWwindow* window;
        int _width, _height;
        const char* _title;
        AERMOSS::AEColor color;
    public:
        AEWindow(int width, int height, const char* title);
        ~AEWindow();

        inline bool should_close() { return glfwWindowShouldClose(window); }

        void Update();
        void Render(AERMOSS::AEColor background_color, bool draw, bool render_imgui, bool render_models, bool clear_color);
        void Destroy();
    };
AE_NAMESPACE_END()

#endif