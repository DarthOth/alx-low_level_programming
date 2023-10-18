#include "main.h"

/**
  * swap_int - function swap
  * @a: function parameter
  * @b: function parameter
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
