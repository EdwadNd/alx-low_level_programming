#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
  *binary_to_uint - converts binary to number
  *@b:bit to be converted
  *
  *Return: converted number or 0
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, i;

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		number = 2 * number + (b[i] - '0');
	}

	return (number);
}
