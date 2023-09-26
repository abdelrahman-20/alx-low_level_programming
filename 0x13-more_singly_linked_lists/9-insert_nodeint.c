#include "lists.h"

/**
 * insert_nodeint_at_index - A Function To Insert A Node At Index
 * @head: The Head of The List
 * @idx: The Index of Position
 * @n: A Value To Add To The List
 *
 * Return: A Pointer To New Node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *New_Node = malloc(sizeof(listint_t));

	if (!head || !New_Node || idx < 0)
		return (NULL);

	New_Node->n = n;
	New_Node->next = NULL;

	if (idx == 0)
	{
		New_Node->next = *head;
		*head = New_Node;
		return (New_Node);
	}

	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			New_Node->next = node->next;
			node->next = New_Node;
			return (New_Node);
		}
		i++;
		node = node->next;
	}

	free(node);
	return (NULL);

}
