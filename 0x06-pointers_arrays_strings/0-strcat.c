#include "main.h"
#include <stdio.h>

/**
  * _strcat  - function strcat
  * @dest: function parameter
  * @src: function parameter
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, src_len = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		src_len++;
	}
	for (i = 0; i <= srclen; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);

}
