#pragma once

#include <glad/glad.h>

#include <vector>

namespace AERMOSS {
    class AEIndexBuffer {
        private:
            unsigned int id;
            unsigned int count;

        public:
            AEIndexBuffer(std::vector <unsigned int>& indices);
            ~AEIndexBuffer();

            int getCount();
            void bind();
            void unbind();
            void destroy();
    };
}