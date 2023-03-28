#include "string.h"
#include "main.h"

/**
 * _strlen - Entry Point
 *
 * Description: function that returns the length of a string.
 * @s: accepts pointer s
 * Return: int length of s
 */
int _strlen(char *s)
{
	int result = strlen(*s);

	return (result);
}
