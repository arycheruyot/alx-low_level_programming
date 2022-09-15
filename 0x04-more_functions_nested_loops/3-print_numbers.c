/**
 * print_numbers - prints 0123456789\n
 *
 * Return: void
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
