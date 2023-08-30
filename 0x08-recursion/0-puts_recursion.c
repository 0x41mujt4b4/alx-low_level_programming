#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints string recusively
 *
 * @s: the string to be printed
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		putchar('\n');
		return;
	}

	printf("%c", *s);
	_puts_recursion(s + 1);
}
