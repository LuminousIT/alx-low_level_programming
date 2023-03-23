#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 *
 * Description: 'print alphabeth x10 using func'
 *
 * Return: Always void
 */

void print_alphabet_x10(void)
{
	int row = 1;

	while (row < 10)
	{
		char start = 'a';

		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
		row++;
	}
}
