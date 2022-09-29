#include <string.h>
#include <stdio.h>
int is_prime(int a, int b);
/**
  * is_prime_number-a function that returns 1 if the input integer
  *is a prime number, otherwise return
  *@n:input number
  *Return: 1 if prime, o otherwisw
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n, 2));
}

/**
 * is_prime - checks for prime number.
 * @a: input number.
 * @b: divisor.
 * Return: if prime or not.
 */
int is_prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	else
		return (is_prime(a, b + 1));
}
