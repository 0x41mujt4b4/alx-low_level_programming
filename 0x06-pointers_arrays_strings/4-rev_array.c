#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse a given array
 * @a: an array of integers
 * @n: the number of elements
 *
 * Return: array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
}
