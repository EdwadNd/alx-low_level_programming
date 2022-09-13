#include <stdio.h>
#include <ctype.h>
/**
* _islower -a function that checks for lowercase character.
* c - aphabet checked if it lower
* Return: Always 0.
*/

int _islower(int c)
{
	if (islower(c) == 1)
		return (1);
	else
		return (0);
}
