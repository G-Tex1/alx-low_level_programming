#include "main.h"
/**
 * _abs -  prints absolute value
 * @n: prints integer
 * Return: Returns 1 or 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
		return (n);
	}
	else
	{
		_putchar(-n);
		return (-n);
	}
}
