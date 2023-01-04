#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: character input
 * Return: return result
 */

int _strlen_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i] % 100);
	}
	return (s[i]);
}
