#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: program that prints all arguments it receives.
 * @argc: count of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
