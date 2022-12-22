#include "main.h"
/**
 * reverse_array - reverses the array
 * @a: Contains the input
 * @n: Takes in integer
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
