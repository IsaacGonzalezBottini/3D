#include <iostream>
#include <glew.h>
#include <glfw3.h>

int main() {

    if (!glfwInit()) {
        return -1;
    }   

    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL Window", nullptr, nullptr);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (glewInit() != GLEW_OK) {
        return -1;
    }

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        // Dessinez votre contenu OpenGL ici

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    

    return 0;
}