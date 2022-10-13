#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - a function that prints strings, followed by a new line.
  *@separator: is the string to be printed between the string
  *@n: number of strings passed to the function
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *value;

	va_start(ptr, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		value = va_arg(ptr, char *);
		printf("%s", value != NULL ? value : "(nil)");

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}

