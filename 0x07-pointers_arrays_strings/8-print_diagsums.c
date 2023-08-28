#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the chess board
 * @a: pionter to two dimensional array
 * @size: size of the array
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
