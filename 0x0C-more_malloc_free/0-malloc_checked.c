#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 *
 * @b: size of memory in bytes
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
