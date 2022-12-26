#include <stdio.h>
/**
 * main - prints single digit numbers
 * Return: returns 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	for (num = 9; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	return (0);
}
