#include "main.h"

/**
 * more_numbers - Function
*/

void more_numbers(void)
{
	int x, i, j;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			j = i % 10;
			if (i > 9)
				_putchar(1 + '0');

			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
