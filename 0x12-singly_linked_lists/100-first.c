#include <stdio.h>

void pre_print(void) __attribute__ ((constructor));

/**
  * pre_print - prints messesge
  * before main function.
  *
  */
void pre_print(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

