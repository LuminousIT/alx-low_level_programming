#include <stdlib.h>
#include "main.h"

int _abs(int);
/**
 * print_last_digit - Entry Point
 *
 * Description: return last digit of any int
 * @n: accepts n as an int
 * Return: int | last digit
 */
int print_last_digit(int n)
{
	int answer = _abs(n % 10);

	return (answer);
}

int _abs(int n)
{
	return (abs(n));
}
