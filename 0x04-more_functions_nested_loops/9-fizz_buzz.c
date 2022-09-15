#include <stdio.h>
#include "main.h"
/**
 * main - print numbers from 0 to 100
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("Fizzbuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf('\n');
	return (0);
}
