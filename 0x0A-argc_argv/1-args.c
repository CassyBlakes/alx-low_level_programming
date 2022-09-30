#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * Your program should print a number, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

