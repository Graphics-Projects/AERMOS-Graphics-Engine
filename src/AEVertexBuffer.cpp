#include <AERMOSS/Buffers/VBO/AEVertexBuffer.hpp>

namespace vega {
     AEVertexBuffer::AEVertexBuffer(std::vector <VEGAVertex>& vertices) {
        glGenBuffers(1, &id);
        glBindBuffer(GL_ARRAY_BUFFER, id);
        glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(VEGAVertex), vertices.data(), GL_STATIC_DRAW);
        glBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    AEVertexBuffer::~AEVertexBuffer() {

    }

    void AEVertexBuffer::bind() {
        glBindBuffer(GL_ARRAY_BUFFER, id);
    }

    void AEVertexBuffer::unbind() {
        glBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    void AEVertexBuffer::destroy() {
        glDeleteBuffers(1, &id);
    }
}