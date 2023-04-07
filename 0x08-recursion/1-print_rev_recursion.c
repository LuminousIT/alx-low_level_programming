#include "main.h"

/**
 * _print_rev_recursion - Entry Point
 *
 * Description:  function that prints a string in reverse.
 * @s: string
 *
 * Return: Always void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
