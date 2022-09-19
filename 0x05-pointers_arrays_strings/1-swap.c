#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: the integers to be swapped
 * @b: the integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
