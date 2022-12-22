#include "main.h"
/**
 * _strncpy - catinates the strings
 * @dest: destination to be copied to
 * @src: source to copy from
 * @n: number to copy from
 * Return: Returns char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i < n; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
