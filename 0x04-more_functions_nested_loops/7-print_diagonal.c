#include <stdio.h>
#include "main.h"

/**
  * print_diagonal -function that draws a diagonal line on the terminal.
  * @n: is the number of times the character backlash should be printed
  * Return: diogonal line is printed
  */
void print_diagonal(int n)
{
	int d, i;

	if (n <= 0)
		putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (d = 0; d <= i; d++)
		{
			if (i == d)
			{
				putchar(92);
				putchar(10);
			}
			else
				putchar(' ');
		}
	}
}

