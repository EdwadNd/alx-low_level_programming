#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  *str_concat- a function that concatenates two strings
  *@s1: input string
  *@s2: input string
  *Return: pointer should point to a newly allocated space in memory
  *which contains the contents of s1,
  *followed by the contents of s2, and null terminated
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size;
	char *str;

	size = strlen(s2) + strlen(s1);

	str = malloc((sizeof(char) * size) + 1);

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	j = strlen(s1);
	i = 0;

	while (i < j)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	if (str == NULL)
		return (NULL);
	return (str);
}
