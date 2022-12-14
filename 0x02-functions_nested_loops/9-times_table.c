#include <stdio.h>
#include "main.h"
/**
 *times_table - prints the 9 times table starting at zero
 *
 *Return: always 0 (success)
 */
void times_table(void)
{
	int i, j, d;

	for (i = 0; i < 10 ; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j < 10 ; j++)
		{
			d = j * i;
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
				_putchar(' ');
			_putchar((d % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
