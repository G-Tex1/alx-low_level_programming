#include "main.h"
/**
 * _puts - prints string
 * @str: container for string input
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
