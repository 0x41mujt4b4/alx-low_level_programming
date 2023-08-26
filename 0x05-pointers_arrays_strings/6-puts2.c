#include <stdio.h>
#include "main.h"

/**
 * puts2 - print every other character started from 1th
 * @str: pointer var of type str
 *
 * Return: length of string
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (i % 2 == 0)
		printf("%c", *(str + i));
		i++;
	}
	printf("\n");
}
