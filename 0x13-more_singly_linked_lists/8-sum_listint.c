#include "lists.h"

/**
 * sum_listint - function name
 * @head: function param
 * Return: return value
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
