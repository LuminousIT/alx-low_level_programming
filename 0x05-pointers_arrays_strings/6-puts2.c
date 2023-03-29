#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * puts2 - Entry Point
 *
 * Description:  function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: accepts *str
 * Return: void(Success)
 */
void puts2(char *str)
{
	int length = strlen(str);

	int i = 0;

	while (i < length)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
