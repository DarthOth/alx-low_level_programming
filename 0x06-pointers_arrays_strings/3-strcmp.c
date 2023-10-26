#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * _strcmp  - function strcmp
  * @s1: function parameter
  * @s2: function parameter
  * Return: always 0
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}