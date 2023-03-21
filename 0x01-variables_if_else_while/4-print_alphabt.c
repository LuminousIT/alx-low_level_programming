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
		if (start != 'e' && start != 'q')
		{
			putchar(start);
		}
		start++;
	}

	putchar('\n');

	return (0);
}

