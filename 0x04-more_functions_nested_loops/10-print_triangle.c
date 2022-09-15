#include "main.h"

/**
 *print_triangle - prints a triangle
 *@size: parameter
 *Return: return nothing
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - 1); j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
