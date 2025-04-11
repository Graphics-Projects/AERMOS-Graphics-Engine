#pragma once

#include <glad/glad.h>

#include <AERMOSS/Buffers/VBO/AEVertexBuffer.hpp>

namespace AERMOSS {
    class AEVertexArray {
        private:
            unsigned int id;

        public:
            AEVertexArray();
            ~AEVertexArray();

            void linkAttrib(AEVertexBuffer* buffer, unsigned int index, GLenum type, unsigned int count, unsigned int stride, void* offset);
            void bind();
            void unbind();
            void destroy();
    };
}