#include "lists.h"

/**
 * add_nodeint - A Function To Create A New Node
 * @head: The Head of The Linked List
 * @n: The Number To Add To The Linked List
 *
 * Return: A Pointer To The New Node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New_Node = malloc(sizeof(listint_t));

	if (!head || !New_Node)
		return (NULL);

	New_Node->next = NULL;
	New_Node->n = n;

	if (*head)
		New_Node->next = *head;

	*head = New_Node;

	return (New_Node);
}
