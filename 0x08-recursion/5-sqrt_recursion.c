#include "main.h"

/**
 * _checker - Checks the function _sqrt_recursion
 * @a: Integer
 * @b: Integer
 * Return: A checker for the above function
 */

int _checker(int a, int b)
{
	if (b == 0 || b == 1)
	{
		return (b);
	}

	else if ((a * a) < b)
	{
		return (_checker(a + 1, b));
	}
	else if ((a * a) == b)
	{
		return (a);
	}
	return (-1);

}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: int
 * Return: square root of an int
 */

int _sqrt_recursion(int n)
{
	int x;

	x = 0;

	if (x < 0)
	{
		return (-1);
	}
	else
	{
		return (_checker(x, n));
	}

}