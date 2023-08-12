#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
		int lower_x = tolower(x);
		putchar(lower_x);
	}
	for(int x = 'A'; x <= 'Z'; x++)
        {
                putchar(x);
        }
	putchar('\n');
	return (0);
}
