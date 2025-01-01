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
```
### Cleaning Up
To clean object files:
```bash
make clean
```
To remove all compiled files and the library:
```bash
make fclean
```
To recompile everything:
```bash
make re
```
## Evaluation and Testing
- **Compliance with Norm**: Ensure that your code follows the Norm coding standards.
- **Error Handling**: Avoid segmentation faults, memory leaks, and other undefined behaviors.
- **Bonus Functionality**: Include linked list manipulations to earn extra points.

## Repository Structure
project-root/
-├── Makefile
-├── libft.h
-├── ft_*.c
-├── bonus/
-└── test/


## Notes
- Testing your functions is strongly encouraged. Use test cases to validate the correctness of your implementations.
- Make sure to commit all necessary files to your Git repository. Only repository content will be evaluated.


## Submission Guidelines
1. Push all your project files, including `Makefile`, `libft.h`, and source files, to the designated Git repository.
2. Ensure that your repository is clean and free of unused files.
3. Double-check your filenames and repository structure to avoid any evaluation errors.
4. Test thoroughly to ensure compliance with the project requirements.

---

You can append this to the existing README content to have a complete, well-organized file. Let me know if further refinements are needed!

