#include <stdio.h>
/**
  *print_most_numbers - function that prints the numbers, from 0 to 9.
  *
  * Return: 0
  */
void print_most_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (j < 10)
	{
	while (i < 14)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	}
}
