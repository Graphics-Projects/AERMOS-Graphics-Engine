#ifndef AELINUXWINDOW_H
#define AELINUXWINDOW_H

#pragma once

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <AERMOSS/Util/AEColor.hpp>
#include <AERMOSS/Util/AEConstants.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)
    AE_CLASS_BEGIN(AELinuxWindow)
    private:
        GLFWwindow* window;
        int _width, _height;
        const char* _title;
        AERMOSS::AEColor color;
    public:
        AELinuxWindow(int width, int height, const char* title);
        ~AELinuxWindow();

        inline bool should_close() { return glfwWindowShouldClose(window); }

        void Update();
        void Render(AERMOSS::AEColor background_color, bool draw, bool render_imgui, bool render_models, bool clear_color);
        void Destroy();
    AE_CLASS_END()
AE_NAMESPACE_END()

#endif