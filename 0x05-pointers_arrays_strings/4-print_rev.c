#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 *
 * @s: string prameter to print
 *
 * Return: nothing
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
