#include "main.h"

/**
 * puts2 - Print A Char Every 2 Times
 * @str: The String To Pritn
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[size]);
	}
	_putchar('\n');
}
