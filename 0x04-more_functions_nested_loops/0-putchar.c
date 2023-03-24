#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Description: 'print _putchar'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	// print_most_numbers();
	more_numbers();
	print_line(5);
	print_line(-10);
	print_line(2);
	print_line(0);
	print_line(10);
	_putchar('\n');
	print_diagonal(2);
	print_diagonal(0);
	print_diagonal(10);
	print_diagonal(-4);
	print_diagonal(3);
	return (0);
}
