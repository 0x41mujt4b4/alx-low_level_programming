#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory for array
 *
 * @nmemb: number of elements
 * @size: the size of each element
 *
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (!size || !nmemb)
		return (NULL);
	void *p = malloc(nmemb * size);

	return (p);
}
