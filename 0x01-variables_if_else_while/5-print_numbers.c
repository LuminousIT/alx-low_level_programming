#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: 'print 0-9'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int start = 0;

	while (start < 10)
	{
		printf("%d", start);
		start++;
	}
	printf("\n");
}
