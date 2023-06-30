#include "main.h"
#include <stdio.h>

/**
 * leet - Replace Function
 * @str: The String to Edit
 *
 * Return: The Final Text
*/

char *leet(char *str)
{
	int i, j;
	char key[] = {"AaEeOoTtLl"};
	int val[] = {"4433007711"};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == key[j])
			{
				str[i] = val[j];
			}
		}
	}

	return (str);
}
