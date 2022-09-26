#include <stdio.h>
#include <string.h>

/**
  * _strpbrk- function that searches a string for any of a set of bytes
  *@s: scanned string
  *@accept: search string
  *Return: a pointer to the byte in s that matches one
  *of the bytes in accept NULL
  */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
