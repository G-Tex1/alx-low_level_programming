#include <unistd.h>
/**
 * _putchar - prints character
 * @c: accept character inputs
 */
int _putchar(char c);
{
	return (write 1, &c, 1);
}
