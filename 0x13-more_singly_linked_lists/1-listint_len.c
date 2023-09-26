#include "lists.h"

/**
 * listint_len - A Function To Get The Length of A Linked List
 * @h: The Head of The Linked List
 *
 * Return: The Length
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
