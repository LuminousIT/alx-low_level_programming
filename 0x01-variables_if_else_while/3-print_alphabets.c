#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: 'print all alphabeths in lowercase and uppercase'
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

	start = 'A';

	while (start <= 'Z')
	{
		putchar(start);
		start++;
	}

	putchar('\n');
	return (0);
}
