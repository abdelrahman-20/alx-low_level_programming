#include "main.h"

/**
 * print_binary - A Function To Print Number In Binary Form
 * @n: The Nubmer To Print
*/

void print_binary(unsigned long int n)
{
	int printed = 0;
	int bitCount = sizeof(n) * 8;

	while (bitCount)
	{
		if (n & 1UL << --bitCount)
		{
			putchar('1');
			printed++;
		}
		else if (printed)
			putchar('0');
	}
	if (!printed)
		putchar('0');
}
