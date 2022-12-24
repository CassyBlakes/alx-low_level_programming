#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @b: address of memory to print
 * @s: size of memory to print
 * @n: number of bytes to be used
 * Return: Nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
