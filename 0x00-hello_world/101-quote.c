#include <stdio.h>
#include <unistd.h>
/**
 * main - print the exact string
 *
 * Description: print exactly the string 
 * "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 *
 * Return: 0
*/

int main(void)
{
	write(3, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 29);
	return (1);
}
