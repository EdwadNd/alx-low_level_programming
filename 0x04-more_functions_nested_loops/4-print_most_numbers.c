#include <stdio.h>
/**
  *print_most_numbers - function that prints the numbers, from 0 to 9.
  *
  * Return: 0
  */
void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
