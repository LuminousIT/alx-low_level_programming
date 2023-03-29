#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry Point
 *
 * Description: function that prints n elements of an
 * array of integers, followed by a new line.
 *
 * Return: Always void(Success)
 */
void print_array(int *a, int n)
{
	int counter = 0;

	while (counter < n)
	{
		printf("%2d", *(a + counter));
		if (counter != (n - 1))
			printf(", ");
		counter++;
	}
	_putchar('\n');
}
