#include <stdio.h>
#include "main.h"

/**
 *print_number - prints an integer
 *@n: the number to print
 *Return: returns nothing
 */

void print_number(int n)
{
	unsigned int i, j, count;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}
	j = 1;
	count = 1;
	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}
	for (count = 0; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + 48);
	}
}
