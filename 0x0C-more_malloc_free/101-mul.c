#include "main.h"

/**
 * _puts - A Function To Print String
 * @s: The String To Print
*/

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * _atoi - A Function To Convert String To Number
 * @s: The String To Convert
 * Return: The Converted Number
*/

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
			sign *= -1;
	}

	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (resp * sign);
}

/**
 * print_int - A Function To Print Intger
 * @n: The Number To Print
*/

void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, result;

	for (i = 0; n / div > 9; i++, div *= 10)
	;

	for (; div >= 1; n %= div, div /= 10)
	{
		result = n / div;
		_putchar('0' + result);
	}
}

/**
 * main - Main Function
 * @argc: Number of Arguments
 * @argv: Array of Parameters
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
