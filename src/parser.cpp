#include "parser.h"
#include "clang/AST/AST.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Tooling/Tooling.h"
#include "clang/Frontend/FrontendAction.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
#include "clang/Tooling/CompilationDatabase.h"
#include "clang/Tooling/Tooling.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace clang;
using namespace clang::tooling;

class CommentVisitor : public RecursiveASTVisitor<CommentVisitor> {
public:
    explicit CommentVisitor(std::vector<std::string> &comments) : comments(comments) {}

    bool VisitComment(const FullComment *Comment) {
        comments.push_back(Comment->getText());
        return true;
    }

private:
    std::vector<std::string> &comments;
};

class CommentParser {
public:
    void parseFile(const std::string &filePath) {
        std::vector<std::string> comments;
        auto ASTConsumer = clang::tooling::newFrontendActionFactory<CommentVisitor>(&comments);
        clang::tooling::runToolOnCode(ASTConsumer->create(), filePath);
        
        for (const auto &comment : comments) {
            std::cout << comment << std::endl; // Output comments to console
        }
    }
};