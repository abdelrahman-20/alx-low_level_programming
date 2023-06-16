#include <stdio.h>

/**
 * main - 1, 2, 3
 *
 * Description: 1, 2, 3
 *
 * Return: 0 is Success
*/

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');

	return (0);
}
