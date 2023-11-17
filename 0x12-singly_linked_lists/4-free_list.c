#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function name
 * @head: function param
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
