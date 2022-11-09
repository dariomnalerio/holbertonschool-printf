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

/**
 * print_num - Prints a number
 * @args: Arguments
 *
 * Return: string length
*/

int print_num(va_list args)
{
	long int n = va_arg(args, int);
	long int num = n;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	if (n == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}

	while (num != 0)
	{
		num = num / 10;
		count++;
	}

	_print(n);
	return (count);
}

/**
 * _print - Prints long int number
 * @n: Number to print
 *
*/
void _print(long int n)
{

	/* Remove last digit and recur */
	if (n / 10)
		_print(n / 10);

	_putchar(n % 10 + '0');
}
