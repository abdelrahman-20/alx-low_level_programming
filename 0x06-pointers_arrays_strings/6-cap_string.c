#include "main.h"

/**
 * separator - Check for Delimeter
 * @c: The Char To Check
 * Return: 0 or 1
*/

int separator(char c)
{
	int i;
	char delim[] = " \t\n,.!?\"{}()";

	for (i = 0; i < 12; i++)
	{
		if (c == delim[i])
			return (1);
	}
	return (0);
}


/**
 * cap_string - Capitalize Each Word
 * @str: The String
 * Return: The Final String
*/

char *cap_string(char *str)
{
	int isLower = 0;
	char *ptr = str;

	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			isLower = 1;

		if (separator(str[i]) && isLower)
		{
			*str -= 32;
		}
		str++;
	}
	return (ptr);
}
