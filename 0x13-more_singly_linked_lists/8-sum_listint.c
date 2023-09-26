#include "lists.h"

/**
 * sum_listint - A Function To Sum The Items of A List
 * @head: The Head of The Linked List
 *
 * Return: The Sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (!head)
		return (0);

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
