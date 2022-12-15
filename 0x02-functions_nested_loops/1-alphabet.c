#include "main.h"
/**
 * print_alphabet - Prints alphabets in lower case
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
		_putchar('\n');
	}
}
