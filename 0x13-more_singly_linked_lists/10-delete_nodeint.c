#include "lists.h"

/**
 * delete_nodeint_at_index - A Function To Delete A Node of The List
 * @head: The Head of The Linked List
 * @index: The Index of The Node To Remove
 *
 * Return: 1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *last_node;

	if (!head || !*head)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (node)
	{
		if (i == index)
		{
			last_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		last_node = node;
		node = node->next;
	}

	return (-1);
}
