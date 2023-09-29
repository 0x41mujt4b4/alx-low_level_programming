#include <stdio.h>
#include "main.h"

/**
 * print_binary - print the binary represntation of a number
 * @n: the number to be converted to binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int bit;

	if (n == 0)
	{
		printf("0");
		return;
	}

	bit = sizeof(n) * 8 - 1; /* Find the highest bit */
	while ((n & (1 << bit)) == 0) /* Shift until we find the first '1' */
	{
		bit--;
	}

	/* Print the bits from most significant to least significant */
	for (; bit >= 0; bit--)
	{
		printf("%d", (n & (1 << bit)) ? 1 : 0);
	}
}
