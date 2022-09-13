#include <stdio.h>
#include <ctype.h>
/**
* print_sign - function that checks for alphabetic charector
* @n: argument to check if c positive or negetive
* Return: Always 0 (success).
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if(n == 0)
	{
		_putchar('0');
		return (0);
	}
}
