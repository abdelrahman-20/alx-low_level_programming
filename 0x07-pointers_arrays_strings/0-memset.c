#include "main.h"

/**
 * _memset - MemorySet Function
 * @s: The String To Change
 * @b: The Char To Add To String
 * @n: The Number Of Bytes TO Change
 * Return: The Final String
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
