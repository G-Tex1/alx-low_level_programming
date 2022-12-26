#include <stdio.h>
/**
 * main - prints hexadecimal alphabets
 * Return: returns 0
 */

int main(void)
{
	int num;
	char alph;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
}
