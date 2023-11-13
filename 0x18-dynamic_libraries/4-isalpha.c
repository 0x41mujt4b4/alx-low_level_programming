#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isalpha - check if letter is small letter
 * @c: character
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if  ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
