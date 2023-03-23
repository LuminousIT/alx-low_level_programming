#include "main.h"

/**
 * print_alphabet - Entry Point
 *
 * Description: 'print alphabeth using func'
 *
 * Return: Always void
 */

void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}

	_putchar('\n');
}
