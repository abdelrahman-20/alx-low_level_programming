#include "main.h"

/**
 * rev_string - A Function To Reverse A String
 * @s: The String Parameter
*/

void rev_string(char *s)
{
	int size = 0, i;

	while (s[size] != '\0')
		size++;

	for (i = 0; i < (size / 2); i++)
	{
		char tmp = s[i];

		s[i] = s[size - i - 1];
		s[size - i - 1] = tmp;
	}
}
