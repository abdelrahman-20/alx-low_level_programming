#include "main.h"

/**
 * _puts - Print A String
 * @str: The String To Print
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + '0');
		str++;
	}
	_putchar('\n');
}
