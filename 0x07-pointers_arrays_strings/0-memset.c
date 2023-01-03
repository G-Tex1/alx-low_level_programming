#include "main.h"
/**
 * _memset - set of  mem
 * @s: first integer input
 * @n: another integer input
 * @b: character inputs
 * Return: returns character
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
