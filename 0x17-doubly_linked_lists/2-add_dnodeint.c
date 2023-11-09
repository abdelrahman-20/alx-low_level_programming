#include "lists.h"

/**
 * add_dnodeint - A Function To Add A New Node
 * @head: The Head of The List
 * @n: The Data of The Node
 * Return: The Created Node (Head)
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!head || !new_node)
	{
		if (new_node)
			free(new_node);
		return NULL;
	}

	new_node->n = n;
	new_node->prev = NULL;
	if (!*head)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}

	return (new_node);
}
