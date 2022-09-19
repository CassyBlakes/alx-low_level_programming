#include "main.h"

/**
 *swap_int - swaps the values of two integer
 *@a: int 1
 *@b: int 2
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int des;

	des = *a;
	*a = *b;
	*b = des;

}

