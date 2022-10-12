#include <stdio.h>
/**
  *array_iterator-a function that executes a function given as
  *               a parameter on each element of an array
  *@array: input array
  *@size: size of array
  *@action: function that does the action
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size--)
	{
		action(*array);
		array++;
	}
}

