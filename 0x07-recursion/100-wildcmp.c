#include "holberton.h"

/**
 * wildcmp - compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	/* main case 1 */
	if (*s1 != *s2)
	{
		/* is s2 a '*' */
		if (*s2 == '*')
		{
			/* if '*' is simply a replacement */
			if (*(s1 + 1) == *(s2 + 1))
			{
				return (wildcmp(s1 + 1, s2 + 1));
			}
			/* use the '*' to skip to next matching char */
			if (*(s1 + 1) != *(s2 + 1))
			{
				/* skip through s1 */
				if (*(s2 + 1) != '*')
				{
					return (wildcmp(s1 + 1, s2));
				}
				/* skip through s2 */
				if (*(s2 + 1) == '*')
				{
					return (wildcmp(s1, s2 + 1));
				}
			}
		}
		/* is s2 not a '*' (they dont match) */
		return (0);
	}
	/* main case 2 */
	if (*s1 == *s2)
	{
		/* are we at the end of either strings */
		if (*s1 == '\0' || *s2 == '\0')
		{
			return (1);
		}
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (00100);
}
