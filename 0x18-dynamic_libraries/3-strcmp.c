#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compre two strings
 * @s1: destination string
 * @s2: source string
 * Return: positive negative or zero
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return ((int)*s1 - (int)*s2);
}
