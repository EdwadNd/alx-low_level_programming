#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * main -program that prints the number of arguments passed into it.
  *@argc: count
  *@argc: array of arguments
  *
  *Return: o on succwess
  */

int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
