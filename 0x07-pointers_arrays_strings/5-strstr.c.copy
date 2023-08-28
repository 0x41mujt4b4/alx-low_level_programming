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
	char *p = haystack;
	int len = 0;

	while (needle[len])
		len++;
	while ((p = _strchr(p, *needle)) != NULL)
	{
		if (_strncmp(p, needle, len) == 0)
		{
			return (p);
		}
		p++;
	}

	return (NULL);
}
