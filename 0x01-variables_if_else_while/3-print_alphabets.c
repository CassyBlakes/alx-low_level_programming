#include <stdio.h>

/**
 * main - print in lowercase and upppercase
 *
 * Description: print in lowercase and uppercase
 * using putchar
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
