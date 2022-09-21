#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * _strcmp -  a function that compares two strings
  * @s1:input string
  * @s2: input string to be appended
  * Return: integer ess than,equal to, or greater than zero
  */
int _strcmp(char *s1, char *s2)
{
	int j;

	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	j = (*(unsigned char *)s1 - *(unsigned char *)s2);
		return (j);
}
