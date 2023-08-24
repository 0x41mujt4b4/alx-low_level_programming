#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compre two strings
 * @s1: destination string
 * @s2: source string
 * Return: 0, 1, or -1
 */
int _strcmp(char *s1, char *s2)
{
			int i = 0;

		while ((s1[i] == s2[i]) && (s1[i] != '\0'))
			i++;
		int c1 = s1[i];

		int c2 = s2[i];

		return (s1[i] == s2[i] ? 0 : c1 > c2 ? 1 : -1);
}
