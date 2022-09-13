#include <stdio.h>
#include <ctype.h>
/**
* _isalpha - function that checks for alphabetic charector
* @c: argument to check if c is an alphabet
* Return: Always 0 (success).
*/
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
