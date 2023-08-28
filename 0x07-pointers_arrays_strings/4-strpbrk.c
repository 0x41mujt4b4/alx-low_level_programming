#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - ''
 *
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: pointer to first matching
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	char *ptr;

	while (s[i])
	{
		if (_strchr(accept, s[i]))
		{
			ptr = &s[i];
			break;
		}
		i++;
	}
	return (ptr);
}
