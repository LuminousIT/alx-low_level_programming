#include "main.h"

/**
 * _islower - Entry Point
 *
 * Description: Returns 1 if c is lowercase
 *	Returns 0 otherwise
 * @c: accepts c as an int
 * Return: return 1 if lower, 0 otherwise
 */

int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	return (0);
}
