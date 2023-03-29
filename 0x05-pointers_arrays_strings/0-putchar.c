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
	str = "0123456789";
	print_rev(str);
	puts2(str);
	puts_half(str);
	return (0);
}
