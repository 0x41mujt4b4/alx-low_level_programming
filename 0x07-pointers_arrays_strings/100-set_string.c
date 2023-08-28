#include <stdio.h>
#include "main.h"

/**
 * set_string - set string to another one
 * @s: string to change pointer
 * @to: string to point to
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
