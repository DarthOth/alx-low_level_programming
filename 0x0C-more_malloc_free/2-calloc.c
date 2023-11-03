#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function calloc
 * @nmemb: function parameter
 * @size: function parameter
 * Return: result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t a;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
	{
		s[a] = 0;
	}
	return (s);
}
