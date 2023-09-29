#include "main.h"

/**
 * get_endianness - A Function
 * Return: A Number
*/

int get_endianness(void)
{
	unsigned long int x = 1;

	return (*(char *)&x);
}
