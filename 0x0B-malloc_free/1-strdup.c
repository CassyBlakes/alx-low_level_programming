#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: copied string
 * Return: NULL if it fails and pointer if success
 */

char *_strdup(char *str)
{
	char *cp;
	int index, len;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	cp = malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		cp[index] = str[index];
	}
	cp[len] = '\0';

	return (cp);
}
