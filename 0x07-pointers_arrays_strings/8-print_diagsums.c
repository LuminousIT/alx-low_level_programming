#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: array
 * @size: size of array
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{	int i, rsum, lsum = 0;

	for (i = 0; i < size; i++)
	{
		rsum += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		lsum += a[i];
		a -= size;
	}
	printf("%d, %d\n", rsum, lsum);
}
