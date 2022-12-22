#include "main.h"
/**
 * _strncat - catinates the strings
 * @dest: string destination
 * @src: string source
 * @n: the number where to be catinated
 * Return: Return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
