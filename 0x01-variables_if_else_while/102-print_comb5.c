#include <stdio.h>

/**
 * main - Hard Combination
 *
 * Description: Hard Combination
 *
 * Return: 0 is Success
*/

int main(void)
{
	int n1 = 0, n2;

	while (n1 <= 99)
	{
		n2 = n1;
		while (n2 <= 99)
		{
			if (n2 != n1)
			{
				putchar((n1 / 10) + '0');
				putchar((n1 % 10) + '0');
				putchar(' ');
				putchar((n2 / 10) + '0');
				putchar((n2 % 10) + '0');

				if (n1 != 98 || n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');

	return (0);
}
