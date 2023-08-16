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

	ld = ld >= 0 ? ld : ld * -1;
	_putchar('0' + ld);
	return (ld);
}
