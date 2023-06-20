#include "main.h"

/**
 * _abs - absolute function
 * @x: the number we calc abs for
 * Return: x if it's positive , -x if it's negative
*/

int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
