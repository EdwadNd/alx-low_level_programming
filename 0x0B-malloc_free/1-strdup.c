#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  *_strdup -  a function that returns a pointer to a newly allocated
  *space in memory, which contains a copy of the string given as a parameter.
  *@str: input string
  *Return: pointer to the duplicated string
  */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	return (copy);
}
