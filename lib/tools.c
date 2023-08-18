#include "sulfur.h"
#include <ostream>

std::string readFromFile(const std::string& filePath) {
    std::ifstream file(filePath);
    std::string content;

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            content += line + "\n";
        }
        file.close();
    } else {
        std::cout << "Error: Unable to open file " << filePath << std::endl;
    }

    return content;
}