#include "function_pointers.h"

/**
 * print_name - Print name
 *
 * Description: function that prints a name
 * @name: char name
 * @f: function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
