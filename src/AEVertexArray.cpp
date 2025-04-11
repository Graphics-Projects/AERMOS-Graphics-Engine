#include <AERMOSS/Buffers/VAO/AEVertexArray.hpp>

namespace AERMOSS {
     AEVertexArray::VEGAAEVertexArrayVertexArray() {
        glGenVertexArrays(1, &id);
        glBindVertexArray(id);
    }

    AEVertexArray::~AEVertexArray() {

    }

    void AEVertexArray::linkAttrib(AEVertexBuffer* buffer, unsigned int index, GLenum type, unsigned int count, unsigned int stride, void* offset) {
        bind();
        buffer->bind();
        glVertexAttribPointer(index, count, type, GL_FALSE, stride, offset);
        glEnableVertexAttribArray(index);
        buffer->unbind();
        unbind();
    }

    void AEVertexArray::bind() {
        glBindVertexArray(id);
    }

    void AEVertexArray::unbind() {
        glBindVertexArray(0);
    }

    void AEVertexArray::destroy() {
        glDeleteVertexArrays(1, &id);
    }
}