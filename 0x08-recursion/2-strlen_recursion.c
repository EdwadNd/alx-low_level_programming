#include <stdio.h>
#include <string.h>

/**
  *_strlen_recursion- a function that returns the length of a string
  * @s: string input
  * Return:length of a string
  */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	i = 1 + _strlen_recursion(s);
	return (i);
}
