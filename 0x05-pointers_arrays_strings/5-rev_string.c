#include "string.h"
#include "stdio.h"
#include "main.h"

/**
 * rev_string - Entry Point
 *
 * Description: function that prints a string, in reverse,
 * followed by a new line.
 * @s: accepts pointer str
 * Return: int length of s
 */
void rev_string(char *s)
{
	int length = strlen(s);

	char temp;

	int i = 0;

	while (i < length / 2)
	{
		temp = *(s + i);
		*(s + i) = *(s + length - 1 - i);
		*(s + length - 1 - i) = temp;
		i++;
	}
}
