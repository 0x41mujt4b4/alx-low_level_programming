#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_sign - check number sign
 * @n: integer
 * Return: 0 or 1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
