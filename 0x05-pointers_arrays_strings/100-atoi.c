#include <stdio.h>
#include "main.h"

/**
 * isInt - check whether char is int
 * @c: char
 *
 * Return: int
 */
int isInt(int c)
{
	return ((c - 48 >= 0 && c - 48 <= 9) ? 1 : 0);
}

/**
 * isSign - check whether given value is - or +
 * @c: char
 *
 * Return: int
 */
int isSign(int c)
{
	return (c == 45 ? -1 : c == 43 ? 1 : 0);
}

/**
 * _atoi - convert char to int
 * @s: string
 *
 * Return: int
 */
int _atoi(char *s)
{
		int i = 0;
		int sign = 1;
		int n = 0;

		while (!isInt(s[i]))
		{
			if (s[i] == '\0')
				return (0);
			i++;
		}

		if (isSign(s[i - 1]))
			sign = isSign(s[i - 1]);

		while (isInt(s[i]))
		{
			n = (10 * n) + (s[i] - 48);
			i++;
		}
		return (n * sign);
}
