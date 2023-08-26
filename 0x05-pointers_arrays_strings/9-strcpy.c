#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy string
 * @dest: pointer string to copy to
 * @src: pointer string to copy from
 *
 * Return: copyied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
