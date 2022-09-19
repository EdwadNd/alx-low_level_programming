#include <stdio.h>
#include <string.h>

/**
  * print_rev - a function that prints a string, in reverse
  *@s: input string
  * Return: void
  */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
