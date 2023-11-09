#include "lists.h"

/**
 * free_dlistint - A Function To Free The List
 * @head: The Head of The List
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
