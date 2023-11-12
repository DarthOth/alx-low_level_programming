#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function name
 * @a: function name
 * @b: function name
 * Return: return value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function name
 * @a: function name
 * @b: function name
 * Return: return value
 */

int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - function name
 * @a: function name
 * @b: function name
 * Return: return value
 */

int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_div - function name
 * @a: function name
 * @b: function name
 * Return: return value
 */

int op_div(int a, int b)
{
        return (a / b);
}

/**
 * op_mod - function name
 * @a: function name
 * @b: function name
 * Return: return value
 */

int op_mod(int a, int b)
{
        return (a % b);
}
