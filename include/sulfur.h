#ifndef SULFUR_H_
    #define SULFUR_H_

#include <iostream>
#include <glfw3.h>
#include <glad/glad.h>
#include <fstream>
#include <string>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#include "tools.h"
#include "shader.h"


class slTriangle {

    private:
        GLfloat verticesArray[9] = {
            0.0f, 0.0f, 0.0f,
            0.0f, 0.0f, 0.0f,
            0.0f, 0.0f, 0.0f
        };
};



#endif