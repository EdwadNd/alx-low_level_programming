#include <stdio.h>
#include <ctype.h>
/**
  * _isupper - Write a function that checks for uppercase character.
  * @c: letter that is checked
  * Return: 0.
  */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}

