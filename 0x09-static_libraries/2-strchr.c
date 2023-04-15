#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: char to locate
 *
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
