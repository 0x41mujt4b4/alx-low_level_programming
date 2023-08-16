#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 15; x++)
	{
		if (x > 9)
		putchar(87 + x);
		else
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}
