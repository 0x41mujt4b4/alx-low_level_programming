#include <stdio.h>
#include "main.h"

/**
 * is_prime - check if x throw y divide y
 *
 * @x: starting point to check
 * @y: number to check
 *
 * Return: 1 if found else 0
 */
int is_prime(int x, int y)
{
	if (x * x > y)
		return (1);
	if (y % x == 0)
		return (0);
	return (is_prime(x + 1, y));
}

/**
 * is_prime_number - calculate if n is prime
 *
 * @n: number to be calculated
 *
 * Return: 1 if n is prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(2, n));
}
