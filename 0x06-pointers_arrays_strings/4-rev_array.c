#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * reverse_array  - function reverse array
  * @a: function parameter
  * @n: function parameter
  * Return: always 0
  */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
	j = a[i];
	a[i] = a[n];
	a[n] = j;
	}
}
