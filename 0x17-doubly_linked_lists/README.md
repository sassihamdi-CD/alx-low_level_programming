# 0x17. C - Doubly linked lists

## Description
This repository contains C programs that demonstrate the implementation and usage of doubly linked lists. The programs perform various operations on doubly linked lists, such as printing the list, calculating the length, adding nodes at the beginning or end, and freeing the list.

## Learning Objectives
By completing the project tasks, you will gain a deeper understanding of the following concepts:
- Doubly linked lists and their structure
- How to use doubly linked lists in C
- Finding the right sources of information without excessive help

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be interpreted/compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall`, `-Werror`, `-Wextra`, and `-pedantic`
- All files should end with a new line
- A `README.md` file, at the root of the folder, is mandatory
- Code should use the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- No more than 5 functions per file
- Only the following C standard library functions are allowed: `malloc`, `free`, `printf`, and `exit`
- The prototypes of all functions should be included in a header file called `lists.h`
- All header files should be include guarded

## Files and Functions
- `0-print_dlistint.c`: A function that prints all the elements of a `dlistint_t` doubly linked list.
  - Prototype: `size_t print_dlistint(const dlistint_t *h);`
- `1-dlistint_len.c`: A function that returns the number of elements in a `dlistint_t` doubly linked list.
  - Prototype: `size_t dlistint_len(const dlistint_t *h);`
- `2-add_dnodeint.c`: A function that adds a new node at the beginning of a `dlistint_t` doubly linked list.
  - Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- `3-add_dnodeint_end.c`: A function that adds a new node at the end of a `dlistint_t` doubly linked list.
  - Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- `4-free_dlistint.c`: A function that frees a `dlistint_t` doubly linked list.
  - Prototype: `void free_dlistint(dlistint_t *head);`
- `5-get_dnodeint.c`: A function that returns the nth node of a `dlistint_t` doubly linked list.
  - Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`

## Compilation
These programs can be compiled using the following command:
Replace `executable_name` with the desired name of the executable file.

## Usage
To run the compiled program, use the following command:

## Example Usage
Here is an example of how to use the `print_dlistint` function:
```c
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;

    node = add_dnodeint_end(&head, 1);
    if (!node)
    {
        fprintf(stderr, "Failed to add node\n");
        return (EXIT_FAILURE);
    }

    node = add_dnodeint_end(&head, 2);
    if (!node)
    {
        fprintf(stderr, "Failed to add node\n");
        return (EXIT_FAILURE);
    }

    node = add_dnodeint_end(&head, 3);
    if (!node)
    {
        fprintf(stderr, "Failed to add node\n");
        return (EXIT_FAILURE);
    }

    print_dlistint(head);

    free_dlistint(head);

    return (EXIT_SUCCESS);
}

## Author
[Sassi Hamdi](www.twitter.com/sassi_hamdi_)
