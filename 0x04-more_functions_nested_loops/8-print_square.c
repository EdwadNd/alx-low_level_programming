#include "main.h"
#include <stdio.h>
/**
  * print_square - prints a square, followed by a new line;
  * @size: the size of the square
  * Return: 0.
  */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		putchar(10);
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			putchar('#');
		}
		putchar(10);
	}
}
