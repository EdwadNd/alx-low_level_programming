#include "lists.h"

void pre_print(void) __attribute__ ((constructor));

/**
  * print_before - prints messesge
  * before main function.
  *
  * Return: NONE.
  */
void pre_print(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

