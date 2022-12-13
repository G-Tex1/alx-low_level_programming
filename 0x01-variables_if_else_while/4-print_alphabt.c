#include <stdio.h>
/**
 * main - print alpha except q and e
 * Return: return 0
 */
int main(void)
{
	int lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'q' && lc != 'e')
			putchar(lc);
	}

	putchar('\n');
	return (0);
}
