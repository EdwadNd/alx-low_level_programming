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
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		s++;
		if (s[i] == c)
			return (s);
	}
	return (NULL);
}

