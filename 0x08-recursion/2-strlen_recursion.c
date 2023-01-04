#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: character input
 * Return: return result
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s[i] != '\0')
	{
		_putchar(s[i] % 100);
	}
	_strlen_recursion(*s + 1);
	return (*s[i]);
}
