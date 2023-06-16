#include <stdio.h>

/**
 * main - Combine 3
 *
 * Description: Combine 3
 *
 * Return: 0 is Success
*/

int main(void)
{
	int n1 = 0, n2, n3;

	while (n1 <= 9)
	{
		n2 = 0;
		while (n2 <= 9)
		{
			n3 = 0;
			while (n3 <= 9)
			{
				if (n1 != n2 && n1 < n2 && n2 != n3 && n2 < n3)
				{
					putchar(n1 + '0');
					putchar(n2 + '0');
					putchar(n3 + '0');

					if (n1 + n2 + n3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');

	return (0);
}
