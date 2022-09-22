#include "main.h"
/**
 * _strncpy - copies n bytes to destination string
 * @dest: destination string
 * @src: source string
 * @n: bytes to be copied
 * Return: a copy of a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
