#include "lists.h"

/**
 * pop_listint - A Function To Pop & Return The Head
 * @head: The Head of The Linked List
 *
 * Return: The Value of The Head
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;

	free(*head);
	*head = node;

	return (n);
}
