#include "lists.h"

/**
 * get_nodeint_at_index - function name
 * @head: function param
 * @index: function param
 * Return: return value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *temp = head;

	while (temp && num < index)
	{
		temp = temp->next;
		num++;
	}
	return (temp ? temp : NULL);
}
