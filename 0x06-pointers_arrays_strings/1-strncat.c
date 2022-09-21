#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _strncat -a function that concatenates two strings.
  * @dest:appends the src string to dest string
  * @src: string to be concatinated
  * @n: n bytes
  * Return: Return a pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
