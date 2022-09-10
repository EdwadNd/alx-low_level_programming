#include <stdio.h>
/**
*   main - Entry point
*
*   Return: Always 0(success)
*/
int main(void)
{
int integerType;
float floatType;
double doubleType;
char charType;
printf("Size of char: %ld bytes\n", sizeof(char));
printf("Size of int: %ld bytes\n", sizeof(int));
printf("Size of long int: %ld bytes\n", sizeof(long int));
printf("Size of long long int: %ld byte\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
