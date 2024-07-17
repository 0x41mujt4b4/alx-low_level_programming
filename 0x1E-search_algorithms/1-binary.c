#include "search_algos.h"

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
	size_t j = size;
	size_t middle;
	size_t start;

	while (i < j)
	{
		middle = i + (j - i) / 2;
		printf("Searching in array: ");
		for (start = i; start < j; start++)
		{
			printf("%d", array[start]);
			if (start < j - 1)
				printf(", ");
		}
		printf("\n");

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			i = middle + 1;
		else
			j = middle;
	}
	return (-1);
}
