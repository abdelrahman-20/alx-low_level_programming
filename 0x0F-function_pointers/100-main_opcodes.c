#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main Function of Program
 * @argc: The Number of Arguments
 * @argv: The Array of Arguments
 *
 * Return: 0 If Success
*/

int main(int argc, char *argv[])
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
		printf("Error\n"), exit(1);

	b = atoi(argv[1]);
	if (b < 0)
		printf("Error\n"), exit(0);

	while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");


	return (0);
}
