#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * leet - replace vowel in code.
 * @n : accepts string of word
 * Return: return string
 */

char *leet(char *n)
{
	int i, a;

	char b[11] = "aAeEoOtTlL";
	char c[11] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		d = 1;
		for (a = 0; a <= 9; a++)
		{
			if (b[a] == n[i] && d == 1)
			{
				n[i] = c[a];
				d = 0;
			}
		}
	}

	return (n);
}


