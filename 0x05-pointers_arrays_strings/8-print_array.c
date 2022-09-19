#include <stdio.h>

/**
  *print_array - function that prints n elements of an array of integers.
  * @a: input number of elements
  *@n: array input
  *Return: nothing(void).
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
