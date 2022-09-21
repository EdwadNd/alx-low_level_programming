#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
  * string_toupper- a function that changes lowercase letters of a
  * string to uppercase
  * @c: input string
  * Return: char to uppercase
  */
char *string_toupper(char *c)
{
	int i, j;

	j = strlen(c);
	for (i = 0; i < j; i++)
	{
		if (islower(c[i]))
			c[i] -= 32;
	}
	return (c);
}
