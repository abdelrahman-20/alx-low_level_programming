#include "main.h"

/**
 * *_strcpy - Function
 * @dest: Distination Var
 * @src: Source Var
 * Return: The Dist Var
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (dest[i] != '\0');

	return (dest);
}
