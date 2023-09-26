#include "lists.h"

/**
 * _r - A Function
 * @list: ....
 * @size: ....
 * @new: .....
 *
 * Return: ....
*/

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	size_t i;
	const listint_t **new_list;

	new_list = malloc(size * sizeof(listint_t));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		new_list[i] = list[i];

	new_list[i] = new;
	free(list);

	return (new_list);
}

/**
 * print_listint_safe - A Function To Print Address & Value
 * @head: The Head OF The List
 *
 * Return: Number of Printed Items
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free(list);
	return (num);
}
