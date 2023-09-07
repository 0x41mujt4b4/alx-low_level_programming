#include <stdio.h>
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
	int f = 98;
	int *p = malloc(b), *fail = &f;

	return (p ? p : fail);
}
