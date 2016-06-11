#ifndef VERTEXARRAY_H
#define VERTEXARRAY_H
#define GLEW_STATIC
#include <GL/glew.h>

class VertexArray
{
public:
    VertexArray();
    virtual ~VertexArray();

protected:

private:
    GLuint vao;
};

#endif // VERTEXARRAY_H
