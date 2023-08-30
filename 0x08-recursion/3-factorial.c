#include <stdio.h>
#include "main.h"

/**
 * factorial - calculated factorial of integer
 *
 * @n: int to calculat factorial
 *
 * Return: calculated factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
