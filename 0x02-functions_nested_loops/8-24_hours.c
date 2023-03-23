#include "main.h"

/**
 * jack_bauer - Entry Point
 *
 * Description: return time of the day
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
		int j = 0;

		while (j < 60)
		{
			_putchar(i);
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
