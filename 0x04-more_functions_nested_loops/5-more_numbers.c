#include "main.h"

/**
 * more_numbers - Entry Point
 *
 * Description: 'function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line '
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int row = 0;

	while (row < 10)
	{
		int start = 0;

		while (start <= 14)
		{
			if (start >= 10)
				_putchar('0' + start / 10);
			_putchar('0' + start % 10);
			start++;
		}
		row++;
		_putchar('\n');
	}
}
