#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always  0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", "Last digit of", n, n % 10);
	if (n > 5)
		printf(" greater than 5\n");
	else if (n == 0)
		printf(" 0\n");
	else if (n < 6)
		printf(" less than 6\n");
	return (0);
}
