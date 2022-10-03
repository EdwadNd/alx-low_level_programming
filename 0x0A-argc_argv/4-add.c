#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main -Write a program that adds positive numbers.
  *@argc: count
  *@argv: array of arguments
  *
  *Return: o on succwess
  */

int main(int argc, char __attribute__ ((unused)) **argv)
{
	int i, j, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (i = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
