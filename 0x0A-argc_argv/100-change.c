#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main Function
 * @argc: argc
 * @argv: argv
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i, no_cents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				no_cents += money / cents[i];
				money = money % cents[i];
				if (money == 0)
					break;
			}
		}
		printf("%d\n", no_cents);
	}
	return (0);
}
