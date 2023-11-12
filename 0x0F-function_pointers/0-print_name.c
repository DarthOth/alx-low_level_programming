#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function name
 * @name: function name
 * @f: function name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
