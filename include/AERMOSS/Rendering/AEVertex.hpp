#ifndef AEVERTEX_H
#define AEVERTEX_H

#pragma once

#include <glm/glm.hpp>
#include <array>
#include <functional>
#include <AERMOSS/Util/AEConstants.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)
    struct AEVertex {
        glm::vec3 position{};
        glm::vec3 normal{};
        glm::vec3 color{1.0f, 1.0f, 1.0f}; // Default white
        glm::vec2 texUV{};
        glm::vec3 tangent{};
        glm::vec3 bitangent{};
        std::array<int, 4> boneIDs{ -1, -1, -1, -1 };  // Default no bone influence
        std::array<float, 4> weights{ 0.0f, 0.0f, 0.0f, 0.0f };

        AEVertex();  // Default constructor
        AEVertex(glm::vec3 pos, glm::vec3 norm, glm::vec3 col, glm::vec2 uv);  // Parameterized constructor

        AEVertex operator*(float scalar) const;
        AEVertex& operator+=(const AEVertex& other);

        struct HashFunction {
            size_t operator()(const AEVertex& vertex) const;
        };
    };
AE_NAMESPACE_END()

#endif
