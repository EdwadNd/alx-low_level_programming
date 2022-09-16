#include "main.h"
/**
 * print_triangle - It prints a triangle, followed by a new line
 *  @size: This is the size of the triangle to be printed.
 * Return: 0.
 */

void print_triangle(int size)
{
	int c, d;
	if (size <= 0)
		putchar(' ');
	for (c = 0; c < size; c++)
	{
		for (d = (size - 1); d >= 0; d--)
		{
			if (d <= c)
				putchar(35);
			else
				putchar(32);
		}
		putchar('\n');
									}
}
   
