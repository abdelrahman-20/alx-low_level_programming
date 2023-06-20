#include "main.h"

/**
 *  print_last_digit - get the last digit of a number
 *  @x: the number we get the last digit from
 *
 *  Return: the last digit
*/

int print_last_digit(int x)
{
	int lastDigit;

	if (x < 0)
	{
		lastDigit = -1 * (x % 10);
	}
	else
	{
		lastDigit = x % 10;
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}
