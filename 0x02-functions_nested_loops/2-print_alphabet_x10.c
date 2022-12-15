#include "main.h"
/**
 * print_alphabet_x10 - prints 10x the alphabets followed by a new line
 */

void print_alphabet_x10()
{
	char la;
	int n;

	for (n=0; n<10; n++){
		for (la='a'; la<='z'; la++){
			_putchar(la);
		}
		_putchar('\n');
	}
}
