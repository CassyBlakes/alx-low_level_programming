#include <stdio.h>

/**
 *main - entry point
 *
 *Description: prints all possible combinations
 *of single-digit numbers
 *Return: 0
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}