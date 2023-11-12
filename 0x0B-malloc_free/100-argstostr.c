#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function name
 * @ac: function param
 * @av: function param
 * Return: return value
 */

char *argstostr(int ac, char **av)
{
	int i, n, j = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[i] = av[i][n];
			j++;
		}
		if (str[i] == '\0')
			str[j++] = '\n';
	}
	return (str);
}
