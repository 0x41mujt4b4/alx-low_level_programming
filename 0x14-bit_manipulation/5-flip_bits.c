#include <stdio.h>
#include "main.h"

/**
 * flip_bits - count the number of bits to flip to cange n to m
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int diff = n ^ m;
	int count = 0;

	while (diff)
	{
		diff &= (diff - 1);
		count++;
	}
	return (count);
}
