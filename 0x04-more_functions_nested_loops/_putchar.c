#include <unistd.h>
/**
 * _putchar - prints characters
 * @c: contains variables
 * Return: Returns write
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
