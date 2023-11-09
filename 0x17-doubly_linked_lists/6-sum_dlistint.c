#include "lists.h"

/**
 * sum_dlistint - A Function To Get The Sum of Nodes
 * @head: The Head of The List
 *
 * Return: The Sum of The Nodes
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
