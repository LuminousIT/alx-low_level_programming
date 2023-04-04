#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: char to locate
 *
 * Return: char.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
