#include "main.h"
#include "string.h"

/**
 * _strncpy - Entry Point
 *
 * Description:  function that concatenates two strings.
 * @dest: initial str.
 * @src: source str
 * @n: number of bytes
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
