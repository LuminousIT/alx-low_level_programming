#include "main.h"
#include <stdio.h>
#include "ctype.h"

/**
 * string_toupper - Entry Point
 *
 * Description:  function that changes all
 * lowercase letters of a string to uppercase.
 * @n: string of chars
 * Return: int (result)
 */
char *string_toupper(char *n)
{
	int counter = 0;

	while (n[counter] != '\0')
	{
		n[counter] = (char) toupper(n[counter]);
		counter++;
	}

	return (n);
}
