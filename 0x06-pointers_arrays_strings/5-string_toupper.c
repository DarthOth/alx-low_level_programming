#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * string_toupper  - function string toupper
  * @n: function parameter
  * Return: n
  */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
