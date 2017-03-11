#include "holberton.h"

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

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

int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;

	return (palindrome_iter(s, i));
}
