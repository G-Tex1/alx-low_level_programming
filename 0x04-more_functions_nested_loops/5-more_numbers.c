#include "main.h"
/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((j % 100) + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
