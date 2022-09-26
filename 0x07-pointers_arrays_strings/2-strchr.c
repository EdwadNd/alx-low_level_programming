#include <string.h>
#include <stdio.h>

/**
  * _strchr- a function that locates a character in a string.
  *@s: string to be scanned
  * @c: character to be searched in str.
  *Return: first occurence of string or NULL
  */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));

}

