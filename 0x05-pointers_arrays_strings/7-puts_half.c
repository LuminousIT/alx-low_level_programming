#include "main.h"
#include "string.h"

/**
 * puts_half - Entry Point
 *
 * Description: function that prints half of a string, followed by a new line.
 * @str: accepts pointer *str
 * Return: Always void (Success)
 */
void puts_half(char *str)
{
	int length = strlen(str);

	int counter;

	if (length % 2 == 0)
		counter = length / 2;
	else
		counter = ((length - 1) / 2) + 1;

	while (counter < length)
	{
		_putchar(*(str + counter));
		counter++;
	}
	_putchar('\n');
}
