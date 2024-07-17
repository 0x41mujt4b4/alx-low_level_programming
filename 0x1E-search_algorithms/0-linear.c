#include "search_algos.h"

/**
 * linear_search - serach for value in an array
 *
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 * @value: the value to search for
 *
 * Return: the index of the value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
