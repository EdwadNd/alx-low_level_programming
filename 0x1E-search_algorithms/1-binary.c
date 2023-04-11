#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * binary_search -  function that searches for a value in a sorted array of 
 * integers using the Binary search algorithm
 * @array  - array search
 * @size - is the number of elements in array
 * @value - is the value to search for
 * return: print array being serched otherviswe -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i, L = 0, M = 0;
	int R = (int)size - 1;

	printf("Searching in array: %d,", array[0]);
	for(i=1; i<(int)size; i++) 
	{
		printf(" %d ", array[i]);
		if (i != (int)size - 1)
			printf(",");
		else
			printf("\n");
	}

	while (L <= R)
	{
		M = floor((L + R)/2);
		if (array[M] < value)
		{
			L = M + 1;
			printf("Searching in array:");
			for ( i = L; i < (int)size; i++)
			{
				printf(" %d", array[i]);
				if (i != (int)size - 1)
					printf(",");
				else
					printf("\n");
			}

		}
		else if (array[M] > value)
		{
			R = M - 1;
			printf("Searching in array:");
			for ( i = R; i < (int)size; i++)
			{
				printf(" %d", array[i]);
				if ( i != (int)size - 1)
					printf(",");
				else
					printf("\n");
			}
		}
		else
			return (M);
	}
	return (-1);
}


