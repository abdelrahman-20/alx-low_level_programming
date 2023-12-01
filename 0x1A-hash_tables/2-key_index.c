#include "hash_tables.h"

/**
 * key_index - A Function To Get The Index of Key
 * @key: The Key of The Value
 * @size: The Size of Hash Table
 *
 * Return: The Index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2((unsigned char *)key) % size;

	return (index);
}
