#include "main.h"

/**
 * main - Entry point
 * write function that prints alphabets in lower case followed by a new line
 * Return: (0)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c)
	}
	_putchar('\n');
}
