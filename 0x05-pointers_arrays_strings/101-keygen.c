#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - a program that generates random valid passwords for the program 101-crackme.
  *
  * Return: 0 always
  */

int main(void)
{
	int rand_num;

	srand(time(0));
	rand_num = (int) rand();
	putchar(rand_num + '0');
	return (0);
}
