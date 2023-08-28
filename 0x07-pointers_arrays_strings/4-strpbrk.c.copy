#include <stdio.h>
#include "main.h"
/**
 ** _strchr - convert
 **
 ** @s: string to search
 ** @c: character to locate
 **
 ** Return: pointer
 **/
char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr = NULL;

	while (s[i])
		if (s[i++] == c)
		{
			ptr = &s[i];
			break;
		}
	return (ptr);
}

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
