#include "main.h"

/**
 * print_square - Entry Point
 *
 * Description: function that draws a square with # in the terminal
 * @size: accepts int size
 * Return: void
 */
void print_square(int size)
{
	int row = 0;
	
	if (size > 0)
	{
		while (row < size)
		{
			int col = 0;

			while (col < size)
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
			row++;
		}
	}
	else
		_putchar('\n');
}
