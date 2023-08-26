#include <stdio.h>
#include "main.h"

/**
 * print_rev - print string reversed
 * @s: string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	while (i)
	{
		printf("%c", *(s + i));
		i--;
	}
	printf("%c\n", *(s + i));
}
