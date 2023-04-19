#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - return sum
 * @a: a
 * @b: b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return sub
 * @a: a
 * @b: b
 * Return: sub of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return mul
 * @a: a
 * @b: b
 * Return: mul of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return div
 * @a: a
 * @b: b
 * Return: div of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return mod
 * @a: a
 * @b: b
 * Return: mod of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
