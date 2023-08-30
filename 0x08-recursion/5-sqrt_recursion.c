#include <stdio.h>
#include "main.h"

/**
 * isSqrt - check if x sqrt of y
 *
 * @x: int x
 * @y: int y
 *
 * Return: return x if x is squre root else -1
 */
int isSqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (isSqrt(x + 1, y));
}

/**
 * _sqrt_recursion - calculate natural square root of n
 *
 * @n: number to check for squre root
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (isSqrt(1, n));
}
