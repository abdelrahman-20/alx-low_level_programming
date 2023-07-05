#include "main.h"

/**
 * _strlen_recursion - A Function To Get The Length of The String
 * @s: The String
 *
 * Return: The Length of The String
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
