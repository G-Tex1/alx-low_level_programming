#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the values of an array seperated by comma
 * @a: a pointer containing integers
 * @n: another container holding n number of integers
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}