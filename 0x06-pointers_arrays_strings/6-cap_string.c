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
	int i;
	char *ptr = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (separator(str[i]) || i == 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
	}
	return (ptr);
}
