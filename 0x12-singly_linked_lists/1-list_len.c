#include "lists.h"

/**
 * list_len - A Struct Function To Get The Size of List
 * @h: The List To Get Its Size
 *
 * Return: The Size of The List
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
