# Libft

> A custom implementation of standard C library functions, developed as part of the 42 School curriculum.

## 📚 About

**Libft** is the first project at 42 School. The goal is to reimplement several standard C library functions from scratch, without using any external libraries (except for `write`, `malloc`, and `free`). This project helps you build a strong foundation in C, memory management, and data structures like linked lists.

By the end of the project, you'll have your own reusable C library, ready to be included in future projects.

---

## 📁 Project Files

libft/
├── ft_*.c # Source files for all functions
├── libft.h # Header file with function prototypes and includes
├── Makefile # To compile the library into libft.a

---

## 🛠️ Functions

### Part 1 – Libc Functions

Reimplemented standard C functions for memory and string manipulation, character checks, etc.:

- `ft_isalpha`  
- `ft_isdigit`  
- `ft_isalnum`  
- `ft_isascii`  
- `ft_isprint`  
- `ft_strlen`  
- `ft_memset`  
- `ft_bzero`  
- `ft_memcpy`  
- `ft_memmove`  
- `ft_strlcpy`  
- `ft_strlcat`  
- `ft_toupper`  
- `ft_tolower`  
- `ft_strchr`  
- `ft_strrchr`  
- `ft_strncmp`  
- `ft_memchr`  
- `ft_memcmp`  
- `ft_strnstr`  
- `ft_atoi`  
- `ft_calloc`  
- `ft_strdup`  

### Part 2 – Additional Functions

Additional utility functions for strings and memory:

- `ft_substr`  
- `ft_strjoin`  
- `ft_strtrim`  
- `ft_split`  
- `ft_itoa`  
- `ft_strmapi`  
- `ft_striteri`  
- `ft_putchar_fd`  
- `ft_putstr_fd`  
- `ft_putendl_fd`  
- `ft_putnbr_fd`  

### Bonus – Linked List Functions (if completed)

Functions to manage singly linked lists:

- `ft_lstnew`  
- `ft_lstadd_front`  
- `ft_lstsize`  
- `ft_lstlast`  
- `ft_lstadd_back`  
- `ft_lstdelone`  
- `ft_lstclear`  
- `ft_lstiter`  
- `ft_lstmap`  

---
## ⚙️ Compilation

To compile the library:

```bash
make
This will compile all the .c files and create a static library called libft.a.

To clean up the object (.o) files after compilation:

bash
Copy code
make clean
To remove both object files and the compiled libft.a library:

bash
Copy code
make fclean
To force recompilation of everything from scratch:

bash
Copy code
make re
🧪 Usage Example
To use this library in your own project:

Include the header in your C file:

c
Copy code
#include "libft.h"
Compile your program with the library:

bash
Copy code
gcc -Wall -Wextra -Werror main.c -L. -lft
Make sure libft.a is in the same directory or specify the correct path.
👨‍💻 Author

[goramos-]
42 Student – [Madrid]
GitHub: https://github.com/gramosv2
