#include <stdio.h>
#include "main.h"

/**
 * _strstr - ''
 *
 * @haystack: string to be scanned
 * @needle: string containing the characters to match
 *
 * Return: pointer to first matching
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, tmp = 0;
	char *ptr;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		tmp = j;
		while ((haystack[tmp++] == needle[i++]) && needle[i])
		;
		if (needle[i] == '\0')
		{
			ptr = &haystack[j];
			break;
		}
		i = 0;
	}
	return (ptr);
}
