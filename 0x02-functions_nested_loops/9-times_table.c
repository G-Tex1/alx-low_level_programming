#include "main.h"
/**
 * times_table - prints times table to 9
 */

void times_table(void)
{
	int a;
	int b;
	int i;

	while (a <= 9)
	{
		for (b = 0; b <= 9; b++)
		{
			i = a * b;
			_putchar(i);
		}
		a++;
	}
}
