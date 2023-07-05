#include "main.h"

/**
 * _pow_recursion - A Power Function In Recursion
 * @x: The Number
 * @y: The Power of The Number
 *
 * Return: The Result of X To The Power Y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
