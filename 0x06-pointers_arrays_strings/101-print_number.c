#include <stdio.h>
#include <string.h>
#include "main.h"
/**
  * print_number-a function that prints an integer<F3><F4>
  * @n:input number
  * Return: void
  */

void print_number(int n)
{
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (num / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
