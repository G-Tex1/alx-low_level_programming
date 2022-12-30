#include "main.h"
/**
 * _isdigit - check if input is digit
 * @c: takes in input
 * Return: returns 1 0r 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
