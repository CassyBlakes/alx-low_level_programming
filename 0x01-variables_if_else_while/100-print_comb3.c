#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: prints all possible
 *different combinations of three digits
 *Return: 0
 */

int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56 || j < 57)
			{
				putchar(',');
				putchar(' ');
			}
			j++
		}
		i++
	}
	putchar('\n');
	return (0);

}
