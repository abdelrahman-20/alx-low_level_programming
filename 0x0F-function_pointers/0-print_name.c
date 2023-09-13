#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A Function To Print A Name
 * @name: The Name To Print
 * @f: The Pointer Function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
