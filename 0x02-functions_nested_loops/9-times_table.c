#include "main.h"

/**
 * times_table - Entry Func
*/

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			product = i * j;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + 48);
			_putchar((product % 10) + 48);

		}
		_putchar('\n');
	}
}
