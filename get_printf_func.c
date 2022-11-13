#include "main.h"

/**
 * get_printf_func - Selects correct function
 * @args: Arguments
 * @spec: Character corresponding to printf specifier (format[i + 1])
 *
 * Return: Pointer to selected function or length of string printed
*/

int get_printf_func(va_list args, char spec)
{
	strprt_t letter[] = {
		{"c", print_c},
		{"%", print_p},
		{"s", print_s},
		{"d", print_num},
		{"i", print_num},
		{NULL, NULL}
	}; /* See main.h */

	int i = 0;

	while (letter[i].specifier && spec)
	{	/* Checks if spec matches with any function */
		if (letter[i].specifier[0] == spec)
		{	/* If there is a match, it returns the correct function */
			return ((letter[i].f)(args));
		}
		i++;
	}
	/* If no match is found, prints '%' and spec */
	_putchar('%');
	_putchar(spec);
	return (2); /* Returns length (2 chars printed) */
}
