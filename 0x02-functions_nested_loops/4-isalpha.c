#include "main.h"

/**
 * _isalpha - show if c is a letter or not
 * @c: is a char we test
 *
 * Return: 1 if c is letter , 0 other wise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
