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

	int d;
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			if (b[a] == n[i])
			{
				n[i] = c[a];
			}
		}
	}

	return (n);
}

