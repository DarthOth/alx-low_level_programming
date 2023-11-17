#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function name
 * @h: function param
 * Return: return value
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
