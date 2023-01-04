#include <unistd.h>
/**
 * _putchar - prints characters
 * @c: collects character inputs
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
