#include <stdio.h>
#include "main.h"

/**
 * get_endianness - get endianness
 * Return: Nothing
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *)&x;

	return (*c);
}
