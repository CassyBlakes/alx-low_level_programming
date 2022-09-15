#include <stdio.h>
#include "main.h"

/**
 *print_number - prints an integer
 *@n: the number to print
 *Return: returns nothing
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (n > 9)
	{
print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
