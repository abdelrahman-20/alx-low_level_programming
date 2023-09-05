#include "main.h"

/**
 * _strlen - A Function To Get Length of String
 * @s: The String To Get Its Length
 * Return: The Length
*/

int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{}

	return (size);
}

/**
 * argstostr - A Function To Return The Argument of The Program
 * @ac: The Number of Arguments
 * @av: The Array of Arguments
 *
 * Return: An Array of Arguments
*/

char *argstostr(int ac, char **av)
{
	int i, j, cmpt = 0, nc = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
		{
			s[cmpt] = av[i][j];
		}
		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);

}
