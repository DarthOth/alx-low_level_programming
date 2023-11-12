#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - function name
 * @s1: function param
 * @s2: function param
 * Return: return value
 */

char *str_concat(char *s1, char *s2)
{
	int i, r;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	r = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[r] != '\0')
		r++;
	str = malloc(sizeof(char) * (i + r + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	r = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[r] != '\0')
	{
		str[i] = s2[r];
		i++;
		r++;
	}
	str[i] = '\0';
	return (str);
}
