#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function name
 * @size: function param
 * @c: function param
 * Return: return value
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
