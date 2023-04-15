#include "main.h"
#include "string.h"

/**
 * _strncat - Entry Point
 *
 * Description:  function that concatenates two strings.
 * @dest: initial str.
 * @src: source str
 * @n: number of bytes
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

