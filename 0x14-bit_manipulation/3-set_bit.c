#include "main.h"

/**
 * set_bit - A Function To Set A Bit of Number To 1
 * @n: The Number
 * @index: The Index of The Bit
 *
 * Return: 1 or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
