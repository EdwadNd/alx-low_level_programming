#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  *puts2 -Write a function that prints every other character of a string
  *@str: input string
  *Return: nothing
  */
void puts2(char *str)
{
	int i, n;

	n = strlen(str);
	for (i = 0; i < n ; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
