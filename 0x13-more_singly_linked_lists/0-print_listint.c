#include "lists.h"

/**
 * print_listint - A Function To Print Linked List of Type Int
 * @h: The Head Of The Linked List
 *
 * Return: Number of Nodes of The Linked List
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
