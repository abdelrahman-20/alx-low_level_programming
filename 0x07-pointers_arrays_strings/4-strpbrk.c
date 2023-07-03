#include "main.h"

/**
 * _strpbrk - Locates A Byte of A string
 * @s: Main String
 * @accept: Sub String
 * Return: A pointer
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *p;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
