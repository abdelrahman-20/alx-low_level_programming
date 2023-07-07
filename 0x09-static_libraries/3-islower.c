#include "main.h"

/**
 * _islower - indicates the case of the letter
 * @c: is the char to be checked
 *
 * Return: 0 if lowercase , 1 if uppercase
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
