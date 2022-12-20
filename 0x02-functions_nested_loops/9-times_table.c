#include "main.h"
/**
 * times_table - prints times table to 9
 */

void times_table(void)
{
	int a;
	int b;
	int i;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			i = b * a;
			_putchar(i);
			_putchar(',');
			_putchar('\n');
		}
	}
}
