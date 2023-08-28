#include <stdio.h>
#include "main.h"

/**
 * _memset - convert
 *
 * @s: string to be filled
 * @b: byte to fill
 * @n: number of bytes to fill
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}
