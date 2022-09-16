#include "main.h"

/**
  * print_number - prints a number to the screen
  * @n: the given number
  *
  * Return: nothing
  */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		putchar((n % 10) + '0');
	}
	else
		putchar((n % 10) + '0');
}
