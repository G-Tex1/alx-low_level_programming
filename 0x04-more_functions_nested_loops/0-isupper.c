#include "main.h"
/**
 * _isupper - upper case letters
 * @c: container for character
 * Return: Returns 1  or 0
 */
int _isupper(int c)
{
	if (c < 97)
	{
		return (1);
	}
	else if (c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
