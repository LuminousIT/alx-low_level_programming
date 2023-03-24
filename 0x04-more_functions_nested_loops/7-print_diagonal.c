#include "main.h"

/**
 * print_diagonal - Entry Point
 *
 * Description: function that draws a diagonal line in the terminal
 * @n: accepts int n
 * Return: void
 */
void print_diagonal(int n)
{
	int start = 0;

	while (start < n)
	{
		int i = 0;

		while (i < start)
		{
			_putchar(' ');
			i++;
		}
		if (start >= 0)
		{
			_putchar('\\');
			_putchar('\n');
			start++;
		} else
			break;
	}
	_putchar('\n');
}
