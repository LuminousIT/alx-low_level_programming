#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry Point
 *
 * Description:  program that adds positive numbers.
 * @argc: count of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (argc--)
	{
		if (isdigit(atoi(*argv++)))
		{
			sum += atoi(*argv);
		}
		else
		{
			printf("Error\n %d", atoi(*argv));
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
