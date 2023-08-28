#include <stdio.h>
#include "main.h"

/**
 * _memcpy - convert
 *
 * @dest: string to be filled
 * @src: byte to fill
 * @n: number of bytes to fill
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
