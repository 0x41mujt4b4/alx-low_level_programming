#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet - print the alphabets lower case
 * Description: 'print the alphabet in lower case'
 * Return: void
 */
void print_alphabet(void)
{
	char *c = "abcdefghijklmnopqrstuvwxyz\n";

	while (*c)
		_putchar(*c++);
}
