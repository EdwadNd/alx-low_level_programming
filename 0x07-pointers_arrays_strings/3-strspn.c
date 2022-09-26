#include <stdio.h>
#include <string.h>

/**
  * _strspn- function that gets the length of a prefix substring
  * @s: string to be scanned
  * @accept: string to be searched
  *Return: length of a prefix substring.
  */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
