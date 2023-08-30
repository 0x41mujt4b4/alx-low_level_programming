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
	static int len;

	if (!*s)
	{
		return (0);
	}

	len++;
	_strlen_recursion(s + 1);
	return (len);
}
