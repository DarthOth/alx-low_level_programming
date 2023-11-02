#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function check malloc
 * @b: function parameter
 * Return: result
 */

void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
