#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
  *free_grid- freeing memory
  *@grid: input grid
  *@height: inputheight
  *Return: void
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
