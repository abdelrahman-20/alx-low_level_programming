#include "hash_tables.h"

/**
 * hash_table_print - A Function To Print Hash Table
 * @ht: The Hash Table Structure
*/
void hash_table_print(const hash_table_t *ht)
{
	int flag = 0;
	hash_node_t *node;
	unsigned long int i;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (flag == 1)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			flag = 1;
		}
	}
	printf("}\n");
}
