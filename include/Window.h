#ifndef WINDOW_H
#define WINDOW_H
#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Window
{
public:
    Window();
    Window(int width, int height);
    virtual ~Window();
    bool shouldClose();
    GLFWwindow* getWindow();
protected:

private:
    GLFWwindow* window;
};

#endif // WINDOW_H
