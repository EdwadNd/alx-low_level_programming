#include <stdio.h>
/**
* main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
	char ch;

	char cl;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (cl = 'A'; cl <= 'Z'; cl++)
	{
		putchar(cl);
	}

	putchar('\n');

	return (0);
}
