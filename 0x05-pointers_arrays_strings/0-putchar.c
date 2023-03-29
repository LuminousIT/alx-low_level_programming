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
	char *str;
	int array[5];
	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;

	str = "01234567891";
	print_rev(str);
	puts2(str);
	puts_half(str);

	print_array(array, 5);

	return (0);
}
