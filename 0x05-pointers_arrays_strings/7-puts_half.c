#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  *puts_half- vWrite a function that prints half of a string
  *@str: input string
  *Return: nothing
  */
void puts_half(char *str)
{
	int i, n, j;

	n = strlen(str);
	if (n % 2 == 0)
	{
		for (i = n / 2; str[i] != '\0'; i++)
		{
			for (i = n / 2; str[i] != '\0'; i++)
				_putchar(str[i]);
		}
	}
	else if (n % 2)
	{
		for (j = (n - 1) / 2; n < n - 1; j++)
			_putchar(str[j + 1]);
	}
	_putchar('\n');
}
