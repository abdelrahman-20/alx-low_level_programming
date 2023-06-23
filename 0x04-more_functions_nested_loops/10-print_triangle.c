#include "main.h"

/**
 * print_triangle - Function
 * @size: The Size of Triangle
*/

void print_triangle(int size)
{
	int x, i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (i = 1; i <= (size - x); i++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= x; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
