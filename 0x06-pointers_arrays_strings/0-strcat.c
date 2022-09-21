#include <stdio.h>
#include <string.h>

/**
  * _strcat - a function that concatenates two strings.
  * @dest: appends src string
  * @src: string to be appended
  * Return: pointer to resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
