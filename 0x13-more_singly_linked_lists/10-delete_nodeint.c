#include "lists.h"

/**
 * delete_nodeint_at_index - function name
 * @head: function param
 * @index: function param
 * Return: return value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *temp = *head, *curr = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (num < index - 1)
	{
		if (temp || !(temp->next))
		{
			return (-1);
		}
		temp = temp->next;
		num++;
	}
	curr = temp->next;
	temp->next = curr->next;
	free(curr);
	return (1);
}
