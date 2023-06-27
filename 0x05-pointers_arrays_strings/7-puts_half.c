#include "main.h"

/**
 * puts_half - The Function
 * @str: The String To Print It's Half
*/

void puts_half(char *str)
{
	int size = 0, i;

	while (str[size] != '\0')
		size++;

	size++;
	size = size / 2;

	for (i = size; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
