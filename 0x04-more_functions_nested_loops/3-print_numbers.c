#include <stdio.h>
/**
  *print_numbers -Write a function that prints 0 to 9, followed by a new line.
  *
  * Return: 0
  */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i + '0');
	}
	 _putchar('\n');
}
