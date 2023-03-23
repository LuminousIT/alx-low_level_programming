#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry Point
 *
 * Description: prints all digits
 * @n: accepts n as an int
 * Return: int
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int start = n;

		while (start <= 98)
		{
			printf("%d, ", start);
			start++;
		}
	}
	else if (n > 98)
	{
		int start = n;

		while (start >= 98)
		{
			printf("%d, ", start);
			start--;
		}
	}
	else
	{
		printf("%d", n);
	}
}
