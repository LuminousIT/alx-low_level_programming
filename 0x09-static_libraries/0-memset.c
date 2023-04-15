#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: char
 * @b: char
 * @n: unsigned int
 *
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
