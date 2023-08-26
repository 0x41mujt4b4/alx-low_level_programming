#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap two integers
 * @a: an integer
 * @b: an integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
