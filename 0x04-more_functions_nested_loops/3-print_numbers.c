#include <stdio>
/**
  *print_numbers -Write a function that prints 0 to 9, followed by a new line.
  *
  * Return: 0
  */
void print_numbers(void)
{
	int i;

	i = 0;
	for (i = 0, i < 10; i++)
	{
		_putchar(i + '0');
	}
	 _putchar('\n');
}
