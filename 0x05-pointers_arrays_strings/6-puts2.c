#include <stdio.h>
#include "main.h"

/**
 * puts_half - print every other character started from 1th
 * @str: pointer var of type str
 *
 * Return: length of string
 */
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (i%2 == 0)
		printf("%c", *(str + i));
		i++;
	}
	printf("\n");
}
