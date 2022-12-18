#include "main.h"
/**
 * _abs: prints absolute value
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
