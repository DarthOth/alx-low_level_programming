#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function name
 * @str: function param
 * Return: return value
 */

char *_strdup(char *str)
{
	int i, j = 0;
	char *string;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	string = malloc(sizeof(char) * (i + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		string[j] = str[j];
	}
	return (string);
}
