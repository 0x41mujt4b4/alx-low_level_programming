#include <stdio.h>
#include "main.h"

/**
 * puts_half - print half string
 * @str: pointer var of type str
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		i++;
	}
	if (i % 2)
		i = (i - 1) / 2;
	else
		i /= 2;
	while (*(str + i))
	{
		printf("%c", *(str + i));
		i++;
	}
	printf("\n");
}
