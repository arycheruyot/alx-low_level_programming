#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i, j, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = 0; j < len; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
