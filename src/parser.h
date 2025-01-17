#pragma once

class CommentParser {
public:
    CommentParser();
    void parseFile(const std::string &filePath);
    
private:
    void collectComments(const clang::ASTContext &context);
};