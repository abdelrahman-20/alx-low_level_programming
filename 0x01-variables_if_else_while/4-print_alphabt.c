#include <stdio.h>

/**
 * main - abc
 *
 * Description: abc
 *
 * Return: 0 is success
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			continue;

		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
