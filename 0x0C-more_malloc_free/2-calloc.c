#include "main.h"
#include <stdlib.h>

/**
 * _memset - Setting Function
 * @s: ...
 * @b: ...
 * @n: ...
 * Return: Pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * _calloc - Function
 * @nmemb: ...
 * @size: ....
 * Return: ...
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);
}
