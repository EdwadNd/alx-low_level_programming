#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
  *alloc_grid- a function that returns a pointer to a 2
  *dimensional array of integers.
  *@width: input width
  *@height: input height
  *Return:2 dimentiona array pointer
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(width * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(**array) * width);
		if (array[i] == 0)
		{
			while (i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
