#include "lists.h"

/**
 * add_nodeint - function name
 * @head: function param
 * @n: function param
 * Return: return value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
