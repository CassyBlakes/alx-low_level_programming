#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 *n from 00:00 to 23:59
 * mins loop convert mins
 *hour loop converts hour and resets mins
 *Return: 0
 */

void jack_bauer(void)
{
	int a, b, c, d;
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			a = (i / 10) + '0';

			b = (i % 10) + '0';

			c = (j / 10) + '0';

			d = (j % 10) + '0';

			_putchar(a);

			_putchar(b);

			_putchar(':');

			_putchar(c);

			_putchar(d);
			
			_putchar('\n');


		}
	}
}

