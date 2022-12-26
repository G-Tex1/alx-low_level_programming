#include <stdio.h>
/**
 * main - prints number combination
 * Return: returns 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 153; num++)
	{
		if (num != 11 ||
				num != 22 ||
				num != 33 ||
				num != 44 ||
				num != 55 ||
				num != 66 ||
				num != 77 ||
				num != 88 ||
				num != 99)
		{
			putchar((num % 16) + '0');
			putchar(',');
			putchar('\n');
		}
		for (num = 153; num <= 153; num++)
		{
			putchar((num % 16) + '0');
		}
	}
	putchar('\n');
	return (0);
}
