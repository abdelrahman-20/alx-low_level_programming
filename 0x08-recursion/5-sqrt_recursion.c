#include "main.h"

/**
 * _sqrt_recursion - Square Functin in Recursion
 * @n: The Number To Get Its Root
 * @value: Potential Temp Root
 * Return: The Square Root Of n
*/

int square(int n, int value);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - A Square Function
 * @n: The Number To Get Its Square
 * @value: The Potential Root of n
 *
 * Return: The Root of n
*/

int square(int n, int value)
{
	if (value * value == n)
		return (value);
	else if (value * value < n)
		return (square(n, value + 1));
	else
		return (-1);
}
