#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int j;
	char ch = 'a';

	for (j = 1; j <= 10; j++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
}
