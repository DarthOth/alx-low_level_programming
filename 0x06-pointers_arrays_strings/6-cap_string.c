#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * cap_string  - function cap string
  * @str: function parameter
  * Return: str
  */

char *cap_string(char *str)
{
	int count = 0;

	while (str[count])
	{
		while (!(str[count] >= 'a' && str[count] <= 'z'))
			count++;
		if (str[count - 1] == ' ' || str[count - 1] == '\t'
				|| str[count - 1] == '\n' || str[count - 1] == ',' || str[count - 1] == ';'
				|| str[count - 1] == '.' || str[count - 1] == '!' || str[count - 1] == '?'
				|| str[count - 1] == '"' || str[count - 1] == '(' || str[count - 1] == ')'
				|| str[count - 1] == '{' || str[count - 1] == '}' || count == 0)
			str[count] -= 32;
		count++;
	}
	return (str);
}
