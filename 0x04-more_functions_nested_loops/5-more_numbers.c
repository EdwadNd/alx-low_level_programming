#include <stdio.h>
/**
  * more_numbers -function that prints the numbers,from 0 to 14,print 10 times
  *
  * Return: 0
  */
void more_numbers(void)
{
	int j;
	char i;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		j++;
		putchar('\n');
	}
}
