cmake_minimum_required(VERSION 3.10)

project(cuda2md)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

file(GLOB SOURCES
    src/*.cpp
    src/utils/*.cpp
)

# Set the path to Clang
set(CMAKE_PREFIX_PATH "/path/to/clang")

find_package(Clang REQUIRED CONFIG)

add_executable(cuda2md ${SOURCES})

target_link_libraries(cuda2md PRIVATE clangTooling clangBasic clangAST)