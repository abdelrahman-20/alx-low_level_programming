#include "lists.h"

/**
 * dlistint_len - A Function To Get The Length
 * @h: The Head of The List
 * Return: The Length
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
