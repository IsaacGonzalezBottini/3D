#ifndef SULFUR_H_
    #define SULFUR_H_

#include <iostream>
#include <glfw3.h>
#include <glad/glad.h>
#include <fstream>
#include <string>
#include <vector>


#include "tools.h"
#include "shader.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


class slRenderer {

    private:
        unsigned int VBO;
        unsigned int VAO;

        slShader shader;

    public:
        void init() {
            glGenBuffers(1, &this->VBO);
            glGenVertexArrays(1, &this->VAO);
        }

};


typedef struct slTriangle_s{
    float x;
    float y;
    float z;
}slTriangle_t;

class slObject {

    private:
        std::vector<slTriangle_t> triangles;
        float *verticesArray;
        bool compiled = false;
        int nbTriangles = 0;

    public:

        void addTriangle(slTriangle_t triangle) {
            this->triangles.push_back(triangle);
            this->nbTriangles++;
        }

        void compileVertices() {
            int i = 0;
        }

        void printDebug(int f) {

        }

};


#endif