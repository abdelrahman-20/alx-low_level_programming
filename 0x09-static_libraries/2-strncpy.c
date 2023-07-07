#include "main.h"

/**
 * _strncpy - A Function To Copy A String
 * @dest: Distination
 * @src: source text
 * @n: NO. Chars
 * Return: Distination Text
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
