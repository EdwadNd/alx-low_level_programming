#include <stdio.h>

/**
 * main - finds and prints the largest factor of the number 612852475143
 * followed by a new line.
*
 * Return: Always 0;
 */
int main(void)
{
	long  Number = 612852475143, i = 0;

	for (i = 2; i <= Number; i++)
	{
		if (Number % i == 0)
		{
			Number /= i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}


