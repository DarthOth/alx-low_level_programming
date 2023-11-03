#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function array range
 * @min: function parameter
 * @max: function parameter
 * Return: result
 */

int *array_range(int min, int max)
{
	int *a, i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	a = malloc(sizeof(int) * 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
