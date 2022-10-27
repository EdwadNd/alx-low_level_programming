#include "main.h"

/**
 * print_binary - function that returns the value of a bit at a given index.
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int number;

	for (i = 63; i >= 0; i--)
	{
		number = n >> i;

		if (number & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
