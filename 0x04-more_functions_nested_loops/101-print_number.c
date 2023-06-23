#include "main.h"

/**
 * print_number - The Function
 * @n: The Number To Print
*/

void print_number(int n)
{
	int x = n;

	if (x < 0)
	{
		_putchar('-');
		x = -x;
	}

	if ((x / 10) > 0)
		print_number(num / 10);

	_putchar((x % 10) + '0');
}
