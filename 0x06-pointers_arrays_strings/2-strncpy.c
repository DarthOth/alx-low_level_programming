#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * _strncpy  - function strncpy
  * @dest: function parameter
  * @src: function parameter
  * @n: function parameter
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);

}
