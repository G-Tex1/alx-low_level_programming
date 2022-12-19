#include "main.h"
/**
 * swap_int - swaps the integers
 * @a: represents integers
 * @b: represent integer b
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
