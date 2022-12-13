#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints _putchar
 * Return: Return 0
 */

int _putchar(Char C)
{
	return (write(1, &C, 1));
}
