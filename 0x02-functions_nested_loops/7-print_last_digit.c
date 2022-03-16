#include "main.h"

/**
 * _print_last_digit - prints a last digit
 * @x: number is an integer
 * Return: last digit
 */
int _print_last_digit(int x)
{
	int y, e;

	y = x % 10;
	if (y < 0)
	{
		y = -y;
	}
	e = '0' + y;
	_putchar(e);
	return (y);
}
