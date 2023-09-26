#include "lists.h"

/**
 * add_nodeint_end - A Funtion To Add A New Node At The End of The List
 * @head: The Head of The Linked List
 * @n: The Value of The New Node
 *
 * Return: A Pointer To The New Node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New_Node = malloc(sizeof(listint_t));
	listint_t *Current;

	if (!head || !New_Node)
		return (NULL);

	New_Node->next = NULL;
	New_Node->n = n;

	if (!*head)
		*head = New_Node;
	else
	{
		Current = *head;
		while (Current->next)
		{
			Current = Current->next;
		}
		Current->next = New_Node;
	}

	return (New_Node);
}
