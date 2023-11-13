#include <stdio.h>
#include "main.h"

/**
 * _puts - print given string
 * @str: pointer var of type str
 *
 * Return: length of string
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		printf("%c", *(str + i));
		i++;
	}
	printf("\n");
}
