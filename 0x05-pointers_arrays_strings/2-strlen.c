#include "main.h"

/**
  * _strlen - function swap
  * @s: function parameter
  * Return: count value
  */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
