#include "main.h"

/**
 * print_most_numbers - Entry Point
 *
 * Description: 'print all numbers from 0-9 except 2 and 4'
 *
 * Return: Always void (Success)
 */
void print_most_numbers(void)
{
	int start = 0;

	while (start <= 9)
	{
		if (start != 2 && start != 4)
		{
			_putchar(start);
		}
		start++;
	}

	_putchar('\n');
}
