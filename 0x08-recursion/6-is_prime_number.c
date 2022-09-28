#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: prime number
 * Return: return value of n
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n < 0)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns 1 if the input integer
 * @n: number to check
 * @start: number to check from
 * Return: return value of n
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
