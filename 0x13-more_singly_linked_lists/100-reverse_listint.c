#include "lists.h"

/**
 * reverse_listint - A Function To Reverse List
 * @head: The Head of The List
 *
 * Return: A Pointer To Reversed List Head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next_node = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;

	while (node)
	{
		next_node = node->next;
		node->next = *head;
		*head = node;
		node = next_node;
	}

	return (*head);
}
