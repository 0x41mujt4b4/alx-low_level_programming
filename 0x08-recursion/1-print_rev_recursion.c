#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints reverse string recusively
 *
 * @s: the string to be printed
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		putchar('\n');
		return;
	}

	_print_rev_recursion(s + 1);
	putchar(*s);
}
