#include <stdio.h>
#include "main.h"

/**
 *print_array - prints n elements of an array of integers
 *@a: arrays
 *@n: value of integer
 *Return: input
 */

void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);
		if (s != n - 1)
			printf(", ");
	}
	printf('\n');
}
