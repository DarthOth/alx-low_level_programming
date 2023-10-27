#include "main.h"
/**
 * is_prime_number - function prime number
 * @n: function parameter
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number  - function prime number
 * @n: function parameter
 * @m: function parameter
 * Return: int
 */

int actual_prime_number(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	if (n % m == 0 && m > 0)
	{
		return (0);
	}
	return (actual_prime_number(n, m - 1));
}
