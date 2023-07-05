#include "main.h"

/**
 * is_palindrome - The Main Function
 * @s: The String To Check
 * @start: Start Index
 * @end: End Index
 * Return: 0 or 1
*/

int check(char *s, int start, int end);
int get_size(char *s);
int is_palindrome(char *s)
{
	int size = get_size(s);

	return (check(s, 0, size - 1));
}

/**
 * get_size - A Function To Get The Size of String s
 * @s: The String
 * Return: The Size of The String
*/

int get_size(char *s)
{
	int n = 0;

	if (*s != '\0')
		n += 1 + get_size(s + 1);

	return (n);
}

/**
 * check - A Function To Check if The String Is Palindrome
 * @s: The String
 * @start: Start Index
 * @end: End Index
 * Return: 0 or 1
*/

int check(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1));
}
