#include "main.h"
#include <stdio.h>
#include "ctype.h"

/**
 * cap_string - Entry Point
 *
 * Description:  function that capitalize
 * string to uppercase.
 * @n: string of chars
 * Return: int (result)
 */
char *cap_string(char *n)
{
	int counter = 0;

	while (n[counter] != '\0')
	{
		if ((isalpha(n[counter]) && (n[counter - 1] == ' ' ||
			n[counter - 1] == '.' || n[counter - 1] == '\n' || n[counter - 1] == ',')))
			n[counter] = (char) toupper(n[counter]);
		counter++;
	}

	return (n);
}

