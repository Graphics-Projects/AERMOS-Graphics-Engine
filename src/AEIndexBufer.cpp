#include <AERMOSS/Buffers/EBO/AEIndexBuffer.hpp>

namespace AERMOSS {
     AEIndexBuffer::AEIndexBuffer(std::vector <unsigned int>& indices) : count(indices.size()) {
        glGenBuffers(1, &id);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, id);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(unsigned int), indices.data(), GL_STATIC_DRAW);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    }

    AEIndexBuffer::~AEIndexBuffer() {
        
    }

    int AEIndexBuffer::getCount() {
        return count;
    }

    void AEIndexBuffer::bind() {
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, id);
    }

    void AEIndexBuffer::unbind() {
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    }

    void AEIndexBuffer::destroy() {
        glDeleteBuffers(1, &id);
    }
}