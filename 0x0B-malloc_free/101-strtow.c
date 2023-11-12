#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_word - function name
 * @s: function param
 * Return: return value
 */

int count_word(char *s)
{
	int i, j = 0, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
		return (j);
}

/**
 * **strtow - function name
 * @s: function param
 * Return: return value
 */

char **strtow(char *s)
{
	int i, j = 0, begin, end, chrs, len = 0, x = 0;
	char **m, *tmp;

	while (*(str + len))
		len++;
	chrs = count_word(str);
	if (chrs == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (chrs + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (x)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (begin < end)
					*tmp++ = str[begin++];
				*tmp = '\0';
				m[j] = tmp - x;
				j++;
				x = 0;
			}
		}
		else if (x++ == 0)
			begin = i;
	}
	m[j] = NULL;
	return (m);
}
