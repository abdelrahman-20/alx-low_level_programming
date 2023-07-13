#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concating Function
 * @s1: String One
 * @s2: String Two
 * @n: Number of Bytes
 * Return: Final String
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{}

	for (len2 = 0; s2[len2] != '\0'; len2++)
	{}

	str = malloc(len1 + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';

	return (str);
}
