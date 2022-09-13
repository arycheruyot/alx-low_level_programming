#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int j = 1;
	char ch = 'a';

	while (j <= 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		j++;
		_putchar('\n');
	}
}
