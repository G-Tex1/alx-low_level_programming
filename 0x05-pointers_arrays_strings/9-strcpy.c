#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: contains the destination
 * @src: container of string
 * Return: returns character
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
