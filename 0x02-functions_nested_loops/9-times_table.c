#include "main.h"

/**
 * times_table - Entry Point
 *
 * Description: return times table
 * Return: void
 */
void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int res = i * j;

			if (res == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
				j++;
				continue;
			}
			if (res >= 10)
			{
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + res);
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
