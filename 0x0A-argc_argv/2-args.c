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
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
