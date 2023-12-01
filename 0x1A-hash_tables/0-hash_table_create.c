#include "hash_tables.h"

/**
 * hash_table_create - A Function To Create Hash Table
 * @size: The Size of Hash Table
 * Return: A New Hash Table With The Given Size
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t) * size);
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	return (new_table);
}
