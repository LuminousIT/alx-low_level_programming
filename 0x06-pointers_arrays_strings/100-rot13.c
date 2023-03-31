#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * rot13 - rot13 cypher
 * @n : accepts string of word
 * Return: return string
 */

char *rot13(char *n)
{
	int i, a;

	int d;
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

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


