#include "lists.h"

/**
 *free_listint2 - function name
 * @head: function param
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*headm = NULL;
}
