#include <clang/Tooling/Tooling.h>
#include <clang/AST/AST.h>
#include <clang/Frontend/FrontendAction.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/Tooling.h>
#include <clang/Rewrite/Core/Rewriter.h>
#include <string>
#include <vector>

#ifndef CUDA_COMMENT_EXTRACTOR_CLANG_TOOLING_H
#define CUDA_COMMENT_EXTRACTOR_CLANG_TOOLING_H

namespace cuda_comment_extractor {

const std::string COMMENT_OUTPUT_FILE = "extracted_comments.txt";

struct CommentInfo {
    std::string comment;
    std::string filePath;
    unsigned lineNumber;
};

using CommentList = std::vector<CommentInfo>;

} // namespace cuda_comment_extractor

#endif // CUDA_COMMENT_EXTRACTOR_CLANG_TOOLING_H