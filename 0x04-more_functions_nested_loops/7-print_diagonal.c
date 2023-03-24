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
		if (start >= 0)
		{
			_putchar('\\');
			start++;
		} else
			break;
	}
	_putchar('\n');
}
