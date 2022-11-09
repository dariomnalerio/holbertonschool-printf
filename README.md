![banner printf](https://user-images.githubusercontent.com/113644952/200710905-dde5393e-6a50-47da-b475-e5b874924598.png)


* Write a function that produces output according to a format.
*  Prototype: int _printf(const char *format, ...);
 


# Introduction :fax: 
* _printf   is a custom implementation of the C programming function printf. This project is an application of the C 
programming language learnt by Mauricio Correa and Dario Nalerio.

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

<p align="center">
  <img src="https://user-images.githubusercontent.com/113644952/200672396-90eeffd7-7cdc-48bb-8d78-e5b0d856b8d3.gif" alt="printed"/>
</p>

__________________________________________
Compilation   :hammer:
The code must be compiled this way:

*$ gcc -Wall -Werror -Wextra -pedantic .c

As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main function
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

