#include "main.h"
/**
 * _abs -  prints absolute value
 * @int: prints integer
 * Return: Returns 1 or 0
 */

int _abs(int)
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
