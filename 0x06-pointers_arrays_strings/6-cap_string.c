#include "main.h"
/**
 * cap_string - Capitalises the string
 * @n: stores the value inserted
 * Return: Returns n
 */

char *cap_string(char *n)
{
	int i;

	i = 0;
	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i - 1] == ' ' || n[i - 1] == '\t' || n[i - 1] == '\n' || n[i - 1] == ',' || n[i - 1] == ';' || n[i - 1] == '.' || n[i - 1] == '!' || n[i - 1] == '?' || n[i - 1] == '"' || n[i - 1] == '(' || n[i - 1] == ')' || n[i - 1] == '{' || n[i - 1] == '}' || i == 0)
		{
			n[i] = n[i] - 32;
		}
	}
	n[i] = '\0';
	return (n);
}
