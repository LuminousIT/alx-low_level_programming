#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: program that multiplies two numbers.
 * @argc: count of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int c = a * b;

		printf("%d\n", c);
		return (0);
	}
	printf("Error\n");
	return (1);
}
