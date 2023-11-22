#include "lists.h"

/**
 *pop_listint - function name
 * @head: function param
 * Return: return value
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (!head || !*head)
	{
		return (0);
	}
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
