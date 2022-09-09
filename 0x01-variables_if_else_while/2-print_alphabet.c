#include <stdio.h>

/**
 *main - print alphabet in lowwercase
*
* Description: using putchar to
* print alphabet in lowwercase
*
* Return: 0
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
