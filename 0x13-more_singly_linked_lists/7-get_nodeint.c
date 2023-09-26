#include "lists.h"

/**
 * get_nodeint_at_index - A Function To Get The Node At Index n
 * @head: The Head of The Linked List
 * @index: The Index of Desired Node
 *
 * Return: A Pointer To The Node of NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *node;

	if (!head)
		return (NULL);

	node = head;

	for (n = 0; n < index && node; n++)
		node = node->next;

	return (node);
}
