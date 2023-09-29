#include "main.h"

/**
 * flip_bits - A Function To Flip And Change The Number
 * @n: The Source Number
 * @m: The Destination Number
 *
 * Return: The Number of Flipped Bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	int count = 0;

	while (val)
	{
		if (val & 1UL)
			count++;
		val = val >> 1;
	}

	return (count);
}
