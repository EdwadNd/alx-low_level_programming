#include <stdio.h>
#include <ctype.h>
/**
  * _isigit - Write a function that checks for digit character.
  * @c: digit that is checked
  * Return: 0.
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

