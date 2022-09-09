#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';
	char uc = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}
	putchar('\n');
	return (0);
}
