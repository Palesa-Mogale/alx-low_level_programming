#include "3-calc.h"

/**
 *op_add - Returns the sum of two numbers.
 *@a: The first number.
 *@b: The second number.
 *Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Returns the difference of two numbers.
 *@a: The first number.
 *@b: The second number.
 *Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Returns the product of two numbers.
 *@a: The first number.
 *@b: The second number.
 *Return: multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - Returns the division of two numbers.
 *@a: The first number.
 *@b: The second number.
 *Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - Returns the remainder of the division of two numbers.
 *@a: The first number.
 *@b: The second number.
 *Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


