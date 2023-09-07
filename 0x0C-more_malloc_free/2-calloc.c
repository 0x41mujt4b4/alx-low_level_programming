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
	void *p;
	unsigned int bytes, i;

	if (!size || !nmemb)
		return (NULL);
	bytes = nmemb * size
	p = malloc(bytes);
	if (!p)
		return (NULL);
	for (i = 0; i < bytes; i++)
		p[i] = 0;
	return (p);
}
