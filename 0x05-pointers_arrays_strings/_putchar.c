#include <unistd.h>
/**
 * _putchar - prints characters
 * @c: character inputs
 * return: returns an integer
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
