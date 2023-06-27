#include "main.h"

/**
 * puts2 - Print A Char Every 2 Times
 * @str: The String To Pritn
*/

void puts2(char *str)
{
	int size = 0, i;

	while (str[size] != '\0')
		size++;

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[size]);
	}
	_putchar('\n');
}
