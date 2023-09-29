#include <stdio.h>
#include "main.h"

/**
 * get_bit - get bit at given index
 *
 * @n: the number to get the bit from
 * @index: the index of the bit
 *
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 0 && index < 64)
		return ((n >> index) & 1);
	return (-1);
}
