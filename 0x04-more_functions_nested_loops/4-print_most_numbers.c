#include "main.h"

/**
 * print_most_numbers - print all numbers function.
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
