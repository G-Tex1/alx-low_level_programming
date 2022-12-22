#include "main.h"
/**
 * string_toupper - Converts to upper case
 * @n: Holds the character
 * Return: return n
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	for (i = 0; n[i] != 0; i++)
	{
		if (n[i] >= 97)
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
