#include "lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - A Function Executed Before Main Function
 * Return: Void
*/

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
