#include "3-calc.h"

/**
 * op_add - addition operator
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of two numbers
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of two numbers
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operator
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: product of the two numbers
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result after division
 *
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus operator
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder
 *
 */

int op_mod(int a, int b)
{
	return (a % b);
}
