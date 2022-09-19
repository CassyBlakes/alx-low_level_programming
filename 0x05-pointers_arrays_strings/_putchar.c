#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: the charater to print
 *
 * Return: On success 1
 * On error: -1 is returned and the error is set approriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
