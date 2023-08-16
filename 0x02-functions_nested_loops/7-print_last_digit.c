#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_last_digit - get lasr digit
 * @n: integer
 ** Return: integer
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	_putchar(ld + '0');
	return (ld);
}
