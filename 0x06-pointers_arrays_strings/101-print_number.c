#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * print_number  - function print numbers
  * @n: function parameter
  * Return: always 0
  */

void print_number(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	if (m / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
