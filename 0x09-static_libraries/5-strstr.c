#include "main.h"

/**
 * _strstr - Function
 * @haystack: Main String
 * @needle: Sub String
 *
 * Return: Pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int idx;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		idx = 0;

		if (haystack[idx] == needle[idx])
		{
			do {
				if (needle[idx + 1] == '\0')
					return (haystack);
				idx++;
			} while (haystack[idx] == needle[idx]);
		}

		haystack++;
	}

	return ('\0');
}
