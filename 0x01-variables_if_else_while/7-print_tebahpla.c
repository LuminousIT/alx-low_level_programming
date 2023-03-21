#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: 'print all alphabeths in reverse lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char start = 'z';

	while (start >= 'a')
	{
		putchar(start);
		start--;
	}

	putchar('\n');

	return (0);
}

