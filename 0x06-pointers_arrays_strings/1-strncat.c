#include <stdio.h>
#include <string.h>
/**
  * _strncat -a function that concatenates two strings.
  * @dest:appends the src string to dest string
  * @src: string to be concatinated
  * @n: n bytes
  * Return: Return a pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = strlen(dest);
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
