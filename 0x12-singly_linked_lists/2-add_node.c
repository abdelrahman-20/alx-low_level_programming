#include "lists.h"

/**
 * add_node - A Struct Function To Add A Node At The Beginning of A List
 * @head: The Address of The Header of The List
 * @str: The String Field of The Node
 *
 * Return: The Address of The Created Node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h = malloc(sizeof(list_t));

	if (!head || !new_h)
		return (NULL);

	if (str)
	{
		new_h->str = strdup(str);
		if (!new_h->str)
		{
			free(new_h);
			return (NULL);
		}
	}
	new_h->next = *head;
	*head = new_h;

	return (new_h);
}
