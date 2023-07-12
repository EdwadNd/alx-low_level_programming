#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search -  function that searches for a value in an array
 *  of integers using the Linear search algorithm
 *  @size_t - number of elements in array
 *  @value - search value
 *  @array - pointer to the first element 
 *  return : print value on success and -1 otherwise
 */

 int linear_search(int *array, size_t size, int value)
{
	int i, size_;

	size_ = (int)size;

	if(array == NULL)
		return (-1);
	else
	{
		for (i = 0; i < size_; i++)
		{
			if(array[i] == value)
			{ 
				printf("Value checked array[%d] = [%d]\n", i, array[i]); 
				return (i);
			}
			else
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
			}
		}
	}
	return (-1);
}		
