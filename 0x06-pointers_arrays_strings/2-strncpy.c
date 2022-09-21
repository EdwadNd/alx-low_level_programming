#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  * _strncpy- a function that copies a string.
  * @dest: appends the src
  * @src: appends the src string to the dest string
  * @n: input bytes
  *Return: Returns a pointer to the resulting string dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
