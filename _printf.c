#include "main.h"

/**
 * _printf - Writes output to stdout
 * @format: String to be printed
 *
 * Return: Number of characters printed, minus the null byte
*/

int _printf(const char *format, ...)
{
	int i, strlen = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			{
				strlen += get_printf_func(args, format[i + 1]);
				i++;
			}
		}

		else
		{
			_putchar(format[i]);
			strlen++;
		}
	}

	va_end(args);
	return (strlen);
}
