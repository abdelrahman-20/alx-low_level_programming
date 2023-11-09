#include "lists.h"

/**
 * get_dnodeint_at_index - A Function To Get Node At Index
 * @head: The Head of The List
 * @index: The Index of The Required Node
 * Return: The Node At Index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
