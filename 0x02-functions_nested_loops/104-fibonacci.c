#include <stdio.h>

/**
  * main - Prints the first 100 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;

	unsigned long int j = 1, k = 2;

	while (i < 98)
	{
		if (i == 0)
			printf("%lu", j);
		else if (i == 1)
			printf(", %lu", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %lu", k);
		}

		++i;
	}

	printf("\n");
	return (0);
}
