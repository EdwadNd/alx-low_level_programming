#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * main -program that prints the number of arguments passed into it.
  *@argc: count
  *@argv: array of arguments
  *
  *Return: o on succwess
  */

int main(int argc, char __attribute__ ((unused)) **argv)
{
	int a, b, mult = 0;

	a = 0;
	b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mult = a * b;
		printf("%d\n", mult);
	}
	else
		printf("%s\n", "Error");
	return (0);

}
