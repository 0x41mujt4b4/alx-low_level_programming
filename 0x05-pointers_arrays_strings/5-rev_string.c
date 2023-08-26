#include <stdio.h>
#include "main.h"

/**
 * rev_string - print string reversed
 * @s: string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(s + i))
		i++;
	i--;
	while (i > j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}
