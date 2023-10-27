#include "main.h"
/**
 * _sqrt_recursion  - function sqrt recursion
 * @n: function parameter
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion  - function sqrt recursion
 * @n: function parameter
 * @m: function parameter
 * Return: int
 */

int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	return (actual_sqrt_recursion(n, m + 1));
}
