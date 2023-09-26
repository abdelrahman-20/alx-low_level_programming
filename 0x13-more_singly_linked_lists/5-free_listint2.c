#include "lists.h"

/**
 * free_listint2 - A Function To Free A List
 * @head: The Head of The Linked List
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *current;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		current = node;
		node = node->next;
		free(current);
	}

	*head = NULL;
}
