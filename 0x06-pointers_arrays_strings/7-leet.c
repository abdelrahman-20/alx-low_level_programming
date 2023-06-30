#include "main.h"

/**
 * leet - Replace Function
 * @str: The String to Edit
 *
 * Return: The Final Text
*/

char *leet(char *str)
{
	char key[] = {'A', 'E', 'O', 'T', 'L'}
	char val[] = {4, 3, 0, 7, 1};


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < (sizeof(key) / sizeof(key[0])); j++)
		{
			if (str[i] == key[j] || str[i] == key[j] + 32)
			{
				str[i] = val[j] + '0';
			}
		}
	}

	return (str);
}
