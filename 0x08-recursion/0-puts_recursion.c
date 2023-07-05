#include "main.h"

/**
 * _puts_recursion - Recursive Function
 * @s: The String To Print In Function
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
