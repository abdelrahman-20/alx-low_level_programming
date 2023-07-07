#include "main.h"

/**
 * _strlen - Get The Size of String
 * @s: The String
 * Return: The Size
*/

int _strlen(char *s)
{
	int size;

	for (size = 0; *s != '\0'; s++)
		size++;

	return (size);
}
