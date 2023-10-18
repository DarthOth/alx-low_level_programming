#include "main.h"

/**
  * print_rev - function print rev
  * @s: function parameter
  */

void print_rev(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
		for (i = count - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		
		}
	}
	_putchar('\n');

}
