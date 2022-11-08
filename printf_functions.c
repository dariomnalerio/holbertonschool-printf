#include "main.h"

/**
 * print_c - Prints a character
 * @args: Arguments
 *
 * Return: String length
*/

int print_c(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_p - Prints a percentage sign
 * @args: Arguments
 *
 * Return: String length
*/

int print_p(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}

/**
 * print_s - Prints a string
 * @args: Arguments
 *
 * Return: String length
*/

int print_s(va_list args)
{
	int i;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);

}
