#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Return: Returns the number
 * @n: Contains value
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	_putchar (ld);
	return (ld);
}
