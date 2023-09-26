#include "lists.h"

/**
 * find_listint_loop - A Function To Loop ....
 * @head: The Head of The List
 *
 * Return: A Pointer
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (!head)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
		{
			if (ptr == end->next)
				return (end->next);
		}
	}

	return (NULL);
}
