#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * Description: int_index returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 * @array: array to be executed
 * @size: size of array
 * @cmp: function
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	while (index < size)
	{
		if (cmp(array[index]) != 0)
			return (index);
		index++;
	}
	return (-1);
}
