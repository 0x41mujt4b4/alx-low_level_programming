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
	int i = 0;
	long sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += *((a + i * size) + i);
	}
	printf("%ld\n", sum);
}
