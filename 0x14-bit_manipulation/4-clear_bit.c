#include "main.h"

/**
 * clear_bit - A Function To Clear The Bit
 * @n: The Nubmer
 * @index: The Index of Bit
 *
 * Return: 1 or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;

	return (1);
}
