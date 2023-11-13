#include <stdio.h>
/**
 * _strcat - concat two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to the concated string
 */
char *_strcat(char *dest, char *src)
{
		int length, i;

		length = 0;
		while (dest[length] != '\0')
		{
		++length;
		}

		for (i = 0; src[i] != '\0'; ++i, ++length)
		{
		dest[length] = src[i];
		}

		dest[length] = '\0';
		return (dest);
}
