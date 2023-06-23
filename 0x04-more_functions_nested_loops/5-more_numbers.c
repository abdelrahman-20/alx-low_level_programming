#include "main.h"

/**
 * more_numbers - Function
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		j = i % 10;
		if (i > 9)
			_putchar(1 + '0');

		_putchar(j + '0');
	}
	 _putchar('\n');
}
