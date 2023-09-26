#include "lists.h"

/**
 * free_listint - A Function To Free A List
 * @head: The Head of The Linked List
*/

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
