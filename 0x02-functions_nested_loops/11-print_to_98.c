#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prints the 9 times table starting at zero
 *@n
 *Return: always 0 (success)
 */
void print_to_98(int n)
{
	int i;

	for (i = n ;n < 99;i++)
	{
		_putchar((i % 10) + '0');
		if (i == 98)
		{
			continue;
		}
		else
		{
			_putchar(',');
			_putchar(' ');
		}
	}

}
