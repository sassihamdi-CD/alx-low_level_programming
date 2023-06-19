# 0x18. C - Dynamic libraries

## Description
This project focuses on dynamic libraries in C. It involves creating and using dynamic libraries to understand their purpose and functionality.

## Learning Objectives
By the end of this project, you should be able to explain the following concepts without relying on external resources:
- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable `$LD_LIBRARY_PATH` and how to use it
- The differences between static and shared libraries
- Basic usage of `nm`, `ldd`, `ldconfig`

## Requirements
### C
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- You must have a `README.md` file at the root of the project folder
- Your code should follow the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`
- Usage of global variables is not allowed
- Each file should contain no more than 5 functions
- Standard library functions like `printf`, `puts`, etc. are forbidden
- You are allowed to use `_putchar`, which should be included in your `main.h` header file
- Do not push the `_putchar.c` file; the checker will use its own

### Bash
- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your files should end with a new line
- The first line of all your files should be `#!/bin/bash`
- You must have a `README.md` file at the root of the project folder, describing each script's functionality
- All your files must be executable

## Tasks
### 0. A library is not a luxury but one of the necessities of life
Create the dynamic library `libdynamic.so` containing the provided functions.

### 1. Without libraries, what have we? We have no past and no future
Create a script `1-create_dynamic_lib.sh` that creates a dynamic library `liball.so` from all the `.c` files in the current directory.

