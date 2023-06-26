#include <unistd.h>
#include "main.h"

/**
 * _putchar - write char c to stdout
 * @c: The Char To Print
 *
 * Return: 1 is Success, -1 on Error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
