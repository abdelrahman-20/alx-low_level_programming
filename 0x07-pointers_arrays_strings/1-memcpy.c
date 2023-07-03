#include "main.h"

/**
 * _memcpy - Copy Function
 * @dest: Dest String
 * @src: Source String
 * @n: Number of Chars To Copy
 * Return: Dest String
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
