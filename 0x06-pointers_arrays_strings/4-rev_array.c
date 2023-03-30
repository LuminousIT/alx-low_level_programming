#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_array - Entry Point
 *
 * Description:  function that reverses the content of an array of integers.
 * @a: array of int.
 * @n: num of elements in array
 * Return: int (result)
 */
void reverse_array(int *a, int n)
{
	int nnew = n - 1;

	int counter = 0;

	int temp;

	while (counter < n / 2)
	{
		temp = a[counter];
		a[counter] = a[nnew];
		a[nnew] = temp;
		counter++;
		nnew--;
	}

}
