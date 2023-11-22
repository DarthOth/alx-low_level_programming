#include "lists.h"

/**
 * free_listint_safe - function name
 * @h: function param
 * Return: return value
 */

size_t free_listint_safe(listint_t **h)
{
	int i;
	size_t len  = 0;
	listint_t *temp;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
