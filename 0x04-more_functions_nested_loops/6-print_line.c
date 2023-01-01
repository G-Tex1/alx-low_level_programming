#include "main.h"

/**
 * print_line - prints line
 * @n: contains the integer
 */

void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('_');
		}
	}
	else if (n <= 0)
	{
	}
	_putchar('\n');
}
