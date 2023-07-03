#include "main.h"

/**
 * _strstr - Function
 * @haystack: Main String
 * @needle: Sub String
 *
 * Return: Pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] == haystack[i])
			{
				p = &haystack[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
