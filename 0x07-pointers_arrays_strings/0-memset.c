#include <string.h>

/**
  * _memset- a function that fills memory with a constant byte.
  * @s:sting pointer
  * @b: input char
  * @n:first n bytes
  * Return: pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
