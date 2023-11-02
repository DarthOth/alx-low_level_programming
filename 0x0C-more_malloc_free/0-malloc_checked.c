#include "main.h"

/**
 * *malloc_checked - function check malloc
 * @b: function parameter
 * Return: result
 */

void *malloc_checked(unsigned int b)
{
	int *c = malloc(b);

	if (c == 0)
	{
		exit(98);
	}
	return (c);
}
