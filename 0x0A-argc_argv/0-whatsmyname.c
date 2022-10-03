#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * main - a program that prints its name, followed by a new line
  *@argc: input count argument
  *@argv: input array
  *Return: o always
  */
int main(int argc, char **argv)
{
	argc--;
	printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
}
