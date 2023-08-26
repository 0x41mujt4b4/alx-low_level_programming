#include <stdio.h>
#include "main.h"

/**
 * _strlen - calculate length of stringd
 * @s: string
 *
 * Return: return length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
