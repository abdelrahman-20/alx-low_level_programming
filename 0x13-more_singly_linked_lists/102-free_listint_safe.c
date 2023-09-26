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

/**
 * free_listint_safe - A Function To Free Linked List
 * @h: The Head of The Linked List
 *
 * Return: The Size Of The List
*/

size_t free_listint_safe(listint_t **h)
{
	int loop = 1;
	size_t len = 0;
	listint_t *next, *node;

	if (!h || !*h)
		return (0);

	node = find_listint_loop(*h);

	for (len = 0; (*h != node || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == node && loop)
		{
			if (node == node->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
