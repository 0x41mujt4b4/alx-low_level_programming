#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - prints string recursively
 *
 * @s: the string to calculated it's length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
