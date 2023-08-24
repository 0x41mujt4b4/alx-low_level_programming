#include <stdio>

/**
 * _strncpy - copy string1 to string2
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: return the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
