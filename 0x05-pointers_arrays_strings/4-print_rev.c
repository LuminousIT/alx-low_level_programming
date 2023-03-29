#include "string.h"
#include "stdio.h"
#include "main.h"

/**
 * print_rev - Entry Point
 *
 * Description: function that prints a string, in reverse,
 * followed by a new line.
 * @s: accepts pointer str
 * Return: int length of s
 */
void print_rev(char *s)
{
	int length = strlen(s);

	char temp;

	for (int i = 0; i < length / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + length - 1 - i);
		*(s + length - 1 - i) = temp;
	}
}
