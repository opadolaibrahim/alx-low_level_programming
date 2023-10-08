# ALX Low-Level Programming - C: More `malloc` and `free` Tasks

![ALX School Logo](https://www.alxafrica.com/static/images/logo.png)

This repository contains C programming tasks from ALX's Low-Level Programming curriculum. The tasks in this repository focus on memory allocation using `malloc`, `free`, `realloc`, and related functions. Each task is located in its respective file with the corresponding task name.

## Task List

### Task 0: `0-malloc_checked.c`

In this task, you are required to create a function that allocates memory using `malloc`. The function should exit with a status of `98` if `malloc` fails to allocate the required memory.

### Task 1: `1-string_nconcat.c`

The goal of this task is to create a function that concatenates two strings, but limits the result to a specified number of characters. The function should allocate memory as needed using `malloc`.

### Task 2: `2-calloc.c`

For this task, you need to create a function that allocates memory for an array using `calloc`. The allocated memory should be initialized to zero.

### Task 3: `3-array_range.c`

In this task, you are required to create a function that creates an array of integers, starting from a minimum value to a maximum value (inclusive). The function should allocate memory as needed using `malloc`.

### Task 100: `100-realloc.c`

The goal of this task is to create a function that reallocates a memory block using `realloc`. This function should update the memory allocation to a new size and preserve the data from the original block.

### Task 101: `101-mul.c`

For the final task, you need to create a program that multiplies two positive numbers represented as strings. The program should take two arguments and print the result.

## Compilation and Usage

To compile the C programs, you can use a C compiler such as `gcc`. For example, to compile `0-malloc_checked.c`, you can run the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic 0-malloc_checked.c -o malloc_checked
```

Replace the task file and executable name accordingly for other tasks.

To run the compiled programs, simply execute the resulting binary:

```bash
./malloc_checked
```



