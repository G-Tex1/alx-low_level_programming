#include "main.h"
/**
 * _puts_recursion - attaches string and newline
 * @s: holds string output
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
