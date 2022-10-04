#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
  *create_array- a function that creates an array of chars,
  *and initializes it with a specific char.
  *@size: input size of array
  *@c: special charector
  *Return: pointer to array or null if zero
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
