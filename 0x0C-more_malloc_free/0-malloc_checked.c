#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * Description: function that allocates memory using malloc.
 * @b: int b
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(sizeof(b));

	if (c == NULL)
	{
		exit(98);
	}

	return (c);
}
