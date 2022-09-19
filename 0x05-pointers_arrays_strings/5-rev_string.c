#include <stdio.h>
#include <string.h>

/**
  * rev_string -a function that prints a string, in reverse
  *@s: input string
  * Return: void
  */
void rev_string(char *s)
{
	int n;
	char t[1000];

	n = strlen(s);
	while (n >= 0)
	{
		strncat(t,&s[n],1);
		n--;
	}
	strcpy(s, t);
}
