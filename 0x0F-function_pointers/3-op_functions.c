#include <stdio.h>

/**
  *op_add - operator add
  *@a: input number
  *@b: input second number
  *Return: returns the sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  *op_sub - operator subtract
  *@a: input number
  *@b: input number
  *Return: returns the difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - Returns the product of two numbers
  *@a: inputfirst number.
  * @b: input second number
  *Return: The product of a and b.
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
   * op_div - Returns the division of two numbers.
   * @a:  input number.
   * @b: inputsecond number.
   * Return: The quotient of a and b.
   */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - Returns the remainder of the division of two numbers.
  * @a: input first number.
  * @b: input second number.
  * Return: The remainder of the division of a by b.
    */
int op_mod(int a, int b)
{
	return (a % b);
}
