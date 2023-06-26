#include "main.h"

/**
 * print_rev - Print String In Reverse Order
 * @s: The String To Print
*/

void print_rev(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	while (size--)
	{
		_putchar(s[size]);
	}
	_putchar('\n');
}
