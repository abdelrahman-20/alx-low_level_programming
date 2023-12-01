#include "hash_tables.h"

/**
 * hash_table_delete - A Function To Delete Hash Table
 * And Free Memory
 * @ht: The Structure of Hash Table
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (!ht || !ht->array || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			node = node->next;

			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}
