#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * print_rev-a function that prints a string, in reverse
  *@s: input string
  * Return: void
  */

void print_rev(char *s)
{
	int i, len, j;
	char rev[100];

	j = 0;
	len = strlen(s);
	for (i = len-1 ; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	printf("%s", rev );
	printf("\n");
}
