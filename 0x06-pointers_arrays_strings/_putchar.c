#include <unistd.h>
/**
 * _putchar - prints out characters
 * @c: contains the character
 * Return: returns int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
