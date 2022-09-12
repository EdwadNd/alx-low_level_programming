#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int r1, r2, k = 0;

	for (r1 = 0 ; r1 <= 9; r1++)
	{
		for (r2 = k; r2 <= 9; r2++)
		{
			if (r1 != r2)
			{
				putchar(48 + r1);
				putchar(48 + r2);
				if (!(r1 == 8 && r2 == 9))
				{
				putchar(',');
				putchar(' ');
				}
			}
			else if (r1 == r2)
			{
				continue;
			}
			else if (r1 == 8 && r2 == 9)
			{
				break;
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
