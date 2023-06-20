#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Printing
 *
 * Return: 0 Is Success
*/

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
	}
	putchar('\n');
}
