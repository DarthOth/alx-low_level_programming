#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function name
 * @array: function name
 * @size: function name
 * @action: function param
 * Return: return value
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
