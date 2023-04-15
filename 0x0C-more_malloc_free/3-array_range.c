#include "main.h"

/**
 * array_range -  function that creates an array of integers.
 *
 * @min: min
 * @max: max
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int i = 0, t;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (NULL);
	t = min;
	while (i < max - min)
	{
		ptr[i] = t;
		t++;
		i++;
	}
	return (ptr);
}
