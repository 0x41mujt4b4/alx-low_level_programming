#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _islower - check if letter is small letter
 * @c: character
 * Return: 0 or 1
 */
int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
