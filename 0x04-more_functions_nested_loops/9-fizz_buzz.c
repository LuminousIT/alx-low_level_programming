#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Description: function to print fizzbuzz
 * Return: void
 */
int main(void)
{
	int start = 1;

	while (start <= 100)
	{
		if ((start % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((start % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((start % 3) == 0 && (start % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", start);
		start++;
	}
	printf("\n");

	return (0);
}
