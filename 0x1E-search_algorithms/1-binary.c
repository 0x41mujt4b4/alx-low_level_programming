#include "search_algos.h"
#include <math.h>

/**
 * binary_search - serach for value in an array
 *
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 * @value: the value to search for
 *
 * Return: the index of the value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *a = array;

	while (size)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
		{
			printf("%d%s", a[i], i + 1 == size ? "\n" : ", ");
		}
		i = (size - 1) / 2;

		if (a[i] == value)
			return (a - array + i);
		else if (a[i] > value)
			size = i;
		else
		{
			a += (i + 1);
			size -= (i + 1);
		}
	}
	return (-1);
}
