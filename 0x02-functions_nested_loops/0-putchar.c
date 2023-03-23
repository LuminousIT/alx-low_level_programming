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
	int r;

	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	print_alphabet();
	print_alphabet_x10();
	int answer = _islower(1);
	printf("this is the int %d", answer);
	
	_putchar('\n');
	int a = print_last_digit(98);
	_putchar('0' + a);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');

	return (0);
}
