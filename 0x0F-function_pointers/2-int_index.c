#include <stdio.h>

/**
  *int_index-a function that searches for an integer
  *@array: input array of integers
  *@size: size of array
  *@cmp:  is a pointer to the function to be used to compare values
  *Return: returns the index of the first element for which
  *        the cmp function does not return
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	while (size--)
	{
		if (cmp(*array) != 0)
			return (i);
		i++;
		array++;
	}
	return (-1);
}

