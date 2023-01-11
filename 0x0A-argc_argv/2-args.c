#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints out all arguments
 * @argv: prints arguments
 * @argc: counts arguments
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
