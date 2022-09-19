#include <stdio.h>
#include <string.h>

/**
  * print_rev - a function that prints a string, in reverse
  *@s: input string
  * Return: void
  */
void print_rev(char *s)
{
	int n;

	n = strlen(s);
	while (n >= 0)
	{
		putchar(s[n]);
		n--;
	}
	putchar('\n');
}
