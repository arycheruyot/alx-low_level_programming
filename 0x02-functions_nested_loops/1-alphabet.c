#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
	}
	_putchar('\n');
}
