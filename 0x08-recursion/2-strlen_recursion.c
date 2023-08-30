#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints string recusively
 *
 * @s: the string to be printed
 *
 * Return: Nothing
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
