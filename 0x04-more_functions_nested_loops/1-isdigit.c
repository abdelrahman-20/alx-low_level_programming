#include "main.h"

/**
 * _isdigit - Function
 * @c: The Parameter
 *
 * Return: 1 is digit, 0 is not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
