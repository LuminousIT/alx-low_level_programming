#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase char
 *
 * @c: accepts int as param
 * Return: int 1 if true and 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	return (0);
}
