#include "main.h"
#include <string.h>

/**
 * _memcpy -  function that copies memory area
 * @dest: dest
 * @src: src
 * @n: unsigned int
 *
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
