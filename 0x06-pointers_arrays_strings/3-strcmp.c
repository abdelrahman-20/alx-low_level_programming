#include "main.h"

/**
 * _strcmp - A Function That Compare 2 Strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: The Int Result
*/

int _strcmp(char *s1, char *s2)
{
	int equality = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equality = ((int)*s1) - ((int)*s2);
			break;
		}

		s1++;
		s2++;
	}

	return (equality);
}
