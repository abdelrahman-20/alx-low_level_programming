#include "main.h"

/**
 * _strncat - Main Function
 * @dest: Final Text
 * @src: Source Text
 * @n: Number of Bytes
 * Return: The Final Text
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, s1 = 0;

	while (dest[s1])
		s1++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[s1] = src[i];
		s1++;
	}
	dest[s1] = '\0';

	return (dest);
}
