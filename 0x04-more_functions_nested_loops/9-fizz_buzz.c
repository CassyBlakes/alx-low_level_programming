#include "main.h"
#include <stdio.h>

/**
 *main - prints the numbers from 1 to 100
 *for multiples of three print Fizz
 *for multiples of five print Buzz
 *multiples of three and five print FizzBuzz
 *Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)

			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
