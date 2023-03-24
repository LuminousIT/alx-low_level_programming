#include "main.h"

/**
 * print_line - Entry Point
 *
 * Description: function that draws a straight line in the terminal
 * @n: accepts int n
 * Return: void
 */
void print_line(int n)
{
	if (n == 0)
	{
		_putchar('\n');
		return;
	}

	int start = 0;

	while (start < n)
	{
		_putchar('_');
		start++;
	}
	_putchar('\n');
}
