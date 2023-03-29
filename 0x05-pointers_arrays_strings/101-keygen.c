#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Description: generate random keygen
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int num = rand();

	srand(time(0));

	printf("%i\n", num);

	return (0);
}
