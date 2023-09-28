#include "main.h"

/**
 * get_bit - A Function To Return The Value of Bit At Index
 * @n: The Number
 * @index: The Index
 *
 * Return: 0,1,-1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
