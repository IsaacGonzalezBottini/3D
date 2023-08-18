#ifndef SHADER_H_
    #define SHADER_H_

#include "sulfur.h"

class slShader {
    
    private:
        unsigned int id;

    public:
        slShader(const char* vertexPath, const char* fragmentPath);

        unsigned int GetId() const;
        void Use() const;

        void SetVar(const std::string &name, bool value) const;
        void SetVar(const std::string &name, int value) const;
        void SetVar(const std::string &name, float value) const;
};




#endif