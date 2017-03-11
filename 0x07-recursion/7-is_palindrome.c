#include "holberton.h"

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

int palindrome_iter(char *s, char *z,  int i)
{
	if (i == 0)
	{
		return (1);
	}

	if (*s != *(z + i))
	{
		return (0);
	}

	return (palindrome_iter(s + 1, z, i - 1));
}

int is_palindrome(char *s)
{
	int i;
	char *z;

	z = s;
	i = _strlen_recursion(s) - 1;

	return (palindrome_iter(s, z, i));
}
