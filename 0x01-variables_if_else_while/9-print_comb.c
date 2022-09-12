#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int ch = 0;

	for (ch = 0 ; ch <= 9; ch++)
	{
		putchar(48 + ch);
		if (ch != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
