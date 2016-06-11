#include "VertexArray.h"

VertexArray::VertexArray()
{
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);
}

VertexArray::~VertexArray()
{
    //dtor
}
