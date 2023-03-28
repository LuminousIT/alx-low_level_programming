#include "main.h"

/**
 * swap_int - Entry Point
 *
 * Description: function that swaps the values of two integers
 * @a: accepts pointer a
 * @b: accepts pointer b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
