#include "ElementBuffer.h"

ElementBuffer::ElementBuffer()
{
    glGenBuffers(1, &ebo);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
}

ElementBuffer::~ElementBuffer()
{
    //dtor
}

void ElementBuffer::bufferData(GLuint data[], int size)
{
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, data, GL_DYNAMIC_DRAW);
}
