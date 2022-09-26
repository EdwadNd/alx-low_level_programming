#include <stdio.h>
#include <string.h>

/**
  *set_string-a function that sets the value of a pointer to a char.
  *@s: string input
  *@to: converted to
  *
  *Return: pointer to char
  */
void set_string(char **s, char *to)
{
	*s = to;
}
