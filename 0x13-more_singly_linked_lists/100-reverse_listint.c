#include "lists.h"

/**
 * reverse_listint - function name
 * @head: function param
 * Return: return value
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
