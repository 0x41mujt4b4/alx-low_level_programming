#include "main.h"

/* betty style doc for function main goes there */
/**
 * _abs - get abslute value
 * @n: integer
 ** Return: integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
