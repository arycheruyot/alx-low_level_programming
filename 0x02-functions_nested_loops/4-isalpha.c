#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 * Return: i1 success, 0 otherwise
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
