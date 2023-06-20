#include "main.h"

/**
 * main - Entry Point of The Program
 *
 * Description: Printing
 *
 * Return: 0 is Success
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');

	return (0);
}
