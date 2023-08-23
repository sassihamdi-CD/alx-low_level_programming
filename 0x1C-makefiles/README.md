# 0x1C. C - Makefiles

In this project, you will learn about Makefiles and how they are used to automate the compilation and build process of C programs. The project is divided into multiple tasks, each introducing different concepts related to Makefiles.

## Task 0: Create your first Makefile

- Create a Makefile that compiles a C program named `school`.
- The Makefile should have a rule named `all` that builds the executable.
- Use the command `make -f 0-Makefile` to compile the program.
- Example output:


## Task 1: Makefile with variables

- Create a Makefile that uses variables to compile the `school` program.
- Define variables `CC` (compiler) and `SRC` (source files).
- The Makefile should have a rule named `all` that builds the executable using the variables.
- Use the command `make -f 1-Makefile` to compile the program.

## Task 2: A complete Makefile

- Create a complete Makefile that compiles the `school` program.
- Define variables `CC`, `SRC`, `OBJ`, `NAME`, `RM`, and `CFLAGS`.
- The Makefile should have rules `all`, `clean`, `oclean`, `fclean`, and `re`.
- Use the command `make -f 2-Makefile` to compile, clean, and recompile the program.

## Task 3: Makefile with macros

- Create a Makefile that uses macros for rules and variables.
- The Makefile should have rules `all`, `clean`, `oclean`, `fclean`, and `re`.
- Use the command `make -f 3-Makefile` for compiling and managing the project.

## Task 4: Island Perimeter

- Create a Python function `island_perimeter(grid)` that calculates the perimeter of an island described in a grid.
- The grid consists of 0 (water zone) and 1 (land zone).
- The island cells are connected horizontally/vertically (not diagonally).
- The grid is rectangular and is surrounded by water.
- The function's implementation should be in the file `5-island_perimeter.py`.
- Use the command `./5-main.py` to test the function.
