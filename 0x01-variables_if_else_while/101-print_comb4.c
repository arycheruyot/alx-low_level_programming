#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, n, m;

	for (i = 48; i < 58; i++)
	{
		for (n = 49; n < 58; n++)
		{
			for (m = 50; m < 58; m++)
			{
				if (m > n && n > i)
				{
					putchar(i);
					putchar(n);
					putchar(m);
					if (i != 55 || n != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
