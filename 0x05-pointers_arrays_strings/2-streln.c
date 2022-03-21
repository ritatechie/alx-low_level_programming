#include<stdio.h>
#include "main.h"
/**
 * *_streln - returns the length of a string
 * @s: value to evaluate
 * Return: not
 */
int_streln(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
