#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include <string>
#include <vector>

// Function to write extracted comments to a specified text file
void writeCommentsToFile(const std::string &filename, const std::vector<std::string> &comments);

#endif // FILE_UTILS_H