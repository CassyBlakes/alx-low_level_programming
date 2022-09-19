#include "main.h"

/**
 *_puts - prints a string, followed by a new line
 *@str: strings to print
 *Return: strings
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[1] != '\0'; i++)
	{
		_putchar(str[1]);
	}
	_putchar('\n');

}
