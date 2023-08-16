#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: first noumber
 * @b: second number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division of two numbers
 * @a: first number
 * @b: second number
 * Return:the division of a and b
 */

int op_div(int a, int b);
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder of the division of a and b
 */

int op_mod(int a, int b);
{
	return (a % b);
}
