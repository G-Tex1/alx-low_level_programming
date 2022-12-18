#include "main.h"
/**
 * _abs -  prints absolute value
 * @n: prints integer
 * Return: Returns 1 or 0
 */

int _abs(int n)
{
	int n;

	if (n >= 0)
	{
		_putchar(n);
		return (1);
	}
	else
	{
		_putchar(-n);
		return (0);
	}
}
