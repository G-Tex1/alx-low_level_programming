#include "main.h"
/**
 * _isupper - upper case letters
 * @c: container for character
 * Return: Returns 1  or 0
 */
int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c == 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
