#include "main.h"
/**
 * _print_rev_recursion - prints the reverse of a string
 * @s: string input
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s - 1);
}
