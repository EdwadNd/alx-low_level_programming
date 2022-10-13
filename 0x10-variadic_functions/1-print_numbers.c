#include <stdio.h>
#include <stdarg.h>

/**
  *print_numbers - prints numbers
  * @separator: s the string to be printed between numbers
  * @n: numberr
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int value = 0;
	va_list ptr;


	va_start(ptr, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		value = va_arg(ptr, unsigned int);
		printf("%d", value);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
