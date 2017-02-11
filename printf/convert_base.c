#include <stdlib.h>
#include "holberton.h"

char *convert_base(unsigned int num, int base)
{
	char *newnum;
	int long quot;
	int long rem;
	int i;

	quot = num;
	newnum = malloc(sizeof(char) * 50);
	for (i = 0; quot != 0; i++)
	{
		rem = quot % base;
		quot /= base;
		if (base == 8)
		{
			newnum[i++] = rem;
		}
		else if (base == 16)
		{
			if (rem >= 10)
			{
				newnum[i++] = rem + 55;
			}
			newnum[i++] = rem + 48;
		}
	}
	return (newnum);
}
