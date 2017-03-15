#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: A string.
 *
 * Return: The length of the string (int).
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

/**
 * palindrome_iter - returns 1 if a string is a palindrome and 0 if not.
 * @s: A string.
 * @i: Length of the string used to compare characters from the string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int palindrome_iter(char *s, int i)
{
	if (i < 1)
	{
		return (1);
	}

	if (*s != *(s + i))
	{
		return (0);
	}

	return (palindrome_iter(s + 1, i - 2));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: A string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;

	return (palindrome_iter(s, i));
}
