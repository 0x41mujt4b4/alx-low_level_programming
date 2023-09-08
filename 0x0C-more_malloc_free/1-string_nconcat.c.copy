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
	unsigned int i = 0, length = 0;
	char *s = malloc(sizeof(s1) + n);

	if (s1)
	for (; s1[length] != '\0'; length++)
		s[length] = s1[length];
	if (s2)
	for (; i < n && s2[i] != '\0'; i++, length++)
		s[length] = s2[i];
	return (s);
}
