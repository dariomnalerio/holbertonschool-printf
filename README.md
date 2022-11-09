![banner printf](https://user-images.githubusercontent.com/113644952/200710905-dde5393e-6a50-47da-b475-e5b874924598.png)


 


# Introduction :fax: 
* _printf   is a custom implementation of the C programming function printf. This project is an application of the C 
programming language learnt by Mauricio Correa and Dario Nalerio.

*  Prototype: int _printf(const char *format, ...);

# Project Requirements

* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

* Code must follow the Betty style.

* Global variables are not allowed.

* No more than 5 functions per file.

Authorized functions and macros:
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## Mandatory Tasks

- [x]  Write function that produces output with conversion specifiers c, s, and %.
- [x]  Handle conversion specifiers d, i.
- [x]  Create a man page for your function.

## File Descriptions
- ***_printf.c***: Contains the function _printf. _printf returns the number of characters printed, excluding the null byte at the end of the string, and will write output to stdout.

- ***_putchar.c***:  Contains the function _putchar, which writes a character to stdout.

- ***main.h***:  contains all function prototypes used in the program.

- ***printf_functions.c***:  contains the functions print_c, print_s, print_p and print_num, which deal with specifiers c, s, %, d, and i.

- ***get_printf_func.c***: selects the correct function to be carried out in printf_functions.c.

- ***3_printf.man***:  man page for our _printf function. It can be executed by typing "man ./3_printf.man"


__________________________________________
Compilation   :hammer:
The code must be compiled this way:

* gcc -Wall -Werror -Wextra -pedantic *.c

__________________________________________________

Use & Examples
Prototype: int _printf(const char *format, ...); Use - General: _printf("format string", var1, var2, ...);   

Examples:

Basic String: _printf("%s Holberton", "Hello");`   

Output: Hello Holberton   :page_facing_up:

____________________________________________________________________

you can see more information in the manual page, run like this;

![run manual _printf](https://user-images.githubusercontent.com/113644952/200889724-89736867-9ad8-4d87-b34d-7b95890bf711.PNG)





![manual printf](https://user-images.githubusercontent.com/113644952/200889456-fb529317-313b-4d4e-8241-e51db1f81336.PNG)

