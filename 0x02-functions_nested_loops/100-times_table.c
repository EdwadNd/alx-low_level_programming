#include "main.h"
#include <stdio.h>
/**
* print_times_table - Prints the times table of the input
 starting with 0.
* @n: The value of the times table to be printed.
*/

void print_times_table(int n)
{
	int num, mul, res;

	if (n < 0 || n > 15)
	{
	}
	else
		for (num = 0; num <= n; num++)
		{
			for (mul = 0; mul <= n; mul++)
			{
				res = num * mul;
			if (mul == 0)
				putchar('0' + res);
			else if (res < 10)
			{
				putchar(' ');
				putchar(' ');
				putchar('0' + res);
			}
			else if (res < 100)
			{
				putchar(' ');
				putchar('0' + res / 10);
				putchar('0' + res % 10);
			}
			else
			{
				putchar('0' + res / 100);
				putchar('0' + (res - 100) / 10);
				putchar('0' + res % 10);
			}
			if (mul < n)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	putchar('\n');
}
