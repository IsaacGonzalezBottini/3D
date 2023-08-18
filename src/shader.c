#include "sulfur.h"
#include "shader.h"

slShader::slShader(const char* vertexPath, const char* fragmentPath)
{
    const char *vertexShaderSource = readFromFile("./shader/vertexShader.glsl").c_str();
    unsigned int vertexShader;
    vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
    glCompileShader(vertexShader);
    
    const char *fragmentShaderSource = readFromFile("./shader/fragmentShader.glsl").c_str();
    unsigned int fragmentShader;
    fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
    glCompileShader(fragmentShader);
    
    unsigned int shaderProgram;
    shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);

    this->id = shaderProgram;
}

unsigned int slShader::GetId() const
{
    return this->id;
}

void slShader::Use() const
{
    glUseProgram(this->GetId());
}

void slShader::SetVar(const std::string &name, bool value) const
{         
    glUniform1i(glGetUniformLocation(this->GetId(), name.c_str()), (int)value); 
}
void slShader::SetVar(const std::string &name, int value) const
{ 
    glUniform1i(glGetUniformLocation(this->GetId(), name.c_str()), value); 
}
void slShader::SetVar(const std::string &name, float value) const
{ 
    glUniform1f(glGetUniformLocation(this->GetId(), name.c_str()), value); 
}