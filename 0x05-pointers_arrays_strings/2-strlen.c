#include "main.h"
/**
 * _strlen - measures the length of string
 * @s: imputed character to be measured
 * Return: Returns the length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
