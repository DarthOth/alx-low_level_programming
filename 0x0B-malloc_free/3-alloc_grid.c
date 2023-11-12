#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function name
 * @width: function param
 * @height: function param
 * Return: return value
 */

int **alloc_grid(int width, int height)
{
	int **num, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	num = malloc(sizeof(int *) * height);
	if (num == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		num[i] = malloc(sizeof(int) * width);
		if (num[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(num[i]);
			}
			free(num);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			num[i][j] = 0;
		}
	}
	return (num);
}
