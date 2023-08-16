#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - print the alphabets lower case x10
 * Description: 'print the alphabet in lower case'
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char *c = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 10; i++)
	while (*c)
		_putchar(*c++);
}
