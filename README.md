
# Libft

## Introduction

`libft` is a comprehensive library of C functions that replicate the behavior of various standard C library functions, along with additional utility functions that extend its functionality beyond the standard library. This project serves as a foundational C programming exercise, emphasizing understanding of basic data types, algorithms, and memory management in C.

## Project Description

The `libft` project is designed to re-implement several standard C functions as well as create new functions that are not available in the libc. This allows students and developers to deepen their understanding of function implementation, manual memory management, and the use of basic data structures. The library is intended to be used in future C projects where the use of standard library functions is restricted or additional utilities are needed.

### Features

- Memory manipulation functions (e.g., `ft_memset`, `ft_memcpy`, etc.)
- String manipulation functions (e.g., `ft_strcpy`, `ft_strdup`, etc.)
- Character and string examination functions (e.g., `ft_isalpha`, `ft_strchr`, etc.)
- List manipulation functions for basic linked list operations
- Additional utility functions to facilitate common tasks in C programming

## Getting Started

### Prerequisites

To compile and use `libft`, you need:

- A C compiler (GCC or Clang recommended)
- `make` (optional, for using the Makefile included in the project)

### Compilation

`libft` comes with a Makefile that compiles the library and creates a static library file (`libft.a`). To compile the library, run the following command in the root of the project directory:

```bash
make
```
This command will compile the source files and produce a `libft.a` file which you can link to your C projects.

### Usage

After compiling the library, you can include it in your C project by including the `libft.h` header file in your source files and linking against `libft.a` when compiling your project:

```c
#include "libft.h"
```

To compile your project with `libft`, you can use a command similar to the following:

``` bash
gcc your_source_files.c -L. -lft -o your_program_name
```

Ensure that the path to `libft.a` is correctly specified if your project directory structure is different.
