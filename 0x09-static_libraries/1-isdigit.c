#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for uppercase char
 *
 * @c: accepts int as param
 * Return: int 1 if true and 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	return (0);
}

