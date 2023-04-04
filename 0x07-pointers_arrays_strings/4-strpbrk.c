#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: char to locate
 *
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
