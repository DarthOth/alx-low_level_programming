#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * _strncat  - function strncat
  * @dest: function parameter
  * @src: function parameter
  * @n: function parameter
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = strlen(dest);

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[dest_len + i] = *src;
		src++;
	}
	dest[dest_len + i] = '\0';
	return (dest);

}
