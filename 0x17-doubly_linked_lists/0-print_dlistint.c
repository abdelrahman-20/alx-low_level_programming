#include "lists.h"

/**
 * print_dlistint - A Function To Print Nodes
 * @h: The Head of The List
 * Return: The Number of The Nodes
*/

size_t print_dlistint(const dlistint_t *h)
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
