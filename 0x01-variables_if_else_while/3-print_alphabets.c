#include <stdio.h>
/**
 * main - prints upper and lower case alpha
 * Return: return 0
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}

	for (lc = 'A'; lc <= 'Z'; lc++)
	{
		putchar(lc);
	}

	putchar('\n');

	return (0);
}
