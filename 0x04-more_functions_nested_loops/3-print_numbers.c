#include "main.h"

/**
 * print_numbers - Entry Point
 *
 * Description: return numnbers from 0-9
 * Return: void
 */
void print_numbers(void)
{
	int start = 0;

	while (start <= 9)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
