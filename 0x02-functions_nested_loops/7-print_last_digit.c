#include "main.h"

/**
 * _print_last_digit - prints anumber last digit
 * @x: number is an integer
 * Return: last digit
 */
int _print_last_digit(int x)
{
	int l;

	l = x % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
	return (-l);
	}
	else
	{
	_putchar(l + 48);
	return (l);
	}
}
