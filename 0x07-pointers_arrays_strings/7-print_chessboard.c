#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -  function that prints the chessboard.
 * @a: array
 *
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int i, j = 0;

	int col = sizeof(a[0]);

	int total = sizeof(a); /* row * col */

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
