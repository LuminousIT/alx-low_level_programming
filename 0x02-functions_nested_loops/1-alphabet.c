#include "main.h"

/**
 * main - Entry Point
 *
 * Description: 'print alphabeth using func'
 *
 * Return: Always 0 (Success)
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
