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
 * isLower - Determine if Char is LowerCase
 * @c: The Char To Be Checked
 *
 * Return: 0 or 1
*/

int isLower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}


/**
 * cap_string - Capitalize Each Word
 * @str: The String
 * Return: The Final String
*/

char *cap_string(char *str)
{
	int sep = 1;
	char *ptr = str;

	while (*str)
	{
		if (separator(*str))
			sep = 1;

		if (sep && isLower(*str))
		{
			*str -= 32;
			sep = 0;
		}
		str++;
	}
	return (ptr);
}
