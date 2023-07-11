#include "main.h"

/**
 * _strlen - A Function TO Calc The Size Of String
 * @s: The String
 * Return: The Size of The String
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	{}

	return (size);
}

/**
 * str_concat - A Function To Concate 2 Strings
 * @s1: String 1
 * @s2: String 2
 * Return: Final String
*/

char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	m = malloc((size1 + size2) * sizeof(char) + 1);

	if (m == 0)
		return (0);

	for (i = 0; i <= (size1 + size2); i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';

	return (m);
}
