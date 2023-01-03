#include <stdio.h>
/**
 * main - prints numbers mixed with words
 * Return: returns 0
 */

int main(void)
{
	int num;
	char i = Fizz;
	char j = Buzz;
	char k = FizzBuzz;

	for (num = 0; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			num = i;
		}
		else if (num % 5 == 0)
		{
			num = j;
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			num = k;
		}
		printf("%d \n", num);
	}
	return (0);
}
