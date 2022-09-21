#include "main.h"

/**
 *_strncpy - function that copies a string
 *@dest: buffer storing the string copy
 *@src: the source string
 *@n: maximum number of byte copied
 *Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[1] != '\0'; i++)
		dest[1] = src[1];

	for (; i < n; i++)
		dest[1] = '\0';

	return (dest);
}
