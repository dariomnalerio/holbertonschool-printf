![banner printf](https://user-images.githubusercontent.com/113644952/200680637-d7c00c44-c01a-4158-8854-29e2ef26088c.png)
 
 ## Create your own printf function
     
     
     * Write a function that produces output according to a format.
     *  Prototype: int _printf(const char *format, ...); 
 
                                                                         
<h4 align="center">
:construction: Proyecto en construcción :construction:
</h4> 



# introduction :fax: 
* The printf function sends formatted output to stdout.  _printf() function format string is a character string, beginning and ending in its initial shift state, if any.   These arguments are placed using the percentage '%' operator 


| Write function that produces output with conversion specifiers| c, s, and % |
| --- | --- |
|Handle conversion specifiers | d, i.|
| Create a man page for your function. | man |

<p align="center">
  <img src="https://user-images.githubusercontent.com/113644952/200672396-90eeffd7-7cdc-48bb-8d78-e5b0d856b8d3.gif"/>
</p>


## Requirements - General
*Allowed editors: vi, vim, emacs

*All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

*All your files should end with a new line

*A README.md file, at the root of the folder of the project is mandatory

*You are not allowed to use global variables

*The prototypes of all your functions should be included in your header file called main.h

*All your header files should be include guarded



## Authorized functions and macros    :customs:

write (man 2 write) malloc (man 3 malloc) free (man 3 free) va_start (man 3 va_start) va_end (man 3 va_end) va_copy (man 3 va_copy) va_arg (man 3 va_arg)
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














D.N M.C
