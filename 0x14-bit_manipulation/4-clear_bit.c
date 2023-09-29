#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set bit to 0 at given index
 *
 * @n: the number to change bit at index
 * @index: the index of the bit
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
