#include "main.h"
/**
 * times_table - prints times table to 9
 */

void times_table(void)
{
	int num1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int num2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int c;

	while (c <= 9)
	{
		c = num1*num2;
		_putchar(c);
		_putchar(',');
		_putchar('\n');

		c++;
	}
}
