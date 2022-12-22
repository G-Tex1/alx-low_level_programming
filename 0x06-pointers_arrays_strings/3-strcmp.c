#include "main.h"
/**
 * _strcmp - compares strings
 * @s1: hold string to be compared
 * @s2: holds the second string
 * Return: Returns the difference
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
