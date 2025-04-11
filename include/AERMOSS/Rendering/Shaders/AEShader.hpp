#ifndef AESHADER_H
#define AESHADER_H

#pragma once

#include <iostream>
#include <glad/glad.h>
#include <AERMOSS/Util/AEFileReader.hpp>
#include <AERMOSS/Util/AEConstants.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)
    AE_CLASS_BEGIN(AEShader)
        public:
            GLuint shaderProgram;

            AEShader(const char* vertexFile, const char* fragmentFile);
            ~AEShader();

            void Active();
            void Destroy();
    AE_CLASS_END()
AE_NAMESPACE_END()


#endif