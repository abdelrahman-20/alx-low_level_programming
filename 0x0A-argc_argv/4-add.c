#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main Function
 * @argc: Argc
 * @argv: Argv
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		c = argv[argc];

		if (*c < '0' || *c > '9')
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}