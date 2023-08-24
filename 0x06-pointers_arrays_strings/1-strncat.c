#include <stdio.h>
/**
 * _strncat - concat two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to the concated string
 */
char *_strncat(char *dest, char *src, int n)
{
		int length, i;

		length = 0;
		while (dest[length] != '\0')
		{
		++length;
		}

		for (i = 0; (src[i] != '\0') && i < n; ++i, ++length)
		{
		dest[length] = src[i];
		}
		return (dest);
}
