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
			n[counter - 1] == '.' || n[counter - 1] == '\n' || n[counter - 1] == ','
			|| n[counter] == 32 || n[counter] == 46 || n[counter] == '\t' || n[counter] == '\n'
			|| n[counter] == 44 || n[counter] == 59 || n[counter] == '!' || n[counter] == '?'
			|| n[counter] == '(' || n[counter] == ')' || n[counter] == '{' || n[counter] == '}')))
			n[counter] = (char) toupper(n[counter]);
		counter++;
	}

	return (n);
}

