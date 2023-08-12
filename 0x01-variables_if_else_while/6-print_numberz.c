#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for(int x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}
