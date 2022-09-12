#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '89'; ch++)
	{
		if (ch == '10')
		{
			putchar(ch);
		}
		else
		{
			putchar(ch);
			putchar(',');
			putchar(' ');
		}

	}

	return (0);

}
