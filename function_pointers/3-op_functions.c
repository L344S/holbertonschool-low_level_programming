#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - addition
 * @a: int a
 * @b: int b
 * Return: result sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts
 * @a: int a
 * @b: int b
 * Return: result difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies
 * @a: int a
 * @b: int b
 * Return: result product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: int a
 * @b: int b
 * Return: result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulos
 * @a: int a
 * @b: int b
 * Return: result modulo of ints
 */

int op_mod(int a, int b)
{
	return (a % b);
}
