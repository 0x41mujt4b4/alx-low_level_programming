#include <stdio.h>
#include "main.h"

/**
 * string_toupper - convert lower to upper
 * @s: the string to be converted
 *
 * Return: string
 */
char *string_toupper(char *s)
{
		int i = 0;

		while (s[i] != '\0')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 'a' + 'A';
			}
			i++;
		}
		return (s);
}
