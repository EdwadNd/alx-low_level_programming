#include <stdio.h>
#include <string.h>

/**
  *print_diagsums- function that prints the sum of the two diagonals
  *of a square matrix of integers.
  *@a: input array
  *@size: size of arrey
  *Return: diagonal square
  */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum = 0, sumd2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size + 1) * i];
		sumd2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum, sumd2);
}

