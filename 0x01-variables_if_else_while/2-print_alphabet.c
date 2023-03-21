#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: 'print all alphabeths in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		putchar(start);
		start++;
	}

	putchar('\n');

	return (0);
}
