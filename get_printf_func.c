#include "main.h"

/**
 * get_printf_func - Selects correct function
 * @args: Arguments
 * @spec: Character corresponding to printf specifier
 *
 * Return: Pointer to selected function or string printed
*/

int get_printf_func(va_list args, char spec)
{
	strprt_t letter[] = {
		{"c", print_c},
		{"%", print_p},
		{"s", print_s},
		{NULL, NULL}
	};

	int i = 0;

	while (letter[i].specifier && spec)
	{
		if (letter[i].specifier[0] == spec)
		{
			return ((letter[i].f)(args));
		}
		i++;
	}

	_putchar('%');
	_putchar(spec);
	return (2);
}
