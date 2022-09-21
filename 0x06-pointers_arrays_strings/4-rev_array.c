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
	int arr[1000];

	j = 0;
	for (i = n - 1; i >= 0; i--, j++)
	{
		arr[i] = a[j];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = arr[i];
	}
}
