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
## Bonus Features

The bonus section of the project allows you to implement additional functionality for manipulating linked lists. This section is optional but adds valuable skills and functionality to your library.

### Linked List Functions
You will need to create and manipulate linked lists using the following functions:

- **`ft_lstnew`**:
  - Prototype: `t_list *ft_lstnew(void *content);`
  - Description: Creates a new node with the provided `content`.

- **`ft_lstadd_front`**:
  - Prototype: `void ft_lstadd_front(t_list **lst, t_list *new);`
  - Description: Adds a new node at the beginning of the list.

- **`ft_lstsize`**:
  - Prototype: `int ft_lstsize(t_list *lst);`
  - Description: Counts and returns the number of nodes in a list.

- **`ft_lstlast`**:
  - Prototype: `t_list *ft_lstlast(t_list *lst);`
  - Description: Returns the last node in a list.

- **`ft_lstadd_back`**:
  - Prototype: `void ft_lstadd_back(t_list **lst, t_list *new);`
  - Description: Adds a new node at the end of the list.

- **`ft_lstdelone`**:
  - Prototype: `void ft_lstdelone(t_list *lst, void (*del)(void *));`
  - Description: Frees a node's content and deletes the node.

- **`ft_lstclear`**:
  - Prototype: `void ft_lstclear(t_list **lst, void (*del)(void *));`
  - Description: Deletes and frees all nodes in the list.

- **`ft_lstiter`**:
  - Prototype: `void ft_lstiter(t_list *lst, void (*f)(void *));`
  - Description: Iterates over the list and applies a function to each node.

- **`ft_lstmap`**:
  - Prototype: `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
  - Description: Creates a new list by applying a function to each node of the input list.

### Bonus Evaluation
- The bonus section will only be evaluated if the mandatory section is completed perfectly.
- Ensure that all mandatory features work flawlessly before implementing the bonus features.

## Submission Guidelines
1. Push all your project files, including `Makefile`, `libft.h`, and source files, to the designated Git repository.
2. Ensure that your repository is clean and free of unused files.
3. Double-check your filenames and repository structure to avoid any evaluation errors.
4. Test thoroughly to ensure compliance with the project requirements.

---

You can append this to the existing README content to have a complete, well-organized file. Let me know if further refinements are needed!

