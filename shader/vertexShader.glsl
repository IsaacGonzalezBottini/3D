#version 330 core
layout (location = 0) in vec3 aPos; // the position variable has attribute position 0
  
out vec4 vertexColor;

uniform float R = 0.0f;
uniform float G = 0.0f;
uniform float B = 0.0f;
uniform float A = 1.0f;

void main()
{
    gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0); // see how we directly give a vec3 to vec4's constructor
    vertexColor = vec4(R, G, B, A); // set the color to the output var
}