# Libft

## Introduction
Libft is a foundational C library designed to provide commonly used utility functions for your programming projects. This project allows you to gain deeper insights into the functionality of standard C library functions by re-implementing them. As you progress, you'll expand and refine this library, making it a reliable toolkit for future development.

## Project Requirements

### Mandatory Files
- **`Makefile`**: Handles compilation and linking of the library.
- **`libft.h`**: Header file containing prototypes and necessary inclusions.
- **Source Files**: Implementations of required functions (e.g., `ft_*.c`).

### Compilation Flags
The project must be compiled with the following flags:
- `-Wall` (all warnings),
- `-Wextra` (additional warnings),
- `-Werror` (treat warnings as errors).

## Features

### Part 1: Standard C Library Functions
Reimplementation of several standard functions such as:
- `ft_strlen`, `ft_strncmp`, `ft_atoi`, etc.
- Functions requiring dynamic memory allocation (`malloc`): `ft_calloc`, `ft_strdup`.

### Part 2: Additional Utility Functions
Custom implementations to extend libc functionality:
- String manipulation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, etc.
- Memory handling: `ft_memset`, `ft_memmove`, etc.
- Integer and character conversions: `ft_itoa`, `ft_toupper`.

### Part 3: Bonus Features
Optional but encouraged functionality for linked list operations:
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstdelone`, and more.

## Usage

### Building the Library
Run the following command to compile the library:
```bash
make
