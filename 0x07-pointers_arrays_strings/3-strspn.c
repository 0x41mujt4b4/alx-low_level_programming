#include <stdio.h>
#include "main.h"

/**
 * _strspn - convert
 *
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: length of matching segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i])
	{
		if (!_strchr(accept, s[i]))
			break;
		i++;
	}
	return (i);
}
