#include "main.h"
/**
 * cap_string - Capitalises the string
 * @n: stores the value inserted
 * Return: Returns n
 */

char *cap_string(char *n)
{
	int i = 0;

	while (n[i])
	{
		while (!(n[i] >= 97))
			i++;
		if (n[i - 1] == ' ' ||
				n[i - 1] == '\t' ||
				n[i - 1] == '\n' ||
				n[i - 1] == ',' ||
				n[i - 1] == ';' ||
				n[i - 1] == '.' ||
				n[i - 1] == '!' ||
				n[i - 1] == '?' ||
				n[i - 1] == '"' ||
				n[i - 1] == '(' ||
				n[i - 1] == ')' ||
				n[i - 1] == '{' ||
			       n[i - 1] == '}' ||
			       i == 0)
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
