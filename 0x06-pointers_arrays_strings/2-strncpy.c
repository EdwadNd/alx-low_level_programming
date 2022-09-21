#include <string.h>
#include <stdio.h>

/**
  * _strncpy- a function that copies a string.
  * @dest: appends the src
  * @src: appends the src string to the dest string
  * @n: input bytes
  *Return: Returns a pointer to the resulting string dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
