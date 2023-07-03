#include "main.h"

/**
 * _strchr - Function To Find IDX of Char
 * @s: The String To Search In
 * @c: The Char We Search For
 *
 * Return: A Pointer or NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return ('\0');
}
