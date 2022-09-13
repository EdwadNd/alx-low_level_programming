#include <stdio.h>
/**
* print_alphabet - a function that prints the alphabets in lowercase
* description - function to print alphabets
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
		putchar(ch);

	putchar('\n');
}
