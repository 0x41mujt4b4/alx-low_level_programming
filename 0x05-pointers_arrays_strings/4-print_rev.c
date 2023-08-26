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
	while (i + 1)
	{
		printf("%c", *(s + i));
		i--;
	}
	printf('\n');
}
