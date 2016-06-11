#ifndef VERTEXBUFFER_H
#define VERTEXBUFFER_H

#define GLEW_STATIC
#include <GL/glew.h>

class VertexBuffer
{
    public:
        VertexBuffer();
        virtual ~VertexBuffer();
        void bufferData(float data[], int size);
    protected:

    private:
        GLuint vbo;
};

#endif // VERTEXBUFFER_H
