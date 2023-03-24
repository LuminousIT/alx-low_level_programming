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
	int start = 0;

	while (start < n)
	{
		if (start >= 0)
		{
			_putchar('_');
			start++;
		} else
			break;
	}
	_putchar('\n');
}
