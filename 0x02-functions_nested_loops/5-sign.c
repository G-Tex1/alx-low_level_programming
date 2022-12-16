#include "main.h"
/**
 * print_sign - prints sign of values
 * Return: Returns 0 or 1
 * @n: prints the sign of the numbers
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
