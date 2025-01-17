#include <iostream>
#include <string>
#include <clang/Tooling/Tooling.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include "parser.h"

using namespace clang::tooling;

int main(int argc, const char **argv) {
    // Initialize Clang tooling infrastructure
    CommonOptionsParser OptionsParser(argc, argv, "CUDA Comment Extractor");
    ClangTool Tool(OptionsParser.getCompilations(), OptionsParser.getSourcePathList());

    // Create an instance of CommentParser
    CommentParser parser;

    // Process each file and extract comments
    for (const auto &file : OptionsParser.getSourcePathList()) {
        parser.parseFile(file);
    }

    return 0;
}