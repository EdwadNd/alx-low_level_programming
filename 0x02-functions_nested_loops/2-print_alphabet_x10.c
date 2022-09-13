#include <stdio.h>
/**
* print_alphabet_x10 -function that prints alphabets 10 times
* description - function to print alphabets
* Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	char ch;

	int i = 0;

	while (i < 10)
	{

	for (ch = 'a'; ch <= 'z' ; ch++)
		putchar(ch);
	 putchar('\n');
	i++;
	}
}
