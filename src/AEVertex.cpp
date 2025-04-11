#include <AERMOSS/Rendering/AEVertex.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)

    AEVertex::AEVertex() = default;

    AEVertex::AEVertex(glm::vec3 pos, glm::vec3 norm, glm::vec3 col, glm::vec2 uv)
        : position(pos), normal(norm), color(col), texUV(uv) {}

    AEVertex AEVertex::operator*(float scalar) const {
        return AEVertex(position * scalar, normal, color, texUV);
    }

    AEVertex& AEVertex::operator+=(const AEVertex& other) {
        position += other.position;
        normal += other.normal;
        color += other.color;
        texUV += other.texUV;
        return *this;
    }

    size_t AEVertex::HashFunction::operator()(const AEVertex& vertex) const {
        return std::hash<float>()(vertex.position.x) ^
               std::hash<float>()(vertex.position.y) ^
               std::hash<float>()(vertex.position.z);
    }
AE_NAMESPACE_END()

