#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function name
 * @n: function param
 * @...: function param
 * Return: return value
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, sum = 0;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(x, int);
	}
	va_end(x);
	return (sum);
}
