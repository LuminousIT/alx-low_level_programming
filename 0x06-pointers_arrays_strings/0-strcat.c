#include "main.h"
#include "string.h"

/**
 * _strcat - Entry Point
 *
 * Description:  function that concatenates two strings.
 * @dest: initial str.
 * @src: source str
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
