# CUDA Comment Extractor. NOT WORKING!


## Overview
The CUDA Comment Extractor is a tool designed to parse CUDA files and extract comments using Clang tooling. This project leverages the capabilities of Clang's Abstract Syntax Tree (AST) to traverse the code and collect comments efficiently.

## Project Structure
```
cuda-comment-extractor
├── src
│   ├── main.cpp          # Entry point of the application
│   ├── parser.cpp        # Implementation of the comment parser
│   ├── parser.h          # Header file for the comment parser
│   └── utils
│       ├── file_utils.cpp # Utility functions for file handling
│       └── file_utils.h   # Header file for utility functions
├── include
│   └── clang
│       └── clang_tooling.h # Clang tooling headers and definitions
├── CMakeLists.txt        # Build configuration file
└── README.md             # Project documentation
```

## Building the Project
To build the CUDA Comment Extractor, follow these steps:

1. Ensure you have CMake and Clang installed on your system.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Compile the project:
   ```
   make
   ```

## Running the Application
After building the project, you can run the application with the following command:

```
./cuda-comment-extractor <path_to_cuda_file>
```

Replace `<path_to_cuda_file>` with the path to the CUDA file you want to parse. The extracted comments will be saved to a text file in the same directory.

## Usage Example
To extract comments from a CUDA file named `example.cu`, use the command:

```
./cuda-comment-extractor example.cu
```

This will create a file named `comments.txt` containing all the comments found in `example.cu`.

## Contributing
Contributions to the CUDA Comment Extractor are welcome! Please feel free to submit a pull request or open an issue for any enhancements or bug fixes.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.
