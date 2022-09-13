#include <stdio.h>
/**
* _isalpha - function that checks for alphabetic charector
*
* Return: Always 0 (success).
*/
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
