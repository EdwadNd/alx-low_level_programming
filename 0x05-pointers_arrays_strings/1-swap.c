#include <stdio.h>

/**
  * swap_int - a function that swaps the values of two integers.
  * @a: pointer value to be swapped
  * @b: ponter value to be swaped
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
