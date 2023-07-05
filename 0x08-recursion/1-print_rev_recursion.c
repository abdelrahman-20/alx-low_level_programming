#include "main.h"

/**
 * _print_rev_recursion - Printing Function in Reverse Order Recursevly
 * @s: The String To Print
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
