# 0x1A. C - Hash tables

## Description
This repository contains C programs that demonstrate the implementation and usage of hash tables.

## Table of Contents
* [Resources](#resources)
* [Requirements](#requirements)
* [Files](#files)
* [Tests](#tests)
* [Usage](#usage)
* [Author](#author)

## Resources
Read or watch:
* [What is a HashTable Data Structure - Introduction to Hash Tables, Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
* [Hash function](https://en.wikipedia.org/wiki/Hash_function)
* [Hash table](https://en.wikipedia.org/wiki/Hash_table)
* [All about hash tables](https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/tutorial/)
* [Why hash tables and not arrays](https://stackoverflow.com/questions/730620/how-does-a-hash-table-work)

## Requirements
* Allowed editors: vi, vim, emacs
* All files will be compiled on Ubuntu 20.04 LTS using gcc with the following flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All files should end with a new line
* A `README.md` file, at the root of the project folder, is mandatory
* Code should use the Betty style and should pass the checks using `betty-style.pl` and `betty-doc.pl`
* No more than 5 functions per file
* Code should not use global variables
* Code should use the C standard library
* The prototypes of all functions should be included in the header file `hash_tables.h`
* Header files should be include guarded

## Files
The repository contains the following files:
* `hash_tables.h`: Header file that contains the function prototypes and necessary data structures.
* `0-hash_table_create.c`: Implementation of a function that creates a hash table.
* `1-djb2.c`: Implementation of a hash function using the djb2 algorithm.
* `2-key_index.c`: Implementation of a function that gives the index of a key in a hash table.
* `3-hash_table_set.c`: Implementation of a function that adds an element to a hash table.
* `4-hash_table_get.c`: Implementation of a function that retrieves a value associated with a key from a hash table.
* `5-hash_table_print.c`: Implementation of a function that prints the contents of a hash table.
* `6-hash_table_delete.c`: Implementation of a function that deletes a hash table.
* `main.c`: Main function to test the functionalities of the implemented hash table.

## Tests
To test the functions, run the compiled executable `main`. Example:


## Usage
1. Clone the repository:

$ git clone https://github.com/username/0x1A-hash_tables.git

2. Change directory to the cloned repository:

$ cd 0x1A-hash_tables

3. Compile the C files:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o main

4. Run the compiled program:

$ ./main


## Author
* Sassi hamdi
* Contact: Hamdysassy7@gmail.com
* LinkedIn: [Sassi Hamdi](https://www.linkedin.com/in/sassi-hamdi/)

