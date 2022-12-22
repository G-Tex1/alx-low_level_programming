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

	i = 0;
	while (i < n && dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
