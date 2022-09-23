#include "main.h"
#include <stdio.h>

/**
  * reverse_array-a function that reverses the content of an array of integers
  * @a: input array
  * @n: number of items in the array
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	j = 0;
	for (i = n - 1; i > j; i--, j++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}
