#include "hash_tables.h"

/**
 * hash_table_get - A Function To Get The Value of A Key
 * @ht: The Hash Table Structure
 * @key: The Key To Get Its Value
 *
 * Return: The Value of Entered Key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
