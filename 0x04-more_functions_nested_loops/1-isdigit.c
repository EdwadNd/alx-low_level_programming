#include <stdio.h>
#include <ctype.h>
/**
  * _isdigit - Write a function that checks for digit character.
  * @c: digit that is checked
  * Return: 0.
  */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

