#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatinate two string
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number of chars to concat form s2
 *
 * Return: a pointer to concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, length;
	char *s = malloc(sizeof(s1) + n);

	for (length = 0; s1[length] != '\0'; length++)
		s[length] = s1[length];
	for (i = 0; i < n || s2[i] == '\0'; i++, length++)
		s[length] = s2[i];
	return (s);
}
