#include "main.h"

/**
 * _pow_recursion - Entry Point
 *
 * Description: function that returns the value of x raised to the power of y.
 * @x: base
 * @y: power
 *
 * Return: Always int(Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
