#include "main.h"

/**
 * _strcat - Main Function
 * @dest: Final Text
 * @src: Source Text
 * Return: The Final Text
*/

char *_strcat(char *dest, char *src)
{
	int s1 = 0, s2 = 0;

	while (dest[s1])
	{
		s1++;
	}

	while (src[s2])
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}

	return (dest);
}
