#include "main.h"
/**
  *  print_line - draws a straight line
  *  @n: use this integer to determine the number of lines
  * Return: prints n number of lines
  */

void print_line(int n)
{
	int i = 0;

	while ((i < n) && (n > 0))
	{
		putchar('_');
		i++;
	}
	putchar('\n');
}
