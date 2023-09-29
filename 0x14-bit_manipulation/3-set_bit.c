#include <stdio.h>
#include "main.h"

/**
 * set_bit - set bit to 1 at given index
 *
 * @n: the number to change bit at index
 * @index: the index of the bit
 *
 * Return: number or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
