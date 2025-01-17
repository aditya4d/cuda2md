#include "file_utils.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void writeCommentsToFile(const std::vector<std::string>& comments, const std::string& outputFilePath) {
    std::ofstream outFile(outputFilePath);
    if (!outFile) {
        std::cerr << "Error opening file for writing: " << outputFilePath << std::endl;
        return;
    }

    for (const auto& comment : comments) {
        outFile << comment << std::endl;
    }

    outFile.close();
}