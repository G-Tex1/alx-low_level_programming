#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: integer number of times
 */

void print_diagonal(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
		}
	}
	else if (n <= 0)
	{
	}
	_putchar('\n');
}
