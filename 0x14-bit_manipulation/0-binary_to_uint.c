#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: the binary to convert
 *
 * Return: converted binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0;
	int counter = 0, mult = 1;

	if (b == NULL)
		return (0);
	while (b[counter])
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
		counter++;
	}
	counter--;
	while (b[counter])
	{
		if (b[counter] == '1')
			deci += mult;
		mult *= 2;
		counter--;
	}
	return (deci);

}
