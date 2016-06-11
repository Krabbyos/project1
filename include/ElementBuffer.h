#ifndef ELEMENTBUFFER_H
#define ELEMENTBUFFER_H

#define GLEW_STATIC
#include <GL/glew.h>

class ElementBuffer
{
    public:
        ElementBuffer();
        virtual ~ElementBuffer();
        void bufferData(GLuint data[], int size);
    protected:

    private:
        GLuint ebo;
};

#endif // ELEMENTBUFFER_H
