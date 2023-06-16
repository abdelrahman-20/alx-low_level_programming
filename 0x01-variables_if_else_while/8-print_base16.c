#include <stdio.h>

/**
 * main - base 16
 *
 * Description: base 16
 *
 * Return: 0 is Success
*/

int main(void)
{
	int x = 0;
	char ch = 'a';

	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
