#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: 'print arguement count'
 * @argc: count of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
