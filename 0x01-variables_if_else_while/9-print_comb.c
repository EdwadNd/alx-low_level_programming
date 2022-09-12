#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int ch = '0';

	for (ch = '0' ; ch <= '9'; ch++)
	{
		if (ch == '9')
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
