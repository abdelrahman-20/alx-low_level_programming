#include <stdio.h>

/**
 * main - Main Function
 * @argc: argc
 * @argv: argv
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
